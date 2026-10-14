#!/usr/bin/env python3
"""Hash all stable regular deliverables without following filesystem symlinks.

Run after intentionally updating generated analysis artifacts. This records
current contents; use validate_artifacts.py before it to check correctness.
"""
import hashlib
from pathlib import Path

OUT=Path(__file__).resolve().parents[1]

def main():
    records=[]
    for path in sorted(OUT.rglob('*')):
        relative=path.relative_to(OUT)
        if (path.is_symlink() or not path.is_file() or relative.as_posix()=='SHA256SUMS'
                or '__pycache__' in relative.parts or path.name.endswith('.lock')):
            continue
        records.append(hashlib.sha256(path.read_bytes()).hexdigest()+'  '+relative.as_posix())
    (OUT/'SHA256SUMS').write_text('\n'.join(records)+'\n')
    print(f'{len(records)} regular artifact hashes saved; symlink targets are in rootfs-inventory.json')

if __name__=='__main__':main()
