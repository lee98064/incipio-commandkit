#!/usr/bin/env python3
"""Download the fixed suite report and package it for review."""
import argparse, contextlib, datetime, io, json, sys, time, zipfile
from pathlib import Path
from zoneinfo import ZoneInfo
from fetch_diagnostics import fetch

OUT = Path(__file__).resolve().parents[1]

def download(host, wait_seconds=180, port=18080, source='live_device_lan'):
    stamp = datetime.datetime.now(ZoneInfo('Asia/Taipei')).strftime('%Y%m%d-%H%M%S')
    dest = OUT/'private/diagnostics'/('device-'+stamp)
    dest.mkdir(parents=True)
    report = dest/'diagnostics.txt'
    deadline = time.monotonic()+wait_seconds
    last_error = None
    while True:
        try:
            with contextlib.redirect_stdout(io.StringIO()):
                fetch(host, OUT/'private/diag.key', report, source=source, port=port)
            last_error = None
            body = report.read_bytes()
            if b'EXEC_SUITE_END' in body:
                break
            if time.monotonic() >= deadline:
                print('已保存目前診斷，開機測試尚未完成或未啟動。')
                break
            print('已連到插座，等待這次開機測試完成…', flush=True)
        except (OSError, ValueError) as exc:
            last_error = str(exc)
            if time.monotonic() >= deadline:
                if not report.exists():
                    raise RuntimeError('無法取得診斷：'+last_error) from exc
                print('插座連線中斷，已保存最後一次診斷。')
                break
            print('等待插座診斷服務，請保持連上相同 Wi-Fi…', flush=True)
        time.sleep(5)
    body = report.read_text(errors='replace')
    lines = [line for line in body.splitlines() if line.startswith(('TEST_END ', 'TEST_FAULT ', 'TEST_REJECT', 'test='))]
    summary = {'host':host, 'suite_complete':'EXEC_SUITE_END' in body,
               'last_connection_error':last_error, 'source':source, 'results':lines}
    (dest/'summary.json').write_text(json.dumps(summary, ensure_ascii=False, indent=2)+'\n')
    archive = OUT/'diagnostics'/('device-'+stamp+'.zip')
    with zipfile.ZipFile(archive, 'w', zipfile.ZIP_DEFLATED) as z:
        for p in sorted(dest.iterdir()):
            z.write(p, p.name)
        for name, path in [('input-manifest.json', OUT/'samples/manifest.json'),
                           ('manifest.json', OUT/'artifacts/services.json')]:
            z.write(path, 'firmware/'+name)
    archive.chmod(0o600)
    for line in lines:
        print(line)
    print('\n診斷檔案：'+str(archive))
    print('結果保存在電腦；可以把這個 ZIP 交給我分析。')
    return archive

def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('host', nargs='?', help='插座 IP；設定熱點為 192.168.1.254')
    parser.add_argument('--wait', type=int, default=180, help='等待開機測試的秒數')
    args = parser.parse_args()
    host = args.host
    if not host:
        host = input('插座 IP（連設定熱點時直接按 Enter：192.168.1.254）：').strip() or '192.168.1.254'
    try:
        download(host, max(0, args.wait))
    except Exception as exc:
        print('下載未完成：'+str(exc), file=sys.stderr)
        print('若插座已連家中 Wi-Fi，請使用路由器 DHCP 清單中的插座 IP。', file=sys.stderr)
        return 1
    return 0

if __name__ == '__main__':
    raise SystemExit(main())
