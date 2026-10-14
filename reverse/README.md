# 逆向資料索引

對兩版原廠 firmware（10206／10219）與 bootloader 的詳細逆向資料。本次公開整理沒有重新推導所有函式，保留先前分析的置信度與限制。

| 主題 | 文件／人工重建 |
|---|---|
| 整體報告與分析方法 | [正式逆向報告](docs/2026-10-11_reverse-incipio-report.md) |
| Flash 配置、版本、MTD 限制 | [Flash 配置](docs/flash_map.md) |
| 選槽、bankmark、fallback、checksum | [開機流程](docs/boot_flow.md)、[C 語義模型](src/reconstructed/boot_bank_selection.c) |
| 繼電器與電表 MCU 協議 | [電表協議](docs/meter_protocol.md)、[人工重建](src/reconstructed/Socket_Meter.c) |
| OTA、RSA、寫槽行為 | [OTA 流程](docs/ota_flow.md) |
| 原硬體 Matter 限制與前置評估 | [歷史可行性分析](docs/matter_feasibility.md)、[後續移植報告](../docs/technical-report.md) |

## 逐函式資料

`decompiled/130000/` 為 10206，`decompiled/530000/` 為 10219，`decompiled/bootloader/` 為 bootloader。共 19 個目標、2,297 個函式，包含合併 `.c`、逐函式 C 偽碼／組語、`functions.tsv`、`calls.tsv`、`string_xrefs.tsv`。`symbols/` 保存可恢復動態符號。

两版各包含 homekitserver、upgfw、WACServer、phytrex_tools、gigadevice_chk、timelycheck、flash、wfaudio、boa。Linux kernel 沒有做完整逐函式反編譯；公開包也不含原 Flash／kernel 原始 bytes 或 Ghidra 資料庫。

`.c` 中的 `FUN_*`、`DAT_*`、未知型別、indirect calls 及 warning 保留。这些不是原廠原始碼，也不保證可以直接編譯。人工 `src/reconstructed/` 是語義模型，與真實 MIPS ABI／軟浮點回傳方式的關係依相應報告閱讀。去識別化文字可能與原組語所引用的原字串不同，但函式位址沒有重排。

## 用自己的備份重現

需要 Python、binwalk、radare2、SquashFS tools（LZMA）、LLVM，選配相容 Ghidra／Java。歷史工具版本：binwalk 3.1.0、radare2 6.2.2、SquashFS 4.7.5、LLVM 19.1.2、Ghidra 12.1.3、Java 21。

```bash
python3 reverse/run.py --input private/read-01/before-1.bin --output private/reverse-case
```

加入 `--headless /absolute/path/to/analyzeHeadless` 可重新匯出 Ghidra 函式。結果寫到新的私人 case，原輸入不修改。script 生成的 images、rootfs、evidence、Ghidra 專案可能含身分／憑證，不能直接公開。

歷史報告引用的 images／evidence 屬本機重現產物，以 inline 路徑標示。公開可直接查看的證據是 `decompiled/`、`symbols/`、人工語義模型與整合報告；原始 bytes 的進一步核對需要自己的備份。
