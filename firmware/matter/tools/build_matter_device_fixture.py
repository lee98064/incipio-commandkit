#!/usr/bin/env python3
"""Isolated full MIPS VM: native Matter initialization on br0 under 8 MiB AS."""
import hashlib,json,stat,subprocess
from pathlib import Path
OUT=Path('/work');ART=OUT/'artifacts/softap-device-code';EV=OUT/'evidence/softap-device-code'
EV.mkdir(parents=True,exist_ok=True)
cc=str(OUT/'toolchains/uclibc/bin/mips-linux-uclibc-gcc')
subprocess.run([cc,'-Os','-static','-mno-shared','-mno-llsc','-mno-load-store-pairs','-mmemcpy',
                str(OUT/'src/matter_device_init.c'),'-o',str(ART/'vm-init')],check=True)
records=[]
def entry(name,data=b'',mode=stat.S_IFREG|0o755,rdev=(0,0)):
    name=name.encode()+b'\0';fields=[len(records)+1,mode,0,0,1,0,len(data),0,0,*rdev,len(name),0]
    blob=b'070701'+b''.join(f'{x:08x}'.encode() for x in fields)+name
    blob+=b'\0'*(-len(blob)%4);blob+=data;blob+=b'\0'*(-len(data)%4);records.append(blob)
for name in ['bin','dev','proc','var','tmp','etc']:entry(name,mode=stat.S_IFDIR|0o755)
for name,mode,device in [('console',0o600,(5,1)),('null',0o666,(1,3)),('urandom',0o444,(1,9))]:
    entry('dev/'+name,mode=stat.S_IFCHR|mode,rdev=device)
entry('dev/ttyS1',mode=stat.S_IFCHR|0o600,rdev=(4,65));entry('tmp/gpio',b' '*32,mode=stat.S_IFREG|0o600)
entry('etc/matter-device.key',(OUT/'private/device-identity.key').read_bytes(),mode=stat.S_IFREG|0o600)
entry('init',(ART/'vm-init').read_bytes());entry('bin/matterd-test',(ART/'matterd-test').read_bytes())
for name in ['mii.ko','pcnet32.ko']:entry(name,(OUT/'deps/downloads'/name).read_bytes())
entry('TRAILER!!!',mode=0);(ART/'vm.cpio').write_bytes(b''.join(records))
files=[OUT/'src/matter_device_init.c',ART/'vm-init',ART/'vm.cpio',ART/'matterd-test']
files.extend(OUT/'deps/downloads'/name for name in ['vmlinux-4.19.0-21-4kc-malta','mii.ko','pcnet32.ko'])
(EV/'vm-inputs.json').write_text(json.dumps({str(p.relative_to(OUT)):hashlib.sha256(p.read_bytes()).hexdigest() for p in files},indent=2)+'\n')
