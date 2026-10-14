# Incipio CommandKit 韌體研究與預覽韌體

自有 CMNDKT-004／RTL8196E 智慧插座的逆向紀錄，以及保留原廠 kernel／驅動的 Matter 和執行檔診斷預覽版。說明以繁體中文為主。

公開來源位於 [GitHub repository](https://github.com/lee98064/incipio-commandkit)；已發布的 v0.1 歷史去識別化 BIN、JSON 與校驗碼見 [v0.1.0-preview Release](https://github.com/lee98064/incipio-commandkit/releases/tag/v0.1.0-preview)。

**Release 的 8 MiB BIN 是位址對齊的「部分燒錄映像」，不是整片還原映像。**只有 Bank 1 rootfs 有內容；其餘區域為 `0xFF`。請用本專案工具個別化後限定區域寫入，保留每台插座自己的 MAC、MIB、校正、HomeKit／MFi 與 Bank 2。對空白晶片直接刷入公開 BIN 無法建立完整可開機裝置。

市電插座拆機／燒錄時必須斷開市電，確認 3.3 V 並移除其他供電。完成後移除燒錄器及所有外接線，再裝回外殼上電。

## 找到需要的內容

| 內容 | 入口 |
|---|---|
| 網頁／Matter OTA 與發布新版 | [更新說明](docs/updates.md) |
| 標準電壓、RMS 電流、功率及累積 kWh | [Matter 電力量測](docs/measurements.md) |
| 使用、配網、Matter、診斷 | [使用說明](docs/usage.md) |
| 備份、限定區域燒錄、讀回、復原 | [燒錄說明](docs/flashing.md) |
| 從自己的原廠備份重建 | [建置說明](docs/build.md) |
| 裝置資料如何排除於公開包 | [去識別化說明](docs/privacy.md) |
| 硬體、兩版原廠程式與 bootloader | [逆向資料索引](reverse/README.md) |
| 韌體修改架構、證據及限制 | [整合技術報告](docs/technical-report.md) |
| 測試與發布交付狀態 | [驗證索引](verification/README.md) |
| 上傳 GitHub 與建立 Release | [發布說明](docs/publishing.md) |

目前來源為 `v0.2.1-preview` 候選版；v0.1 Release 尚無永久 OTA，第一次升級仍須限定區域燒錄。

## 兩種韌體

| 版本 | 功能 | 限制 |
|---|---|---|
| `matter` | 開放設定熱點、Wi-Fi 掃描、裝置專屬 Matter 碼／QR、On/Off/Toggle、MCU 確認、Identify、診斷 | v0.2 已加入持久 fabrics、簽章 OTA、標準電力量測；使用開發測試 attestation；原機驗收待完成 |
| `exec-test` | 依序執行三支附件 MIPS 程式、逾時／資源／hash 限制、認證診斷下載 | 不啟動 Matter／HomeKit；不提供軟體繼電器控制；附件只有執行檔，沒有其原始碼 |

這兩份公開重打包版本尚未實體燒錄與原機驗收。歷史版本的原機平台／協議測試與本次 VM 測試分開記錄；不可用模擬機結果宣稱原機 RF、家庭 app、負載切換或長期穩定性通過。

## 目錄

```text
firmware/       修改來源、啟動腳本、配網頁面與測試
reverse/        反編譯偽碼、逐函式組語、符號、人工重建與分析工具
tools/          建置、依賴準備、部署、診斷與公開包驗證
docs/           使用、燒錄、建置、隱私、技術及發布文件
third_party/    固定版本、來源與既有授權
verification/   可公開的驗證摘要與檔案雜湊
```

原廠反編譯 `.c` 不是原廠原始碼，也不是可直接編譯的完整韌體。`firmware/` 是我們修改／新增的可建置部分；原廠 kernel、驅動與 helper libraries 使用裝置備份中的 bytes。

自寫碼本次不新增授權。原廠內容與第三方元件保留各自來源和既有權利，見 [來源與授權說明](third_party/README.md)。
