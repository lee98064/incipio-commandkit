# CMNDKT-004 HomeKit／Matter 互斥切換報告

日期：2026-10-20；flavor = null；範圍為使用者自有插座韌體、既有原廠 HomeKit ELF 與離線測試。使用者要求先完成協議選擇面板，CH341A 復原暫緩。未連線燒錄器、未重設實機、未發布版本。

## 結論與界線

v0.2.8-preview（software version 10）完成經管理金鑰驗證的 HomeKit／Matter 單選面板。偏好存在既有雙快照 journal，成功讀回才回覆，重啟後套用；不清除 Wi-Fi、Matter fabrics、原廠 HAP／MFi 區或已保存的 kWh。單一開機擁有者及繼承鎖排除重複服務；HomeKit 啟動失敗不自動轉開 Matter。

HomeKit 使用每顆自己的原廠服務與 MFi／配對資料。**此版尚未完成原機 HomeKit、MFi、RF、iPhone 配對或 32 MiB 記憶體驗收**。HomeKit 模式暫停自訂網頁量測與 kWh 累計，舊紀錄保留；不能據此宣稱 Apple「家庭」能顯示電力資料。原廠 HomeKit 重設會改寫 MIB 識別值，故 HomeKit 長按改成只重新啟動；Matter 長按保留原配對重設功能。

操作見[協議選擇](protocol-switching.md)。既有離線插座仍須先經 CH341A 限定區域復原，不能直接收到這份 OTA。

## Evidence

### E-imports：原廠程式身分與相依性

- observed_at: 2026-10-20
- source_type: file / command
- source_ref: v0.2.7 payload 的 `/bin/homekitserver`，先做 ELF／imports 調查，再閱讀既有 Ghidra 530000 輸出。
- content_hash: `2d50339436759f3d602c150fb4f1a42f0fdf122fc18e9a4f54f6e6b07d7a0c62`
- artifact_path: 原始輸出留在忽略版控的私人分析目錄；不在公開文件附上使用者映像。
- raw_excerpt: 2,116,412 bytes；ELF32 big-endian MIPS-I/o32，stripped，動態連結；207 imports；uClibc loader 與 apmib/pthread/dl/rt/m/gcc/libc 相依性均保留。
- repro_command: 在專案根目錄以下列 Python 擷取，再對輸出執行 `rabin2 -I -i -l`（需先準備對應 OTA）。

```python
from pathlib import Path
import sys
sys.path.insert(0, 'tools')
from fwlib import read_file
root = Path('artifacts/releases/v0.2.7-preview/matter.ota').read_bytes()[256:]
Path('/tmp/ck-homekitserver-analysis.elf').write_bytes(read_file(root, 'bin/homekitserver'))
```

### E-boot：原廠控制與重設呼叫

- observed_at: 2026-10-20
- source_type: file / decompile
- source_ref: `main @ 0x0041b3f8`、serial open `0x004335e8`、`Phytrex_HMInitFlash @ 0x00425904`、`FUN_00425670 @ 0x00425670`。
- content_hash: 同 E-imports。
- artifact_path: 同 E-imports。
- raw_excerpt: 主程式 fork，父程序寫 `/var/run/homekitserver.pid`；由 MIB 688 判斷已設定狀態；原廠 reset 路徑執行 `flash default-sw`、`homekitserver -c`、`reboot`。後者觸發 MIB 23 寫入及原廠配對區初始化。
- repro_command: 在相同 ELF 的反編譯中查看上述四個位址；成品差異另由 E-test 的還原 hash 檢查。

### E-test：成品及故障注入

- observed_at: 2026-10-20
- source_type: log / file
- source_ref: [成品驗證](../verification/protocol-switch-results.json)、[網路開機 VM](../verification/network-boot-v0.2.8-results.json)。
- content_hash: `2e745bfad3caad8afdc5632795016a8bae61ca31048681c4bed056180b0bc965`
- artifact_path: `verification/protocol-switch-results.json`
- raw_excerpt: C 儲存／OTA／HTTP／協議套件 native 39、MIPS 39；部署及 HAP 佈局 13。包含錯誤金鑰、body／origin／nonce／重放、journal 中斷、模式雙向切換保留資料、無變更不擦寫、OTA／重設互斥、HomeKit 失敗不轉開 Matter、supervisor 死亡後背景 daemon 繼承鎖。
- repro_command: Linux 建置容器安裝 `tools/requirements.txt`，先建置 production 與 `CK_TESTING=1` 目標，再執行下列命令。Mac 主機可直接執行部署和成品檢查。

