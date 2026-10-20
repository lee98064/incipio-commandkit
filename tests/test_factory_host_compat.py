#!/usr/bin/env python3
"""Strict host recovery checks for the known Boa kernel wrapper; no hardware."""
import argparse,json,struct,sys
from pathlib import Path
ROOT=Path(__file__).resolve().parents[1]
sys.path.insert(0,str(ROOT/'tools'))
from fwlib import START,compatible,compatibility,image_checks,sha
from factory_image import factory_kernel,identities

def main():
 p=argparse.ArgumentParser(description=__doc__)
 p.add_argument('--reference',type=Path,required=True)
 p.add_argument('--output',type=Path,required=True)
 a=p.parse_args();legacy=a.reference.read_bytes()
 expected=json.loads((ROOT/'third_party/platform.json').read_text());compatible(legacy,expected)
 wrapped=bytearray(legacy);kernel=bytearray(factory_kernel(legacy,expected));struct.pack_into('>I',kernel,8,0x8000004d)
 wrapped[0x10000:START]=kernel
 assert compatibility(wrapped)['bank1_kernel_sha256']==identities()['FACTORY']
 accepted=0;rejected=0
 for mark in [0x8000004d,0x80000050,0xfffffff0]:
  changed=bytearray(wrapped);struct.pack_into('>I',changed,0x10008,mark)
  before=bytes(changed);compatible(changed,expected);assert changed==before;accepted+=1
 for offset in [0x10004,0x1000c,0x10010,0x120000,0x12ffff,0x410010,0x530100]:
  changed=bytearray(wrapped);changed[offset]^=1
  before=bytes(changed)
  try:compatible(changed,expected)
  except ValueError:rejected+=1
  else:raise AssertionError('accepted a modified executable/header/padding')
  assert changed==before
 for mark in [0,0x10000,0x80000001]:
  changed=bytearray(wrapped);struct.pack_into('>I',changed,0x10008,mark)
  try:compatible(changed,expected)
  except ValueError:rejected+=1
  else:raise AssertionError('accepted an invalid boot mark')
 # A malicious kernel with a freshly repaired checksum must still fail hash matching.
 changed=bytearray(wrapped);changed[0x10080]^=1;changed[START-2:START]=b'\0\0'
 total=sum(x[0] for x in struct.iter_unpack('>H',changed[0x10010:START]))
 struct.pack_into('>H',changed,START-2,(-total)&65535);image_checks(changed)
 try:compatible(changed,expected)
 except ValueError:rejected+=1
 else:raise AssertionError('accepted modified code with a valid checksum')
 report={'status':'pass','physical_device_access':False,'accepted_known_wrapper_marks':accepted,
         'rejected_code_header_padding_bank2_or_invalid_mark':rejected,
         'legacy_kernel_sha256':identities()['LEGACY'],'factory_kernel_sha256':identities()['FACTORY'],
         'input_preserved':True,'checks':['same strict kernel alternative as production OTA verifier','only bank mark normalized; full code/padding/checksum hashed','Bank 2 identity retained','mutated code rejected even with repaired checksum']}
 a.output.write_text(json.dumps(report,indent=2)+'\n');print(json.dumps(report,indent=2))
if __name__=='__main__':main()
