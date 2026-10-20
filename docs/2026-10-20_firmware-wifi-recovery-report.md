# CMNDKT-004 v0.2.7 網路開機修復

日期：2026-10-20，Asia/Taipei。報告 flavor：null。授權與邊界沿用 [scope](wifi-startup-analysis/scope.md)，早期調查見[啟動分析](2026-10-20_firmware-wifi-startup-report.md)。本輪完成來源修改、離線開機測試及簽章包，沒有對實體插座寫入韌體或變更 UniFi 設定。

## 已確認的直接錯誤

實際 v0.2.6 OTA 的 `ck-ota-start` 在 `set -eu` 後，第 5 行執行 `touch /var/run/ck-identity-pending`。原廠 BusyBox 1.13.4 未編入 `touch`，該 rootfs 的 `/bin/touch`、`/usr/bin/touch` 也不存在。在原廠 BusyBox PID1 的完整開機測試中，原腳本輸出：

```text
/bin/ck-ota-start-v6: line 5: touch: not found
V6_STARTUP_EXIT=127
```

因此金鑰尚未從 journal 匯入 RAM，初始化腳本就已中止；隨後舊 setup wrapper 找不到 key 而退出，DHCP 不會由該流程啟動。這條確定失敗路徑符合按鍵可用、AP 仍見到無線關聯、網頁不可達的觀察。**實體插座仍沒有更新後開機日誌，不能宣告已取得其現場 crash 證據。**

原廠 BusyBox 也沒有 `pidof`，rootfs 沒有提供外部同名程式。Matter MCU 衝突檢查及診斷版健康檢查原先使用了它，已改用映像實際提供的 `ps`／`grep`。

前一次故障注入雖用了原廠 ash，PATH 仍包含主機工具，因此漏掉 `touch` 不存在的相容性錯誤。本次測試改用原廠 BusyBox 作 PID1，搭配映像真正的 applet／外部程式，不使用主機工具替代這些命令。

## 修正後行為

| 修正 | 實作與目的 |
|---|---|
| 移除缺少的命令 | RAM marker 改用 shell builtin `: > file`；移除 `pidof` 依賴 |
| 網路先啟動 | setup 控制器先處理保存的 station Wi-Fi／DHCP，身分、QR 與管理 key 由另一服務準備 |
| 身分失敗不開放操作 | 匯入完成且 onboarding helper 完整成功後才載入管理身分；此前 API 回覆 503，沒有共用 key 或免驗證操作 |
| PID1 監督 | identity、onboarding、setup、diagnostic 各有一個 respawn action；rcS 不重複啟動它們 |
| 初始化期限 | 固定工作 guard：MIB status 10 秒、一般 import／helper 30 秒、等待首次亂數 300 秒；失敗重試，保留原 journal，launcher 死亡會終止其工作程序 |
| 設定控制器恢復 | 每 2 秒 RAM 心跳，保留最後一次有效值以容忍讀取中的短暫空檔；超過 40 秒未更新時 guard 終止卡住的程序，由 PID1 重啟；單一控制器鎖防重複 owner |
| DHCP 恢復 | 定期檢查／重啟 DHCP；控制器重啟會接手既有 client，避免不必要地清 IP。DHCP 輸出保留最後 8192 bytes 於 RAM |
| 保留已存 Wi-Fi | 已設定 station 的重連不寫 MIB／onboarded；逾時持續重試，不自動覆寫 SSID／PSK 切換 AP。明確要求重新設定或首次 onboarding 仍使用 AP 流程 |
| 更新計數 | RAM boot marker 確保更新 HTTP daemon 重啟時，不重複計算同一次上電的 OTA attempts |

診斷快照增加身分階段、匯入／helper／controller 錯誤與 DHCP RAM 日誌；不輸出 key 或配對碼。Matter reset、長按重設及 kWh 演算法未在本輪變更。OTA 寫入範圍仍是 Bank 1 rootfs `[0x130000,0x3C0000)`，不包含 Wi-Fi MIB、身分 journal 或累積電量區。

## Evidence → Finding → Path

| E-id | source_ref／artifact_path | content_hash／重現 |
|---|---|---|
| E-001 | 實際 v0.2.6 `matter.ota` | SHA-256 `6dfe222d5d93586cda39fcc7234ab84aa75f1eb1a5b5c762b9023ee3a5bb2ba9`；原始腳本與 BusyBox 直接提取 |
| E-002 | 原廠 BusyBox metadata／applet 清單與 rootfs inventory | BusyBox SHA-256 `3cd0ec8270214a74879ee4b67e592be285e23d6a9cca964b64a86b88c821e619`；原始 ELF 留本機 |
| E-003 | [完整開機 VM 結果](../verification/network-boot-vm-results.json) | `tests/test_network_boot_vm.py`；記錄實際 guard／setupd hash，原始 console 留在私人目錄 |
| E-004 | [修復測試及包摘要](../verification/wifi-recovery-results.json) | native／MIPS 儲存、啟動、guard、部署測試 log hash 及包內檔案一致性 |
| E-005 | 新簽章 `matter.ota` | SHA-256 `3959e7b97bede402e1c15ae5eaa23c712cff78336c9181387a5882f517d99eaa`；沿用原 Ed25519 信任公鑰，software version 9 |

