"""Portable image preparation. Offsets are flash offsets, end exclusive."""
import contextlib
import hashlib
import json
import os
import re
import secrets
import shlex
import shutil
import struct
import subprocess
import tempfile
from pathlib import Path

START, END, SIZE = 0x130000, 0x3C0000, 0x800000
BUDGET = END - START
LAYOUT = "00130000:003bffff bank1_rootfs\n"
SECRET_FILES = {"etc/matter-diag.key", "etc/matter-device.key", "etc/ck-setup-ap.bin",
                "etc/matter-qr.png", "etc/matter-qr.svg", "etc/matter-manual-code"}


def require(condition, message):
    if not condition:
        raise ValueError(message)


def sha(data):
    return hashlib.sha256(data).hexdigest()


def file_sha(path):
    return sha(Path(path).read_bytes())


def sum16(data):
    require(len(data) % 2 == 0, "checksum 範圍必須為偶數 bytes")
    return sum(x[0] for x in struct.iter_unpack(">H", data)) & 0xFFFF


def atomic_write(path, data, mode=0o600, overwrite=False):
    path = Path(path)
    require(not path.is_symlink(), "拒絕寫入 symlink")
    require(overwrite or not path.exists(), "輸出已存在；請選擇新的輸出路徑")
    path.parent.mkdir(parents=True, exist_ok=True)
    fd, name = tempfile.mkstemp(prefix=".write-", dir=path.parent)
    try:
        os.fchmod(fd, mode)
        with os.fdopen(fd, "wb") as stream:
            stream.write(data)
            stream.flush()
            os.fsync(stream.fileno())
        if overwrite:
            os.replace(name, path)
        else:
            # link is atomic and refuses an existing destination, unlike replace.
            os.link(name, path)
            os.unlink(name)
    finally:
        if os.path.exists(name):
            os.unlink(name)


def write_json(path, value, overwrite=False):
    atomic_write(path, (json.dumps(value, ensure_ascii=False, indent=2) + "\n").encode(),
                 overwrite=overwrite)


def rootfs_check(data, budget=BUDGET):
    require(len(data) >= 96 and data[:4] == b"hsqs", "rootfs magic 不符")
    extent = struct.unpack_from(">I", data, 8)[0] + 0x282
    used = struct.unpack_from("<Q", data, 40)[0]
    require(96 <= used <= extent <= budget and extent <= len(data) and extent % 2 == 0,
            "rootfs 長度超出允許範圍")
    require(sum16(data[:extent]) == 0, "rootfs checksum 不符")
    return {"bytes_used": used, "checksum_extent": extent}


def image_checks(image):
    require(len(image) == SIZE, "需要完整 8 MiB 映像")
    for offset in (0x10000, 0x410000):
        require(image[offset:offset + 4] == b"cr6c", "kernel header 不符")
        length = struct.unpack_from(">I", image, offset + 12)[0]
        require(0 < length <= 0x120000 - 16 and length % 2 == 0, "kernel 長度不符")
        require(sum16(image[offset + 16:offset + 16 + length]) == 0, "kernel checksum 不符")
    rootfs_check(image[START:END])
    rootfs_check(image[0x530000:0x7E0000], 0x2B0000)


def compatibility(image):
    # Publish only hashes of executable ranges, never device config bytes.
    return {"bank1_kernel_sha256": sha(image[0x10000:START]),
            "bank2_executable_sha256": sha(image[0x410000:0x7E0000])}


def compatible(image, expected):
    require(len(image) == SIZE, "備份大小不是 8 MiB")
    require(compatibility(image) == expected, "kernel／Bank 2 不相容；拒絕寫入")
    image_checks(image)


def matching_backups(first, second):
    first, second = Path(first), Path(second)
    require(not os.path.samefile(first, second), "必須提供兩次讀取的不同備份檔案")
    one, two = first.read_bytes(), second.read_bytes()
    require(len(one) == SIZE and one == two, "兩份備份必須各為 8 MiB 且逐 byte 相同")
    return one


def tool(name):
    found = shutil.which(name)
    require(found, "缺少工具：" + name)
    return found


def run(args):
    result = subprocess.run([str(x) for x in args], capture_output=True)
    require(result.returncode == 0,
            Path(str(args[0])).name + " 失敗：" + result.stderr.decode(errors="replace")[-1500:])
    return result.stdout


def pseudo(fs, directory):
    src, pf = directory / "input.sqsh", directory / "input.pseudo"
    src.write_bytes(fs)
    run([tool("unsquashfs"), "-pf", pf, src])
    raw = pf.read_bytes()
    position = raw.index(b"# START OF DATA")
    return raw[:position].decode(), raw[position:]


