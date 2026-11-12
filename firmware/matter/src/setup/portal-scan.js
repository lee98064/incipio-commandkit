'use strict';
(function () {
  function $(id) { return document.getElementById(id); }
  var form = $('wifi-form'), list = $('network'), manual = $('manual-network'), ssid = $('ssid'), security = $('security');
  var password = $('password'), passwordArea = $('password-area'), status = $('scan-status'), retry = $('scan-again');
  var next = $('next'), save = $('save'), adminMessage = $('admin-setup-status');
  var networks = [], scanning = false, adminState = null, setting = false, chosen = -1;
  form.noValidate = true;
  $('protocol-management').href = 'http://' + location.hostname + ':18082/';
  var code = $('matter-manual'), raw = code.textContent.trim();
  if (/^\d{11}$/.test(raw)) code.textContent = raw.slice(0, 4) + '-' + raw.slice(4, 7) + '-' + raw.slice(7);

  function step(n) {
    [1, 2, 3].forEach(function (i) {
      $('step-' + i).hidden = i !== n;
      $('p' + i).className = i === n ? 'on' : i < n ? 'done' : '';
    });
    adminMessage.hidden = n === 3;
    window.scrollTo(0, 0);
  }
  function say(text, error) { adminMessage.textContent = text; adminMessage.dataset.tone = error ? 'error' : ''; }
  function wifiReady() {
    var open = security.value === 'open', name = ssid.value;
    return name.length > 0 && new TextEncoder().encode(name).length <= 32 && (open || password.value.length >= 8);
  }
  function refreshButtons() {
    next.disabled = setting || !wifiReady() || !adminState || !adminState.ready;
    next.textContent = adminState && adminState.configured ? '儲存並連線' : '下一步：建立管理密碼';
  }
  async function adminStatus() {
    try {
      var response = await fetch('/admin/status', {cache: 'no-store'});
      adminState = await response.json();
      if (!adminState.ready) { setTimeout(adminStatus, 1500); return; }
      $('admin-setup').hidden = adminState.configured;
      say(adminState.configured ? '管理密碼已設定，送出後直接連線。' : '');
      if (!adminState.wifi_allowed) {
        form.hidden = true; $('protocol-note').hidden = false;
        $('p1').className = $('p2').className = 'done'; $('p3').className = 'on';
      }
      refreshButtons();
    } catch (error) { say('管理服務尚未就緒，正在重試…'); setTimeout(adminStatus, 1500); }
  }
  async function connect() {
    if (setting) return;
    try {
      if (!adminState || !adminState.ready) throw Error('請稍候管理服務準備完成');
      if (!wifiReady()) { step(1); throw Error('請確認 Wi-Fi 名稱與密碼'); }
      setting = true; save.disabled = next.disabled = true; save.classList.add('loading'); next.classList.add('loading');
      if (!adminState.configured) {
        var admin = $('admin-password').value;
        if (admin.length < 8) throw Error('管理密碼至少需要 8 個字元');
        if (admin !== $('admin-confirm').value) throw Error('兩次管理密碼不相同');
        say('正在保護管理密碼，約需數秒…');
        var salt = CKPassword.salt(), key = await CKPassword.derive(admin, salt);
        $('admin-password').value = ''; $('admin-confirm').value = ''; admin = '';
        var enroll = await fetch('/admin/enroll', {method: 'POST', headers: {'Content-Type': 'application/x-www-form-urlencoded'},
          body: 'token=' + form.elements.token.value + '&credential=' + CKPassword.record(salt, key)});
        key = '';
        if (!enroll.ok) throw Error('管理密碼未保存，請重新開啟設定頁再試');
        adminState.configured = true;
      }
      say('密碼已保存，正在送出 Wi-Fi 設定…');
      var body = new URLSearchParams({token: form.elements.token.value, ssid: ssid.value, security: security.value,
        password: security.value === 'open' ? '' : password.value});
      var reply = await fetch('/wifi', {method: 'POST', credentials: 'same-origin', cache: 'no-store',
        headers: {'Content-Type': 'application/x-www-form-urlencoded; charset=UTF-8'}, body: body.toString()});
      if (!reply.ok) {
        var text = (await reply.text()).trim();
        throw Error(reply.status === 409 ? '插座正在處理其他操作，請稍候再試' : text || '設定未送出，請重新開啟設定頁');
      }
      password.value = ''; $('done-ssid').textContent = '「' + ssid.value + '」'; step(3);
    } catch (error) {
      say(error.message, true); setting = false; save.disabled = false; refreshButtons();
    } finally { save.classList.remove('loading'); next.classList.remove('loading'); }
  }
  form.addEventListener('submit', function (event) { event.preventDefault(); connect(); });
  next.addEventListener('click', function () {
    if (!wifiReady()) return;
    if (adminState && adminState.configured) { connect(); return; }
    $('chosen-ssid').textContent = ssid.value; say(''); step(2); $('admin-password').focus();
  });
  $('back').addEventListener('click', function () { say(''); step(1); });

  function passwordMode() {
    var open = security.value === 'open';
    password.required = !open; password.minLength = open ? 0 : 8;
    passwordArea.hidden = open; if (open) password.value = '';
    refreshButtons();
  }
  function select(index) {
    var item = networks[index];
    if (!item || item.security === 'unsupported') return;
    chosen = index;
    Array.prototype.forEach.call(list.children, function (row) { row.setAttribute('aria-checked', String(Number(row.dataset.index) === index)); });
    ssid.value = item.ssid; security.value = item.security; manual.open = false;
    passwordMode();
    if (item.security !== 'open') password.focus();
  }
  function row(item, index) {
    var button = document.createElement('button'), bars = document.createElement('span'), name = document.createElement('span'), meta = document.createElement('small');
    button.type = 'button'; button.className = 'net'; button.dataset.index = String(index);
    button.setAttribute('role', 'radio'); button.setAttribute('aria-checked', 'false');
    bars.className = 'bars'; bars.dataset.level = item.signal >= 70 ? '3' : item.signal >= 40 ? '2' : '1';
    for (var i = 0; i < 3; i++) bars.appendChild(document.createElement('i'));
    name.className = 'ssid'; name.textContent = item.ssid;
    meta.textContent = item.security === 'open' ? '免密碼' : item.security === 'unsupported' ? '不支援此加密方式' :
      item.signal >= 70 ? '訊號良好' : item.signal >= 40 ? '訊號普通' : '訊號較弱';
    button.appendChild(bars); button.appendChild(name); button.appendChild(meta);
    if (item.security === 'wpa2') {
      var svg = document.createElementNS('http://www.w3.org/2000/svg', 'svg'), use = document.createElementNS('http://www.w3.org/2000/svg', 'use');
      svg.setAttribute('class', 'i lock'); svg.setAttribute('aria-hidden', 'true'); use.setAttribute('href', '#i-lock'); svg.appendChild(use); button.appendChild(svg);
    }
    button.disabled = item.security === 'unsupported';
    button.addEventListener('click', function () { select(index); });
    return button;
  }
  function show(items) {
    networks = items; chosen = -1; list.textContent = '';
    items.forEach(function (item, index) { list.appendChild(row(item, index)); });
    if (!items.some(function (item) { return item.security !== 'unsupported'; })) { manual.open = true; }
    refreshButtons();
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
    scanning = true; retry.disabled = true;
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
        status.textContent = result.networks.length ? '找到 ' + result.networks.length + ' 個網路，點選家中的 Wi-Fi。' : '沒有找到網路。可重新掃描，或手動輸入名稱。';
      }).catch(function () {
        scanning = false; retry.disabled = false;
        show([]);
        status.textContent = '掃描未完成。請重新掃描，或手動輸入網路名稱。';
      });
    }
    poll(true);
  }
  security.addEventListener('change', passwordMode);
  ssid.addEventListener('input', function () {
    chosen = -1;
    Array.prototype.forEach.call(list.children, function (item) { if (item.dataset.index) item.setAttribute('aria-checked', 'false'); });
    refreshButtons();
  });
  password.addEventListener('input', refreshButtons);
  manual.addEventListener('toggle', function () { if (manual.open) ssid.focus(); refreshButtons(); });
  retry.addEventListener('click', scan);
  Array.prototype.forEach.call(document.querySelectorAll('.eye'), function (button) {
    button.addEventListener('click', function () {
      var input = $(button.dataset.for), reveal = input.type === 'password';
      input.type = reveal ? 'text' : 'password'; button.setAttribute('aria-label', reveal ? '隱藏密碼' : '顯示密碼');
    });
  });
  adminStatus(); passwordMode(); manual.open = false; scan();
}());
