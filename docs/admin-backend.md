# 使用插座管理後台

v0.2.11-preview 新增兩種協議共用的[LED 模式、尋找插座與夜間熄燈](led-control.md)，設定與校時操作需登入。

v0.2.9-preview（software version 11）在 HomeKit 與 Matter 模式共用同一個管理後台。**首次從沒有管理密碼的舊版升級，會進入設定熱點，需要建立管理密碼並重新輸入 Wi-Fi。**已有管理密碼後，後續 OTA 保留密碼及 Wi-Fi。

## 初次設定與登入

1. 連接 `CommandKit-Setup-…`，開啟 `http://192.168.1.254/`。
2. 保存這顆插座的 Matter 設定碼，輸入並確認管理密碼，再設定 2.4 GHz WPA2 Wi-Fi。密碼至少 8 個字元，最多 128 UTF-8 bytes；沒有預設密碼，也不需要下載管理金鑰檔。
3. 從路由器取得插座 IP。開啟 `http://插座IP/` 會轉到 `http://插座IP:18082/`。
4. 未登入可看即時資訊、韌體版本及目前協議。按「管理員登入」後才顯示管理設定；登入有效約 15 分鐘，逾時需重新登入。

HomeKit 使用原廠標籤上的配對碼。Matter 使用首次設定產生的裝置專屬碼。管理密碼只用來登入本機後台，與這兩種家庭配對碼不同。

忘記管理密碼時，可實體長按至裝置重啟，恢復出廠後重設；**這也會清除 Wi-Fi、家庭配對及累積 kWh**。沒有保留資料的免密碼遠端重設入口。

## 管理設定

| 操作 | 行為 |
|---|---|
| 協議切換 | Matter／HomeKit 單選，保存後重啟；管理網址保持相同，DHCP 換 IP 時使用新位址 |
| Wi-Fi | 輸入新的名稱與密碼，重新連線；HomeKit 首次配網完成會重啟，使原廠服務讀取新狀態 |
| 開啟 Matter 配對視窗 | 保留已完成配對，清理未完成流程並重新開啟約 15 分鐘 |
| 清除目前協議的配對 | 只清除該協議的家庭配對，保留 Wi-Fi、密碼、裝置身分與 kWh |
| 更新韌體 | 登入後上傳／套用簽章 OTA，仍核對版本、平台及簽章 |
| 變更密碼 | 新密碼保存成功後，所有管理工作階段失效，需重新登入 |
| 累積用電歸零 | 確認後立即保存零值，之後重新累計；保留家庭配對及其他設定 |
| 恢復出廠 | 清除管理密碼、Wi-Fi、兩套協議配對、累積用電及協議偏好，重新進入設定熱點 |

短按仍切換繼電器。實體長按門檻由原廠 MCU 決定；Matter 收到確認事件 `AA FF FF 55` 才要求恢復出廠，前置事件 `AA FF 00 55` 不清除設定。HomeKit 長按使用原廠事件處理，再呼叫共同重置工具。完整重置保留 MAC、校正、出廠 HomeKit／MFi、每顆 Matter 裝置身分及 OTA 信任來源，不複製別顆插座的憑證。

HomeKit 模式仍由原廠程式獨占 MCU，**自訂網頁的 V／A／W 與 kWh 累計暫停**；頁面可顯示最後保存的 kWh，也能將其歸零。切回 Matter 後從保存值繼續，不回補 HomeKit 使用期間的電量。

## 本機登入與 API

後台使用 HTTP 區網連線，沒有 TLS；請在受信任區網與自己的設定環境使用。密碼不寫入 URL、日誌或使用者下載檔。首次設定與變更時，瀏覽器推導並提交 60-byte credential；資料具有登入等同權限，0600 權限與 Flash 保護仍有必要，不能宣稱可防止區網中間人或實體 Flash 擷取。

密碼推導為 PBKDF2-HMAC-SHA256、600,000 次、每顆隨機 16-byte salt。參考 [OWASP 密碼儲存說明](https://cheatsheetseries.owasp.org/cheatsheets/Password_Storage_Cheat_Sheet.html)及 [RFC 8018](https://www.rfc-editor.org/rfc/rfc8018.html)。LAN HTTP 沒有 SubtleCrypto 時，在 Web Worker 執行相同推導。登入使用一次性 120 秒 challenge、HMAC proof、來源 IP 綁定、有限次數節流；cookie 為 HttpOnly／SameSite=Strict，變更操作另需 CSRF header。純 HTTP 的 cookie 沒有 Secure 屬性。

公開 GET 為 `/`、`/password.js`、`/status`、`/measurements`、`/protocol`、`/auth/session`、`/auth/challenge`。`POST /auth/login` 完成驗證。其他 POST（包含 `/upload`、`/apply`）都需有效 session 與 `X-CK-CSRF`。`GET /admin/state` 及 `/admin/onboarding` 需登入。舊診斷 HMAC 不能繞過密碼修改設定；舊金鑰檔匯出已停用。

管理服務由 PID1 獨立監督，不等待身分匯入、Matter／HomeKit 或配對完成。Flash 忙碌時公開頁仍可回應，管理操作拒絕而不降級為免登入。OTA、協議交接、Wi-Fi 改動與重置互斥。

完整恢復出廠先保存 durable intent，重啟後依序清除 HomeKit pairing、Wi-Fi、電量，最後原子清除設定 journal；每一步失敗都保留 intent，下次開機繼續。重置完成前不啟動另一個協議。這是可重試的邏輯清除，並非全片安全抹除。

## 電腦工具

以下新介面會在終端提示管理密碼，不使用 `--profile`：

```bash
python3 tools/setup_control.py matter-status --host 192.168.1.50
python3 tools/setup_control.py open-commissioning --host 192.168.1.50 --wait
python3 tools/setup_control.py reset-matter --host 192.168.1.50 --wait
python3 tools/update.py 192.168.1.50 --package artifacts/releases/v0.2.9-preview/matter.ota
```

`setup_control.py --profile` 僅保留給舊版 HMAC 介面。新版請使用後台修改 Wi-Fi。`update.py --check-only` 不登入、不上傳、不重啟。

本版只交付 `matter` 種類的 HomeKit／Matter 共用韌體，未交付尚未遷移初次密碼設定的內部 `exec-test` 診斷版。原廠 HomeKit／MFi、實際 RF、按鍵門檻及斷電恢復仍須原機驗收；軟體、MIPS 與 SDK 測試見[驗證報告](2026-10-20_firmware-admin-report.md)。
