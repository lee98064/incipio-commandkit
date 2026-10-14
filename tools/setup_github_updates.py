#!/usr/bin/env python3
"""Configure an encrypted repository signing secret and a workflow-based update feed."""
import argparse
import json
import re
import subprocess
from pathlib import Path
from cryptography.hazmat.primitives.asymmetric.ed25519 import Ed25519PrivateKey
from cryptography.hazmat.primitives import serialization
from fwlib import require
ROOT=Path(__file__).resolve().parents[1]
def gh(args,**kwargs):return subprocess.run(['gh',*args],capture_output=True,check=True,**kwargs)
def configure_pages_environment(repository):
    endpoint='repos/'+repository+'/environments/github-pages'
    created=False
    try:environment=json.loads(gh(['api',endpoint]).stdout)
    except subprocess.CalledProcessError as error:
        require(b'404' in (error.stderr or b''),'無法確認 Pages environment；未更動設定')
        payload={'deployment_branch_policy':{'protected_branches':False,'custom_branch_policies':True}}
        environment=json.loads(gh(['api','--method','PUT',endpoint,'--input','-'],input=json.dumps(payload).encode()).stdout)
        created=True
    policy=environment.get('deployment_branch_policy')
    if policy and policy.get('protected_branches'):
        raise ValueError('Pages environment 僅允許受保護分支；未移除既有保護，請先設定允許版本 tag 的部署規則')
    if not policy or not policy.get('custom_branch_policies'):
        return # Existing unrestricted environment already allows release tags.
    rules=json.loads(gh(['api',endpoint+'/deployment-branch-policies']).stdout)['branch_policies']
    expected=[('main','branch')] if created else []
    expected.append(('v*','tag'))
    for name,kind in expected:
        if not any(r['name']==name and r.get('type','branch')==kind for r in rules):
            gh(['api','--method','POST',endpoint+'/deployment-branch-policies','--input','-'],
               input=json.dumps({'name':name,'type':kind}).encode())
def main():
    p=argparse.ArgumentParser(description=__doc__)
    p.add_argument('--repository',default='lee98064/incipio-commandkit')
    p.add_argument('--private',type=Path)
    p.add_argument('--pages-only',action='store_true',help='只修復 Pages 發布設定，不讀取或更動簽章私鑰及 secret')
    a=p.parse_args();require(re.fullmatch(r'[A-Za-z0-9_.-]+/[A-Za-z0-9_.-]+',a.repository),'repository 格式不符')
    require(a.pages_only or a.private is not None,'請指定 --private，或使用 --pages-only')
    if not a.pages_only:
        raw=a.private.read_bytes();key=Ed25519PrivateKey.from_private_bytes(raw)
        require(key.public_key().public_bytes(serialization.Encoding.Raw,serialization.PublicFormat.Raw)==(ROOT/'third_party/ota-signing.pub').read_bytes(),'私鑰與韌體公鑰不符')
        secrets=json.loads(gh(['secret','list','--repo',a.repository,'--json','name']).stdout)
        require(not any(s['name']=='OTA_SIGNING_KEY_HEX' for s in secrets),'簽章 secret 已存在；拒絕默默輪替，請核對原金鑰')
        # GitHub CLI encrypts with the repository public key. Never put the value in argv or logs.
        gh(['secret','set','OTA_SIGNING_KEY_HEX','--repo',a.repository],input=raw.hex().encode())
    result=subprocess.run(['gh','api','repos/'+a.repository+'/pages'],capture_output=True)
    if result.returncode:
        require(b'404' in result.stderr or b'"status":"404"' in result.stdout,'無法確認 Pages 設定')
        gh(['api','--method','POST','repos/'+a.repository+'/pages','--input','-'],input=json.dumps({'build_type':'workflow'}).encode())
    else:
        require(json.loads(result.stdout).get('build_type')=='workflow','既有 Pages 使用其他來源；未更動既有網站')
    configure_pages_environment(a.repository)
    print('Pages workflow 與版本 tag 部署規則已確認；本操作不發布更新。' if a.pages_only else 'GitHub 簽章 secret 已加密保存；Pages workflow 與版本 tag 部署規則已確認。尚未發布任何更新。')
if __name__=='__main__':main()
