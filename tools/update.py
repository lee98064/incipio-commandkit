#!/usr/bin/env python3
"""LAN OTA client with HTTPS release download and signature checks."""
import argparse
import hashlib
import ipaddress
import json
import getpass
import socket
import urllib.parse
import urllib.request
from pathlib import Path
from ota import verify
from fwlib import require
from admin_session import AdminSession
ROOT=Path(__file__).resolve().parents[1]
LIMIT=0x290000+256

def download(url,limit):
    require(urllib.parse.urlparse(url).scheme=='https', '更新下載必須使用 HTTPS')
    with urllib.request.urlopen(url,timeout=60) as response:
        require(urllib.parse.urlparse(response.url).scheme=='https','拒絕不安全的下載重新導向')
        data=response.read(limit+1)
    require(len(data)<=limit,'下載檔案過大');return data

def post(base,path,data,image_hash=None,session=None):
    digest=image_hash or hashlib.sha256(data).hexdigest()
    headers={'Content-Type':'application/octet-stream','X-CK-SHA256':digest}
    if session:return session.post(path,data,headers)
    request=urllib.request.Request(base+path,data=data,method='POST',headers=headers)
    with urllib.request.urlopen(request,timeout=120) as r:return json.load(r)


def main():
    parser=argparse.ArgumentParser(description=__doc__)
    parser.add_argument('device',help='插座 IPv4 位址')
    parser.add_argument('--public',type=Path,default=ROOT/'third_party/ota-signing.pub')
    group=parser.add_mutually_exclusive_group(required=True);group.add_argument('--package',type=Path);group.add_argument('--latest',action='store_true')
    parser.add_argument('--check-only',action='store_true',help='只驗證新版，不上傳或安裝')
    args=parser.parse_args()
    try:address=ipaddress.IPv4Address(args.device)
    except ipaddress.AddressValueError:address=ipaddress.IPv4Address(socket.gethostbyname(args.device))
    require(address.is_private and not address.is_multicast and not address.is_unspecified,'請指定區網 IPv4 位址')
    base=f'http://{address}:18082'
    with urllib.request.urlopen(base+'/status',timeout=10) as r:status=json.load(r)
    if args.latest:
        url=json.loads((ROOT/'version.json').read_text())['catalog_url']
        catalog=json.loads(download(url,64*1024));require(catalog.get('format')=='commandkit-catalog-v1','索引格式不符')
        variant='matter' if status['variant']==1 else 'exec-test'
        entries=[x for x in catalog['updates'] if x.get('variant')==variant and x.get('model')=='CMNDKT-004' and x['software_version']>status['software_version']]
        if not entries:print('目前已是最新版本。');return
        entry=max(entries,key=lambda x:x['software_version']);data=download(entry['url'],LIMIT)
        require(hashlib.sha256(data).hexdigest()==entry['sha256'],'下載 hash 不符')
    else:data=args.package.read_bytes()
    metadata=verify(data,args.public.read_bytes())
    require(metadata['software_version']>status['software_version'],'裝置已是此版本或更高版本')
    require(metadata['variant']==('matter' if status['variant']==1 else 'exec-test'),'韌體種類不符')
    print('已驗證更新包：'+metadata['version'])
    if args.check_only:return
    session=AdminSession(base);session.login(getpass.getpass('管理密碼：'))
    post(base,'/upload',data,session=session);post(base,'/apply',b'',hashlib.sha256(data).hexdigest(),session=session)
    print('更新已提交，裝置正在安裝並重新啟動。請保持供電。')

if __name__=='__main__':main()
