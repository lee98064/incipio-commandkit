# 發布韌體與網站

僅發布公開來源、文件與去識別化預覽附件；私人備份、憑證、金鑰、SDK／工具鏈快取不納入 Git 或附件。發布成功不代表原機燒錄、RF、負載或家庭平台驗收完成。

## 從來源產生新版

依[建置說明](build.md)準備 Docker、固定依賴與工具鏈。建置使用固定 SHA-256 的 v0.1.0-preview 公開去識別化 rootfs，CI 不需要裝置備份；簽章私鑰不掛入編譯容器。

1. 修改 `version.json`，增加 `software_version` 並更新版本名稱；例如 v0.3.0-preview 對應數值 14。更新 [CHANGELOG.md](../../CHANGELOG.md)，每個已發布 tag 使用獨立二級標題。
2. 執行完整建置，工具會核對 Matter 執行檔版本，拒絕舊執行檔或測試 backend：

```bash
python3 tools/release.py --private private/ota-signing.key   --output artifacts/releases/v0.3.0-preview
```

3. 執行 [CONTRIBUTING.md](../../CONTRIBUTING.md) 的 CI 命令，以及 release workflow 的 MIPS／PID1、部署及公開稽核；核對附件 hash、簽章與既有更新來源相容性。

`--skip-compile` 僅供剛完成的同版本機建置；`--sdk` 可指定相同固定 commit 的 SDK 快取。一般發布使用完整建置。私鑰保存在維護者自己的 `private/ota-signing.key`，公鑰為 `third_party/ota-signing.pub`；既有裝置更新須沿用信任金鑰，不重新 keygen。fork 須建立自己的金鑰與首次安裝信任來源。

## GitHub 發布設定

初次設定可由 `tools/setup_github_updates.py --private private/ota-signing.key` 完成，經 stdin 將私鑰交給 GitHub CLI 加密為 `OTA_SIGNING_KEY_HEX`；不放進 argv、日誌、Git 或 Release，不默默輪替既有 secret。Pages 選擇 workflow 模式。

`github-pages` environment 須允許 `main` 分支與 `v*` tag 的部署，保留既有 reviewer／保護規則。`python3 tools/setup_github_updates.py --pages-only` 可補上版本 tag 規則，不讀私鑰或修改 signing secret；若原設定只允許版本 tag，另確認網站 main 部署權限。使用 `updates-v*` 時也須允許該部署 tag。

## 工作流程

- [ci.yml](../../.github/workflows/ci.yml)：PR、main push、手動與可重用呼叫；執行原生 C／HTTP／儲存、JavaScript 與 Pages／版本說明測試。
- [release.yml](../../.github/workflows/release.yml)：`v*` tag 或手動觸發；先呼叫 CI，再沿用完整工具鏈建置、MIPS 更新器、Linux PID1、簽章與部署檢查，建立 **草稿 pre-release**。手動觸發須選擇版本 tag ref。
- Release 說明以 `python3 tools/changelog.py "$RELEASE_TAG"` 擷取該版；缺少章節即失敗。
- [pages.yml](../../.github/workflows/pages.yml)：Release published、main 的網站／Pages 工具變更、`updates-v*` tag 或手動觸發；**每次網站部署都重新部署更新 feed**，不能只覆蓋靜態頁。

Pages 選版順序：Release 事件 tag → 手動 `tag` → 移除 `updates-` 前綴的 tag → 最新已發布、非草稿且含 `matter.ota` 的 Release（包含預覽版）。所選版缺少 `matter.ota`／`matter.json` 即停止。

網站來源必須存在於 `site/`，不得自帶 `updates/`。流程複製網站至 `_site/`，下載並驗證 Matter 簽章（有舊診斷附件才驗證該變體），產生 `_site/updates/index.json`。部署前與線上索引執行 `validate_catalog_upgrade`，拒絕降版或遺失仍支援的 channel；線上 404 才視為空索引。沿用 `update-feed` concurrency group，避免舊、新流程同時部署。

預設更新網址固定為 `https://lee98064.github.io/incipio-commandkit/updates/index.json`。部署後約 3 分鐘內重試確認：索引 bytes 完全相同、`updates/matter.ota` 為 HTTP 200／CORS `*` 且 SHA-256 相符、網站 `/` 與 `/en/` 為 200。尚未發布的草稿不進入 feed；首次設定 Pages 不代表附件已發布。

## 手動發布流程

v0.3.0-preview 在 Actions 無法使用時，以本機建置與驗證後手動發布；順序如下（後續版本替換 tag 與路徑）：

1. 本機完整執行 `tools/release.py`，跑 CI、MIPS／PID1、部署、公開稽核、簽章與相容性檢查，製作含說明、驗證資料及 `SHA256SUMS` 的 bundle ZIP。
2. 以 PR 審查後合併至 `main`；`vX.Y.Z-preview` tag 指向 **merge commit**，不得指向未合併分支。
3. 建立可審閱草稿並附上原始 artifacts 與 bundle：

```bash
python3 tools/changelog.py v0.3.0-preview > /tmp/commandkit-release-notes.md
gh release create v0.3.0-preview artifacts/releases/v0.3.0-preview/* \
  artifacts/releases/v0.3.0-preview-bundle/commandkit-v0.3.0-signed-ota.zip \
  --verify-tag --draft --prerelease --title v0.3.0-preview \
  --notes-file /tmp/commandkit-release-notes.md
```

4. 將草稿附件下載到新目錄，逐檔比對 SHA-256、解壓測試 bundle，並以 `tools/ota.py verify` 驗證下載的 `matter.ota`；核對版本與保留範圍，再人工 publish。
5. Release 發布後由 Pages workflow 部署網站與 feed。若 Actions 當時仍不可用，恢復後以 `workflow_dispatch` 指定該 tag 重跑，完成 smoke 與插座端更新查詢驗收。

`tools/check_public.py` 的 `public_paths` 依磁碟取檔，但固定排除 `reverse/decompiled/` 與 `reverse/symbols/`（與 `.gitignore` 一致），因此本機保留的研究資料不會進入公開稽核或 `tools/package_public.py` 的來源 ZIP；研究資料只以 Release 附件 `reverse-research-archive.zip` 發布。

附件只收該版 `tools/release.py` 輸出與核對過的 bundle；8 MiB BIN 必須標示「位址對齊部分映像、需本機個別化、僅寫 Bank 1 rootfs」。原廠／第三方授權依[來源與授權說明](../../third_party/README.md)，不能套用本專案 MIT。另行交付的 `reverse-research-archive.zip` 也須保留原廠權利聲明與 `SHA256SUMS`。

若 workflow 尚未進入預設分支，Release 事件可能未啟動；合併後優先手動 dispatch，或用 `updates-v版本` tag 指向已核對的 workflow commit，只部署該既有 Release。GitHub environment 規則也須允許此 tag。
