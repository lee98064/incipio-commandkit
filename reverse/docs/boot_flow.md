# 啟動選槽與校驗

## 選槽規則

`CONFIRMED`，來自解壓 bootloader 的 `0x804086B0`，組語見 `../asm/boot_804086b0.s`。

1. `find_bank_header` (`0x80408028`) 分別搜尋偏移 0 與 `0x400000` 的槽。先探測相對 `0x10000`、`0x20000`、`0x30000`；再以 `0x1000` 步長搜尋至 `0x50000`，跳過先探測的位置。
2. `normalize_bankmark` (`0x80407AA8`) 對無有效 header 的槽回傳 `0x80000000`；對有效 header 的 `+8` 欄位，bit31=1 時保持原 mark，bit31=0 時改為 `0x80000001`。
3. `0x80408724` 用 **sltu** 作無號比較。Bank 2 mark 嚴格大於 Bank 1 時優先 Bank 2；其他情況優先 Bank 1，包括相等。
4. 在完整檢查模式，`check_image_header` (`0x804084BC`) 驗證優先槽；失敗則以另一槽 offset 再驗證。另一槽成功時更新 RAM 中 boot_bank／bank_mark。兩槽都失敗則回傳失敗。
5. 在不要求完整檢查的模式，回傳是否找到任一有效格式的 header；這一路徑不可誤認為已通過 checksum。

目前 raw mark 為 Bank 1 `0x8000004B`、Bank 2 `0x8000004C`，兩槽檢查皆通過，所以離線判定選 Bank 2／`10219`。

在 selector／normalizer 中沒有 modulo 序號比較、mark rollover 修正或持久 boot-failure counter。`0x8040FDBC` 是長迴圈中檢查中止輸入的 polling counter，不能稱為 boot failure counter。Bank 2 publish 路徑 `0x80407D24–0x80407D34` 設定 MMIO `0xB8003504` 的 bit0，這是硬體狀態操作，不是 Flash mark 更新。不能推論整個 bootloader 的互動命令都沒有 Flash 寫入功能。

## 核心與 rootfs 檢查

`CONFIRMED`：`validate_kernel_image` (`0x804082D4`) 接受 `cs6c`（型別 1）或 `cr6c`（型別 2），讀取 16-byte big-endian header，複製 header 指定長度的 payload 到 header 指定入口位址，對 payload 作 big-endian 16-bit 加總，取低 16 bits，結果為 0 才有效。

`CONFIRMED`：`cr6c` 另要求 rootfs 有效。`validate_rootfs` (`0x80408140`) 接受 `sqsh` 或 `hsqs`；checksum 涵蓋長度為 `BE32(rootfs+8)+0x282`，包含檔案系統結尾 padding 與 checksum word，並不等於 SquashFS `bytes_used`。

rootfs 候選位置先為槽內 `0xE0000`、`0xF0000`、`0x130000`，再以 `0x10000` 步長搜尋至 `0x170000`，跳過已試位置。選 kernel 的 fallback 與在槽內搜尋候選位址是兩個層次。

| 槽 | Kernel payload sum16 | rootfs checksum 長度 | rootfs sum16 |
|---|---|---|---|
| Bank 1 | `0x0000` | `0x279002` | `0x0000` |
| Bank 2 | `0x0000` | `0x23C002` | `0x0000` |

重現：從 `reverse/` 執行 `python3 tools/inspect_image.py`。腳本以本次已知 offset 檢查原圖，並不模擬硬體中止、錯誤輸入或整個搜尋流程。

## 密碼學與未完成事項

目前已核對的選槽／header／rootfs 路徑是格式及 additive checksum 檢查。這不能等同「已證明可以成功燒入任意韌體」。沒有製作修改映像，沒有執行 repack 或 boot-test；bootloader 全部命令／完整 root of trust 也未作動態驗證。

機器反編譯見 `../decompiled/bootloader/`；人工整理的選槽 pseudo-C 見 `../src/reconstructed/boot_bank_selection.c`。兩者皆非原廠原始碼。
