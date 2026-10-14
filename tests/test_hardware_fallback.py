#!/usr/bin/env python3
"""MIPS/Linux VM: MCU polling without identity, Flash devices, or networking."""
import argparse
import hashlib
import json
from pathlib import Path
import stat
import subprocess
import sys
import tempfile
import threading
import time

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / 'firmware/matter/tools'))
from test_device_vm import Mcu


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--deps', type=Path, required=True)
    parser.add_argument('--toolchains', type=Path, required=True)
    args = parser.parse_args()
    binary = ROOT / 'firmware/matter/artifacts/softap-device-code/matterd-test'
    with tempfile.TemporaryDirectory(prefix='ck-mcu-only-vm-') as name:
        directory = Path(name)
        subprocess.run(['docker', 'run', '--rm', '--network', 'none',
                        '-v', str(ROOT) + ':/repo:ro', '-v', str(directory) + ':/fixture',
                        '-v', str(args.toolchains.resolve()) + ':/work/toolchains:ro',
                        '-v', str(args.deps.resolve()) + ':/work/deps:ro',
                        '-e', 'PATH=/work/toolchains/uclibc/bin:/usr/local/sbin:/usr/local/bin:/usr/sbin:/usr/bin:/sbin:/bin',
                        'incipio-public-build:v0.1.0-preview',
                        '/work/toolchains/uclibc/bin/mips-linux-uclibc-gcc', '-static', '-Os',
                        '-mno-shared', '-mno-llsc', '-mno-load-store-pairs', '-mmemcpy',
                        '/repo/tests/hardware_fallback_init.c', '-o', '/fixture/init'], check=True)
        entries = []

        def entry(path, data=b'', mode=stat.S_IFREG | 0o755, device=(0, 0)):
            name = path.encode() + b'\0'
            fields = [len(entries)+1, mode, 0, 0, 1, 0, len(data), 0, 0, *device, len(name), 0]
            blob = b'070701' + b''.join(f'{value:08x}'.encode() for value in fields) + name
            blob += b'\0' * (-len(blob) % 4)
            blob += data
            blob += b'\0' * (-len(data) % 4)
            entries.append(blob)

        for path in ('bin', 'dev', 'proc', 'var', 'tmp', 'etc'):
            entry(path, mode=stat.S_IFDIR | 0o755)
        for path, device in [('console', (5, 1)), ('null', (1, 3)),
                             ('ttyS0', (4, 64)), ('ttyS1', (4, 65))]:
            entry('dev/' + path, mode=stat.S_IFCHR | 0o600, device=device)
        entry('init', (directory / 'init').read_bytes())
        entry('bin/matterd-test', binary.read_bytes())
        entry('tmp/gpio', b' ' * 32, mode=stat.S_IFREG | 0o600)
        entry('TRAILER!!!', mode=0)
        (directory / 'vm.cpio').write_bytes(b''.join(entries))
        console = directory / 'console.txt'
        command = ['docker', 'run', '-i', '--rm', '--name', 'incipio-mcu-only-vm',
                   '-p', '127.0.0.1:15551:15551', '-v', str(directory) + ':/fixture:ro',
                   '-v', str(args.deps.resolve()) + ':/deps:ro',
                   'incipio-public-build:v0.1.0-preview', 'qemu-system-mips',
                   '-M', 'malta', '-cpu', '24Kc', '-m', '32', '-vga', 'none', '-display', 'none',
                   '-monitor', 'none', '-no-reboot', '-serial', 'stdio',
                   '-serial', 'tcp:0.0.0.0:15551,server=on,wait=off',
                   '-kernel', '/deps/downloads/vmlinux-4.19.0-21-4kc-malta',
                   '-initrd', '/fixture/vm.cpio', '-append', 'console=ttyS0 rdinit=/init panic=1',
                   '-net', 'none']
        mcu = Mcu()
        with console.open('wb') as output:
            process = subprocess.Popen(command, stdin=subprocess.PIPE, stdout=output, stderr=subprocess.STDOUT)

            def wait_for(predicate, start=0, timeout=20):
                until = time.monotonic() + timeout
                while time.monotonic() < until:
                    text = console.read_text(errors='replace')
                    if predicate(text[start:]):
                        return
                    if process.poll() is not None:
                        raise AssertionError('VM exited: ' + text[-1800:])
                    time.sleep(.1)
                raise AssertionError('VM timed out: ' + console.read_text(errors='replace')[-1800:])

            try:
                wait_for(lambda text: 'MCU_ONLY_VM_READY_NO_IDENTITY' in text)
                worker = threading.Thread(target=mcu.run, daemon=True)
                worker.start()
                for phase in range(2):
                    wait_for(lambda text: 'MCU_VM_PHASE=' + str(phase) in text)
                    text = console.read_text(errors='replace')
                    start = text.index('MCU_VM_PHASE=' + str(phase))
                    wait_for(lambda text: 'cold_off_confirmed=1' in text, start=start)
                    if phase == 0:
                        wait_for(lambda text: 'MCU_ACTIVE_WAITING_FOR_DEVICE_IDENTITY' in text)
                    assert mcu.frames[0] == {'command': '0xa1', 'on': False}
                    for on in (True, False, True, False):
                        at = console.stat().st_size
                        mcu.event(on)
                        expected = 'relay_known=1 relay_on=' + str(int(on))
                        wait_for(lambda text: expected in text, start=at)
                    process.stdin.write(b'stop\n')
                    process.stdin.flush()
                    wait_for(lambda text: 'MCU_VM_PHASE_' + str(phase) + '_WAIT=0' in text)
                assert len([frame for frame in mcu.frames if frame['command'] == '0xa4']) >= 4
                assert not mcu.bad, mcu.bad
                print(json.dumps({'status': 'pass', 'binary_sha256': hashlib.sha256(binary.read_bytes()).hexdigest(),
                                  'identity_missing': True, 'cold_off_confirmed': True,
                                  'startup_identity_wait_and_mcu_only_mode': True,
                                  'simulated_button_state_changes': 8, 'continued_mcu_polling': True,
                                  'flash_devices_present': False, 'virtual_nic_present': False,
                                  'original_hardware_test': False, 'address_space_limit': 8*1024*1024}))
            finally:
                mcu.done = True
                subprocess.run(['docker', 'stop', '-t', '1', 'incipio-mcu-only-vm'],
                               stdout=subprocess.DEVNULL, stderr=subprocess.DEVNULL, timeout=10)
                process.wait(timeout=10)


if __name__ == '__main__':
    main()
