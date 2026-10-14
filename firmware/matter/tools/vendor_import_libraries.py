#!/usr/bin/env python3
"""Build-only import DSOs for section-less vendor ELFs; NEVER ship these DSOs.

They describe the actual exported function names/SONAME for the linker; the
device and tests use the unmodified original libraries and implementations.
"""
import hashlib,json,struct,subprocess
from pathlib import Path
root=Path('/work/artifacts/softap/import-only');root.mkdir(parents=True,exist_ok=True)
cc='/work/toolchains/uclibc/bin/mips-linux-uclibc-gcc'
record=[]
for name,needed in [('libapmib.so',['apmib_init','apmib_get','apmib_set','apmib_update']),
    ('libc.so.0',['__uClibc_main','open','read','close','memcmp','strchr','memset','strcmp','printf','memcpy'])]:
    path=Path('/firmware/lib')/name;b=path.read_bytes()
    phoff=struct.unpack_from('>I',b,28)[0];es,n=struct.unpack_from('>HH',b,42)
    ph=[struct.unpack_from('>IIIIIIII',b,phoff+i*es) for i in range(n)]
    def offset(v):
        p=next(p for p in ph if p[0]==1 and p[2]<=v<p[2]+p[4]);return p[1]+v-p[2]
    d=next(p for p in ph if p[0]==2);tags=dict(struct.iter_unpack('>II',b[d[1]:d[1]+d[4]]))
    count=struct.unpack_from('>II',b,offset(tags[4]))[1];sy=offset(tags[6]);st=offset(tags[5]);names=set()
    for i in range(count):
        no,value,size,info,other,ndx=struct.unpack_from('>IIIBBH',b,sy+i*16)
        if ndx and info>>4 in (1,2):names.add(b[st+no:].split(b'\0')[0].decode())
    assert set(needed)<=names,(name,set(needed)-names)
    asm='.set noreorder\n.text\n'+''.join(f'.globl {s}\n.type {s},@function\n{s}:\n jr $ra\n nop\n' for s in needed)
    src=root/(name+'.S');src.write_text(asm)
    subprocess.run([cc,'-shared','-nostdlib','-Wl,--hash-style=sysv','-Wl,-soname,'+name,str(src),'-o',str(root/name)],check=True)
    record.append({'library':name,'vendor_sha256':hashlib.sha256(b).hexdigest(),'imported_functions':needed,'build_only':True})
Path('/work/evidence/softap/vendor-imports.json').write_text(json.dumps(record,indent=2)+'\n')
