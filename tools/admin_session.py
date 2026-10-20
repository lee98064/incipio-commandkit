"""Password login shared by local maintenance clients. No credential files."""
import hashlib
import hmac
import http.cookiejar
import json
import re
import urllib.request

class AdminSession:
    def __init__(self,base):
        self.base=base;self.csrf=''
        self.opener=urllib.request.build_opener(urllib.request.HTTPCookieProcessor(http.cookiejar.CookieJar()))

    def login(self,password):
        with self.opener.open(self.base+'/auth/challenge',timeout=10) as r:challenge=json.load(r)
        nonce=challenge.get('nonce','');salt=challenge.get('salt','')
        if not re.fullmatch('[0-9a-f]{64}',nonce) or not re.fullmatch('[0-9a-f]{32}',salt) or challenge.get('iterations')!=600000:
            raise ValueError('裝置的密碼驗證格式不符')
        key=hashlib.pbkdf2_hmac('sha256',password.encode(),bytes.fromhex(salt),600000,32)
        proof=nonce+':'+hmac.new(key,('ck-admin-login-v1\n'+nonce).encode(),hashlib.sha256).hexdigest()
        request=urllib.request.Request(self.base+'/auth/login',data=b'',method='POST',headers={'X-CK-Login':proof})
        with self.opener.open(request,timeout=15) as r:data=json.load(r)
        if not data.get('authenticated') or not re.fullmatch('[0-9a-f]{64}',data.get('csrf','')):
            raise ValueError('管理員登入失敗')
        self.csrf=data['csrf']

    def post(self,path,data,headers=None):
        request=urllib.request.Request(self.base+path,data=data,method='POST',headers={**(headers or {}),'X-CK-CSRF':self.csrf})
        with self.opener.open(request,timeout=120) as r:return json.load(r)

    def get(self,path):
        with self.opener.open(self.base+path,timeout=15) as r:return json.load(r)
