# 安裝更新與發布新版

v0.2.3-preview 在管理頁新增即時 V／A／W／估算累積 kWh，並保留區網網頁更新、線上更新索引、Ed25519 簽章與 Matter OTA Requestor。v0.2.2 的舊 MTD 同步、`wlan0` 設定介面及身分產生的啟動順序修復繼續保留。Matter fabrics、平台設定及裝置身分存入 Flash journal。**第一次仍須以 CH341A 安裝支援 OTA 的版本；v0.1.0-preview 沒有永久更新入口。**原機斷電、RF 及家庭平台完整驗收尚待完成；修復檢查見[修復驗證](../verification/recovery-results.json)，電量檢查見 [v0.2.1 驗證](../verification/energy-results.json)。

## 在插座網頁更新

1. 首次依 [燒錄說明](flashing.md) 安裝新的 `matter-8m-region.bin` 或 `exec-test-8m-region.bin`，沿用同一台插座的 profile。
2. 配網後，從路由器取得插座 IPv4 位址，在瀏覽器開啟 `http://插座IP:18082/`；即時監測與更新共用此頁。
3. 按「檢查新版本」及「下載並更新」，或選擇已下載的 `.ota`，按「驗證並更新」。
4. 等候簽章核對、安裝、重開及健康確認。保持供電；更新暫停 Matter 控制，現有啟動邏輯會要求 MCU 確認 OFF。

相同或較舊版本、不同韌體種類、錯誤機型、平台 hash 不符、截斷及簽章錯誤都會拒絕。不能把 8 MiB BIN 當成 `.ota`，也不能透過 OTA 在 Matter 與診斷版之間切換。

初次安裝時，journal 必須為全 `0xFF` 或已辨識的 `CKSTORE1`。準備工具會拒絕未知資料，不自動清除。首個版本的 RAM-only fabrics 無法從 Flash 備份還原，因此首次換到此版仍需重新配對；此版建立的 fabrics 才會持久保留。

## 使用電腦更新

若瀏覽器無法下載線上檔案，Python 用戶端會代為透過 HTTPS 下載並先驗證簽章：

```bash
python3 -m pip install -r tools/requirements.txt
read -r OUTLET_IP
python3 tools/update.py "$OUTLET_IP" --latest
```

`read` 時輸入插座 IP 或可解析的 `.local` 名稱。使用本機檔案、只檢查更新包：

```bash
python3 tools/update.py "$OUTLET_IP" \
  --package artifacts/releases/v0.2.1-preview/matter.ota --check-only
```

安裝 v0.2.3-preview（`software_version=5`）後，後續更新的 `software_version` 必須大於 5 才能安裝。`--check-only` 不傳送更新，也不重新啟動。

## 更新包與保留範圍

| 附件 | 用途 |
|---|---|
| `matter-8m-region.bin`／`.json` | Matter 版首次個別化及 CH341A 限定區域燒錄 |
| `exec-test-8m-region.bin`／`.json` | 診斷版首次安裝 |
| `matter.ota`／`exec-test.ota` | 管理頁及 Python 用戶端安裝；不含每台裝置的憑證 |
| `matter-matter-ota.bin` | Matter 標準外層容器，內含同一份簽章 `.ota` |
| `index.json`／`SHA256SUMS` | 線上索引及附件校驗 |

8 MiB BIN 仍是部分燒錄容器，保留區為 `0xFF`；不能全片覆蓋。OTA payload 固定為 `[0x130000,0x3C0000)`。運作中的持久儲存另使用 `[0x3C0000,0x3E0000)` 的 128 KiB；bootloader、kernel、原廠 HomeKit 資料、Bank 2、MAC、校正及出廠區域不寫入。

更新器檢查目前 bank、`/proc/mtd`、MTD 型別／容量／erase size，並核對 kernel 和 Bank 2 的 hash。原廠節點使用連續 minor，標準 Linux MTD 的 odd minor 則是唯讀別名；程式會核對幾何資訊，必要時在 RAM 建立 0600 的標準節點，無法確認時停止。

## 設定如何保留

journal 為兩個 64 KiB slots；各 slot 前 60 KiB 為設定 snapshot，最後 4 KiB 是獨立電量 append page。設定 snapshot 使用不同序號、SHA-256 與最後寫入的 commit word。只擦除新 snapshot 實際用到的 4 KiB sectors；相同值不寫入。每次寫入都讀回核對，成功後才回覆 Matter 的儲存請求。

