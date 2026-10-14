# 上傳 GitHub 與建立 Release

v0.2 起使用 [簽章建置與 Pages 發布流程](updates.md)，以 tag 建立草稿 Release，人工發布後才更新索引。以下是 v0.1 的歷史交付方式。

交付資料夾的 `repository/` 是 GitHub repository 內容；`release-assets/v0.1.0-preview/` 是 GitHub Release 附件。本機驗證快取、私人備份及金鑰不屬於公開交付內容，不能上傳。

1. 上傳 `repository/` 的公開檔案清單內容；不要把整個研究工作區或外層資料夾上傳。
2. 建立 `v0.1.0-preview` tag，Release 勾選 **pre-release**。
3. 複製 Release 附件資料夾的 `RELEASE_NOTES.md` 作為說明。
4. 附上 `matter-8m-region.bin`／`.json`、`exec-test-8m-region.bin`／`.json`、`SHA256SUMS` 及 `MANIFEST.json`。GitHub 的自動 source archive 對應 repository 的 tag。
5. 說明必須保留「8 MiB 位址對齊部分燒錄映像、需要本機個別化、只能寫 Bank 1 rootfs、尚未原機驗收」的文字。

source manifest 列出公開檔案與 SHA-256；ZIP 中已排除私人憑證、備份、build cache 與 deps。解壓後的 source ZIP 可直接作為初始 repository 內容。

公開發布僅涵蓋來源、文件與去識別化預覽附件，不代表已完成實體燒錄或原機驗收。自寫碼依使用者選擇先不新增授權，不能把第三方／原廠內容一起套用 MIT。
