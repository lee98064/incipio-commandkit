# 來源與既有授權

| 元件 | 固定來源／用途 | 授權紀錄 |
|---|---|---|
| connectedhomeip | `sdk-lock.json` 的 v1.6.1.0 commit／submodules，Matter stack 與 SDK 範例 attestation | Apache-2.0，文字保存在 licenses/ |
| Nayuki QR encoder | `firmware/matter/src/vendor/qrcodegen/provenance.json`，固定 commit／兩檔 SHA-256 | MIT 文字包含於來源 |
| musl-cross-make | 固定 commit，GCC 14.3.0／binutils 2.44／musl bootstrap，輕量 builder 來源也保存 | builder MIT；各工具鏈元件保留 upstream 授權 |
| uClibc-ng 1.0.54 | `download-lock.json`，RTL8196E 相容 C/C++ runtime | LGPL-2.1 文字保存；相容修補脚本公開 |
| Linux 2.6.30.9 headers | kernel.org 固定 archive／SHA-256 | upstream GPL；只用於建置，來源由 bootstrap 下載 |
| Debian MIPS VM kernel／modules | 固定 archive／SHA-256，Malta 4.19 測試 | upstream 授權，由 bootstrap 下載，不納入 source ZIP |
| flashrom v1.8.0 | commit `90b6b4376c7480a223e7bb5642e7116315ac6d09` | COPYING.rst 保存；來源由 bootstrap 下載 |
| 原廠韌體程式 | 10206／10219，逆向與已存在程式保留 | 反編譯不代表取得完整原廠原始碼；沒有重新授權原廠內容 |
| 三支執行檔樣本 | 使用者提供的測試附件，固定 bytes／hash | 未提供原始碼／獨立授權宣告；沒有宣稱是自寫碼 |

自寫服務、工具與人工重建程式本次不新增授權。各檔既有 copyright／SPDX／授權 header 保留。第三方下載與編譯輸出放在忽略目錄，不把 SDK／工具鏈全部複製進公開 source ZIP。
