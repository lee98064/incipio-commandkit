## v0.2.10-preview — CH341A 復原接續

## v0.2.11-preview（software version 13）

新增 HomeKit／Matter 共用的六種 LED 模式、尋找插座、夜間熄燈，以及 NTP／手機校時備援。LED 由獨立程序統一控制；HomeKit hook 保留原 MCU 擁有者與既有重置修補。操作見[指示燈設定](led-control.md)，測試與原機驗收界線見[驗證報告](2026-10-21_firmware-led-report.md)。

較新程式在啟動時可接續舊 OTA 待確認版本，保留原有健康確認、重試及版本 floor，不清除配對、金鑰或 kWh。host 復原工具加入與 production OTA verifier 相同的已知 Boa kernel wrapper 檢查；kernel 本身仍不寫入。原生／MIPS 各 50 項與指定 wrapper 測試通過。保留 v0.2.9 的五項管理功能，詳見[復原報告](2026-10-20_firmware-programmer-recovery-report.md)。

## v0.2.9-preview — 密碼管理後台與完整重置

兩種協議都保留獨立管理服務，連接 `http://插座IP/` 會轉到後台。訪客可看狀態，登入才顯示管理設定；首次設定建立密碼，停止管理金鑰檔下載。OTA、協議／Wi-Fi 變更、清除配對、kWh 歸零和恢復出廠都需 session 與 CSRF。實體長按會清除 Wi-Fi、管理密碼、兩套配對與 kWh，保留出廠身分／校正；確認事件以外不清除。重置先保存 intent，開機失敗可重試。

首次從無管理密碼的舊版升級需重新進入設定熱點建立密碼及設定 Wi-Fi。HomeKit 模式的自訂即時量測與 kWh 累計仍暫停，可查看及歸零保存值。本版只交付 HomeKit／Matter 共用韌體，不發布尚未遷移密碼初設的內部診斷版。MIPS／SDK／原廠 HAP fixture 測試通過範圍見[管理報告](2026-10-20_firmware-admin-report.md)，原機驗收尚待完成。

以下為歷史版本紀錄，涉及金鑰檔及長按的舊行為已由 v0.2.9 取代。

v0.2.7 修復原廠 BusyBox 缺少 `touch` 導致身分匯入前中止的開機錯誤，移除 `pidof` 依賴，並將 Wi-Fi／DHCP 回連與 Matter 身分初始化拆開。PID1 分別監督金鑰匯入、配對資料產生、網路控制器及診斷服務；初始化有期限與重試，控制器有 40 秒心跳監看。已保存的 Wi-Fi 短暫中斷時重試 DHCP，不自動覆寫帳密切換 AP；管理金鑰及完整配對資料尚未就緒時，管理 API 回覆 503。原廠 BusyBox PID1／DHCP 與 production MIPS 控制器的開機、crash／hang／DHCP 重啟測試通過；實體安裝驗收待完成，見 `docs/2026-10-20_firmware-wifi-recovery-report.md`。

## v0.2.8-preview — 協議選擇

新增 HomeKit／Matter 單選面板、經管理金鑰驗證的切換 API，以及開機時的單一 MCU 擁有者。持久設定讀回成功後才回覆成功，重啟時才交接；切換不清除配對、Wi-Fi、金鑰或已保存的 kWh。HomeKit 沿用原廠服務及每顆自己的原廠身分，暫停自訂即時量測和 kWh 累計。移除原廠 Boa／路由器 GUI，所有後續更新共用 `:18082/`。保留 v0.2.7 Wi-Fi 啟動修復。詳見[操作及限制](protocol-switching.md)。原機 HomeKit／MFi／RF 驗收未完成；未自動發布或寫入裝置。


保留 v0.2.6 的經管理金鑰驗證的 Matter 清除／開啟配對視窗，以及 MCU 長按事件的 Matter 重設。清除保留 Wi-Fi、裝置身分、管理金鑰、OTA 信任來源與累積估算 kWh；完成後開啟 15 分鐘配對視窗。重設重啟 Matter 程式並確認插座輸出 OFF。使用方式及驗證範圍見 `docs/matter-reset.md`。

v0.2.5 的公開 `*-public-first-install.bin` 不含預置裝置金鑰；每顆首次開機自行產生、原子保存並顯示自己的 Matter 碼。設定頁可下載管理金鑰，重開及 OTA 沿用原身分。隨機來源不足時在背景等待，實體按鍵仍可操作。首次安裝仍限定原廠 `10219-1531`／Active Bank 2／雙韌體啟用，原機首次寫入及開機待驗收，詳見 `docs/factory-install.md` 與 `docs/automatic-identity.md`。

保留 v0.2.3 在 `http://插座IP:18082/` 的即時電壓、電流、功率與估算累積 kWh；每 2 秒更新，無效或過期讀值顯示「—」，有效零值保留為 0。累積電量顯示已保存的總量，約每 30 秒更新。頁面下方保留 OTA 更新入口，無需先配對 Apple 家庭即可查看。

量測快照由同一個 MCU owner／Matter 程式在 RAM 發布，網頁不直接開啟串列或寫入 Flash。原有 v0.2.2 的 `wlan0`、啟動順序、舊 MTD 相容性與 MCU 控制退路修復繼續保留。

此系列提供簽章 OTA、區網管理頁、線上版本檢查、Matter OTA Requestor，以及設定／fabrics 持久儲存。

符合條件的原廠機可另外準備網頁首次安裝檔，其餘情況使用原限定區域燒錄流程；後續使用 `.ota` 更新包。`matter-8m-region.bin` 是部分燒錄映像，必須本機個別化，禁止整片覆蓋。`matter-matter-ota.bin` 是提供 Matter OTA Provider 的標準外層容器。

保留原廠 Bank 2、bootloader、MAC、校正、HomeKit／MFi 與出廠資料。自訂 journal 使用 Bank 1 rootfs 尾端預留 128 KiB；遇到未辨識的既有資料會拒絕初始化。

本版屬預覽版本。離線、模擬 Flash 與 VM 測試結果不能代替原機斷電、Flash driver、RF、Matter 控制及復原驗收。原廠槽只提供映像校驗失敗的備援，沒有宣稱完整自動版本回退。應用失敗時可使用維修模式安裝較新修正版。

Matter 版加入標準 ElectricalPowerMeasurement，提供電壓、RMS 電流、功率與訂閱通知。無有效 MCU 資料時為 null。累積 kWh 透過標準 ElectricalEnergyMeasurement 提供，標示為估算；實機校正及 Apple／其他家庭平台 UI 仍待驗收，詳見電力量測文件。