| F-id | severity | evidence_ids | confidence | location | status／結論 |
|---|---|---|---|---|---|
| F-001 | n/a_re | E-001、E-002、E-003 | high | v0.2.6 `ck-ota-start:5` | validated：缺少 touch 造成匯入前退出 127 |
| F-002 | n/a_re | E-003、E-004 | high | setup controller／PID1 actions | fixed，離線驗證：無身分仍完成 DHCP；crash／hang 可恢復 |
| F-003 | n/a_re | E-003、E-004 | high | identity tick／authenticated API | validated：未就緒回覆 503；稍後正常啟用既有 HMAC 管理流程 |
| F-004 | n/a_re | E-003、E-004、E-005 | high | backend resume／OTA 範圍 | validated（fixture）：station 重連不寫 MIB；既有 key、kWh 與 journal 保留測試通過 |
| F-005 | n/a_re | E-004 | high | 實體插座 | pending：舊 IP 的 80／18081／18082 無回應，新版未送入或驗收 |

P-001，`path_type=callflow`：原廠 BusyBox 無 touch（E-002）→ 舊啟動腳本退出 127（F-001）→ 金鑰缺失 → 舊 setup wrapper 中止 → 未啟動 DHCP。新版本以 builtin marker、分離的 PID1 服務及網路先啟動切斷此依賴（F-002）；管理操作維持身分驗證（F-003）。

## 測試與界線

已通過 native／MIPS 儲存及 OTA 各 33 項、啟動 9 項、guard native／MIPS 各 6 項、部署 12 項、實際 MIPS HTTP／DNS／HMAC／Matter 管理路由，以及公開包稽核。另逐檔確認 OTA 內的腳本與 production binaries 對應本次修改，四個 PID1 service 各只有一個啟動位置。

完整開機 VM 使用真正的原廠 BusyBox init、vendor DHCP client、production guard／setupd、backend、callback 與 lease publisher，驗證：

1. 舊 v0.2.6 原腳本退出 127。
2. 修正版在持續匯入失敗、沒有身分檔案時完成實際 DHCP，管理 API 回覆 503。
3. setup 控制器 SIGSEGV 後由 PID1 恢復，沿用 DHCP client。
4. setup 控制器 SIGSTOP 後由 40 秒心跳期限清除，PID1 恢復服務。
5. 身分稍後完成，無需重開即可透過 HMAC 取得 online 狀態。
6. 終止 DHCP client 後，新 client 再次完成取址；未觸發 MIB／onboarded 寫入。

VM 的 MIB、identity importer／helper 是 fixture，沒有 RF 或 MTD 裝置。Debian Linux 4.19 測試 kernel 在 `-m 32`、甚至不帶 initrd 時都無法開機，因此這項測試使用 64 MiB Malta；它不能當成原插座 32 MiB／Linux 2.6.30 的 RAM 或 driver 驗收。實體安裝後仍須確認開機版本、回連、按鍵、配對視窗、kWh 及長期穩定性。

重現前先依建置說明準備相同工具鏈、kernel／modules、已建置 production 服務，並保留原 v0.2.6 OTA：

```bash
python3 tests/test_startup_recovery.py
python3 tests/test_boot_guard.py
python3 tests/test_network_boot_vm.py \
  --deps firmware/matter/deps \
  --toolchains firmware/matter/toolchains \
  --vendor-ota artifacts/releases/v0.2.6-preview/matter.ota \
  --output verification/network-boot-vm-results.json
```

Guard 單元測試需 Linux；MIPS runner 可透過 `CK_BOOT_RUNNER=qemu-mips` 與 `CK_BOOT_BIN` 指定測試版 guard。實際 firmware 不接受測試環境變數或任意 executable 路徑。

## 實體復原狀態

新版包可供仍有更新入口的裝置安裝；目前離線的插座無法只靠該 OTA URL 接收更新。需要先找回可用管理入口，或讀取目前 Flash 後，使用限定 rootfs 區域的復原寫入。已有自製韌體的插座不得拿「首次安裝 BIN」直接重裝，因為首次安裝包會初始化 journal，與保留身分／fabrics／kWh 的修復目標不同。
