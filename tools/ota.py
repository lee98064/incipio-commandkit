#!/usr/bin/env python3
"""Create and verify signed CommandKit OTA packages; never access hardware."""
import argparse
import hashlib
import json
import re
import struct
import sys
from pathlib import Path
from cryptography.hazmat.primitives.asymmetric.ed25519 import Ed25519PrivateKey, Ed25519PublicKey
from cryptography.hazmat.primitives import serialization
from fwlib import START, END, SIZE, SECRET_FILES, require, rootfs_check, read_file, file_inventory, atomic_write, write_json

MAGIC = b"CKOTA1\r\n"
MODEL = 0x434B0004
VARIANTS = {"matter": 1, "exec-test": 2}


def keygen(private, public):
    key = Ed25519PrivateKey.generate()
    raw = key.private_bytes(serialization.Encoding.Raw, serialization.PrivateFormat.Raw,
                            serialization.NoEncryption())
    pub = key.public_key().public_bytes(serialization.Encoding.Raw, serialization.PublicFormat.Raw)
    require(not Path(private).exists() and not Path(public).exists(), "金鑰已存在，拒絕輪替")
    atomic_write(private, raw)
    atomic_write(public, pub, mode=0o644)


def verify(data, public):
    require(len(public) == 32 and len(data) == 256 + END - START, "更新包大小不符")
    h = data[:256]
    magic, fmt, model, variant, version, length, flags = struct.unpack_from(">8s6I", h)
    require(magic == MAGIC and fmt == 1 and model == MODEL and variant in VARIANTS.values()
            and version > 0 and length == END - START and flags == 0, "更新包格式不符")
    require(h[128:160] == public, "更新簽署者不符")
    Ed25519PublicKey.from_public_bytes(public).verify(h[192:256], h[:192])
    require(hashlib.sha256(data[256:]).digest() == h[32:64], "更新內容 hash 不符")
    rootfs_check(data[256:])
    label = h[160:192].split(b"\0", 1)[0].decode("ascii")
    require(re.fullmatch(r"[A-Za-z0-9.-]{1,31}", label), "版本名稱不符")
    return {"format": "commandkit-ota-v1", "model": "CMNDKT-004", "variant": next(k for k,v in VARIANTS.items() if v == variant),
            "software_version": version, "version": label, "size": len(data),
            "sha256": hashlib.sha256(data).hexdigest(), "rootfs_sha256": h[32:64].hex(),
            "bank1_kernel_sha256": h[64:96].hex(), "bank2_executable_sha256": h[96:128].hex(),
            "signing_public_key": public.hex()}


def pack(image, manifest, private, version, label, output):
    require(re.fullmatch(r"[A-Za-z0-9.-]{1,31}", label) and 0 < version < 2**32, "版本不符")
    data = Path(image).read_bytes()
    meta = json.loads(Path(manifest).read_text())
    require(len(data) == SIZE and hashlib.sha256(data).hexdigest() == meta["sha256"], "Release 不符")
    require(meta["write_range"] == [START, END] and data[:START] == b"\xff"*START and
            data[END:] == b"\xff"*(SIZE-END), "Release 保留區不符")
    root = data[START:END]
    rootfs_check(root)
    require(not SECRET_FILES & set(file_inventory(root)), "更新包不可含裝置憑證")
    key = Ed25519PrivateKey.from_private_bytes(Path(private).read_bytes())
    public = key.public_key().public_bytes(serialization.Encoding.Raw, serialization.PublicFormat.Raw)
    require(read_file(root, "etc/ck-update.pub") == public, "映像信任公鑰與簽章金鑰不符")
    require(read_file(root, "etc/ck-version") == (label+"\n").encode(), "映像版本名稱不符")
    variant = VARIANTS[meta["variant"]]
    require(read_file(root, "etc/ck-update.meta") == struct.pack(">III", MODEL, variant, version),
            "映像內版本與更新包版本不符")
    h = bytearray(256)
    struct.pack_into(">8s6I", h, 0, MAGIC, 1, MODEL, variant, version, len(root), 0)
    h[32:64] = hashlib.sha256(root).digest()
    h[64:96] = bytes.fromhex(meta["compatibility"]["bank1_kernel_sha256"])
    h[96:128] = bytes.fromhex(meta["compatibility"]["bank2_executable_sha256"])
    h[128:160] = public
    h[160:160+len(label)] = label.encode()
    h[192:256] = key.sign(bytes(h[:192]))
    package = bytes(h)+root
    details = verify(package, public)
    atomic_write(output, package, mode=0o644)
    write_json(Path(output).with_suffix(".json"), details)
    return details


def catalog(packages, base_url, output):
    require(base_url.startswith("https://"), "線上更新來源必須是 HTTPS")
    entries = []
    for p in packages:
        p = Path(p)
        meta = json.loads(p.with_suffix(".json").read_text())
        verified = verify(p.read_bytes(), bytes.fromhex(meta["signing_public_key"]))
        require(meta == verified, "更新索引資料不符")
        entries.append({**verified, "url": base_url.rstrip("/")+"/"+p.name})
    write_json(output, {"format": "commandkit-catalog-v1", "updates": entries})


def main():
    p = argparse.ArgumentParser(description=__doc__)
    commands = p.add_subparsers(dest="command", required=True)
    k = commands.add_parser("keygen"); k.add_argument("--private",type=Path,required=True); k.add_argument("--public",type=Path,required=True)
    b = commands.add_parser("pack")
    for name in ("image","manifest","private","output"): b.add_argument("--"+name,type=Path,required=True)
    b.add_argument("--version",type=int,required=True); b.add_argument("--label",required=True)
    v=commands.add_parser("verify");v.add_argument("package",type=Path);v.add_argument("--public",type=Path,required=True)
    c=commands.add_parser("catalog");c.add_argument("packages",nargs="+",type=Path);c.add_argument("--base-url",required=True);c.add_argument("--output",type=Path,required=True)
    a=p.parse_args()
    if a.command=="keygen":keygen(a.private,a.public);print("簽章私鑰已保存於私人目錄；公鑰可隨來源發布。")
    elif a.command=="pack":print(json.dumps(pack(a.image,a.manifest,a.private,a.version,a.label,a.output),indent=2))
    elif a.command=="verify":print(json.dumps(verify(a.package.read_bytes(),a.public.read_bytes()),indent=2))
    else:catalog(a.packages,a.base_url,a.output)

if __name__=="__main__":main()
