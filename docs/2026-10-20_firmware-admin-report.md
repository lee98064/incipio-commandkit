# CMNDKT-004 v0.2.9 管理後台與出廠重置驗證

## 概述

本版完成 HomeKit／Matter 共用管理入口、初次密碼設定、訪客／管理員後台、累積 kWh 歸零與完整實體重置。管理服務不再依賴身分匯入或協議程序；HomeKit 啟動失敗時仍可從後台選回 Matter。Matter 電量清零在唯一 MCU／SDK owner 執行，避免舊 RAM 計數器寫回。完整重置保存要求後重啟，依序清除 Wi-Fi、管理密碼、兩套配對與 kWh，保留原機身分、MAC、校正及 OTA 信任。簽章 OTA 已產生，本輪沒有寫入、重置或對外發布實機。

範圍與授權見 [scope](admin-backend-analysis/scope.md)，事件見 [timeline](admin-backend-analysis/timeline.md)。報告 flavor = null；此為自有韌體實作／相容性驗證，不是外部漏洞、惡意程式或 ATT&CK 分析。從無密碼舊版首次升級會進入設定 AP，須建立密碼及重新輸入 Wi-Fi。內部 exec-test 未遷移密碼初設，因此不交付新版診斷 OTA。

## Evidence

測試使用固定公開基底、原廠 uClibc／BusyBox、MIPS qemu-user、64 MiB Malta／Linux 4.19、固定 Matter SDK；SDK daemon 限制 8 MiB address space。MIB、MCU 串列、NOR、身分匯入與 RF 視個別測試使用 fixture，不能據此推定 32 MiB 原機、MFi、iPhone 配對或真實 Flash driver 行為。重現前依建置文件準備固定依賴；`.local` 的原始測試日誌留在本機，摘要記錄其 SHA-256。

### E-001 — production payload 與原生／MIPS 管理測試

- observed_at：2026-10-20，Asia/Taipei
- source_type：file
- source_ref／artifact_path：[verification/admin-release-results.json](../verification/admin-release-results.json)
- content_hash（SHA-256）：`f5a077fae5fd31d4f019107b178b85b5e3ea49ceb0b42a56e7245b5323cb9c78`
- linked_workitem：五項管理修正；supersedes：none
- repro_command：`python3 reverse/tools/verify_protocol_release.py --release-dir artifacts/releases/v0.2.9-preview --test-logs .local --output verification/admin-release-results.json`
- raw_excerpt：`status: pass`。

### E-002 — 實際 SDK owner 配對、歸零及確認長按

- observed_at：2026-10-20，Asia/Taipei
- source_type：file
- source_ref／artifact_path：[verification/admin-matter-vm-results.json](../verification/admin-matter-vm-results.json)
- content_hash（SHA-256）：`fa3f220bcb93e2c437a8455be25afc81c046e2bc7544151abfd473ae825f7851`
- linked_workitem：五項管理修正；supersedes：none
- repro_command：`CK_SDK_DIR="$PWD/firmware/matter/deps" python3 tests/test_matter_reset_vm.py`
- raw_excerpt：`status: pass`。

### E-003 — 原廠 HomeKit reset CLI 與合成 NOR

- observed_at：2026-10-20，Asia/Taipei
- source_type：file
- source_ref／artifact_path：[verification/homekit-factory-v0.2.9-results.json](../verification/homekit-factory-v0.2.9-results.json)
- content_hash（SHA-256）：`4a24331464bd39a5245652c70a89d6c9fcbdf5fb1dfc649b7a4c1bee1e00d246`
- linked_workitem：五項管理修正；supersedes：none
- repro_command：`python3 tests/test_homekit_factory.py --deps firmware/matter/deps --toolchains firmware/matter/toolchains --output verification/homekit-factory-v0.2.9-results.json`
- raw_excerpt：`status: pass`。

### E-004 — PID1／DHCP 與獨立管理轉址

