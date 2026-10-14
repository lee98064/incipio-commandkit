# 本次 Flash 配置

`CONFIRMED` 表示本次 bytes 或具名組語直接支持；MTD 對應另列置信程度。

| Flash offset | 本次觀察 | 證據 |
|---|---|---|
| `0x000000` | MIPS reset trampoline，ROM 位址 `0xBFC00000` | `asm/reset-vector.s` 的首條跳躍 |
| `0x001320` | 18,497 bytes LZMA；解壓為 60,992 bytes bootloader | `evidence/image-map.json` |
| `0x006000`、`0x008000`、`0x00C000` | 低位設定區；僅從映像辨識，不作修改 | 原始 bytes |
| `0x010000` | Bank 1 `cr6c`，入口 `0x80500000`，mark `0x8000004B`，payload `0x10B802` | `evidence/boot-checks.json` |
| `0x012818` | Bank 1 LZMA kernel，解壓 3,749,960 bytes | `evidence/image-map.json` |
| `0x130000` | Bank 1 SquashFS，743 inodes，bytes_used 2,592,306；版本 `10206` | rootfs superblock、`rootfs_130000/etc/customize.version` |
| `0x3E0000`、`0x3F0000` | vendor 可寫資料候選區；可能含配對資料，不列內容 | bytes／工具程式；實體 MTD mapping 待補 |
| `0x400000` | Bank 2 偏移基準 | bootloader `0x804086F8`、`0x80408744` |
| `0x410000` | Bank 2 `cr6c`，入口 `0x80500000`，mark `0x8000004C`，payload `0xFD002` | `evidence/boot-checks.json` |
| `0x412818` | Bank 2 LZMA kernel，解壓 3,568,740 bytes | `evidence/image-map.json` |
| `0x530000` | Bank 2 SquashFS，601 inodes，bytes_used 2,342,801；版本 `10219` | rootfs superblock、`rootfs_530000/etc/customize.version` |
| `0x7E0000` 之後 | factory/config/production data；只保留本地原始範圍 | `images/flash_tail_7e0000.bin` |

`CONFIRMED`：解壓後 bootloader 應載入 `0x80400000`，不是將解壓 bytes 放在 `0xBFC00000`。其 `+0x428` 直接呼叫 `0x80400498`，`+0x438` 設定 gp=`0x80420EF4`。ROM reset 區及 RAM bootloader 具有不同基址。

`CONFIRMED`：SquashFS 檔案系統中繼資料為 little-endian；其中 ELF／MIPS 指令為 big-endian，兩者不可混用。

`CONFIRMED`：此變種將 superblock `+8` 欄位供 bootloader 計算 checksum 長度。binwalk 將其當標準 mkfs timestamp 而顯示 2038 年，該日期不能用作實際建置日期。inode 時間及 `/etc/version` 分別支持 2015-11-18、2016-09-14。

## MTD 映射限制

`/proc/mtd` 未在本次工作中取得。`upgfw` 的 device 路徑與 Bootlog 可支持軟體選擇規則，但不能據此把每個 mtdblock 的物理 offset 都標成真機確認。本次保留 `UNKNOWN`，避免將前次 guide 的工作假設直接當作觀察值。
