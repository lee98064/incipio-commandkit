#!/usr/bin/env python3
"""Fault-inject the startup scripts in private directories, without devices."""
import os
from pathlib import Path
import subprocess
import re
import tempfile
import unittest

ROOT = Path(__file__).resolve().parents[1]
SOURCE = ROOT / 'firmware/matter/src'


class StartupRecovery(unittest.TestCase):
    def setUp(self):
        self.temp = tempfile.TemporaryDirectory(prefix='ck-startup-recovery-')
        self.work = Path(self.temp.name)
        for folder in ('etc', 'bin', 'var/log', 'var/run'):
            (self.work / folder).mkdir(parents=True)

    def tearDown(self):
        self.temp.cleanup()

    def executable(self, name, text):
        output = self.work / 'bin' / name
        output.write_text('#!/bin/sh\n' + text)
        output.chmod(0o700)

    def run_script(self, source):
        text = (SOURCE / source).read_text()
        text = re.sub(r'/(?:bin|var|etc)/', lambda match: str(self.work) + match[0], text)
        script = self.work / 'startup.sh'
        script.write_text(text)
        environment = {**os.environ, 'PATH': str(self.work / 'bin') + os.pathsep + os.environ['PATH']}
        return subprocess.run(['sh', str(script)], capture_output=True, timeout=5, env=environment)

    def test_setup_uses_interface_present_on_original_hardware(self):
        # Captured original /proc/net/dev has wlan0, with no wl0 interface.
        interfaces = self.work / 'interfaces'
        (interfaces / 'wlan0').mkdir(parents=True)
        self.executable('sleep', 'exit 0\n')
        self.executable('matterd-test',
                        'test "$1" = --init-identity || exit 2\n'
                        'test -d "' + str(interfaces) + '/$2" || exit 5\n')
        self.executable('ck-wificfg', 'echo configured=0\n')
        self.executable('ck-setupd', 'echo setup_started\n')
        result = self.run_script('setup/ck-setup-device-start')
        self.assertEqual(result.returncode, 0)
        self.assertIn(b'setup_started', result.stdout)
        self.assertEqual((self.work / 'var/run/ck-setup-boot').read_text(), 'unconfigured')

    def test_failed_import_keeps_bootstrap_for_setup_and_diagnostics(self):
        self.executable('ck-updater', 'echo import_failed\nexit 1\n')
        keys = {'matter-device.key': ('device.key', os.urandom(32)),
                'matter-diag.key': ('diag.key', os.urandom(32).hex().encode() + b'\n'),
                'ck-update.pub': ('update.pub', os.urandom(32))}
        for name, (_, data) in keys.items():
            (self.work / 'etc' / name).write_bytes(data)
        result = self.run_script('update/ck-ota-start')
        self.assertEqual(result.returncode, 1)
        self.assertTrue((self.work / 'var/run/ck-rescue').is_file())
        self.assertIn('import_failed', (self.work / 'var/log/ck-store-init.log').read_text())
        for _, (name, data) in keys.items():
            output = self.work / 'var/lib/ck-state' / name
            self.assertEqual(output.read_bytes(), data)
            self.assertEqual(output.stat().st_mode & 0o777, 0o600)
        self.assertFalse((self.work / 'var/run/ck-update-healthy').exists())

    def relay_script(self, rescue=False, conflict=False):
        self.executable('pidof', 'echo homekitserver\n' if conflict else 'exit 1\n')
        calls = self.work / 'calls'
        self.executable('matter-diag',
                        'if [ "$1" = --log ]; then exec cat; fi\n'
                        'echo "$1" >> "' + str(calls) + '"\n'
                        'case "$1" in --run-matter) exit 5 ;; *) exit 0 ;; esac\n')
        if rescue:
            (self.work / 'var/run/ck-rescue').touch()
        result = self.run_script('setup/matter-relay-start')
        return result, calls.read_text().splitlines() if calls.exists() else []

    def test_rescue_starts_only_local_mcu(self):
        result, calls = self.relay_script(rescue=True)
        self.assertEqual(result.returncode, 0)
        self.assertEqual(calls, ['--run-hardware'])
        self.assertTrue((self.work / 'var/run/ck-mcu-only').is_file())

    def test_application_failure_hands_mcu_to_local_mode(self):
        result, calls = self.relay_script()
        self.assertEqual(result.returncode, 0)
        self.assertEqual(calls, ['--run-probe', '--run-matter', '--run-hardware'])

    def test_existing_homekit_owner_blocks_both_modes(self):
        result, calls = self.relay_script(conflict=True)
        self.assertNotEqual(result.returncode, 0)
        self.assertEqual(calls, [])


if __name__ == '__main__':
    unittest.main(verbosity=2)
