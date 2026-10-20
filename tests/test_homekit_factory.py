#!/usr/bin/env python3
"""Run patched stock HAP reset in qemu-user, with synthetic MIB/NOR only."""
import argparse,hashlib,json,os,subprocess,sys,tempfile
from pathlib import Path
ROOT=Path(__file__).resolve().parents[1]
sys.path.insert(0,str(ROOT/'tools'))
from fwlib import read_file

def main():
 p=argparse.ArgumentParser(description=__doc__)
 p.add_argument('--toolchains',type=Path,required=True);p.add_argument('--deps',type=Path,required=True)
 p.add_argument('--output',type=Path,required=True);p.add_argument('--release-dir',type=Path);a=p.parse_args()
 rootfs=(ROOT/'artifacts/update-base/matter-8m-region.bin').read_bytes()[0x130000:0x3c0000]
 # The pinned public template stores the vendor rootfs in Bank 1.
 original=read_file(rootfs,'bin/homekitserver')
 assert hashlib.sha256(original).hexdigest()=='2d50339436759f3d602c150fb4f1a42f0fdf122fc18e9a4f54f6e6b07d7a0c62'
 patched=bytearray(original)
 for off,old,new in [(0x1ae5b8,b'flash default-sw\0',b'/bin/ck-reset'),(0x1ae5e0,b'homekitserver -c\0',b'true')]:
  assert patched[off:off+len(old)]==old;patched[off:off+len(old)]=new.ljust(len(old)-1,b' ')+b'\0'
 assert patched[0x1b8e4:0x1b8e8]==bytes.fromhex('24040001');patched[0x1b8e4:0x1b8e8]=bytes.fromhex('24040000')
 if a.release_dir:
  package=(a.release_dir/'matter.ota').read_bytes();patched=read_file(package[256:],'bin/homekitserver')
 with tempfile.TemporaryDirectory(prefix='ck-hap-reset-') as td:
  fixture=Path(td);r=fixture/'root'
  for name in ['lib','bin','dev','var/run','tmp']: (r/name).mkdir(parents=True,exist_ok=True)
  for name in ['libgcc_s.so.1','libpthread.so.0','libdl.so.0','librt.so.0','libm.so.0','libc.so.0','ld-uClibc.so.0']:
   (r/'lib'/name).write_bytes(read_file(rootfs,'lib/'+name))
  (r/'bin/homekitserver').write_bytes(patched);(r/'bin/homekitserver').chmod(0o755)
  before=bytes((i*31+7)%256 for i in range(0x20000));flash=r/'dev/mtdblock2';flash.write_bytes(before)
  # Any MIB write or default-reset call exits with 89: the CLI patch must avoid it.
  (fixture/'mib.c').write_text('''
static void forbidden(void){register long n __asm__("$2")=4001;register long v __asm__("$4")=89;__asm__ volatile("syscall" : "+r"(n):"r"(v):"memory");for(;;){}}
int apmib_init(void){return 1;}
int apmib_get(int id,void *out){if(id==23){unsigned char *p=out;for(int i=0;i<6;i++)p[i]=(unsigned char)(i+16);}else *(int *)out=id==688?1:0;return 1;}
int apmib_set(int id,void *p){forbidden();return 0;}
int apmib_update(int x){forbidden();return 0;}
int apmib_updateDef(void){forbidden();return 0;}
''')
  docker=['docker','run','--rm','--network','none','-v',str(fixture)+':/fixture','-v',str(a.toolchains.resolve())+':/work/toolchains:ro','-v',str(a.deps.resolve())+':/work/deps:ro','incipio-public-build:v0.1.0-preview']
  subprocess.run([*docker,'/work/toolchains/uclibc/bin/mips-linux-uclibc-gcc','-shared','-nostdlib','-Os','-fPIC','-mno-llsc','-Wl,--hash-style=sysv','-Wl,-soname,libapmib.so','/fixture/mib.c','-o','/fixture/root/lib/libapmib.so'],check=True)
  result=subprocess.run([*docker,'qemu-mips','-L','/fixture/root','/fixture/root/bin/homekitserver','-c'],capture_output=True,timeout=15)
  assert result.returncode==0,('HAP reset failed',result.returncode,result.stderr[-1000:])
  after=flash.read_bytes();assert len(after)==len(before)
  assert after[:4]==b'PHRX' and after[4:0xa5d]==b'\0'*(0xa5d-4),after[:20].hex()
  assert after[0xa5d:]==before[0xa5d:],'factory/calibration tail changed'
  report={'status':'pass','real_outlet':False,'environment':'original MIPS HAP ELF and vendor uClibc under qemu-user; synthetic apmib and regular NOR file; no RF/MFi/hardware',
   'checks':['patched stock -c resets HAP pairing header and entire pairing area','MIB set/update/default calls forbidden; none executed','all bytes after 0xa5d, including factory PIN/calibration tail, unchanged'],
   'original_sha256':hashlib.sha256(original).hexdigest(),'patched_sha256':hashlib.sha256(patched).hexdigest(),'length':len(patched),'changed_bytes':sum(x!=y for x,y in zip(before,after))}
  a.output.write_text(json.dumps(report,indent=2)+'\n');print(json.dumps(report,indent=2))
if __name__=='__main__':main()
