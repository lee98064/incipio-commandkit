# 重新開啟配對與重設

v0.2.9 的操作均從[管理後台](admin-backend.md)登入，不需管理金鑰檔。

「重新開啟 Matter 配對視窗」保留已完成的 fabrics，清理未完成的 PASE／fail-safe，開啟約 900 秒配對視窗。「清除目前協議的配對」在 Matter 模式移除 fabrics、ACL、操作金鑰、session resumption 與持久屬性，再重啟 Matter 並開啟視窗。Wi-Fi、管理密碼、裝置身分與累積 kWh 保留；原家庭平台的舊配件項目需自行移除後重新加入。

```bash
python3 tools/setup_control.py matter-status --host 192.168.1.50
python3 tools/setup_control.py open-commissioning --host 192.168.1.50 --wait
python3 tools/setup_control.py reset-matter --host 192.168.1.50 --wait
```

工具提示管理密碼。HTTP 202 只表示排入佇列；`--wait` 比對此次 request ID 與完成狀態。HomeKit 模式的配對清除經原廠 CLI 執行，再重啟。

**實體長按與遠端清除配對不同：長按恢復出廠，連同管理密碼、Wi-Fi、兩套配對和 kWh 一併清除。**短按只切換繼電器。MCU 的前置 `AA FF 00 55` 不重置；確認 `AA FF FF 55` 才保存出廠重置要求並重啟。按壓秒數由原廠 MCU 決定，尚待原機驗收，不能由模擬事件推定。

完整出廠重置在開機時執行，可在中斷後繼續；保留 MAC、校正、原廠 MFi／身分與 OTA 信任來源。Matter owner 即使正在等候身分或網路，也會處理確認長按事件。新版遠端變更入口移至 TCP 18082，舊 TCP 18081 的 HMAC POST 不能繞過密碼。

驗證見 [SDK／MIPS 結果](../verification/admin-matter-vm-results.json)、[原廠 HAP 重置結果](../verification/homekit-factory-v0.2.9-results.json)與[完整報告](2026-10-20_firmware-admin-report.md)。v0.2.6 的舊行為及原機紀錄留在歷史驗證檔，不能視為本版實機通過。