```bash
python3 tests/test_updates.py -v
CK_TEST_RUNNER=qemu-mips CK_TEST_BIN=/repo/firmware/matter/artifacts/update-test python3 tests/test_updates.py -v
python3 tests/test_deployment.py --release-dir artifacts/releases/v0.2.8-preview -v
python3 reverse/tools/verify_protocol_release.py --release-dir artifacts/releases/v0.2.8-preview --output verification/protocol-switch-results.json
```

網路 VM 使用真正的原廠 BusyBox init、DHCP 與 production guard/setupd/backend，MIB 與 importer 為 fixture；64 MiB/Linux 4.19 不能等同原機驗收。HAP 背景程序生命週期測試使用 daemon fixture，沒有模擬 MFi 晶片。瀏覽器以本機 fixture 另驗證 radio 互斥、未提供管理檔時不送出切換。

## Findings

| id | 結論 | severity / category | status / confidence | evidence_ids |
|---|---|---|---|---|
| F-1 | 原廠 HAP fork 成背景服務，單靠前景程序退出不能證明 MCU 已釋放；需跨 fork/exec 繼承擁有者鎖及開機快照 | n/a_re / design | validated（離線） / high | E-imports, E-boot, E-test |
| F-2 | 切換必須綁定所選協議的驗證碼，讀回成功後才重啟，且和 OTA／Matter reset 互斥 | n/a_re / design | validated（fixture） / high | E-test |
| F-3 | 原廠長按重設會清 Wi-Fi 並改寫識別值；兩個命令以等長 no-op 取代，保留最後的 reboot | n/a_re / reverse_algo | validated（靜態差異） / high | E-boot, E-test |
| F-4 | 原廠 HomeKit 在這顆實機的重啟／MFi／手機配對相容性 | n/a_re / other | candidate / medium | E-imports, E-test |

F-3 的最終 ELF 可逆還原後 SHA-256 必須完全等於 E-imports，且長度不變。測試固定兩個字串 offset：`0x1ae5b8`、`0x1ae5e0`，避免以模糊字串匹配誤改其他程式內容。初次候選包曾因替換長度少一 byte 未通過檢查；已隔離在忽略版控的本機候選目錄，未交付或寫入。

## Path 與驗收

P-1（callflow）：面板單選 → 一次性 nonce + HMAC 綁定協議 → 取得 transfer 與 Matter operation 排他權 → journal 原子保存／讀回 → 回覆並重啟 → rcS 在 importer 前保存本次開機快照 → PID1 啟動唯一擁有者 → Matter 或原廠 HomeKit。每一步對應 E-test／F-1／F-2；原廠 HAP 身分及 fork 行為對應 E-imports／E-boot／F-3。

HomeKit 健康確認要求連續約 30 秒 PID 與 TCP listener 存活且 Wi-Fi online，沒有宣稱已驗證 MCU ACK；Matter 維持既有新鮮 MCU 狀態確認。HomeKit 異常時保留管理頁，不建立另一個 MCU 程序。下一項實機驗收為安全接線後取得兩次一致的 8 MiB 讀取，限定更新 rootfs；再確認按鍵、Wi-Fi、兩種模式與手機配對。

Timeline：先完成 ELF/imports 與原廠重設行為調查；實作經驗證面板、journal 偏好與單一啟動擁有者；執行 native/MIPS 故障注入及網路 VM；修正候選包 ELF 長度並停用改寫識別值的 HomeKit reset；最後核對成品內 binary、保留區與簽章。未進行硬體寫入。

成品 `matter.ota` SHA-256：`37cb27447b4c0345dcd3c0ba52f32a7da1033c6f0f30f822644ab6eac094ad21`。rootfs checksum extent 2,446,850 bytes，距既有範圍上限尚有 240,126 bytes；沒有擴大 journal 邊界。原廠 Boa／路由器 GUI 已移除，後續共用 `:18082/` 網頁更新。
