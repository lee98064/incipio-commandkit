# CMNDKT-004 原廠網頁首次安裝包驗證

分析日期：2026-10-19，Asia/Taipei。工具：既有 Ghidra 反編譯／組語、ELF PT_DYNAMIC parser、Unicorn 2.1.4、qemu-mips、固定 uClibc／Matter SDK 工具鏈。報告 flavor 為 null。

## 結果與範圍

已製作一顆插座專用的 `v0.2.4-preview` 首次安裝 BIN，大小 3,997,728 bytes。原廠 Boa 的格式驗證與寫入規劃、bootloader 的選槽／checksum，以及首次匯入後的下一版簽章 OTA，皆已離線通過。原 kernel 載入器與壓縮內容保持相同，解壓 hash 亦一致。實際原廠插座首次寫入、MTD driver、RF 與開機驗收尚未執行。

授權與邊界見 [scope.md](factory-install/scope.md)，操作順序見 [timeline.md](factory-install/timeline.md)。使用者回報另一顆為 `10219-1531`、Active Bank 2、雙韌體已勾選；本次未對該裝置發送網路請求或接觸實體 Flash。實際操作入口與限制見[安裝指南](factory-install.md)。

## 格式與呼叫路徑

`/boafrm/formDualFirmware` 在 handler table 對應 `0x00444B88`，處理 `active=save`／`active=reboot` 和 `dualFw`，沒有韌體檔案解析分支。更新頁上方的 multipart 表單提交至 `/boafrm/formUpload`，欄位 `binary`；handler 是 `0x00442F14`。

網頁 handler 逐段檢查 Realtek 16-byte header、長度與 additive checksum，最後 `0x0044275C` 僅比較四個 `dual` bytes。它與原廠 `upgfw` 的 RSA／SHA-1 線上更新流程不同。Boa 的 157 個 imports 及 `libapmib.so`、`libc.so.0`、`libgcc_s.so.1` 依賴已核對；沒有 RSA／SHA／OpenSSL imports。這個結論也由實際函式呼叫鏈與原 MIPS 程式執行支持，並非僅依賴 imports 缺席。

| 段落 | 外層 header | Payload 與行為 |
|---|---|---|
| Kernel | `cr6c`、entry `0x80500000`、burn offset `0x10000`、length `0x11FFF0` | 完整 0x120000 區域；Boa seek 後將 +8 改成新 bank mark |
| Rootfs | `r6cr`、burn offset 0、length `0x2B0000` | 外層 header 不寫入 rootfs；含新的 SquashFS 與空白 journal |
| Trailer | `dual` + 12 個零 bytes | 原廠網頁的結尾格式檢查 |

Rootfs 的 bootloader checksum 仍依 superblock 的 `BE32(+8)+0x282` 計算；上傳外層 checksum 涵蓋整個 `0x2B0000`，校正 word 放在 SquashFS 外的 padding，使 journal 保持全 FF。

在 Active Bank 2 且雙韌體啟用時，原 `FirmwareUpgrade` 產生以下 fwd 計畫：

| 裝置 | seek | 長度 | 對應 Flash 範圍 |
|---|---:|---:|---|
| `/dev/mtdblock0` | `0x10000` | `0x120000` | `[0x010000,0x130000)` |
| `/dev/mtdblock1` | 0 | `0x2B0000` | `[0x130000,0x3E0000)` |

`[0,0x10000)` 與 `[0x3E0000,0x800000)` 在記憶體套用計畫後逐 byte 保留，包括整個第二槽。首次安裝會清空新 journal；此檔不適用於已有 Matter 配對／電量的裝置升級。

## 後續 OTA 相容性

v0.2.4 的更新器先保留原本完整 kernel／Bank 2 hash 檢查。若 kernel 不符合舊安裝方式，只有在簽章包指定已知 legacy 平台時，才允許嚴格的 factory kernel hash。Factory hash 僅將 +8 的非程式碼 bank mark 正規化為 `0x8000004D`；entry、長度、載入器、壓縮資料、padding 與 checksum 仍全部被 hash 覆蓋。第二槽仍要求原平台完整 hash，沒有通用略過相容性介面。

| 識別 | SHA-256 |
|---|---|
| Legacy Bank 1 kernel | `f081b4e0aafad65b071bcff0e0ca475fe2aa6ead608f5c7afe3a731a378b8ae8` |
| Factory kernel（mark 正規化後） | `6c72f554c78d0e71e9dfbd1c1b466eef4700f965b8a21e6958567750be933308` |
| 不變的解壓 kernel | `f160b5df1bac550b4703ee030db147c08406e740e3171c04c688f7dddfa14f8f` |

## Evidence

