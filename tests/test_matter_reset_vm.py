#!/usr/bin/env python3
"""Actual SDK/MIPS commissioning reset with a serial MCU and NOR file fixture."""
import hashlib
import hmac
import http.client
import json
import os
from pathlib import Path
import re
import socket
import struct
import subprocess
import sys
import threading
import time

ROOT=Path(__file__).resolve().parents[1]
WORK=ROOT/'firmware/matter'
sys.path.insert(0,str(WORK/'tools'))
sys.path.insert(0,str(ROOT/'tools'))
from test_device_vm import Mcu
from setup_control import control

def main():
    name='incipio-matter-reset-vm'
    deps=Path(os.environ['CK_SDK_DIR'])
    private=ROOT/'private'/('matter-reset-vm-'+str(int(time.time())))
    private.mkdir(mode=0o700)
    console=private/'console.txt'
    binary=Path(json.loads((WORK/'evidence/chip-tool-macos/build.json').read_text())['binary'])
    pin=struct.unpack_from('>I',(WORK/'private/device-test-VM/matter-device-identity').read_bytes(),12)[0]
    report={'status':'failed','environment':'actual MIPS SDK, 64 MiB Malta VM, daemon limited to 8 MiB AS, serial MCU and NOR file fixtures',
            'real_outlet':False,'binary_sha256':hashlib.sha256((WORK/'artifacts/update-matter-test/matterd-test').read_bytes()).hexdigest(),'checks':[]}
    args=['docker','run','-i','--rm','--name',name,'-p','127.0.0.1:55640:55640/udp',
          '-p','127.0.0.1:15551:15551','-p','127.0.0.1:18184:18184','-p','127.0.0.1:18185:18185',
          '-p','127.0.0.1:18186:18186','-v',str(WORK)+':/work:ro','-v',str(deps)+':/work/deps:ro',
          'incipio-public-build:v0.1.0-preview','qemu-system-mips','-M','malta','-cpu','24Kc','-m','64',
          '-vga','none','-display','none','-monitor','none','-no-reboot','-serial','stdio',
          '-serial','tcp:0.0.0.0:15551,server=on,wait=off','-kernel','/work/deps/downloads/vmlinux-4.19.0-21-4kc-malta',
          '-initrd','/work/artifacts/update-matter-test/vm.cpio','-append','console=ttyS0 rdinit=/init panic=1',
          '-netdev','user,id=n,restrict=off,hostfwd=udp:0.0.0.0:55640-10.0.2.15:5540,'
          'hostfwd=tcp:0.0.0.0:18184-10.0.2.15:18082,hostfwd=tcp:0.0.0.0:18185-10.0.2.15:18081,'
          'hostfwd=tcp:0.0.0.0:18186-10.0.2.15:18083','-device','pcnet,netdev=n,romfile=,mac=52:54:00:12:34:56']
    mcu=Mcu();stop=threading.Event();proxies=[];nodes=set()
    def proxy():
        while not stop.wait(.1):
            for node in re.findall(r'(?:Advertising|Advertise) operational node ([0-9A-Fa-f]{16}-[0-9A-Fa-f]{16})',console.read_text(errors='replace')):
                if node in nodes:continue
                nodes.add(node);proxies.append(subprocess.Popen(['dns-sd','-P',node,'_matter._tcp','local.','55640',
                    'incipio-reset-vm.local','127.0.0.1','SII=500','SAI=300','T=0'],stdout=subprocess.DEVNULL,stderr=subprocess.DEVNULL))
    def wait(predicate,timeout=45):
        end=time.monotonic()+timeout
        while time.monotonic()<end:
            try:
                value=predicate()
                if value:return value
            except (OSError,ValueError,http.client.HTTPException):pass
            if vm.poll() is not None:raise RuntimeError('VM exited; inspect private console')
            time.sleep(.2)
        raise TimeoutError('VM check did not complete; inspect private console')
    cookie='';csrf=''
    def request(method,path,body=None,headers=None):
        client=http.client.HTTPConnection('127.0.0.1',18184,timeout=5)
        client.request(method,path,body=body,headers={'Host':'10.0.2.15:18082','Cookie':cookie,'X-CK-CSRF':csrf,**(headers or {})})
        response=client.getresponse();data=response.read();hs=dict(response.getheaders());code=response.status;client.close();return code,data,hs
    def login():
        nonlocal cookie,csrf
        code,data,_=request('GET','/auth/challenge');assert code==200
        challenge=json.loads(data);key=hashlib.pbkdf2_hmac('sha256',b'FixtureAdmin42',bytes.fromhex(challenge['salt']),challenge['iterations'],32)
        nonce=challenge['nonce'];proof=nonce+':'+hmac.new(key,('ck-admin-login-v1\n'+nonce).encode(),hashlib.sha256).hexdigest()
        code,data,hs=request('POST','/auth/login',b'',{'X-CK-Login':proof});assert code==200
        cookie=hs['Set-Cookie'].split(';')[0];csrf=json.loads(data)['csrf'];return True
    def status():
        code,data,_=request('GET','/admin/state');assert code==200
        return json.loads(data)['matter']
    def web(path='/measurements',port=18184):
        if port==18184:
            code,data,_=request('GET',path);assert code==200;return data
        client=http.client.HTTPConnection('127.0.0.1',port,timeout=5)
        client.request('GET',path,headers={'Host':'127.0.0.1:18083'})
        response=client.getresponse();data=response.read();client.close();assert response.status==200;return data
    def operate(action):
        path={'reset-matter':'/admin/pairing-reset','open-commissioning':'/admin/open-commissioning','energy-reset':'/admin/energy-reset'}[action]
        code,body,_=request('POST',path,b'');assert code==202,(code,body)
        accepted=json.loads(body)
        def completed():
            state=status()
            if state['request_id']==accepted['request_id'] and state['result']=='complete':return state
        return wait(completed)
    def tool(label,arguments,storage='controller-a',expected=0):
        directory=private/storage;directory.mkdir(exist_ok=True)
        log=private/(label+'.log')
        with log.open('w') as output:
            log.chmod(0o600)
            child=subprocess.run([str(binary),*arguments,'--storage-directory',str(directory),'--timeout','10'],
                                 stdout=output,stderr=subprocess.STDOUT,timeout=20)
        assert (child.returncode==0)==(expected==0),label+' failed; inspect private controller log'
        return log.read_text(errors='replace')
    def pair(label,storage='controller-a',pase=False):
        text=tool(label,['pairing','already-discovered','12344321',str(pin),'127.0.0.1','55640',
             '--paa-trust-store-path',str(deps/'connectedhomeip/credentials/development/paa-root-certs'),
             *(['--pase-only','1'] if pase else [])],storage)
        if not pase:assert 'Device commissioning completed with success' in text
    with console.open('w') as output:
        console.chmod(0o600)
        vm=subprocess.Popen(args,stdin=subprocess.PIPE,stdout=output,stderr=subprocess.STDOUT)
        def serial():
            wait(lambda:'MATTER_TLV_VM_NETWORK_READY' in console.read_text(errors='replace'))
            mcu.run()
        thread=threading.Thread(target=serial,daemon=True);thread.start()
        mdns=threading.Thread(target=proxy,daemon=True);mdns.start()
        try:
            wait(lambda:'READY: interface=' in console.read_text(errors='replace'))
            wait(login);first=wait(status);assert first['fabrics']==0 and first['window_open']
            qr=hashlib.sha256(web('/matter-qr',18186)).hexdigest()
            pair('first-pair');assert wait(lambda:status()['fabrics']==1)
            opened=operate('open-commissioning')
            assert opened['fabrics']==1 and opened['window_open'] and opened['window_seconds']>850
            tool('existing-fabric-retained',['onoff','off','12344321','1'])
            report['checks'].append('authenticated open-window retains completed fabric and encrypted CASE control')
            pair('incomplete-pase','controller-pase',True)
            wait(lambda:status()['failsafe_armed'])
            opened=operate('open-commissioning')
            assert opened['fabrics']==1 and not opened['failsafe_armed'] and opened['window_open']
            report['checks'].append('open-window expires incomplete PASE fail-safe and reopens while retaining completed fabric')
            mcu.event(True);time.sleep(.3);mcu.event(False);time.sleep(.5)
            assert status()['fabrics']==1
            wait(lambda:(lambda x:x['available'] and x['energy_mwh'] and int(x['energy_mwh'])>0)(json.loads(web())),40)
            before=json.loads(web());assert int(before['energy_mwh'])>0
            mcu.power=0;wait(lambda:json.loads(web())['power_mw']==0)
            operate('energy-reset')
            wait(lambda:json.loads(web())['energy_mwh']=='0')
            time.sleep(32)
            assert json.loads(web())['energy_mwh']=='0','old RAM counter restored after reset'
            report['checks'].append('password-authenticated kWh reset commits zero in actual SDK owner and stays zero after next 30-second save')
            mcu.power=500
            before=json.loads(web());reset=operate('reset-matter')
            assert reset['fabrics']==0 and reset['window_open'] and not reset['failsafe_armed']
            wait(lambda:json.loads(web())['available'])
            assert int(json.loads(web())['energy_mwh'])>=int(before['energy_mwh'])
            assert hashlib.sha256(web('/matter-qr',18186)).hexdigest()==qr
            tool('old-controller-denied',['onoff','off','12344321','1'],expected=1)
            pair('new-controller-pair','controller-b')
            tool('new-controller-case',['onoff','off','12344321','1'],'controller-b')
            report['checks'].append('remote reset removes old controller, opens 900-second window, retains QR/admin password/network/cumulative energy and permits fresh full commissioning')
            mcu.socket.sendall(bytes.fromhex('aaff0055'))
            time.sleep(2)
            assert status()['fabrics']==1 and 'FACTORY_RESET_REQUESTED:' not in console.read_text(errors='replace')
            mcu.socket.sendall(bytes.fromhex('aaffff55'))
            wait(lambda:'FACTORY_RESET_REQUESTED:' in console.read_text(errors='replace'))
            wait(lambda:'FACTORY_INTENT_DURABLE=1' in console.read_text(errors='replace'))
            assert not mcu.bad
            report['checks'].append('reset-arm frame alone keeps pairing; confirmed physical long press commits durable factory intent and shuts down protocol owner')
            report['status']='pass'
        except Exception as error:report['failure']=str(error)
        finally:
            stop.set();mcu.done=True
            subprocess.run(['docker','stop','-t','1',name],stdout=subprocess.DEVNULL,stderr=subprocess.DEVNULL)
            vm.communicate(timeout=10);thread.join(timeout=1);mdns.join(timeout=1)
            for child in proxies:child.terminate();child.wait(timeout=5)
    (ROOT/'verification/admin-matter-vm-results.json').write_text(json.dumps(report,indent=2)+'\n')
    print(json.dumps(report,indent=2))
    return 0 if report['status']=='pass' else 1

if __name__=='__main__':raise SystemExit(main())
