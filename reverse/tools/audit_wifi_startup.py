#!/usr/bin/env python3
"""Replay extracted startup scripts with injected faults; no device/network I/O.

Run inside a disposable Linux container with --network none. The actual image's
BusyBox ash is emulated; updater, identity helper and network commands are mocks.
Only temporary regular files are modified. A DHCP marker means its launch was
reached, not that a real DHCP transaction succeeded.
"""
import argparse
import hashlib
import json
import os
from pathlib import Path
import re
import resource
import shlex
import signal
import subprocess
import tempfile
import time


def digest(path):
    return hashlib.sha256(path.read_bytes()).hexdigest()


def wait_for(predicate, timeout=3):
    deadline = time.monotonic() + timeout
    while time.monotonic() < deadline:
        if predicate():
            return True
        time.sleep(.01)
    return bool(predicate())


def run_case(tree, runner, scenario, public=True):
    with tempfile.TemporaryDirectory(prefix='ck-wifi-audit-') as name:
        root = Path(name)
        for folder in ('etc', 'bin', 'var/log', 'var/run', 'var/lib/ck-state'):
            (root / folder).mkdir(parents=True, exist_ok=True)
        events = root / 'events'
        processes = []
        logs = []

        def executable(name, body):
            path = root / 'bin' / name
            path.write_text('#!/bin/sh\n' + body + '\n')
            path.chmod(0o700)
            return path

        def record(event):
            return 'echo ' + shlex.quote(event) + ' >> ' + shlex.quote(str(events)) + '\n'

        def rewrite(path, output):
            # Preserve shell logic; redirect absolute device paths into fixtures.
            text = path.read_text()
            text = re.sub(r'/(?:bin|var|etc)/', lambda m: str(root) + m[0], text)
            output.write_text(text)
            return output

        def launch(script, *args):
            log = (root / ('process-%d.log' % len(processes))).open('wb')
            logs.append(log)
            p = subprocess.Popen(runner + [str(script), *args], stdout=log,
                                 stderr=log, start_new_session=True,
                                 env={**os.environ, 'PATH': str(root / 'bin') + ':/usr/bin:/bin'})
            processes.append(p)
            return p

        if public:
            (root / 'etc/ck-identity-policy').write_text('auto-v1\n')
        else:
            (root / 'etc/matter-device.key').write_bytes(b'D' * 32)
            (root / 'etc/matter-diag.key').write_bytes(b'12' * 32 + b'\n')
            (root / 'etc/ck-update.pub').write_bytes(b'P' * 32)
        executable('sleep', 'exec /bin/sleep .02')
        executable('ck-updated', 'exec /bin/sleep 30')
        executable('killall', 'exit 0')
        executable('ifconfig', record('ifconfig-called') + 'exit 0')
        executable('udhcpc', record('dhcp-launch-reached') + 'exec /bin/sleep 30')
        updater = record('updater-$1').replace("'updater-$1'", '"updater-$1"')
        updater += 'if [ "$1" != --import ]; then exit 0; fi\n'
        updater += 'echo "$PPID" > ' + shlex.quote(str(root / 'initializer.pid')) + '\n'
        if scenario in ('import_hang', 'initializer_killed'):
            updater += 'exec /bin/sleep 30\n'
        elif scenario == 'import_crash':
            updater += 'kill -SEGV $$\n'
        elif scenario == 'import_error':
            updater += 'exit 1\n'
        else:
            updater += 'printf %s DDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDD > ' + shlex.quote(str(root / 'var/lib/ck-state/device.key')) + '\n'
        executable('ck-updater', updater)
        identity = record('identity-helper-called')
        if scenario == 'identity_crash':
            identity += 'kill -SEGV $$\n'
        else:
            identity += 'test -f ' + shlex.quote(str(root / 'var/lib/ck-state/device.key')) + ' || exit 5\n'
            identity += 'printf 12345678901 > ' + shlex.quote(str(root / 'var/run/matter-manual-code')) + '\n'
        executable('matterd-test', identity)
        executable('ck-wificfg', 'exit 9' if scenario == 'mib_error' else 'echo configured=1')
        backend = rewrite(tree / 'bin/ck-setup-backend', root / 'backend.sh')
        controller = record('setup-controller-called')
        if scenario == 'controller_reject':
            controller += 'exit 11\n'
        else:
            controller += '/bin/sh ' + shlex.quote(str(backend)) + ' resume\nexec /bin/sleep 30\n'
        executable('ck-setupd', controller)
        ota_script = rewrite(tree / 'bin/ck-ota-start', root / 'ota-start.sh')
        setup_script = rewrite(tree / 'bin/ck-setup-start', root / 'setup-start.sh')
        pending = root / 'var/run/ck-identity-pending'

        def reached(event):
            return events.exists() and event in events.read_text().splitlines()

        try:
            ota = launch(ota_script)
            assert wait_for(lambda: (root / 'initializer.pid').exists()), 'import not started'
            if scenario == 'initializer_killed':
                initializer = int((root / 'initializer.pid').read_text())
                # In the public branch the initializer is a background ash.
                assert initializer != ota.pid, 'expected independent background initializer'
                os.kill(initializer, signal.SIGKILL)
            setup = launch(setup_script)
            expected_dhcp = scenario == 'success' or (not public and scenario == 'import_error')
            blocked = scenario in ('import_hang', 'initializer_killed')
            if expected_dhcp:
                assert wait_for(lambda: reached('dhcp-launch-reached')), 'DHCP launch not reached'
            elif blocked:
                # Accelerated sleep allows many poll iterations, with no cleanup.
                time.sleep(.4)
                assert pending.exists() and setup.poll() is None, 'pending gate did not persist'
                assert not reached('identity-helper-called'), 'identity unexpectedly started'
            else:
                assert wait_for(lambda: setup.poll() is not None), 'setup wrapper did not exit'
                assert setup.returncode != 0, 'fault did not propagate'
            assert reached('dhcp-launch-reached') == expected_dhcp
            return {
                'scenario': scenario, 'public_image': public,
                'expected_observation_confirmed': True,
                'identity_pending': pending.exists(),
                'rescue_marker': (root / 'var/run/ck-rescue').exists(),
                'identity_helper_reached': reached('identity-helper-called'),
                'controller_reached': reached('setup-controller-called'),
                'dhcp_launch_reached': reached('dhcp-launch-reached'),
                'setup_exit_status': setup.poll(),
            }
        finally:
            for p in processes:
                try:
                    os.killpg(p.pid, signal.SIGKILL)
                except ProcessLookupError:
                    pass
            for p in processes:
                p.wait(timeout=3)
            for log in logs:
                log.close()


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--tree', required=True, type=Path)
    parser.add_argument('--old-tree', type=Path)
    parser.add_argument('--output', required=True, type=Path)
    args = parser.parse_args()
    resource.setrlimit(resource.RLIMIT_CORE, (0, 0))
    runner = ['qemu-mips', '-L', str(args.tree), str(args.tree / 'bin/busybox'), 'sh']
    cases = [run_case(args.tree, runner, name) for name in (
        'success', 'import_error', 'import_crash', 'import_hang',
        'initializer_killed', 'identity_crash', 'controller_reject', 'mib_error')]
    if args.old_tree:
        cases.append(run_case(args.old_tree, runner, 'import_error', public=False))
    report = {
        'status': 'pass', 'environment': 'actual v0.2.6 BusyBox ash under qemu-user in offline Linux container',
        'actual_scripts_with_fixture_path_rewrites': True,
        'mocks': ['updater', 'identity helper', 'Wi-Fi MIB helper', 'setup controller', 'network commands'],
        'no_physical_device_or_network_access': True,
        'limitation': 'Injected faults establish startup consequences, not which fault occurred on hardware. DHCP launch marker is not a DHCP exchange.',
        'sha256': {path: digest(args.tree / path) for path in (
            'bin/busybox', 'bin/ck-ota-start', 'bin/ck-setup-start', 'bin/ck-setup-backend')},
        'cases': cases,
    }
    args.output.write_text(json.dumps(report, indent=2) + '\n')
    print(json.dumps(report, indent=2))


if __name__ == '__main__':
    main()
