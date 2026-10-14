#!/usr/bin/env python3
"""Reproduce extraction in a private case folder; never modify the input."""
import argparse
import hashlib
import shutil
import subprocess
from pathlib import Path


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--input", type=Path, required=True)
    parser.add_argument("--output", type=Path, required=True)
    parser.add_argument("--headless", type=Path, help="optional Ghidra analyzeHeadless path")
    args = parser.parse_args()
    source = args.input.read_bytes()
    if len(source) != 0x800000 or args.output.exists():
        raise ValueError("輸入需為 8 MiB，輸出目錄不能已存在")
    folder = args.output / "reverse"
    for name in ("tools", "evidence", "images", "binaries", "symbols", "docs"):
        (folder / name).mkdir(parents=True, exist_ok=True)
    (args.output / "original_master.bin").write_bytes(source)
    (args.output / "original_master.bin").chmod(0o400)
    shutil.copytree(Path(__file__).parent / "tools", folder / "tools", dirs_exist_ok=True)
    for name in ("extract_firmware.py", "extract_rootfs.py", "analyze_elf.py", "inspect_image.py", "extract_tables.py"):
        subprocess.run(["python3", "tools/" + name], cwd=folder, check=True)
    if args.headless:
        subprocess.run(["python3", "tools/run_ghidra.py", "--headless", str(args.headless.resolve())], cwd=folder, check=True)
    if args.input.read_bytes() != source:
        raise RuntimeError("輸入被變更")
    print("私人重現目錄完成；原輸入保持不變。SHA-256=" + hashlib.sha256(source).hexdigest())


if __name__ == "__main__":
    main()
