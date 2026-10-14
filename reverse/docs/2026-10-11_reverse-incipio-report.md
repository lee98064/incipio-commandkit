# Incipio CMNDKT-004：session-02 韌體逆向報告

日期：2026-10-11。report flavor：null；本報告為離線韌體分析，沒有宣告已驗證漏洞或完成利用。

本次 8 MiB 映像含 **10206、10219 兩版**。已提取兩槽 rootfs、bootloader、kernel，建立 19 個可繼續分析的 Ghidra 專案，匯出 **2,297 個函式的 C 偽碼與組語**。原圖的兩槽 checksum 均通過；bootloader 規則在此映像優先選 Bank 2／10219。兩版 UART 實際路徑都是 `/dev/ttyACM0`、19200 8N1；10219 改成背景輪詢與快取電表讀值。

所有產物在本 session 的 `reverse/` 下，[README](../README.md) 提供檔案索引。反編譯偽碼並非原廠原始碼；kernel 未完整逐函式反編譯，機器輸出的未知型別／indirect call 仍須判讀。

## 範圍與來源

使用者授權分析此 session 的 BIN，並指定參考工作區 `agent.md`。完整範圍見 scope.md（本機重現產物：`../scope.md`）。唯一主輸入為 `../original_master.bin`，8,388,608 bytes，SHA-256：

```text
[原裝置完整 dump hash 已去識別化]
```

本次 master 與 `agent.md` 所引用的前次 `d4a4ca...` 不同。先前 bundle 保留原狀；本報告的版本、mark 與邏輯依本次 bytes 重驗。原 master 保持 0444；沒有燒錄、MTD 寫入、韌體執行、UART 命令、repack 或 boot-test。配對資訊與 private device data 沒有列入報告。工具安裝紀錄在 `evidence/tool-install.log`。

## 提取結果與方法

| 項目 | Bank 1 | Bank 2 |
|---|---|---|
| 槽偏移 | `0x000000` | `0x400000` |
| kernel header | `0x010000`，`cr6c` | `0x410000`，`cr6c` |
| kernel 入口 | `0x80500000` | `0x80500000` |
| mark | `0x8000004B` | `0x8000004C` |
| rootfs offset | `0x130000` | `0x530000` |
| customize.version | `10206` | `10219` |
| /etc/version 建置日期 | 2015-11-18 | 2016-09-14 |
| SquashFS bytes_used | 2,592,306 | 2,342,801 |
| inode 數 | 743 | 601 |
| 提取普通檔案／symlink | 350／79 | 212／76 |
| ELF 數 | 56 | 47 |

binwalk 用於格式辨識；精確範圍由 Python 解析與 LZMA 解壓交叉檢查。unsquashfs 提取檔案並保存 special device metadata；macOS 未建立的各槽 287 個 device nodes 仍完整保存在 `.sqsh`、listing 和 pseudo 檔。103 個 ELF 都保存架構／imports；96 個恢復了 PT_DYNAMIC symbols，其餘 7 個保留工具 symbols 原始結果與失敗原因，沒有假造 symbols。

ELF 是 MIPS32 big-endian／o32，SquashFS metadata 為 little-endian。程式常見 section header 不可用，改由 PT_DYNAMIC／PT_LOAD 恢復 symbols 與 address mapping。bootloader 解壓後載入 **`0x80400000`**，gp 為 `0x80420EF4`，ROM reset 區另以 `0xBFC00000` 解讀。錯用基址或 float ABI 會產生錯誤偽碼；本次保存型別修正腳本及組語供核對。

兩槽 rootfs 有 263 個相同的檔案／symlink 路徑，以及 166 個變更／新增／刪除項目。函式 bytes 的差異可含 relocation，不能直接解釋為語義變更。差異記錄見 `evidence/bank-comparison.json`、`evidence/function-comparison.json`。

## Evidence

每條證據記錄含觀察時間、source_ref、artifact_path、SHA-256、重現命令及脫敏 excerpt。以下連到記錄；所有原始產物另由 `SHA256SUMS` 覆蓋。

