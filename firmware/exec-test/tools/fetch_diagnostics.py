#!/usr/bin/env python3
"""Read-only diagnostic download, HMAC proof; key stays on the local machine."""
import argparse, hashlib, hmac, http.client, ipaddress, json, socket
from pathlib import Path

def fetch(host, keyfile, output, source='live_device_lan', port=18080):
    try:ip=ipaddress.ip_address(host)
    except ValueError:
        if not host.rstrip('.').lower().endswith('.local'):
            raise ValueError('use an outlet IP address or its .local name')
        rows=socket.getaddrinfo(host,port,family=socket.AF_INET,type=socket.SOCK_STREAM)
        if not rows:raise ValueError('outlet has no reachable IPv4 address')
        ip=ipaddress.ip_address(rows[0][4][0])
    key = bytes.fromhex(Path(keyfile).read_text().strip())
    if len(key) != 32:
        raise ValueError('diagnostic key must contain 32 bytes')
    # The flashed diagnostic parser expects this exact header spelling.
    # urllib.Request capitalizes it as X-diag-proof, so use http.client.
    c=http.client.HTTPConnection(str(ip),port,timeout=10)
    try:
        c.request('GET','/challenge',headers={'Connection':'close'})
        r=c.getresponse()
        if r.status!=200:raise ValueError(f'challenge HTTP {r.status}')
        nonce=r.read(65).decode('ascii')
    finally:c.close()
    if len(nonce) != 64 or any(c not in '0123456789abcdef' for c in nonce):
        raise ValueError('invalid device challenge')
    mac = hmac.new(key, ('GET /diagnostics\n' + nonce).encode(), hashlib.sha256).hexdigest()
    c=http.client.HTTPConnection(str(ip),port,timeout=20)
    try:
        c.request('GET','/diagnostics',headers={'X-Diag-Proof':nonce+':'+mac,'Connection':'close'})
        r=c.getresponse()
        if r.status!=200:raise ValueError(f'diagnostics HTTP {r.status}')
        report=r.read(96*1024+1)
    finally:c.close()
    if len(report) > 96 * 1024 or not report.startswith((b'incipio-exec-diag/1\n',)):
        raise ValueError('invalid or oversized diagnostic report')
    out = Path(output)
    out.parent.mkdir(parents=True, exist_ok=True)
    out.write_bytes(report)
    out.chmod(0o600)
    metadata = {'file':str(out.resolve()), 'bytes':len(report), 'sha256':hashlib.sha256(report).hexdigest(),
                'host':host,'resolved_ip':str(ip),
                'source':source, 'read_only':True}
    out.with_suffix(out.suffix+'.json').write_text(json.dumps(metadata,indent=2)+'\n')
    print(json.dumps(metadata, indent=2))

if __name__ == '__main__':
    p=argparse.ArgumentParser(description=__doc__)
    p.add_argument('host', help='outlet IP address')
    p.add_argument('--key', default=str(Path(__file__).resolve().parents[1]/'private/diag.key'))
    p.add_argument('--output', required=True)
    a=p.parse_args()
    fetch(a.host,a.key,a.output)
