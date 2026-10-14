#!/usr/bin/env python3
"""Read-only verification of the checks observed in this bootloader's MIPS code."""
import argparse
import hashlib
import json
import struct
from pathlib import Path

def sum16(data):
    if len(data) & 1: raise ValueError('odd checksum length')
    return sum(value[0] for value in struct.iter_unpack('>H',data)) & 0xffff

def normalized_mark(header_type, mark):
    # bootloader 0x80407aa8: invalid -> 0x80000000; valid unmarked -> 0x80000001.
    if not header_type: return 0x80000000
    return mark if mark & 0x80000000 else 0x80000001

def inspect(path):
    data = path.read_bytes(); banks = []
    for bank, base in [(1,0),(2,0x400000)]:
        offset = base + 0x10000
        magic, start, mark, size = struct.unpack_from('>4sIII', data, offset)
        root = base + 0x130000
        used = struct.unpack_from('<Q', data, root+40)[0]
        # 0x804081f8-0x80408200; BE view of the overwritten SquashFS time field.
        root_length = struct.unpack_from('>I', data, root+8)[0] + 0x282
        kernel_sum = sum16(data[offset+16:offset+16+size])
        root_sum = sum16(data[root:root+root_length])
        header_type = {b'cs6c':1,b'cr6c':2}.get(magic,0)
        banks.append(dict(bank=bank, base=f'0x{base:06x}',
                          image_offset=f'0x{offset:06x}', magic=magic.decode('ascii'),
                          start_address=f'0x{start:08x}', raw_mark=f'0x{mark:08x}',
                          normalized_mark=f'0x{normalized_mark(header_type,mark):08x}',
                          payload_size=size, payload_sum16=f'0x{kernel_sum:04x}',
                          rootfs_offset=f'0x{root:06x}', rootfs_bytes_used=used,
                          boot_rootfs_checksum_length=root_length,
                          rootfs_sum16=f'0x{root_sum:04x}',
                          rootfs_sha256=hashlib.sha256(data[root:root+used]).hexdigest(),
                          valid=bool(header_type and kernel_sum==0 and
                                     (header_type==1 or (data[root:root+4] in [b'hsqs',b'sqsh'] and root_sum==0)))))
    # 0x80408724: unsigned mark comparison, with Bank 1 winning ties.
    preferred=2 if int(banks[0]['normalized_mark'],16)<int(banks[1]['normalized_mark'],16) else 1
    chosen=preferred if banks[preferred-1]['valid'] else 3-preferred if banks[2-preferred]['valid'] else None
    return dict(input_sha256=hashlib.sha256(data).hexdigest(),size=len(data),
                banks=banks,preferred_bank=preferred,offline_validation_selected_bank=chosen,
                note='This parser checks the known headers/rootfs locations of this dump; it does not emulate hardware, interrupts, or every search candidate.')

if __name__=='__main__':
    parser=argparse.ArgumentParser();parser.add_argument('image',nargs='?',type=Path,
        default=Path(__file__).resolve().parents[2]/'original_master.bin')
    args=parser.parse_args();print(json.dumps(inspect(args.image),ensure_ascii=False,indent=2))
