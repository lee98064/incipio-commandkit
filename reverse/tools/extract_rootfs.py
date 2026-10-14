#!/usr/bin/env python3
"""Extract ordinary files/symlinks and preserve special-device metadata locally."""
import shutil
import subprocess
from pathlib import Path

OUT=Path(__file__).resolve().parents[1]

def main():
    exe=shutil.which('unsquashfs')
    assert exe,'install squashfs-tools with LZMA support'
    for bank in ['130000','530000']:
        image=OUT/f'images/rootfs_{bank}.sqsh';dest=OUT/f'rootfs_{bank}'
        if dest.exists():raise SystemExit(f'{dest} already exists; use a fresh copy of the output tree to reproduce extraction.')
        cmd=[exe,'-no-progress','-no-xattrs','-d',str(dest),str(image)]
        cp=subprocess.run(cmd,capture_output=True,text=True)
        text=cp.stdout+cp.stderr
        (OUT/f'evidence/unsquashfs_{bank}.log').write_text(text)
        errors=[line for line in text.splitlines() if 'error' in line.lower() or 'could not' in line.lower()]
        if cp.returncode not in [0,2] or any(not line.startswith('create_inode: could not create ') for line in errors):
            raise RuntimeError(text)
        with (OUT/f'evidence/rootfs_{bank}.listing.txt').open('w') as f:
            subprocess.run([exe,'-lln',str(image)],stdout=f,check=True)
        subprocess.run([exe,'-pf',str(OUT/f'evidence/rootfs_{bank}.pseudo'),str(image)],check=True)
        print(bank,'extracted; special-device nodes remain represented in the image/listing/pseudo file')

if __name__=='__main__':main()
