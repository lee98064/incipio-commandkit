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
function meterView(data) {
  const reading=(n,max,digits)=>Number.isInteger(n)&&n>=0&&n<=max?(n/1000).toFixed(digits):'—';
  const live=!!(data&&data.available===true&&Number.isInteger(data.sample_age_ms)&&data.sample_age_ms>=0&&data.sample_age_ms<=5000);
  const d=live?data:{};
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
if (typeof module !== 'undefined') module.exports={sha256,hex,meterView};
if (typeof document !== 'undefined') (async () => {
  const $=id=>document.getElementById(id), message=text=>{$('message').textContent=text;};
  let status=null, latest=null, busy=false;
  function drawMeter(data,offline=false){const view=meterView(data);
    for(const [id,value] of [['voltage',view.voltage],['current-amps',view.current],['power',view.power],['energy',view.energy],['relay',view.relay],['meter-updated',view.note]])$(id).textContent=value;
    $('meter-state').textContent=offline?'連線中斷，正在重試':view.state;
    $('meter-state').dataset.state=offline?'offline':view.complete?'live':'waiting';}
  async function monitor(){
    if(!busy&&!document.hidden){const controller=new AbortController(),timeout=setTimeout(()=>controller.abort(),4000);
      try{const r=await fetch('/measurements',{cache:'no-store',signal:controller.signal});if(!r.ok)throw Error('measurements');const data=await r.json();if(!busy&&!document.hidden)drawMeter(data);}
      catch{if(!busy&&!document.hidden)drawMeter(null,true);}finally{clearTimeout(timeout);}}
    setTimeout(monitor,2000);
  }
  document.addEventListener('visibilitychange',()=>{if(document.hidden)drawMeter(null);});
  monitor();
  async function refresh(){const r=await fetch('/status');if(!r.ok)throw Error('裝置尚未準備好');status=await r.json();$('current').textContent=status.version;
    if(status.rescue)message('裝置目前在維修模式，可安裝較新的修正版。');}
  async function post(path,bytes,imageHash=null){const digest=imageHash||hex(sha256(bytes));
    const response=await fetch(path,{method:'POST',headers:{'Content-Type':'application/octet-stream','X-CK-SHA256':digest},body:bytes});
    if(!response.ok){const problem=await response.json();throw Error(problem.error==='busy_or_low_memory'?'插座正在更新或記憶體不足，請稍候再試':'更新遭拒絕：請確認機型、版本與簽章，或下載完整檔案後重試');}
    return response.json();}
  async function install(bytes,expected){if(busy)return;busy=true;document.querySelectorAll('button').forEach(b=>b.disabled=true);
    drawMeter(null);$('meter-state').textContent='更新期間暫停量測';
    try{if(bytes.length!==status.max_size)throw Error('請選擇 .ota 更新包；8 MiB 燒錄映像不適用');
      message('正在驗證並上傳，請保持此頁開啟…');await post('/upload',bytes);
      message('簽章驗證完成，正在安裝。請保持插座供電…');await post('/apply',new Uint8Array(),hex(sha256(bytes)));
      const until=Date.now()+240000;let found=false;
      while(Date.now()<until){await new Promise(r=>setTimeout(r,4000));try{await refresh();if(status.software_version===expected){if(status.rescue||status.healthy){found=true;message(status.rescue?'新版已啟動，但進入維修模式，請安裝修正版。':'更新完成，Matter 與裝置控制已就緒。原有設定與配對已保留。');break;}message('新版已啟動，正在驗證網路與裝置控制…');}}catch{}}
      if(!found)message('尚未收到新版回應。請稍候，並確認插座的網路位址；勿重複上傳。');
    }catch(e){message(e.message);}finally{busy=false;document.querySelectorAll('button').forEach(b=>b.disabled=false);}}
  $('manual').onclick=async()=>{try{const f=$('package').files[0];if(!f)throw Error('請選擇 .ota 更新包');const b=new Uint8Array(await f.arrayBuffer());if(b.length<256)throw Error('檔案不完整');await install(b,new DataView(b.buffer).getUint32(20));}catch(e){message(e.message);}};
  $('check').onclick=async()=>{try{message('正在檢查新版本…');const response=await fetch(CK_CATALOG_URL,{cache:'no-store'});if(!response.ok)throw Error('更新來源尚未發布');const catalog=await response.json();
    if(catalog.format!=='commandkit-catalog-v1'||!Array.isArray(catalog.updates))throw Error('更新索引格式不符');
    const name=status.variant===1?'matter':'exec-test';latest=catalog.updates.filter(x=>x.model==='CMNDKT-004'&&x.variant===name&&Number.isSafeInteger(x.software_version)&&x.software_version>status.software_version).sort((a,b)=>b.software_version-a.software_version)[0];
    $('online').hidden=!latest;message(latest?'有新版本 '+latest.version+'，可按「下載並更新」。':'目前已是最新版本。');
  }catch(e){message('無法檢查線上版本：'+e.message+'。仍可使用下方手動更新。');}};
  $('online').onclick=async()=>{try{if(!latest||!latest.url.startsWith('https://'))throw Error('更新來源不符');message('正在下載 '+latest.version+'…');const r=await fetch(latest.url,{cache:'no-store'});if(!r.ok)throw Error('下載失敗');
    const b=new Uint8Array(await r.arrayBuffer());if(b.length!==latest.size||hex(sha256(b))!==latest.sha256)throw Error('下載不完整');await install(b,latest.software_version);
  }catch(e){message(e.message+'。可改用手動更新，或電腦上的 update.py。');}};
  try{await refresh();}catch(e){message(e.message);}
})();
