'use strict';
(function () {
  var protocolPanel = document.getElementById('protocol-management');
  if (protocolPanel) { protocolPanel.href = 'http://' + location.hostname + ':18082/'; protocolPanel.hidden = false; }
  var form = document.getElementById('wifi-form');
  var list = document.getElementById('network');
  var manual = document.getElementById('manual-network');
  var ssid = document.getElementById('ssid');
  var security = document.getElementById('security');
  var password = document.getElementById('password');
  var passwordArea = document.getElementById('password-area');
  var status = document.getElementById('scan-status');
  var retry = document.getElementById('scan-again');
  var save = document.getElementById('save');
  var networks = [], scanning = false;
  var adminState=null,setting=false;
  var adminMessage=document.getElementById('admin-setup-status');
  async function adminStatus(){try{
    var response=await fetch('/admin/status',{cache:'no-store'});adminState=await response.json();
    if(!adminState.ready){setTimeout(adminStatus,1500);return;}
    document.getElementById('admin-setup').hidden=adminState.configured;
    document.getElementById('admin-password').required=!adminState.configured;
    document.getElementById('admin-confirm').required=!adminState.configured;
    adminMessage.textContent=adminState.configured?'管理密碼已設定。':'請建立管理密碼，不需要下載金鑰檔案。';
    if(!adminState.wifi_allowed){form.hidden=true;adminMessage.textContent='請開啟管理面板，登入後修改 Wi-Fi。';}
  }catch{adminMessage.textContent='管理服務尚未就緒，正在重試…';setTimeout(adminStatus,1500);}}
  adminStatus();
  form.addEventListener('submit',async function(event){
    event.preventDefault();if(setting)return;
    try{
      if(!adminState?.ready)throw Error('請稍候管理服務準備完成');
      setting=true;save.disabled=true;
      if(!adminState.configured){
        var password=document.getElementById('admin-password').value;
        if(password!==document.getElementById('admin-confirm').value)throw Error('兩次管理密碼不相同');
        adminMessage.textContent='正在保護管理密碼，請稍候…';
        var salt=CKPassword.salt(),key=await CKPassword.derive(password,salt);
        document.getElementById('admin-password').value='';document.getElementById('admin-confirm').value='';password='';
        var enroll=await fetch('/admin/enroll',{method:'POST',headers:{'Content-Type':'application/x-www-form-urlencoded'},body:'token='+form.elements.token.value+'&credential='+CKPassword.record(salt,key)});key='';
        if(!enroll.ok)throw Error('管理密碼未保存，請重新開啟設定頁再試');
        adminState.configured=true;
      }
      adminMessage.textContent='密碼已保存，正在連線…';HTMLFormElement.prototype.submit.call(form);
    }catch(error){adminMessage.textContent=error.message;setting=false;save.disabled=false;}
  });
  function passwordMode() {
    var open = security.value === 'open';
    password.required = !open;
    password.minLength = open ? 0 : 8;
    passwordArea.hidden = open;
    if (open) password.value = '';
  }
  function choose() {
    if (list.value === 'manual') {
      manual.open = true;
      ssid.value = '';
      security.value = 'wpa2';
      save.disabled = scanning;
      ssid.focus();
    } else if (list.value !== '') {
      var item = networks[Number(list.value)];
      if (!item || item.security === 'unsupported') return;
      ssid.value = item.ssid;
      security.value = item.security;
      manual.open = false;
      save.disabled = scanning;
      if (item.security !== 'open') password.focus();
    } else save.disabled = true;
    passwordMode();
  }
  function option(text, value, disabled) {
    var item = document.createElement('option');
    item.textContent = text; item.value = value; item.disabled = !!disabled;
    list.appendChild(item);
  }
  function show(items) {
    networks = items;
    list.textContent = '';
    option('請選擇家中的 Wi-Fi', '');
    items.forEach(function (item, index) {
      var signal = item.signal >= 70 ? '訊號良好' : item.signal >= 40 ? '訊號普通' : '訊號較弱';
      var suffix = item.security === 'open' ? '免密碼' : item.security === 'unsupported' ? '不支援此加密方式' : signal;
      option(item.ssid + ' · ' + suffix, String(index), item.security === 'unsupported');
    });
    option('手動輸入／隱藏網路', 'manual');
    list.disabled = false;
    list.required = true;
    save.disabled = true;
    if (!items.some(function (item) { return item.security !== 'unsupported'; })) {
      list.value = 'manual'; choose();
    }
  }
  function request(fresh) {
    var controller = new AbortController();
    var timeout = setTimeout(function () { controller.abort(); }, 6000);
    var body = 'token=' + encodeURIComponent(form.elements.token.value) + (fresh ? '&refresh=1' : '');
    return fetch('/wifi-scan', {method: 'POST', credentials: 'same-origin',
      headers: {'Content-Type': 'application/x-www-form-urlencoded; charset=UTF-8'},
      body: body, signal: controller.signal, cache: 'no-store'})
      .then(function (response) {
        clearTimeout(timeout);
        if (!response.ok) throw new Error('scan failed');
        return response.json();
      }, function (error) { clearTimeout(timeout); throw error; });
  }
  function scan() {
    if (scanning) return;
    scanning = true;
    retry.disabled = true; save.disabled = true;
    status.textContent = '正在尋找附近的 2.4 GHz Wi-Fi…';
    var tries = 0;
    function poll(fresh) {
      request(fresh).then(function (result) {
        if (result.status === 'scanning' && tries++ < 28) {
          setTimeout(function () { poll(false); }, 1000); return;
        }
        scanning = false; retry.disabled = false;
        if (result.status !== 'ready' || !Array.isArray(result.networks)) throw new Error('scan failed');
        show(result.networks);
        status.textContent = result.networks.length ? '選擇網路，再輸入密碼即可。' : '沒有找到網路。可重新掃描，或手動輸入名稱。';
      }).catch(function () {
        scanning = false; retry.disabled = false;
        show([]);
        status.textContent = '掃描未完成。請重新掃描，或手動輸入網路名稱。';
      });
    }
    poll(true);
  }
  list.addEventListener('change', choose);
  security.addEventListener('change', passwordMode);
  ssid.addEventListener('input', function () { list.value = 'manual'; save.disabled = scanning; });
  retry.addEventListener('click', scan);
  document.getElementById('show-password').addEventListener('change', function (event) {
    password.type = event.target.checked ? 'text' : 'password';
  });
  passwordMode(); manual.open = false; scan();
}());
