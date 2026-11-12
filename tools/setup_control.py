#!/usr/bin/env python3
"""Authenticated Wi-Fi setup and Matter pairing controls using the admin password (legacy profile optional)."""
import argparse
import getpass
import ipaddress
import socket
from admin_session import AdminSession
import hashlib
import hmac
import http.client
import re
import json
import time
from pathlib import Path
from fwlib import require, profile_diag_key


def control(host, profile, action='status', port=18081):
    routes={'status':('GET','/state'),'enter-setup':('POST','/enter-setup'),
            'matter-status':('GET','/matter-state'),'reset-matter':('POST','/reset-matter'),
            'open-commissioning':('POST','/open-commissioning')}
    require(action in routes, '不支援的操作')
    key=profile_diag_key(profile)
    def request(method,path,headers=None):
        client=http.client.HTTPConnection(host,port,timeout=15)
        try:
            client.request(method,path,body=b'' if method=='POST' else None,headers=headers or {})
            response=client.getresponse();body=response.read(4097)
            require(len(body)<=4096, '回應過長')
            require(response.status in (200,202), 'HTTP '+str(response.status))
            return body
        finally:client.close()
    nonce=request('GET','/challenge')
    require(re.fullmatch(b'[0-9a-f]{64}',nonce), 'challenge 格式不符')
    method,path=routes[action]
    signature=hmac.new(key,
                       (method+' '+path+'\n').encode()+nonce,hashlib.sha256).hexdigest()
    return request(method,path,{'X-Setup-Proof':nonce.decode()+':'+signature}).decode('utf-8')


def main():
    p=argparse.ArgumentParser(description=__doc__)
    p.add_argument('action',choices=('status','enter-setup','matter-status','reset-matter','open-commissioning'))
    p.add_argument('--host',required=True)
    p.add_argument('--profile',type=Path,help='僅舊版 HMAC 介面使用')
    p.add_argument('--wait',action='store_true',help='等待這次 Matter 操作完成並驗證結果')
    a=p.parse_args()
    require(not a.wait or a.action in ('reset-matter','open-commissioning'),'--wait 僅適用於 Matter 操作')
    if a.profile:
        invoke=lambda action:control(a.host,a.profile,action)
    else:
        require(a.action!='enter-setup','新版請登入管理網頁修改 Wi-Fi，或實體長按恢復出廠')
        address=ipaddress.IPv4Address(socket.gethostbyname(a.host))
        require(address.is_private and not address.is_multicast and not address.is_unspecified,'請指定區網 IPv4 位址')
        session=AdminSession('http://'+str(address)+':18082')
        if a.action!='status':session.login(getpass.getpass('管理密碼：'))
        def invoke(action):
            if action=='status':data=session.get('/status')
            elif action=='matter-status':data=session.get('/admin/state')['matter']
            else:
                require(session.get('/protocol').get('active')=='matter','目前不是 Matter 模式，請到管理後台選擇協議')
                data=session.post({'reset-matter':'/admin/pairing-reset','open-commissioning':'/admin/open-commissioning'}[action],b'')
            return json.dumps(data,ensure_ascii=False)+'\n'
    result=invoke(a.action)
    if a.wait:
        request_id=json.loads(result)['request_id'];deadline=time.monotonic()+90
        while time.monotonic()<deadline:
            time.sleep(1)
            try:state=json.loads(invoke('matter-status'))
            except (OSError,ValueError,http.client.HTTPException):continue
            if state.get('request_id')!=request_id:continue
            if state.get('result') in ('running','waiting-for-failsafe','restarting'):continue
            require(state.get('result')=='complete','Matter 操作失敗：'+state.get('result','unknown'))
            require(state.get('window_open') is True,'配對視窗未開啟')
            require(a.action!='reset-matter' or state.get('fabrics')==0,'Matter 配對尚未清除')
            result=json.dumps(state,ensure_ascii=False)+'\n';break
        else:raise TimeoutError('未能確認這次 Matter 操作完成，請查詢 matter-status')
    print(result,end='')


if __name__=='__main__':main()
