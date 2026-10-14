#!/usr/bin/env python3
import sys,stat,subprocess,hashlib,json
from pathlib import Path
sys.path.insert(0,'tools')
# newc builder kept local; these secret-bearing fixtures stay private.
root=Path('/work');art=root/'artifacts/softap-device-code';records=[]
subprocess.run([str(root/'toolchains/uclibc/bin/mips-linux-uclibc-gcc'),'-Os','-static',
 '-mno-llsc','-mmemcpy',str(root/'src/setup/mib_device_test_init.c'),'-o',str(art/'mib-test-init')],check=True)
def entry(name,data=b'',mode=stat.S_IFREG|0o755,rdev=(0,0)):
 name=name.encode()+b'\0';fields=[len(records)+1,mode,0,0,1,0,len(data),0,0,*rdev,len(name),0]
 blob=b'070701'+b''.join(f'{x:08x}'.encode() for x in fields)+name;blob+=b'\0'*(-len(blob)%4);blob+=data;blob+=b'\0'*(-len(data)%4);records.append(blob)
for name in ['bin','lib','dev','proc','var','tmp']:entry(name,mode=stat.S_IFDIR|0o755)
entry('dev/console',mode=stat.S_IFCHR|0o600,rdev=(5,1));entry('dev/null',mode=stat.S_IFCHR|0o666,rdev=(1,3))
entry('init',(art/'mib-test-init').read_bytes());entry('bin/ck-wificfg',(art/'ck-wificfg').read_bytes())
for name in ['ld-uClibc.so.0','libapmib.so','libc.so.0','libgcc_s.so.1']:
 entry('lib/'+name,(Path('/firmware/lib')/name).read_bytes())
b=(root/'private/vendor-mib-backup.bin').read_bytes()[:0x130000]
entry('dev/mtdblock0',b,stat.S_IFREG|0o600);entry('before.bin',b,stat.S_IFREG|0o600)
entry('ap.bin',(root/'private/device-test-A/ck-setup-ap.bin').read_bytes(),stat.S_IFREG|0o600)
blob=bytearray(104);blob[:4]=b'CKW1';blob[4:7]=bytes([11,13,1]);blob[8:19]=b'Lab-Network';blob[40:53]=b'ExamplePass42';entry('station.bin',blob,stat.S_IFREG|0o600)
blob=bytearray(104);blob[:4]=b'CKW1';blob[4]=10;blob[8:18]=b'Open-Guest';entry('station-open.bin',blob,stat.S_IFREG|0o600)
entry('TRAILER!!!',mode=0);out=root/'private/device-mib-test.cpio';out.write_bytes(b''.join(records));out.chmod(0o600)
print('fixture_sha256',hashlib.sha256(out.read_bytes()).hexdigest())
