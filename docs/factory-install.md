# 從原廠網頁首次安裝 Matter

本流程限定 CMNDKT-004、原廠 `10219-1531`、Active Bank **2**，且 **Enable Dual Firmware 已勾選**。v0.2.5 的 `*-public-first-install.bin` 不含預置裝置金鑰，同一份檔案可供符合條件的插座使用。每顆首次開機自行產生並保存身分；v0.2.4 私人安裝檔仍僅供原指定插座使用。

已通過原廠 Boa／bootloader MIPS 離線執行與後續 OTA fixture 驗證；**尚未在另一顆原廠插座完成實際首次寫入、driver／重開機驗收**。保留第二槽不能保證應用當機時自動回退。

## 上傳檔案

1. 插座裝回外殼、沒有燒錄器／UART／外接線，先不接負載。手機／電腦與插座在同一網路。
2. 開啟原廠的 `/upload.htm` 更新頁，再核對上述版本、Active Bank 2 和勾選狀態。保留雙韌體設定。
3. 在頁面上方 **Select File → Upload** 選擇公開的 `*-public-first-install.bin`。實際 multipart 上傳端點是 `/boafrm/formUpload`，欄位為 `binary`。
4. 等頁面完成倒數／重開；完成寫入與重新連線前保持供電。不要另外按下「Reboot Form Backup Bank Now」。

`/boafrm/formDualFirmware` 處理雙槽設定／切換，沒有接收韌體檔案的分支。`matter.ota`、`matter-matter-ota.bin`、`matter-8m-region.bin` 都不能代替本次首次安裝檔。

## 開機後設定與更新

公開版首次開機會等待內核提供足夠隨機資料，再原子保存整組身分。等待期間 MCU 保持按鍵控制，設定熱點可能延後出現；原機收集時間尚待驗收。之後正常重開不會重新產生身分。

首次初始化完成後會進入 `CommandKit-Setup-…`，即使原廠曾存過 Wi-Fi。連接後開啟 `http://192.168.1.254/`，先保存新的 Matter QR／設定碼，並建立管理密碼（v0.2.9 起不需管理金鑰檔），再完成 Wi-Fi 設定。原廠 HomeKit 碼不適用。

連上家中網路後，從路由器查詢 IP，開啟 `http://插座IP/` 查看狀態，再以管理密碼登入變更 Wi-Fi、重設配對或更新。需要完整重新設定時，實體長按恢復出廠會同時清除密碼、Wi-Fi、配對及 kWh，見[管理後台](admin-backend.md)。

後續請到 `:18082/` 上傳比目前版本更新的簽章 `matter.ota`。線上來源目前若只有舊版，顯示沒有新版本屬正常；不會自動降版。首次安裝檔會初始化持久資料區，**不要拿來更新已使用中的 Matter 插座**。

## 寫入與保留範圍

| Flash 範圍（結尾不含） | 行為 |
|---|---|
| `[0x000000,0x010000)` | 保留 bootloader、MIB、MAC／無線設定 |
| `[0x010000,0x130000)` | 寫入已驗證的 10219 kernel，更新外層長度、checksum 與開機標記 |
| `[0x130000,0x3C0000)` | 寫入公開 Matter rootfs |
| `[0x3C0000,0x3E0000)` | 首次初始化 journal 與非秘密的初始化記號，供身分、配對、OTA 與 kWh 使用 |
| `[0x3E0000,0x800000)` | 保留原廠資料、完整 Bank 2 與尾端 factory／校正區 |

kernel 的原載入器與壓縮資料保持一致，解壓結果逐 byte 相同。首次安裝採完整 kernel 範圍寫入，使舊版 kernel 的殘留 padding 不影響後續平台核對。

## 產生另一台的安裝檔

先建置 v0.2.5 以上來源。`--factory-template` 使用已驗證的公開首次安裝 BIN，只取固定 hash 的 kernel，不複製模板 rootfs 或任何裝置設定；不需要私人 Flash 備份。維護者也可改用 `--reference` 提供符合 `third_party/platform.json` 的本機參考映像。工具不會讀取或寫入目標插座，目標版本與槽位仍須另行核對。

```bash
python3 tools/factory_image.py \
  --public \
  --factory-template artifacts/previous-public-first-install.bin \
  --release artifacts/releases/v0.2.5-preview/matter-8m-region.bin \
  --manifest artifacts/releases/v0.2.5-preview/matter-8m-region.json \
  --output artifacts/commandkit-public-first-install.bin
```

公開模式不需要 profile。若使用私人模式，將 `--public` 改成 `--profile private/new-outlet-factory`；私人輸出仍含單台金鑰，不能當公開檔。簽章私鑰在兩種模式都不會包含於安裝檔。

自動產生與保存細節見[自動身分說明](automatic-identity.md)；原廠格式分析見[首次安裝報告](2026-10-19_firmware-boa-first-install-report.md)。