| ID | 觀察 | 記錄 |
|---|---|---|
| E-001 | 本次映像／精確 carving 與 hash | E-001（本機重現產物：`../evidence/E-001.md`） |
| E-002、E-003 | 10219、10206 的版本檔 | E-002（本機重現產物：`../evidence/E-002.md`）、E-003（本機重現產物：`../evidence/E-003.md`） |
| E-004 | 提取、反編譯與 checksum 檢查通過 | E-004（本機重現產物：`../evidence/E-004.md`） |
| E-005、E-006、E-007 | selector 組語、實際 checksum、rootfs validator | E-005（本機重現產物：`../evidence/E-005.md`）、E-006（本機重現產物：`../evidence/E-006.md`）、E-007（本機重現產物：`../evidence/E-007.md`） |
| E-008、E-009、E-010 | meter raw tables、實際 open 呼叫與數值算式 | E-008（本機重現產物：`../evidence/E-008.md`）、E-009（本機重現產物：`../evidence/E-009.md`）、E-010（本機重現產物：`../evidence/E-010.md`） |
| E-011 | 背景 meter thread | E-011（本機重現產物：`../evidence/E-011.md`） |
| E-012、E-013、E-014 | OTA device table、寫槽分支、RSA envelope | E-012（本機重現產物：`../evidence/E-012.md`）、E-013（本機重現產物：`../evidence/E-013.md`）、E-014（本機重現產物：`../evidence/E-014.md`） |
| E-015 | ELF 架構、imports、dependencies | E-015（本機重現產物：`../evidence/E-015.md`） |

重現命令的工作目錄均為本 `reverse/`。證據來自原始 bytes、獨立解析、組語與反編譯的交叉核對；validated 僅表示所描述的**靜態語義／離線計算**獲核對，不表示真機行為已測試。

## Findings

### F-001：兩版檔案系統與核心應用均已提取

- severity: n/a_re
- category: other
- status: validated
- evidence_ids: [E-001, E-002, E-003, E-004, E-015]
- location: Flash `0x130000`／`0x530000`；`rootfs_130000/`／`rootfs_530000/`
- confidence: high
- impact: 可從本次映像繼續檢視兩版腳本、設定、ELF、imports、symbols 與核心應用；避免混用前次 dump。
- repro_steps: 執行 `tools/extract_firmware.py`、`tools/extract_rootfs.py`、`tools/analyze_elf.py`；在既存產物執行 `tools/validate_artifacts.py`。需在新輸出目錄重做 extraction，詳見 README。
- remediation: n/a；純逆向。
- residual_risk: 未逐函式反編譯所有庫與 Linux kernel；special nodes 以 metadata 保留。

### F-002：普通無號 mark 比較與校驗 fallback

- severity: n/a_re
- category: reverse_algo
- status: validated
- evidence_ids: [E-005, E-006, E-007]
- location: RAM bootloader `0x804086B0`、`0x80407AA8`、`0x804084BC`、`0x80408140`
- confidence: high
- impact: Bank 2 嚴格較大才優先；相等選 Bank 1。完整檢查模式中優先槽無效才檢查另一槽；probe-only 模式不代表 checksum 通過。本次兩槽皆有效，離線選 Bank 2。
- repro_steps: 查看 `asm/boot_804086b0.s` 與 `asm/boot_80408140.s`，執行 `python3 tools/inspect_image.py` 重算本次 checksum。
- remediation: n/a；純逆向。
- residual_risk: 未測試真機 fallback／斷電。selector 沒有 modulo rollover 排序；polling counter 不能當作持久 boot-failure counter。

kernel checksum 是 payload 的 BE16 加總取低 16 bits。rootfs checksum 長度為 `BE32(rootfs+8)+0x282`，兩槽分別 `0x279002`、`0x23C002`；兩者包含 padding／checksum word，與 SquashFS bytes_used 不同。此 vendor 欄位使 binwalk 顯示 2038 的假 mkfs 日期，建置日期應取 inode／版本資訊。詳見 [boot_flow.md](boot_flow.md)、[flash_map.md](flash_map.md)。

