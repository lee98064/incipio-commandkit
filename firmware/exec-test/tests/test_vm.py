#!/usr/bin/env python3
"""Test real MIPS services in a disposable VM; no programmer/device access."""
import contextlib, hashlib, hmac, http.client, importlib.util, io, json, re, subprocess, sys, time
from pathlib import Path
OUT=Path(__file__).resolve().parents[1]
OLD=OUT.parent/'matter'
sys.path.insert(0,str(OUT/'tools'))
sys.path.insert(0,str(OUT.parents[1]/'tools'))
from build import llvm_tool
from fetch_diagnostics import fetch
from download_diagnostics import download

def call(path, headers=None, body=None, port=18180, method='GET'):
    c=http.client.HTTPConnection('127.0.0.1',port,timeout=20)
    try:
        actual=dict(headers or {})
        if port==18182:
            actual.setdefault('Host','127.0.0.1:18082')
        c.request(method,path,body=body,headers=actual)
        r=c.getresponse();return r.status,r.read()
    finally:
        c.close()

def main():
    build=['docker','run','--rm','--network','none','-v',f'{OLD}:/work:ro','-v',f'{OUT}:/test',
           'incipio-public-build:v0.1.0-preview','python3','/test/tools/build_vm.py']
    subprocess.run(build+['--prepare-only'],check=True)
    flags=['--target=mips-unknown-linux-gnu','-march=mips1','-mabi=32','-msoft-float',
           '-mno-abicalls','-fno-pic','-fno-pie','-G0','-Os','-ffreestanding','-fno-builtin',
           '-fno-stack-protector','-ffunction-sections','-fdata-sections',
           '-Wall','-Wextra','-Werror','-Wno-unused-function','-DEXEC_TEST_FIXTURES']
    subprocess.run([llvm_tool('clang'),*flags,'-c',str(OUT/'src/setup/exec_runner.c'),
                    '-o',str(OUT/'artifacts/fixture-runner.o')],check=True)
    subprocess.run([llvm_tool('ld.lld'),'-m','elf32btsmip','--no-undefined','--gc-sections',
                    '--build-id=none','-T',str(OUT/'src/diag.ld'),str(OUT/'artifacts/fixture-runner.o'),
                    str(OUT/'artifacts/linux_o32.o'),'-o',str(OUT/'artifacts/fixture-runner')],check=True)
    subprocess.run(build+['--pack-only'],check=True)
    name='incipio-exec-test-20261014'
    console=OUT/'evidence/vm-console.txt'
    checks=[]
    with console.open('w') as log:
        p=subprocess.Popen(['docker','run','--rm','--name',name,
            '-p','127.0.0.1:18180:18080','-p','127.0.0.1:18182:18082',
            '-v',f'{OLD}:/work:ro','-v',f'{OUT}:/test:ro','incipio-public-build:v0.1.0-preview',
            'qemu-system-mips','-M','malta','-cpu','24Kc','-m','64','-vga','none','-nographic','-no-reboot',
            '-kernel','/work/deps/downloads/vmlinux-4.19.0-21-4kc-malta',
            '-initrd','/test/artifacts/test-vm.cpio','-append','console=ttyS0 rdinit=/init panic=1',
            '-netdev','user,id=testnet,hostfwd=tcp::18080-:18080,hostfwd=tcp::18082-:18082',
            '-device','pcnet,netdev=testnet,romfile='],
            stdout=log,stderr=subprocess.STDOUT)
        try:
            deadline=time.monotonic()+100
            while time.monotonic()<deadline:
                if p.poll() is not None:
                    raise RuntimeError('VM terminated; inspect evidence/vm-console.txt')
                text=console.read_text(errors='replace')
                if 'EXEC_VM_READY' in text:
                    try:
                        if call('/challenge')[0]==200:break
                    except OSError:pass
                time.sleep(.2)
            else:
                raise RuntimeError('VM did not become ready')
            text=console.read_text(errors='replace')
            for sample in ('tiny_eb','tiny_gcc16','cpp_lean'):
                assert f'EXEC_VM_TEST {sample} status=0' in text, sample+' failed'
            assert 'TEST_FAULT signal=4 getregs=0' in text and ' instruction=0xffffffff' in text
            assert re.search(r'TEST_END name=fixture_fault .* signal=4 .* FAIL',text)
            assert re.search(r'TEST_END name=fixture_flood .* output_capped=1 PASS',text)
            assert re.search(r'TEST_END name=fixture_timeout .* timeout_or_low_memory=1 .* FAIL',text)
            assert 'HASH_REJECT_VM_TEST status=1024' in text
            assert 'HASH_RECOVERY_VM_TEST status=0' in text
            checks+=['all three original samples print expected tokens and exit 0 in full MIPS VM',
                     'SIGILL captured with PC, cause and original instruction',
                     'output flood capped and drained', 'timeout captured without losing diagnostic service',
                     'modified sample hash rejected; restored original executes again']
            assert call('/diagnostics')[0]==403
            assert call('/etc/shadow')[0]==404
            status,nonce=call('/challenge');assert status==200 and len(nonce)==64
            key=bytes.fromhex((OUT/'private/diag.key').read_text().strip())
            signature=hmac.new(key,b'GET /diagnostics\n'+nonce,hashlib.sha256).hexdigest()
            proof={'X-Diag-Proof':nonce.decode()+':'+signature}
            assert call('/diagnostics',{'X-Diag-Proof':'0'*64+':'+signature})[0]==403
            status,body=call('/diagnostics',proof)
            assert status==200 and len(body)<=96*1024 and b'EXEC_SUITE_END' in body
            assert key.hex().encode() not in body
            for sample in ('tiny_eb','tiny_gcc16','cpp_lean'):
                assert re.search(rb'TEST_END name='+sample.encode()+rb' .* PASS',body)
            assert call('/diagnostics',proof)[0]==403
            checks+=['diagnostic authentication, bad proof and replay rejection',
                     'bounded report includes every test result without the key']
            fetch('127.0.0.1',OUT/'private/diag.key',OUT/'evidence/vm-diagnostics.txt',
                  source='full_system_vm_not_target_hardware',port=18180)
            with contextlib.redirect_stdout(io.StringIO()):
                archive=download('127.0.0.1',0,port=18180,source='full_system_vm_not_target_hardware')
            archive.rename(OUT/'evidence/vm-diagnostics-bundle.zip')
            for f in archive.with_suffix('').iterdir():
                f.unlink()
            archive.with_suffix('').rmdir()
            checks+=['shipping diagnostic client downloads report and ZIP from full MIPS VM']
            for _ in range(30):
                status,page=call('/',port=18182)
                if status==200:break
                time.sleep(.1)
            assert status==200 and '下載測試診斷'.encode() in page and b'Matter' not in page
            token=re.search(rb'name="token" value="([0-9a-f]{64})"',page)[1].decode()
            status,scan=call('/wifi-scan',port=18182,method='POST',body='token='+token,
                headers={'Content-Type':'application/x-www-form-urlencoded','Origin':'http://127.0.0.1:18082'})
            # The fixture's Host must match its own port, not the forwarded host port.
            if status==403:
                status,scan=call('/wifi-scan',port=18182,method='POST',body='token='+token,
                    headers={'Host':'127.0.0.1:18082','Content-Type':'application/x-www-form-urlencoded',
                             'Origin':'http://127.0.0.1:18082'})
            assert status in (200,202),scan
            checks+=['test-specific Wi-Fi page and scan request work in MIPS VM']
            result={'status':'pass','environment':'QEMU Malta / 24Kc / Linux 4.19 / 64 MiB; not RTL8196E hardware',
                    'checks':checks,'report_bytes':len(body),'hardware_access':False,
                    'services':{n:hashlib.sha256((OUT/'artifacts'/n).read_bytes()).hexdigest()
                                for n in ('exec-test-runner','exec-diag','ck-setupd')}}
            (OUT/'evidence/vm-tests.json').write_text(json.dumps(result,indent=2)+'\n')
            print(json.dumps(result,indent=2))
        finally:
            subprocess.run(['docker','stop','-t','1',name],stdout=subprocess.DEVNULL,stderr=subprocess.DEVNULL)
            p.wait(timeout=10)

if __name__=='__main__':
    main()
