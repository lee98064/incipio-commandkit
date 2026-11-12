# 備份、部分燒錄與復原

本工具使用 CH341A、flashrom **v1.8.0** 與 **GD25Q64(B)，8 MiB，JEDEC C8 40 17**。首版支援 macOS／Linux。它沒有全片清除、任意區域、強制寫入或略過驗證介面。

v0.2 首次安裝後可使用[簽章 OTA](updates.md)，後續更新不需再次拆機。v0.1 沒有永久 OTA 入口。

原廠 `10219-1531`／Active Bank 2／雙韌體已啟用的 CMNDKT-004，另有[網頁首次安裝包](factory-install.md)；目前通過離線驗證，原廠機首次寫入驗收尚未完成。

## 接線與前提

1. 插座與市電完全斷開。不得一邊接市電一邊接 USB 燒錄器／UART。
2. GD25Q64 的 VCC 與所有 SPI 訊號必須為 3.3 V；部分黑色 CH341A 板的訊號電位需實際確認。
3. 確認晶片 pin 1，連接 VCC、GND、CS、CLK、MOSI、MISO；避免同時由插座電路與燒錄器供電。優先使用已確認可工作的備用晶片及相同原廠備份。
4. 完成寫入及讀回後，移除燒錄器、夾具與所有 USB／外接供電，裝回外殼才接市電。

晶片不符、兩份讀取不同、kernel／Bank 2 hash 不符或 checksum 不符，工具會停止。未知版本請先做逆向與相容性驗證，不更改 hash 限制硬刷。

## 安裝工具

需要 Python 3.11+、SquashFS tools（支援 LZMA）及 flashrom v1.8.0。macOS 可用 Homebrew 安裝 `squashfs`，並依 [建置說明](build.md)建立 flashrom。Linux 可用發行版 SquashFS 套件，flashrom 版本需符合固定版本。`flashrom` 若不在 PATH，透過 `--flashrom /absolute/path/to/flashrom` 指定。

以下命令從 repository 根目錄執行。`--mains-disconnected --voltage-3v3 --no-other-supply` 表示操作者已確認前述實際條件；旗標不會替你量測電壓或隔離市電。

## 取得兩份當次備份

```bash
python3 tools/flash.py backup --session private/read-01 \
  --mains-disconnected --voltage-3v3 --no-other-supply
```

工具檢查三次 JEDEC，取得兩份完整 8 MiB 讀取並逐 byte 比較。備份保存為 `private/read-01/before-1.bin` 和 `before-2.bin`，權限 0400；紀錄留在同一目錄。每次使用新的 session 名稱。

## 個別化 Release 映像

將 Release 的 BIN 與對應 JSON 下載到 `artifacts/releases/`。使用 Matter 版的範例：

```bash
python3 tools/flash.py prepare \
  --backup1 private/read-01/before-1.bin --backup2 private/read-01/before-2.bin \
  --release artifacts/releases/matter-8m-region.bin \
  --manifest artifacts/releases/matter-8m-region.json \
  --profile private/outlet-a --output private/matter-target.bin
```

此步不接觸硬體。已有 journal 身分時沿用原診斷與 Matter 金鑰，只有沒有既有身分的新安裝才產生新金鑰；接著重打包 rootfs、保留 special device nodes／symlink metadata，重算 Realtek checksum，再用當次備份補回其餘區域。輸出完整私人目標映像及 `.bin.json`。

同一插座後續更新使用相同 `--profile`，以保留其配對碼來源。另一台使用另一個 profile。不要公開 profile 或合成映像；更換／遺失身分金鑰會改變設定碼。診斷版把檔名改成 `exec-test-8m-region.bin`／`.json`，其設定熱點帳密會另存在 profile 的 `setup-ap.json`。

## 僅回寫 Bank 1 rootfs

```bash
python3 tools/flash.py write \
  --image private/matter-target.bin --record private/matter-target.bin.json \
  --session private/write-01 \
  --mains-disconnected --voltage-3v3 --no-other-supply
```

寫入命令再次取得兩份新備份；若裝置已變更，需使用新備份重新個別化。工具生成固定 layout：

```text
00130000:003bffff bank1_rootfs
```

底層只使用 `--layout … --include bank1_rootfs -w …`，啟用內建 verify，然後獨立讀回全片與完整私人目標逐 byte 核對。`0x000000–0x12FFFF` 及 `0x3C0000–0x7FFFFF` 必須保持原值，包括 kernel、MIB、MAC、校正、journal、Bank 2、factory 和 HomeKit／MFi 資料。這符合 [flashrom 官方限定區域介面](https://raw.githubusercontent.com/flashrom/flashrom/v1.8.0/doc/classic_cli_manpage.rst)。

成功狀態是 `write_verified_not_boot_tested`；它表示寫入核對完成，不代表已可開機。中斷／失敗時工具停止，不自動重刷。保留 session、原備份和原晶片，不要在核對不明時接市電。

## 復原先前 rootfs

```bash
python3 tools/flash.py restore \
  --backup1 private/read-01/before-1.bin --backup2 private/read-01/before-2.bin \
  --session private/restore-01 \
  --mains-disconnected --voltage-3v3 --no-other-supply
```

復原同樣取得兩份當次備份，要求原備份的 kernel／Bank 2 相容，只取回原備份中的 Bank 1 rootfs。當次 MAC、校正、MIB 與其他保留區維持當次值。這不是空白晶片初始化或 bootloader 修復工具。

v0.2.10 的 host 工具另支援已固定 hash 的 Boa 首次安裝 kernel wrapper，與 production OTA verifier 採相同嚴格條件。只正規化其 boot mark；程式、長度、padding、checksum 及 Bank 2 仍完整核對，kernel 不會被寫入。較新程式可接續保留的舊 OTA pending 狀態，仍需正常健康確認，見[復原報告](2026-10-20_firmware-programmer-recovery-report.md)。