def repack(root, replacements=None, remove=()):
    """Use pseudo metadata to preserve device nodes, symlinks, UID/GID and modes.

    Only referenced file data is repacked, so removed credentials are not retained
    as unreachable bytes in the output. Never publish temporary .pseudo files.
    """
    replacements = replacements or {}
    original = rootfs_check(root)
    flags = struct.unpack_from("<H", root, 24)[0]
    with tempfile.TemporaryDirectory(prefix="commandkit-repack-") as name:
        directory = Path(name)
        os.chmod(directory, 0o700)
        header, tail = pseudo(root[:original["bytes_used"]], directory)
        for path in set(remove) | set(replacements):
            require(re.fullmatch(r"[A-Za-z0-9_/.-]+", path) and ".." not in path.split("/"),
                    "非法 rootfs 路徑")
            header = re.sub(r"^" + re.escape(path) + r" .*\n", "", header, flags=re.M)
        for index, (path, (data, mode)) in enumerate(sorted(replacements.items())):
            source = directory / ("replacement-" + str(index))
            source.write_bytes(data)
            header += f"{path} F 1473841293 {mode:o} 0 0 cat {shlex.quote(str(source))}\n"
        pf, dest = directory / "updated.pseudo", directory / "updated.sqsh"
        pf.write_bytes(header.encode() + tail)
        run([tool("mksquashfs"), "-", dest, "-pf", pf, "-comp", "lzma", "-b", "131072",
             "-always-use-fragments", "-noappend", "-nopad", "-no-xattrs", "-processors", "2",
             "-no-progress", "-no-recovery", "-mkfs-time", "1473841293"])
        fs = bytearray(dest.read_bytes())
        require(struct.unpack_from("<Q", fs, 40)[0] == len(fs), "非預期 SquashFS padding")
        newflags = struct.unpack_from("<H", fs, 24)[0]
        require(newflags in (flags, flags | 0x200), "SquashFS flags 不相容")
        if newflags != flags:
            require(struct.unpack_from("<Q", fs, 56)[0] == 0xFFFFFFFFFFFFFFFF,
                    "非預期 extended attributes")
            struct.pack_into("<H", fs, 24, flags)
        extent = ((len(fs) + 511) // 512) * 512 + 2
        require(extent <= BUDGET, "rootfs 超出預留範圍")
        struct.pack_into(">I", fs, 8, extent - 0x282)
        boot = fs + bytes(extent - len(fs))
        struct.pack_into(">H", boot, extent - 2, (-sum16(boot)) & 0xFFFF)
        result = bytes(boot) + b"\xff" * (BUDGET - extent)
        rootfs_check(result)
        # Verify every injected file by reading the newly packed filesystem.
        dest.write_bytes(result)
        for path, (data, mode) in replacements.items():
            require(run([tool("unsquashfs"), "-cat", dest, path]) == data,
                    "重打包檔案不一致：" + path)
        names = file_inventory(result)
        require(not (set(remove) - set(replacements)) & set(names), "應移除檔案仍存在")
        return result


def file_inventory(root):
    checked = rootfs_check(root)
    with tempfile.TemporaryDirectory(prefix="commandkit-list-") as name:
        directory = Path(name)
        header, _ = pseudo(root[:checked["bytes_used"]], directory)
        return {line.split()[0]: line for line in header.splitlines()
                if line and not line.startswith("#") and len(line.split()) > 1}


def read_file(root, path):
    with tempfile.TemporaryDirectory(prefix="commandkit-cat-") as name:
        source = Path(name) / "root.sqsh"
        source.write_bytes(root)
        return run([tool("unsquashfs"), "-cat", source, path])


def load_release(image_path, manifest_path):
    image_path, manifest_path = Path(image_path), Path(manifest_path)
    meta = json.loads(manifest_path.read_text())
    image = image_path.read_bytes()
    require(meta.get("format") == "commandkit-region-v1" and
            meta.get("write_range") == [START, END] and meta.get("size") == SIZE,
            "Release 格式或寫入範圍不符")
    require(meta.get("variant") in ("matter", "exec-test") and len(image) == SIZE and
            sha(image) == meta.get("sha256"), "Release BIN 已變更或大小不符")
    require(image[:START] == b"\xff" * START and image[END:] == b"\xff" * (SIZE - END),
            "公開映像含有保留區內容")
    rootfs_check(image[START:END])
    require(not SECRET_FILES & set(file_inventory(image[START:END])),
            "公開映像仍含私人憑證")
    return image[START:END], meta


@contextlib.contextmanager
def profile_lock(profile):
    import fcntl  # macOS/Linux. Protect key reuse against concurrent preparation.
    profile = Path(profile)
    require(not profile.is_symlink(), "profile 不可為 symlink")
    profile.mkdir(parents=True, exist_ok=True, mode=0o700)
    os.chmod(profile, 0o700)
    lock = profile / ".lock"
    fd = os.open(lock, os.O_CREAT | os.O_RDWR | getattr(os, "O_NOFOLLOW", 0), 0o600)
    try:
        fcntl.flock(fd, fcntl.LOCK_EX | fcntl.LOCK_NB)
        yield profile
    finally:
        os.close(fd)


def profile_keys(profile, before, variant):
    identity = sha(before[0x6000:0x8000] + before[0x7F8000:])
    binding = profile / "device.json"
    existing_keys = []
    if binding.exists():
        state = json.loads(binding.read_text())
        require(not binding.is_symlink() and state["factory_sha256"] == identity,
                "profile 屬於另一台裝置；請使用另一個目錄")
        existing_keys = state.get("keys", [])
        require(all((profile / name).is_file() for name in existing_keys),
                "profile 缺少原金鑰；請復原 profile 或另建新的 profile")
    else:
        require(not any(p.name != ".lock" for p in profile.iterdir()), "profile 未完成或非空；請另選目錄")
        write_json(binding, {"factory_sha256": identity})
    def key(name, count, hexadecimal=False):
        dest = profile / name
        require(not dest.is_symlink(), "金鑰不可為 symlink")
        if not dest.exists():
            raw = secrets.token_bytes(count)
            atomic_write(dest, raw.hex().encode() + b"\n" if hexadecimal else raw)
        data = dest.read_bytes()
        require((re.fullmatch(b"[0-9a-f]{64}\n", data) if hexadecimal else len(data) == count),
                "profile 金鑰格式不符")
        os.chmod(dest, 0o600)
        return data
    additions = {"etc/matter-diag.key": (key("diag.key", 32, True), 0o600)}
    if variant == "matter":
        additions["etc/matter-device.key"] = (key("device-identity.key", 32), 0o600)
    else:
        dest = profile / "setup-ap.bin"
        require(not dest.is_symlink(), "設定憑證不可為 symlink")
        if not dest.exists():
            ssid = ("CommandKit-Test-" + secrets.token_hex(3).upper()).encode()
            password = secrets.token_hex(8).encode()
            record = bytearray(104)
            record[:4] = b"CKW1"
            record[4:7] = bytes([len(ssid), len(password), 1])
            record[8:8 + len(ssid)] = ssid
            record[40:40 + len(password)] = password
            atomic_write(dest, record)
            write_json(profile / "setup-ap.json", {"ssid": ssid.decode(), "password": password.decode()})
        data = dest.read_bytes()
        require(len(data) == 104 and data[:4] == b"CKW1" and data[6] == 1,
                "設定熱點憑證格式不符")
        os.chmod(dest, 0o600)
        additions["etc/ck-setup-ap.bin"] = (data, 0o600)
    names = {"diag.key"} | ({"device-identity.key"} if variant == "matter" else {"setup-ap.bin"})
    write_json(binding, {"factory_sha256": identity, "keys": sorted(set(existing_keys) | names)}, overwrite=True)
    return additions


def prepare(first, second, release, manifest, profile, output):
    output = Path(output)
    protected = [Path(x).resolve() for x in (first, second, release, manifest)]
    require(output.resolve() not in protected and not output.exists() and not output.is_symlink(),
            "輸出不能覆蓋輸入或既有檔案")
    require(not output.with_suffix(output.suffix + ".json").exists(), "輸出紀錄已存在")
    before = matching_backups(first, second)
    root, meta = load_release(release, manifest)
    compatible(before, meta["compatibility"])
    with profile_lock(profile) as folder:
        injected = profile_keys(folder, before, meta["variant"])
        root = repack(root, injected)
        target = before[:START] + root + before[END:]
        image_checks(target)
        require(target[:START] == before[:START] and target[END:] == before[END:], "保留區被變更")
        record = {"status": "prepared_offline_not_flashed", "format": "commandkit-private-v1",
                  "variant": meta["variant"], "target_sha256": sha(target),
                  "backup_sha256": sha(before), "write_range": [START, END],
                  "release_sha256": meta["sha256"], "compatibility": meta["compatibility"],
                  "profile": str(folder.resolve())}
        atomic_write(output, target)
        write_json(output.with_suffix(output.suffix + ".json"), record)
    return record
