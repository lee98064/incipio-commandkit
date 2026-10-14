#!/usr/bin/env python3
"""Inventory both extracted root filesystems and export ELF evidence without executing it."""
import csv
import hashlib
import json
import os
import re
import shutil
import struct
import subprocess
from pathlib import Path

OUT = Path(__file__).resolve().parents[1]
RABIN = shutil.which('rabin2')
LLVM = shutil.which('llvm-objdump')
TARGETS = ['homekitserver', 'upgfw', 'WACServer', 'phytrex_tools',
           'gigadevice_chk', 'timelycheck', 'flash', 'wfaudio', 'boa']

def dynsym(data):
    """ELF32 BE PT_DYNAMIC parser; based on the previous bundle's parse_dynsym.py."""
    if data[:6] != b'\x7fELF\x01\x02':
        raise ValueError('expected ELF32 big-endian')
    phoff, = struct.unpack_from('>I', data, 28)
    es, n = struct.unpack_from('>HH', data, 42)
    ph = [struct.unpack_from('>IIIIIIII', data, phoff + i * es) for i in range(n)]
    def offset(va):
        for t, o, v, p, fs, ms, flags, align in ph:
            if t == 1 and v <= va < v + fs:
                return o + va - v
        raise ValueError(f'unmapped virtual address {va:x}')
    dp = next(p for p in ph if p[0] == 2)
    tags = {}; needed = []
    for pos in range(dp[1], dp[1] + dp[4], 8):
        tag, value = struct.unpack_from('>II', data, pos)
        if not tag: break
        tags[tag] = value
        if tag == 1: needed.append(value)
    st = offset(tags[5]); so = offset(tags[6]); rows = []
    def string(no):
        return data[st + no:data.index(b'\0', st + no)].decode('latin1')
    for i in range(tags[0x70000011]):
        no, va, size, info, other, sh = struct.unpack_from('>IIIBBH', data, so + i * tags.get(11, 16))
        rows.append(dict(index=i, address=f'0x{va:08x}', size=size,
                         bind=info >> 4, type=info & 15, shndx=sh,
                         name=string(no) if no else ''))
    return rows, [string(no) for no in needed], ph, tags

def capture(args, dest):
    cp = subprocess.run(args, stdout=subprocess.PIPE, stderr=subprocess.PIPE)
    dest.parent.mkdir(parents=True, exist_ok=True)
    dest.write_bytes(cp.stdout)
    if cp.stderr:
        dest.with_suffix(dest.suffix + '.stderr').write_bytes(cp.stderr)
    if cp.returncode:
        raise RuntimeError(f'{args[0]} failed ({cp.returncode}): {cp.stderr[:200]!r}')

def main():
    assert RABIN and LLVM, 'rabin2 and llvm-objdump must be on PATH'
    inventory = []; elfs = []; selected = []
    for bank in ['130000', '530000']:
        root = OUT / f'rootfs_{bank}'
        for base, dirs, files in os.walk(root, followlinks=False):
            for name in dirs + files:
                p = Path(base) / name
                row = dict(bank=bank, path=str(p.relative_to(root)))
                if p.is_symlink():
                    row.update(kind='symlink', target=os.readlink(p))
                elif p.is_dir():
                    row.update(kind='directory')
                elif p.is_file():
                    data = p.read_bytes()
                    row.update(kind='file', size=len(data), sha256=hashlib.sha256(data).hexdigest())
                    if data[:4] == b'\x7fELF':
                        ident = bank + '_' + str(p.relative_to(root)).replace('/', '__')
                        capture([RABIN, '-Ij', str(p)], OUT / f'evidence/elf/{ident}.info.json')
                        capture([RABIN, '-ij', str(p)], OUT / f'evidence/elf/{ident}.imports.json')
                        try:
                            symbols, deps, ph, tags = dynsym(data)
                            symbol_status = 'PT_DYNAMIC parsed'
                        except (StopIteration, KeyError, ValueError, struct.error) as exc:
                            symbols, deps, ph, tags = [], [], [], {}
                            symbol_status = f'no recoverable PT_DYNAMIC table: {type(exc).__name__}: {exc}'
                            capture([RABIN, '-sj', str(p)], OUT / f'evidence/elf/{ident}.symbols.json')
                        sd = OUT / f'symbols/{bank}'; sd.mkdir(exist_ok=True, parents=True)
                        with (sd / (ident.split('_', 1)[1] + '.csv')).open('w', newline='') as f:
                            w = csv.DictWriter(f, fieldnames=['index','address','size','bind','type','shndx','name'])
                            w.writeheader(); w.writerows(symbols)
                        er = dict(**row, ident=ident, dependencies=deps, symbol_status=symbol_status,
                                  defined_functions=sum(s['type'] == 2 and s['shndx'] != 0 and s['size'] > 0 for s in symbols),
                                  imports=[s['name'] for s in symbols if s['shndx'] == 0 and s['name']],
                                  program_headers=ph, dynamic_tags=tags)
                        elfs.append(er)
                        if row['path'] in ['bin/' + x for x in TARGETS]:
                            binary = OUT / f'binaries/{bank}/{p.name}'
                            binary.parent.mkdir(exist_ok=True, parents=True)
                            binary.write_bytes(data)
                            strings = ''.join(f'0x{m.start():08x}\t{m.group().decode("ascii")}\n'
                                              for m in re.finditer(rb'[\x20-\x7e]{4,}', data))
                            (OUT / f'evidence/{bank}_{p.name}.strings.txt').write_text(strings)
                            capture([LLVM, '-d', str(binary)], OUT / f'asm/{bank}/{p.name}.s')
                            selected.append(dict(bank=bank, name=p.name, sha256=row['sha256'],
                                                 symbols=f'symbols/{bank}/bin__{p.name}.csv',
                                                 binary=f'binaries/{bank}/{p.name}'))
                else:
                    row.update(kind='special')
                inventory.append(row)
            dirs[:] = [d for d in dirs if not (Path(base) / d).is_symlink()]
    for name in ['bootloader_unpacked', 'kernel_010000', 'kernel_410000']:
        data = (OUT / f'images/{name}.bin').read_bytes()
        (OUT / f'evidence/{name}.strings.txt').write_text(''.join(
            f'0x{m.start():08x}\t{m.group().decode("ascii")}\n'
            for m in re.finditer(rb'[\x20-\x7e]{5,}', data)))
    for file, value in [('rootfs-inventory.json', inventory), ('elf-inventory.json', elfs),
                        ('selected-binaries.json', selected)]:
        (OUT / 'evidence' / file).write_text(json.dumps(value, ensure_ascii=False, indent=2) + '\n')
    print(f'{len(inventory)} extracted entries; {len(elfs)} ELF files; {len(selected)} selected executables')

if __name__ == '__main__':
    main()
