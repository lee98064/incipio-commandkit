# 本次公開整理範圍

日期：2026-10-14（Asia/Taipei）。使用者要求整理自有 Incipio CommandKit CMNDKT-004 研究資料，提供可公開來源／逆向文件、去識別化 Release BIN、使用及部分燒錄說明。

包含最新 Matter DeviceIdentity 版、獨立執行檔診斷版、兩版原廠核心程式及 bootloader 的既有逆向產物；實作本機個別化與 CH341A 限定 rootfs 工具，並進行來源重建、VM、synthetic／dummy 及公開包稽核。

本次沒有實體 SPI 存取、燒錄、上電／射頻／負載測試，也沒有 GitHub repository 建立、push 或 Release 發布。不取得或公開第三方裝置資料、MFi 私密資料、原機憑證或完整 Flash 備份。完整 SDK／工具鏈重建所需的第三方來源依固定版本下載，原廠部分由使用者自己的相容備份提取。

部署唯一範圍是 `[0x130000,0x3C0000)`；其他 bytes 由使用者當次一致備份保留。本次驗證環境的 fake MAC、SSID、對端 MCU 與 loopback commissioning 屬模擬資料，不代表原機驗收。

自寫碼本次不新增授權。原始研究資料保留，私人建置／診斷快取移出公開交付資料夾。成功條件是兩個可校驗的公開 BIN、可獨立使用的工具、完整來源與逆向說明，以及來源／Release ZIP 均通過公開檔案與憑證稽核。
