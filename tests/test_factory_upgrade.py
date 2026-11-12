#!/usr/bin/env python3
"""Test a private factory image -> signed OTA using the actual MIPS updater.

Only regular files inside a temporary Docker fixture are written. The next
version is a synthetic test package, signed with a fresh throwaway key.
"""
import argparse
import json
import os
import struct
import subprocess
import sys
import tempfile
from pathlib import Path
from cryptography.hazmat.primitives.asymmetric.ed25519 import Ed25519PrivateKey
from cryptography.hazmat.primitives import serialization

ROOT=Path(__file__).resolve().parents[1]
sys.path.insert(0,str(ROOT/'tools'))
from factory_image import inspect, CANONICAL_MARK, KERNEL_SIZE
from fwlib import read_file, sha, START, END, file_inventory


def main():
    p=argparse.ArgumentParser(description=__doc__)
    p.add_argument('--image',type=Path,required=True)
    p.add_argument('--reference',type=Path,required=True)
    p.add_argument('--release-dir',type=Path,required=True)
    p.add_argument('--output',type=Path,required=True)
    a=p.parse_args()
    image=a.image.read_bytes();root=inspect(image);reference=a.reference.read_bytes()
    flash=bytearray(reference)
    kernel=bytearray(image[:KERNEL_SIZE]);struct.pack_into('>I',kernel,8,CANONICAL_MARK)
    flash[0x10000:START]=kernel;flash[START:0x3e0000]=image[KERNEL_SIZE+16:-16]
    next_package=bytearray((a.release_dir/'matter.ota').read_bytes())
    with tempfile.TemporaryDirectory(prefix='ck-factory-ota-') as name:
        work=Path(name);os.chmod(work,0o700)
        for path in ['etc','var/lock','var/lib/ck-state','var/run/ck-ota']:(work/path).mkdir(parents=True,exist_ok=True)
        inventory=file_inventory(root)
        public_image='etc/matter-device.key' not in inventory
        paths=['etc/ck-update.meta']+[path for path in ['etc/matter-device.key','etc/matter-diag.key','etc/ck-identity-policy'] if path in inventory]
        for path in paths:
            (work/path).write_bytes(read_file(root,path));(work/path).chmod(0o600)
        # Test identity and trust are local; the production signing key is never read.
        key=Ed25519PrivateKey.generate()
        public=key.public_key().public_bytes(serialization.Encoding.Raw,serialization.PublicFormat.Raw)
        (work/'etc/ck-update.pub').write_bytes(public)
        next_version=struct.unpack_from('>I',next_package,20)[0]+1
        struct.pack_into('>I',next_package,20,next_version)
        next_package[128:160]=public;next_package[192:256]=key.sign(bytes(next_package[:192]))
        (work/'next.ota').write_bytes(next_package)
        (work/'seed.bin').write_bytes(os.urandom(32))
        target=work/'flash.bin';target.write_bytes(flash);target.chmod(0o600)
        prefix=['docker','run','--rm','--network','none','-e','CK_TEST_ROOT=/fixture',
                '-e','CK_TEST_SEED_FILE=/fixture/seed.bin',
                '-e','CK_FLASH_FILE=/fixture/flash.bin','-v',str(work)+':/fixture',
                '-v',str(ROOT)+':/repo:ro','incipio-public-build:v0.1.0-preview',
                'qemu-mips','/repo/firmware/matter/artifacts/update-test/ck-updater']
        def run(*args,success=True):
            cp=subprocess.run(prefix+list(args),capture_output=True,timeout=30)
            assert (cp.returncode==0)==success,(args,cp.returncode,cp.stderr[-500:])
        run('--import');run('--boot');run('--confirm');run('--verify','/fixture/next.ota')
        if public_image:
            assert (work/'var/run/ck-first-setup').exists()
            run('--onboarded');run('--import')
            assert not (work/'var/run/ck-first-setup').exists()
            (work/'seed.bin').unlink()
        def onboarding():
            command=['docker','run','--rm','--mac-address','02:11:22:33:44:55',
                     '-v',str(work/'etc/ck-update.meta')+':/etc/ck-update.meta:ro',
                     '-v',str(work/'var/lib/ck-state')+':/var/lib/ck-state:ro',
                     '-v',str(work/'var/run')+':/var/run',
                     '-v',str(ROOT)+':/repo:ro','incipio-public-build:v0.1.0-preview',
                     'qemu-mips','/repo/firmware/matter/artifacts/softap-device-code/matterd-test',
                     '--init-identity','eth0']
            subprocess.run(command,capture_output=True,check=True,timeout=30)
            return {name:(work/'var/run'/name).read_bytes() for name in ['matter-device-identity','matter-manual-code','matter-qr.svg']}
        codes=onboarding()
        assert len(codes['matter-manual-code'])==11 and b'<svg' in codes['matter-qr.svg']
        run('--import');assert onboarding()==codes
        first_state=target.read_bytes();state_files={x.name:x.read_bytes() for x in (work/'var/lib/ck-state').iterdir()}
        # Boot marks change under the vendor dual-bank selector; executable
        # changes, padding changes and Bank 2 changes must still fail closed.
        for mark in (0x80000050,0xfffffff0):
            changed=bytearray(first_state);struct.pack_into('>I',changed,0x10008,mark);target.write_bytes(changed)
            run('--verify','/fixture/next.ota')
        for offset in (0x10010,0x120000,0x12ffff,0x410010,0x530100):
            changed=bytearray(first_state);changed[offset]^=1;target.write_bytes(changed)
            run('--verify','/fixture/next.ota',success=False)
            assert target.read_bytes()==changed
        target.write_bytes(first_state)
        run('--stage','/fixture/next.ota');run('--simulate')
        after=target.read_bytes()
        assert after[START:END]==bytes(next_package[256:])
        assert after[:START]==first_state[:START] and after[END:]==first_state[END:]
        for path,data in state_files.items():assert (work/'var/lib/ck-state'/path).read_bytes()==data
        run('--import');assert onboarding()==codes
        if not public_image:
            for name,path in [('device.key','etc/matter-device.key'),('diag.key','etc/matter-diag.key')]:
                assert (work/'var/lib/ck-state'/name).read_bytes()==read_file(root,path)
        report={'status':'pass','environment':'actual MIPS test updater under qemu-user; temporary regular-file NOR fixture',
            'image_sha256':sha(image),'updater_sha256':sha((ROOT/'firmware/matter/artifacts/update-test/ck-updater').read_bytes()),
            'checks':['first import into erased journal','boot and version confirmation',
                      'signed next-version OTA accepted on factory kernel','vendor boot-mark changes accepted',
                      'changed code/padding/Bank 2 rejected without writes','OTA rootfs write/readback',
                      'persistent identity and trust preserved across OTA','all ranges outside OTA rootfs preserved'],
            'public_image_without_preset_keys':public_image,
            'actual_mips_manual_and_qr_stable_across_reboot_and_ota':True,
            'physical_device_access':False,'factory_boot_tested':False}
        a.output.write_text(json.dumps(report,indent=2)+'\n');print(json.dumps(report,indent=2))


if __name__=='__main__':main()
