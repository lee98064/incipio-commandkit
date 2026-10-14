#!/usr/bin/env python3
"""Read-only artifact QA; only the generated validation record is written.

Normal mode verifies each extracted regular file independently with unsquashfs
-cat. --check-manifest verifies saved SHA256SUMS without changing any files.
No firmware executable is ever run.
"""
import argparse
import collections
import concurrent.futures
import csv
import hashlib
import json
import lzma
import os
import re
import shutil
import stat
import subprocess
from pathlib import Path
from inspect_image import inspect

OUT = Path(__file__).resolve().parents[1]
EXPECTED = None  # Resolve from this private case's extraction record.

def digest(path):
    return hashlib.sha256(path.read_bytes()).hexdigest()

def require(condition, message):
    if not condition:
        raise RuntimeError(message)

def load(name):
    return json.loads((OUT/'evidence'/name).read_text())

def check_manifest():
    count = 0
    for line in (OUT/'SHA256SUMS').read_text().splitlines():
        expected, relative = line.split('  ', 1)
        path = OUT/relative
        require(not path.is_symlink(), f'manifest follows symlink: {relative}')
        require(path.is_file() and digest(path) == expected, f'hash mismatch: {relative}')
        count += 1
    print(json.dumps(dict(status='passed',regular_files_verified=count)))

