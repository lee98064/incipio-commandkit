#!/usr/bin/env python3
"""Real MIPS Matter stack and kernel TTY, with a simulated MCU; no outlet access."""
import hashlib,json,re,socket,subprocess,threading,time,os,sys
from datetime import datetime
from pathlib import Path

OUT=Path(__file__).resolve().parents[1]
NAME='incipio-matter-device-vm'
EV=OUT/'evidence/softap-device-code'
PERSISTENT='--persistent' in sys.argv
ART='artifacts/update-matter-test' if PERSISTENT else 'artifacts/softap-device-code'
DEPS=Path(os.environ.get('CK_SDK_DIR',str(OUT/'deps')))
def sha(p):return hashlib.sha256(p.read_bytes()).hexdigest()

class Mcu:
    def __init__(self):
        self.meter_drop=False;self.voltage=6976;self.current=384;self.power=500;self.on=False;self.drop=False;self.done=False;self.bad=[];self.frames=[];self.socket=None
    def event(self,on):
        self.on=on
        self.socket.sendall(bytes([0xfe,0x31 if on else 0x30,0x31 if on else 0x30,0x56]))
    def run(self):
        until=time.monotonic()+25
        while time.monotonic()<until:
            try:self.socket=socket.create_connection(('127.0.0.1',15551),timeout=1);break
            except OSError:time.sleep(.1)
        if not self.socket:self.bad.append('MCU socket unavailable');return
        self.socket.settimeout(.2);buffer=bytearray()
        while not self.done:
            try:data=self.socket.recv(256)
            except socket.timeout:continue
            except OSError:break
            if not data:break
            buffer.extend(data)
            while len(buffer)>=14:
                frame=bytes(buffer[:14]);del buffer[:14]
                code=frame[1]
                expected=bytearray([0xff,code,0,0xe0,0x4c,0x81,0x96,0xc1,0xc1,0,0x1b,0x32,0,0x55])
                if code==0xa1:expected[9]=frame[9];expected[11]=0
                if code not in (0xa1,0xa4,0xa5,0xa6,0xa7) or frame!=bytes(expected):self.bad.append(frame.hex());continue
                self.frames.append({'command':hex(code),'on':frame[9]==0x31 if code==0xa1 else None})
                if code==0xa1:self.on=frame[9]==0x31
                elif code==0xa4 and not self.drop:self.event(self.on)
                elif code in (0xa5,0xa6,0xa7) and not self.meter_drop:
                    raw={0xa5:self.voltage,0xa6:self.current,0xa7:self.power}[code]
                    self.socket.sendall(bytes([0xff,raw&255,raw>>8,0x55]))

