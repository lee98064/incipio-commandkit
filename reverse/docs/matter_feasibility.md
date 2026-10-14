# 原硬體 Matter 移植的靜態前置資料

本次任務是逆向 BIN。沒有進行 Matter SDK 編譯、上機網路測試或製作修改槽，因此可行性結論為 **UNKNOWN／尚未證明**。

| 項目 | 本次資料 | 狀態 |
|---|---|---|
| CPU／ELF | MIPS32 big-endian，o32；meter 使用 soft-float helper／v0 回傳 | CONFIRMED |
| 核心 | Linux 2.6.30.9；Bank 2 build #852，2016-09-14 | CONFIRMED，kernel strings |
| SDK | Realtek v3.4.6.4-r23198；RTL8196E 平台字串 | CONFIRMED，`etc/version` |
| libc／toolchain | uClibc 0.9.30.3；kernel 編譯器 GCC 4.4.5-1.5.5p2 | CONFIRMED |
| rootfs 空間 | Bank 2 bytes_used 2,342,801；仍須遵守 checksum padding 及實體 partition 範圍 | CONFIRMED；可用容量尚不能只以 Flash 空白處推算 |
| 硬體控制 | 10219 實際開 `/dev/ttyACM0`；19200 8N1；命令及算式已提取 | CONFIRMED，`meter_protocol.md` |
| IPv6 支援線索 | kernel IPv6 字串、dhcp6c/dhcp6s/radvd/mldproxy 等程式 | STRONGLY SUPPORTED，僅支持韌體有相關元件 |
| RAM／free memory | 未取得 `/proc/meminfo` | UNKNOWN |
| 當前 IPv6 UDP／multicast／mDNS | 未取得實機 socket／網路狀態 | UNKNOWN |
| 現代 Matter SDK 在此 ABI／libc 上的建置和大小 | 未編譯／測試 | UNKNOWN |

繼續工作需要保存真機 `/proc/mtd`、`/proc/bootbank`、`/proc/meminfo` 與 IPv6 狀態，再驗證自訂 ELF、UDPv6 multicast 及 MCU 通訊。這些前置資料不能由 rootfs 裡「有 IPv6 程式」取代。`agent.md` 指定的最小 rootfs 修改與 boot-test 尚未執行，因此沒有 `builds/test_bank` 產物。
