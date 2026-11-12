# 選擇 HomeKit 或 Matter

v0.2.9-preview（software version 11）在兩種模式都保留獨立管理服務。首次密碼設定、管理登入及完整重置方式見[管理後台](admin-backend.md)。原廠 HomeKit 的 MFi、RF 及 iPhone 配對尚待實機驗收。

## 切換協議

1. 開啟 `http://插座IP/` 或 `http://插座IP:18082/`，按「管理員登入」。
2. 到「管理設定 → 智慧家庭協議」，選擇 Matter 或 HomeKit，按「儲存並重新啟動」。
3. 保持供電。重啟後重新登入同一網址；DHCP 更換位址時，使用路由器顯示的新 IP。

每次只啟動一套協議。切換保留管理密碼、Wi-Fi、各自配對、Matter 身分與已保存 kWh。HomeKit 使用這顆插座自己的原廠標籤配對碼與 MFi 資料；Matter 使用裝置專屬碼。另一協議停用期間，家庭 App 可能顯示裝置沒有回應。

管理服務、配網及 DHCP 不依賴協議服務，HomeKit 模式也能回到後台選擇 Matter。HomeKit 啟動失敗不自動啟動 Matter，避免兩個背景程序搶用 MCU；偏好或 journal 無法驗證時，進入維修／實體控制模式。

## 量測、重置與更新

Matter 模式提供網頁 V／A／W／kWh 和標準 Matter 電力量測。HomeKit 模式使用原廠程式獨占 MCU，自訂即時量測及 kWh 累計暫停，顯示保存值；切回 Matter 後續計，不回補中間電量。不能因此保證 Apple「家庭」會顯示電壓等資訊。

兩種模式均可登入後清除目前協議配對或將 kWh 歸零。**實體長按是完整恢復出廠，會清除 Wi-Fi、密碼、兩套配對與 kWh**，保留出廠身分及校正。這取代 v0.2.8 的 HomeKit 長按只重啟行為。

後續更新共用簽章 `matter.ota` 與後台；HomeKit 模式沒有 Matter OTA Requestor，使用網頁更新。原廠 Boa／路由器網頁已移除。OTA、Wi-Fi 重連、重置與協議切換互斥；同一協議重複保存不重新啟動或擦寫 Flash。

已離線的舊版無法自行取得這份 OTA。CH341A 復原仍需當次斷電及 3.3 V 接線確認、兩次一致完整讀取，再只更新 Bank 1 rootfs `[0x130000,0x3C0000)`。公開 8 MiB 映像不能全片寫入；已有 journal 的插座不可使用會初始化 journal 的首次安裝包。
