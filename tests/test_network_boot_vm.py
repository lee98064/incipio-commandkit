#!/usr/bin/env python3
"""Real BusyBox PID1/DHCP and production setup controller in a MIPS VM.

MTD, Wi-Fi MIB and the Matter identity helper are synthetic fixtures. No real
outlet, Flash device or RF access. All credentials below are fresh throwaways.
"""
import argparse
import hashlib
import hmac
import http.client
import json
import os
from pathlib import Path
import re
import stat
import subprocess
import sys
import tempfile
import time

ROOT=Path(__file__).resolve().parents[1]
SOURCE=ROOT/'firmware/matter/src'
sys.path.insert(0,str(ROOT/'tools'))
from fwlib import read_file


def main():
    parser=argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--deps',type=Path,required=True)
    parser.add_argument('--toolchains',type=Path,required=True)
    parser.add_argument('--vendor-ota',type=Path,required=True)
    parser.add_argument('--output',type=Path,required=True)
    args=parser.parse_args()
    run=ROOT/'private'/('network-boot-vm-'+str(int(time.time())))
    run.mkdir(mode=0o700);console=run/'console.log'
    container='incipio-'+run.name
    compile=['docker','run','--rm','--network','none','-v',str(ROOT)+':/repo:ro',
        '-v',str(run)+':/fixture','-v',str(args.deps.resolve())+':/work/deps:ro',
        '-v',str(args.toolchains.resolve())+':/work/toolchains:ro','incipio-public-build:v0.1.0-preview',
        '/work/toolchains/uclibc/bin/mips-linux-uclibc-gcc','-static','-Os','-mno-llsc','-mno-load-store-pairs','-mmemcpy',
        '/repo/tests/network_boot_init.c','-o','/fixture/init']
    subprocess.run(compile,check=True)
    entries=[]
    def entry(path,data=b'',mode=stat.S_IFREG|0o755,device=(0,0)):
        name=path.encode()+b'\0';fields=[len(entries)+1,mode,0,0,1,0,len(data),0,0,*device,len(name),0]
        blob=b'070701'+b''.join(f'{v:08x}'.encode() for v in fields)+name
        blob+=b'\0'*(-len(blob)%4);blob+=data;blob+=b'\0'*(-len(data)%4);entries.append(blob)
    for folder in ['bin','lib','dev','etc','proc','var','tmp']:
        entry(folder,mode=stat.S_IFDIR|0o755)
    for name,device in [('console',(5,1)),('null',(1,3)),('urandom',(1,9)),('ttyS0',(4,64))]:
        entry('dev/'+name,mode=stat.S_IFCHR|0o600,device=device)
    vendor=args.vendor_ota.read_bytes()[256:]
    for path in ['bin/busybox','bin/udhcpd','lib/ld-uClibc.so.0','lib/libc.so.0','lib/libgcc_s.so.1']:
        entry(path,read_file(vendor,path))
    entry('bin/udhcpc',b'udhcpd',mode=stat.S_IFLNK|0o777)
    for applet in ['sh','sleep','mkdir','rm','cp','cat','killall','ifconfig','route','ps']:
        entry('bin/'+applet,b'busybox',mode=stat.S_IFLNK|0o777)
    for name in ['mii.ko','pcnet32.ko']:entry(name,(args.deps/'downloads'/name).read_bytes())
    entry('init',(run/'init').read_bytes())
    entry('bin/ck-boot-guard',(ROOT/'firmware/matter/artifacts/update/ck-boot-guard').read_bytes())
    for binary in ['ck-setupd','ck-lease']:
        entry('bin/'+binary,(ROOT/'firmware/matter/artifacts/softap-device-code'/binary).read_bytes())
    for binary,source in [('ck-identity-start','update/ck-identity-start'),('ck-ota-start','update/ck-ota-start'),
        ('ck-onboarding-start','setup/ck-onboarding-start'),('ck-management-start','setup/ck-management-start'),('ck-setup-start','setup/ck-setup-device-start'),
        ('ck-setup-backend','setup/ck-setup-device-backend'),('ck-udhcpc','setup/ck-udhcpc-fixed')]:
        entry('bin/'+binary,(SOURCE/source).read_bytes())
    entry('etc/ck-variant',b'matter\n');entry('test-device.key',os.urandom(32),mode=stat.S_IFREG|0o600)
    key=os.urandom(32);entry('test-diag.key',key.hex().encode()+b'\n',mode=stat.S_IFREG|0o600)
    def script(name,body):entry('bin/'+name,('#!/bin/sh\n'+body+'\n').encode())
    script('ck-wificfg','if [ "$1" = status ]; then echo configured=1; else : > /var/run/unexpected-mib-write; exit 1; fi')
    script('ck-updater','''case "$1" in
--import|--import-wait)
  [ -f /var/run/allow-identity ] || exit 1
  cp /test-device.key /var/lib/ck-state/device.key
  cp /test-diag.key /var/lib/ck-state/diag.key ;;
--boot) echo boot >> /var/run/boot-count ;;
--protocol-boot) printf matter > /var/run/ck-protocol-active ;;
--admin-state) printf '!' > /var/run/ck-admin-state ;;
*) : > /var/run/unexpected-mib-write; exit 1 ;;
esac''')
    entry('bin/ck-updated',(ROOT/'firmware/matter/artifacts/update/ck-updated').read_bytes())
    entry('etc/ck-version',b'0.2.9-preview\n',mode=stat.S_IFREG|0o444)
    entry('etc/ck-update.meta',__import__('struct').pack('>III',0x434b0004,1,11),mode=stat.S_IFREG|0o444)
    script('matterd-test','test "$1" = --init-identity && test "$2" = wlan0 || exit 2\n'
        'test -f /var/lib/ck-state/device.key || exit 5\nprintf 12345678901 > /var/run/matter-manual-code\n')
    entry('bin/ck-ota-start-v6',read_file(vendor,'bin/ck-ota-start'))
    script('test-rcS','/bin/ck-ota-start-v6\nprintf "V6_STARTUP_EXIT=%s\\n" "$?"\n/bin/ck-ota-start\necho NETWORK_BOOT_VM_READY')
    inittab='::sysinit:/bin/test-rcS\n::respawn:/bin/sh\n'
    for name in ['ck-identity-start','ck-onboarding-start','ck-setup-start','ck-management-start']:
        inittab+='::respawn:/bin/'+name+'\n'
    entry('etc/inittab',inittab.encode(),mode=stat.S_IFREG|0o644)
    entry('TRAILER!!!',mode=0);(run/'vm.cpio').write_bytes(b''.join(entries))
    command=['docker','run','--rm','-i','--name',container,
        '-p','127.0.0.1:18190:18190','-p','127.0.0.1:18191:18191','-p','127.0.0.1:18192:18192','-v',str(run)+':/fixture:ro',
        '-v',str(args.deps.resolve())+':/deps:ro','incipio-public-build:v0.1.0-preview',
        'qemu-system-mips','-M','malta','-cpu','24Kc','-m','64','-vga','none','-display','none',
        '-monitor','none','-serial','stdio','-no-reboot','-kernel','/deps/downloads/vmlinux-4.19.0-21-4kc-malta',
        '-initrd','/fixture/vm.cpio','-append','console=ttyS0 rdinit=/init panic=1',
        '-netdev','user,id=n,restrict=off,hostfwd=tcp:0.0.0.0:18190-10.0.2.15:18081,hostfwd=tcp:0.0.0.0:18191-10.0.2.15:18082,hostfwd=tcp:0.0.0.0:18192-10.0.2.15:80',
        '-device','pcnet,netdev=n,romfile=,mac=52:54:00:12:34:56']
    report={'status':'failed','real_outlet':False,'environment':'64 MiB Malta/Linux 4.19; actual vendor BusyBox init, production guard/setupd/backend/DHCP/lease publisher',
        'memory_limitation':'This Debian test kernel does not boot with -m 32 even without an initrd. This is not a physical 32 MiB outlet memory validation.',
        'fixtures':['MIB status/write rejection','identity importer','Matter identity helper'],
        'checks':[],'sha256':{name:hashlib.sha256((ROOT/path).read_bytes()).hexdigest() for name,path in {
            'guard':'firmware/matter/artifacts/update/ck-boot-guard','setupd':'firmware/matter/artifacts/softap-device-code/ck-setupd'}.items()}}
    def request(path,headers=None):
        c=http.client.HTTPConnection('127.0.0.1',18190,timeout=2)
        c.request('GET',path,headers=headers or {});r=c.getresponse();data=r.read();c.close();return r.status,data
    def wait(check,timeout=55):
        end=time.monotonic()+timeout
        while time.monotonic()<end:
            try:
                value=check()
                if value:return value
            except (OSError,http.client.HTTPException):pass
            if vm.poll() is not None:raise AssertionError('VM exited: '+console.read_text(errors='replace')[-1500:])
            time.sleep(.2)
        raise AssertionError('VM timeout: '+console.read_text(errors='replace')[-2000:])
    def send(text):vm.stdin.write((text+'\n').encode());vm.stdin.flush()
    serial_number=0
    def serial(command):
        nonlocal serial_number
        serial_number+=1;token='SERIAL_DONE_'+str(serial_number)
        start=console.stat().st_size
        send(command+'; echo '+token)
        wait(lambda:re.search(r'(?m)^'+token+r'\r?$',console.read_bytes()[start:].decode(errors='replace')),timeout=8)
        return console.read_bytes()[start:].decode(errors='replace')
    def pid(command):
        text=serial(command)
        match=re.search(r'(?m)^([0-9]+)\r?$',text)
        return int(match[1]) if match else 0
    def state():
        status,nonce=request('/challenge');assert status==200
        proof=nonce.decode()+':'+hmac.new(key,b'GET /state\n'+nonce,hashlib.sha256).hexdigest()
        status,body=request('/state',{'X-Setup-Proof':proof});return status,body
    with console.open('wb') as output:
        vm=subprocess.Popen(command,stdin=subprocess.PIPE,stdout=output,stderr=subprocess.STDOUT)
        try:
            wait(lambda:'NETWORK_BOOT_VM_READY' in console.read_text(errors='replace'))
            assert 'V6_STARTUP_EXIT=127' in console.read_text(errors='replace')
            report['checks'].append('actual v0.2.6 startup script exits 127 before import: vendor BusyBox has no touch applet or external touch')
            wait(lambda:request('/challenge')[0]==503)
            report['checks'].append('real DHCP lease and reachable TCP management port with no identity and persistent import errors; all API access returns 503')
            assert re.search(r'(?m)^bound 10\.0\.2\.15\r?$',serial('cat /var/run/ck-wifi-bound'))
            def management():
                c=http.client.HTTPConnection('127.0.0.1',18191,timeout=2)
                c.request('GET','/',headers={'Host':'10.0.2.15:18082'});r=c.getresponse();body=r.read();c.close()
                return r.status==200 and b'login-password' in body
            wait(management)
            def redirect():
                c=http.client.HTTPConnection('127.0.0.1',18192,timeout=2)
                c.request('GET','/',headers={'Host':'10.0.2.15'});r=c.getresponse();r.read()
                result=r.status==302 and r.getheader('Location')=='http://10.0.2.15:18082/';c.close();return result
            wait(redirect)
            report['checks'].append('production station port 80 redirects to the numeric management URL independently of identity')
            report['checks'].append('production password dashboard remains reachable while identity import keeps failing and no MTD exists')

            original_pid=pid('cat /var/run/ck-setup.pid');assert original_pid
            serial('kill -SEGV '+str(original_pid))
            time.sleep(2);wait(lambda:request('/challenge')[0]==503)
            recovered_pid=pid('cat /var/run/ck-setup.pid');assert recovered_pid and recovered_pid!=original_pid
            report['checks'].append('PID1 restarts crashed setup controller; DHCP lease retained')
            serial('kill -STOP '+str(recovered_pid))
            time.sleep(2);wait(lambda:request('/challenge')[0]==503,timeout=85)
            assert pid('cat /var/run/ck-setup.pid')!=recovered_pid
            report['checks'].append('production 40-second heartbeat watchdog kills a stopped controller; PID1 restores service')
            serial(': > /var/run/allow-identity')
            wait(lambda:request('/challenge')[0]==200,timeout=35)
            assert state()[0]==200 and b'state=online' in state()[1]
            report['checks'].append('identity/management become ready after network is already online, without reboot')
            old_dhcp=pid('cat /var/run/ck-udhcpc.pid');assert old_dhcp
            serial('kill '+str(old_dhcp))
            wait(lambda:(lambda current:current and current!=old_dhcp)(pid('cat /var/run/ck-udhcpc.pid')),timeout=50)
            wait(lambda:state()[0]==200 and b'state=online' in state()[1])
            report['checks'].append('DHCP client death is detected and a new client completes DHCP')
            final=serial('cat /var/run/ck-wifi-bound; cat /var/run/boot-count; '
                 'if [ -f /var/run/unexpected-mib-write ]; then echo MIB_WRITE_FAILURE; else echo MIB_UNCHANGED; fi; '
                 'echo FINAL_END')
            assert not re.search(r'(?m)^MIB_WRITE_FAILURE\r?$',final)
            assert re.search(r'(?m)^MIB_UNCHANGED\r?$',final)
            report['checks'].append('saved station reconnection never writes MIB or onboarded state')
            report['status']='pass'
        finally:
            subprocess.run(['docker','stop','-t','1',container],stdout=subprocess.DEVNULL,stderr=subprocess.DEVNULL)
            vm.wait(timeout=10)
            args.output.write_text(json.dumps(report,indent=2)+'\n')
    print(json.dumps(report,indent=2))


if __name__=='__main__':main()
