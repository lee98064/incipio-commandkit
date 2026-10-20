#!/usr/bin/env python3
"""Inspect the actual signed-payload filesystem; never access an outlet."""
import argparse
import hashlib
import json
import re
import sys
from pathlib import Path

ROOT=Path(__file__).resolve().parents[2]
sys.path.insert(0,str(ROOT/'tools'))
from fwlib import read_file,file_inventory,rootfs_check

def digest(data):return hashlib.sha256(data).hexdigest()

def main():
    p=argparse.ArgumentParser(description=__doc__)
    p.add_argument('--release-dir',type=Path,required=True)
    p.add_argument('--test-logs',type=Path)
    p.add_argument('--output',type=Path,required=True)
    a=p.parse_args()
    package=(a.release_dir/'matter.ota').read_bytes();root=package[256:]
    assert package[:8]==b'CKOTA1\r\n' and int.from_bytes(package[20:24],'big')>=10
    version=int.from_bytes(package[20:24],"big")
    hap=read_file(root,'bin/homekitserver');original=bytearray(hap)
    for offset,command in ((0x1ae5b8,b'flash default-sw\0'),(0x1ae5e0,b'homekitserver -c\0')):
        action=b'/bin/ck-reset' if version>=11 and offset==0x1ae5b8 else b'true'
        replacement=action.ljust(len(command)-1,b' ')+b'\0'
        assert original[offset:offset+len(command)]==replacement
        original[offset:offset+len(command)]=command
    if version>=11:
        assert original[0x1b8e4:0x1b8e8]==bytes.fromhex("24040000")
        original[0x1b8e4:0x1b8e8]=bytes.fromhex("24040001")
    if version>=13:
        from homekit_led import restore
        original=bytearray(restore(original,json.loads(read_file(root,"etc/ck-homekit-led.json"))))
    else:assert len(hap)==2116412
    assert digest(original)=='2d50339436759f3d602c150fb4f1a42f0fdf122fc18e9a4f54f6e6b07d7a0c62'
    inv=file_inventory(root)
    for lib in ['libgcc_s.so.1','libapmib.so','libpthread.so.0','libdl.so.0','librt.so.0','libm.so.0','libc.so.0','ld-uClibc.so.0']:
        assert 'lib/'+lib in inv
    assert 'bin/boa' not in inv and not any(n.startswith('web/') for n in inv)
    rc=read_file(root,'etc/init.d/rcS');inittab=read_file(root,'etc/inittab')
    assert inittab.count(b'::respawn:/bin/ck-protocol-start\n')==1
    for old in (b'\nhomekitserver\n',b'/bin/matter-test-start &',b'\nboa\n'):assert old not in rc
    sources={'bin/ck-updater':'firmware/matter/artifacts/update/ck-updater',
             'bin/ck-updated':'firmware/matter/artifacts/update/ck-updated',
             'bin/ck-boot-guard':'firmware/matter/artifacts/update/ck-boot-guard',
             'bin/matterd-test':'firmware/matter/artifacts/softap-device-code/matterd-test',
             'bin/ck-setupd':'firmware/matter/artifacts/softap-device-code/ck-setupd',
             'bin/ck-protocol-start':'firmware/matter/src/setup/ck-protocol-start',
             'bin/matter-test-start':'firmware/matter/src/setup/matter-relay-start',
             'bin/ck-ota-start':'firmware/matter/src/update/ck-ota-start'}
    if version>=11:
        assert inittab.count(b"::respawn:/bin/ck-management-start\n")==1
        assert read_file(root,"etc/ck-admin-policy")==b"password-v1\n"
        for n in ("ck-management-start","ck-reset"):sources["bin/"+n]="firmware/matter/src/setup/"+n
    hashes={}
    for dest,source in sources.items():
        data=read_file(root,dest);assert data==(ROOT/source).read_bytes(),dest
        hashes[dest]=digest(data)
    report={'status':'pass','version':read_file(root,'etc/ck-version').decode().strip(),
            'software_version':int.from_bytes(package[20:24],'big'),'real_outlet':False,
            'checks':['exact production binaries and scripts match payload',
                      'one supervised protocol owner; no direct rcS protocol launch',
                      'HomeKit original segments restored byte-for-byte; reset patches and LED observer verified',
                      'original HAP shared libraries retained; unused Boa/router GUI removed',
                      'version 13: hash-bound LED observer segment and exact reversible patch manifest' if version>=13 else 'legacy HAP layout'],
            'rootfs':rootfs_check(root),'ota_sha256':digest(package),
            'original_homekit_sha256':digest(original),'homekit_sha256':digest(hap),
            'homekit_elf_bytes':len(hap),'production_sha256':hashes,
            'limitations':['No physical HomeKit/MFi, RF or iPhone pairing validation',
                           'HomeKit pauses custom web measurements and kWh accumulation; saved checkpoints remain',
                           'HomeKit daemon lifecycle tests use a fixture',
                           'Network VM uses 64 MiB/Linux 4.19 and MIB/import fixtures, not actual 32 MiB hardware',
                           'No CH341A write, live reset/switch, git push or publication performed']}
    report['rootfs_free_bytes']=0x290000-report['rootfs']['checksum_extent']
    if a.test_logs:
        if version>=11:
            names=['led-v0.2.11/full-combined.log','led-v0.2.11/deployment.log'] if version>=13 else ['v0.2.10-recovery-update-tests.log','v0.2.10-recovery-deployment-tests.log'] if version>=12 else ['v0.2.9-update-tests.log','v0.2.9-deployment-tests.log','v0.2.9-portal-tests.log','v0.2.9-password-tests.log']
            count=55 if version>=13 else 50 if version>=12 else 48
            log=(a.test_logs/names[0]).read_text()
            assert len(re.findall(r'Ran '+str(count)+r' tests[^\n]*\n\nOK',log))==2
            deploy=(a.test_logs/names[1]).read_text()
            assert re.search(r'Ran 13 tests[^\n]*\n\nOK \(skipped=1\)',deploy)
            report['tests']={'native_storage_ota_http_admin_protocol':count,'mips_storage_ota_http_admin_protocol':count,
                'deployment_and_hap_layout_passed':12,'diagnostic_variant_not_shipped_skipped':1}
        else:
            names=['v0.2.8-update-tests.log','v0.2.8-deployment-tests.log','v0.2.8-portal-tests.log']
            log=(a.test_logs/names[0]).read_text()
            assert len(re.findall(r'Ran 39 tests[^\n]*\n\nOK',log))==2
            deploy=(a.test_logs/names[1]).read_text();assert re.search(r'Ran 13 tests[^\n]*\n\nOK',deploy)
            report['tests']={'native_storage_ota_http_protocol':39,'mips_storage_ota_http_protocol':39,'deployment_and_hap_layout':13}
        report['tests']['test_log_sha256']={name:digest((a.test_logs/name).read_bytes()) for name in names}
    a.output.write_text(json.dumps(report,ensure_ascii=False,indent=2)+'\n')
    print(json.dumps({k:report[k] for k in ('status','ota_sha256','rootfs_free_bytes')},indent=2))

if __name__=='__main__':main()