def main():
    stamp=datetime.now().strftime('%Y%m%d-%H%M%S')
    EV.mkdir(parents=True,exist_ok=True)
    private=OUT/'private'/('chip-tool-relay-vm-'+stamp);private.mkdir(mode=0o700)
    console=private/'server-console.txt';console.touch(mode=0o600)
    import struct
    record=(OUT/'private/device-test-VM/matter-device-identity').read_bytes()
    identity={'setup_pin':struct.unpack_from('>I',record,12)[0]}
    build=json.loads((OUT/'evidence/chip-tool-macos/build.json').read_text())
    binary=Path(build['binary']);assert sha(binary)==build['binary_sha256']
    cmd=['docker','run','-i','--rm','--name',NAME,'-p','127.0.0.1:55640:55640/udp','-p','127.0.0.1:15551:15551',
         '-v',str(OUT)+':/work:ro','-v',os.environ.get('CK_SDK_DIR',str(OUT/'deps'))+':/work/deps:ro','incipio-public-build:v0.1.0-preview','qemu-system-mips',
         '-M','malta','-cpu','24Kc','-m','64','-vga','none','-display','none','-monitor','none','-no-reboot',
         '-serial','stdio','-serial','tcp:0.0.0.0:15551,server=on,wait=off',
         '-kernel','/work/deps/downloads/vmlinux-4.19.0-21-4kc-malta','-initrd','/work/'+ART+'/vm.cpio',
         '-append','console=ttyS0 rdinit=/init panic=1','-netdev',
         'user,id=n,restrict=off,hostfwd=udp:0.0.0.0:55640-10.0.2.15:5540','-device','pcnet,netdev=n,romfile=,mac=52:54:00:12:34:56']
    report={'status':'failed','environment':'MIPS Malta/24Kc Linux 4.19 VM, 64 MiB RAM, 8 MiB daemon AS; simulated serial MCU',
            'binary_sha256':sha(OUT/ART/'matterd-test'),'source_sha256':{str(p.relative_to(OUT)):sha(p) for p in
                [OUT/'src/relay/RelayEngine.cpp',OUT/'src/relay/McuController.cpp',OUT/'src/matter-app-device/main.cpp',Path(__file__)]},
            'original_hardware_test':False,'flash_access':'regular-file journal fixture' if PERSISTENT else False,'full_commissioning':False,'checks':[]}
    proxies=[];proxy_nodes=set();stop=threading.Event();mcu=Mcu()
    def proxy_loop():
        # The VM's multicast cannot traverse user-mode NAT. Publish the SDK's
        # actual operational instance on the host, pointing to its loopback
        # UDP forward. This is a test discovery adapter, not a product bridge.
        while not stop.wait(.1):
            text=console.read_text(errors='replace')
            for node in re.findall(r'(?:Advertising|Advertise) operational node ([0-9A-Fa-f]{16}-[0-9A-Fa-f]{16})',text):
                if node in proxy_nodes:continue
                proxy_nodes.add(node)
                proxies.append(subprocess.Popen(['dns-sd','-P',node,'_matter._tcp','local.','55640',
                    'incipio-relay-vm.local','127.0.0.1','SII=500','SAI=300','T=0'],stdout=subprocess.DEVNULL,stderr=subprocess.DEVNULL))
    def tool(name,arguments,timeout=45):
        log=private/(name+'.log')
        with log.open('x') as sink:
            log.chmod(0o600)
            child=subprocess.run([str(binary),*arguments,'--storage-directory',str(private),*([] if '--timeout' in arguments else ['--timeout','30'])],
                                 stdout=sink,stderr=subprocess.STDOUT,timeout=timeout)
        report.setdefault('commands',[]).append({'name':name,'returncode':child.returncode,'log':str(log.relative_to(OUT)),'sha256':sha(log)})
        return child.returncode,log.read_text(errors='replace')
    with console.open('w') as sink:
        vm=subprocess.Popen(cmd,stdin=subprocess.PIPE if PERSISTENT else None,stdout=sink,stderr=subprocess.STDOUT)
        def mcu_when_ready():
            until=time.monotonic()+25
            while time.monotonic()<until and not mcu.done:
                if 'MATTER_TLV_VM_NETWORK_READY' in console.read_text(errors='replace'):break
                time.sleep(.05)
            mcu.run()
        worker=threading.Thread(target=mcu_when_ready,daemon=True);worker.start()
        proxy=threading.Thread(target=proxy_loop,daemon=True);proxy.start()
        try:
            until=time.monotonic()+35
            while time.monotonic()<until:
                text=console.read_text(errors='replace')
                if 'READY:' in text and 'cold_off_confirmed=1' in text:break
                if vm.poll() is not None:raise RuntimeError('VM exited during initialization')
                time.sleep(.1)
            else:raise RuntimeError('server/boot OFF did not become ready')
            assert mcu.frames and mcu.frames[0]=={'command':'0xa1','on':False}
            report['checks'].append('cold boot sends OFF and awaits MCU confirmation')
            print('RELAY_VM_READY_OFF_CONFIRMED',flush=True)
            rc,text=tool('commission',['pairing','already-discovered','12344321',str(identity['setup_pin']),'127.0.0.1','55640',
                '--paa-trust-store-path',str(DEPS/'connectedhomeip/credentials/development/paa-root-certs')])
            assert rc==0 and 'Device commissioning completed with success' in text,'full commissioning failed; inspect private log'
            report['full_commissioning']=True;report['checks'].append('full development commissioning, default attestation verifier')
            print('RELAY_VM_COMMISSIONING_PASS',flush=True)
            rc,text=tool('ota-cluster',['otasoftwareupdaterequestor','read','update-state','12344321','0'])
            assert rc==0,'OTA Requestor cluster is unavailable'
            report['checks'].append('OTA Requestor cluster available over encrypted Matter session')
            if PERSISTENT:
                count=console.read_text(errors='replace').count('READY: interface=')
                vm.stdin.write(b'restart\n');vm.stdin.flush()
                until=time.monotonic()+35
                while time.monotonic()<until:
                    if console.read_text(errors='replace').count('READY: interface=')>count:break
                    if vm.poll() is not None:raise RuntimeError('VM exited during persistent restart')
                    time.sleep(.1)
                else:raise RuntimeError('persistent application restart did not become ready')
                rc,_=tool('persistent-case-after-restart',['onoff','off','12344321','1'])
                assert rc==0,'CASE after restart without re-pairing failed'
                report['checks'].append('process reboot retains fabrics; encrypted CASE command succeeds without commissioning again')
                print('PERSISTENT_FABRIC_RESTART_PASS',flush=True)

            time.sleep(6)
            for attribute,expected in [('voltage',109000),('rmsvoltage',109000),('rmscurrent',1500),('active-power',500000)]:
                rc,text=tool('meter-'+attribute,['electricalpowermeasurement','read',attribute,'12344321','1'])
                assert rc==0 and re.search(r':\s*'+str(expected)+r'\b',text),'meter value mismatch: '+attribute
            report['checks'].append('standard ElectricalPowerMeasurement: 109000 mV, 1500 mA RMS and 500000 mW over CASE')
            rc,text=tool('meter-descriptor',['descriptor','read','server-list','12344321','1'])
            assert rc==0 and '144 (ElectricalPowerMeasurement)' in text,'ElectricalPowerMeasurement missing from Descriptor'
            rc,text=tool('meter-accuracy',['electricalpowermeasurement','read','accuracy','12344321','1'])
            assert rc==0,'mandatory measurement accuracy unavailable'
            # Real subscription in the controller; changed values must produce a report.
            subscription_log=private/'meter-subscribe.log'
            with subscription_log.open('x') as output:
                subscription_log.chmod(0o600)
                subscriber=subprocess.Popen([str(binary),'interactive','start','--storage-directory',str(private),'--advertise-operational','false'],
                                            stdin=subprocess.PIPE,stdout=output,stderr=subprocess.STDOUT)
                try:
                    subscriber.stdin.write(b'electricalpowermeasurement subscribe active-power 1 5 12344321 1\n');subscriber.stdin.flush()
                    until=time.monotonic()+15
                    while time.monotonic()<until:
                        if 'Subscription established' in subscription_log.read_text(errors='replace'):break
                        if subscriber.poll() is not None:raise RuntimeError('interactive subscriber exited')
                        time.sleep(.1)
                    else:raise RuntimeError('subscription not established')
                    mcu.power=625
                    until=time.monotonic()+15
                    while time.monotonic()<until:
                        if re.search(r'ActivePower:\s*625000\b',subscription_log.read_text(errors='replace')):break
                        time.sleep(.1)
                    else:raise RuntimeError('changed power subscription report missing')
                finally:
                    if subscriber.poll() is None:
                        subscriber.stdin.write(b'exit\n');subscriber.stdin.flush()
                        try:subscriber.wait(timeout=5)
                        except subprocess.TimeoutExpired:subscriber.terminate();subscriber.wait(timeout=5)
                    subscriber.stdin.close()
            report.setdefault('commands',[]).append({'name':'meter-subscribe','returncode':subscriber.returncode,
                'log':str(subscription_log.relative_to(OUT)),'sha256':sha(subscription_log)})
            report['checks'].append('standard active-power subscription reports changed MCU sample')
            mcu.meter_drop=True;time.sleep(16)
            for attribute in ['voltage','rmscurrent','active-power']:
                rc,text=tool('meter-stale-'+attribute,['electricalpowermeasurement','read',attribute,'12344321','1'])
                assert rc==0 and re.search(r':\s*null\b',text,re.I),'stale measurement must be null'
            mcu.meter_drop=False;time.sleep(6)
            rc,text=tool('meter-recovery',['electricalpowermeasurement','read','active-power','12344321','1'])
            assert rc==0 and '625000' in text,'measurement recovery failed'
            rc,_=tool('meter-unsupported',['electricalpowermeasurement','read','active-current','12344321','1'])
            assert rc!=0,'RMS current must not be relabelled ActiveCurrent'
            report['checks'].append('stale metering becomes null, fresh readings recover; unsupported ActiveCurrent rejected')

            for i,command in enumerate(['on','off','toggle','on','on','off','off','toggle','off','on']):
                before=mcu.on;rc,_=tool('relay-'+str(i),['onoff',command,'12344321','1'])
                assert rc==0
                expected=not before if command=='toggle' else command=='on'
                assert mcu.on==expected
            report['checks'].append('10 encrypted On/Off/Toggle commands including duplicates confirmed through kernel TTY')
            mcu.event(False);time.sleep(.4)
            rc,text=tool('button-read',['onoff','read','on-off','12344321','1'])
            assert rc==0 and re.search(r'OnOff:\s*FALSE',text,re.I),'button state read mismatch'
            report['checks'].append('unsolicited physical-button frame reflected in Matter attribute')
            mcu.drop=True
            rc,_=tool('mcu-timeout',['onoff','on','12344321','1'])
            assert rc!=0,'missing MCU confirmation must fail'
            mcu.drop=False;time.sleep(2.5)
            rc,_=tool('recover-off',['onoff','off','12344321','1']);assert rc==0
            report['checks'].append('MCU timeout returns failure; subsequent command recovers')
            rc,_=tool('identify',['identify','identify','2','12344321','1']);assert rc==0
            report['checks'].append('Identify command accepted by integrated LED delegate')
            assert not mcu.bad,mcu.bad
            report['status']='pass'
        except (AssertionError,RuntimeError,subprocess.TimeoutExpired) as error:
            report['failure']=str(error)
        finally:
            mcu.done=True;stop.set();worker.join(timeout=1);proxy.join(timeout=1)
            for child in proxies:child.terminate()
            for child in proxies:child.wait(timeout=3)
            subprocess.run(['docker','stop','-t','1',NAME],stdout=subprocess.DEVNULL,stderr=subprocess.DEVNULL)
            vm.wait(timeout=10)
            if vm.stdin:vm.stdin.close()
    report.update(private_console=str(console.relative_to(OUT)),private_console_sha256=sha(console),
                  mcu_tx_frames=len(mcu.frames),mcu_bad_frames=mcu.bad,discovery_proxy_instances=len(proxy_nodes),
                  limitation='Simulated MCU confirmations; actual outlet switching, Wi-Fi, Apple/HA and power-on behavior remain unverified')
    dest=EV/('integrated-'+stamp+'.json');dest.write_text(json.dumps(report,indent=2)+'\n')
    print(json.dumps({k:v for k,v in report.items() if k not in ('source_sha256','commands')},indent=2))
    raise SystemExit(0 if report['status']=='pass' else 1)
if __name__=='__main__':main()