### F-003：UART 路徑與命令／算式可恢復

- severity: n/a_re
- category: reverse_algo
- status: validated
- evidence_ids: [E-008, E-009, E-010]
- location: 10219 `homekitserver` `0x004335E8`、`0x004337BC`、`0x00433A90`、`0x00433B80`；10206 對應函式見 meter 文件。
- confidence: high
- impact: 兩版實際開 `/dev/ttyACM0`，19200 8N1；八個 14-byte TX 命令相同。不能採信 `open ttyUSB0` debug 字串。令 b1/b2 為數值回應起點後 +1/+2 無號 bytes：V=`4*b2+b1/64`，I=`b2+b1/256`，P=`256*b2+b1`。
- repro_steps: 執行 `python3 tools/extract_tables.py` 取得 raw pointers／frames／float 常數，再核對逐函式 `.s` 與 [meter_protocol.md](meter_protocol.md) 所列所有讀值位址。
- remediation: n/a；純逆向。
- residual_risk: 完整 RX framing、MCU checksum、A2/A3、實際單位／校正與非零負載尚待 TX/RX 捕獲確認。

### F-004：10219 改用背景輪詢與快取

- severity: n/a_re
- category: design
- status: validated
- evidence_ids: [E-010, E-011]
- location: `meterHandlerInit` `0x00432B94` → thread `0x00434A3C` → poll `0x004345D4`
- confidence: high
- impact: getter 回傳快取；背景 thread 負責 UART、輪詢、relay 狀態及 HomeKit events。移植時不能把 10206 的同步 getter 控制流直接套用到 10219。電表快取上限為 V 300／I 15／P 2000。
- repro_steps: 比對兩版 `homekitserver/functions.tsv` 的 getter、thread 與 relay 函式，核對 `0x00434A3C`、`0x004345D4`、`0x004332FC` 的 `.c`／`.s`。
- remediation: n/a；純逆向。
- residual_risk: 尚未測試 thread timing、事件封包、HomeKit 執行時同步。10219 relay ON/OFF 成功都回 0，10206 成功值跟狀態相同。

### F-005：OTA 自訂 RSA envelope 與另一槽寫入流程

- severity: n/a_re
- category: reverse_algo
- status: validated
- evidence_ids: [E-012, E-013, E-014]
- location: 10219 `upgfw` `Upload` `0x00413850`、signature `0x00413600`、`FirmwareUpgrade` `0x00414F6C`
- confidence: high
- impact: 檢查尾端 `dual`／`dver`，以 RSA 公鑰解出資料並比對 SHA-1 hex；通過後才寫入。雙槽啟用時以 `/proc/bootbank` 選另一槽；kernel 路徑為 mtdblock0／3，rootfs 為 mtdblock1／4。新 mark 由 active mark 產生；特殊值 `0xFFFFFFF0` 與普通加一規則分支獨立。
- repro_steps: 執行 `tools/extract_tables.py`，比對 signature、RSA wrapper、digest、target selector、mark generator 和 FirmwareUpgrade 的 `.c`／`.s`；位址見 [ota_flow.md](ota_flow.md)。
- remediation: n/a；純逆向。
- residual_risk: 未下載或測試 OTA，未證明篡改映像可燒入；完整 MTD 實體 offset 與當前雙槽設定須取得真機 `/proc/mtd`、`/proc/bootbank`。

### F-006：Matter 移植可行性仍未證明

