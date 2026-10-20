/* SHA-256 also work on an HTTP LAN page where SubtleCrypto is unavailable. */
function sha256(input) {
  const k = [0x428a2f98,0x71374491,0xb5c0fbcf,0xe9b5dba5,0x3956c25b,0x59f111f1,0x923f82a4,0xab1c5ed5,0xd807aa98,0x12835b01,0x243185be,0x550c7dc3,0x72be5d74,0x80deb1fe,0x9bdc06a7,0xc19bf174,0xe49b69c1,0xefbe4786,0x0fc19dc6,0x240ca1cc,0x2de92c6f,0x4a7484aa,0x5cb0a9dc,0x76f988da,0x983e5152,0xa831c66d,0xb00327c8,0xbf597fc7,0xc6e00bf3,0xd5a79147,0x06ca6351,0x14292967,0x27b70a85,0x2e1b2138,0x4d2c6dfc,0x53380d13,0x650a7354,0x766a0abb,0x81c2c92e,0x92722c85,0xa2bfe8a1,0xa81a664b,0xc24b8b70,0xc76c51a3,0xd192e819,0xd6990624,0xf40e3585,0x106aa070,0x19a4c116,0x1e376c08,0x2748774c,0x34b0bcb5,0x391c0cb3,0x4ed8aa4a,0x5b9cca4f,0x682e6ff3,0x748f82ee,0x78a5636f,0x84c87814,0x8cc70208,0x90befffa,0xa4506ceb,0xbef9a3f7,0xc67178f2];
  const h = [0x6a09e667,0xbb67ae85,0x3c6ef372,0xa54ff53a,0x510e527f,0x9b05688c,0x1f83d9ab,0x5be0cd19];
  const data = new Uint8Array(Math.ceil((input.length + 9) / 64) * 64);
  data.set(input); data[input.length] = 128;
  const view = new DataView(data.buffer); view.setUint32(data.length - 4, input.length * 8);
  const rr = (x,n) => (x >>> n) | (x << (32-n));
  for (let at=0; at<data.length; at+=64) {
    const w = new Uint32Array(64);
    for(let i=0;i<16;i++) w[i]=view.getUint32(at+i*4);
    for(let i=16;i<64;i++) w[i]=(w[i-16]+(rr(w[i-15],7)^rr(w[i-15],18)^(w[i-15]>>>3))+w[i-7]+(rr(w[i-2],17)^rr(w[i-2],19)^(w[i-2]>>>10)))>>>0;
    let [a,b,c,d,e,f,g,j]=h;
    for(let i=0;i<64;i++) { const t=(j+(rr(e,6)^rr(e,11)^rr(e,25))+((e&f)^(~e&g))+k[i]+w[i])>>>0;
      const u=((rr(a,2)^rr(a,13)^rr(a,22))+((a&b)^(a&c)^(b&c)))>>>0;
      j=g;g=f;f=e;e=(d+t)>>>0;d=c;c=b;b=a;a=(t+u)>>>0; }
    [a,b,c,d,e,f,g,j].forEach((v,i)=>h[i]=(h[i]+v)>>>0);
  }
  const out=new Uint8Array(32), dv=new DataView(out.buffer);h.forEach((v,i)=>dv.setUint32(i*4,v));return out;
}
const hex = bytes => Array.from(bytes,b=>b.toString(16).padStart(2,'0')).join('');
function hmac256(key,input) {
  const inner=new Uint8Array(64+input.length),outer=new Uint8Array(96);
  for(let i=0;i<64;i++){inner[i]=(key[i]||0)^0x36;outer[i]=(key[i]||0)^0x5c;}
  inner.set(input,64);outer.set(sha256(inner),64);return sha256(outer);
}
function meterView(data) {
  const reading=(n,max,digits)=>Number.isInteger(n)&&n>=0&&n<=max?(n/1000).toFixed(digits):'—';
  const live=!!(data&&data.available===true&&Number.isInteger(data.sample_age_ms)&&data.sample_age_ms>=0&&data.sample_age_ms<=5000);
  const d=live?data:{energy_mwh:data?.saved_energy_mwh};
  let energy='—';
  if(typeof d.energy_mwh==='string'&&/^(0|[1-9][0-9]{0,18})$/.test(d.energy_mwh)&&
     (d.energy_mwh.length<19||d.energy_mwh<='4611686018427387904')){
    const digits=d.energy_mwh.padStart(7,'0');energy=digits.slice(0,-6)+'.'+digits.slice(-6);
  }
  const values={voltage:reading(d.voltage_mv,300000,2),current:reading(d.current_ma,15000,3),power:reading(d.power_mw,2000000,1),energy};
  const complete=live&&Object.values(values).every(v=>v!=='—');
  return {...values,live,complete,relay:d.relay_on===true?'插座已開啟':d.relay_on===false?'插座已關閉':'插座狀態未知',
    state:complete?'量測資料正常':live?'部分讀值尚未就緒':'暫無即時資料',
    note:live?'讀值於 '+new Date().toLocaleTimeString('zh-TW',{hour12:false})+' 更新':'等待裝置提供新的量測資料'};
}
if (typeof module !== 'undefined') module.exports={sha256,hex,hmac256,meterView};
if(typeof document!=='undefined')(async()=>{
  const $=id=>document.getElementById(id),enc=s=>new TextEncoder().encode(s);
  let auth={authenticated:false},csrf='',status=null,protocol=null,busy=false,latest=null,protocolDirty=false,ledDirty=false;
  $('device-address').textContent=location.hostname;
  document.querySelectorAll('input[name=protocol]').forEach(input=>input.onchange=()=>{protocolDirty=true;});
  function view(name){$('overview').hidden=name!=='overview';$('settings').hidden=name!=='settings'||!auth.authenticated;
    $('nav-overview').setAttribute('aria-current',name==='overview'?'page':'false');$('nav-settings').setAttribute('aria-current',name==='settings'?'page':'false');}
  function drawAuth(data){auth=data;csrf=data.csrf||'';$('account-state').textContent=data.authenticated?'管理員':'訪客檢視';
    $('login-open').hidden=data.authenticated;$('logout').hidden=!data.authenticated;$('nav-settings').hidden=!data.authenticated;
    $('guest-note').hidden=data.authenticated;$('setup-notice').hidden=data.configured!==false;$('login-open').disabled=data.configured===false;
    if(!data.authenticated)view('overview');else{$('login-panel').hidden=true;}}
  async function authRefresh(){const r=await fetch('/auth/session',{cache:'no-store'});if(!r.ok)throw Error('管理服務尚未就緒');const data=await r.json();
    if(data.storage_ready===false){$('account-state').textContent='管理設定準備中';return;}drawAuth(data);}
  async function api(path,body='',digest=null){
    const headers={'Content-Type':'text/plain','X-CK-CSRF':csrf};if(digest)headers['X-CK-SHA256']=digest;
    const r=await fetch(path,{method:'POST',credentials:'same-origin',headers,body});
    const data=await r.json().catch(()=>({}));
    if(!r.ok){if(r.status===401){drawAuth({authenticated:false,configured:true});$('login-panel').hidden=false;throw Error('請先登入，或重新登入後操作');}
      throw Error(r.status===409?'裝置正在處理其他操作，請稍候再試':r.status===503?'裝置或儲存尚未準備好，請稍候再試':'操作遭拒絕，請確認輸入與更新檔案');}return data;
  }
  function ask(text){return new Promise(resolve=>{const dialog=$('confirm-box');$('confirm-text').textContent=text;
    $('confirm-yes').onclick=()=>{dialog.close();resolve(true);};$('confirm-no').onclick=()=>{dialog.close();resolve(false);};
    dialog.oncancel=()=>resolve(false);dialog.showModal();});}
  function setBusy(value){busy=value;if(value)drawMeter(null);$('settings').querySelectorAll('button').forEach(b=>b.disabled=value);}
  async function run(job){if(busy)return;setBusy(true);$('settings-message').textContent='處理中…';try{await job();}catch(e){$('settings-message').textContent=e.message;}finally{setBusy(false);}}
  $('nav-overview').onclick=()=>view('overview');$('nav-settings').onclick=()=>{view('settings');settingsRefresh().catch(()=>{});};
  $('login-open').onclick=()=>{$('login-panel').hidden=false;$('login-password').focus();};$('login-cancel').onclick=()=>{$('login-panel').hidden=true;$('login-password').value='';};
  $('logout').onclick=async()=>{try{await api('/auth/logout');drawAuth({authenticated:false,configured:true});}catch(e){$('settings-message').textContent=e.message;}};
  $('login-form').onsubmit=async event=>{event.preventDefault();$('login-submit').disabled=true;$('login-note').textContent='正在驗證密碼，請稍候…';
    try{const r=await fetch('/auth/challenge',{cache:'no-store'});if(!r.ok)throw Error('請先完成初始管理密碼設定');const c=await r.json();
      if(!/^[a-f0-9]{64}$/.test(c.nonce))throw Error('驗證資料無效');
      const keyText=await CKPassword.derive($('login-password').value,c.salt,c.iterations);$('login-password').value='';
      const key=Uint8Array.from(keyText.match(/../g),x=>parseInt(x,16));const proof=c.nonce+':'+hex(hmac256(key,enc('ck-admin-login-v1\n'+c.nonce)));key.fill(0);
      const login=await fetch('/auth/login',{method:'POST',headers:{'X-CK-Login':proof},body:''});
      if(!login.ok)throw Error(login.status===429?'嘗試次數較多，請稍候再登入':'密碼不正確，或驗證已逾時');
      drawAuth({...await login.json(),configured:true});$('login-note').textContent='';view('settings');await settingsRefresh();
    }catch(e){$('login-note').textContent=e.message;}finally{$('login-submit').disabled=false;}};
  function drawMeter(data,offline=false){const v=meterView(data);
    for(const [id,value]of[['voltage',v.voltage],['current-amps',v.current],['power',v.power],['energy',v.energy],['relay',v.relay],['meter-updated',v.note]])$(id).textContent=value;
    $('meter-state').textContent=offline?'連線中斷，正在重試':v.state;
    $('live-state').dataset.state=offline?'offline':v.complete?'live':'waiting';$('live-state').lastElementChild.textContent=offline?'連線中斷':v.complete?'即時連線':'已連線，等待量測';
    if(protocol?.active==='homekit'){$('meter-state').textContent='HomeKit 模式';$('meter-updated').textContent='自訂即時量測及 kWh 累計暫停；顯示已保存的用電紀錄';if(!offline){$('live-state').lastElementChild.textContent='管理連線正常';$('live-state').dataset.state='live';}}}
  async function refresh(){const r=await fetch('/status',{cache:'no-store'});if(!r.ok)throw Error('裝置尚未準備好');status=await r.json();$('current').textContent=status.version;
    const p=await fetch('/protocol',{cache:'no-store'});if(p.ok){const previous=protocol?.selected;protocol=await p.json();const name=protocol.active==='homekit'?'HomeKit':protocol.active==='matter'?'Matter':'維修模式';$('active-protocol').textContent=name;$('protocol-status').textContent='目前：'+name+(protocol.restart_pending?' · 等待重啟':'');
      const choice=document.querySelector('input[name="protocol"][value="'+protocol.selected+'"]');if(choice&&!protocolDirty&&previous!==protocol.selected)choice.checked=true;
      $('matter-onboarding').hidden=protocol.active!=='matter';$('commissioning-open').hidden=protocol.active!=='matter';}}
  const ledDescriptions={smart:'正常時跟隨開關，設定、連線或配對時提供提示。',relay:'插座開啟時亮，關閉時滅；可使用主動尋找。',inverse:'插座關閉時亮，方便在暗處找到；可使用主動尋找。',load:'連續兩次讀值達 5 W 開始閃爍，降至 2 W 以下停止。',on:'持續亮燈；夜間排程可暫時熄燈。',off:'平常熄燈，設定、配對、異常或主動尋找時仍會亮燈。'};
  $('led-settings').addEventListener('input',()=>{ledDirty=true;$('led-description').textContent=ledDescriptions[$('led-mode').value];});
  const ledMinutes=s=>{if(!/^\d{2}:\d{2}$/.test(s))return NaN;const [h,m]=s.split(':').map(Number);return h<24&&m<60?h*60+m:NaN;};
  const ledTime=m=>String(Math.floor(m/60)).padStart(2,'0')+':'+String(m%60).padStart(2,'0');
  async function ledRefresh(){if(!auth.authenticated)return;const r=await fetch('/admin/led',{cache:'no-store'});if(!r.ok){$('led-status').textContent='燈號設定尚未就緒，請稍候再試';return;}const d=await r.json();
    const reasons={normal:'依平常模式顯示',night:'夜間熄燈中',pairing:'等待家庭配對',joining:'正在連接 Wi-Fi',setup:'等待初次設定',error:'服務或 MCU 通訊異常',identify:'尋找插座中'};
    $('led-status').textContent=d.service_ready?(reasons[d.reason]||'正在讀取狀態'):'指示燈服務正在準備中';
    $('led-clock').textContent=d.time_valid?'時間已校準 · '+(d.time_source==='ntp'?'時間伺服器':'手機時間')+(d.night?' · 目前為熄燈時段':''):'排程等待校時：可使用下方按鈕校準';
    if(!ledDirty){$('led-mode').value=d.mode;$('led-schedule').checked=d.schedule;$('led-start').value=ledTime(d.start);$('led-end').value=ledTime(d.end);$('led-offset').value=d.utc_offset/60;$('led-ntp').value=d.ntp;$('led-description').textContent=ledDescriptions[d.mode];}}
  $('led-settings').onsubmit=e=>{e.preventDefault();run(async()=>{const start=ledMinutes($('led-start').value),end=ledMinutes($('led-end').value),offset=Number($('led-offset').value)*60,ntp=$('led-ntp').value.trim();
    if(!Number.isInteger(start)||!Number.isInteger(end)||start===end||!Number.isInteger(offset)||offset<-720||offset>840||offset%15||!/^([A-Za-z0-9][A-Za-z0-9.-]{0,126})$/.test(ntp)||/[.-]$/.test(ntp))throw Error('請檢查熄燈時間、UTC 時差及時間伺服器');
    await api('/admin/led','CKLED1 '+$('led-mode').value+' '+Number($('led-schedule').checked)+' '+start+' '+end+' '+offset+' '+ntp+'\n');ledDirty=false;$('settings-message').textContent='燈號設定已保存，會立即套用。';await ledRefresh();});};
  $('led-find').onclick=()=>run(async()=>{await api('/admin/led-find');$('settings-message').textContent='插座將閃燈 15 秒，之後恢復原本燈號。';});
  $('led-phone-time').onclick=()=>run(async()=>{await api('/admin/led-time',String(Math.floor(Date.now()/1000)));$('settings-message').textContent='已送出手機時間，本次開機的排程可離線繼續計時。';await ledRefresh();});
  async function settingsRefresh(){if(!auth.authenticated)return;const r=await fetch('/admin/state',{cache:'no-store'});if(r.status===401){await authRefresh();return;}if(!r.ok)return;
    const data=await r.json();const m=data.matter;
    $('pairing-state').textContent=protocol?.active==='homekit'?'HomeKit 請使用原廠標籤配對碼。':m?'Matter 已配對 '+m.fabrics+' 個家庭；'+(m.window_open?'配對視窗開啟中':'配對視窗已關閉'):'Matter 正在準備中';
    const onboarding=await fetch('/admin/onboarding',{cache:'no-store'});if(onboarding.ok){const d=await onboarding.json();$('matter-code').textContent=d.manual_code||'尚未就緒';}await ledRefresh();}
  async function waitReceipt(id){const until=Date.now()+60000;while(Date.now()<until){await new Promise(r=>setTimeout(r,1000));const r=await fetch('/admin/state',{cache:'no-store'});if(!r.ok)continue;const {matter}=await r.json();
      if(matter?.request_id===id){if(matter.result==='complete')return;if(['storage-error','window-error','failsafe-timeout'].includes(matter.result))throw Error('裝置未完成操作：'+matter.result);}}
    throw Error('尚未收到完成回應，請檢查目前狀態，勿重複操作');}
  async function restartMessage(text){$('settings-message').textContent=text+'。請保持供電；重啟後可使用同一管理網址登入。';drawAuth({authenticated:false,configured:true});}
  $('protocol-save').onclick=()=>run(async()=>{const mode=document.querySelector('input[name="protocol"]:checked').value;const data=await api('/protocol',mode);protocolDirty=false;
    if(data.status==='unchanged'){$('settings-message').textContent='目前已使用此協議。';return;}await restartMessage('協議選擇已保存，正在重新啟動');});
  $('energy-reset').onclick=()=>run(async()=>{if(!await ask('將累積用電歸零？此動作無法復原，之後會從零重新累計。'))return;
    const result=await api('/admin/energy-reset');if(result.request_id)await waitReceipt(result.request_id);$('settings-message').textContent='累積用電已歸零並保存。';drawMeter(null);await settingsRefresh();});
  $('commissioning-open').onclick=()=>run(async()=>{const r=await api('/admin/open-commissioning');await waitReceipt(r.request_id);$('settings-message').textContent='Matter 配對視窗已重新開啟。';await settingsRefresh();});
  $('pairing-reset').onclick=()=>run(async()=>{if(!await ask('清除目前協議的家庭配對？Wi-Fi、管理密碼和累積用電會保留。'))return;
    const r=await api('/admin/pairing-reset');if(r.status==='restarting')await restartMessage('正在重設配對並重新啟動');else{$('settings-message').textContent='正在重設配對，請稍候再查看狀態。';}});
  $('reboot').onclick=()=>run(async()=>{await api('/admin/reboot');await restartMessage('正在重新啟動');});
  $('factory-reset').onclick=()=>run(async()=>{if(!await ask('恢復出廠將清除管理密碼、Wi-Fi、HomeKit／Matter 配對與全部累積用電。請確認要清除並重新設定。'))return;
    await api('/admin/factory-reset');$('settings-message').textContent='正在恢復出廠。重啟後連接 CommandKit-Setup 設定熱點重新設定。';drawAuth({authenticated:false,configured:false});});
  $('wifi-settings').onsubmit=event=>{event.preventDefault();run(async()=>{const ssid=enc($('wifi-ssid').value),password=enc($('wifi-password').value);
    if(ssid.length<1||ssid.length>32||password.length<8||password.length>64||password.some(v=>v<32||v>126))throw Error('請檢查 Wi-Fi 名稱與密碼長度');
    const b=new Uint8Array(104);b.set(enc('CKW1'));b[4]=ssid.length;b[5]=password.length;b[6]=1;b.set(ssid,8);b.set(password,40);
    await api('/admin/wifi',hex(b));b.fill(0);$('wifi-password').value='';$('settings-message').textContent='已送出 Wi-Fi 設定。請切回相同網路，並使用插座的新 IP 開啟管理頁。';});};
  $('password-settings').onsubmit=event=>{event.preventDefault();run(async()=>{const password=$('new-password').value;if(password!==$('confirm-password').value)throw Error('兩次密碼不相同');
    $('settings-message').textContent='正在保護新密碼，請稍候…';const salt=CKPassword.salt(),key=await CKPassword.derive(password,salt);
    await api('/auth/password',CKPassword.record(salt,key));$('new-password').value='';$('confirm-password').value='';drawAuth({authenticated:false,configured:true});$('login-panel').hidden=false;$('login-note').textContent='密碼已更新，請使用新密碼登入。';});};
  async function install(bytes,expected){if(bytes.length!==status.max_size)throw Error('請選擇完整 .ota 更新包');
    $('message').textContent='正在驗證並上傳…';const digest=hex(sha256(bytes));await api('/upload',bytes,digest);
    $('message').textContent='驗證完成，正在安裝。請保持供電…';await api('/apply','',digest);
    const until=Date.now()+240000;while(Date.now()<until){await new Promise(r=>setTimeout(r,4000));try{await refresh();if(status.software_version===expected&&(status.healthy||status.rescue)){
      drawAuth({authenticated:false,configured:true});$('login-panel').hidden=false;$('login-note').textContent=status.rescue?'新版已啟動，目前為維修模式。':'更新完成，請重新登入。';return;}}catch{}}
    throw Error('尚未收到新版回應，請確認插座網路位址；勿重複上傳');}
  $('manual').onclick=()=>run(async()=>{const file=$('package').files[0];if(!file)throw Error('請選擇 .ota 更新包');const b=new Uint8Array(await file.arrayBuffer());if(b.length<256)throw Error('更新檔案不完整');await install(b,new DataView(b.buffer).getUint32(20));});
  $('check').onclick=()=>run(async()=>{try{const r=await fetch(CK_CATALOG_URL,{cache:'no-store'});if(!r.ok)throw Error('更新來源尚未發布');const c=await r.json();if(c.format!=='commandkit-catalog-v1'||!Array.isArray(c.updates))throw Error('更新索引格式不符');
    latest=c.updates.filter(x=>x.model==='CMNDKT-004'&&x.variant==='matter'&&Number.isSafeInteger(x.software_version)&&x.software_version>status.software_version).sort((a,b)=>b.software_version-a.software_version)[0];$('online').hidden=!latest;$('message').textContent=latest?'有新版本 '+latest.version:'目前已是最新版本。';
  }catch(e){$('message').textContent='無法檢查線上版本：'+e.message+'。仍可使用手動更新。';}$('settings-message').textContent='';});
  $('online').onclick=()=>run(async()=>{if(!latest?.url.startsWith('https://'))throw Error('更新來源不符');const r=await fetch(latest.url,{cache:'no-store'});if(!r.ok)throw Error('下載失敗');const b=new Uint8Array(await r.arrayBuffer());if(b.length!==latest.size||hex(sha256(b))!==latest.sha256)throw Error('下載不完整');await install(b,latest.software_version);});
  async function monitor(){if(!document.hidden&&!busy){const controller=new AbortController(),timer=setTimeout(()=>controller.abort(),4000);try{
      const r=await fetch('/measurements',{cache:'no-store',signal:controller.signal});if(!r.ok)throw Error();drawMeter(await r.json());
    }catch{drawMeter(null,true);}finally{clearTimeout(timer);}}
    setTimeout(monitor,2000);}
  async function statePoll(){if(!document.hidden&&!busy){try{await refresh();await authRefresh();await settingsRefresh();}catch{}}setTimeout(statePoll,10000);}
  document.addEventListener('visibilitychange',()=>{if(document.hidden)drawMeter(null);});
  try{await refresh();await authRefresh();}catch{$('account-state').textContent='連線中斷';}monitor();statePoll();
})();
