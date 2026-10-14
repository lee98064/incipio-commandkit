#!/usr/bin/env python3
"""Actual flashrom dummy backend, not a mocked writer. No SPI hardware."""
import argparse
import hashlib
import json
import subprocess
import tempfile
from pathlib import Path

START, END, SIZE = 0x130000, 0x3C0000, 0x800000
ROOT = Path(__file__).resolve().parents[1]


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--flashrom", required=True)
    parser.add_argument("--docker-image", help="Run the Linux flashrom in this container")
    parser.add_argument("--output", type=Path)
    args = parser.parse_args()
    with tempfile.TemporaryDirectory(prefix="commandkit-dummy-") as name:
        folder = Path(name)
        before = bytes(range(256)) * (SIZE // 256)
        goal = before[:START] + b"\xa5" * (END - START) + before[END:]
        (folder / "chip.bin").write_bytes(before)
        (folder / "target.bin").write_bytes(goal)
        (folder / "restore.bin").write_bytes(before)
        (folder / "write.layout").write_text("00130000:003bffff bank1_rootfs\n")
        prefix = (["docker", "run", "--rm", "--network", "none", "-v", str(ROOT) + ":/repo:ro",
                   "-v", str(folder) + ":/data", args.docker_image, args.flashrom]
                  if args.docker_image else [args.flashrom])
        directory = Path("/data") if args.docker_image else folder
        commands = []
        def run(rest):
            argv = [*prefix, "-p", "dummy:emulate=MX25L6436,image=" + str(directory / "chip.bin"),
                    "-c", "MX25L6436E/MX25L6445E/MX25L6465E", *map(str, rest)]
            result = subprocess.run(argv, capture_output=True, text=True, timeout=60)
            if result.returncode:
                raise RuntimeError(result.stdout[-1500:] + result.stderr[-1500:])
            commands.append({"operation": rest[0], "returncode": result.returncode})
        run(["--layout", directory / "write.layout", "--include", "bank1_rootfs", "-w", directory / "target.bin"])
        run(["-r", directory / "readback.bin"])
        after = (folder / "readback.bin").read_bytes()
        assert after == goal and after[:START] == before[:START] and after[END:] == before[END:]
        run(["--layout", directory / "write.layout", "--include", "bank1_rootfs", "-w", directory / "restore.bin"])
        run(["-r", directory / "restored.bin"])
        assert (folder / "restored.bin").read_bytes() == before
        report = {"status": "pass", "backend": "flashrom v1.8.0 dummy, emulated 8 MiB Macronix SPI",
                  "checks": ["actual layout/include write", "independent full readback equals target",
                             "all protected bytes unchanged", "actual region restore equals original"],
                  "write_range": [START, END], "physical_device_access": False,
                  "limitation": "dummy erase/program model is not GD25Q64 hardware or electrical validation",
                  "commands": commands, "target_sha256": hashlib.sha256(goal).hexdigest()}
        if args.output:
            args.output.write_text(json.dumps(report, indent=2) + "\n")
        print(json.dumps(report, indent=2))


if __name__ == "__main__":
    main()