- observed_at：2026-10-20，Asia/Taipei
- source_type：file
- source_ref／artifact_path：[verification/network-boot-v0.2.9-results.json](../verification/network-boot-v0.2.9-results.json)
- content_hash（SHA-256）：`29a69e37e9e61fa8ee4fc3ec5ce485cb5105fa29bc16274befb8cdaa398d9207`
- linked_workitem：五項管理修正；supersedes：none
- repro_command：`python3 tests/test_network_boot_vm.py --deps firmware/matter/deps --toolchains firmware/matter/toolchains --vendor-ota artifacts/releases/v0.2.6-preview/matter.ota --output verification/network-boot-v0.2.9-results.json`
- raw_excerpt：`status: pass`。

### E-005 — 登入後設定頁與登出後公開資訊

- observed_at：2026-10-20，Asia/Taipei
- source_type：file
- source_ref／artifact_path：[verification/admin-ui/settings-fixture.png](../verification/admin-ui/settings-fixture.png)
- content_hash（SHA-256）：`721a4accfba37a0e45e6a647b51c9d1f29586f474d5a2d0e9261e62e69eee102`
- linked_workitem：五項管理修正；supersedes：none
- repro_command：`python3 tests/serve_admin_fixture.py（Linux，需 tools/requirements.txt）；以瀏覽器登入文件化的合成 fixture 帳號，僅接觸暫存 NOR`
- raw_excerpt：登入後顯示管理設定；登出後隱藏設定並持續顯示合成量測。

## Finding

### F-001 — 管理入口與協議解耦

severity：n/a_re；category：design；status：validated；confidence：high（模擬範圍）。evidence_ids：E-001、E-004、E-005。location：`ck-management-start`、`ck_updated.c`、`setupd-device.c`。

獨立 PID1 respawn 啟動管理服務，port 80 在 station 狀態轉到數字 IP 的 18082。身分匯入持續失敗、Flash lock 被佔用時，公開 dashboard 仍回應，敏感操作拒絕而不放行。HomeKit owner 不再等待 DHCP 才接管 MCU。remediation：已實作；repro_steps：執行 E-004，再於 E-001 的 Flash lock fixture 讀取公開端點。原機記憶體／RF 仍需驗收。

### F-002 — 密碼控制所有管理變更

severity：n/a_re；category：design；status：validated；confidence：high。evidence_ids：E-001、E-005。location：`ck_web_auth.h`、`password.js`、`setupd-device.c`。

初設 credential 必須在 AP setup、有正確 per-boot token、帳號缺席時才可寫入；寫入失敗不允許後續 Wi-Fi 提交，也不能覆蓋既有帳號。PBKDF2-HMAC-SHA256 使用隨機 salt 與 600,000 次；登入 challenge 一次性，session 限時且綁 IP，變更需 CSRF。密碼輪替會撤銷所有 session；舊 HMAC POST 與金鑰匯出無法繞過。瀏覽器曾發現兩份 JS 共用 `hex` 的宣告衝突，已用閉包隔離並加入共同 global 的重現測試。remediation：已實作；repro_steps：執行 E-001 及 `node tests/test_password_crypto.js`，再登入 E-005 fixture。

這是本機 HTTP 管理，沒有 TLS／Secure cookie。Flash credential 具有登入等同權限，不宣稱抵抗中間人、root 或實體擷取。威脅邊界及 API 見[管理文件](admin-backend.md)。

### F-003 — 電量歸零不被舊 owner 覆蓋

severity：n/a_re；category：design；status：validated；confidence：high。evidence_ids：E-001、E-002。location：`ck_energy.c`、`ElectricalMeasurements.cpp`、`main.cpp`。

Matter 模式將 E action 交給 SDK 事件迴圈：先讀回確認零 checkpoint，再清 RAM counter、remainder、保存狀態及 cluster reset 資料。實際 SDK 測試暫停負載功率後歸零，等待超過 30 秒仍為零。HomeKit 模式沒有自訂計數 owner，後台直接清保存值；無可確認協議時拒絕。新 checkpoint 中斷仍保留原值，不做全片擦除。remediation：已實作；repro_steps：執行 E-001 的 torn reset／排程測試及 E-002。

