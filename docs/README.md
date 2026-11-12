# 文件索引

安裝先讀[網站指南](https://lee98064.github.io/incipio-commandkit/)與燒錄安全；歷史報告的驗收範圍不代表目前版本已完成原機測試。

| 分類 | 文件 | 內容 |
|---|---|---|
| 專案 | [README](../README.md)／[English](../README.en.md) | 功能、安裝入口與授權範圍 |
| 專案 | [版本紀錄](../CHANGELOG.md) | 已發布版本與變更 |
| 專案 | [參與開發](../CONTRIBUTING.md) | 環境、CI 命令與管理頁預覽 |
| 專案 | [安全回報](../SECURITY.md) | 私下回報管道與範圍 |
| 專案 | [第三方來源](../third_party/README.md) | 上游授權、來源與例外 |
| guide | [使用](guide/usage.md) | 配網、Matter 與日常操作 |
| guide | [管理後台](guide/admin-backend.md) | 訪客、登入、管理與完整重置 |
| guide | [指示燈](guide/led-control.md) | 六種 LED 模式、辨識與夜間熄燈 |
| guide | [電力量測](guide/measurements.md) | 即時讀值、標準 clusters 與估算 kWh |
| guide | [協議切換](guide/protocol-switching.md) | HomeKit／Matter 切換與資料保留 |
| guide | [Matter 重設](guide/matter-reset.md) | 配對清除及重新開啟視窗 |
| guide | [韌體更新](guide/updates.md) | 網頁、電腦、Matter OTA 與保留範圍 |
| install | [燒錄與復原](install/flashing.md) | 斷電、3.3 V、備份與限定區域寫入 |
| install | [原廠網頁首次安裝](install/factory-install.md) | 10219／Bank 2 條件與專用安裝包 |
| development | [建置](development/build.md) | 固定 SDK、工具鏈與公開映像重建 |
| development | [自動身分](development/automatic-identity.md) | 每台裝置首次啟動產生身分 |
| development | [隱私](development/privacy.md) | 去識別化、公開包與私人資料邊界 |
| development | [整合技術報告](development/technical-report.md) | 韌體架構、證據與限制 |
| development | [發布](development/releasing.md) | CI、簽章、手動發布與 Pages／feed |
| development | [舊診斷樣本](../firmware/exec-test/samples/README.md) | 三支固定執行檔的來源與限制 |
| development | [musl-cross-make 上游說明](../third_party/musl-cross-make/README.md) | 工具鏈 builder 使用方式與目標 |
| reports | [原廠 Boa 首次安裝](reports/2026-10-19_firmware-boa-first-install-report.md) | 安裝格式與保留區驗證 |
| reports | [密碼管理後台](reports/2026-10-20_firmware-admin-report.md) | 認證、權限與出廠重置驗證 |
| reports | [燒錄器復原](reports/2026-10-20_firmware-programmer-recovery-report.md) | CH341A 相容性與待確認 OTA 接續 |
| reports | [協議切換](reports/2026-10-20_firmware-protocol-switch-report.md) | MCU 擁有者與設定持久化 |
| reports | [Wi-Fi 復原](reports/2026-10-20_firmware-wifi-recovery-report.md) | BusyBox、DHCP 與程序監督 |
| reports | [Wi-Fi 啟動](reports/2026-10-20_firmware-wifi-startup-report.md) | 啟動依賴與故障分析 |
| reports | [LED 驗證](reports/2026-10-21_firmware-led-report.md) | 燈號、排程與原機驗收界線 |
| reports | [啟動圖 SVG](reports/assets/startup.svg)／[DOT](reports/assets/startup.dot) | 啟動依賴圖與可編輯來源 |
| reverse | [逆向索引](../reverse/README.md) | 歷史資料、研究封存與重現工具 |
| reverse | [原廠逆向報告](../reverse/docs/2026-10-11_reverse-incipio-report.md) | 10206／10219 與 bootloader 證據 |
| reverse | [開機流程](../reverse/docs/boot_flow.md) | 選槽、bankmark 與 checksum fallback |
| reverse | [Flash 配置](../reverse/docs/flash_map.md) | 位址與 MTD 限制 |
| reverse | [Matter 可行性](../reverse/docs/matter_feasibility.md) | 歷史資源評估與移植前提 |
| reverse | [電表協議](../reverse/docs/meter_protocol.md) | MCU 串列訊息與回傳 |
| reverse | [原廠 OTA](../reverse/docs/ota_flow.md) | RSA、映像檢查與寫槽行為 |
| verification | [驗證索引](../verification/README.md) | JSON 摘要、測試命令與待驗收項目 |
