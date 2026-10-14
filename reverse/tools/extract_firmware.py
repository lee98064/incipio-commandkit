#!/usr/bin/env python3
"""Reproduce exact carvings and LZMA decoding from this verified flash dump."""
import hashlib
import json
import lzma
import struct
from pathlib import Path

OUT = Path(__file__).resolve().parents[1]
SOURCE = OUT.parent / 'original_master.bin'
EXPECTED = None  # Input belongs to the caller; never bind to a private device dump.

def main():
    data = SOURCE.read_bytes()
    assert len(data) == 8388608
    observed_sha256 = hashlib.sha256(data).hexdigest()
    dest = OUT / 'images'
    dest.mkdir(exist_ok=True)
    records = []

    def emit(name, offset, blob, kind, **extra):
        (dest / name).write_bytes(blob)
        records.append(dict(file='images/' + name, source_offset=f'0x{offset:08x}',
                            size=len(blob), sha256=hashlib.sha256(blob).hexdigest(),
                            kind=kind, **extra))

    emit('bootloader_flash.bin', 0, data[:0x10000], 'raw flash range')
    for offset in (0x130000, 0x530000):
        assert data[offset:offset + 4] == b'hsqs'
        used = struct.unpack_from('<Q', data, offset + 40)[0]
        assert 96 <= used <= len(data) - offset
        emit(f'rootfs_{offset:06x}.sqsh', offset, data[offset:offset + used],
             'SquashFS v4; LZMA; little-endian filesystem metadata',
             inode_count=struct.unpack_from('<I', data, offset + 4)[0],
             compression_id=struct.unpack_from('<H', data, offset + 20)[0])
    for name, offset in [('bootloader_unpacked.bin', 0x1320),
                         ('kernel_010000.bin', 0x12818),
                         ('kernel_410000.bin', 0x412818)]:
        decoder = lzma.LZMADecompressor(format=lzma.FORMAT_ALONE)
        decoded = decoder.decompress(data[offset:])
        assert decoder.eof
        consumed = len(data) - offset - len(decoder.unused_data)
        expected = struct.unpack_from('<Q', data, offset + 5)[0]
        assert expected == len(decoded)
        emit(name, offset, decoded, 'LZMA decompressed MIPS image',
             compressed_size=consumed)
        emit(name.replace('.bin', '.lzma'), offset, data[offset:offset + consumed],
             'exact original LZMA stream')
    emit('flash_tail_7e0000.bin', 0x7e0000, data[0x7e0000:],
         'raw settings/product/bank metadata range; boundaries require code corroboration')
    (OUT / 'evidence' / 'image-map.json').write_text(
        json.dumps(dict(input_sha256=observed_sha256, input_size=len(data), images=records),
                   ensure_ascii=False, indent=2) + '\n')
    print(json.dumps(records, indent=2))

if __name__ == '__main__':
    main()