### F-004 — 長按完整重置保留原機出廠身分

severity：n/a_re；category：reverse_algo；status：validated；confidence：high（軟體／binary fixture）。evidence_ids：E-001、E-002、E-003。location：`RelayEngine.cpp`、`ck_factory_reset.h`、`tools/build.py`。

Matter 前置 frame 不清除，確認 frame 才保存 `control/factory-reset` intent 並關閉 owner。開機在任一協議啟動前，執行 HAP pairing reset、Wi-Fi unconfigure、kWh reset，最後原子清理 journal。故意讓 Wi-Fi 或最後 journal commit 失敗，intent 仍保留，重試後才清除帳號與配對。

原廠 HAP 的 `-c` 原先將參數 1 傳給 `HMInitFlash`，會改寫 MIB MAC／配件識別。版本 11 只將 file offset `0x1b8e4` 的 `24040001` 改為 `24040000`；兩個固定長度命令字串改為 `/bin/ck-reset` 及 `true`。ELF 長度及其他 bytes 保持一致。實際原廠 ELF 在 qemu-user 執行 `-c`，MIB set／update／default 任一呼叫均使測試失敗，結果未發生；只清 pairing `PHRX` 後至 `0xa5d` 的資料，之後含原廠 PIN 的尾端不變。remediation：已實作；repro_steps：執行 E-003，再執行 E-001 的完整 boot retry fixture。原機按壓門檻及 reset 掉電仍待驗收。

## Path

| 路徑 | 證據與結果 |
|---|---|
| P-001：AP → 密碼 enrollment → Wi-Fi → public dashboard → login → 設定 | E-001／E-005 → F-001／F-002；管理金鑰檔不再是一般使用流程 |
| P-002：登入 → energy E mailbox → 唯一 SDK owner → zero checkpoint → 新計數 | E-001／E-002 → F-003；下一次保存未還原舊值 |
| P-003：確認長按 → durable intent → 重啟 → HAP／Wi-Fi／電量 → journal 最後提交 | E-001／E-002／E-003 → F-004；失敗保留 intent，出廠身分保留 |

## 驗證與交付

原生 C 與 MIPS 各 48 項通過；部署 12 項通過，未交付診斷版的 1 項明確略過；啟動復原 9 項通過。初設 MIPS HTTP／DNS、PBKDF2 的獨立 Node crypto 對照、實際 SDK 配對／重設與 kWh 歸零、原廠 HAP `-c` 均通過。更多測試紀錄與截圖雜湊見[執行結果](../verification/admin-runtime-results.json)。瀏覽器使用真正 C HTTP server、暫存 NOR 和合成帳號，驗證訪客、登入設定、單選保留與登出，並從 UI 保存 Matter→HomeKit 及 HomeKit→Matter（服務／RAM 重啟為 fixture，不執行 HAP 或 RF）；未在 UI 更改實機密碼。Wi-Fi PHY、MFi、Apple 家庭顯示、32 MiB 原機及實機重置仍待驗收。

- 版本：`0.2.9-preview`，software version `11`。
- `matter.ota` SHA-256：`c67b25b86533d3928799522fdf2bb284dd26cefb5edae1620d197eb3fc247f58`。
- 原廠 HAP SHA-256：`2d50339436759f3d602c150fb4f1a42f0fdf122fc18e9a4f54f6e6b07d7a0c62`。
- 修補 HAP SHA-256：`f27336a5aa672169b88d81e3a215a4a4dea59badf31c56e912aedd43ad870ee6`，長度 2,116,412 bytes。
- rootfs checksum extent：2,461,698 bytes；距保留邊界剩 225,278 bytes。

HomeKit 模式的自訂 V／A／W 與 kWh 累計仍暫停，可查看／清零保存值，切回 Matter 後續計。這不是完整 A/B 自動回退或安全抹除。離線舊版仍需 CH341A 復原；本輪未執行寫入、實機重置、Git push 或發布。最終公開掃描結果見[去識別化稽核](../verification/public-audit-v0.2.9-preview.json)。