| key 前綴 | 資料 |
|---|---|
| `identity/` | 裝置身分、診斷金鑰、更新信任公鑰、診斷版 AP 憑證 |
| `matter/` | fabrics、ACL、金鑰、session resumption、持久屬性 |
| `platform/` | SDK factory/config/counters/KVS 的 INI 內容，單筆上限 16 KiB |
| `ota/` | 已確認版本、待確認版本及啟動嘗試次數 |

設定 payload 上限 61,376 bytes；電量另以 128 筆循環紀錄保存在兩個末端 pages，詳見[電量保存](measurements.md)。Wi-Fi 原廠 MIB 沿用既有 helper；不用公開更新包重建 MAC／校正或裝置金鑰。新 profile 可從已辨識 journal 恢復相同憑證；已有 profile 與 journal 不符會停止，避免默默換碼。既有 profile 缺少檔案仍須先復原，不會隨機補上新金鑰。

SDK 原本寫入 `/tmp/*.ini` 的平台設定也會同步保存至 journal。此修改保留 upstream 授權，來源見 `src/sdk-overrides/CHIPLinuxStorage.cpp` 與 [第三方說明](../third_party/README.md)。

## 安裝與復原流程

區網內可直接上傳及安裝，不需要 diag.key、HMAC、nonce 或額外操作授權。上傳完成後才驗證整包；管理頁及電腦工具會附上所選 package 的 checksum，避免套用不同的暫存檔。BusyBox PID 1 的固定 restart action 執行 RAM 中的靜態更新器；它停止其他使用者行程、切換 RAM root 並卸離舊 rootfs，才開寫。先使 rootfs magic 無效，寫入 body，最後補回第一個 sector，讀回 hash 與 journal 後重開。

Matter 必須連續 30 秒取得新鮮 MCU 狀態才確認新版本；診斷版確認網路及兩個服務已啟動。應用未通過健康檢查時，獨立管理頁保留維修入口；連續三次未確認啟動後不再啟動 Matter。可以安裝較新的修正版。

**這不是完整 A/B 版本回退。**rootfs 校驗損壞時，既有 bootloader 可嘗試原廠 Bank 2；回到原廠後沒有此 OTA 服務，需要原有復原／燒錄流程。kernel、早期 init 或兩份 journal 同時損壞也不屬於應用維修頁能處理的範圍。原機斷電及 driver 行為必須另行驗收。

## 從來源產生新版

依 [建置說明](build.md) 準備 Docker／固定依賴／工具鏈。建置可使用已固定 SHA-256 的 v0.1.0-preview 公開去識別化 rootfs，不需要把裝置備份放入 CI。簽章私鑰不掛入編譯容器。

維護者的私鑰保存在自己的 `private/ota-signing.key`，公鑰是 `third_party/ota-signing.pub`。發布既有裝置更新時必須沿用原金鑰；不要重新執行 keygen。fork 的維護者須自行產生金鑰，替換其來源公鑰，並首次安裝自己的信任來源。

1. 修改 `version.json`，增加 `software_version` 並更新版本名稱；例如數值 6、名稱 `0.3.0-preview`。
2. 執行完整建置；工具也會產生 Matter 執行檔的版本紀錄，拒絕混用舊執行檔或測試 backend：

```bash
python3 tools/release.py --private private/ota-signing.key \
  --output artifacts/releases/v0.3.0-preview
```

3. 核對附件及測試後，將 tag 設為 `v` 加版本名稱。GitHub workflow 的 tag 必須與 `version.json` 一致。

`release.py` 的 `--skip-compile` 僅供使用剛完成的本機建置；`--sdk` 可指定相同固定 commit 的 SDK 快取。一般發布請使用完整建置。

## GitHub 發布設定

初次設定由 `tools/setup_github_updates.py --private private/ota-signing.key` 完成：私鑰透過 stdin 交給 GitHub CLI 加密成 repository secret `OTA_SIGNING_KEY_HEX`，不放入 argv、日誌、Git 或 Release。GitHub Pages 使用 workflow 模式。既有 signing secret 不會被默默輪替。

