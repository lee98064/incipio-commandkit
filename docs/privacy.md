# 公開包去識別化

## 公開映像

公開 BIN 大小為 8 MiB，只有 `[0x130000,0x3C0000)` 是 rootfs。其餘 bytes 是 `0xFF`，包含低位 bootloader／硬體設定、default／current MIB、journal、HomeKit、Bank 2、factory／校正／production identity。這些區域不是公共部署時的寫入內容。

rootfs 中的 `matter-diag.key`、`matter-device.key`、設定 AP 憑證、既有 QR／manual code 均移除。v0.2.5 公開首次安裝包會在各台第一次開機時產生並保存金鑰，見[自動身分](automatic-identity.md)。私人 profile 個別化方式繼續支援；沒有共享配對碼 fallback。缺少有效身分或隨機資料時不會啟動 Matter 配對。

部署後的完整目標映像含使用者自己的保留資料及新金鑰，必須留在私人目錄。部分燒錄不是把 MAC 改成另一個通用 MAC，而是保留該台原值。

## 文件、來源與研究資料

公開資料保存平台名稱、Flash offset、函式位址、協議、第三方版本及一般測試 fixture。個人路徑、歷史裝置 hostname、真實網路識別與密碼／配對內容移除；使用 `02:…`／`52:54:…` 等明確的模擬 MAC 僅用於 VM 測試。

反編譯輸出中被去識別化的字串屬文字整理；原函式位址與組語分析仍可追溯。公開文字的 SHA-256 重新計算，不能當成未整理原檔案的 hash。原始證據與裝置完整讀取只留在研究工作區。

不公開完整 Flash 備份、Ghidra 資料庫、rootfs 原始 pseudo data、實機串列／LAN 診斷、原配對記錄及私人壓縮包。分析需要原始 bytes 時，由讀者自己的備份離線重現。

## 本機私人資料

`.gitignore` 排除 private、backups、sessions、deps、toolchains、artifacts、evidence、金鑰與 pseudo／cpio／sqsh。交付時的 ZIP 和 source manifest 另使用發布檔案清單排除上述項目；不只依靠 `.gitignore`。

`check_public.py` 檢查公開容器格式、checksum、保留區填充值、解壓後憑證檔案缺席、公開檔案列表及常見可識別字串。發布者另外對原私人憑證做精確 bytes 比對；私人值不寫入公開掃描設定或報告。

之後新增截圖、診斷或測試證據仍需單獨檢查。公開包掃描通過只對本次已記錄 hash 的檔案成立。

## v0.2.9 管理密碼

公開 rootfs 不含 `admin/credential`、預設管理密碼或實機 session。密碼設定及 salt 在各顆裝置本地產生，credential 保存於私人 journal，屬登入等同憑證；不進入 OTA 或公開 profile。測試的 `FixtureAdmin42`、模擬設定碼與 localhost 截圖是合成資料，從未寫入實機。恢復出廠為邏輯清除，不宣稱安全抹除 Flash 歷史頁。對外發布前仍需掃描 source 與解壓附件。