- severity: n/a_re
- category: other
- status: candidate
- evidence_ids: [E-001, E-008, E-015]
- location: MIPS BE／o32、uClibc 0.9.30.3、Linux 2.6.30.9；[matter_feasibility.md](matter_feasibility.md)
- confidence: medium
- impact: 可提供硬體控制與 ABI 前置資料，尚不足以判定現代 Matter SDK 能在原硬體正常建置／執行。
- repro_steps: 檢視 ELF info、kernel strings、`etc/version` 及 meter 文件；後續需要真機 RAM／IPv6／MTD 狀態與實際交叉編譯測試。
- remediation: n/a；純逆向。
- residual_risk: 沒有 SDK build、UDPv6 multicast 測試、MCU 動態擷取或修改槽 boot-test，故沒有試驗韌體產物。

## Paths

### P-001：從 reset 到選槽校驗

- path_type: callflow
- start: ROM `0xBFC00000`
- goal: 解釋本次映像為何選 Bank 2
- steps:
  1. reset trampoline／LZMA 解壓到 `0x80400000`。evidence: E-001；finding: F-001。
  2. `find_bank_header` 與 `normalize_bankmark` 探測並比較兩槽 mark。evidence: E-005；finding: F-002。
  3. 完整檢查模式以 kernel／rootfs sum16 驗證優先槽；無效才 fallback。evidence: E-006、E-007；finding: F-002。
  4. 本次 mark 4C > 4B，且兩槽 sum16=0，離線選 Bank 2。evidence: E-006；finding: F-002。
- residual_risks: 未實際 boot；MMIO publish 狀態不等於寫入 Flash mark。

### P-002：10219 電表讀值到 HomeKit

- path_type: callflow
- start: `meterHandlerInit` `0x00432B94`
- goal: 恢復 UART、輪詢、快取及 getter 關係
- steps:
  1. 建立 `0x00434A3C` thread，初始化 ACM0／19200 8N1。evidence: E-009、E-011；finding: F-003、F-004。
  2. 使用八個已提取 TX frames；數值 query 解析 bytes 並用 soft-float 常數計算。evidence: E-008、E-010；finding: F-003。
  3. select／逾時 poll 更新快取，事件 parser 更新 relay／reset 分支。evidence: E-011；finding: F-004。
  4. getter 回傳快取、HomeKit 上報事件。evidence: E-010、E-011；finding: F-004。
- residual_risks: TX/RX frame 完整格式與真機 timing 尚未捕獲。

### P-003：OTA 驗證到目標槽

- path_type: callflow
- start: `upgfw main` `0x00410E60`
- goal: 恢復 OTA 信任檢查與 bank 選擇
- steps:
  1. 下載後由 `Upload` 解析，signature branch 執行 RSA／SHA-1／版本檢查。evidence: E-014；finding: F-005。
  2. 讀雙槽開關及 `/proc/bootbank` 決定 target。evidence: E-012、E-013；finding: F-005。
  3. FirmwareUpgrade 驗 checksum、選 table 對應 MTD、產生新 mark 後分塊寫入。evidence: E-012、E-013；finding: F-005。
- residual_risks: 此為靜態呼叫路徑；未觸發下載、write、sync 或 reboot。

## 檢查結果與交付

validation.json（本機重現產物：`../evidence/validation.json`） 記錄所有 checks 通過：原圖 hash／0444、10 份 image artifact、562 個普通檔案的獨立 SquashFS 內容對照、全部 symlink／metadata counts、103 個 ELF evidence、18 份 ELF 複本、19 個 Ghidra 專案及 2,297 份逐函式 C／組語。兩個人工整理 C 檔通過 `clang -std=c11 -Wall -Wextra -fsyntax-only`。

Checklist（本機重現產物：`../checklist.md`） 記錄本次工作的完成條件；Timeline（本機重現產物：`../timeline.md`） 依本地產物時間記錄各階段。`SHA256SUMS` 驗證所有交付普通檔案；symlink 的文字 target 由 rootfs inventory 保存並由 artifact QA 核對。

目前可閱讀或繼續修改 Ghidra 專案；沒有可直接燒錄的重建韌體。若繼續 `agent.md` 的移植工作，所需外部觀察為真機 MTD／bootbank／RAM／IPv6 狀態與 MCU TX/RX 擷取，再進行 build／boot-test。
