# 來源與既有授權

根目錄 [MIT](../LICENSE) 僅涵蓋本專案撰寫的程式與文件，不重新授權原廠 firmware bytes、原廠衍生逆向資料、`third_party/**`、`firmware/matter/src/vendor/**`、`firmware/matter/src/sdk-overrides/**`、`firmware/matter/src/matter-app-device/build_overrides/**` 或 `firmware/exec-test/samples/*` 執行檔。各檔原有 copyright／SPDX／授權保留。

| 元件／路徑 | 來源與用途 | 授權／核對依據 |
|---|---|---|
| connectedhomeip／開發 attestation | [sdk-lock.json](sdk-lock.json) 固定 v1.6.1.0 commit 及 submodules | [Apache-2.0](licenses/connectedhomeip-Apache-2.0.txt)；SDK 與 attestation bytes 保留上游授權 |
| Monocypher 4.0.3 | [provenance.json](../firmware/matter/src/vendor/monocypher/provenance.json) 的逐檔 URL／SHA-256 | [BSD-2-Clause／CC0-1.0 雙授權](../firmware/matter/src/vendor/monocypher/LICENCE.md)，來源標頭一致 |
| Nayuki qrcodegen | [provenance.json](../firmware/matter/src/vendor/qrcodegen/provenance.json) 固定 commit／SHA-256 | Nayuki MIT，完整文字保留於 [.c](../firmware/matter/src/vendor/qrcodegen/qrcodegen.c)／[.h](../firmware/matter/src/vendor/qrcodegen/qrcodegen.h) 標頭 |
| `sdk-overrides/CHIPLinuxStorage.cpp` | connectedhomeip Linux 儲存，加入 journal mirror | [來源標頭](../firmware/matter/src/sdk-overrides/CHIPLinuxStorage.cpp)：Project CHIP Authors，Apache-2.0 |
| `sdk-overrides/TLVReader.cpp` | connectedhomeip TLV reader 相容修補 | [來源標頭](../firmware/matter/src/sdk-overrides/TLVReader.cpp)：Project CHIP Authors／Nest Labs，Apache-2.0 |
| `matter-app-device/build_overrides/` | connectedhomeip GN build overrides | 27 檔含 Apache-2.0 標頭；`pigweed_environment.gni` 僅一行本機建置註解、無上游標頭，仍列此目錄例外，不冒稱逐檔皆有授權標頭 |
| musl-cross-make | 固定 commit；GCC 14.3.0／binutils 2.44／musl builder | [MIT](musl-cross-make/LICENSE)；[COPYRIGHT](musl-cross-make/COPYRIGHT) 明定 patches 與輸出依各 upstream 授權 |
| uClibc-ng 1.0.54 | [download-lock.json](download-lock.json)，RTL8196E runtime | [LGPL-2.1](licenses/uclibc-LGPL-2.1.txt)；建置時下載，修補腳本公開 |
| Linux 2.6.30.9 headers | 固定 archive／SHA-256，僅供建置 | upstream GPL，由 bootstrap 下載 |
| Debian MIPS VM kernel／modules | 固定 archive／SHA-256，Malta 4.19 測試 | upstream 授權，不納入來源包 |
| flashrom v1.8.0 | 固定 commit `90b6b4376c7480a223e7bb5642e7116315ac6d09` | [GPL-2.0 與元件說明](licenses/flashrom-COPYING.rst)，來源由 bootstrap 下載 |
| 原廠韌體與衍生研究資料 | 10206／10219、bootloader、kernel、驅動與 helper libraries | 原廠權利保留；反編譯偽碼、組語、符號與語義重建不是原廠原始碼，未取得重新授權權利 |
| 三支 MIPS 執行檔樣本 | `tiny_eb`、`tiny_gcc16`、`cpp_lean` | [來源說明](../firmware/exec-test/samples/README.md)及 [manifest](../firmware/exec-test/samples/manifest.json)；未提供原始碼或獨立授權，不宣稱為本專案自寫碼 |

SDK／工具鏈、Python cryptography 與建置時下載的 GCC、binutils、musl、GMP／MPC／MPFR、mbedTLS、Pigweed 等依各上游授權；固定來源見 lock files 與 builder 的 hashes。下載及編譯輸出置於忽略目錄，不把完整 SDK／工具鏈放入公開來源包。原廠反編譯與符號改存獨立研究 ZIP，見[逆向索引](../reverse/README.md)。
