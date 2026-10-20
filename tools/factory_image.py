#!/usr/bin/env python3
"""Prepare a private first-install image for the verified stock Boa uploader.

This tool only creates files. It never contacts an outlet or writes hardware.
The reference dump supplies the verified 10219 kernel, never device settings.
"""
import argparse
import json
import re
import secrets
import struct
from pathlib import Path
from fwlib import (BUDGET, END, START, SIZE, atomic_write, compatibility,
                   file_inventory, load_release, profile_lock, read_file,
                   repack, require, rootfs_check, sha, sum16, write_json)

ROOT = Path(__file__).resolve().parents[1]
KERNEL_SIZE = 0x120000
PART_SIZE = 0x2b0000
CANONICAL_MARK = 0x8000004d
INIT_MARKER = b'CKAUTOINIT-V1\r\n'


def journal_initializer(public=False):
    area = bytearray(b'\xff' * 0x20000)
    if public:
        area[0x10000:0x10000+len(INIT_MARKER)] = INIT_MARKER
    return bytes(area)


def identities():
    text = (ROOT / 'firmware/matter/src/update/ck_factory.h').read_text()
    return {name: re.search(r'#define CK_' + name + r'_KERNEL_SHA256 "([0-9a-f]{64})"', text)[1]
            for name in ('LEGACY', 'FACTORY')}


def factory_kernel(reference, platform):
    require(len(reference) == SIZE, '參考映像必須為 8 MiB')
    require(compatibility(reference) == platform, '參考 kernel／Bank 2 版本不相容')
    kernel = bytearray(reference[0x10000:START])
    hashes = identities()
    require(sha(kernel) == hashes['LEGACY'], '參考 kernel 不符合已驗證版本')
    signature, entry, mark, n = struct.unpack_from('>4sIII', kernel)
    require(signature == b'cr6c' and entry == 0x80500000 and mark == CANONICAL_MARK and
            n == 0xfd002 and sum16(kernel[16:16+n]) == 0, 'kernel header／checksum 不符')
    # A full-span kernel write replaces old kernel padding deterministically.
    # The embedded loader and original compressed kernel bytes stay intact.
    struct.pack_into('>II', kernel, 8, CANONICAL_MARK, KERNEL_SIZE - 16)
    kernel[-2:] = b'\0\0'
    struct.pack_into('>H', kernel, KERNEL_SIZE - 2, (-sum16(kernel[16:])) & 65535)
    require(sha(kernel) == hashes['FACTORY'], '首次安裝 kernel 不符')
    # +8 is a partition-relative seek in the upload container. Boa replaces it
    # with the new boot mark after seeking, before handing the buffer to fwd.
    struct.pack_into('>I', kernel, 8, 0x10000)
    return bytes(kernel)


def root_image(root, public=False):
    require(len(root) == BUDGET, 'rootfs budget 不符')
    checked = rootfs_check(root)
    require(checked['checksum_extent'] <= BUDGET - 2, 'rootfs 沒有外層 checksum 空間')
    payload = bytearray(root + journal_initializer(public))
    # Keep the entire new persistent journal erased. Put the independent Boa
    # checksum in unused filesystem padding, outside SquashFS/boot checksum.
    payload[BUDGET-2:BUDGET] = b'\0\0'
    struct.pack_into('>H', payload, BUDGET-2, (-sum16(payload)) & 65535)
    require(sum16(payload) == 0 and payload[BUDGET:] == journal_initializer(public),
            '首次安裝 journal／checksum 不符')
    rootfs_check(payload)
    return struct.pack('>4sIII', b'r6cr', 0, 0, len(payload)) + payload


def inspect(data):
    require(len(data) == KERNEL_SIZE + 16 + PART_SIZE + 16, '首次安裝檔案大小不符')
    require(data[:4] == b'cr6c' and struct.unpack_from('>III', data, 4) ==
            (0x80500000, 0x10000, KERNEL_SIZE-16), 'kernel 上傳 header 不符')
    require(sum16(data[16:KERNEL_SIZE]) == 0, 'kernel checksum 不符')
    canonical = bytearray(data[:KERNEL_SIZE])
    struct.pack_into('>I', canonical, 8, CANONICAL_MARK)
    require(sha(canonical) == identities()['FACTORY'], 'kernel 內容不符')
    signature, _, burn, n = struct.unpack_from('>4sIII', data, KERNEL_SIZE)
    require(signature == b'r6cr' and burn == 0 and n == PART_SIZE, 'rootfs 上傳 header 不符')
    payload = data[KERNEL_SIZE+16:KERNEL_SIZE+16+n]
    require(sum16(payload) == 0, 'rootfs 上傳 checksum 不符')
    rootfs_check(payload)
    require(payload[BUDGET:] in (journal_initializer(False), journal_initializer(True)),
            '首次安裝 journal 不符')
    require(data[-16:] == b'dual' + bytes(12), 'dual trailer 不符')
    return payload[:BUDGET]