| E-id | source_ref／artifact_path | content_hash（SHA-256） | repro_command |
|---|---|---|---|
| E-001 | 私人原廠 Bank 2 `boa` 與 imports；ELF32 MSB MIPS-I、動態連結 | `175c66efa68eabda38c8ca6990e824ddcc41dfec0219bc739bce7b8ffe0a587a`（boa） | 使用自己的備份執行 `reverse/run.py`，檢查其 `reverse/evidence/elf/530000_bin__boa.imports.json` |
| E-002 | `reverse/decompiled/130000/boa/functions/00444b88_FUN_00444b88.c` | `4635224b43205d72aa9157069e91a8fb7fa69cb01313982e9b55e9a4c18698c7` | `cat reverse/decompiled/130000/boa/functions/00444b88_FUN_00444b88.c`；另對照同目錄 `.s` |
| E-003 | `reverse/decompiled/130000/boa/functions/0044275c_FUN_0044275c.c` | `f988b07a785fab2e6e3fe34bff8f52aa4f17d601903c9d64486f671eb0829c59` | `cat reverse/decompiled/130000/boa/functions/0044275c_FUN_0044275c.c`；另對照 `.s` |
| E-004 | `verification/factory-boa-results.json` | `7856dcd45e908c09b5dad692614dae6d6fd614735e750757ed0add71245bc9a7` | 下方原程式執行命令；原始 binary／映像只留本機 |
| E-005 | `verification/factory-ota-results.json` | `e305bc806a4a524451585b4c58863c6dea0013ff8140281679c8803175be944c` | 下方實際 MIPS 更新器測試命令 |

公開反編譯文字經去識別化，E-002／E-003 的 hash 僅識別此版文字，不等同原 ELF hash。

## Findings

| F-id | severity | evidence_ids | confidence | location | status／結論 |
|---|---|---|---|---|---|
| F-001 | n/a_re | E-001、E-002、E-004 | high | Boa table `0x00468758`／handler `0x00444B88` | validated：DualFirmware 是設定入口；Upload 才接收韌體 |
| F-002 | n/a_re | E-003、E-004 | high | `0x0044275C`、`0x00442F14` | validated：網頁接受 checksum 合格、帶 dual trailer 的專用映像 |
| F-003 | n/a_re | E-004 | high | `FirmwareUpgrade 0x004438F8`、boot selector `0x804086B0` | validated（模擬）：僅規劃第一槽寫入，新 mark 選第一槽；破損 rootfs 可在模擬中選回第二槽 |
| F-004 | n/a_re | E-005 | high | `ck_ota.c`、`ck_common.c` | validated（fixture）：首次匯入後可接受下一版簽章 OTA，保留身分並拒絕程式碼／第二槽變更 |

## Path 與測試界線

P-001，`path_type=callflow`：原廠更新頁 → `formUpload`（E-001／F-001）→ checksum／dual（E-003、E-004／F-002）→ `FirmwareUpgrade` 產生 fwd 計畫（E-004／F-003）→ 記憶體套用計畫 → 原 bootloader 完整檢查及選第一槽（E-004／F-003）→ 新 journal 首次匯入 → 下一版簽章 OTA（E-005／F-004）。

Unicorn 中所有外部 I/O 都是 stub；它不執行實體 SPI driver，也未執行完整 Linux 冷開機。測試用 next-version OTA 使用即時產生的拋棄式金鑰，並非對外發布的新版本。測試涵蓋故障拒絕與 Flash fixture 保留範圍，不能當成實際斷電、寫入完成或硬體相容的證據。尤其有效 checksum 但應用啟動失敗時，原廠 bootloader 不保證自動切回第二槽。

## 重現

以下命令於 repository 根目錄執行。先用自己的備份和本機私人 image 準備 `private/stock-analysis/reverse` 與 `private/outlet-first-install.bin`；不公開原 Flash、keys 或完整診斷。

```bash
python3 -m pip install unicorn==2.1.4
python3 reverse/tools/verify_boa_factory.py \
  --boa private/stock-analysis/reverse/binaries/530000/boa \
  --imports private/stock-analysis/reverse/evidence/elf/530000_bin__boa.imports.json \
  --reference private/stock-analysis/original_master.bin \
  --image private/outlet-first-install.bin \
  --bootloader private/stock-analysis/reverse/images/bootloader_unpacked.bin \
  --output private/boa-results.json
python3 tests/test_factory_upgrade.py \
  --image private/outlet-first-install.bin \
  --reference private/stock-analysis/original_master.bin \
  --release-dir artifacts/releases/v0.2.4-preview \
  --output private/factory-ota-results.json
```

另已完成 uClibc production Matter 建置與 ISA 稽核、native／MIPS 更新器測試、12 項部署測試、2 項配網控制工具測試及公開 rootfs 稽核；個別結果見 `verification/factory-results.json`。私人安裝包不屬於公開包稽核範圍，其用途與憑證包含情形另在指南標示。
