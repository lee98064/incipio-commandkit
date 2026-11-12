#!/usr/bin/env python3
"""Rebuild local service sources, then assemble credential-free release images."""
import argparse
import json
import os
import re
import shutil
import subprocess
import struct
from pathlib import Path
from fwlib import (START, END, SIZE, BUDGET, SECRET_FILES, require, sha, rootfs_check,
                   compatibility, image_checks, read_file, repack, atomic_write, write_json, file_inventory)

REPO = Path(__file__).resolve().parents[1]
FLAGS = ["--target=mips-unknown-linux-gnu", "-march=mips1", "-mabi=32", "-msoft-float",
         "-mno-abicalls", "-fno-pic", "-fno-pie", "-G0", "-Os", "-ffreestanding", "-fno-builtin",
         "-fno-stack-protector", "-ffunction-sections", "-fdata-sections", "-Wall", "-Wextra",
         "-Werror", "-Wno-unused-function"]


def llvm_tool(name):
    prefix = os.environ.get("LLVM_BIN")
    paths = ([Path(prefix) / name] if prefix else []) + [
        Path("/opt/homebrew/opt/llvm/bin") / name, Path("/opt/homebrew/opt/lld/bin") / name]
    for path in paths:
        if path.is_file():
            return str(path)
    found = shutil.which(name)
    require(found, "找不到 " + name)
    return found


def services(variant, output):
    source = REPO / "firmware" / variant / "src"
    shared = REPO / "firmware/matter/src"
    output.mkdir(parents=True, exist_ok=True)
    if variant == "matter":
        before, rest = (source / "setup/portal-device.html").read_text().split("{{TOKEN}}")
        middle, after = rest.split("{{MATTER_MANUAL}}")
        text = "/* Generated: public template, no credential values. */\n"
        for name, value in (("portal_before", before), ("portal_middle", middle), ("portal_after", after)):
            text += "static const char " + name + "[] = " + json.dumps(value, ensure_ascii=False) + ";\n"
        (source / "setup/portal-device-page.h").write_text(text)
    for folder in (source, shared) if variant == "exec-test" else (source,):
        script = folder / "setup/portal-scan.js"
        if script.is_file():
            (folder / "setup/portal-scan-script.h").write_text(
                "/* Generated public script. */\nstatic const char portal_scan_script[] = " +
                json.dumps(script.read_text(), ensure_ascii=False) + ";\n")
    targets = ({"matter-diag": "matter_diag_relay.c", "ck-setupd": "setup/setupd-device.c",
                "ck-ram-probe": "setup/ram_runner.c", "ck-wifiscan": "setup/wifiscan.c",
                "ck-lease": "setup/lease.c"} if variant == "matter" else
               {"exec-diag": "matter_diag.c", "exec-test-runner": "setup/exec_runner.c",
                "ck-setupd": "setup/setupd-test.c"})
    subprocess.run([llvm_tool("clang"), *FLAGS, "-c", source / "linux_o32.S", "-o", output / "linux_o32.o"], check=True)
    for binary, filename in targets.items():
        subprocess.run([llvm_tool("clang"), *FLAGS, "-c", source / filename, "-o", output / (binary + ".o")], check=True)
        subprocess.run([llvm_tool("ld.lld"), "-m", "elf32btsmip", "--no-undefined", "--gc-sections",
                        "--build-id=none", "-T", source / "diag.ld", output / (binary + ".o"),
                        output / "linux_o32.o", "-o", output / binary], check=True)
        asm = subprocess.check_output([llvm_tool("llvm-objdump"), "-d", output / binary], text=True)
        context = ""
        for line in asm.splitlines():
            match = re.search(r"<([^>]+)>:", line)
            if match:
                context = match.group(1)
            if re.search(r"\s(ll|sc|sync|rdhwr)\s", line):
                require(context in ("probe_llsc", "probe_tls", "probe_sync"), "未隔離的新 ISA 指令")
            require(not re.search(r"\s(lwl|lwr|swl|swr|lwc1|swc1|ldc1|sdc1|pref)\s", line),
                    "不支援的指令：" + binary)
        os.chmod(output / binary, 0o755)
    write_json(output / "services.json", {"status": "pass", "variant": variant,
               "binaries": {name: sha((output / name).read_bytes()) for name in targets}}, overwrite=True)
    return output