def prepare(reference, release, manifest, profile, output, public=False, factory_template=None):
    output = Path(output)
    require(not output.exists() and not output.with_suffix('.json').exists(), '輸出已存在')
    root, meta = load_release(release, manifest)
    require(meta['variant'] == 'matter', '首次安裝只支援 Matter 版')
    version = struct.unpack('>III', read_file(root, 'etc/ck-update.meta'))[2]
    require(version >= 6, '首次安裝需使用含 factory OTA 相容性支援的 v0.2.4 以上')
    require((reference is None) != (factory_template is None), '請指定一種 kernel 來源')
    if factory_template is not None:
        require(meta['compatibility'] == json.loads((ROOT/'third_party/platform.json').read_text()),
                '公開模板的平台不相容')
        template = Path(factory_template).read_bytes()
        inspect(template)
        kernel = template[:KERNEL_SIZE]
    else:
        kernel = factory_kernel(Path(reference).read_bytes(), meta['compatibility'])
    if public:
        require(profile is None and version >= 7, '公開版需 v0.2.5 以上且不指定 profile')
        require(read_file(root,'etc/ck-identity-policy') == b'auto-v1\n', '映像未支援自動產生身分')
        data = kernel + root_image(root, True) + b'dual' + bytes(12)
        packed = inspect(data)
        require(not {'etc/matter-device.key','etc/matter-diag.key','etc/ck-setup-ap.bin'} &
                set(file_inventory(packed)), '公開首次安裝檔不可含裝置金鑰')
    else:
        require(profile is not None, '私人安裝需指定 profile')
        with profile_lock(profile) as folder:
            require(set(p.name for p in folder.iterdir()) == {'.lock'}, '首次安裝請使用新的專用 profile')
            diag = secrets.token_hex(32).encode() + b'\n'
            device = secrets.token_bytes(32)
            atomic_write(folder/'diag.key', diag)
            atomic_write(folder/'device-identity.key', device)
            write_json(folder/'factory-profile.json', {
                'format': 'commandkit-factory-profile-v1', 'installation_id': secrets.token_hex(16),
                'model': 'CMNDKT-004', 'version': meta['release'],
                'single_outlet_only': True, 'hardware_binding': 'not_read_from_target'})
            personalized = repack(root, {'etc/matter-diag.key': (diag, 0o600),
                                        'etc/matter-device.key': (device, 0o600)})
            data = kernel + root_image(personalized) + b'dual' + bytes(12)
            packed_root = inspect(data)
            require(read_file(packed_root, 'etc/matter-diag.key') == diag and
                    read_file(packed_root, 'etc/matter-device.key') == device,
                    '私人身分重打包不一致')
    require(len(data) < 0x400000, '上傳檔案超過 4 MiB')
    atomic_write(output, data, mode=0o644 if public else 0o600)
    write_json(output.with_suffix('.json'), {
            'format': 'commandkit-boa-first-install-v1', 'model': 'CMNDKT-004',
            'release': meta['release'], 'software_version': version,
            'size': len(data), 'sha256': sha(data),
            'upload_endpoint': '/boafrm/formUpload', 'file_field': 'binary',
            'required_stock_version': '10219', 'required_active_bank': 2,
            'required_dual_firmware': True, 'target_bank': 1,
            'write_ranges': [[0x10000, START], [START, 0x3e0000]],
            'journal_initialized': [END, 0x3e0000],
            'identity_initialization': 'first_boot_credited_randomness' if public else 'private_bootstrap',
            'preserved_ranges': [[0, 0x10000], [0x3e0000, SIZE]],
            'private_single_outlet_image': not public,
            'device_credentials_included': not public,
            'rootfs_source_sha256': meta['sha256'],
            'physical_factory_install_test': 'not_performed',
            'target_compatibility_checked_online': False})
    return output


def main():
    p = argparse.ArgumentParser(description=__doc__)
    sources = p.add_mutually_exclusive_group(required=True)
    sources.add_argument('--reference', type=Path, help='已驗證的本機平台參考映像')
    sources.add_argument('--factory-template', type=Path, help='已驗證的公開首次安裝 BIN，只取 kernel')
    p.add_argument('--release', type=Path, required=True)
    p.add_argument('--manifest', type=Path, required=True)
    group = p.add_mutually_exclusive_group(required=True)
    group.add_argument('--profile', type=Path)
    group.add_argument('--public', action='store_true', help='公開共用；首次開機自行產生身分')
    p.add_argument('--output', type=Path, required=True)
    a = p.parse_args()
    path = prepare(a.reference, a.release, a.manifest, a.profile, a.output, a.public, a.factory_template)
    print(('公開' if a.public else '私人') + '首次安裝檔已產生；未連線或寫入插座：' + str(path))


if __name__ == '__main__':
    main()
