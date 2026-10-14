#!/usr/bin/env python3
"""Run the production MTD backend against Linux 2.6.30 character-device semantics.

Linux only. All open/ioctl operations are redirected to private regular files;
no real MTD device or outlet is accessed.
"""
import ctypes
import os
from pathlib import Path
import struct
import subprocess
import tempfile
import unittest

ROOT = Path(__file__).resolve().parents[1]
SOURCE = ROOT / 'firmware/matter/src/update'


class LegacyMtd(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.build = tempfile.TemporaryDirectory(prefix='ck-legacy-mtd-build-')
        output = Path(cls.build.name)
        # Fortified libc open aliases bypass macro syscall redirection.
        flags = ['cc', '-std=c11', '-O2', '-Wall', '-Wextra', '-Werror', '-fPIC',
                 '-U_FORTIFY_SOURCE', '-D_FORTIFY_SOURCE=0']
        wrappers = ['open', 'close', 'fstat', 'ioctl', 'fsync', 'fopen']
        subprocess.run([*flags, *['-D' + name + '=legacy_' + name for name in wrappers],
                        '-c', str(SOURCE / 'ck_flash.c'), '-o', str(output / 'flash.o')], check=True)
        subprocess.run([*flags, '-shared', '-DCK_TESTING', str(output / 'flash.o'),
                        str(ROOT / 'tests/legacy_mtd_shim.c'),
                        *[str(SOURCE / name) for name in ('ck_common.c', 'ck_store.c', 'ck_energy.c')],
                        '-o', str(output / 'legacy.so')], check=True)
        cls.lib = ctypes.CDLL(str(output / 'legacy.so'))
        cls.lib.ck_store_get.argtypes = [ctypes.c_char_p, ctypes.c_void_p,
                                        ctypes.POINTER(ctypes.c_size_t)]
        cls.lib.ck_store_set.argtypes = [ctypes.c_char_p, ctypes.c_void_p, ctypes.c_size_t]
        cls.lib.ck_energy_load.argtypes = [ctypes.POINTER(ctypes.c_uint64),
                                          ctypes.POINTER(ctypes.c_uint32)]
        cls.lib.ck_energy_save.argtypes = [ctypes.c_uint64, ctypes.c_uint32]

    @classmethod
    def tearDownClass(cls):
        cls.build.cleanup()

    def setUp(self):
        self.temp = tempfile.TemporaryDirectory(prefix='ck-legacy-mtd-')
        self.work = Path(self.temp.name)
        for folder in ('etc', 'var/lock', 'var/lib/ck-state'):
            (self.work / folder).mkdir(parents=True)
        (self.work / 'partition.bin').write_bytes(b'\xff' * 0x2b0000)
        (self.work / 'bootbank').write_text('1\n')
        (self.work / 'mtd').write_text('dev: size erasesize name\n'
                                      'mtd1: 002b0000 00001000 "root fs(bank1)"\n')
        (self.work / 'etc/ck-update.meta').write_bytes(struct.pack('>III', 0x434b0004, 1, 3))
        for name, data in [('matter-device.key', os.urandom(32)),
                           ('matter-diag.key', os.urandom(32).hex().encode() + b'\n'),
                           ('ck-update.pub', os.urandom(32))]:
            (self.work / 'etc' / name).write_bytes(data)
        os.environ['CK_TEST_ROOT'] = str(self.work)
        os.environ.pop('CK_MTD_SYNC', None)
        os.environ.pop('CK_MTD_REOPEN_BAD', None)
        self.lib.legacy_reset()

    def tearDown(self):
        os.environ.pop('CK_TEST_ROOT', None)
        os.environ.pop('CK_MTD_SYNC', None)
        os.environ.pop('CK_MTD_REOPEN_BAD', None)
        self.temp.cleanup()

    def test_first_boot_import_and_energy_with_unsupported_fsync(self):
        descriptors = set(os.listdir('/proc/self/fd'))
        self.assertEqual(self.lib.ck_store_import(), 0)
        self.assertGreater(self.lib.legacy_unsupported_syncs(), 0)
        for original, imported in [('matter-device.key', 'device.key'),
                                   ('matter-diag.key', 'diag.key'),
                                   ('ck-update.pub', 'update.pub')]:
            self.assertEqual((self.work / 'etc' / original).read_bytes(),
                             (self.work / 'var/lib/ck-state' / imported).read_bytes())
        self.assertEqual(self.lib.ck_store_set(b'matter/fabric', b'retain', 6), 0)
        self.assertEqual(self.lib.ck_energy_save(1234567, 100), 0)
        total, fraction = ctypes.c_uint64(), ctypes.c_uint32()
        self.assertEqual(self.lib.ck_energy_load(ctypes.byref(total), ctypes.byref(fraction)), 0)
        self.assertEqual((total.value, fraction.value), (1234567, 100))
        self.assertEqual(self.lib.ck_store_import(), 0)
        value, size = ctypes.create_string_buffer(32), ctypes.c_size_t(32)
        self.assertEqual(self.lib.ck_store_get(b'matter/fabric', value, ctypes.byref(size)), 0)
        self.assertEqual(value.raw[:size.value], b'retain')
        self.assertGreaterEqual(self.lib.legacy_releases(), self.lib.legacy_unsupported_syncs())
        self.assertEqual(set(os.listdir('/proc/self/fd')), descriptors)

    def test_modern_fsync_needs_no_reopen(self):
        os.environ['CK_MTD_SYNC'] = 'modern'
        self.assertEqual(self.lib.legacy_sync_once(), 0)
        self.assertEqual(self.lib.legacy_opens(), 1)

    def test_recover_first_import_interrupted_before_commit(self):
        os.environ['CK_MTD_SYNC'] = 'io-error'
        self.assertNotEqual(self.lib.ck_store_import(), 0)
        os.environ.pop('CK_MTD_SYNC')
        self.assertEqual(self.lib.ck_store_import(), 0)
        contents = (self.work / 'partition.bin').read_bytes()
        self.assertEqual(contents[:0x290000], b'\xff' * 0x290000)
        self.assertEqual(contents[0x29f000:0x2a0000], b'\xff' * 0x1000)
        self.assertEqual(contents[0x2af000:], b'\xff' * 0x1000)

    def test_io_error_remains_a_failure(self):
        os.environ['CK_MTD_SYNC'] = 'io-error'
        self.assertNotEqual(self.lib.legacy_sync_once(), 0)
        self.assertEqual(self.lib.legacy_opens(), 1)

    def test_reopened_device_must_match(self):
        os.environ['CK_MTD_REOPEN_BAD'] = '1'
        self.assertNotEqual(self.lib.legacy_sync_once(), 0)


if __name__ == '__main__':
    unittest.main(verbosity=2)
