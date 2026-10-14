#!/usr/bin/env python3
"""Exercise the actual MIPS HTTP/DNS server; fixture never changes RF/Flash."""
import argparse,hashlib,hmac,http.client,json,re,socket,struct,subprocess,time,urllib.parse
from pathlib import Path
OUT=Path(__file__).resolve().parents[1]
def call(port,method,path,body=None,headers=None):
    c=http.client.HTTPConnection('127.0.0.1',port,timeout=7);c.request(method,path,body,headers or {})
    r=c.getresponse();data=r.read();status=r.status;hs=dict(r.getheaders());c.close();return status,data,hs
def main():
    parser=argparse.ArgumentParser();parser.add_argument('--output-tag',choices=['softap-device-code'],default='softap-device-code');options=parser.parse_args();ART=OUT/'artifacts'/options.output_tag;EV=OUT/'evidence'/options.output_tag
    name='incipio-softap-http-test';checks=[]
    p=subprocess.Popen(['docker','run','--rm','--name',name,'-p','127.0.0.1:18082:18082',
        '-p','127.0.0.1:18083:18083/udp','-p','127.0.0.1:18084:18084','-v',f'{OUT}:/work:ro',
        '-v',f'{OUT}/private/device-test-A:/var/run',
        'incipio-public-build:v0.1.0-preview','qemu-mips','/work/'+str((ART/'ck-setupd').relative_to(OUT)),
        '--fixture','18082','18084','no-flash','/work/private/diag.key'],stdout=subprocess.PIPE,stderr=subprocess.PIPE)
    try:
        for _ in range(60):
            try:s,page,_=call(18082,'GET','/');break
            except OSError:time.sleep(.1)
        else:raise RuntimeError('server not ready')
        assert s==200;token=re.search(b'name="token" value="([0-9a-f]+)"',page)[1].decode();checks.append('mobile page and per-boot CSRF')
        if options.output_tag in ('softap-device-code',):
            manual=(OUT/'private/device-test-A/matter-manual-code').read_bytes().strip()
            assert b'id="matter-manual"' in page and manual in page and b'src="/matter-qr"' in page
            assert b'{{MATTER_MANUAL}}' not in page
            status,png,headers=call(18082,'GET','/matter-qr')
            assert status==200 and headers['Content-Type']=='image/svg+xml' and png==(OUT/'private/device-test-A/matter-qr.svg').read_bytes()
            assert headers['Cache-Control']=='no-store'
            checks.append('initial page shows SDK manual code and exact device Matter QR SVG before Wi-Fi submit')
        s,_,hs=call(18082,'GET','/generate_204',headers={'Host':'connectivitycheck.gstatic.com'})
        assert s==302 and hs['Location']=='http://127.0.0.1:18082/';checks.append('captive HTTP probe redirect')
        assert call(18084,'POST','/enter-setup')[0]==403;checks.append('unauthenticated setup rejected')
        key=bytes.fromhex((OUT/'private/diag.key').read_text().strip())
        def proof(scope):
            _,nonce,_=call(18084,'GET','/challenge');return nonce.decode()+':'+hmac.new(key,scope.encode()+nonce,hashlib.sha256).hexdigest()
        header={'X-Setup-Proof':proof('GET /state\n')};s,b,_=call(18084,'GET','/state',headers=header)
        assert s==200 and b'state=setup' in b;assert call(18084,'GET','/state',headers=header)[0]==403;checks.append('HMAC state and replay rejection')
        qname=b''.join(bytes([len(x)])+x.encode() for x in 'captive.apple.com'.split('.'))+b'\0'
        sock=socket.socket(socket.AF_INET,socket.SOCK_DGRAM);sock.settimeout(3)
        for ty in [1,28]:
            q=struct.pack('>6H',0x4321,0x100,1,0,0,0)+qname+struct.pack('>HH',ty,1)
            sock.sendto(q,('127.0.0.1',18083));answer,_=sock.recvfrom(1024)
            assert answer[:2]==q[:2] and struct.unpack_from('>H',answer,6)[0]==(1 if ty==1 else 0)
            if ty==1:assert answer[-4:]==b'\x7f\0\0\1'
        sock.close();checks.append('DNS A synthesis and AAAA NODATA')
        def post(v,h=None):
            head={'Content-Type':'application/x-www-form-urlencoded'};head.update(h or {})
            return call(18082,'POST','/wifi',urllib.parse.urlencode(v),head)[0]
        v={'ssid':'Lab Network','password':'ExamplePass42','security':'wpa2','token':token}
        assert post({**v,'token':'0'*64})==400 and post(v,{'Origin':'http://evil.example'})==403
        assert post({**v,'ssid':'a'*33})==400 and post({**v,'password':'short'})==400
        assert post({**v,'ssid':'a\nInjected'})==400
        checks.append('CSRF/origin/SSID/password/control-byte validation')
        final_headers={'Content-Type':'application/x-www-form-urlencoded'}
        if options.output_tag=='softap-device-code':
            assert b'id="network"' in page and b'src="/setup.js"' in page and b'id="manual-network"' in page
            status,script,headers=call(18082,'GET','/setup.js')
            assert status==200 and 'application/javascript' in headers['Content-Type']
            assert b'textContent' in script and b'innerHTML' not in script
            assert headers['Referrer-Policy']=='same-origin' and "script-src 'self'" in headers['Content-Security-Policy']
            scan_body='token='+token
            def scan(h=None,body=scan_body):
                headers={'Content-Type':'application/x-www-form-urlencoded; charset=UTF-8','Origin':'null'}
                headers.update(h or {})
                return call(18082,'POST','/wifi-scan',body,headers)
            assert scan(body='token='+'0'*64)[0]==403
            assert scan({'Origin':'http://evil.example'})[0]==403
            assert scan({'Content-Type':'application/x-www-form-urlencoded-evil'})[0]==403
            assert scan({'Content-Type':'text/plain'})[0]==403
            assert scan(body=scan_body+'&unknown=1')[0]==400
            for content_type in ['application/x-www-form-urlencoded','application/x-www-form-urlencoded; charset=UTF-8',
                                 'Application/X-Www-Form-Urlencoded; charset="utf-8"']:
                assert scan({'Content-Type':content_type})[0] in (200,202)
            deadline=time.time()+6
            while time.time()<deadline:
                status,result,headers=scan()
                assert headers['Content-Type'].startswith('application/json')
                result=json.loads(result)
                if status==200:break
                assert status==202 and result['status']=='scanning';time.sleep(.2)
            assert result['status']=='ready' and result['networks'][0]['ssid']=='Lab Network'
            assert result['networks'][1]['security']=='open'
            raw=socket.create_connection(('127.0.0.1',18082))
            raw.sendall(b'POST /wifi-scan HTTP/1.1\r\nHost: 127.0.0.1:18082\r\nContent-Length: 0\r\nContent-Type: application/x-www-form-urlencoded\r\ncontent-type: text/plain\r\n\r\n')
            assert raw.recv(256).startswith(b'HTTP/1.1 400');raw.close()
            assert scan({'Origin':'http://127.0.0.1:18082'})[0]==200
            checks.extend(['scan start/poll/cached results and open network metadata',
                'null origin with valid token and MIME charset accepted; evil origins and duplicate headers rejected',
                'same-origin local JavaScript and textContent for network labels'])
            final_headers={'Content-Type':'application/x-www-form-urlencoded; charset=UTF-8','Origin':'null'}
        status,confirmation,_=call(18082,'POST','/wifi',urllib.parse.urlencode(v),final_headers)
        assert status==202
        if options.output_tag in ('softap-device-code',):
            assert manual in confirmation and b"src='/matter-qr'" in confirmation
            checks.append('Wi-Fi submission confirmation retains same manual code and QR')
        assert post(v)==409;time.sleep(4)
        s,b,_=call(18084,'GET','/state',headers={'X-Setup-Proof':proof('GET /state\n')})
        assert s==200 and b'state=online' in b;checks.append('duplicate guard and fixture transition')
        r={'status':'pass','checks':checks,'binary_sha256':hashlib.sha256((ART/'ck-setupd').read_bytes()).hexdigest(),
           'environment':'actual MIPS ELF under qemu-user; fixture backend; no RF/Flash','real_softap_station_and_commissioning':'pending'}
        (EV/'http-dns-tests.json').write_text(json.dumps(r,indent=2)+'\n');print(json.dumps(r,indent=2))
    finally:
        subprocess.run(['docker','stop','-t','1',name],stdout=subprocess.DEVNULL,stderr=subprocess.DEVNULL);p.communicate(timeout=10)
if __name__=='__main__':main()
