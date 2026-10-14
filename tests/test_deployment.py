#!/usr/bin/env python3
"""Synthetic flash contents + real published rootfs. Never access a programmer."""
import argparse
import json
import os
import shutil
import struct
import sys
import tempfile
import unittest
from pathlib import Path
from unittest.mock import patch

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / "tools"))
import fwlib as fw
from flash import Programmer


class Deployment(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.directory = tempfile.TemporaryDirectory(prefix="commandkit-test-")
        cls.folder = Path(cls.directory.name)
        release = Path(os.environ["CK_RELEASE_DIR"])
        root, metadata = fw.load_release(release / "matter-8m-region.bin", release / "matter-8m-region.json")
        image = bytearray(b"\xff" * fw.SIZE)
        for offset in (0x10000, 0x410000):
            image[offset:offset + 16] = struct.pack(">4sIII", b"cr6c", 0x80500000, 0x8000004D, 512)
            image[offset + 16:offset + 528] = bytes(512)
        image[fw.START:fw.END] = root
        image[0x530000:0x530000 + len(root)] = root
        for offset in (0x50, 0x6010, 0xC010, 0x3C0010, 0x7F8010):
            image[offset:offset + 8] = b"TESTDATA"
        cls.before = bytes(image)
        fw.image_checks(cls.before)
        metadata["compatibility"] = fw.compatibility(cls.before)
        cls.release = cls.folder / "release.bin"
        cls.release.write_bytes((release / "matter-8m-region.bin").read_bytes())
        cls.manifest = cls.folder / "release.json"
        cls.manifest.write_text(json.dumps(metadata))

    @classmethod
    def tearDownClass(cls):
        cls.directory.cleanup()

    def setUp(self):
        self.temp = tempfile.TemporaryDirectory(dir=self.folder)
        self.work = Path(self.temp.name)
        self.first, self.second = self.work / "a.bin", self.work / "b.bin"
        self.first.write_bytes(self.before)
        self.second.write_bytes(self.before)
        self.output, self.profile = self.work / "target.bin", self.work / "profile"

    def tearDown(self):
        self.temp.cleanup()

    def prepare(self, **changes):
        args = dict(first=self.first, second=self.second, release=self.release, manifest=self.manifest,
                    profile=self.profile, output=self.output)
        args.update(changes)
        return fw.prepare(**args)

    def test_protected_bytes_and_stable_keys(self):
        self.prepare()
        target = self.output.read_bytes()
        self.assertEqual(target[:fw.START], self.before[:fw.START])
        self.assertEqual(target[fw.END:], self.before[fw.END:])
        key = (self.profile / "device-identity.key").read_bytes()
        self.assertEqual(fw.read_file(target[fw.START:fw.END], "etc/matter-device.key"), key)
        self.prepare(output=self.work / "again.bin")
        self.assertEqual((self.work / "again.bin").read_bytes(), target)
        self.assertEqual((self.profile / "diag.key").stat().st_mode & 0o777, 0o600)
        self.assertEqual(self.output.stat().st_mode & 0o777, 0o600)

    def test_different_devices_get_different_keys(self):
        self.prepare()
        other = bytearray(self.before)
        other[0x6010] ^= 1
        self.first.write_bytes(other)
        self.second.write_bytes(other)
        with self.assertRaises(ValueError):
            self.prepare(output=self.work / "wrong-profile.bin")
        profile = self.work / "second-profile"
        self.prepare(output=self.work / "second-target.bin", profile=profile)
        self.assertNotEqual((profile / "device-identity.key").read_bytes(),
                            (self.profile / "device-identity.key").read_bytes())

    def test_lost_profile_key_not_silently_rotated(self):
        self.prepare()
        (self.profile / "device-identity.key").unlink()
        with self.assertRaises(ValueError):
            self.prepare(output=self.work / "lost-key.bin")
        self.assertFalse((self.profile / "device-identity.key").exists())

    def test_diagnostic_profile_uses_private_wpa2_credentials(self):
        release = Path(os.environ["CK_RELEASE_DIR"])
        image = release / "exec-test-8m-region.bin"
        meta = json.loads((release / "exec-test-8m-region.json").read_text())
        meta["compatibility"] = fw.compatibility(self.before)
        manifest = self.work / "exec.json"
        manifest.write_text(json.dumps(meta))
        self.prepare(release=image, manifest=manifest)
        target = self.output.read_bytes()
        credential = fw.read_file(target[fw.START:fw.END], "etc/ck-setup-ap.bin")
        self.assertEqual(credential[:4], b"CKW1")
        self.assertEqual(credential[6], 1)
        self.assertEqual(credential, (self.profile / "setup-ap.bin").read_bytes())
        self.assertEqual(target[:fw.START], self.before[:fw.START])
        self.assertEqual(target[fw.END:], self.before[fw.END:])

    def test_mismatched_backups(self):
        self.second.write_bytes(b"\xff" * fw.SIZE)
        with self.assertRaises(ValueError):
            self.prepare()
        self.assertFalse(self.output.exists())

    def test_same_file_and_hardlink(self):
        with self.assertRaises(ValueError):
            self.prepare(second=self.first)
        hardlink = self.work / "hardlink.bin"
        os.link(self.first, hardlink)
        with self.assertRaises(ValueError):
            self.prepare(second=hardlink)

    def test_wrong_kernel(self):
        altered = bytearray(self.before)
        altered[0x10080] ^= 1
        self.first.write_bytes(altered)
        self.second.write_bytes(altered)
        with self.assertRaises(ValueError):
            self.prepare()

    def test_release_tamper_and_protected_payload(self):
        altered = bytearray(self.release.read_bytes())
        altered[fw.START + 100] ^= 1
        image = self.work / "bad.bin"
        image.write_bytes(altered)
        with self.assertRaises(ValueError):
            self.prepare(release=image)
        altered = bytearray(self.release.read_bytes())
        altered[0] = 0
        image.write_bytes(altered)
        meta = json.loads(self.manifest.read_text())
        meta["sha256"] = fw.sha(altered)
        manifest = self.work / "bad.json"
        manifest.write_text(json.dumps(meta))
        with self.assertRaises(ValueError):
            self.prepare(release=image, manifest=manifest)

    def test_layout_and_overwrite_rejected(self):
        with self.assertRaises(ValueError):
            self.prepare(output=self.first)
        meta = json.loads(self.manifest.read_text())
        meta["write_range"][1] += 4096
        manifest = self.work / "bad.json"
        manifest.write_text(json.dumps(meta))
        with self.assertRaises(ValueError):
            self.prepare(manifest=manifest)
        self.assertEqual(self.first.read_bytes(), self.before)

    def test_release_credentials_absent(self):
        root, _ = fw.load_release(self.release, self.manifest)
        self.assertFalse(fw.SECRET_FILES & set(fw.file_inventory(root)))

    def test_write_layout_and_failed_readback(self):
        self.prepare()
        target = self.output.read_bytes()
        programmer = object.__new__(Programmer)
        programmer.session = self.work / "session"
        programmer.session.mkdir()
        programmer.record = {}
        calls = []
        def run(args, label):
            calls.append(args)
            return "VERIFIED"
        programmer.run = run
        readback = self.work / "after.bin"
        readback.write_bytes(target)
        programmer.read = lambda name: readback
        programmer.write(self.before, target)
        self.assertIn("--include", calls[0])
        self.assertIn("bank1_rootfs", calls[0])
        self.assertNotIn("--noverify", calls[0])
        self.assertEqual((programmer.session / "write.layout").read_text(), fw.LAYOUT)
        self.assertEqual(programmer.record["status"], "write_verified_not_boot_tested")
        bad = bytearray(target)
        bad[0x6000] ^= 1
        with self.assertRaises(ValueError):
            programmer.write(self.before, bad)
        programmer.session = self.work / "failed-session"
        programmer.session.mkdir()
        readback.write_bytes(bad)
        with self.assertRaises(ValueError):
            programmer.write(self.before, target)


if __name__ == "__main__":
    parser = argparse.ArgumentParser()
    parser.add_argument("--release-dir", type=Path, required=True)
    args, remaining = parser.parse_known_args()
    os.environ["CK_RELEASE_DIR"] = str(args.release_dir.resolve())
    unittest.main(argv=[sys.argv[0], *remaining])
