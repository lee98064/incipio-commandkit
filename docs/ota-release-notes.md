此版新增簽章 OTA、區網管理頁、線上版本檢查、Matter OTA Requestor，以及設定／fabrics 持久儲存。

首次安裝仍需以原燒錄工具將支援 OTA 的韌體寫入 Bank 1；後續使用 `.ota` 更新包。`matter-8m-region.bin` 是部分燒錄映像，必須本機個別化，禁止整片覆蓋。`matter-matter-ota.bin` 是提供 Matter OTA Provider 的標準外層容器。

保留原廠 Bank 2、bootloader、MAC、校正、HomeKit／MFi 與出廠資料。自訂 journal 使用 Bank 1 rootfs 尾端預留 128 KiB；遇到未辨識的既有資料會拒絕初始化。

本版屬預覽版本。離線、模擬 Flash 與 VM 測試結果不能代替原機斷電、Flash driver、RF、Matter 控制及復原驗收。原廠槽只提供映像校驗失敗的備援，沒有宣稱完整自動版本回退。應用失敗時可使用維修模式安裝較新修正版。

Matter 版加入標準 ElectricalPowerMeasurement，提供電壓、RMS 電流、功率與訂閱通知。無有效 MCU 資料時為 null。累積 kWh、實機校正及 Apple／其他家庭平台 UI 未宣稱已驗收，詳見電力量測文件。
