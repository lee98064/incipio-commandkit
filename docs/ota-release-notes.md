v0.2.3 在原有 `http://插座IP:18082/` 管理頁新增即時電壓、電流、功率與估算累積 kWh；每 2 秒更新，無效或過期讀值顯示「—」，有效零值保留為 0。累積電量顯示已保存的總量，約每 30 秒更新。頁面下方保留 OTA 更新入口，無需先配對 Apple 家庭即可查看。

量測快照由同一個 MCU owner／Matter 程式在 RAM 發布，網頁不直接開啟串列或寫入 Flash。原有 v0.2.2 的 `wlan0`、啟動順序、舊 MTD 相容性與 MCU 控制退路修復繼續保留。

此系列提供簽章 OTA、區網管理頁、線上版本檢查、Matter OTA Requestor，以及設定／fabrics 持久儲存。

首次安裝仍需以原燒錄工具將支援 OTA 的韌體寫入 Bank 1；後續使用 `.ota` 更新包。`matter-8m-region.bin` 是部分燒錄映像，必須本機個別化，禁止整片覆蓋。`matter-matter-ota.bin` 是提供 Matter OTA Provider 的標準外層容器。

保留原廠 Bank 2、bootloader、MAC、校正、HomeKit／MFi 與出廠資料。自訂 journal 使用 Bank 1 rootfs 尾端預留 128 KiB；遇到未辨識的既有資料會拒絕初始化。

本版屬預覽版本。離線、模擬 Flash 與 VM 測試結果不能代替原機斷電、Flash driver、RF、Matter 控制及復原驗收。原廠槽只提供映像校驗失敗的備援，沒有宣稱完整自動版本回退。應用失敗時可使用維修模式安裝較新修正版。

Matter 版加入標準 ElectricalPowerMeasurement，提供電壓、RMS 電流、功率與訂閱通知。無有效 MCU 資料時為 null。累積 kWh 透過標準 ElectricalEnergyMeasurement 提供，標示為估算；實機校正及 Apple／其他家庭平台 UI 仍待驗收，詳見電力量測文件。
