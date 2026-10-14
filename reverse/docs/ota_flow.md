# OTA 與 bank 更新流程

此頁以 Bank 2／10219 的 `upgfw` 為主；另一版的逐函式輸出保留於 `decompiled/130000/upgfw/`。全部是離線分析，未下載韌體、執行 updater 或寫入 MTD。

## 流程

`CONFIRMED`：`main` (`0x00410E60`) 下載資料，`Upload` (`0x00413850`) 先解析／校驗格式，通過（回傳 4）後才呼叫 `FirmwareUpgrade` (`0x00414F6C`)。更新成功（200）後等待 10 秒，再執行 reboot；下載／驗證失敗則走失敗訊息。

| 步驟 | 位址 | 本次可確認的行為 |
|---|---|---|
| 雙槽開關 | `0x00414D50` | 執行 `flash get DUALBANK_ENABLED`，由 `/var/readMibData` 解析值 |
| active／target | `0x00414E68` | 讀 `/proc/bootbank`；雙槽啟用時 target 是另一槽，未啟用時 target 與 active 相同 |
| 容器解析 | `0x00413850` | 接受 `cs6c`、`cr6c`、`w6cg`、`r6cr` 及設定容器；上限常數 `0x400000` |
| Signature | `0x00413600` | 尾端 `dual` header、RSA 公鑰處理、資料 hash 比對、`dver` 檢查 |
| RSA wrapper | `0x0041344C` | PEM public key → `RSA_public_decrypt`；採用回傳長度／失敗結果 |
| Digest 比對 | `0x004134BC` | SHA-1 20 bytes → 40 字元 hex，再比對 RSA 解出的資料及長度 |
| 寫入 | `0x00414F6C` | 檢查 image checksum、選 MTD、seek、分塊 write、sync、更新 progress |
| 新 mark | `0x00413D88` | 讀 active kernel header 的 `+8` mark，正規化後產生寫入目標 header 的新值 |

這個自訂 RSA envelope 使用 **RSA 公鑰解出字串後比對 SHA-1 hex**；不能只因 binary 內含 `RSA_verify` 就把實際呼叫鏈描述成一般 RSA_verify API。公鑰存在程式中，不是 MFi／device 私鑰。報告不列任何裝置私密值。

## 寫入裝置的靜態對應

`CONFIRMED`，由 table `0x00576680–0x0057668C` 與 `FirmwareUpgrade` 分支交叉核對；raw pointers、字串 offsets 見 `../evidence/updater-tables.json`。

| 槽 | Kernel／system 區 | Rootfs 區 |
|---|---|---|
| Bank 1 | `/dev/mtdblock0` | `/dev/mtdblock1` |
| Bank 2 | `/dev/mtdblock3` | `/dev/mtdblock4` |

Kernel/system image 連同 16-byte header 寫入，rootfs `r6cr` image 跳過外層 16-byte header；rootfs 的 seek 為 0。kernel 在 seek 後以 active bank 資料產生的新 mark 改寫輸入 buffer 的 `+8` 再寫到 target。`w6cg` 分支使用 byte 加總，kernel/rootfs 用 16-bit 加總。完整 Flash 實體 MTD partition 起訖仍待真機 `/proc/mtd`，不由這張軟體路徑表強行補值。

## Mark 產生規則

`CONFIRMED`，`0x00413D88`：

- header 讀取／格式失敗或正規化 mark ≤ `0x80000001`：新值 `0x80000002`。
- 現有 mark = `0xFFFFFFF0`：保持 `0xFFFFFFF0`。
- 其他正常 mark > `0x80000001`，雙槽開啟：新值 `mark+1`（32-bit 算術）。
- 其他正常 mark > `0x80000001`，雙槽關閉：新值 `0xFFFFFFF0`。
- active 裝置 open 失敗的提前返回值為 `0x80000000`。

此 updater 有特殊 `0xFFFFFFF0` 值；bootloader selector 則使用普通 unsigned 比較，沒有 modulo rollover 排序。不能把二者合併成一個已證明能任意循環的序號演算法。

## 仍需實機確認

bootbank／DUALBANK_ENABLED 的執行時值、完整 `/proc/mtd`、寫入後 boot-test、異常／斷電時的行為未在本次驗證。Ghidra 的 warnings、未知型別與 indirect call 皆保留；重要的 header／mark／checksum 判斷另用組語與原始 bytes 核對。
