#!/usr/bin/env python3
"""Original vendor libraries, current helper, regular RAM MTD fixture."""
import hashlib,json,re,subprocess
from pathlib import Path
OUT=Path(__file__).resolve().parents[1];EV=OUT/'evidence/softap-device-code'
def sha(p):return hashlib.sha256(p.read_bytes()).hexdigest()
def main():
    script='python3 tools/build_device_mib_fixture.py && timeout 40 qemu-system-mips -M malta -cpu 24Kc -m 64 -vga none -nographic -no-reboot -kernel deps/downloads/vmlinux-4.19.0-21-4kc-malta -initrd private/device-mib-test.cpio -append "console=ttyS0 rdinit=/init panic=1" -nic none'
    r=subprocess.run(['docker','run','--rm','-v',f'{OUT}:/work','-v',f'{OUT/"private/public-vendor"}:/firmware:ro',
        '-w','/work','incipio-public-build:v0.1.0-preview','sh','-c',script],capture_output=True,timeout=60)
    out=r.stdout.decode(errors='replace').replace('\r','')+r.stderr.decode(errors='replace')
    (EV/'mib-system-console.txt').write_text(out)
    assert r.returncode==0 and 'MIB_SYSTEM_COMPLETE PASS' in out
    states=re.findall(r'mode=(\d+)\nconfigured=(\d+)',out);assert states==[('0','0'),('1','0'),('1','0'),('1','1')],states
    security=re.findall(r'encryption=(\d+)\npsk_empty=(\d+)',out)
    assert security==[('0','1'),('4','0'),('0','1'),('0','1')],security
    record={'security_readback':security,'status':'pass','backend':'new helper calling the unmodified vendor libapmib/libc in full-system MIPS Linux 4.19',
        'helper_sha256':sha(OUT/'artifacts/softap-device-code/ck-wificfg'),'regular_file_fixture':True,
        'expected_states':['AP mode=0 configured=0','STA mode=1 configured=0','successful DHCP commit configured=1'],
        'protected_bytes':'all bytes outside current MIB 0xc000-0xffff unchanged','real_device_flash_write':False,
        'kernel_requirement':'vendor TLV encoder performs an unaligned halfword store; qemu-user SIGBUS, full MIPS kernel handles it; original RTL kernel not yet tested with this helper',
        'console_sha256':sha(EV/'mib-system-console.txt'),'fixture_sha256':sha(OUT/'private/device-mib-test.cpio')}
    (EV/'vendor-mib-tests.json').write_text(json.dumps(record,indent=2)+'\n');print(json.dumps(record,indent=2))
if __name__=='__main__':main()
