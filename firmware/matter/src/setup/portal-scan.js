'use strict';
(function () {
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
