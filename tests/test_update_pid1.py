#!/usr/bin/env python3
"""Exercise the real Linux PID1 quiesce/pivot/reboot path in an isolated container.

Only a regular NOR fixture is writable. No host PID/network/device namespace is used.
"""
import hashlib
import json
import os
import struct
import subprocess
import tempfile
from pathlib import Path
from cryptography.hazmat.primitives.asymmetric.ed25519 import Ed25519PrivateKey
from test_updates import package, public, rootfs, START, END
ROOT=Path(__file__).resolve().parents[1]

def main():
    with tempfile.TemporaryDirectory(prefix='ck-pid1-') as tmp:
        work=Path(tmp)
        for name in ['etc','var/lock','var/lib/ck-state','var/run/ck-ota']:(work/name).mkdir(parents=True,exist_ok=True)
        key=Ed25519PrivateKey.generate()
        (work/'etc/ck-update.pub').write_bytes(public(key))
        (work/'etc/ck-update.meta').write_bytes(struct.pack('>III',0x434b0004,1,1))
        (work/'etc/matter-device.key').write_bytes(os.urandom(32))
        (work/'etc/matter-diag.key').write_text(os.urandom(32).hex()+'\n')
        image=bytearray(bytes(range(256))*(0x800000//256));image[0x3c0000:0x3e0000]=b'\xff'*0x20000
        (work/'flash.bin').write_bytes(image);(work/'update.ota').write_bytes(package(key,image))
        docker=['docker','run','--rm','--network','none','--pids-limit','32',
                '-e','CK_TEST_ROOT=/fixture','-e','CK_FLASH_FILE=/fixture/flash.bin',
                '-v',str(work)+':/fixture','-v',str(ROOT)+':/repo:ro']
        binary='/repo/firmware/matter/artifacts/update-test/ck-updater'
        for args in [['--import'],['--stage','/fixture/update.ota']]:
            subprocess.run([*docker,'incipio-public-build:v0.1.0-preview','qemu-mips',binary,*args],check=True,timeout=30)
        before=(work/'flash.bin').read_bytes()
        sources=['ck_common.c','ck_flash.c','ck_store.c','ck_ota.c','ck_updater.c']
        common=['/repo/firmware/matter/src/update/'+p for p in sources]
        common += ['/repo/firmware/matter/src/vendor/monocypher/'+p for p in ['monocypher.c','monocypher-ed25519.c']]
        subprocess.run([*docker,'incipio-public-build:v0.1.0-preview','cc','-static','-O2','-DCK_TESTING','-DCK_TEST_PID1',*common,'-o','/fixture/apply-native'],check=True,timeout=60)
        command=[*docker,'--cap-add','SYS_ADMIN','--cap-add','SYS_BOOT','--security-opt','seccomp=unconfined',
            '--security-opt','apparmor=unconfined','--name','incipio-ota-pid1-test','incipio-public-build:v0.1.0-preview','sh','-c',
            'mkdir -p /var/run/ck-ota && mount -t ramfs ramfs /var/run/ck-ota && cp /fixture/apply-native /var/run/ck-ota/apply && exec /var/run/ck-ota/apply --pid1']
        try:result=subprocess.run(command,capture_output=True,timeout=45)
        finally:subprocess.run(['docker','rm','-f','incipio-ota-pid1-test'],stdout=subprocess.DEVNULL,stderr=subprocess.DEVNULL)
        after=(work/'flash.bin').read_bytes()
        assert after[START:END]==rootfs(),f'PID1 path did not complete, exit={result.returncode}: {result.stderr[-1500:]!r}'
        assert before[:START]==after[:START] and before[END:]==after[END:]
        report={'status':'pass','environment':'native Linux PID1 in private container namespaces; regular-file NOR fixture; separate MIPS writer suite',
                'checks':['real process quiesce and pivot_root branch','updater executable copied to ramfs',
                          'rootfs written and read back','all protected bytes and journal unchanged','namespace reboot'],
                'physical_device_access':False,'container_exit_code':result.returncode,
                'updater_sha256':hashlib.sha256((work/'apply-native').read_bytes()).hexdigest()}
        print(json.dumps(report,indent=2))

if __name__=='__main__':main()
