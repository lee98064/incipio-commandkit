#!/usr/bin/env python3
"""Execute the C journal, verifier, writer, and HTTP server on a NOR fixture.

Run in Linux: python3 tests/test_updates.py. CK_TESTING has no physical MTD path.
"""
import ctypes
import hashlib
import http.client
import json
import os
import socket
import shlex
import struct
import subprocess
import sys
import tempfile
import time
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
        common=[str(SOURCE/'update'/p) for p in ['ck_common.c','ck_flash.c','ck_store.c','ck_energy.c','ck_ota.c']]
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
        self.assertEqual(self.lib.ck_store_import(),0)
        self.ota=self.work/'update.ota';self.ota.write_bytes(package(self.key,self.image))
        self.server=None
    def tearDown(self):
        if self.server:
            self.server.terminate();self.server.wait(timeout=5);self.server.stdout.close();self.server.stderr.close()
        os.environ.pop('CK_FAIL_STORE',None);os.environ.pop('CK_FAIL_OTA_AFTER',None);os.environ.pop('CK_FAIL_ENERGY',None);self.tmp.cleanup()
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
    def start_server(self):
        sock=socket.socket();sock.bind(('127.0.0.1',0));self.port=sock.getsockname()[1];sock.close()
        self.server=subprocess.Popen([*self.runner,str(self.server_binary),str(self.port),'lo'],stdout=subprocess.PIPE,stderr=subprocess.PIPE)
        for _ in range(50):
            try:self.request('GET','/status');return
            except OSError:time.sleep(.03)
        raise RuntimeError('server did not start')
    def request(self,method,path,body=None,headers=None):
        c=http.client.HTTPConnection('127.0.0.1',self.port,timeout=10);c.request(method,path,body=body,headers=headers or {});r=c.getresponse();result=(r.status,r.read());c.close();return result
    def request_headers(self,data,image_hash=None):
        return {'X-CK-SHA256':image_hash or hashlib.sha256(data).hexdigest(),'Content-Type':'application/octet-stream'}
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
        request=f'POST /upload HTTP/1.1\r\nHost: 127.0.0.1:{self.port}\r\nContent-Length: {len(data)}\r\nX-CK-SHA256: {headers["X-CK-SHA256"]}\r\n\r\n'.encode()+data[:300]
        c.sendall(request);c.shutdown(socket.SHUT_WR);c.recv(4096);c.close()
        self.assertFalse((self.work/'var/run/ck-ota/image.ota').exists());self.assertFalse((self.work/'var/run/ck-ota/upload.ota').exists())

if __name__=='__main__':unittest.main(verbosity=2)
