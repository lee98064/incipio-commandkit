#!/usr/bin/env python3
"""Run the exact HAP observer under qemu, without UART, GPIO or physical NOR."""
import argparse,hashlib,json,struct,subprocess,sys,tempfile
from pathlib import Path
ROOT=Path(__file__).resolve().parents[1];sys.path.insert(0,str(ROOT/'tools'))
from fwlib import read_file
from homekit_led import build_payload,patch,restore,ORIGINAL_SHA

def main():
 p=argparse.ArgumentParser(description=__doc__);p.add_argument('--output',type=Path,required=True);a=p.parse_args()
 base=(ROOT/'artifacts/update-base/matter-8m-region.bin').read_bytes()[0x130000:0x3c0000];original=read_file(base,'bin/homekitserver')
 assert hashlib.sha256(original).hexdigest()==ORIGINAL_SHA
 with tempfile.TemporaryDirectory(prefix='ck-hap-led-') as td:
  t=Path(td);r=t/'root'
  for name in ['lib','bin','tmp','var/run']:(r/name).mkdir(parents=True,exist_ok=True)
  for name in ['libapmib.so','libgcc_s.so.1','libpthread.so.0','libdl.so.0','librt.so.0','libm.so.0','libc.so.0','ld-uClibc.so.0']:(r/'lib'/name).write_bytes(read_file(base,'lib/'+name))
  payload,symbols=build_payload(t/'build',test=True);patched,record=patch(original,payload,symbols,test=True)
  assert restore(patched,record)==original
  (r/'bin/homekitserver').write_bytes(patched);(r/'bin/homekitserver').chmod(0o755)
  (r/'tmp/ck-led-test-input').write_bytes(bytes.fromhex('fe313156ff060055'))
  # Run qemu inside an isolated chroot: both rename paths use actual RAM
  # fixture files, with no qemu prefix rewriting or host device access.
  for path in ['ck-led-homekit.bin','ck-led-homekit.bin.tmp','ck-led-homekit-identify','ck-led-homekit-identify.tmp']:(r/'var/run'/path).write_bytes(b'')
  driver="""
import os,pathlib,re,shutil,subprocess
root=pathlib.Path('/fixture/root')
paths=['/usr/bin/qemu-mips']+re.findall(r'/[^ ()\\n]+',subprocess.check_output(['ldd','/usr/bin/qemu-mips'],text=True))
for name in paths:
 dest=root/name.lstrip('/');dest.parent.mkdir(parents=True,exist_ok=True);shutil.copy2(name,dest)
os.execvp('chroot',['chroot',str(root),'/usr/bin/qemu-mips','-strace','/bin/homekitserver'])
"""
  run=subprocess.run(['docker','run','--rm','--network','none','-v',str(t)+':/fixture','incipio-public-build:v0.1.0-preview','python3','-c',driver],capture_output=True,timeout=15)
  if run.returncode:a.output.with_suffix('.trace.log').write_bytes(run.stderr)
  assert run.returncode==0,(run.returncode,run.stdout.decode(errors='replace'),run.stderr.decode(errors='replace')[-3000:])
  b=(r/'var/run/ck-led-homekit.bin').read_bytes();assert len(b)==56 and b[:8]==b'CKLEDHW1'
  now,relay,power,identify,mw,flags,seq,reserved=struct.unpack('>QQQQIIII',b[8:]);assert relay>0 and power>=relay and now>=power and mw==6000 and flags&7==7 and seq==1 and reserved==0
  until=int.from_bytes((r/'var/run/ck-led-homekit-identify').read_bytes(),'big');assert 14900<=until-now<=15500
  report={'status':'pass','real_outlet':False,'original_sha256':ORIGINAL_SHA,'test_payload_sha256':hashlib.sha256(payload).hexdigest(),'checks':['original libc read bridge including lazy GP binding','confirmed relay response observed','power response observed and fresh timestamps published','bounded identify deadline and no GPIO writes','patch restoration exactly recovers original ELF'],'limitations':['qemu-user does not validate physical MCU timing, MFi or LED polarity']}
  a.output.parent.mkdir(parents=True,exist_ok=True);a.output.write_text(json.dumps(report,indent=2)+'\n');print(json.dumps(report,indent=2))
if __name__=='__main__':main()
