#!/usr/bin/env python3
"""Make uploadable archives from the audited allowlist, excluding all private caches."""
import argparse
import hashlib
import json
import re
import zipfile
from pathlib import Path
from check_public import audit, public_paths


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--repository", type=Path, required=True)
    parser.add_argument("--release-dir", type=Path, required=True)
    parser.add_argument("--output-dir", type=Path, required=True)
    args = parser.parse_args()
    config = args.repository / "version.json"
    version = "v" + json.loads(config.read_text())["version"] if config.exists() else "v0.1.0-preview"
    if not re.fullmatch(r"v[0-9]+\.[0-9]+\.[0-9]+(?:-[A-Za-z0-9.-]+)?", version):
        raise ValueError("版本格式不符")
    report = audit(args.repository, args.release_dir)
    (args.repository / ("verification/public-audit-" + version + ".json")).write_text(
        json.dumps(report, ensure_ascii=False, indent=2) + "\n")
    files = public_paths(args.repository)
    rows = []
    for path in files:
        data = str(path.readlink()).encode() if path.is_symlink() else path.read_bytes()
        rows.append({"path": str(path.relative_to(args.repository)), "bytes": len(data),
                     "sha256": hashlib.sha256(data).hexdigest(), "symlink": path.is_symlink()})
    args.output_dir.mkdir(parents=True, exist_ok=True)
    source = args.output_dir / ("incipio-source-" + version + ".zip")
    if source.exists(): raise ValueError("來源 archive 已存在，請改用新目錄")
    with zipfile.ZipFile(source, "w", zipfile.ZIP_DEFLATED, compresslevel=9) as archive:
        for row in rows:
            path = args.repository / row["path"]
            if row['symlink']:
                info = zipfile.ZipInfo("repository/" + row["path"])
                info.create_system = 3
                info.external_attr = 0o120777 << 16
                archive.writestr(info, str(path.readlink()))
            else:
                archive.write(path, "repository/" + row["path"])
    manifest = {"format": "commandkit-public-source-v1", "files": rows,
                "archive": source.name, "archive_sha256": hashlib.sha256(source.read_bytes()).hexdigest(),
                "private_directories_included": False}
    (args.output_dir / "SOURCE_MANIFEST.json").write_text(json.dumps(manifest, indent=2) + "\n")
    (args.output_dir / "SOURCE_SHA256SUMS").write_text(
        "".join(row["sha256"] + "  repository/" + row["path"] + "\n" for row in rows))
    release = args.output_dir / ("incipio-release-" + version + ".zip")
    with zipfile.ZipFile(release, "w", zipfile.ZIP_DEFLATED, compresslevel=9) as archive:
        for path in sorted(args.release_dir.iterdir()):
            if path.is_file():
                archive.write(path, "release-assets/" + version + "/" + path.name)
    (args.output_dir / "ARCHIVE_SHA256SUMS").write_text(
        "".join(hashlib.sha256(p.read_bytes()).hexdigest() + "  " + p.name + "\n" for p in (source, release)))
    print(json.dumps({"status": "pass", "source_files": len(rows), "source_zip_bytes": source.stat().st_size,
                      "release_zip_bytes": release.stat().st_size, "private_files_included": False}))


if __name__ == "__main__":
    main()
