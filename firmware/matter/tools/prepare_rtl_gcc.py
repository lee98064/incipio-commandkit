#!/usr/bin/env python3
"""Independent GCC source link farm; upstream/musl compiler sources untouched."""
from pathlib import Path
root=Path('/work/deps/gcc-rtl8196e')
base=Path('/work/deps/musl-cross-make/build/local/mips-linux-musl/src_gcc')
def farm(destination,source,expand):
    destination.mkdir(parents=True,exist_ok=True)
    for item in source.iterdir():
        dest=destination/item.name
        if item.name in expand:
            farm(dest,item,expand[item.name])
        elif not dest.exists():dest.symlink_to(item)
farm(root,base,{'gcc':{'config':{'mips':{}}}})
p=root/'gcc/config/mips/mips.h'
if p.is_symlink():
    original=p.read_text();p.unlink()
    start=original.index('#define ISA_HAS_LWL_LWR')
    end=original.index('\n\n',start)
    old=original[start:end]
    new='/* RTL8196E/Lexra target: no unaligned word-pair instructions. */\n#define ISA_HAS_LWL_LWR 0'
    p.write_text(original[:start]+new+original[end:])
    evidence=Path('/work/evidence/runtime-v2/gcc-no-unaligned.patch')
    import difflib
    evidence.write_text(''.join(difflib.unified_diff(original.splitlines(True),p.read_text().splitlines(True),
                       fromfile='upstream/gcc/config/mips/mips.h',tofile='rtl8196e/gcc/config/mips/mips.h')))
