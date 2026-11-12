#!/usr/bin/env python3
"""Disposable browser fixture using the real C HTTP service and file-only NOR."""
import hashlib,json,os,signal,socket,socketserver,struct,subprocess,sys,threading,time
from pathlib import Path
from test_updates import Updates
Updates.setUpClass();fixture=Updates('test_persistence_and_noop_wear');fixture.setUp()
salt=bytes(range(16));key=hashlib.pbkdf2_hmac('sha256',b'FixtureAdmin42',salt,600000,32)
record=b'CKAUTH1\n'+(600000).to_bytes(4,'big')+salt+key
assert fixture.put('admin/credential',record)==0
assert fixture.lib.ck_energy_save(1234567,0)==0
(fixture.work/'etc/ck-version').write_text('0.2.11-preview\n')
initial=os.environ.get('CK_FIXTURE_PROTOCOL','matter');assert initial in ('matter','homekit')
assert fixture.put('config/protocol',initial.encode())==0
(fixture.work/'var/run/ck-protocol-active').write_text(initial)
(fixture.work/'var/run/matter-manual-code').write_text('12345678901')
fixture.port=18983
def start_server():return subprocess.Popen([str(fixture.server_binary),'18983','lo'],stdout=subprocess.DEVNULL,stderr=subprocess.DEVNULL)
server=start_server()
led=None
if os.environ.get('CK_FIXTURE_LED')=='1':
 for path in ['proc/wlan0','var/log']:(fixture.work/path).mkdir(parents=True,exist_ok=True)
 (fixture.work/'proc/wlan0/gpio_ctrl').write_bytes(b' '*32)
 (fixture.work/'var/run/ck-setup-state').write_text('state=online\n')
 led=subprocess.Popen([str(fixture.updater),'--run-led'],stdout=subprocess.DEVNULL,stderr=subprocess.DEVNULL)

class Proxy(socketserver.BaseRequestHandler):
 def handle(self):
  remote=socket.create_connection(('127.0.0.1',18983),timeout=5)
  def transfer(source,dest):
   try:
    while True:
     data=source.recv(65536)
     if not data:break
     dest.sendall(data)
   except OSError:pass
   try:dest.shutdown(socket.SHUT_WR)
   except OSError:pass
  thread=threading.Thread(target=transfer,args=(self.request,remote),daemon=True);thread.start();transfer(remote,self.request);remote.close()
class TCP(socketserver.ThreadingTCPServer):allow_reuse_address=True;daemon_threads=True
proxy=TCP((socket.gethostbyname(socket.gethostname()),18983),Proxy)
threading.Thread(target=proxy.serve_forever,daemon=True).start()
try:
 print('ADMIN_FIXTURE_READY port=18983; synthetic credentials and NOR only',flush=True)
 while True:
  pending=fixture.work/'var/run/ck-protocol-pending'
  if pending.exists():
   mode=pending.read_text()
   if mode in ('matter','homekit'):
    # Simulate only the RAM/service restart; no HAP, network or real reboot.
    server.terminate();server.wait(timeout=5)
    (fixture.work/'var/run/ck-protocol-active').write_text(mode)
    pending.unlink();(fixture.work/'var/run/ck-matter-request.lock').rmdir()
    server=start_server()
  if led:
   now=int(time.monotonic()*1000);mode=(fixture.work/'var/run/ck-protocol-active').read_text()
   (fixture.work/('var/run/ck-led-'+mode+'.bin')).write_bytes(b'CKLEDHW1'+struct.pack('>QQQQIIII',now,now,now,0,6000,31,now//5000,0))
  if (fixture.work/'var/run/ck-protocol-active').read_text()=='matter':fixture.meter_snapshot()
  else:(fixture.work/'var/run/ck-meter.bin').unlink(missing_ok=True)
  (fixture.work/'var/run/ck-matter-state.json').write_text(json.dumps({'updated_s':int(time.monotonic()),'fabrics':1,'window_open':False,'result':'idle','request_id':''},separators=(',',':')))
  time.sleep(1)
finally:
 if led:led.terminate();led.wait()
 proxy.shutdown();server.terminate();server.wait();fixture.tearDown();Updates.tearDownClass()
