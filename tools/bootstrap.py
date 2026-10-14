#!/usr/bin/env python3
"""Fetch version-locked dependencies. No device access; cached downloads are verified."""
import argparse
import gzip
import hashlib
import json
import shutil
import subprocess
import tarfile
import urllib.request
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
WORK = ROOT / "firmware/matter"


def call(args, **kwargs):
    subprocess.run(list(map(str, args)), check=True, **kwargs)


def checkout(url, commit, folder):
    if not (folder / ".git").exists():
        if folder.exists():
            raise ValueError("依賴目錄已存在且沒有 Git metadata；請移到其他路徑：" + str(folder))
        call(["git", "clone", "--no-checkout", url, folder])
    call(["git", "-C", folder, "checkout", "--detach", commit])
    observed = subprocess.check_output(["git", "-C", str(folder), "rev-parse", "HEAD"], text=True).strip()
    if observed != commit:
        raise ValueError("依賴 commit 不符")


def download(name, details, directory):
    destination = directory / name
    if not destination.exists():
        temporary = destination.with_suffix(destination.suffix + ".partial")
        with urllib.request.urlopen(details["url"], timeout=60) as source, temporary.open("wb") as output:
            shutil.copyfileobj(source, output)
        temporary.replace(destination)
    if hashlib.sha256(destination.read_bytes()).hexdigest() != details["sha256"]:
        raise ValueError("下載 SHA-256 不符：" + name)
    return destination


def cpio_members(blob):
    offset = 0
    while offset + 110 <= len(blob):
        if blob[offset:offset + 6] not in (b"070701", b"070702"):
            raise ValueError("Debian initrd newc 格式不符")
        fields = [int(blob[offset + 6 + i * 8:offset + 14 + i * 8], 16) for i in range(13)]
        size, namesize = fields[6], fields[11]
        name = blob[offset + 110:offset + 110 + namesize - 1].decode()
        data_start = (offset + 110 + namesize + 3) & ~3
        if name == "TRAILER!!!":
            return
        yield name, blob[data_start:data_start + size]
        offset = (data_start + size + 3) & ~3


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--sdk", action="store_true")
    parser.add_argument("--toolchain", action="store_true")
    parser.add_argument("--vm", action="store_true")
    parser.add_argument("--flashrom", action="store_true")
    args = parser.parse_args()
    deps = WORK / "deps"
    deps.mkdir(parents=True, exist_ok=True)
    lock = json.loads((ROOT / "third_party/sdk-lock.json").read_text())
    downloads = json.loads((ROOT / "third_party/download-lock.json").read_text())
    directory = deps / "downloads"
    directory.mkdir(exist_ok=True)
    if args.sdk:
        folder = deps / "connectedhomeip"
        checkout(lock["url"], lock["commit"], folder)
        call(["git", "-C", folder, "submodule", "update", "--init", "--recursive", *lock["submodules"]])
        for path, commit in lock["submodules"].items():
            actual = subprocess.check_output(["git", "-C", str(folder / path), "rev-parse", "HEAD"], text=True).strip()
            if actual != commit:
                raise ValueError("SDK submodule 不符：" + path)
        link = WORK / "src/matter-app-device/third_party/connectedhomeip"
        link.parent.mkdir(parents=True, exist_ok=True)
        if link.is_symlink():
            if str(link.readlink()) != "../../../deps/connectedhomeip":
                raise ValueError("SDK symlink 不符")
        elif link.exists():
            raise ValueError("SDK link 路徑已被其他內容占用")
        else:
            link.symlink_to("../../../deps/connectedhomeip", target_is_directory=True)
    if args.toolchain:
        folder = deps / "musl-cross-make"
        checkout("https://github.com/richfelker/musl-cross-make.git", lock["toolchain_builder_commit"], folder)
        shutil.copy2(WORK / "tools/cross-config.mak", folder / "config.mak")
        for name in ("uClibc-ng-1.0.54.tar.xz", "linux-2.6.30.9.tar.xz"):
            archive = download(name, downloads[name], directory)
            if name.startswith("uClibc") and not (deps / "uClibc-ng-1.0.54").exists():
                # Trusted archive is content-hash locked; reject traversal and external links.
                with tarfile.open(archive) as stream:
                    for member in stream.getmembers():
                        if member.name.startswith("/") or ".." in Path(member.name).parts:
                            raise ValueError("archive 路徑越界")
                    stream.extractall(deps, filter="data")
    if args.vm:
        download("vmlinux-4.19.0-21-4kc-malta", downloads["vmlinux-4.19.0-21-4kc-malta"], directory)
        archive = download("debian-malta-initrd.gz", downloads["debian-malta-initrd.gz"], directory)
        found = set()
        for name, data in cpio_members(gzip.decompress(archive.read_bytes())):
            basename = Path(name).name
            if basename in ("mii.ko", "pcnet32.ko"):
                if hashlib.sha256(data).hexdigest() != downloads[basename]["sha256"]:
                    raise ValueError("VM module hash 不符：" + basename)
                (directory / basename).write_bytes(data)
                found.add(basename)
        if found != {"mii.ko", "pcnet32.ko"}:
            raise ValueError("VM initrd 缺少 module")
    if args.flashrom:
        folder = ROOT / "artifacts/flashrom-source"
        folder.parent.mkdir(exist_ok=True)
        # v1.8.0 source commit recorded with the public dependency lock.
        checkout("https://github.com/flashrom/flashrom.git", lock["flashrom_commit"], folder)
        call(["meson", "setup", folder / "build", folder, "-Dprogrammer=ch341a_spi,dummy",
              "-Dtests=disabled", "-Ddocumentation=disabled"])
        call(["ninja", "-C", folder / "build"])
    print("固定版本依賴準備完成；未接觸裝置。")


if __name__ == "__main__":
    main()
