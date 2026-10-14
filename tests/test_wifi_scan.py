#!/usr/bin/env python3
"""Run the shipped MIPS parser on synthetic vendor records, never RF."""
import argparse
import hashlib
import json
import struct
import subprocess
import tempfile
from pathlib import Path


def row(name, signal=70, channel=6, security=0x44000000, privacy=True, length=None, cap=None):
    name = name.encode() if isinstance(name, str) else name
    data = bytearray(172)
    data[:6] = b"\x02\x00\x00\x00\x00\x01"
    data[6:6 + min(32, len(name))] = name[:32]
    struct.pack_into(">H", data, 44, len(name) if length is None else length)
    struct.pack_into(">I", data, 96, security)
    struct.pack_into(">H", data, 106, cap if cap is not None else 1 | (16 if privacy else 0))
    data[108], data[126] = channel, signal
    return bytes(data)


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--binary", type=Path, required=True)
    parser.add_argument("--docker-image", default="incipio-public-build:v0.1.0-preview")
    parser.add_argument("--output", type=Path)
    args = parser.parse_args()
    checks = []
    with tempfile.TemporaryDirectory(prefix="commandkit-scan-") as name:
        folder = Path(name)
        fixture_index = 0
        def execute(data):
            nonlocal fixture_index
            # Unique filenames avoid stale truncate/size caches in macOS bind mounts.
            filename = "scan-" + str(fixture_index) + ".bin"
            fixture_index += 1
            (folder / filename).write_bytes(data)
            return subprocess.run(["docker", "run", "--rm", "--network", "none",
                "-v", str(args.binary.resolve()) + ":/parser:ro", "-v", str(folder) + ":/fixture:ro",
                args.docker_image, "qemu-mips", "/parser", "--fixture", "/fixture/" + filename],
                capture_output=True, timeout=15)
        records = [row("Lab Network", 41), row("Lab Network", 90),
            row("訪客 Wi-Fi", 60, security=0, privacy=False), row('Quotes " \\ & <b>', 80),
            row("Enterprise", 30, security=0x24000000), row("Legacy WEP", 20, security=0),
            row("Legacy WPA", 25, security=0x4400), row("5 GHz", 99, channel=36),
            row("", 99), row(b"\xffinvalid", 99), row("Control\nbyte", 99),
            row("CommandKit-Setup-ABCDEF", 100), row("CommandKit-Setup-123456", 100),
            row("Too long", length=33), row("Ad-hoc", cap=2), row("Mixed WPA2", 200, security=0x45004400)]
        result = execute(bytes([len(records), 0, 0, 0]) + b"".join(records))
        assert result.returncode == 0
        networks = json.loads(result.stdout)["networks"]
        assert [x["ssid"] for x in networks] == ["Mixed WPA2", "Lab Network", 'Quotes " \\ & <b>',
                                                "訪客 Wi-Fi", "Enterprise", "Legacy WPA", "Legacy WEP"]
        assert networks[0]["signal"] == 100 and networks[1]["signal"] == 90
        assert networks[0]["security"] == networks[1]["security"] == "wpa2"
        assert networks[3]["security"] == "open"
        assert all(x["security"] == "unsupported" for x in networks[4:])
        checks += ["BE 172-byte records", "duplicate/signal/security classification",
                   "UTF-8 and JSON escaping", "all generic setup AP suffixes omitted",
                   "hidden/invalid/5GHz/ad-hoc records omitted"]
        for malformed in (b"\xff\0\0\0", b"\x41\0\0\0", b"\x01\0\0\0" + row("Truncated")[:-1], b"\0\0"):
            result = execute(malformed)
            assert result.returncode != 0 and not result.stdout
        assert json.loads(execute(b"\0\0\0\0").stdout)["networks"] == []
        result = execute(b"\x40\0\0\0" + b"".join(row("Network " + str(i)) for i in range(64)))
        assert result.returncode == 0 and len(json.loads(result.stdout)["networks"]) == 64 and len(result.stdout) < 16384
        checks += ["malformed buffers fail closed", "empty and 64-network bounds"]
    report = {"status": "pass", "checks": checks, "binary_sha256": hashlib.sha256(args.binary.read_bytes()).hexdigest(),
              "environment": "actual MIPS ELF, qemu-user, synthetic site-survey buffers", "hardware_RF_scan": False}
    if args.output:
        args.output.write_text(json.dumps(report, indent=2) + "\n")
    print(json.dumps(report, indent=2))


if __name__ == "__main__":
    main()
