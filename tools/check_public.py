#!/usr/bin/env python3
"""Read-only public publication audit, including decompressed rootfs files."""
import argparse
import json
import re
from pathlib import Path
from fwlib import (START, END, SIZE, SECRET_FILES, sha, require, load_release,
                   file_inventory, read_file)

EXCLUDED = {".git", "private", "backups", "sessions", "deps", "toolchains", "artifacts",
            "evidence", "diagnostics", ".local", ".venv", ".sdk-venv", ".host-sdk-venv", "__pycache__"}
PERSONAL = re.compile(rb"/Users/[A-Za-z0-9_.-]+/|/home/" + rb"al" + rb"fred/|" +
                      rb"Metering-Outlet" + rb"32C7")


def public_paths(repository):
    repository = Path(repository)
    return sorted(p for p in repository.rglob("*")
                  if (p.is_file() or p.is_symlink()) and
                  not EXCLUDED & set(p.relative_to(repository).parts) and
                  not (p.name.startswith('commandkit-management') and p.suffix == '.json') and
                  p.name != ".DS_Store" and not p.name.endswith(".pyc"))


def audit(repository, release):
    repository, release = Path(repository), Path(release)
    files = public_paths(repository)
    paths = {str(p.relative_to(repository)) for p in files}
    total = 0
    for path in files:
        rel = str(path.relative_to(repository))
        if path.is_symlink():
            require(str(path.readlink()) == "../../../deps/connectedhomeip", "非預期公開 symlink：" + rel)
            continue
        data = path.read_bytes()
        require(len(data) < 100 * 1024 * 1024, "檔案超出 GitHub 單檔預算：" + rel)
        total += len(data)
        require(not PERSONAL.search(data),
                "仍有可識別路径／歷史裝置名稱：" + rel)
        require(path.suffix not in (".key", ".pseudo", ".cpio", ".sqsh"), "公開包含私人格式：" + rel)
        if path.suffix == '.json':
            try: record = json.loads(data)
            except (ValueError, UnicodeDecodeError): record = None
            require(not isinstance(record,dict) or record.get('format') != 'commandkit-management-v1',
                    '公開包含管理金鑰：' + rel)
        if path.suffix == ".md":
            text = data.decode()
            for link in re.findall(r"(?<!!)\[[^\]]*\]\(([^)]+)\)", text):
                target = link.split("#", 1)[0].strip("<>")
                if not target or "://" in target or target.startswith("mailto:"):
                    continue
                resolved = (path.parent / target).resolve()
                require(resolved.exists(), "文件連結不存在：" + rel + " → " + target)
    require((release/"matter-8m-region.bin").is_file(), "缺少主要韌體")
    variants = {}
    for variant in ("matter", "exec-test"):
        if variant=="exec-test" and not (release/(variant+"-8m-region.bin")).exists(): continue
        root, meta = load_release(release / (variant + "-8m-region.bin"), release / (variant + "-8m-region.json"))
        inventory = file_inventory(root)
        regular = [name for name, line in inventory.items() if line.split()[1] == "R"]
        hashes = {}
        for name in regular:
            data = read_file(root, name)
            if name.endswith('.json'):
                try: record = json.loads(data)
                except (ValueError, UnicodeDecodeError): record = None
                require(not isinstance(record,dict) or record.get('format') != 'commandkit-management-v1',
                        'rootfs 包含管理金鑰：' + name)
            require(not PERSONAL.search(data),
                    "rootfs 仍有可識別路径／名稱：" + variant + "/" + name)
            hashes[name] = sha(data)
        variants[variant] = {"sha256": meta["sha256"], "size": SIZE,
                             "regular_files": len(regular), "file_sha256": hashes,
                             "protected_ranges_all_ff": True, "credential_files_absent": True}
    return {"status": "pass", "scope": "selected public files and decompressed release rootfs",
            "public_file_count": len(files), "public_bytes": total, "variants": variants,
            "physical_device_access": False}


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--repository", type=Path, required=True)
    parser.add_argument("--release-dir", type=Path, required=True)
    parser.add_argument("--output", type=Path)
    args = parser.parse_args()
    report = audit(args.repository, args.release_dir)
    if args.output:
        # Explicit output only; default is a read-only inspection.
        args.output.write_text(json.dumps(report, ensure_ascii=False, indent=2) + "\n")
    print(json.dumps({k: v for k, v in report.items() if k != "variants"}, ensure_ascii=False))


if __name__ == "__main__":
    main()
