#!/usr/bin/env python3
"""Actual MIPS identity generation, reboot simulation, QR decode and SDK validation."""
import hashlib, json, re, struct, subprocess
from pathlib import Path
from PIL import Image, ImageDraw
OUT = Path(__file__).resolve().parents[1]
ART = OUT / 'artifacts/softap-device-code'
EV = OUT / 'evidence/softap-device-code'
def sha(path): return hashlib.sha256(path.read_bytes()).hexdigest()
def generate(label, mac, interface='eth0', seed=None):
    folder = OUT / 'private' / ('device-test-' + label)
    folder.mkdir(mode=0o700, exist_ok=True)
    command = ['docker', 'run', '--rm', '--mac-address', mac, '-v', f'{OUT}:/work:ro',
        '-v', f'{seed or OUT/"private/device-identity.key"}:/etc/matter-device.key:ro',
        '-v', f'{folder}:/var/run', 'incipio-public-build:v0.1.0-preview', 'qemu-mips',
        '/work/artifacts/softap-device-code/matterd-test', '--init-identity', interface]
    result = subprocess.run(command, capture_output=True, timeout=30)
    log = folder/'init.log'; log.write_bytes(result.stdout+result.stderr); log.chmod(0o600)
    return result.returncode, folder
def main():
    binary = Path(json.loads((OUT/'evidence/chip-tool-macos/build.json').read_text())['binary'])
    decoder = ART/'decode-device-qr'
    subprocess.run(['/usr/bin/swiftc', OUT/'tests/decode_device_qr.swift', '-o', decoder], check=True)
    products = {}
    for label, mac in [('A','02:11:22:33:44:55'),('A-reboot','02:11:22:33:44:55'),('B','02:11:22:33:44:56')]:
        code, folder = generate(label, mac); assert code == 0, f'{label}: inspect private init log'
        record = (folder/'matter-device-identity').read_bytes()
        assert record[:4] == b'CKI1' and len(record) == 66 and record[4:10] == bytes.fromhex(mac.replace(':',''))
        pin = struct.unpack_from('>I', record, 12)[0]; discriminator = struct.unpack_from('>H',record,16)[0]
        assert 1 <= pin <= 99999998 and pin not in [11111111*i for i in range(1,9)]+[12345678,87654321]
        manual = (folder/'matter-manual-code').read_text(); assert re.fullmatch(r'\d{11}',manual)
        ap = (folder/'ck-setup-ap.bin').read_bytes()
        assert len(ap)==104 and ap[:4]==b'CKW1' and ap[5:8]==bytes(3) and ap[40:]==bytes(64)
        assert ap[8:8+ap[4]].decode()=='CommandKit-Setup-'+mac.replace(':','')[-6:].upper()
        # Render the generated SVG path at integer scale, then independently scan
        # its pixels with Apple's QR detector. No expected payload is given to it.
        svg = (folder/'matter-qr.svg').read_text()
        size = int(re.search(r'viewBox="0 0 (\d+) \d+"',svg)[1]); scale=12
        image=Image.new('RGB',(size*scale,size*scale),'white'); draw=ImageDraw.Draw(image)
        paths=re.findall(r'M(\d+),(\d+)h(\d+)v1h-\d+z',svg)
        assert paths
        for x,y,length in paths:
            x,y,length=map(int,(x,y,length))
            draw.rectangle((x*scale,y*scale,(x+length)*scale-1,(y+1)*scale-1),fill='black')
        png=folder/'qr.png';image.save(png);png.chmod(0o600)
        decoded=folder/'decoded-qr.txt'
        subprocess.run([decoder,png,decoded],check=True);decoded.chmod(0o600)
        qr=decoded.read_text();assert qr.startswith('MT:')
        common=['--setup-pin-code',str(pin),'--discriminator',str(discriminator),
                '--vendor-id','65521','--product-id','32768','--commissioning-mode','0']
        for command, expected, extra in [('generate-manualcode',manual,[]),('generate-qrcode',qr,['--rendezvous','4'])]:
            result=subprocess.run([binary,'payload',command,*common,*extra],capture_output=True,text=True,timeout=20)
            log=folder/(command+'.log');log.write_text(result.stdout+result.stderr);log.chmod(0o600)
            assert result.returncode==0 and expected in log.read_text(), f'{label}: SDK payload mismatch'
        for name in ['matter-device-identity','matter-manual-code','matter-qr.svg','ck-setup-ap.bin']:
            assert (folder/name).stat().st_mode & 0o777 == 0o600
        products[label]={name:sha(folder/name) for name in ['matter-device-identity','matter-manual-code','matter-qr.svg','ck-setup-ap.bin']}
    first=(OUT/'private/device-test-A/matter-device-identity').read_bytes()
    second=(OUT/'private/device-test-B/matter-device-identity').read_bytes()
    assert first[12:16]!=second[12:16] and first[16:18]!=second[16:18] and first[18:34]!=second[18:34]
    assert products['A']==products['A-reboot']
    assert all(products['A'][name]!=products['B'][name] for name in products['A'])
    # Missing interface and invalid key must not retain yesterday's/shared code.
    assert generate('A','02:11:22:33:44:55',interface='missing0')[0]!=0
    assert not (OUT/'private/device-test-A/matter-device-identity').exists()
    assert generate('A','02:11:22:33:44:55')[0]==0
    bad_key=OUT/'private/device-bad-key';bad_key.write_bytes(b'bad');bad_key.chmod(0o600)
    assert generate('bad-key','02:11:22:33:44:55',seed=bad_key)[0]!=0
    assert not (OUT/'private/device-test-bad-key/matter-device-identity').exists()
    missing=OUT/'private/device-test-missing-key';missing.mkdir(mode=0o700,exist_ok=True)
    result=subprocess.run(['docker','run','--rm','--network','none','-v',f'{OUT}:/work:ro',
        '-v',f'{missing}:/var/run','incipio-public-build:v0.1.0-preview','qemu-mips',
        '/work/artifacts/softap-device-code/matterd-test','--init-identity','eth0'],capture_output=True,timeout=30)
    assert result.returncode!=0 and not (missing/'matter-device-identity').exists()
    report={'status':'pass','binary_sha256':sha(ART/'matterd-test'),
        'key_sha256':sha(OUT/'private/device-identity.key'), 'products_sha256':products,
        'source_sha256':{str(p.relative_to(OUT)):sha(p) for p in [OUT/'src/matter-app-device/DeviceIdentity.cpp',OUT/'src/matter-app-device/DeviceIdentity.h',OUT/'src/matter-app-device/main.cpp',OUT/'src/vendor/qrcodegen/qrcodegen.c',OUT/'src/vendor/qrcodegen/qrcodegen.h',Path(__file__)]},
        'checks':['different MACs produce different PIN/manual/QR/salt/discriminator/AP names',
            'same MAC and key produce identical data after fresh container reboot',
            'actual rendered QR independently decoded by Apple Vision',
            'both QR payload and 11 digit manual match pinned official Matter SDK',
            'open AP has no password/security and per-device SSID',
            'generated credentials mode 0600, missing interface/key fail without shared fallback'],
        'environment':'actual MIPS ELF in qemu-user; simulated container MACs; no outlet or Flash access'}
    (EV/'identity-tests.json').write_text(json.dumps(report,indent=2)+'\n')
    print(json.dumps({k:v for k,v in report.items() if k!='products_sha256'},indent=2))
if __name__=='__main__':main()