def assemble(variant, backup, binaries, output, template_manifest=None):
    """Input: user's compatible backup and their rebuilt binaries; no old research layout."""
    before = backup.read_bytes()
    platform = json.loads((REPO / "third_party/platform.json").read_text())
    if template_manifest:
        from fwlib import load_release
        vendor_root, base_meta = load_release(backup, template_manifest)
        require(base_meta["compatibility"] == platform, "公開基底平台不符")
        base_compatibility = base_meta["compatibility"]
    else:
        image_checks(before)
        require(compatibility(before) == platform,
                "此預覽版限定已驗證的 10219 kernel／Bank 2；基底不相容")
        vendor_root = before[0x530000:0x7E0000]
        base_compatibility = compatibility(before)
    source = REPO / "firmware" / variant / "src"
    # Both images use the 10219 vendor rootfs from Bank 2 with the matching V2 kernel.
    rc = read_file(vendor_root, "etc/init.d/rcS").decode()
    require((rc.count("wfaudio &") == 1 and rc.count("\nhomekitserver\n") == 1) or
            (template_manifest and rc.count("/bin/ck-setup-start &") == 1), "startup 結構不符")
    rc = rc.replace("wfaudio &", "/bin/ck-setup-start &").replace("hostname rlx-linux", "hostname CommandKit-Outlet")
    rc = rc.replace("\nhomekitserver\n", "\n# HomeKit disabled: current test service owns the MCU.\n")
    additions = {"etc/init.d/rcS": (b"", 0o755)}
    def add(dest, data, mode=0o755):
        additions[dest] = (data, mode)
    if variant == "matter":
        built = json.loads((binaries / "matter-build.json").read_text())
        version = json.loads((REPO / "version.json").read_text())
        require(built["software_version"] == version["software_version"] and
                not built["test_backend"] and built["binary_sha256"] == sha((binaries / "matterd-test").read_bytes()),
                "Matter 執行檔版本不符、已修改或是測試 backend；請重建正式目標")
        if "/bin/matter-diag-start &" not in rc:
            rc += "\n/bin/matter-diag-start &\n/bin/matter-test-start &\n"
        for name in ("matterd-test", "matter-diag", "ck-setupd", "ck-wificfg", "ck-ram-probe", "ck-wifiscan", "ck-lease"):
            add("bin/" + name, (binaries / name).read_bytes())
        for dest, filename in (("matter-diag-start", "matter-diag-start"),
                               ("matter-test-start", "setup/matter-relay-start"),
                               ("ck-setup-start", "setup/ck-setup-device-start"),
                               ("ck-setup-backend", "setup/ck-setup-device-backend"),
                               ("ck-onboarding-start", "setup/ck-onboarding-start"),
                               ("ck-protocol-start", "setup/ck-protocol-start"),
                               ("ck-management-start", "setup/ck-management-start"),
                               ("ck-led-start", "setup/ck-led-start"),
                               ("ck-reset", "setup/ck-reset"),
                               ("ck-identity-start", "update/ck-identity-start"),
                               ("ck-udhcpc", "setup/ck-udhcpc-fixed")):
            add("bin/" + dest, (source / filename).read_bytes())
        add("bin/ck-boot-guard", (REPO / "firmware/matter/artifacts/update/ck-boot-guard").read_bytes())
    else:
        rc = rc.replace("\n/bin/matter-diag-start &", "").replace("\n/bin/matter-test-start &", "")
        rc += "\n/bin/exec-diag-start &\n/bin/exec-test-start &\n"
        for name in ("exec-diag", "exec-test-runner", "ck-setupd", "ck-wificfg", "ck-wifiscan", "ck-lease"):
            add("bin/" + name, (binaries / name).read_bytes())
        for dest, filename in (("exec-diag-start", "exec-diag-start"), ("exec-test-start", "exec-test-start"),
                               ("ck-setup-start", "setup/ck-setup-start"),
                               ("ck-setup-backend", "setup/ck-setup-backend"),
                               ("ck-udhcpc", "setup/ck-udhcpc-fixed")):
            add("bin/" + dest, (source / filename).read_bytes())
        for name in ("tiny_eb", "tiny_gcc16", "cpp_lean"):
            add("bin/test-" + name, (REPO / "firmware/exec-test/samples" / name).read_bytes(), 0o444)
    if variant in ("matter", "exec-test"):
        version = json.loads((REPO / "version.json").read_text())
        public_key = (REPO / "third_party/ota-signing.pub").read_bytes()
        require(len(public_key) == 32, "更新公鑰必須為 32 bytes")
        for name in ("ck-updater", "ck-updated"):
            add("bin/" + name, (REPO / "firmware/matter/artifacts/update" / name).read_bytes())
        add("bin/ck-ota-start", (REPO / "firmware/matter/src/update/ck-ota-start").read_bytes())
        add("etc/ck-update.pub", public_key, 0o444)
        add("etc/ck-update.meta", struct.pack(">III", 0x434B0004, 1 if variant=="matter" else 2, version["software_version"]), 0o444)
        add("etc/ck-version", (version["version"] + "\n").encode(), 0o444)
        add("etc/ck-variant", (variant+"\n").encode(), 0o444)
        if variant == "matter":
            add("etc/ck-identity-policy", b"auto-v1\n", 0o444)
            add("etc/ck-admin-policy", b"password-v1\n",0o444)
        inittab = read_file(vendor_root, "etc/inittab").decode()
        require("::restart:" not in inittab, "已有 PID1 restart action，拒絕覆寫")
        if variant == "matter":
            for script in ("ck-setup-start", "matter-diag-start", "matter-test-start"):
                rc = rc.replace("/bin/" + script + " &", "# Supervised by PID1: " + script)
            for script in ("ck-identity-start", "ck-onboarding-start", "ck-setup-start", "matter-diag-start", "ck-protocol-start", "ck-management-start", "ck-led-start"):
                inittab += "\n::respawn:/bin/" + script
        add("etc/inittab", (inittab + "\n::restart:/var/run/ck-ota/apply --pid1\n").encode(), 0o644)
        # Import journal before diagnostics, identity generation, or Matter startup.
        rc = rc.replace("# Start system script", "/bin/ck-ota-start\n\n# Start system script", 1)
        require(rc.count("/bin/ck-ota-start\n") == 1, "OTA startup injection 不符")
    # Replace the unused router GUI with our setup/update services. Keep all
    # Wi-Fi, MFi and HAP dependencies and the original journal boundaries.
    unused = set()
    if variant == "matter":
        unused = {p for p in file_inventory(vendor_root) if p == "bin/boa" or p == "web" or p.startswith("web/")}
        rc = rc.replace("\nboa\n", "\n# Management: ck-setupd / ck-updated\n").replace("\ncd /web\n", "\n")
        hap = read_file(vendor_root,"bin/homekitserver")
        from homekit_led import build_payload,patch
        payload,symbols=build_payload(binaries/"homekit-led")
        hap,led_patch=patch(hap,payload,symbols)
        add("etc/ck-homekit-led.json",(json.dumps(led_patch,separators=(",",":"))+"\n").encode(),0o444)
        # The stock reset also changes a MIB MAC/accessory identifier. A long
        # press now requests the shared durable factory reset. The CLI reset
        # below clears pairing without changing the factory MAC/identity.
        original_size = len(hap)
        for command in (b"flash default-sw\0",b"homekitserver -c\0"):
            require(hap.count(command) == 1,"HomeKit long-press reset command mismatch")
            action=b"/bin/ck-reset" if command.startswith(b"flash") else b"true"
            hap = hap.replace(command, action.ljust(len(command)-1,b" ")+b"\0")
        # CLI -c runs only before protocols start, under a durable reset intent.
        # Disable HMInitFlash's MIB/MAC randomization, retaining factory identity.
        require(hap[0x1b8e4:0x1b8e8] == bytes.fromhex("24040001"),"HomeKit reset argument mismatch")
        hap=hap[:0x1b8e4]+bytes.fromhex("24040000")+hap[0x1b8e8:]
        hap = hap.replace(b"/home/" + b"al" + b"fred/", b"/home/vendor/")
        require(len(hap) == original_size,"HomeKit patch changed ELF size")
        add("bin/homekitserver",hap)
    additions["etc/init.d/rcS"] = (rc.encode(), 0o755)
    add("etc/ck-udhcpd.conf", (source / "setup/ck-udhcpd.conf").read_bytes(), 0o644)
    # Equal-length debug-path substitutions preserve ELF layout and addresses.
    for name, line in file_inventory(vendor_root).items():
        fields = line.split()
        if len(fields) > 3 and fields[1] == "R" and name not in additions and name not in unused and name != "bin/upgfw":
            data = read_file(vendor_root, name)
            clean = data.replace(b"/home/" + b"al" + b"fred/", b"/home/vendor/")
            if clean != data:
                require(len(clean) == len(data), "ELF 字串替换改變長度")
                add(name, clean, int(fields[3], 8))
    stale = {"bin/matterd-test", "bin/matter-diag", "bin/matter-test-start", "bin/matter-diag-start"} if variant=="exec-test" else set()
    root = repack(vendor_root, additions, remove=SECRET_FILES | {"bin/upgfw"} | stale | unused)
    image = b"\xff" * START + root + b"\xff" * (SIZE - END)
    atomic_write(output, image, mode=0o644)
    write_json(output.with_suffix(".json"), {"format": "commandkit-region-v1", "variant": variant,
               "size": SIZE, "sha256": sha(image), "write_range": [START, END],
               "compatibility": base_compatibility, "rootfs": rootfs_check(root),
               "credentials_included": False, "requires_local_personalization": True,
               "physical_boot_validation": "pending for this public repack",
               "release": "v" + json.loads((REPO / "version.json").read_text())["version"]})


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("variant", choices=("matter", "exec-test"))
    parser.add_argument("--binaries", type=Path, required=True)
    parser.add_argument("--base", type=Path, help="使用者自己的相容 8 MiB 備份；省略時只編譯服務")
    parser.add_argument("--template-manifest", type=Path, help="使用去識別化公開 BIN 作基底時的 JSON")
    parser.add_argument("--output", type=Path)
    args = parser.parse_args()
    services(args.variant, args.binaries)
    if args.base:
        require(args.output, "組裝需指定 --output")
        assemble(args.variant, args.base, args.binaries, args.output, args.template_manifest)
    print("本機建置完成；未存取燒錄器。")


if __name__ == "__main__":
    main()
