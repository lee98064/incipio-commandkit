#!/usr/bin/env python3
"""Run in the standalone public Linux build container with /work and /test mounts."""
import argparse, hashlib, json, stat, subprocess
from pathlib import Path
OUT = Path('/test')
OLD = Path('/work')
ART = OUT/'artifacts'
CC = OLD/'toolchains/uclibc/bin/mips-linux-uclibc-gcc'
parser=argparse.ArgumentParser()
parser.add_argument('--prepare-only',action='store_true')
parser.add_argument('--pack-only',action='store_true')
args=parser.parse_args()
for source, name, flags in ([] if args.pack_only else [('tests/vm_init.c','vm-init',[])]+[
        ('tests/failure_probe.c',name,[f'-DTEST_KIND={kind}'])
        for kind,name in [(1,'fixture_fault'),(2,'fixture_flood'),(3,'fixture_timeout')]]):
    subprocess.run([str(CC),'-Os','-static','-mno-llsc','-mmemcpy',*flags,
                    str(OUT/source),'-o',str(ART/name)],check=True)
rows=[]
for name,marker in [('fixture_fault','NEVER'),('fixture_flood','FLOOD-OK'),('fixture_timeout','NEVER')]:
    b=(ART/name).read_bytes()
    rows.append('{'+','.join(json.dumps(x) for x in [name,'/bin/'+name,'/var/log/'+name+'.txt',
                hashlib.sha256(b).hexdigest(),marker])+','+str(len(b))+'}')
(OUT/'tests/fixtures.h').write_text('static const Test tests[] = {\n'+',\n'.join(rows)+'\n};\n')
if args.prepare_only:
    print('VM fixtures prepared')
    raise SystemExit(0)
records=[]
def entry(name,data=b'',mode=stat.S_IFREG|0o755,rdev=(0,0)):
    name=name.encode()+b'\0'
    fields=[len(records)+1,mode,0,0,1,0,len(data),0,0,*rdev,len(name),0]
    blob=b'070701'+b''.join(f'{x:08x}'.encode() for x in fields)+name
    blob+=b'\0'*(-len(blob)%4);blob+=data;blob+=b'\0'*(-len(data)%4);records.append(blob)
for name in ['bin','dev','proc','var','tmp']:
    entry(name,mode=stat.S_IFDIR|0o755)
entry('dev/console',mode=stat.S_IFCHR|0o600,rdev=(5,1))
entry('dev/null',mode=stat.S_IFCHR|0o666,rdev=(1,3))
entry('dev/urandom',mode=stat.S_IFCHR|0o444,rdev=(1,9))
entry('init',(ART/'vm-init').read_bytes())
for name in ('exec-test-runner','exec-diag','ck-setupd','fixture-runner'):
    entry('bin/'+name,(ART/name).read_bytes())
for name in ('tiny_eb','tiny_gcc16','cpp_lean'):
    entry('bin/test-'+name,(ART/name).read_bytes(),stat.S_IFREG|0o444)
for name in ('fixture_fault','fixture_flood','fixture_timeout'):
    entry('bin/'+name,(ART/name).read_bytes(),stat.S_IFREG|0o444)
entry('test.key',(OUT/'private/diag.key').read_bytes(),stat.S_IFREG|0o600)
for name in ('mii.ko','pcnet32.ko'):
    entry(name,(OLD/'deps/downloads'/name).read_bytes())
entry('TRAILER!!!',mode=0)
(ART/'test-vm.cpio').write_bytes(b''.join(records))
inputs={'test-vm.cpio':hashlib.sha256((ART/'test-vm.cpio').read_bytes()).hexdigest(),
        'vm_kernel_sha256':hashlib.sha256((OLD/'deps/downloads/vmlinux-4.19.0-21-4kc-malta').read_bytes()).hexdigest()}
(OUT/'evidence/vm-inputs.json').write_text(json.dumps(inputs,indent=2)+'\n')
print('VM initramfs built')
