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
/* Watts for the gauge and trend; null whenever meterView would show a dash. */
function powerWatts(data){const v=meterView(data);return v.live&&v.power!=='—'?Number(v.power):null;}
/* Logarithmic 0–2 kW arc so a phone charger and a heater are both visible. */
const gaugeFraction=w=>Math.min(1,Math.max(0,Math.log10(1+w)/Math.log10(2001)));
/* Same compatibility rules every earlier release used to read the catalog. */
function newestUpdate(updates,current){
  return updates.filter(x=>x&&x.model==='CMNDKT-004'&&x.variant==='matter'&&Number.isSafeInteger(x.software_version)&&x.software_version>current).sort((a,b)=>b.software_version-a.software_version)[0]||null;
}
/* SVG paths for the trend chart; samples are [ms, watts] pairs. */
function trendPaths(samples,now,span=120000,width=300,height=120){
  const points=samples.filter(([t])=>now-t<=span);if(points.length<2)return null;
  const values=points.map(p=>p[1]),max=Math.max(...values),min=Math.min(...values),top=Math.max(max*1.15,5);
  const xy=points.map(([t,w])=>[(width*(1-(now-t)/span)).toFixed(1),(height-6-(height-12)*w/top).toFixed(1)]);
  const line='M'+xy.map(p=>p.join(' ')).join('L');
  return {line,area:line+'L'+xy[xy.length-1][0]+' '+height+'L'+xy[0][0]+' '+height+'Z',min,max,top,avg:values.reduce((a,b)=>a+b,0)/values.length};
}
if (typeof module !== 'undefined') module.exports={sha256,hex,hmac256,meterView,powerWatts,gaugeFraction,newestUpdate,trendPaths};
if(typeof document!=='undefined')(async()=>{
  const $=id=>document.getElementById(id),enc=s=>new TextEncoder().encode(s),sleep=ms=>new Promise(r=>setTimeout(r,ms));
  let auth={authenticated:false},csrf='',status=null,protocol=null,busy=false,latest=null,catalog={state:'idle',error:''},installing=false,
    protocolDirty=false,ledDirty=false,current='overview',pending=null,toastTimer=0,relayState=null,relayBusy=false;
  const samples=[],fmtW=w=>w>=1000?(w/1000).toFixed(2)+' kW':w.toFixed(1)+' W';
  $('device-address').textContent=location.hostname;
  document.querySelectorAll('input[name=protocol]').forEach(input=>input.onchange=()=>{protocolDirty=true;});
  function toast(text,kind='info'){const box=$('toast');$('toast-text').textContent=text;box.dataset.kind=kind;
    $('toast-icon').setAttribute('href',kind==='error'?'#i-alert':kind==='success'?'#i-check':'#i-info');
    box.hidden=false;clearTimeout(toastTimer);toastTimer=setTimeout(()=>{box.hidden=true;},kind==='error'?8000:5000);}
  function show(name){current=name;if(catalog.state==='available')$('update-banner').hidden=name==='update'||installing;document.querySelectorAll('.view').forEach(s=>s.hidden=s.id!=='view-'+name);
    document.querySelectorAll('.tabs button').forEach(b=>b.setAttribute('aria-current',b.dataset.view===name?'page':'false'));}
  function view(name){if(name!=='overview'&&!auth.authenticated){pending=name;openLogin();return;}
    show(name);window.scrollTo(0,0);if(name!=='overview')settingsRefresh().catch(()=>{});}
  document.querySelectorAll('.tabs button').forEach(b=>b.onclick=()=>view(b.dataset.view));
  $('update-banner').onclick=()=>view('update');
  function openLogin(note=''){if(auth.configured===false){toast('尚未設定管理密碼，請先完成初始設定','error');return;}
    const n=$('login-note');n.textContent=note;n.dataset.tone='';if(!$('login-box').open)$('login-box').showModal();$('login-password').focus();}
  $('login-open').onclick=()=>openLogin();
  $('login-cancel').onclick=()=>{pending=null;$('login-box').close();};
  $('login-box').addEventListener('close',()=>{$('login-password').value='';});
  function drawAuth(data){auth=data;csrf=data.csrf||'';const admin=!!data.authenticated;
    document.body.classList.toggle('is-admin',admin);$('login-open').hidden=admin;$('account').hidden=!admin;$('guest-note').hidden=admin;
    $('setup-notice').hidden=data.configured!==false;$('login-open').disabled=data.configured===false;
    if(!admin&&current!=='overview')show('overview');drawUpdate();drawRelay();}
  async function authRefresh(){const r=await fetch('/auth/session',{cache:'no-store'});if(!r.ok)throw Error('管理服務尚未就緒');const data=await r.json();
    if(data.storage_ready===false){$('login-open').disabled=true;$('login-open').title='管理設定準備中';return;}$('login-open').title='';drawAuth(data);}
  async function api(path,body='',digest=null){
    const headers={'Content-Type':'text/plain','X-CK-CSRF':csrf};if(digest)headers['X-CK-SHA256']=digest;
    const r=await fetch(path,{method:'POST',credentials:'same-origin',headers,body});
    const data=await r.json().catch(()=>({}));
    if(!r.ok){if(r.status===401){drawAuth({authenticated:false,configured:true});openLogin('登入已逾時，請重新登入後再操作');throw Error('請先登入，或重新登入後操作');}
      throw Error(r.status===409?'裝置正在處理其他操作，請稍候再試':r.status===503?'裝置或儲存尚未準備好，請稍候再試':'操作遭拒絕，請確認輸入與更新檔案');}return data;
  }
  function ask(text,title='確認操作',yes='確認'){return new Promise(resolve=>{const dialog=$('confirm-box');$('confirm-title').textContent=title;$('confirm-text').textContent=text;$('confirm-yes').textContent=yes;
    $('confirm-yes').onclick=()=>{dialog.close();resolve(true);};$('confirm-no').onclick=()=>{dialog.close();resolve(false);};
    dialog.oncancel=()=>resolve(false);dialog.showModal();});}
  function setBusy(value){busy=value;if(value)drawMeter(null);document.querySelectorAll('.admin-view button').forEach(b=>b.disabled=value);}
  async function run(job,button){if(busy)return;setBusy(true);button?.classList.add('loading');try{await job();}catch(e){toast(e.message,'error');}finally{button?.classList.remove('loading');setBusy(false);}}
  document.querySelectorAll('.pw-toggle').forEach(b=>b.onclick=()=>{const input=$(b.dataset.for),reveal=input.type==='password';input.type=reveal?'text':'password';
    b.setAttribute('aria-label',reveal?'隱藏密碼':'顯示密碼');b.setAttribute('aria-pressed',String(reveal));});
  $('logout').onclick=async()=>{try{await api('/auth/logout');drawAuth({authenticated:false,configured:true});toast('已登出');}catch(e){toast(e.message,'error');}};
  $('login-form').onsubmit=async event=>{event.preventDefault();const button=$('login-submit'),note=$('login-note');button.disabled=true;button.classList.add('loading');
    note.dataset.tone='';note.textContent='正在驗證密碼，約需數秒…';
    try{const r=await fetch('/auth/challenge',{cache:'no-store'});if(!r.ok)throw Error('請先完成初始管理密碼設定');const c=await r.json();
      if(!/^[a-f0-9]{64}$/.test(c.nonce))throw Error('驗證資料無效');
      const keyText=await CKPassword.derive($('login-password').value,c.salt,c.iterations);$('login-password').value='';
      const key=Uint8Array.from(keyText.match(/../g),x=>parseInt(x,16));const proof=c.nonce+':'+hex(hmac256(key,enc('ck-admin-login-v1\n'+c.nonce)));key.fill(0);
      const login=await fetch('/auth/login',{method:'POST',headers:{'X-CK-Login':proof},body:''});
      if(!login.ok)throw Error(login.status===429?'嘗試次數較多，請稍候再登入':'密碼不正確，或驗證已逾時');
      drawAuth({...await login.json(),configured:true});note.textContent='';$('login-box').close();toast('已登入管理員','success');
      const next=pending;pending=null;if(next)view(next);else settingsRefresh().catch(()=>{});
    }catch(e){note.dataset.tone='error';note.textContent=e.message;}finally{button.disabled=false;button.classList.remove('loading');}};
  function drawTrend(){const t=trendPaths(samples,Date.now());$('trend-empty').style.display=t?'none':'';
    $('trend-line').setAttribute('d',t?t.line:'');$('trend-area').setAttribute('d',t?t.area:'');
    for(const [id,k]of[['trend-avg','avg'],['trend-max','max'],['trend-min','min']])$(id).textContent=t?fmtW(t[k]):'—';
    $('trend-range').textContent=t?'0 – '+fmtW(t.top):'';}
  function drawMeter(data,offline=false){const v=meterView(data),pill=$('live-state'),fine=v.energy!=='—';
    for(const [id,value]of[['voltage',v.voltage],['current-amps',v.current],['power',v.power],['relay-text',v.relay],['meter-updated',v.note]])$(id).textContent=value;
    $('energy').textContent=fine?v.energy.slice(0,-3):v.energy;$('energy-fine').textContent=fine?v.energy.slice(-3):'';
    $('relay').dataset.on=v.relay==='插座已開啟'?'true':v.relay==='插座已關閉'?'false':'';
    relayState=v.relay==='插座已開啟'?true:v.relay==='插座已關閉'?false:null;drawRelay();
    $('meter-state').textContent=offline?'連線中斷，正在重試':v.state;
    const w=offline?null:powerWatts(data);$('gauge-arc').style.strokeDasharray=(w===null?0:395.84*gaugeFraction(w)).toFixed(2)+' 527.79';
    if(w!==null){const now=Date.now();samples.push([now,w]);while(samples.length&&now-samples[0][0]>120000)samples.shift();}drawTrend();
    pill.dataset.state=offline?'offline':v.complete?'live':'waiting';pill.lastElementChild.textContent=offline?'連線中斷':v.complete?'即時連線':'等待量測';
    if(protocol?.active==='homekit'){$('meter-state').textContent='HomeKit 模式';$('meter-updated').textContent='自訂即時量測及 kWh 累計暫停；顯示已保存的用電紀錄';if(!offline){pill.lastElementChild.textContent='管理連線正常';pill.dataset.state='live';}}}
  const protocolName=p=>p==='homekit'?'HomeKit':p==='matter'?'Matter':'維修模式';
  async function refresh(){const r=await fetch('/status',{cache:'no-store'});if(!r.ok)throw Error('裝置尚未準備好');status=await r.json();
    $('current').textContent=status.version;$('version-big').textContent=status.version||'—';const health=$('health-chip');
    health.textContent=status.rescue?'維修模式':status.healthy?'運作正常 · 軟體版本 '+status.software_version:'正在確認啟動狀態';health.dataset.tone=status.rescue?'warn':status.healthy?'ok':'';
    const p=await fetch('/protocol',{cache:'no-store'});if(p.ok){const previous=protocol?.selected;protocol=await p.json();const name=protocolName(protocol.active);
      $('active-protocol').textContent=name;$('protocol-status').textContent='目前：'+name+(protocol.restart_pending?' · 等待重啟':'');
      const choice=document.querySelector('input[name="protocol"][value="'+protocol.selected+'"]');if(choice&&!protocolDirty&&previous!==protocol.selected)choice.checked=true;
      $('matter-onboarding').hidden=protocol.active!=='matter';$('commissioning-open').hidden=protocol.active!=='matter';drawRelay();}}
  const ledReasons={normal:'依平常模式顯示',night:'夜間熄燈中',pairing:'等待家庭配對',joining:'正在連接 Wi-Fi',setup:'等待初次設定',error:'服務或 MCU 通訊異常',identify:'尋找插座中'};
  const ledMinutes=s=>{if(!/^\d{2}:\d{2}$/.test(s))return NaN;const [h,m]=s.split(':').map(Number);return h<24&&m<60?h*60+m:NaN;};
  const ledTime=m=>String(Math.floor(m/60)).padStart(2,'0')+':'+String(m%60).padStart(2,'0');
  function drawTimeline(){const start=ledMinutes($('led-start').value),end=ledMinutes($('led-end').value),on=$('led-schedule').checked;
    const seg=(el,a,b)=>{el.hidden=!(on&&b>a);el.style.left=a/14.4+'%';el.style.width=(b-a)/14.4+'%';};
    const valid=Number.isInteger(start)&&Number.isInteger(end)&&start!==end;
    seg($('night-a'),valid?start:0,valid?(start<end?end:1440):0);seg($('night-b'),0,valid&&start>end?end:0);$('led-timeline').style.opacity=on?1:.5;}
  async function ledRefresh(){if(!auth.authenticated)return;const r=await fetch('/admin/led',{cache:'no-store'});if(!r.ok){$('led-status').textContent='燈號設定尚未就緒，請稍候再試';return;}const d=await r.json();
    $('led-status').textContent=d.service_ready?(ledReasons[d.reason]||'正在讀取狀態'):'指示燈服務正在準備中';$('led-lamp').classList.toggle('lit',d.on===true);
    $('led-clock').textContent=d.time_valid?'時間已校準 · '+(d.time_source==='ntp'?'時間伺服器':'手機時間')+(d.night?' · 目前為熄燈時段':''):'排程等待校時，可在「時區與校時」用手機時間校準';
    const now=$('night-now');now.hidden=!d.time_valid;if(d.time_valid)now.style.left=((Math.floor(d.utc_s/60)+d.utc_offset)%1440+1440)%1440/14.4+'%';
    if(!ledDirty){const mode=document.querySelector('input[name="led-mode"][value="'+d.mode+'"]');if(mode)mode.checked=true;
      $('led-schedule').checked=d.schedule;$('led-start').value=ledTime(d.start);$('led-end').value=ledTime(d.end);$('led-offset').value=d.utc_offset/60;$('led-ntp').value=d.ntp;}
    drawTimeline();}
  $('led-settings').addEventListener('input',()=>{ledDirty=true;drawTimeline();});
  $('led-settings').onsubmit=e=>{e.preventDefault();run(async()=>{const mode=document.querySelector('input[name="led-mode"]:checked')?.value||'smart',
    start=ledMinutes($('led-start').value),end=ledMinutes($('led-end').value),offset=Number($('led-offset').value)*60,ntp=$('led-ntp').value.trim();
    if(!Number.isInteger(start)||!Number.isInteger(end)||start===end||!Number.isInteger(offset)||offset<-720||offset>840||offset%15||!/^([A-Za-z0-9][A-Za-z0-9.-]{0,126})$/.test(ntp)||/[.-]$/.test(ntp))throw Error('請檢查熄燈時間、UTC 時差及時間伺服器');
    await api('/admin/led','CKLED1 '+mode+' '+Number($('led-schedule').checked)+' '+start+' '+end+' '+offset+' '+ntp+'\n');ledDirty=false;toast('燈號設定已保存，會立即套用。','success');await ledRefresh();},$('led-save'));};
  $('led-find').onclick=()=>run(async()=>{await api('/admin/led-find');toast('插座將閃燈 15 秒，之後恢復原本燈號。','success');},$('led-find'));
  $('led-phone-time').onclick=()=>run(async()=>{await api('/admin/led-time',String(Math.floor(Date.now()/1000)));toast('已送出手機時間，本次開機的排程可離線繼續計時。','success');await ledRefresh();},$('led-phone-time'));
  const formatCode=c=>/^\d{11}$/.test(c)?c.slice(0,4)+'-'+c.slice(4,7)+'-'+c.slice(7):c;
  async function settingsRefresh(){if(!auth.authenticated)return;const r=await fetch('/admin/state',{cache:'no-store'});if(r.status===401){await authRefresh();return;}if(!r.ok)return;
    const m=(await r.json()).matter,line=$('pairing-state');
    if(protocol?.active==='homekit'){$('pairing-text').textContent='HomeKit 模式：請使用插座原廠標籤上的配對碼。';line.dataset.tone='ok';}
    else if(m){$('pairing-text').textContent='已配對 '+m.fabrics+' 個家庭 · '+(m.window_open?'配對視窗開啟中':'配對視窗已關閉');line.dataset.tone=m.window_open?'open':m.fabrics?'ok':'';}
    else{$('pairing-text').textContent='Matter 正在準備中';line.dataset.tone='';}
    const onboarding=await fetch('/admin/onboarding',{cache:'no-store'});if(onboarding.ok){const d=await onboarding.json();$('matter-code').textContent=d.manual_code?formatCode(d.manual_code):'尚未就緒';$('matter-code').dataset.raw=d.manual_code||'';}
    await ledRefresh();}
  $('code-copy').onclick=async()=>{const code=$('matter-code'),text=code.dataset.raw;if(!text)return;
    try{await navigator.clipboard.writeText(text);}catch{const range=document.createRange(),selection=getSelection();range.selectNodeContents(code);selection.removeAllRanges();selection.addRange(range);
      const copied=document.execCommand('copy');selection.removeAllRanges();if(!copied){toast('無法自動複製，請手動抄寫設定碼','error');return;}}
    toast('已複製 Matter 設定碼','success');};
  const receiptErrors={'storage-error':'裝置未能保存，請稍後再試','window-error':'無法開啟配對視窗','failsafe-timeout':'配對流程逾時，請稍後再試',
    'relay-failed':'MCU 未確認切換，請再試一次','relay-timeout':'MCU 沒有回應，請稍後再試','relay-busy':'插座正在處理其他指令，請稍候再試'};
  async function waitReceipt(id){const until=Date.now()+60000;while(Date.now()<until){await sleep(1000);const r=await fetch('/admin/state',{cache:'no-store'});if(!r.ok)continue;const {matter}=await r.json();
      if(matter?.request_id===id){if(matter.result==='complete')return;if(receiptErrors[matter.result])throw Error(receiptErrors[matter.result]);}}
    throw Error('尚未收到完成回應，請檢查目前狀態，勿重複操作');}
  function restarting(text){toast(text+'。請保持供電，重啟後可用同一個管理網址登入。','success');drawAuth({authenticated:false,configured:true});}
  $('protocol-save').onclick=()=>run(async()=>{const mode=document.querySelector('input[name="protocol"]:checked').value;const data=await api('/protocol',mode);protocolDirty=false;
    if(data.status==='unchanged'){toast('目前已使用此協議。');return;}restarting('協議選擇已保存，正在重新啟動');},$('protocol-save'));
  $('energy-reset').onclick=()=>run(async()=>{if(!await ask('累積用電會歸零並立即保存，之後從零重新累計。此動作無法復原。','將累積用電歸零？','歸零'))return;
    const result=await api('/admin/energy-reset');if(result.request_id)await waitReceipt(result.request_id);toast('累積用電已歸零並保存。','success');samples.length=0;drawMeter(null);await settingsRefresh();},$('energy-reset'));
  $('commissioning-open').onclick=()=>run(async()=>{const r=await api('/admin/open-commissioning');await waitReceipt(r.request_id);toast('Matter 配對視窗已重新開啟。','success');await settingsRefresh();},$('commissioning-open'));
  $('pairing-reset').onclick=()=>run(async()=>{if(!await ask('目前協議的家庭配對會被清除，Wi-Fi、管理密碼和累積用電會保留。','清除家庭配對？','清除配對'))return;
    const r=await api('/admin/pairing-reset');if(r.status==='restarting')restarting('正在重設配對並重新啟動');else toast('正在重設配對，請稍候再查看狀態。');},$('pairing-reset'));
  $('reboot').onclick=()=>run(async()=>{await api('/admin/reboot');restarting('正在重新啟動');},$('reboot'));
  $('factory-reset').onclick=()=>run(async()=>{if(!await ask('會清除管理密碼、Wi-Fi、HomeKit／Matter 配對與全部累積用電，之後需要重新設定。','恢復出廠設定？','清除並恢復出廠'))return;
    await api('/admin/factory-reset');toast('正在恢復出廠。重啟後請連接 CommandKit-Setup 設定熱點重新設定。','success');drawAuth({authenticated:false,configured:false});},$('factory-reset'));
  $('wifi-settings').onsubmit=event=>{event.preventDefault();run(async()=>{const ssid=enc($('wifi-ssid').value),password=enc($('wifi-password').value);
    if(ssid.length<1||ssid.length>32||password.length<8||password.length>64||password.some(v=>v<32||v>126))throw Error('請檢查 Wi-Fi 名稱與密碼長度');
    const b=new Uint8Array(104);b.set(enc('CKW1'));b[4]=ssid.length;b[5]=password.length;b[6]=1;b.set(ssid,8);b.set(password,40);
    await api('/admin/wifi',hex(b));b.fill(0);$('wifi-password').value='';toast('已送出 Wi-Fi 設定。請切回相同網路，並用插座的新 IP 開啟管理頁。','success');},event.submitter);};
  $('password-settings').onsubmit=event=>{event.preventDefault();run(async()=>{const password=$('new-password').value;if(password!==$('confirm-password').value)throw Error('兩次密碼不相同');
    const salt=CKPassword.salt(),key=await CKPassword.derive(password,salt);
    await api('/auth/password',CKPassword.record(salt,key));$('new-password').value='';$('confirm-password').value='';drawAuth({authenticated:false,configured:true});openLogin('密碼已更新，請使用新密碼登入。');},event.submitter);};
  function drawUpdate(){const s=catalog.state,newer=s==='available'&&latest,tone={checking:'busy',available:'new',current:'ok',error:'warn'}[s]||'';
    $('update-state').dataset.tone=tone;$('update-icon').firstElementChild.setAttribute('href',newer?'#i-download':s==='current'?'#i-check':s==='error'?'#i-alert':'#i-update');
    $('update-title').textContent=s==='checking'?'正在檢查線上版本…':newer?'有新版本 '+latest.version:s==='current'?'目前已是最新版本':s==='error'?'無法檢查線上版本':'尚未檢查線上版本';
    $('message').textContent=s==='checking'?'正在連線到更新來源':newer?'軟體版本 '+latest.software_version+(Number.isFinite(latest.size)?' · '+(latest.size/1048576).toFixed(1)+' MB':'')+' · 驗證簽章後安裝':
      s==='current'?'已安裝 '+(status?.version||'')+' · '+catalog.at.toLocaleTimeString('zh-TW',{hour12:false})+' 檢查':s==='error'?catalog.error+'。仍可使用手動更新。':'開啟頁面時會自動檢查一次';
    const chip=$('update-chip');chip.dataset.tone=newer?'new':tone==='busy'?'':tone;chip.textContent=s==='checking'?'檢查中…':newer?'有新版本':s==='current'?'已是最新':s==='error'?'無法檢查':'尚未檢查';
    $('update-banner').hidden=!newer||installing||current==='update';$('update-dot').hidden=!newer;$('online').hidden=!newer||!auth.authenticated;
    if(newer){$('banner-title').textContent='有新版本 '+latest.version+' 可以安裝';$('banner-text').textContent=auth.authenticated?'前往更新頁面安裝，更新時請保持供電':'登入管理員後即可更新';$('online-label').textContent='下載並更新至 '+latest.version;}}
  async function checkUpdates(manual=false){if(!status||catalog.state==='checking')return;catalog={state:'checking',error:''};drawUpdate();
    try{const r=await fetch(CK_CATALOG_URL,{cache:'no-store'});if(!r.ok)throw Error('更新來源尚未發布');const c=await r.json();if(c.format!=='commandkit-catalog-v1'||!Array.isArray(c.updates))throw Error('更新索引格式不符');
      latest=newestUpdate(c.updates,status.software_version);catalog={state:latest?'available':'current',error:'',at:new Date()};
      if(manual)toast(latest?'有新版本 '+latest.version:'目前已是最新版本',latest?'info':'success');
    }catch(e){latest=null;catalog={state:'error',error:e instanceof TypeError?'無法連線到更新來源':e.message};if(manual)toast('無法檢查線上版本：'+catalog.error,'error');}
    drawUpdate();}
  $('check').onclick=()=>run(()=>checkUpdates(true),$('check'));
  function steps(active,online){const order=['download','upload','apply','reboot','done'],at=order.indexOf(active);
    document.querySelectorAll('#install-steps li').forEach((li,i)=>{li.dataset.state=!online&&!i?'skip':active==='done'||i<at?'done':i===at?'active':'';});}
  async function install(bytes,expected,online){if(bytes.length!==status.max_size)throw Error('請選擇完整 .ota 更新包');
    steps('upload',online);$('install-note').textContent='正在驗證並上傳更新包…';const digest=hex(sha256(bytes));await api('/upload',bytes,digest);
    steps('apply',online);$('install-note').textContent='簽章驗證完成，正在安裝。請保持供電…';await api('/apply','',digest);
    steps('reboot',online);$('install-note').textContent='插座正在重新啟動並確認新版狀態，約需 1–4 分鐘…';
    const until=Date.now()+240000;while(Date.now()<until){await sleep(4000);try{await refresh();if(status.software_version===expected&&(status.healthy||status.rescue)){
      const done=status.rescue?'新版已啟動，目前為維修模式。':'更新完成，已啟動 '+status.version+'。';steps('done',online);$('install-note').textContent=done;
      latest=null;catalog={state:'idle',error:''};pending='update';drawAuth({authenticated:false,configured:true});toast(done,'success');openLogin(done+'請重新登入。');checkUpdates();return;}}catch{}}
    throw Error('尚未收到新版回應，請確認插座網路位址；勿重複上傳');}
  async function installJob(load,online){installing=true;$('install-card').hidden=false;steps(online?'download':'upload',online);$('install-card').scrollIntoView({block:'center'});
    try{const [bytes,expected]=await load();await install(bytes,expected,online);}
    catch(e){$('install-note').textContent=e.message;document.querySelector('#install-steps li[data-state=active]')?.removeAttribute('data-state');throw e;}
    finally{installing=false;drawUpdate();}}
  async function readAll(response,size,progress){if(!response.body?.getReader)return new Uint8Array(await response.arrayBuffer());
    const reader=response.body.getReader(),out=new Uint8Array(size);let at=0,shown=-1;
    for(;;){const {done,value}=await reader.read();if(done)break;if(at+value.length>size)throw Error('下載不完整');out.set(value,at);at+=value.length;
      const p=Math.floor(at*100/size);if(p!==shown){shown=p;progress(p);}}
    return at===size?out:out.subarray(0,at);}
  $('online').onclick=()=>run(()=>installJob(async()=>{const item=latest;if(!item?.url.startsWith('https://')||!Number.isSafeInteger(item.size)||item.size<256||item.size>16777216)throw Error('更新來源不符');
    $('install-note').textContent='正在下載 '+item.version+'…';const r=await fetch(item.url,{cache:'no-store'});if(!r.ok)throw Error('下載失敗');
    const b=await readAll(r,item.size,p=>{$('install-note').textContent='正在下載 '+item.version+' · '+p+'%';});
    if(b.length!==item.size||hex(sha256(b))!==item.sha256)throw Error('下載不完整');return [b,item.software_version];},true),$('online'));
  function drawPackage(){const f=$('package').files[0];$('package-name').textContent=f?f.name:'點選或拖放 .ota 更新包';
    $('package-info').textContent=f?(f.size/1048576).toFixed(2)+' MB · 按「驗證並更新」開始':'只接受本專案簽章的 matter.ota';}
  $('package').onchange=drawPackage;const drop=$('drop');
  ['dragenter','dragover'].forEach(n=>drop.addEventListener(n,e=>{e.preventDefault();drop.classList.add('over');}));
  ['dragleave','drop'].forEach(n=>drop.addEventListener(n,e=>{e.preventDefault();drop.classList.remove('over');}));
  drop.addEventListener('drop',e=>{if(e.dataTransfer?.files?.length){$('package').files=e.dataTransfer.files;drawPackage();}});
  $('manual').onclick=()=>{const file=$('package').files[0];if(!file){toast('請先選擇 .ota 更新包','error');return;}
    run(()=>installJob(async()=>{const b=new Uint8Array(await file.arrayBuffer());if(b.length<256)throw Error('更新檔案不完整');return [b,new DataView(b.buffer).getUint32(20)];},false),$('manual'));};
  async function sample(){const controller=new AbortController(),timer=setTimeout(()=>controller.abort(),4000);try{
      const r=await fetch('/measurements',{cache:'no-store',signal:controller.signal});if(!r.ok)throw Error();drawMeter(await r.json());
    }catch{drawMeter(null,true);}finally{clearTimeout(timer);}}
  async function monitor(){if(!document.hidden&&!busy)await sample();setTimeout(monitor,2000);}
  function drawRelay(){const b=$('relay-toggle'),t=$('relay-toggle-text');if(relayBusy)return;
    b.dataset.state=relayState===true?'on':relayState===false?'off':'';b.title='';
    if(!auth.authenticated){b.disabled=auth.configured===false;t.textContent='登入後可開關';return;}
    if(protocol&&protocol.active!=='matter'){b.disabled=true;t.textContent='請用家庭 App 開關';
      b.title=protocol.active==='homekit'?'HomeKit 模式由原廠程式控制插座，請使用家庭 App 或實體按鍵':'維修模式無法遠端開關';return;}
    b.disabled=relayState===null||busy;t.textContent=relayState===true?'關閉插座':relayState===false?'開啟插座':'狀態未知';}
  $('relay-toggle').onclick=async()=>{if(!auth.authenticated){openLogin('登入後即可開關插座。');return;}if(relayBusy||busy||relayState===null)return;
    const on=!relayState;if(!on&&!await ask('關閉後，插在這個插座上的電器會斷電。','關閉插座？','關閉'))return;
    const b=$('relay-toggle');relayBusy=true;b.disabled=true;b.classList.add('loading');
    try{const r=await api('/admin/relay-'+(on?'on':'off'));await waitReceipt(r.request_id);relayState=on;toast(on?'插座已開啟':'插座已關閉','success');}
    catch(e){toast(e.message,'error');}finally{relayBusy=false;b.classList.remove('loading');await sample();drawRelay();}};
  async function statePoll(){if(!document.hidden&&!busy){try{await refresh();await authRefresh();await settingsRefresh();if(catalog.state==='idle')checkUpdates();}catch{}}setTimeout(statePoll,10000);}
  document.addEventListener('visibilitychange',()=>{if(document.hidden)drawMeter(null);});
  try{await refresh();await authRefresh();}catch{const pill=$('live-state');pill.dataset.state='offline';pill.lastElementChild.textContent='連線中斷';}
  monitor();statePoll();checkUpdates();setInterval(()=>{if(!busy&&!installing)checkUpdates();},6*3600000);
})();