def main():
    global EXPECTED
    source = OUT.parent/'original_master.bin'
    data = source.read_bytes()
    EXPECTED = load('image-map.json')['input_sha256']
    require(len(data)==8388608 and digest(source)==EXPECTED, 'original input changed')
    require(stat.S_IMODE(source.stat().st_mode) in (0o400,0o444), 'original permissions changed')
    mapping = load('image-map.json')
    for item in mapping['images']:
        path=OUT/item['file']; offset=int(item['source_offset'],16)
        require(path.stat().st_size==item['size'] and digest(path)==item['sha256'],
                f'carved artifact mismatch: {path}')
        if item['kind']=='LZMA decompressed MIPS image':
            decoder=lzma.LZMADecompressor(format=lzma.FORMAT_ALONE)
            decoded=decoder.decompress(data[offset:])
            require(decoder.eof and decoded==path.read_bytes(),f'LZMA mismatch: {path}')
            require(len(data)-offset-len(decoder.unused_data)==item['compressed_size'],
                    f'LZMA stream length mismatch: {path}')
        else:
            require(data[offset:offset+item['size']]==path.read_bytes(),f'carving mismatch: {path}')
    boots=inspect(source)
    require(boots==load('boot-checks.json'), 'boot check record differs from recomputation')
    require(all(b['valid'] for b in boots['banks']), 'bank checksum failure')

    inventory=load('rootfs-inventory.json'); counts={}; skipped_devices={}
    for row in inventory:
        path=OUT/f"rootfs_{row['bank']}"/row['path']
        if row['kind']=='file':
            require(path.is_file() and not path.is_symlink() and digest(path)==row['sha256'],
                    f'extracted file mismatch: {path}')
        elif row['kind']=='symlink':
            require(path.is_symlink() and os.readlink(path)==row['target'],f'link mismatch: {path}')
        elif row['kind']=='directory':
            require(path.is_dir() and not path.is_symlink(),f'directory mismatch: {path}')
    for bank in ['130000','530000']:
        counts[bank]=dict(collections.Counter(x['kind'] for x in inventory if x['bank']==bank))
        listing=(OUT/f'evidence/rootfs_{bank}.listing.txt').read_text().splitlines()
        modes=collections.Counter(line[0] for line in listing if line)
        expected_inodes=next(i['inode_count'] for i in mapping['images'] if i['file']==f'images/rootfs_{bank}.sqsh')
        require(len(listing)==expected_inodes,f'inode listing mismatch: {bank}')
        require(modes['-']==counts[bank]['file'] and modes['l']==counts[bank]['symlink']
                and modes['d']==counts[bank]['directory']+1,f'extraction listing count mismatch: {bank}')
        skipped_devices[bank]=modes['b']+modes['c']
        require((OUT/f'evidence/rootfs_{bank}.pseudo').stat().st_size>0,f'device metadata missing: {bank}')
        for line in listing:
            if line.startswith('-'):
                match=re.match(r'^\S+\s+\S+\s+(\d+)\s+\S+\s+\S+\s+squashfs-root/(.+)$',line)
                require(match is not None,f'unrecognized file listing: {line}')
                require((OUT/f'rootfs_{bank}'/match[2]).stat().st_size==int(match[1]),f'file size mismatch: {line}')
    exe=shutil.which('unsquashfs')
    require(exe is not None, 'unsquashfs is needed to independently verify extracted file contents')
    def check_content(row):
        cp=subprocess.run([exe,'-cat',str(OUT/f"images/rootfs_{row['bank']}.sqsh"),row['path']],capture_output=True)
        require(cp.returncode==0,f'unsquashfs -cat failed: {row["bank"]}/{row["path"]}')
        require(hashlib.sha256(cp.stdout).hexdigest()==row['sha256'],f'independent extraction mismatch: {row["path"]}')
    files=[row for row in inventory if row['kind']=='file']
    with concurrent.futures.ThreadPoolExecutor(max_workers=4) as executor:
        list(executor.map(check_content,files))

    elfs=load('elf-inventory.json')
    for row in elfs:
        for suffix in ['info.json','imports.json']:
            path=OUT/f"evidence/elf/{row['ident']}.{suffix}"
            json.loads(path.read_text())
        symbols=OUT/f"symbols/{row['bank']}/{row['ident'].split('_',1)[1]}.csv"
        require(symbols.is_file(),f'symbol inventory missing: {symbols}')
        if row['symbol_status']!='PT_DYNAMIC parsed':
            json.loads((OUT/f"evidence/elf/{row['ident']}.symbols.json").read_text())
    selected=load('selected-binaries.json')
    for row in selected:
        require(digest(OUT/row['binary'])==row['sha256'],f'binary copy mismatch: {row["name"]}')
        require(digest(OUT/f"rootfs_{row['bank']}/bin/{row['name']}")==row['sha256'], 'rootfs binary differs')

    exports=[]
    for index in sorted((OUT/'decompiled').rglob('functions.tsv')):
        rows=list(csv.DictReader(index.open(),delimiter='\t'))
        for row in rows:
            require(row['status']=='ok',f'decompile failed: {index} {row["address"]}')
            c=index.parent/row['file']; asm=c.with_suffix('.s')
            require(c.stat().st_size>0 and asm.stat().st_size>0,f'function export missing: {c}')
        summary=dict(line.split('=',1) for line in (index.parent/'summary.txt').read_text().splitlines())
        require(int(summary['attempted'])==len(rows)==int(summary['succeeded']),f'summary mismatch: {index}')
        for name in ['calls.tsv','string_xrefs.tsv']:
            require((index.parent/name).is_file(),f'missing index: {name}')
        project=OUT/'ghidra'/index.parent.relative_to(OUT/'decompiled')/'Incipio.gpr'
        require(project.is_file(),f'editable project missing: {project}')
        exports.append(dict(target=str(index.parent.relative_to(OUT/'decompiled')),functions=len(rows)))
    require(len(exports)==19 and sum(x['functions'] for x in exports)==2297,'unexpected export coverage')
    meters=load('meter-data.json')
    require(meters['130000']['uart']['device']==meters['530000']['uart']['device']=='/dev/ttyACM0','UART record mismatch')
    require([x['hex'] for x in meters['130000']['frames']]==[x['hex'] for x in meters['530000']['frames']], 'meter frames differ')
    for bank in meters:
        require([x['value'] for x in meters[bank]['constants']]==[256.0,1/256,1/64,4.0],'meter constants mismatch')
    reconstructed=list((OUT/'src/reconstructed').glob('*.c'))
    subprocess.run(['clang','-std=c11','-Wall','-Wextra','-fsyntax-only',*[str(x) for x in reconstructed]],check=True)
    report=dict(status='passed',input_sha256=EXPECTED,input_size=len(data),input_mode='0444',
                image_artifacts=len(mapping['images']),rootfs_entries=counts,
                independently_verified_regular_files=len(files),device_nodes_preserved_as_metadata=skipped_devices,
                elf_files=len(elfs),elfs_with_recovered_dynamic_symbols=sum(x['symbol_status']=='PT_DYNAMIC parsed' for x in elfs),
                selected_binary_copies=len(selected),decompiled_projects=exports,
                exported_functions=sum(x['functions'] for x in exports),
                boot_checks_recomputed=True,offline_selected_bank=boots['offline_validation_selected_bank'],
                reconstructed_c_syntax='passed',firmware_executed=False,hardware_accessed=False)
    (OUT/'evidence/validation.json').write_text(json.dumps(report,ensure_ascii=False,indent=2)+'\n')
    print(json.dumps(report,ensure_ascii=False,indent=2))

if __name__=='__main__':
    parser=argparse.ArgumentParser();parser.add_argument('--check-manifest',action='store_true')
    args=parser.parse_args()
    check_manifest() if args.check_manifest else main()
