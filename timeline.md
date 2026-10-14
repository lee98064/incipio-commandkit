# 整理與驗證時序

本次日期：2026-10-14（Asia/Taipei）。精確的本機建置／VM console 記錄屬私人快取，公開只保留驗證摘要。

1. 盤點既有 10206／10219／bootloader 逆向、Matter DeviceIdentity 與執行檔診斷版本。
2. 搬移公開來源，解除私人 header／舊專案目錄依賴，建立獨立 Docker 與固定版本下載入口。
3. 重建服務、Matter SDK 與原廠 ABI helper；執行身分／QR、portal、原廠 MIB、完整 commissioning／MCU 模擬、診斷 VM 及 crypto／relay tests。
4. 實作憑證移除、個別化、固定區域燒錄與復原工具；通過部署 synthetic tests 與 flashrom dummy backend。
5. 精確憑證比對找到 scanner 的舊 AP 名稱，改為通用前綴，重建兩份 Release；重新跑實際 MIPS scanner 測試與部署測試。
6. 私人備份／金鑰／快取移出交付目錄，檢查文件連結、source／解壓 rootfs／ZIP、校验 hash 與獨立解壓後建置。

所有原機待驗收項目維持 pending，沒有新增實體燒錄／开機次數。完整結果見 [驗證索引](verification/README.md)。