`github-pages` environment 也必須允許 `v*` 類型為 tag 的部署規則，因為發布 Release 時 workflow 的 ref 是版本 tag。修復既有 Pages 設定可執行 `python3 tools/setup_github_updates.py --pages-only`；它不讀取私鑰或修改 signing secret，也不取代既有審核與保護規則。

- PR 執行 native C／HTTP／儲存測試與瀏覽器 SHA 對照。
- 發布 tag 後，再建置工具鏈、測試 MIPS 更新器與 Linux PID 1 路徑、產生簽章附件並建立 **草稿 pre-release**。
- 人工發布 Release 後，另一個 workflow 驗證簽章，把兩種 `.ota` 與索引部署至 Pages。較舊版本不能覆蓋較新的索引。

預設索引為 `https://lee98064.github.io/incipio-commandkit/updates/index.json`。尚未發布更新時，網頁會說明來源未就緒，手動上傳仍可使用。首次設定 Pages 不代表附件已經發布。

首次部署時，若發布 workflow 還沒有合併到預設分支，Release 事件與手動 dispatch 可能無法啟動。可以在已核對的 workflow commit 建立 `updates-v版本` tag，例如 `updates-v0.2.3-preview`，只發布對應的既有公開 Release，不重新編譯或修改韌體。`github-pages` environment 必須允許該部署 tag；首次部署可暫時加入精確 tag 規則，成功後移除。草稿 Release 不會進入線上索引。部署完成後應確認索引與兩個 `.ota` 均回應 200、提供跨來源讀取標頭，並從插座網頁按「檢查新版本」驗收。

## Matter OTA

Root endpoint 宣告 OTA Requestor 及 Provider client；使用官方 DefaultOTARequestor、BDXDownloader 與此硬體的 image processor。收到標準 Matter 映像後，檢查內外版本一致，將內層 `.ota` 交給同一更新器驗簽；不執行 Linux 範例中的任意下載程式。版本確認等到裝置健康檢查通過後才通知 Provider。

Provider 使用 `matter-matter-ota.bin`。可以依 [SDK Linux Provider 說明](https://github.com/project-chip/connectedhomeip/tree/3bcdd56ba54fb88b2afb4bfef575014671df7aa7/examples/ota-provider-app/linux)建立 Provider，讓 Provider 與插座在同一 fabric，再送出 `AnnounceOTAProvider`。此專案仍使用開發 VID/PID／attestation，沒有登錄正式 DCL 更新；不能因此宣稱 Apple 家庭或 HA 已能自動分發這個自訂版本。

目前已驗證 Requestor cluster 可由加密 Matter session 讀取、fabrics／ACL 在清除 RAM 設定並重啟後仍可用。原機 Provider→BDX→安裝→重開的完整流程，以及 Apple／HA 的更新 UI，列為待驗收項目。

## 更新 API

TCP 18082，只綁定 `br0`，Host 必須為該連線的 IPv4 與 port；有 Origin 時必須同源。下載、上傳、套用皆有固定範圍，沒有任意 shell 或路徑入口。

| API | 行為 |
|---|---|
| `GET /` | 自包含管理頁，不載入第三方 JavaScript |
| `GET /status` | 版本、種類、維修及健康狀態，不含金鑰 |
| `POST /upload` | 接收完整 `.ota`，驗證並暫存 RAM，不寫 rootfs |
| `POST /apply` | 排程 PID 1 安裝，可附所選 package hash 核對 |

不需要更新憑證。`X-CK-SHA256` 是可選的傳輸 checksum；管理頁與電腦工具自動附上，上傳時對應 body，apply 時對應先前核對的完整 package。未提供 checksum 的區網用戶端仍可直接更新，但更新包簽章、版本、機型、平台與長度檢查不會省略。服務另檢查來源 IP、Host、Origin、重複 header 及固定長度。原有診斷和 Wi-Fi 設定服務仍使用其原認證。

`.ota` 的前 256 bytes 為 big-endian header：magic 0、format 8、model 12、variant 16、版本 20、payload 長度 24、保留 flags 28、payload SHA-256 32、kernel SHA-256 64、Bank 2 SHA-256 96、公鑰 128、NUL 結尾版本名稱 160、Ed25519 signature 192。簽章涵蓋前 192 bytes，payload hash 因而受到簽章保護；後面接固定 2,686,976-byte rootfs。
