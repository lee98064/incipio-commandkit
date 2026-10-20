#!/usr/bin/env python3
"""Execute the C journal, verifier, writer, and HTTP server on a NOR fixture.

Run in Linux: python3 tests/test_updates.py. CK_TESTING has no physical MTD path.
"""
import ctypes
import hashlib
import http.client
import hmac
import json
import os
import socket
import signal
import fcntl
import shlex
import struct
import subprocess
import sys
import tempfile
import time
import threading
import unittest
from pathlib import Path
from cryptography.hazmat.primitives.asymmetric.ed25519 import Ed25519PrivateKey
from cryptography.hazmat.primitives import serialization

ROOT=Path(__file__).resolve().parents[1]
SOURCE=ROOT/'firmware/matter/src'
START,END,JOURNAL=0x130000,0x3c0000,0x3c0000

def public(key):return key.public_key().public_bytes(serialization.Encoding.Raw,serialization.PublicFormat.Raw)
def rootfs(seed=17):
    data=bytearray(b'\xff'*(END-START));data[:1026]=bytes([seed])*1026
    data[:4]=b'hsqs';struct.pack_into('>I',data,8,1026-0x282);struct.pack_into('<Q',data,40,96)
    data[1024:1026]=b'\0\0';total=sum(x[0] for x in struct.iter_unpack('>H',data[:1026]))
    struct.pack_into('>H',data,1024,(-total)&65535);return bytes(data)
def package(key,image,version=2,variant=1,model=0x434b0004):
    payload=rootfs();h=bytearray(256)
    struct.pack_into('>8s6I',h,0,b'CKOTA1\r\n',1,model,variant,version,len(payload),0)
    h[32:64]=hashlib.sha256(payload).digest();h[64:96]=hashlib.sha256(image[0x10000:START]).digest()
    h[96:128]=hashlib.sha256(image[0x410000:0x7e0000]).digest();h[128:160]=public(key);h[160:165]=b'0.2.0';h[192:]=key.sign(h[:192])
    return bytes(h)+payload

