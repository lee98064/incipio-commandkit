#!/usr/bin/env python3
"""Fixed-job watchdog faults in regular-file fixtures; no RF/MTD access."""
import os
from pathlib import Path
import shlex
import signal
import subprocess
import sys
import tempfile
import time
import unittest

if sys.platform.startswith('linux'):
    import resource
    resource.setrlimit(resource.RLIMIT_CORE,(0,0))

ROOT=Path(__file__).resolve().parents[1]


@unittest.skipUnless(sys.platform.startswith('linux'),'Linux prctl/process groups')
class BootGuard(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.build=tempfile.TemporaryDirectory(prefix='ck-boot-guard-build-')
        cls.binary=Path(os.environ.get('CK_BOOT_BIN',str(Path(cls.build.name)/'guard')))
        cls.runner=shlex.split(os.environ.get('CK_BOOT_RUNNER',''))
        if not cls.runner:
            subprocess.run(['cc','-DCK_TESTING','-O2','-Wall','-Wextra','-Werror',
                            str(ROOT/'firmware/matter/src/setup/boot_guard.c'),'-o',str(cls.binary)],check=True)

    @classmethod
    def tearDownClass(cls):cls.build.cleanup()

    def setUp(self):
        self.temp=tempfile.TemporaryDirectory(prefix='ck-boot-guard-test-')
        self.root=Path(self.temp.name)
        for folder in ['bin','var/run','var/log','var/lib/ck-state']:(self.root/folder).mkdir(parents=True)
        self.env={**os.environ,'CK_BOOT_TEST_ROOT':str(self.root),'CK_BOOT_TEST_SECONDS':'1'}

    def tearDown(self):self.temp.cleanup()

    def stub(self,name,body):
        p=self.root/'bin'/name;p.write_text('#!/bin/sh\n'+body+'\n');p.chmod(0o700)

    def command(self,mode):return [*self.runner,str(self.binary),mode]

    def run_guard(self,mode,**kwargs):
        return subprocess.run(self.command(mode),capture_output=True,env=self.env,timeout=6,**kwargs)

    def test_fixed_modes_and_child_exit(self):
        self.stub('ck-wificfg','echo configured=1; exit 0')
        self.assertEqual(self.run_guard('--mib').stdout,b'configured=1\n')
        self.stub('matterd-test','test "$1" = --init-identity && test "$2" = wlan0; exit 7')
        self.assertEqual(self.run_guard('--identity').returncode,7)
        self.assertEqual(self.run_guard('/bin/sh').returncode,2)

    def test_crash_is_reported(self):
        self.stub('ck-updater','kill -SEGV $$')
        self.assertEqual(self.run_guard('--import').returncode,139)

    def test_hanging_import_is_killed_and_can_retry(self):
        self.stub('ck-updater','exec /bin/sleep 30')
        result=self.run_guard('--import')
        self.assertEqual(result.returncode,124)
        self.assertIn(b'timeout',result.stderr)
        self.stub('ck-updater','exit 0')
        self.assertEqual(self.run_guard('--import').returncode,0)

    def test_setup_requires_fresh_heartbeat(self):
        self.stub('ck-setupd','exec /bin/sleep 30')
        self.assertEqual(self.run_guard('--setup').returncode,124)
        self.env['CK_BOOT_TEST_SECONDS']='2'
        heartbeat=shlex.quote(str(self.root/'var/run/ck-setup-heartbeat'))
        self.stub('ck-setupd','while :; do read up rest < /proc/uptime; echo "${up%%.*}" > '+heartbeat+'; sleep .1; done')
        with tempfile.TemporaryFile() as output:
            p=subprocess.Popen(self.command('--setup'),env=self.env,stdout=output,stderr=output)
            try:
                time.sleep(3)
                self.assertIsNone(p.poll())
                p.terminate();self.assertEqual(p.wait(timeout=4),143)
            finally:
                if p.poll() is None:p.kill();p.wait()

    def test_dhcp_log_is_capped_and_retains_tail(self):
        data=bytes(range(256))*100
        self.assertEqual(self.run_guard('--dhcp-log',input=data).returncode,0)
        self.assertEqual((self.root/'var/log/ck-dhcp.log').read_bytes(),data[-8192:])

    def test_partial_heartbeat_keeps_last_valid_sample(self):
        self.env['CK_BOOT_TEST_SECONDS']='3'
        heartbeat=shlex.quote(str(self.root/'var/run/ck-setup-heartbeat'))
        self.stub('ck-setupd','i=0; while [ "$i" -lt 20 ]; do '
            'read up rest < /proc/uptime; echo "${up%%.*}" > '+heartbeat+'; '
            'sleep .1; i=$((i+1)); done; : > '+heartbeat+'; exec sleep 30')
        with tempfile.TemporaryFile() as output:
            p=subprocess.Popen(self.command('--setup'),env=self.env,stdout=output,stderr=output)
            try:
                time.sleep(3.5)
                self.assertIsNone(p.poll())
                p.terminate();self.assertEqual(p.wait(timeout=4),143)
            finally:
                if p.poll() is None:p.kill();p.wait()


if __name__=='__main__':unittest.main(verbosity=2)
