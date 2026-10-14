#!/usr/bin/env python3
"""Compare bytes, regular files, and function bytes without dynamic execution."""
import csv
import argparse
import hashlib
import json
from pathlib import Path
from analyze_elf import dynsym

OUT=Path(__file__).resolve().parents[1]

def main():
    parser=argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--previous',type=Path,required=True,help='caller-owned previous full dump')
    args=parser.parse_args()
    inventory=json.loads((OUT/'evidence/rootfs-inventory.json').read_text())
    maps={b:{x['path']:x for x in inventory if x['bank']==b and x['kind']!='directory'}
          for b in ['130000','530000']}
    a,b=maps.values();changed=[];same=[]
    for p in sorted(a.keys()|b.keys()):
        x,y=a.get(p),b.get(p)
        if x is None: status='only_10219'
        elif y is None: status='only_10206'
        elif x.get('sha256')==y.get('sha256') and x.get('target')==y.get('target') and x['kind']==y['kind']:
            same.append(p);continue
        else: status='changed'
        changed.append(dict(path=p,status=status,bank1=x,bank2=y))
    function_changes=[]
    for app in ['homekitserver','upgfw','WACServer','phytrex_tools']:
        versions=[]
        for bank in ['130000','530000']:
            data=(OUT/f'binaries/{bank}/{app}').read_bytes();syms,deps,ph,tags=dynsym(data)
            def offset(va):
                for t,o,v,p,fs,ms,fl,align in ph:
                    if t==1 and v<=va<v+fs:return o+va-v
                raise ValueError(va)
            m={}
            for s in syms:
                va=int(s['address'],0);size=int(s['size'])
                if s['type']!=2 or s['shndx']==0 or not size:continue
                o=offset(va); m[s['name']]=dict(address=s['address'],size=size,
                    sha256=hashlib.sha256(data[o:o+size]).hexdigest())
            versions.append(m)
        old,new=versions
        for n in sorted(old.keys()|new.keys()):
            x,y=old.get(n),new.get(n)
            status='added' if x is None else 'removed' if y is None else 'identical_bytes' if x['sha256']==y['sha256'] else 'different_bytes'
            function_changes.append(dict(binary=app,function=n,status=status,old=x,new=y))
    data=(OUT.parent/'original_master.bin').read_bytes()
    oldpath=args.previous
    old=oldpath.read_bytes();ranges=[];start=None
    for i,(x,y) in enumerate(zip(data,old)):
        if x!=y and start is None:start=i
        if x==y and start is not None:ranges.append([start,i]);start=None
    if start is not None:ranges.append([start,len(data)])
    result=dict(rootfs_same_entries=len(same),rootfs_differences=changed,
                prior_dump_sha256=hashlib.sha256(old).hexdigest(),
                changed_bytes=sum(e-s for s,e in ranges),
                changed_64k_blocks=[dict(offset=f'0x{o:06x}',changed_bytes=sum(x!=y for x,y in zip(data[o:o+65536],old[o:o+65536])))
                                    for o in range(0,len(data),65536) if data[o:o+65536]!=old[o:o+65536]])
    (OUT/'evidence/bank-comparison.json').write_text(json.dumps(result,indent=2)+'\n')
    (OUT/'evidence/function-comparison.json').write_text(json.dumps(function_changes,indent=2)+'\n')
    print('same rootfs entries',len(same),'differences',len(changed),'prior changed bytes',result['changed_bytes'])
    print('Byte differences include relocation/immediate/address changes; they do not alone prove semantic changes.')

if __name__=='__main__':main()
