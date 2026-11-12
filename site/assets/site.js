/* Shared behaviour for the CommandKit site: live firmware version, copy buttons, chapter highlight. */
(function () {
  'use strict';
  var root = document.documentElement.dataset.root || '';
  var repo = 'https://github.com/lee98064/incipio-commandkit';
  var copied = document.documentElement.lang === 'en' ? 'Copied' : '已複製';
  var copyLabel = document.documentElement.lang === 'en' ? 'Copy' : '複製';

  // The update feed is the same file the outlet's management page reads.
  fetch(root + 'updates/index.json', {cache: 'no-store'}).then(function (r) {
    if (!r.ok) throw new Error('feed');
    return r.json();
  }).then(function (feed) {
    var item = (feed.updates || []).filter(function (u) { return u.model === 'CMNDKT-004' && u.variant === 'matter'; })
      .sort(function (a, b) { return b.software_version - a.software_version; })[0];
    if (!item || !/^[A-Za-z0-9.-]{1,31}$/.test(item.version)) return;
    var tag = 'v' + item.version;
    document.querySelectorAll('[data-latest-version]').forEach(function (el) { el.textContent = tag; });
    document.querySelectorAll('[data-release-link]').forEach(function (el) { el.href = repo + '/releases/tag/' + tag; });
    document.querySelectorAll('[data-asset]').forEach(function (el) { el.href = repo + '/releases/download/' + tag + '/' + el.dataset.asset; });
    document.querySelectorAll('[data-latest-size]').forEach(function (el) { el.textContent = (item.size / 1048576).toFixed(1) + ' MB'; });
  }).catch(function () {});

  document.querySelectorAll('.code').forEach(function (block) {
    var button = document.createElement('button');
    button.type = 'button'; button.className = 'copy'; button.textContent = copyLabel;
    button.addEventListener('click', function () {
      var text = block.querySelector('pre').textContent;
      var done = function () {
        button.textContent = copied; button.classList.add('done');
        setTimeout(function () { button.textContent = copyLabel; button.classList.remove('done'); }, 1600);
      };
      if (navigator.clipboard) navigator.clipboard.writeText(text).then(done, function () {});
    });
    block.appendChild(button);
  });

  var links = Array.prototype.slice.call(document.querySelectorAll('.toc a'));
  if ('IntersectionObserver' in window && links.length) {
    var byId = {};
    links.forEach(function (a) { byId[a.getAttribute('href').slice(1)] = a; });
    var observer = new IntersectionObserver(function (entries) {
      entries.forEach(function (entry) {
        if (!entry.isIntersecting) return;
        links.forEach(function (a) { a.classList.remove('active'); });
        var link = byId[entry.target.id]; if (link) link.classList.add('active');
      });
    }, {rootMargin: '-30% 0px -60% 0px'});
    Object.keys(byId).forEach(function (id) { var el = document.getElementById(id); if (el) observer.observe(el); });
  }

  document.querySelectorAll('.menu .panel a').forEach(function (a) {
    a.addEventListener('click', function () { a.closest('details').open = false; });
  });
}());
