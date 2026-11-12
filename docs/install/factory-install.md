# 從原廠網頁首次安裝（不必拆機）

符合條件的原廠插座，可以直接在原廠的韌體更新頁上傳「首次安裝檔」，不必拆機、不必使用燒錄器。此方式已在實體原廠插座上實測成功。

首次安裝檔是公開共用版本，不含任何裝置金鑰；每台插座第一次開機時自行產生並保存自己的身分與 Matter 設定碼。

## 適用條件

以下條件必須全部符合，否則請改用[燒錄器安裝](flashing.md)：

| 項目 | 需求 |
|---|---|
| 型號 | CMNDKT-004 |
| 原廠韌體版本 | `10219-1531` |
| 目前使用的韌體槽 | Active Bank **2** |
| 雙韌體設定 | **Enable Dual Firmware** 已勾選 |

以上資訊都顯示在原廠更新頁 `http://插座IP/upload.htm`。

## 下載

從 [v0.3.0-preview Release](https://github.com/lee98064/incipio-commandkit/releases/tag/v0.3.0-preview) 下載 `commandkit-matter-v0.3.0-public-first-install.bin`，並核對 SHA-256：

```text
7497ddbfecdf486726b269c6943121939154814e6c4f274fd25b0c5ba76a35ab  commandkit-matter-v0.3.0-public-first-install.bin
```

`matter.ota`、`matter-matter-ota.bin` 與 `matter-8m-region.bin` 都**不能**用在原廠更新頁。

## 安裝步驟

1. 插座裝好外殼，接上電源，不要接負載；手機或電腦與插座連在同一個網路。
2. 在路由器的裝置清單找到插座 IP，以瀏覽器開啟 `http://插座IP/upload.htm`，核對上述四項條件；保留雙韌體設定，不要變更。
3. 在頁面上方按 **Select File**，選擇 `commandkit-matter-v0.3.0-public-first-install.bin`，再按 **Upload**。
4. 等待頁面倒數與重新開機，期間**保持供電**。不要按「Reboot Form Backup Bank Now」。
5. 第一次開機會先收集足夠的隨機資料再產生身分，可能比平常久；這段時間實體按鍵仍可操作。
6. 出現 `CommandKit-Setup-XXXXXX` 熱點後，依[使用說明](../guide/usage.md)完成首次設定：選擇 Wi-Fi、建立管理密碼、保存 Matter QR Code。插座原廠的 HomeKit 碼不適用於 Matter。
7. 之後的更新都在管理後台 `http://插座IP:18082/` 進行，不需再使用原廠更新頁。

技術細節：上傳端點是 `/boafrm/formUpload`（欄位 `binary`）；`/boafrm/formDualFirmware` 只處理雙槽設定與切換，不接收韌體檔案。

## 注意事項

- 首次安裝檔會初始化持久資料區。**不要拿來更新已安裝本韌體的插座**，否則會清除配對、管理密碼與累積用電；已安裝的插座請用 `matter.ota`。
- 第二槽的原廠韌體會保留，但應用程式啟動失敗時，bootloader 不保證自動切回第二槽。無法開機時需以[燒錄器復原](flashing.md#復原先前-rootfs)。
- v0.3.0 安裝檔沿用已實測版本的 kernel 與上傳格式，並已通過原廠 Boa／bootloader 模擬與首次匯入後的簽章 OTA 測試，見[驗證紀錄](../../verification/public-factory-v0.3.0-results.json)。

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

先建置 v0.2.5 以上來源（以下以 v0.3.0-preview 為例）。`--factory-template` 使用已驗證的公開首次安裝 BIN，只取固定 hash 的 kernel，不複製模板 rootfs 或任何裝置設定；不需要私人 Flash 備份。維護者也可改用 `--reference` 提供符合 `third_party/platform.json` 的本機參考映像。工具不會讀取或寫入目標插座，目標版本與槽位仍須另行核對。

```bash
python3 tools/factory_image.py \
  --public \
  --factory-template artifacts/previous-public-first-install.bin \
  --release artifacts/releases/v0.3.0-preview/matter-8m-region.bin \
  --manifest artifacts/releases/v0.3.0-preview/matter-8m-region.json \
  --output artifacts/commandkit-public-first-install.bin
```

公開模式不需要 profile。若使用私人模式，將 `--public` 改成 `--profile private/new-outlet-factory`；私人輸出仍含單台金鑰，不能當公開檔。簽章私鑰在兩種模式都不會包含於安裝檔。

自動產生與保存細節見[自動身分說明](../development/automatic-identity.md)；原廠格式分析見[首次安裝報告](../reports/2026-10-19_firmware-boa-first-install-report.md)。
