# CMNDKT-004 v0.2.10 程式區域復原

## 概述

本版處理原廠網頁首次安裝後的 CH341A 復原相容性，並修正保留舊 OTA 待確認標記時，新版程式無法完成健康確認的問題。保留 v0.2.9 的密碼後台、HomeKit／Matter 單選、kWh 歸零及完整出廠重置功能。本次實機復原不執行出廠重置，只允許 Bank 1 rootfs 寫入；HomeKit、MFi、MAC、校正、裝置身分、配對及 kWh 保留。授權見 [scope](programmer-recovery-analysis/scope.md)，事件見 [timeline](programmer-recovery-analysis/timeline.md)。flavor = null，此為自有韌體相容性／復原工作，不是外部漏洞或惡意程式分析。

## Evidence

### E-001：known factory kernel wrapper

source_type：file；observed_at：2026-10-20。content_hash（摘要 SHA-256）：`6c27bf1d1a944c64e811ce7c244361dbebf512bff9db57cb56e0a65d9a1a1639`；artifact_path：`verification/host-factory-recovery-results.json`。來源為 [host 測試摘要](../verification/host-factory-recovery-results.json)。`ck_factory.h` 已固定 legacy 與 Boa wrapper 的兩個 hash；production OTA verifier 原已支援 wrapper，host `fwlib.compatible()` 則只有 legacy raw hash 比對。

重現：使用符合公開固定 platform 的原始完整備份作 `--reference`，執行 `python3 tests/test_factory_host_compat.py --reference private/reference.bin --output verification/host-factory-recovery-results.json`。此命令只接觸本地檔案，不存取燒錄器。完整輸入含私人資料，不隨報告公開。

### E-002：stale pending version

source_type：file／command；observed_at：2026-10-20。content_hash（摘要 SHA-256）：`a2dd72bf3b85651cbac6f5b414ba0636881b0d1520739691ce77b43fdd9b911c`；artifact_path：`verification/recovery-v0.2.10-release-results.json`。來源為 `tests/test_updates.py` 的兩項復原測試，以及當次私人 NOR 副本預演。舊狀態 pending=8、floor=6；較新程式 version=12 若直接沿用 pending=8，`ck_store_confirm(12)` 會因 pending 不符而失敗。

重現：Linux 安裝 `tools/requirements.txt` 後執行 `python3 tests/test_updates.py -v`；MIPS 使用 `CK_TEST_RUNNER=qemu-mips CK_TEST_BIN=firmware/matter/artifacts/update-test`。原生與 MIPS 各 50 項通過，細節與日誌 SHA-256 見產物驗證摘要。故障注入覆蓋接續標記提交失敗及下次重試，不要求實機斷電。

### E-003：私人備份與限定寫入

source_type：command／private file；observed_at：2026-10-20。完整備份、個別化目標與燒錄器 session 留在本機 private 目錄，含實機身分及 HomeKit 資料，不公開 bytes、配對碼或身分值。狀態與保留範圍的去識別化摘要記錄於本版驗證結果。初始不穩定讀取未用作寫入基礎，追加兩份一致後才準備目標。

## Finding

### F-001：host 復原工具需辨識已支援的 wrapper

severity：n/a_re；category：design；status：validated；confidence：high；evidence_ids：E-001。location：`tools/fwlib.py:compatible`。

原廠 Boa 首次安裝把相同 kernel 包在 full-span 長度與 checksum 內，因此整段 hash 與 legacy 容器不同。host 現在與 C OTA verifier 採相同嚴格條件：legacy expected hash、固定 magic／entry／full-span length、合法 boot mark、canonical factory 全段 hash，以及完全相同 Bank 2。只正規化 boot mark，沒有遮罩程式、padding 或 checksum，也不改寫 kernel。3 種已知 mark 接受，11 種程式／header／padding／Bank 2／無效 mark 變更拒絕，包含重新計算 checksum 的惡意程式變更。

### F-002：較新程式接續舊待確認版本

severity：n/a_re；category：design；status：validated；confidence：high；evidence_ids：E-002。location：`firmware/matter/src/update/ck_store.c:ck_store_boot`。

當 executing metadata 的版本比 pending 新，且未低於已確認 floor，啟動流程先刪除舊 attempts，再保存新的 pending，然後照常計算首次嘗試。刪除 attempts 在前，使兩步之間中斷時能於下次啟動重試；不會直接提高 floor 或宣稱健康。新程式仍需完成原有健康檢查才確認。身分、配對、管理資料與獨立電量紀錄不被清除。pending 與執行版本相同時，原三次未確認保護維持。

### F-003：保留專屬資料的復原邊界

severity：n/a_re；category：design；status：validated（寫入與讀回）；evidence_ids：E-003；confidence：high；location：`tools/flash.py`。本次已完成限定區域寫入、內建校驗與獨立全片讀回，狀態為 `write_verified_not_boot_tested`；實機開機仍另行驗收。

目標以當次一致備份補回全部非 rootfs bytes，沿用 journal 中既有身分；不產生替代金鑰，不執行 factory reset。寫入工具再次取得兩份備份並比對完整原 hash，固定 layout 只包含 `[0x130000,0x3C0000)`；內建校驗後另做全片讀回，比較完整目標與全部保留區。HomeKit 配對／PIN 區域 `[0x3E0000,0x400000)`、journal／電量 `[0x3C0000,0x3E0000)`、MAC／MIB／kernel、Bank 2 與 factory／校正都在保留範圍。

## Path

| 路徑 | 結果 |
|---|---|
| P-001：穩定完整備份 → 已知 wrapper 驗證 → 沿用身分的私人目標 | E-001／E-003 → F-001／F-003 |
| P-002：新版 import → running > pending → 保留資料接續 → 待正常健康確認 | E-002 → F-002 |
| P-003：再次雙份備份 → rootfs layout 寫入 → 獨立全片讀回 → 移除接線後開機 | E-003 → F-003；開機結果不可由離線結果推定 |

## 使用與限制

首次從無管理密碼的舊版升級，會進入設定熱點，須建立密碼並重新輸入 Wi-Fi。HomeKit 模式仍暫停自訂即時量測與 kWh 累計，切回 Matter 後續計。新版長按為完整恢復出廠，本次為保留資料不測試長按。已辨識的 factory wrapper 不代表可忽略其他 kernel 或 Bank 2 差異。

本版沒有變更 GitHub 或 UniFi 設定，也未公開完整私人映像。實機健康、Wi-Fi、短按、HomeKit／MFi 與長期穩定性須各自驗收；全片讀回成功只證明寫入內容一致。

本次[硬體寫入摘要](../verification/recovery-v0.2.10-hardware-results.json)確認完整目標一致、兩份當次備份一致、所有保留區逐 byte 未變，未執行重置。私人 `preservation-verification.json` 另記錄各區域前後 hash。公開報告不列實機配對碼、身分值、原始映像或 per-device hash。