class Updates(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.build=tempfile.TemporaryDirectory(prefix='ck-update-build-');cls.bin=Path(cls.build.name)
        common=[str(SOURCE/'update'/p) for p in ['ck_common.c','ck_flash.c','ck_store.c','ck_energy.c','ck_ota.c','ck_meter.c','ck_led.c']]
        common += [str(SOURCE/'vendor/monocypher'/p) for p in ['monocypher.c','monocypher-ed25519.c']]
        flags=['cc','-DCK_TESTING','-std=c11','-O2','-g','-Wall','-Wextra','-Werror','-Wno-misleading-indentation','-Wno-unused-function']
        subprocess.run(flags+['-shared','-fPIC',*common,'-o',str(cls.bin/'state.so')],check=True)
        for output,source in [('updater','ck_updater.c'),('server','ck_updated.c')]:
            subprocess.run(flags+common+[str(SOURCE/'update'/source),'-o',str(cls.bin/output)],check=True)
        cls.runner=shlex.split(os.environ.get('CK_TEST_RUNNER',''))
        cls.program_dir=Path(os.environ.get('CK_TEST_BIN',str(cls.bin)))
        cls.updater=cls.program_dir/('ck-updater' if cls.runner else 'updater')
        cls.server_binary=cls.program_dir/('ck-updated' if cls.runner else 'server')
        cls.lib=ctypes.CDLL(str(cls.bin/'state.so'))
        cls.lib.ck_store_set.argtypes=[ctypes.c_char_p,ctypes.c_void_p,ctypes.c_size_t]
        cls.lib.ck_store_get.argtypes=[ctypes.c_char_p,ctypes.c_void_p,ctypes.POINTER(ctypes.c_size_t)]
        cls.lib.ck_store_delete.argtypes=[ctypes.c_char_p]
        cls.lib.ck_energy_load.argtypes=[ctypes.POINTER(ctypes.c_uint64),ctypes.POINTER(ctypes.c_uint32)]
        cls.lib.ck_energy_save.argtypes=[ctypes.c_uint64,ctypes.c_uint32]

    @classmethod
    def tearDownClass(cls):cls.build.cleanup()
    def setUp(self):
        self.tmp=tempfile.TemporaryDirectory(prefix='ck-update-test-');self.work=Path(self.tmp.name)
        for path in ['etc','bin','var/lock','var/lib/ck-state','var/run/ck-ota']:(self.work/path).mkdir(parents=True,exist_ok=True)
        self.key=Ed25519PrivateKey.generate();self.diag=os.urandom(32)
        (self.work/'etc/ck-update.pub').write_bytes(public(self.key));(self.work/'etc/ck-update.meta').write_bytes(struct.pack('>III',0x434b0004,1,1))
        (self.work/'etc/ck-version').write_text('0.1.0\n');(self.work/'etc/matter-device.key').write_bytes(os.urandom(32))
        (self.work/'etc/matter-diag.key').write_text(self.diag.hex()+'\n');(self.work/'bin/ck-updater').write_bytes(b'test-copy-only')
        self.image=bytearray(bytes(range(256))*(0x800000//256));self.image[JOURNAL:JOURNAL+0x20000]=b'\xff'*0x20000
        self.flash=self.work/'flash.bin';self.flash.write_bytes(self.image)
        os.environ['CK_FLASH_FILE']=str(self.flash);os.environ['CK_TEST_ROOT']=str(self.work)
        os.environ.pop('CK_FAIL_STORE',None);os.environ.pop('CK_FAIL_OTA_AFTER',None);os.environ.pop('CK_FAIL_ENERGY',None)
        os.environ.pop('CK_TEST_SEED_FILE',None);os.environ.pop('CK_FAIL_INIT_RETIRE',None)
        self.assertEqual(self.lib.ck_store_import(),0)
        self.ota=self.work/'update.ota';self.ota.write_bytes(package(self.key,self.image))
        self.server=None;self.cookie='';self.csrf=''
        self.admin_salt=os.urandom(16);self.admin_key=os.urandom(32)
        self.admin_record=b'CKAUTH1\n'+struct.pack('>I',600000)+self.admin_salt+self.admin_key
        self.assertEqual(self.put('admin/credential',self.admin_record),0)
    def tearDown(self):
        if self.server:
            self.server.terminate();self.server.wait(timeout=5);self.server.stdout.close();self.server.stderr.close()
        for key in ('CK_FAIL_STORE','CK_FAIL_OTA_AFTER','CK_FAIL_ENERGY','CK_TEST_SEED_FILE','CK_FAIL_INIT_RETIRE'):os.environ.pop(key,None)
        self.tmp.cleanup()
    def get(self,key):
        b=ctypes.create_string_buffer(65536);n=ctypes.c_size_t(len(b));r=self.lib.ck_store_get(key.encode(),b,ctypes.byref(n));return r,b.raw[:n.value]
    def put(self,key,value):return self.lib.ck_store_set(key.encode(),value,len(value))
    def run_updater(self,*args):return subprocess.run([*self.runner,str(self.updater),*map(str,args)],capture_output=True,timeout=15)
    def energy(self):
        total=ctypes.c_uint64();fraction=ctypes.c_uint32()
        result=self.lib.ck_energy_load(ctypes.byref(total),ctypes.byref(fraction))
        return result,total.value,fraction.value
    def test_energy_ring_wrap_preserves_configuration(self):
        self.assertEqual(self.energy(),(1,0,0))
        self.assertNotEqual(self.lib.ck_energy_save((1<<62)+1,0),0)
        self.assertEqual(self.put('matter/fabric',b'retain this fabric'),0)
        before=self.flash.read_bytes()
        for i in range(260):self.assertEqual(self.lib.ck_energy_save(i,17),0)
        self.assertEqual(self.energy(),(0,259,17));self.assertEqual(self.get('matter/fabric'),(0,b'retain this fabric'))
        after=self.flash.read_bytes()
        for start,end in [(0,0x3cf000),(0x3d0000,0x3df000),(0x3e0000,0x800000)]:self.assertEqual(before[start:end],after[start:end])
        self.assertEqual(self.put('matter/large',b'x'*60000),0)
        self.assertEqual(self.energy(),(0,259,17))
        self.assertEqual(self.lib.ck_energy_save(259,17),0);self.assertNotEqual(self.lib.ck_energy_save(258,17),0)
        self.assertEqual(self.lib.ck_energy_save(260,18),0);self.assertEqual(self.energy(),(0,260,18))
    def test_energy_torn_append_and_erase_keep_last_checkpoint(self):
        for i in range(128):self.assertEqual(self.lib.ck_energy_save(i,0),0)
        for point in ['after-erase','before-commit']:
            os.environ['CK_FAIL_ENERGY']=point
            self.assertNotEqual(self.lib.ck_energy_save(128,0),0)
            os.environ.pop('CK_FAIL_ENERGY');self.assertEqual(self.energy(),(0,127,0))
        self.assertEqual(self.lib.ck_energy_save(128,0),0);self.assertEqual(self.energy(),(0,128,0))
    def test_energy_initial_zero_commit_can_retry(self):
        os.environ['CK_FAIL_ENERGY']='before-commit';self.assertNotEqual(self.lib.ck_energy_save(0,0),0)
        os.environ.pop('CK_FAIL_ENERGY');self.assertEqual(self.energy(),(1,0,0))
        self.assertEqual(self.lib.ck_energy_save(0,0),0);self.assertEqual(self.energy(),(0,0,0))
    def test_energy_rejects_unknown_or_oversized_legacy_store(self):
        before=bytearray(self.flash.read_bytes());before[0x3cf000:0x3cf006]=b'vendor';self.flash.write_bytes(before)
        self.assertLess(self.energy()[0],0);self.assertNotEqual(self.lib.ck_energy_save(0,0),0)
        self.assertEqual(self.flash.read_bytes(),before)
        before[0x3cf000:0x3d0000]=b'\xff'*0x1000
        struct.pack_into('>I',before,0x3c0010,64000);before[0x3c003c:0x3c0040]=b'CKOK'
        self.flash.write_bytes(before);self.assertNotEqual(self.lib.ck_energy_save(0,0),0)
        self.assertEqual(self.flash.read_bytes(),before)
    def test_persistence_and_noop_wear(self):
        self.assertEqual(self.put('matter/fabric',b'paired fabric secret'),0)
        before=self.flash.read_bytes();self.assertEqual(self.put('matter/fabric',b'paired fabric secret'),0);self.assertEqual(before,self.flash.read_bytes())
        code='import ctypes,os;from pathlib import Path;lib=ctypes.CDLL(os.environ["LIB"]);b=ctypes.create_string_buffer(100);n=ctypes.c_size_t(100);assert lib.ck_store_get(b"matter/fabric",b,ctypes.byref(n))==0;assert b.raw[:n.value]==b"paired fabric secret"'
        subprocess.run([sys.executable,'-c',code],check=True,env={**os.environ,'LIB':str(self.bin/'state.so')})
        self.assertEqual(self.lib.ck_store_delete(b'matter/fabric'),0);self.assertEqual(self.get('matter/fabric')[0],1)
    def test_matter_reset_is_atomic_and_keeps_identity_wifi_ota_and_energy(self):
        kept={k:self.get(k) for k in ['identity/device','identity/diag','identity/update']}
        for key,value in {'platform/chip_config.ini':b'[DEFAULT]\nunique-id=stable\ncountry-code=TW\n',
                          'platform/chip_factory.ini':b'factory data', 'platform/chip_counters.ini':b'counters',
                          'wifi/fixture':b'unchanged network', 'ota/floor':b'\0\0\0\x08'}.items():
            self.assertEqual(self.put(key,value),0);kept[key]=(0,value)
        for key in ['matter/f/1/n','matter/g/fs/c','matter/acl','platform/chip_kvs']:
            self.assertEqual(self.put(key,b'operational secret'),0)
        self.assertEqual(self.lib.ck_energy_save(987654,123),0)
        before=self.flash.read_bytes();request=b'a'*64
        for point in ['after-erase','before-commit']:
            os.environ['CK_FAIL_STORE']=point
            self.assertNotEqual(self.lib.ck_store_reset_matter(request),0)
            os.environ.pop('CK_FAIL_STORE')
            self.assertEqual(self.get('matter/f/1/n'),(0,b'operational secret'))
            self.assertEqual(self.get('control/matter-reset')[0],1)
        self.assertEqual(self.lib.ck_store_reset_matter(request),0)
        for key in ['matter/f/1/n','matter/g/fs/c','matter/acl','platform/chip_kvs']:self.assertEqual(self.get(key)[0],1)
        for key,value in kept.items():self.assertEqual(self.get(key),value)
        self.assertEqual(self.get('control/matter-reset'),(0,request));self.assertEqual(self.energy(),(0,987654,123))
        after=self.flash.read_bytes()
        for start,end in [(0,JOURNAL),(0x3cf000,0x3d0000),(0x3df000,0x800000)]:self.assertEqual(before[start:end],after[start:end])
        for bad in [b'',b'A'*64,b'a'*65]:self.assertNotEqual(self.lib.ck_store_reset_matter(bad),0)
    def test_torn_journal_and_corrupt_new_slot(self):
        self.assertEqual(self.put('matter/test',b'old'),0)
        for point in ['after-erase','before-commit']:
            os.environ['CK_FAIL_STORE']=point;self.assertNotEqual(self.put('matter/test',b'new'),0)
            os.environ.pop('CK_FAIL_STORE');self.assertEqual(self.get('matter/test'),(0,b'old'))
        self.assertEqual(self.put('matter/test',b'new'),0)
        blob=bytearray(self.flash.read_bytes());slots=[JOURNAL,JOURNAL+0x10000]
        latest=max(slots,key=lambda p:struct.unpack_from('>Q',blob,p+8)[0]);blob[latest+100]^=1;self.flash.write_bytes(blob)
        self.assertEqual(self.get('matter/test'),(0,b'old'))
    def test_unknown_journal_is_never_erased(self):
        blob=bytearray(self.image);blob[JOURNAL:JOURNAL+6]=b'vendor';self.flash.write_bytes(blob)
        self.assertNotEqual(self.put('matter/test',b'new'),0);self.assertEqual(self.flash.read_bytes(),blob)
    def test_journal_full_keeps_previous_state(self):
        self.assertEqual(self.put('matter/large',b'x'*60000),0);before=self.flash.read_bytes()
        self.assertNotEqual(self.put('matter/overflow',b'x'*6000),0);self.assertEqual(self.flash.read_bytes(),before)
    def test_verification_rejects_wrong_or_damaged_images(self):
        self.assertEqual(self.run_updater('--verify',self.ota).returncode,0)
        good=self.ota.read_bytes();before=self.flash.read_bytes()
        bad=[]
        for index in [12,20,64,128,192,512]:
            changed=bytearray(good);changed[index]^=1;bad.append(bytes(changed))
        bad += [good[:-1],good+b'x',package(Ed25519PrivateKey.generate(),self.image),package(self.key,self.image,version=1),package(self.key,self.image,variant=2),package(self.key,self.image,model=4)]
        for value in bad:
            self.ota.write_bytes(value);self.assertNotEqual(self.run_updater('--verify',self.ota).returncode,0)
        self.assertEqual(self.flash.read_bytes(),before)
    def test_factory_kernel_hash_covers_code_padding_and_checks_header(self):
        kernel=bytearray(b'\xa5'*0x120000)
        struct.pack_into('>4sIII',kernel,0,b'cr6c',0x80500000,0x8000004d,0x11fff0)
        expected=hashlib.sha256(kernel).digest()
        path=self.work/'kernel.bin';out=ctypes.create_string_buffer(32)
        for mark in (0x8000004d,0x80000051,0xfffffff0):
            struct.pack_into('>I',kernel,8,mark);path.write_bytes(kernel)
            with path.open('rb') as fd:self.assertEqual(self.lib.ck_hash_factory_kernel(fd.fileno(),0,out),0)
            self.assertEqual(out.raw,expected)
        for at in (20,0x110000,0x11ffff):
            changed=bytearray(kernel);changed[at]^=1;path.write_bytes(changed)
            with path.open('rb') as fd:self.assertEqual(self.lib.ck_hash_factory_kernel(fd.fileno(),0,out),0)
            self.assertNotEqual(out.raw,expected)
        for at in (0,4,12):
            changed=bytearray(kernel);changed[at]^=1;path.write_bytes(changed)
            with path.open('rb') as fd:self.assertNotEqual(self.lib.ck_hash_factory_kernel(fd.fileno(),0,out),0)
        path.write_bytes(kernel[:-1])
        with path.open('rb') as fd:self.assertNotEqual(self.lib.ck_hash_factory_kernel(fd.fileno(),0,out),0)
    def test_rootfs_write_and_preservation(self):
        self.assertEqual(self.put('matter/fabric',b'paired'),0)
        self.assertEqual(self.lib.ck_energy_save(1234567,17),0)
        before=self.flash.read_bytes();self.assertEqual(self.run_updater('--stage',self.ota).returncode,0)
        self.assertEqual(self.run_updater('--simulate').returncode,0)
        after=self.flash.read_bytes();self.assertEqual(after[START:END],rootfs());self.assertEqual(before[:START],after[:START]);self.assertEqual(before[END:],after[END:])
        self.assertEqual(self.get('matter/fabric'),(0,b'paired'))
        self.assertEqual(self.energy(),(0,1234567,17))
    def test_interrupted_write_leaves_invalid_magic_and_original_bank(self):
        before=self.flash.read_bytes();self.assertEqual(self.run_updater('--stage',self.ota).returncode,0)
        os.environ['CK_FAIL_OTA_AFTER']='4';self.assertNotEqual(self.run_updater('--simulate').returncode,0)
        after=self.flash.read_bytes();self.assertEqual(after[START:START+4],b'\xff'*4);self.assertEqual(before[:START],after[:START]);self.assertEqual(before[END:],after[END:])
    def test_floor_and_rescue_attempts(self):
        self.assertEqual(self.lib.ck_store_confirm(2),0);self.assertNotEqual(self.run_updater('--verify',self.ota).returncode,0)
        self.assertEqual(self.put('ota/pending',struct.pack('>I',3)),0)
        self.assertEqual([self.lib.ck_store_boot() for _ in range(4)],[0,0,0,1])
    def test_interrupted_initial_import_can_retry_with_bootstrap(self):
        self.flash.write_bytes(self.image)
        os.environ['CK_FAIL_STORE']='before-commit';self.assertNotEqual(self.lib.ck_store_import(),0)
        os.environ.pop('CK_FAIL_STORE');self.assertEqual(self.lib.ck_store_import(),0)
    def fresh_auto(self,seed=None):
        sys.path.insert(0,str(ROOT/'tools'))
        from factory_image import journal_initializer
        image=bytearray(self.image);image[JOURNAL:JOURNAL+0x20000]=journal_initializer(True)
        self.flash.write_bytes(image)
        (self.work/'etc/ck-identity-policy').write_bytes(b'auto-v1\n')
        for path in ('etc/matter-device.key','etc/matter-diag.key','var/run/ck-first-setup'):
            (self.work/path).unlink(missing_ok=True)
        for path in (self.work/'var/lib/ck-state').iterdir():path.unlink()
        path=self.work/'seed.bin';path.write_bytes(os.urandom(32) if seed is None else seed)
        os.environ['CK_TEST_SEED_FILE']=str(path)
        return path
    def test_auto_identity_generated_once_and_onboarding_persists(self):
        seed=os.urandom(32);path=self.fresh_auto(seed)
        self.assertEqual(self.run_updater('--import').returncode,0)
        state=self.work/'var/lib/ck-state'
        self.assertEqual((state/'device.key').read_bytes(),hmac.new(seed,b'commandkit/device/v1',hashlib.sha256).digest())
        diag=hmac.new(seed,b'commandkit/diagnostics/v1',hashlib.sha256).hexdigest().encode()+b'\n'
        self.assertEqual((state/'diag.key').read_bytes(),diag)
        self.assertNotEqual((state/'device.key').read_bytes(),bytes.fromhex(diag.decode().strip()))
        before=self.flash.read_bytes();path.unlink()
        self.assertEqual(self.run_updater('--import').returncode,0)
        self.assertEqual(before,self.flash.read_bytes())
        self.assertTrue((self.work/'var/run/ck-first-setup').exists())
        self.assertEqual(self.run_updater('--onboarded').returncode,0)
        self.assertFalse((self.work/'var/run/ck-first-setup').exists())
        self.assertEqual(self.run_updater('--import').returncode,0)
        self.assertFalse((self.work/'var/run/ck-first-setup').exists())
        for name in ('device.key','diag.key','update.pub'):self.assertEqual((state/name).stat().st_mode&0o777,0o600)
    def test_auto_identity_two_devices_get_different_keys(self):
        keys=[]
        for _ in range(2):
            self.fresh_auto();self.assertEqual(self.run_updater('--import').returncode,0)
            keys.append([(self.work/'var/lib/ck-state'/name).read_bytes() for name in ('device.key','diag.key')])
        self.assertNotEqual(keys[0][0],keys[1][0]);self.assertNotEqual(keys[0][1],keys[1][1])
    def test_auto_identity_entropy_pending_makes_no_flash_or_identity(self):
        for seed in (b'',os.urandom(17)):
            self.fresh_auto(seed);before=self.flash.read_bytes()
            self.assertEqual(self.run_updater('--import').returncode,75)
            self.assertEqual(before,self.flash.read_bytes())
            self.assertEqual(list((self.work/'var/lib/ck-state').iterdir()),[])
    def test_auto_identity_wait_accumulates_partial_seed_without_blocking_startup(self):
        seed=os.urandom(32);path=self.fresh_auto(seed[:9])
        proc=subprocess.Popen([*self.runner,str(self.updater),'--import-wait'],stdout=subprocess.PIPE,stderr=subprocess.PIPE)
        try:
            time.sleep(.4);self.assertIsNone(proc.poll())
            self.assertFalse((self.work/'var/lib/ck-state/device.key').exists())
            with path.open('ab') as stream:stream.write(seed[9:])
            output=proc.communicate(timeout=10);self.assertEqual(proc.returncode,0,output)
            self.assertEqual((self.work/'var/lib/ck-state/device.key').read_bytes(),hmac.new(seed,b'commandkit/device/v1',hashlib.sha256).digest())
        finally:
            if proc.poll() is None:proc.kill();proc.communicate()
    def test_auto_identity_interrupted_first_write_and_retire_recover_before_export(self):
        for point in ('after-erase','before-commit','retire'):
            first=os.urandom(32);path=self.fresh_auto(first)
            variable='CK_FAIL_INIT_RETIRE' if point=='retire' else 'CK_FAIL_STORE'
            os.environ[variable]=point
            self.assertNotEqual(self.run_updater('--import').returncode,0)
            self.assertEqual(list((self.work/'var/lib/ck-state').iterdir()),[])
            os.environ.pop(variable);second=os.urandom(32);path.write_bytes(second)
            self.assertEqual(self.run_updater('--import').returncode,0)
            expected=first if point=='retire' else second
            self.assertEqual((self.work/'var/lib/ck-state/device.key').read_bytes(),hmac.new(expected,b'commandkit/device/v1',hashlib.sha256).digest())
    def test_auto_identity_unknown_or_later_corrupt_state_is_never_rekeyed(self):
        self.fresh_auto();self.assertEqual(self.run_updater('--import').returncode,0)
        changed=bytearray(self.flash.read_bytes());changed[JOURNAL]^=1;self.flash.write_bytes(changed)
        self.assertNotEqual(self.run_updater('--import').returncode,0);self.assertEqual(self.flash.read_bytes(),changed)
        self.fresh_auto();changed=bytearray(self.flash.read_bytes());changed[JOURNAL+0x10000]^=1;self.flash.write_bytes(changed)
        self.assertNotEqual(self.run_updater('--import').returncode,0);self.assertEqual(self.flash.read_bytes(),changed)
    def test_auto_policy_keeps_existing_legacy_identity_without_entropy(self):
        before=self.flash.read_bytes();state=self.work/'var/lib/ck-state'
        original={p.name:p.read_bytes() for p in state.iterdir()}
        (self.work/'etc/ck-identity-policy').write_bytes(b'auto-v1\n')
        (self.work/'etc/matter-device.key').unlink();(self.work/'etc/matter-diag.key').unlink()
        os.environ['CK_TEST_SEED_FILE']=str(self.work/'absent')
        self.assertEqual(self.run_updater('--import').returncode,0)
        self.assertEqual(before,self.flash.read_bytes());self.assertFalse((self.work/'var/run/ck-first-setup').exists())
        for name,value in original.items():self.assertEqual((state/name).read_bytes(),value)
    def test_exec_variant_and_profile_recovery(self):
        self.flash.write_bytes(self.image)
        (self.work/'etc/ck-update.meta').write_bytes(struct.pack('>III',0x434b0004,2,1))
        (self.work/'etc/matter-device.key').unlink();credential=b'CKW1'+bytes([4,8,1,0])+b'test'+bytes(28)+b'12345678'+bytes(56)
        (self.work/'etc/ck-setup-ap.bin').write_bytes(credential)
        self.assertEqual(self.lib.ck_store_import(),0)
        self.assertEqual((self.work/'var/lib/ck-state/setup-ap.bin').read_bytes(),credential)
        sys.path.insert(0,str(ROOT/'tools'));import fwlib
        values=fwlib.journal_state(self.flash.read_bytes())
        with fwlib.profile_lock(self.work/'profile') as profile:
            injected=fwlib.profile_keys(profile,self.flash.read_bytes(),'exec-test',values)
        self.assertEqual(injected['etc/matter-diag.key'][0],self.diag.hex().encode()+b'\n')
        self.assertEqual(injected['etc/ck-setup-ap.bin'][0],credential)
    def start_server(self,login=True):
        sock=socket.socket();sock.bind(('127.0.0.1',0));self.port=sock.getsockname()[1];sock.close()
        self.server=subprocess.Popen([*self.runner,str(self.server_binary),str(self.port),'lo'],stdout=subprocess.PIPE,stderr=subprocess.PIPE)
        for _ in range(50):
            try:
                self.request('GET','/status')
                if login:self.login()
                return
            except OSError:time.sleep(.03)
        raise RuntimeError('server did not start')
    def login(self,key=None):
        status,body=self.request('GET','/auth/challenge',authenticated=False);self.assertEqual(status,200)
        nonce=json.loads(body)['nonce'];proof=nonce+':'+hmac.new(key or self.admin_key,('ck-admin-login-v1\n'+nonce).encode(),hashlib.sha256).hexdigest()
        c=http.client.HTTPConnection('127.0.0.1',self.port,timeout=10)
        c.request('POST','/auth/login',body=b'',headers={'X-CK-Login':proof});r=c.getresponse();data=json.loads(r.read())
        if r.status==200:
            self.cookie=r.getheader('Set-Cookie').split(';',1)[0];self.csrf=data['csrf']
        code=r.status;c.close();return code,proof
    def request(self,method,path,body=None,headers=None,authenticated=True):
        h={}
        if authenticated and self.cookie:h={'Cookie':self.cookie,'X-CK-CSRF':self.csrf}
        h.update(headers or {})
        c=http.client.HTTPConnection('127.0.0.1',self.port,timeout=10);c.request(method,path,body=body,headers=h);r=c.getresponse();result=(r.status,r.read());c.close();return result
    def request_headers(self,data,image_hash=None):
        return {'X-CK-SHA256':image_hash or hashlib.sha256(data).hexdigest(),'Content-Type':'application/octet-stream'}
    def protocol_proof(self,mode,key=None):
        return {'X-CK-CSRF':self.csrf if key is None else '0'*64,'Content-Type':'text/plain'}
    def protocol_reboot(self):
        for name in ['ck-protocol-active','ck-protocol-pending']:(self.work/'var/run'/name).unlink(missing_ok=True)
        lock=self.work/'var/run/ck-matter-request.lock'
        if lock.exists():lock.rmdir()
        self.assertEqual(self.run_updater('--protocol-boot').returncode,0)
    def test_led_admin_auth_validation_persistence_noop_and_preservation(self):
        for key,value in [('identity/factory',b'unique'),('matter/fabric',b'paired'),('config/wifi',b'saved')]:self.assertEqual(self.put(key,value),0)
        self.assertEqual(self.lib.ck_energy_save(1234567,0),0)
        self.start_server()
        self.assertEqual(self.request('GET','/admin/led',authenticated=False)[0],401)
        config=b'CKLED1 inverse 1 1380 420 480 pool.ntp.org\n'
        self.assertEqual(self.request('POST','/admin/led',config,authenticated=False)[0],401)
        self.assertEqual(self.request('POST','/admin/led',config,headers={'X-CK-CSRF':'0'*64})[0],401)
        for bad in [b'CKLED1 unknown 0 1380 420 480 pool.ntp.org',b'CKLED1 smart 2 1380 420 480 pool.ntp.org',b'CKLED1 smart 4294967296 1380 420 480 pool.ntp.org',b'CKLED1 smart 1 420 420 480 pool.ntp.org',b'CKLED1 smart 0 1380 420 481 pool.ntp.org',b'CKLED1 smart 0 1380 420 480 evil;cmd',b'CKLED1 smart 0 1380 420 480 server"',b'CKLED1 smart 0 1380 420 480 ntp extra']:
            self.assertEqual(self.request('POST','/admin/led',bad)[0],400,bad)
        self.assertEqual(self.request('POST','/admin/led',config)[0],200)
        before=self.flash.read_bytes();self.assertEqual(self.request('POST','/admin/led',config)[0],200)
        self.assertEqual(self.flash.read_bytes(),before)
        d=json.loads(self.request('GET','/admin/led')[1]);self.assertEqual((d['mode'],d['schedule'],d['start'],d['end'],d['utc_offset']),('inverse',True,1380,420,480))
        self.assertEqual(self.lib.ck_store_import(),0);self.assertEqual(self.get('config/led'),(0,config))
        for key,value in [('identity/factory',b'unique'),('matter/fabric',b'paired'),('config/wifi',b'saved')]:self.assertEqual(self.get(key),(0,value))
        self.assertEqual(self.energy()[1],1234567)
        self.assertEqual(self.lib.ck_store_factory_clear(),0);self.assertEqual(self.get('config/led')[0],1)

    def test_led_modes_priority_patterns_and_cross_midnight(self):
        class Config(ctypes.Structure):_fields_=[('mode',ctypes.c_int),('schedule',ctypes.c_int),('start',ctypes.c_int),('end',ctypes.c_int),('offset',ctypes.c_int),('ntp',ctypes.c_char*128)]
        class Input(ctypes.Structure):_fields_=[(n,ctypes.c_int) for n in ['known','on','load','setup','joining','pairing','error','identify','time_valid']]+[('utc_s',ctypes.c_uint64),('now_ms',ctypes.c_uint64)]
        class Output(ctypes.Structure):_fields_=[('on',ctypes.c_int),('reason',ctypes.c_int),('night',ctypes.c_int)]
        self.lib.ck_led_evaluate.argtypes=[ctypes.POINTER(Config),ctypes.POINTER(Input)];self.lib.ck_led_evaluate.restype=Output
        c=Config(0,0,1380,420,480,b'pool.ntp.org');i=Input();i.known=i.on=i.load=1;i.now_ms=0
        evaluate=lambda:self.lib.ck_led_evaluate(ctypes.byref(c),ctypes.byref(i))
        for mode,expected in enumerate([1,1,0,1,1,0]):c.mode=mode;self.assertEqual(evaluate().on,expected)
        c.mode=0;i.setup=i.joining=i.pairing=i.error=i.identify=1;self.assertEqual(evaluate().reason,6)
        i.identify=0;self.assertEqual(evaluate().reason,5);i.error=0;self.assertEqual(evaluate().reason,4)
        i.setup=0;self.assertEqual(evaluate().reason,3);i.joining=0;self.assertEqual(evaluate().reason,2)
        for reason,field,expected in [(2,'pairing',[1,0,1,0,0]),(5,'error',[1,0,1,0,1])]:
            i.pairing=0;setattr(i,field,1)
            for t,want in zip([0,100,200,300,400],expected):i.now_ms=t;self.assertEqual(evaluate().on,want)
            setattr(i,field,0)
        c.schedule=1;i.time_valid=1
        for minute,night in [(22*60+59,0),(23*60,1),(0,1),(6*60+59,1),(7*60,0)]:
            i.utc_s=1704067200+((minute-480)%1440)*60;self.assertEqual(evaluate().night,night)
        i.utc_s=1704067200;i.time_valid=0;self.assertEqual(evaluate().night,0)
        c.mode=5;i.error=1;i.now_ms=0;self.assertEqual((evaluate().reason,evaluate().on),(5,1))
        c.mode=1;self.assertEqual(evaluate().reason,0)
        i.known=0;c.mode=2;self.assertEqual(evaluate().on,0)

    def test_led_find_and_phone_time_are_ram_only_and_bounded(self):
        self.start_server();before=self.flash.read_bytes()
        self.assertEqual(self.request('POST','/admin/led-find')[0],200)
        deadline=int.from_bytes((self.work/'var/run/ck-led-find').read_bytes(),'big')
        self.assertTrue(14000<=deadline-int(time.monotonic()*1000)<=15000)
        for bad in [b'0',b'-1',b'99999999999',b'1704067200oops',b'1704067200 ']:self.assertEqual(self.request('POST','/admin/led-time',bad)[0],400)
        self.assertEqual(self.request('POST','/admin/led-time',b'1792512000')[0],200)
        b=(self.work/'var/run/ck-led-clock').read_bytes();self.assertEqual(b[:8],b'CKLEDT1\n');self.assertEqual(int.from_bytes(b[16:24],'big'),1792512000)
        self.assertEqual(self.flash.read_bytes(),before)

    def test_led_ntp_validates_peer_nonce_stratum_and_keeps_system_clock(self):
        udp=socket.socket(socket.AF_INET,socket.SOCK_DGRAM)
        try:udp.bind(('127.0.0.1',123))
        except PermissionError:udp.close();self.skipTest('UDP 123 fixture requires a permitted local bind')
        udp.settimeout(8);errors=[]
        def reply():
            try:
                for valid in (False,True):
                    q,peer=udp.recvfrom(256);self.assertEqual(len(q),48)
                    r=bytearray(48);r[0]=0x24;r[1]=2 if valid else 0;r[24:32]=q[40:48]
                    struct.pack_into('>I',r,40,(int(time.time())+2208988800)&0xffffffff);udp.sendto(r,peer)
            except Exception as e:errors.append(e)
        thread=threading.Thread(target=reply);thread.start();before=self.flash.read_bytes();wall=time.time();mono=time.monotonic()
        try:
            self.assertNotEqual(self.run_updater('--led-ntp','127.0.0.1').returncode,0)
            self.assertFalse((self.work/'var/run/ck-led-clock').exists())
            self.assertEqual(self.run_updater('--led-ntp','127.0.0.1').returncode,0)
            clock=(self.work/'var/run/ck-led-clock').read_bytes();self.assertEqual(int.from_bytes(clock[24:28],'big'),1)
            self.assertLess(abs(int.from_bytes(clock[16:24],'big')-time.time()),3)
            self.assertLess(abs((time.time()-wall)-(time.monotonic()-mono)),1)
            self.assertEqual(self.flash.read_bytes(),before)
        finally:thread.join(timeout=9);udp.close()
        self.assertFalse(thread.is_alive());self.assertEqual(errors,[])
        # No responder: the isolated worker must terminate within its deadline.
        begun=time.monotonic();self.assertNotEqual(self.run_updater('--led-ntp','127.0.0.1').returncode,0);self.assertLess(time.monotonic()-begun,13)

    def test_led_worker_relay_load_stale_identify_and_ota_latch(self):
        for path in ['proc/wlan0','var/log']:(self.work/path).mkdir(parents=True,exist_ok=True)
        gpio=self.work/'proc/wlan0/gpio_ctrl';gpio.write_bytes(b' '*32)
        (self.work/'var/run/ck-protocol-active').write_text('homekit');(self.work/'var/run/ck-setup-state').write_text('state=online\n')
        self.assertEqual(self.put('config/led',b'CKLED1 relay 1 1380 420 480 ntp.invalid\n'),0)
        # A deliberately slow DNS/NTP child must not stop the GPIO/control loop.
        (self.work/'bin/ck-updater').write_text('#!/bin/sh\n: >"$CK_TEST_ROOT/var/run/ck-led-ntp-started"\nsleep 4\nexit 1\n')
        (self.work/'bin/ck-updater').chmod(0o755)
        def sample(seq=1,age=0,power=6000,on=True):
            now=int(time.monotonic()*1000)
            data=b'CKLEDHW1'+struct.pack('>QQQQIIII',now,now-age,now-age,0,power,1|4|8|16|(2 if on else 0),seq,0)
            (self.work/'var/run/ck-led-homekit.bin').write_bytes(data)
        def state():
            b=(self.work/'var/run/ck-led-state').read_bytes();return b[16],b[17],b[18],b[19]
        def until(check,seconds=4):
            end=time.monotonic()+seconds
            while time.monotonic()<end:
                try:
                    if check():return
                except FileNotFoundError:pass
                time.sleep(.05)
            self.fail('LED worker did not reach expected state')
        sample();worker=subprocess.Popen([*self.runner,str(self.updater),'--run-led'],stdout=subprocess.PIPE,stderr=subprocess.PIPE)
        try:
            until(lambda:state()[0]==1);until(lambda:(self.work/'var/run/ck-led-ntp-started').exists())
            sample(on=False);until(lambda:state()[0]==0,seconds=2)
            self.assertEqual(state()[2],0)
            self.assertEqual(self.put('config/led',b'CKLED1 load 0 1380 420 480 ntp.invalid\n'),0)
            sample(2);time.sleep(1.2);sample(3);until(lambda:gpio.read_bytes().startswith(b'set 6 0'))
            sample(4,age=16000);until(lambda:state()[0]==0)
            self.assertEqual(self.put('config/led',b'CKLED1 off 0 1380 420 480 ntp.invalid\n'),0)
            deadline=int(time.monotonic()*1000)+1800;(self.work/'var/run/ck-led-homekit-identify').write_bytes(struct.pack('>Q',deadline))
            until(lambda:state()[1]==6);until(lambda:state()[1]==0)
            (self.work/'var/run/ck-ota/queued').write_bytes(b'1');latched=gpio.read_bytes()
            (self.work/'var/run/ck-led-homekit-identify').write_bytes(struct.pack('>Q',int(time.monotonic()*1000)+15000));time.sleep(.7)
            self.assertEqual(gpio.read_bytes(),latched);self.assertIsNone(worker.poll())
        finally:worker.terminate();worker.wait(timeout=5);worker.stdout.close();worker.stderr.close()

    def test_protocol_switch_keeps_identity_fabrics_wifi_hap_and_kwh(self):
        self.assertEqual(self.run_updater('--protocol-boot').returncode,0)
        original={k:self.get(k) for k in ['identity/device','identity/diag','identity/update']}
        for key,value in {'matter/fabric':b'paired','platform/chip_kvs':b'paired cache','wifi/fixture':b'saved wifi','config/led':b'CKLED1 off 1 1380 420 480 ntp.invalid\n'}.items():
            self.assertEqual(self.put(key,value),0);original[key]=(0,value)
        self.assertEqual(self.lib.ck_energy_save(987654321,123),0)
        before=self.flash.read_bytes();self.start_server()
        self.assertEqual(json.loads(self.request('GET','/protocol')[1]),{'selected':'matter','active':'matter','restart_pending':False})
        for mode in ['homekit','matter']:
            self.assertEqual(self.request('POST','/protocol',mode,self.protocol_proof(mode))[0],200)
            self.assertEqual(self.get('config/protocol'),(0,mode.encode()))
            state=json.loads(self.request('GET','/protocol')[1]);self.assertTrue(state['restart_pending'])
            self.assertNotEqual(state['active'],mode)
            # The snapshot is immutable through server restarts and repeated calls.
            self.assertEqual(self.run_updater('--protocol-boot').returncode,0)
            self.assertEqual(json.loads(self.request('GET','/protocol')[1])['active'],state['active'])
            self.assertEqual(self.request('POST','/protocol',mode,self.protocol_proof(mode))[0],409)
            self.protocol_reboot()
            self.assertEqual(json.loads(self.request('GET','/protocol')[1]),{'selected':mode,'active':mode,'restart_pending':False})
        for key,value in original.items():self.assertEqual(self.get(key),value)
        self.assertEqual(self.energy(),(0,987654321,123))
        after=self.flash.read_bytes()
        for a,b in [(0,JOURNAL),(0x3cf000,0x3d0000),(0x3df000,0x800000)]:self.assertEqual(before[a:b],after[a:b])
        before=after
        self.assertEqual(json.loads(self.request('POST','/protocol','matter',self.protocol_proof('matter'))[1])['status'],'unchanged')
        self.assertEqual(before,self.flash.read_bytes())
    def test_protocol_requires_session_csrf_and_same_origin(self):
        self.start_server();before=self.flash.read_bytes()
        self.assertEqual(self.request('POST','/protocol','homekit',authenticated=False)[0],401)
        self.assertEqual(self.request('POST','/protocol','homekit',self.protocol_proof('homekit',b'0'*32))[0],401)
        proof=self.protocol_proof('homekit')
        self.assertEqual(self.request('POST','/protocol','homekit',{**proof,'Origin':'http://evil.example'})[0],403)
        self.assertEqual(self.request('POST','/protocol','homekit\0',proof)[0],400)
        self.assertEqual(self.request('POST','/protocol','HOMEKIT',proof)[0],400)
        self.assertEqual(before,self.flash.read_bytes())
        self.assertEqual(self.request('POST','/protocol','homekit',proof)[0],200)
        self.assertEqual(self.request('POST','/protocol','homekit',proof)[0],409)
    def test_protocol_flash_failure_has_no_success_or_pending_handoff(self):
        os.environ['CK_FAIL_STORE']='before-commit';self.start_server()
        self.assertEqual(self.request('POST','/protocol','homekit',self.protocol_proof('homekit'))[0],503)
        self.assertEqual(self.get('config/protocol')[0],1)
        self.assertFalse((self.work/'var/run/ck-protocol-pending').exists())
        self.assertFalse((self.work/'var/run/ck-matter-request.lock').exists())
    def test_protocol_invalid_preferences_fail_closed_and_operations_exclude_each_other(self):
        self.assertEqual(self.put('config/protocol',b'matter\0'),0)
        self.assertEqual(self.run_updater('--protocol-boot').returncode,0)
        self.assertEqual((self.work/'var/run/ck-protocol-active').read_text(),'unavailable')
        self.start_server()
        self.assertEqual(json.loads(self.request('GET','/protocol')[1])['selected'],'unavailable')
        operation=self.work/'var/run/ck-matter-request.lock';operation.mkdir()
        before=self.flash.read_bytes()
        self.assertEqual(self.request('POST','/protocol','homekit',self.protocol_proof('homekit'))[0],409)
        self.assertEqual(before,self.flash.read_bytes());operation.rmdir()
        self.assertEqual(self.run_updater('--stage',self.ota).returncode,0)
        self.assertEqual(self.request('POST','/protocol','homekit',self.protocol_proof('homekit'))[0],200)
        self.assertNotEqual(self.run_updater('--queue').returncode,0)
        self.assertEqual(self.request('POST','/upload',self.ota.read_bytes(),self.request_headers(self.ota.read_bytes()))[0],409)
    def test_protocol_owner_retains_lock_in_forked_homekit_daemon(self):
        self.assertEqual(self.put('config/protocol',b'homekit'),0)
        (self.work/'dev').mkdir();(self.work/'dev/ttyACM0').touch()
        # Saved Wi-Fi without association/DHCP must not block MCU ownership.
        (self.work/'var/run/ck-setup-boot').write_text('configured')
        (self.work/'var/run/ck-setup-state').write_text('state=reconnecting\nerror=0\n')
        hap=self.work/'bin/homekitserver'
        hap.write_text('#!/usr/bin/python3\nimport os,time\nfrom pathlib import Path\n'
            'root=Path(os.environ["CK_TEST_ROOT"])\n'
            '(root/"hap-launches").open("a").write("homekit\\n")\n'
            'pid=os.fork()\n'
            'if pid:\n'
            ' while not (root/"proc"/str(pid)/"status").exists():time.sleep(.01)\n'
            ' (root/"var/run/homekitserver.pid").write_text(str(pid))\n os._exit(0)\n'
            'p=root/"proc"/str(os.getpid());p.mkdir(parents=True)\n'
            '(p/"status").write_text("Name:\\thomekitserver\\n")\n'
            'while True:time.sleep(1)\n');hap.chmod(0o700)
        matter=self.work/'bin/matter-test-start';matter.write_text('#!/bin/sh\necho unexpected > "'+str(self.work/'unexpected-matter')+'"\n');matter.chmod(0o700)
        process=subprocess.Popen([*self.runner,str(self.updater),'--run-protocol'],stdout=subprocess.DEVNULL,stderr=subprocess.DEVNULL,start_new_session=True)
        try:
            until=time.monotonic()+5
            while not (self.work/'var/run/homekitserver.pid').exists() and time.monotonic()<until:time.sleep(.03)
            daemon=int((self.work/'var/run/homekitserver.pid').read_text())
            self.assertEqual((self.work/'hap-launches').read_text(),'homekit\n')
            # A killed supervisor leaves the daemon and its inherited owner lock.
            process.kill();process.wait(timeout=3)
            second=self.run_updater('--run-protocol')
            self.assertEqual(second.returncode,1)
            self.assertEqual((self.work/'hap-launches').read_text(),'homekit\n')
            self.assertFalse((self.work/'unexpected-matter').exists())
            os.kill(daemon,signal.SIGKILL)
        finally:
            try:os.killpg(process.pid,signal.SIGKILL)
            except ProcessLookupError:pass
            process.wait(timeout=3)
    def test_protocol_dead_homekit_fails_closed_without_matter_fallback(self):
        self.assertEqual(self.put('config/protocol',b'homekit'),0)
        (self.work/'dev').mkdir();(self.work/'dev/ttyACM0').touch()
        (self.work/'var/run/ck-setup-state').write_text('state=online\n')
        for name,body in [('homekitserver','exit 1'),('matter-test-start','echo unexpected > "'+str(self.work/'unexpected-matter')+'"')]:
            p=self.work/'bin'/name;p.write_text('#!/bin/sh\n'+body+'\n');p.chmod(0o700)
        process=subprocess.Popen([*self.runner,str(self.updater),'--run-protocol'],stdout=subprocess.DEVNULL,stderr=subprocess.DEVNULL,start_new_session=True)
        try:
            until=time.monotonic()+3
            while not (self.work/'var/run/ck-rescue').exists() and time.monotonic()<until:time.sleep(.03)
            self.assertTrue((self.work/'var/run/ck-rescue').exists());self.assertIsNone(process.poll())
            self.assertFalse((self.work/'unexpected-matter').exists())
        finally:
            os.killpg(process.pid,signal.SIGKILL);process.wait(timeout=3)
    def test_admin_session_cookie_csrf_logout_and_login_replay(self):
        self.start_server(login=False)
        before=self.flash.read_bytes()
        for path,body in [('/protocol','homekit'),('/apply',''),('/admin/energy-reset',''),('/admin/factory-reset',''),('/admin/reboot',''),('/auth/password','a'*120)]:
            self.assertEqual(self.request('POST',path,body,authenticated=False)[0],401)
        self.assertEqual(self.request('GET','/admin/state',authenticated=False)[0],401)
        self.assertEqual(self.request('GET','/admin/onboarding',authenticated=False)[0],401)
        self.assertEqual(self.request('GET','/measurements',authenticated=False)[0],200)
        code,proof=self.login();self.assertEqual(code,200)
        self.assertEqual(self.request('POST','/auth/login','',{'X-CK-Login':proof},authenticated=False)[0],403)
        self.assertEqual(self.request('POST','/auth/logout','',{'X-CK-CSRF':'0'*64})[0],401)
        self.assertTrue(json.loads(self.request('GET','/auth/session')[1])['authenticated'])
        self.assertEqual(self.request('POST','/auth/logout','')[0],200)
        self.assertFalse(json.loads(self.request('GET','/auth/session')[1])['authenticated'])
        self.assertEqual(self.request('POST','/admin/reboot','')[0],401)
        self.assertEqual(before,self.flash.read_bytes())
    def test_password_rotation_invalidates_sessions_and_old_password_proof(self):
        self.start_server();new_key=os.urandom(32)
        record=b'CKAUTH1\n'+struct.pack('>I',600000)+os.urandom(16)+new_key
        self.assertEqual(self.request('POST','/auth/password',record.hex())[0],200)
        self.assertEqual(self.get('admin/credential'),(0,record))
        self.assertEqual(self.request('GET','/admin/state')[0],401)
        self.assertEqual(self.login()[0],403)
        self.admin_key=new_key;self.assertEqual(self.login()[0],200)
        self.assertTrue(json.loads(self.request('GET','/auth/session')[1])['authenticated'])
    def test_dashboard_remains_responsive_while_identity_import_holds_flash_lock(self):
        self.start_server();lock=(self.work/'var/lock/ck-flash.lock').open('a+')
        fcntl.flock(lock,fcntl.LOCK_EX)
        try:
            at=time.monotonic()
            for path in ['/','/status','/measurements','/protocol','/auth/session']:
                self.assertEqual(self.request('GET',path)[0],200)
            self.assertLess(time.monotonic()-at,2)
            self.assertFalse(json.loads(self.request('GET','/auth/session')[1])['storage_ready'])
        finally:lock.close()
        self.assertTrue(json.loads(self.request('GET','/auth/session')[1])['authenticated'])
    def test_password_enrollment_is_local_setup_only_and_cannot_overwrite_account(self):
        self.assertEqual(self.lib.ck_store_delete(b'admin/credential'),0)
        record=self.admin_record;request=self.work/'var/run/ck-admin-enroll'
        request.write_bytes(record)
        self.assertNotEqual(self.run_updater('--enroll-admin').returncode,0)
        self.assertEqual(self.get('admin/credential')[0],1)
        (self.work/'var/run/ck-setup-state').write_text('state=setup\n')
        request.write_bytes(record)
        self.assertEqual(self.run_updater('--enroll-admin').returncode,0)
        self.assertEqual(self.get('admin/credential'),(0,record))
        self.assertTrue((self.work/'var/run/ck-admin-enroll-ok').exists())
        request.write_bytes(record[:-1]+b'X')
        self.assertNotEqual(self.run_updater('--enroll-admin').returncode,0)
        self.assertEqual(self.get('admin/credential'),(0,record))
    def test_explicit_energy_reset_is_atomic_and_allows_a_new_accumulation(self):
        self.assertEqual(self.lib.ck_energy_save(5000000,123),0)
        kept=self.get('admin/credential');before=self.flash.read_bytes()
        os.environ['CK_FAIL_ENERGY']='before-commit'
        self.assertNotEqual(self.lib.ck_energy_reset(),0)
        os.environ.pop('CK_FAIL_ENERGY');self.assertEqual(self.energy(),(0,5000000,123))
        self.assertEqual(self.lib.ck_energy_reset(),0);self.assertEqual(self.energy(),(0,0,0))
        self.assertEqual(self.lib.ck_energy_save(17,19),0);self.assertEqual(self.energy(),(0,17,19))
        self.assertEqual(self.get('admin/credential'),kept)
        after=self.flash.read_bytes()
        for a,b in [(0,0x3cf000),(0x3d0000,0x3df000),(0x3e0000,0x800000)]:self.assertEqual(before[a:b],after[a:b])
        (self.work/'var/run/ck-protocol-active').write_text('homekit');self.start_server()
        self.assertEqual(self.request('POST','/admin/energy-reset','')[0],200)
        self.assertEqual(self.energy(),(0,0,0))
        saved=json.loads(self.request('GET','/measurements')[1]);self.assertFalse(saved['available']);self.assertEqual(saved['saved_energy_mwh'],'0')
    def test_matter_energy_reset_queues_to_owner_without_stale_writer_race(self):
        self.assertEqual(self.lib.ck_energy_save(1234567,0),0)
        (self.work/'var/run/ck-protocol-active').write_text('matter');self.start_server()
        self.assertEqual(self.request('POST','/admin/energy-reset','')[0],503)
        stamp=time.monotonic_ns()//1000000000
        (self.work/'var/run/ck-matter-state.json').write_text(json.dumps({'updated_s':stamp,'fabrics':1},separators=(',',':')))
        code,body=self.request('POST','/admin/energy-reset','');self.assertEqual(code,202)
        request=json.loads(body)['request_id']
        self.assertEqual((self.work/'var/run/ck-matter-request').read_text(),'E '+request+'\n')
        self.assertEqual(self.request('POST','/protocol','homekit')[0],409)
        self.assertEqual(self.energy(),(0,1234567,0))
    def test_factory_clear_preserves_only_hardware_identity_and_ota_trust(self):
        kept={k:self.get(k) for k in ['identity/device','identity/diag','identity/update']}
        self.assertEqual(self.put('ota/floor',b'\0\0\0\x0b'),0);kept['ota/floor']=(0,b'\0\0\0\x0b')
        for k in ['identity/onboarded','matter/fabric','platform/chip_kvs','wifi/fixture','config/protocol']:
            self.assertEqual(self.put(k,b'old setting'),0)
        self.assertEqual(self.run_updater('--factory-reset').returncode,0)
        os.environ['CK_FAIL_STORE']='before-commit'
        self.assertNotEqual(self.lib.ck_store_factory_clear(),0)
        os.environ.pop('CK_FAIL_STORE');self.assertEqual(self.get('matter/fabric'),(0,b'old setting'))
        self.assertEqual(self.get('control/factory-reset'),(0,b'CKRESET1'))
        self.assertEqual(self.lib.ck_store_factory_clear(),0)
        for k in ['admin/credential','identity/onboarded','matter/fabric','platform/chip_kvs','wifi/fixture','config/protocol','control/factory-reset']:
            self.assertEqual(self.get(k)[0],1,k)
        for k,v in kept.items():self.assertEqual(self.get(k),v)
        self.assertEqual(self.get('config/needs-setup'),(0,b'\x01'))
    def test_newer_programmer_recovery_adopts_pending_version_without_reset(self):
        self.assertEqual(self.put('ota/floor',struct.pack('>I',6)),0)
        self.assertEqual(self.put('ota/pending',struct.pack('>I',8)),0)
        self.assertEqual(self.put('ota/attempts',struct.pack('>I',3)),0)
        self.assertEqual(self.put('matter/fabric',b'keep paired'),0)
        self.assertEqual(self.lib.ck_energy_save(7654321,123),0)
        kept={k:self.get(k) for k in ['identity/device','identity/diag','identity/update','admin/credential','matter/fabric']}
        (self.work/'etc/ck-update.meta').write_bytes(struct.pack('>III',0x434b0004,1,12))
        before=self.flash.read_bytes()
        self.assertEqual(self.run_updater('--boot').returncode,0)
        self.assertEqual(self.get('ota/pending'),(0,struct.pack('>I',12)))
        self.assertEqual(self.get('ota/attempts'),(0,struct.pack('>I',1)))
        self.assertEqual(self.get('ota/floor'),(0,struct.pack('>I',6)))
        for k,v in kept.items():self.assertEqual(self.get(k),v)
        self.assertEqual(self.energy(),(0,7654321,123))
        self.assertEqual(self.flash.read_bytes()[0x3e0000:],before[0x3e0000:])
        self.assertEqual(self.run_updater('--confirm').returncode,0)
        self.assertEqual(self.get('ota/floor'),(0,struct.pack('>I',12)))
        self.assertEqual(self.get('ota/pending')[0],1)
    def test_recovery_adoption_commit_failure_retries_without_erasing_configuration(self):
        self.assertEqual(self.put('ota/pending',struct.pack('>I',8)),0)
        self.assertEqual(self.put('matter/fabric',b'keep paired'),0)
        (self.work/'etc/ck-update.meta').write_bytes(struct.pack('>III',0x434b0004,1,12))
        os.environ['CK_FAIL_STORE']='before-commit'
        self.assertNotEqual(self.run_updater('--boot').returncode,0)
        os.environ.pop('CK_FAIL_STORE')
        self.assertEqual(self.get('ota/pending'),(0,struct.pack('>I',8)))
        self.assertEqual(self.get('matter/fabric'),(0,b'keep paired'))
        self.assertEqual(self.run_updater('--boot').returncode,0)
        self.assertEqual(self.get('ota/pending'),(0,struct.pack('>I',12)))
        self.assertEqual(self.get('ota/attempts'),(0,struct.pack('>I',1)))
        self.assertEqual(self.get('matter/fabric'),(0,b'keep paired'))
    def test_factory_boot_resumes_after_wifi_or_final_commit_failure(self):
        kept=self.get('identity/device');self.assertEqual(self.put('matter/fabric',b'paired'),0)
        self.assertEqual(self.lib.ck_energy_save(9000000,12),0)
        hap=self.work/'bin/homekitserver'
        hap.write_text('#!/usr/bin/python3\nimport os\nwith open(os.environ["CK_FLASH_FILE"],"r+b") as f:\n f.seek(0x3e0000);f.write(b"PHRX"+bytes(0xa5d-4))\n')
        hap.chmod(0o700)
        fail=self.work/'wifi-fail';fail.touch()
        wifi=self.work/'bin/ck-wificfg'
        wifi.write_text('#!/bin/sh\ntest "$1" = unconfigure || exit 2\n[ ! -f "'+str(fail)+'" ] || exit 1\nprintf cleared > "'+str(self.work/'wifi-state')+'"\n')
        wifi.chmod(0o700)
        self.assertEqual(self.run_updater('--factory-reset').returncode,0)
        self.assertNotEqual(self.run_updater('--protocol-boot').returncode,0)
        self.assertEqual(self.energy(),(0,9000000,12));self.assertEqual(self.get('control/factory-reset'),(0,b'CKRESET1'))
        self.assertEqual(self.get('matter/fabric'),(0,b'paired'))
        fail.unlink();os.environ['CK_FAIL_STORE']='before-commit'
        self.assertNotEqual(self.run_updater('--protocol-boot').returncode,0)
        os.environ.pop('CK_FAIL_STORE');self.assertEqual(self.energy(),(0,0,0))
        self.assertEqual(self.get('admin/credential'),(0,self.admin_record))
        self.assertEqual(self.get('control/factory-reset'),(0,b'CKRESET1'))
        self.assertEqual(self.run_updater('--protocol-boot').returncode,0)
        for k in ['admin/credential','control/factory-reset','matter/fabric']:self.assertEqual(self.get(k)[0],1)
        self.assertEqual(self.get('identity/device'),kept)
        self.assertEqual((self.work/'var/run/ck-protocol-active').read_text(),'matter')
        after=self.flash.read_bytes()
        self.assertEqual(after[0x3e0000:0x3e0a5d],b'PHRX'+bytes(0xa5d-4))
        self.assertEqual(after[0x3e0a5d:],self.image[0x3e0a5d:])
    def test_wifi_change_excludes_protocol_reset_and_ota_until_completion(self):
        self.start_server();request=b'CKW1'+bytes([7,8,1,0])+b'Fixture'+bytes(25)+b'password'+bytes(56)
        self.assertEqual(len(request),104)
        self.assertEqual(self.request('POST','/admin/wifi',request.hex())[0],202)
        marker=self.work/'var/run/ck-network-changing';self.assertTrue(marker.exists())
        # setupd has consumed the mailbox but is still joining/committing.
        (self.work/'var/run/ck-admin-wifi').unlink()
        self.assertEqual(self.request('POST','/protocol','homekit')[0],409)
        self.assertEqual(self.request('POST','/admin/factory-reset','')[0],409)
        self.assertNotEqual(self.run_updater('--stage',self.ota).returncode,0)
        self.assertEqual(self.request('GET','/status')[0],200)
        marker.unlink();self.assertEqual(self.run_updater('--stage',self.ota).returncode,0)
        operation=self.work/'var/run/ck-matter-request.lock';operation.mkdir()
        self.assertNotEqual(self.run_updater('--queue').returncode,0)
        self.assertNotEqual(self.run_updater('--factory-reset').returncode,0)
        operation.rmdir()
        self.assertEqual(self.run_updater('--queue').returncode,0)
    def meter_snapshot(self,**overrides):
        now=time.monotonic_ns()//1000000
        s=dict(published=now,flags=63,voltage=122313,current=12,power=0,
               energy=1234567,voltage_at=now,current_at=now,power_at=now,relay_at=now)
        s.update(overrides)
        data=struct.pack('>8sQI3IQ4Q',b'CKMETER1',s['published'],s['flags'],s['voltage'],
                         s['current'],s['power'],s['energy'],s['voltage_at'],s['current_at'],
                         s['power_at'],s['relay_at'])
        (self.work/'var/run/ck-meter.bin').write_bytes(data)
        return data
    def test_http_meter_units_saved_energy_and_no_flash_writes(self):
        self.start_server();before=self.flash.read_bytes();self.meter_snapshot()
        code,data=self.request('GET','/measurements');self.assertEqual(code,200)
        s=json.loads(data);self.assertTrue(s['available']);self.assertTrue(s['relay_on'])
        self.assertEqual([s[k] for k in ['voltage_mv','current_ma','power_mw','energy_mwh']],
                         [122313,12,0,'1234567'])
        self.assertTrue(s['energy_estimated']);self.assertEqual(s['checkpoint_interval_s'],30)
        self.assertEqual(before,self.flash.read_bytes())
        self.assertEqual(self.request('GET','/measurements',headers={'Host':'evil.example'})[0],403)
        self.assertEqual(self.request('GET','/measurements',headers={'Origin':'http://evil.example'})[0],403)
    def test_meter_missing_invalid_or_stopped_owner_never_looks_live(self):
        self.start_server();path=self.work/'var/run/ck-meter.bin'
        cases=[None,b'',b'not a snapshot',self.meter_snapshot(published=0),
               self.meter_snapshot(published=time.monotonic_ns()//1000000+60000),
               self.meter_snapshot(flags=127)]
        for data in cases:
            if data is None:path.unlink(missing_ok=True)
            else:path.write_bytes(data)
            with self.subTest(data=data):
                code,body=self.request('GET','/measurements');self.assertEqual(code,200)
                s=json.loads(body);self.assertFalse(s['available'])
                for key in ['voltage_mv','current_ma','power_mw','energy_mwh','relay_on','sample_age_ms']:
                    self.assertIsNone(s[key])
        path.unlink();path.symlink_to(self.work/'etc/matter-device.key')
        self.assertFalse(json.loads(self.request('GET','/measurements')[1])['available'])
    def test_meter_individual_staleness_and_sensor_bounds(self):
        self.start_server();now=time.monotonic_ns()//1000000
        self.meter_snapshot(voltage_at=now-16000,current=15001,power=2000001,
                            relay_at=now-11000,energy=(1<<62)+1)
        s=json.loads(self.request('GET','/measurements')[1]);self.assertTrue(s['available'])
        for key in ['voltage_mv','current_ma','power_mw','energy_mwh','relay_on']:self.assertIsNone(s[key])
        self.meter_snapshot(voltage_at=now+60000,flags=9)
        s=json.loads(self.request('GET','/measurements')[1])
        self.assertIsNone(s['voltage_mv']);self.assertEqual(s['energy_mwh'],'1234567')
    def test_meter_publisher_is_atomic_big_endian_and_preserves_large_totals(self):
        class Meter(ctypes.Structure):
            _fields_=[(name,ctypes.c_uint64) for name in ['published','energy','voltage_at','current_at','power_at','relay_at']]+[(name,ctypes.c_uint32) for name in ['flags','voltage','current','power']]
        self.lib.ck_meter_publish.argtypes=[ctypes.POINTER(Meter)]
        now=time.monotonic_ns()//1000000;s=Meter(now,1<<62,now,now,now,now,31,109000,1500,500000)
        self.assertEqual(self.lib.ck_meter_publish(ctypes.byref(s)),0)
        data=(self.work/'var/run/ck-meter.bin').read_bytes()
        self.assertEqual(struct.unpack('>8sQI3IQ4Q',data),(b'CKMETER1',now,31,109000,1500,500000,1<<62,now,now,now,now))
        self.assertFalse(list((self.work/'var/run').glob('ck-meter.bin.tmp.*')))
        self.start_server();result=json.loads(self.request('GET','/measurements')[1])
        self.assertEqual(result['energy_mwh'],str(1<<62));self.assertFalse(result['relay_on'])
    def test_http_direct_lan_upload_and_origin(self):
        self.start_server();data=self.ota.read_bytes();before=self.flash.read_bytes()
        self.assertEqual(self.request('GET','/')[0],200)
        self.assertEqual(self.request('GET','/challenge')[0],404)
        self.assertEqual(self.request('POST','/upload',data)[0],200)
        self.assertEqual(self.request('POST','/upload',data,{'Origin':'http://evil.example'})[0],403)
        self.assertEqual(self.request('POST','/upload',data)[0],200)
        self.assertEqual(self.flash.read_bytes(),before)
        self.assertEqual((self.work/'var/run/ck-ota/image.ota').read_bytes(),data)
        self.assertEqual(self.request('GET','/status',headers={'Host':'evil.example'})[0],403)
    def test_apply_is_bound_to_verified_package(self):
        self.start_server();data=self.ota.read_bytes()
        self.assertEqual(self.request('POST','/upload',data)[0],200)
        self.assertEqual(self.request('POST','/apply',b'',self.request_headers(b'',image_hash='0'*64))[0],409)
        self.assertNotEqual(self.run_updater('--queue','0'*64).returncode,0)
        self.assertNotEqual(self.run_updater('--queue','not-a-hash').returncode,0)
        headers=self.request_headers(b'',image_hash=hashlib.sha256(data).hexdigest())
        self.assertEqual(self.request('POST','/apply',b'',headers)[0],200)
        self.assertEqual(self.get('ota/pending'),(0,struct.pack('>I',2)))
        self.assertNotEqual(self.lib.ck_store_confirm(1),0)
        self.assertTrue((self.work/'var/run/ck-ota/queued').exists())
    def test_apply_without_extra_credentials_or_checksum(self):
        self.start_server();data=self.ota.read_bytes()
        self.assertEqual(self.request('POST','/upload',data)[0],200)
        self.assertEqual(self.request('POST','/apply',b'')[0],200)
        self.assertEqual(self.get('ota/pending'),(0,struct.pack('>I',2)))
    def test_single_transfer_lock_prevents_simultaneous_ram_images(self):
        self.start_server();data=self.ota.read_bytes()
        transfer=self.lib.ck_download_begin();self.assertGreaterEqual(transfer,0)
        try:
            self.assertLess(self.lib.ck_download_begin(),0)
            self.assertEqual(self.request('POST','/upload',data)[0],409)
            self.assertFalse((self.work/'var/run/ck-ota/image.ota').exists())
        finally:os.close(transfer)
        self.assertEqual(self.request('POST','/upload',data)[0],200)
    def test_unsigned_http_payload_never_changes_flash(self):
        self.start_server();before=self.flash.read_bytes();data=bytearray(self.ota.read_bytes());data[512]^=1
        self.assertEqual(self.request('POST','/upload',bytes(data))[0],422)
        self.assertEqual(before,self.flash.read_bytes())
    def test_http_partial_and_digest_mismatch_leave_no_staged_image(self):
        self.start_server();data=self.ota.read_bytes();headers=self.request_headers(data)
        changed=bytearray(data);changed[-1]^=1
        self.assertEqual(self.request('POST','/upload',bytes(changed),headers)[0],422)
        self.assertFalse((self.work/'var/run/ck-ota/image.ota').exists())
        headers=self.request_headers(data);c=socket.create_connection(('127.0.0.1',self.port))
        request=f'POST /upload HTTP/1.1\r\nHost: 127.0.0.1:{self.port}\r\nContent-Length: {len(data)}\r\nX-CK-SHA256: {headers["X-CK-SHA256"]}\r\nCookie: {self.cookie}\r\nX-CK-CSRF: {self.csrf}\r\n\r\n'.encode()+data[:300]
        c.sendall(request);c.shutdown(socket.SHUT_WR);c.recv(4096);c.close()
        self.assertFalse((self.work/'var/run/ck-ota/image.ota').exists());self.assertFalse((self.work/'var/run/ck-ota/upload.ota').exists())

if __name__=='__main__':unittest.main(verbosity=2)
