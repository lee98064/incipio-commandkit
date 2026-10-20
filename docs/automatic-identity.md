# 公開韌體的自動身分

v0.2.5／software_version 7 的公開首次安裝包不含裝置配對金鑰、診斷金鑰或既有配對碼。同一份 BIN 可安裝到符合條件的插座，各台第一次開機自行產生並保存身分。此功能沒有改變 SDK 範例 attestation 的性質，不等同產品認證或生產 DAC 憑證。

## 第一次設定

1. 依[原廠網頁安裝指南](factory-install.md)刷入公開首次安裝檔。
2. 等待插座收集隨機資料、保存身分後，連接 `CommandKit-Setup-…`。等待期間實體按鍵保持可用。
3. 開啟 `http://192.168.1.254/`，保存 Matter QR／設定碼，建立管理密碼，再完成 Wi-Fi 設定；v0.2.9 不需管理金鑰檔。
4. 重開機與標準 OTA 都沿用原金鑰、設定碼及配對。舊版透過 OTA 升級保留原身分；首次升級至 v0.2.9 密碼版例外，需要建立管理密碼並重新輸入 Wi-Fi。

v0.2.9 的管理方式改為[管理密碼與後台](admin-backend.md)，舊管理金鑰匯出已停用。裝置內仍保留自己的診斷身分，供既有唯讀診斷相容用途；一般使用者不用下載或保管金鑰檔。管理密碼與 Matter 裝置身分分開保存，沒有通用預設密碼。


## 隨機來源及提交

初始化器從 `/dev/random` 累積讀滿 32 bytes，再以 HMAC-SHA256 與不同用途字串衍生兩組金鑰。production 必須使用 major 1／minor 8 的 character device，拒絕 symlink、一般檔案和測試種子環境變數。MAC 只參與後續 Matter 資料推導，不用作秘密種子。

此作法依賴原廠舊內核的 entropy accounting。Linux 2.6.30 的 `/dev/random` 限制輸出為內核估算可用的 entropy，`/dev/urandom` 沒有相同限制，見[該版本原始碼](https://github.com/torvalds/linux/blob/v2.6.30/drivers/char/random.c)。這不是對原廠硬體亂數品質的獨立認證；原機收集時間仍待驗收。資料不足時在背景等待，不退回固定、MAC、時間種子或過早的 urandom。

部分已讀資料只保留在初始化行程的 RAM。等待不阻塞原廠網路初始化或 MCU worker；設定頁及診斷服務等身分提交完成才啟動。初始化仍進行時，原有 60 秒身分等待限制不會讓 MCU worker 退出。

## 斷電與損壞

公開安裝容器在第二個 journal slot 放入非秘密的 `CKAUTOINIT-V1` 記號，表示這次首次安裝明確初始化了該區；它不是金鑰。沒有此記號時，不會清除未知／損壞資料來建立新身分。

配對金鑰、診斷金鑰、OTA 公鑰及自動初始化標記一起提交到第一個 snapshot。完成 checksum、readback 與 commit，再撤銷第二槽的初始化記號並核對，才輸出 0600 RAM 金鑰檔、產生 QR 及啟動設定頁。

- commit 前中斷：尚未對外提供身分，下次可重新初始化。
- commit 後、撤銷記號前中斷：下次沿用已提交的同一組金鑰。
- 身分可用之後：初始化權限已撤銷；journal 損壞會拒絕網路身分啟動，保留 MCU 控制，不會悄悄換碼。

雙 snapshot、配對與 kWh 保存方式繼續沿用。第一次配網成功才保存 `identity/onboarded`；之前若斷電，重開仍進設定模式。

## 公開與更新

可公開 `*-public-first-install.bin`、簽章 `.ota` 和 OTA 公鑰；簽章私鑰由維護者保存，不放入映像。已使用的 Matter 插座請用較新的 `.ota` 更新，因為重刷首次安裝檔會清除 journal 中的配對與累積電量。

驗證見[自動身分結果](../verification/automatic-identity-results.json)、[公開包 OTA](../verification/public-factory-ota-results.json)及[原廠 Boa／bootloader](../verification/public-factory-boa-results.json)。離線／VM 結果不能代替原機首次寫入、亂數品質、RF 與斷電驗收。
