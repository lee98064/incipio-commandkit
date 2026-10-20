#!/usr/bin/env python3
"""Fault-inject the startup scripts in private directories, without devices."""
import os
from pathlib import Path
import subprocess
import re
import tempfile
import unittest
import time
import signal

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

    def test_setup_starts_with_missing_identity_and_stale_pending(self):
        (self.work/'var/run/ck-identity-pending').touch()
        self.executable('sleep', 'exit 0\n')
        self.executable('ck-boot-guard', 'case "$1" in --mib) echo configured=1 ;; --setup) echo setup_started ;; *) exit 9 ;; esac\n')
        result = self.run_script('setup/ck-setup-device-start')
        self.assertEqual(result.returncode, 1)  # PID1 respawns the supervisor.
        self.assertIn('setup_started', (self.work/'var/log/ck-setupd.log').read_text())
        self.assertEqual((self.work / 'var/run/ck-setup-boot').read_text(), 'configured')

    def test_failed_mib_read_preserves_station_mode(self):
        self.executable('sleep','exit 0\n')
        self.executable('ck-boot-guard','case "$1" in --mib) exit 9 ;; --setup) echo setup_started ;; esac\n')
        result=self.run_script('setup/ck-setup-device-start')
        self.assertIn('setup_started',(self.work/'var/log/ck-setupd.log').read_text())
        self.assertEqual((self.work/'var/run/ck-setup-boot').read_text(),'configured')

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

    def test_first_generated_identity_forces_setup_even_with_old_wifi(self):
        (self.work/'var/run/ck-first-setup').touch()
        self.executable('sleep','exit 0\n')
        self.executable('ck-boot-guard','case "$1" in --mib) exit 9 ;; --setup) echo setup_started ;; esac\n')
        result=self.run_script('setup/ck-setup-device-start')
        self.assertEqual(result.returncode,1)
        self.assertIn('setup_started',(self.work/'var/log/ck-setupd.log').read_text())
        self.assertEqual((self.work/'var/run/ck-setup-boot').read_text(),'unconfigured')

    def test_public_entropy_wait_does_not_block_vendor_startup(self):
        (self.work/'etc/ck-identity-policy').write_text('auto-v1\n')
        ready=self.work/'entropy-ready'
        self.executable('ck-updater',
            'case "$1" in --import) exit 75 ;; --import-wait)\n'
            'while [ ! -f "'+str(ready)+'" ]; do /bin/sleep 0.1; done ;; esac\nexit 0\n')
        self.executable('ck-updated','exit 0\n')
        text=(SOURCE/'update/ck-ota-start').read_text()
        text=re.sub(r'/(?:bin|var|etc)/',lambda m:str(self.work)+m[0],text)
        script=self.work/'startup.sh';script.write_text(text)
        with (self.work/'output.log').open('wb') as log:
            process=subprocess.Popen(['sh',str(script)],stdout=log,stderr=log,start_new_session=True)
            try:
                self.assertEqual(process.wait(timeout=2),0)
                until=time.monotonic()+2
                pending=self.work/'var/run/ck-identity-pending'
                while not pending.exists() and time.monotonic()<until:time.sleep(.01)
                self.assertTrue(pending.exists())
                self.assertFalse((self.work/'var/run/ck-identity-ready').exists())
                ready.touch();until=time.monotonic()+3
                while not (self.work/'var/run/ck-identity-ready').exists() and time.monotonic()<until:time.sleep(.02)
                self.assertTrue((self.work/'var/run/ck-identity-ready').exists())
                self.assertFalse(pending.exists())
            finally:
                try:os.killpg(process.pid,signal.SIGTERM)
                except ProcessLookupError:pass

    def test_pid1_identity_supervisor_retries_without_rekeying(self):
        state=self.work/'var/lib/ck-state';state.mkdir(parents=True)
        key=state/'device.key';original=os.urandom(32);key.write_bytes(original)
        self.executable('sleep','/bin/sleep .02\n')
        attempt=self.work/'attempt'
        self.executable('ck-boot-guard',
            'case "$1" in --import)\n'
            'if [ ! -f "'+str(attempt)+'" ]; then touch "'+str(attempt)+'"; exit 124; fi ;;\n'
            '--boot) echo booted >> "'+str(self.work/'boots')+'" ;; esac\nexit 0\n')
        self.executable('ck-updated','exit 0\n')
        self.executable('ck-updater','exit 0\n')
        self.executable('sleep','exit 0\n')
        for _ in range(2):
            result=self.run_script('update/ck-identity-start')
            self.assertEqual(result.returncode,0)
        self.assertEqual(key.read_bytes(),original)
        self.assertEqual((self.work/'boots').read_text().splitlines(),['booted'])
        self.assertFalse((self.work/'var/run/ck-identity-pending').exists())
        self.assertEqual((self.work/'var/run/ck-identity-state').read_text(),'phase=ready\n')

    def relay_script(self, rescue=False, conflict=False):
        self.executable('ps', 'echo homekitserver\n' if conflict else 'exit 0\n')
        self.executable('grep','exec /usr/bin/grep "$@"\n')
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
