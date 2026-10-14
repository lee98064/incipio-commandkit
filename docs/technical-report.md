# Incipio CommandKit 公開韌體與部署架構報告

日期：2026-10-14（Asia/Taipei）。範圍為自有 CMNDKT-004／RTL8196E 的既有逆向成果整理、公開 rootfs 重建及離線／VM 驗證；本次沒有接觸實體燒錄器。原研究工作區及可信原始備份保留。見 [範圍](../scope.md)及[時序](../timeline.md)。

## 概述

將原廠 Linux／Wi-Fi／硬體初始化保留於每台插座，只替換 Bank 1 rootfs。Matter 版接入開放設定 AP、Wi-Fi 選單、裝置身分與 MCU 控制；獨立診斷版驗證外部工具鏈產出的三支 MIPS 執行檔。公開 BIN 的保留區填值，不帶這台插座的設定與出廠資料；本機個別化與限定區域寫入工具將裝置資料與公開程式區分開。預覽版尚未原機驗收，fabrics 持久儲存與正式 OTA 不在本次實作。

## 硬體與保留邊界

Realtek RTL8196E／RLX4181、RTL8188ER Wi-Fi、GD25Q64 8 MiB。CPU 為 MIPS 32-bit 大端、o32／soft-float；SquashFS metadata 為 little-endian。

| 範圍（end exclusive） | 操作 |
|---|---|
| `[0,0x130000)` | 保留 bootloader、硬體／default／current MIB、Bank 1 kernel |
| `[0x130000,0x3C0000)` | 唯一允許替換的 Bank 1 rootfs，2,686,976 bytes |
| `[0x3C0000,0x800000)` | 保留 journal、HomeKit、Bank 2、factory、MAC／校正／production 資料 |

Release 容器有相同位址範圍，但兩段保留區是全 `0xFF`，不是可部署的內容。私人目標從當次備份取得兩段原值，再替換 rootfs。bankmark／kernel 不更改；相容性限制由公開 executable-range hashes 表達，沒有原裝置完整備份 hash 或 bytes。

## 修改與來源

Matter SDK 使用指定 v1.6.1.0 commit，靜態 GCC 14.3.0／uClibc runtime。`gthread_uclibc_compat.c` 處理相容 thread runtime，GNU toolchain 禁止目標不支援的指令組合，SDK 設定大端與 non-PIC／static。`sdk-overrides/TLVReader.cpp` 保存長度轉換修補；不能把 ABI 探針或 VM pass 當成所有 RLX 指令皆支援。

Matter 應用、DeviceIdentity、RelayEngine、McuController、診斷、portal、Wi-Fi helper、lease publisher、RAM runner 與部署程式均有來源。原廠 helper 呼叫 `libapmib`，不用猜測 MIB 二進位欄位來寫 Wi-Fi。動態連結 stub 只用於建置；裝置使用原 libraries。

當前 Matter 版停用 HomeKit 啟動，MCU 由 Matter 管理。公開組裝使用原廠 10219 HomeKit binary 作未啟動的保留檔，沒有依賴過去私人 V2 patched binary；歷史負載燈號修改來源另保存於 `firmware/load-led/`。這項整理不改變啟動後的 MCU 擁有者。

## 身分與診斷

DeviceIdentity 讀取實際 `wl0` MAC 與部署時新產生的 32-byte 金鑰，以 HMAC-SHA256 用途區隔產生 PIN／discriminator／salt；官方 SDK 生成 manual code／QR payload，Nayuki encoder 生成 SVG。RAM record 有 HMAC、模式 0600。缺少／非法介面或金鑰時失敗，沒有共用碼 fallback。

診斷為固定 read-only HTTP 端點，一次性 10 秒 challenge／HMAC。本機 profile 保留其診斷金鑰，CLI 不將金鑰顯示到 stdout。報告最多 96 KiB；報告可能含裝置狀態，保存在私人目錄。

## 證據鏈

| Evidence | 可核對的公開來源／驗證 | 支持的結論 |
|---|---|---|
| E-001 | reverse/decompiled 的 bootloader、兩版程式；reverse/docs 的位址與分析 | 原廠流程與置信度，並非新的實機測試 |
| E-002 | tools/fwlib.py、tools/flash.py；tests/test_deployment.py | 兩份一致備份、固定範圍、個別化、保留區與拒絕條件 |
| E-003 | verification/public-audit.json、Release JSON／SHA256SUMS | 公開 BIN padding、checksum、解壓後憑證缺席與檔案 hash |
| E-004 | verification/test-results.json；搬移後服務與 Matter 來源 | 本次執行的獨立建置、MIPS／HTTP／身分／協議測試及明確限制 |
| E-005 | tests/test_dummy_flashrom.py | flashrom dummy backend 的限定區域寫入、保留區與復原 |

F-001：公開包不含原裝置保留區與原憑證。Evidence E-002／E-003；confidence=high，依本次檔案 manifest 的範圍成立。

F-002：本機部署只允許 Bank 1 rootfs，保留兩段當次 bytes。Evidence E-002／E-005；confidence=high（離線／dummy backend）。這不代表 USB 接線、實體電壓、RF 或 SPI 品質已驗證。

F-003：新增服務／Matter 行為通過的項目以 E-004 最終結果為準。confidence=high 只限對應測試環境；原機新打包版本的 RF、MCU／負載、家庭 app、重啟與長期穩定性仍是待驗收。

P-001（callflow，E-002／E-003／E-005 → F-001／F-002）：一致備份 → 驗證公開 BIN → 本機 profile 新金鑰 → 重打包與 checksum → 原備份補回保留區 → 固定 layout 寫入 → 獨立全片讀回 → 比較私人完整目標。所有失敗停止，沒有自動重刷或全片清除。

P-002（callflow，E-004 → F-003）：MAC／私人金鑰 → RAM 身分與 QR → 開放設定 AP → 原廠 Wi-Fi helper → LAN Matter commissioning → 加密命令 → MCU TX／RX 確認 → Matter 屬性同步。VM 的 MCU 為模擬對端。

## 狀態與時序

2026-10-11 完成原廠兩槽與 bootloader 逆向及 V2 修補；2026-10-12～13 經原機 SIGILL 問題調整 runtime、LL/SC／TLS／大端 TLV，再接入繼電器；2026-10-14 完成装置專屬身分及獨立執行檔測試版。歷史 `softap-scan-fix` 曾由實機診斷觀察到 commissioning response ACK；這不能替代最新 DeviceIdentity 版或本次公開重打包的原機驗收。

本次公開整理不增加新的實體燒錄／開機次數。去識別化文字及公開二進位內容重新計算 hash；不可混用歷史映像 hash。未新增自寫碼授權，第三方既有授權保留。
