#!/usr/bin/env python3
"""Extract only required runtime libraries from the owner's backup, offline."""
import argparse
from pathlib import Path
from fwlib import START, SIZE, require, compatibility, image_checks, read_file, atomic_write
import json


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--backup", type=Path, required=True)
    parser.add_argument("--output", type=Path, required=True)
    args = parser.parse_args()
    before = args.backup.read_bytes()
    image_checks(before)
    platform = json.loads((Path(__file__).resolve().parents[1] / "third_party/platform.json").read_text())
    require(compatibility(before) == platform, "備份的 kernel／Bank 2 不相容")
    require(not args.output.exists(), "輸出目錄已存在")
    args.output.mkdir(parents=True, mode=0o700)
    root = before[0x530000:0x7E0000]
    for name in ("libapmib.so", "libc.so.0", "libgcc_s.so.1", "ld-uClibc.so.0"):
        atomic_write(args.output / "lib" / name, read_file(root, "lib/" + name))
    print("原廠 runtime libraries 已從自己的備份提取；未接觸裝置。")


if __name__ == "__main__":
    main()
