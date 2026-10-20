# 驗證索引

v0.2.10 的[CH341A 復原接續報告](../docs/2026-10-20_firmware-programmer-recovery-report.md)、[host wrapper 測試](host-factory-recovery-results.json)、[產物與 50 項原生／MIPS 測試](recovery-v0.2.10-release-results.json)及[硬體寫入摘要](recovery-v0.2.10-hardware-results.json)分開記錄；實機開機狀態以硬體摘要為準。

v0.2.9 管理後台、密碼登入、電量歸零與完整出廠重置見[管理報告](../docs/2026-10-20_firmware-admin-report.md)、[SDK／MIPS](admin-matter-vm-results.json)、[原廠 HAP 重置](homekit-factory-v0.2.9-results.json)與[產物驗證](admin-release-results.json)。原生與 MIPS 各 48 項通過，原機長按、RF、HomeKit／MFi 尚待驗收。截圖使用合成 fixture。

v0.2.7 的實際原廠 BusyBox PID1、production MIPS 控制器、DHCP 取址與 crash／hang／DHCP 用戶端恢復見[網路開機 VM](network-boot-vm-results.json)，完整摘要見[修復結果](wifi-recovery-results.json)。測試另外重現 v0.2.6 在第 5 行因缺少 `touch` 而退出 127；先前故障注入未隔離主機工具 PATH，沒有覆蓋此相容性錯誤。測試 kernel 使用 64 MiB Malta VM，不能當作原機 32 MiB 記憶體或 RF 驗收。新版實體插座安裝仍未完成。

v0.2.6 的完整 SDK／MIPS 配對視窗、未完成 PASE 清理、遠端清除後重新配對、長按事件去重與資料保留見[Matter 重設 VM](matter-reset-vm-results.json)。儲存／OTA 測試 native 與 MIPS runner 各 33 項、部署 12 項、啟動復原 7 項通過。原機結果另見 [Matter 重設驗收](matter-reset-results.json)；實體按壓門檻不以模擬 MCU 事件推定。

v0.2.5 公開共用安裝檔的隨機金鑰、斷電復原、舊身分沿用及管理金鑰下載見[自動身分結果](automatic-identity-results.json)。原廠程式執行見[公開首次安裝包](public-factory-boa-results.json)，實際 MIPS 配對碼／QR 與後續更新見[公開包 OTA](public-factory-ota-results.json)。原機首次安裝及隨機收集時間未驗收。

v0.2.4 的原廠網頁首次安裝包見 [Boa／bootloader 原程式離線執行](factory-boa-results.json)與[首次匯入及後續 OTA](factory-ota-results.json)。原廠插座實際首次寫入／開機未執行，見[使用條件](../docs/factory-install.md)。

v0.2.3 的手機即時監測頁、RAM 快照、讀值過期、完整 Matter／HTTP VM 比對，以及原機 OTA 安裝狀態見[監測頁驗證](monitor-results.json)。

v0.2.2 的舊 MTD、配網啟動、身分等待及 MCU 退路修復見[修復結果](recovery-results.json)；原機開機驗收狀態與模擬結果分別記錄。

v0.2.1 的軟體累積 kWh、獨立 Flash 循環紀錄及標準能源訂閱見 [電量結果](energy-results.json)。

v0.2 的新增測試見 [OTA／持久儲存／量測結果](ota-results.json)；以下歷史 v0.1 結果與新版本分開保存。

歷史結果見 [test-results.json](test-results.json)、[公開包稽核](public-audit.json)、[flashrom dummy backend](dummy-flashrom.json)。公開 manifest 的 hash 對應本次檔案；原始 VM console／配對記錄只留在本機。

本次獨立 SDK 建置使用搬移後的來源與本專案 Dockerfile，第三方 SDK／編譯器使用固定版本快取的獨立複本，不讀取原研究來源路徑。原廠 libraries 從裝置備份提取；公開重打包只替換等長 debug source path 字串。

## 可重跑的檢查

先依 [建置說明](../docs/build.md)準備依賴、服務、Release 附件；部署與 dummy tests 使用合成 Flash，不需要插座：

```bash
python3 tests/test_deployment.py --release-dir artifacts/releases -v
python3 tests/test_dummy_flashrom.py --flashrom artifacts/flashrom-source/build/flashrom
python3 tools/check_public.py --repository . --release-dir artifacts/releases
node tests/test_monitor.js
```

MIPS HTTP／診斷／身分測試使用 Docker 內的 qemu-user 或 Malta／24Kc／Linux 4.19 VM。測試金鑰須在本機重新產生，不能複製公開範例固定碼。先在 `firmware/matter/private/` 準備 `diag.key`（64 位十六進位及換行）與 `device-identity.key`（32 bytes），權限 0600：

```bash
python3 - <<'PY'
from pathlib import Path
import secrets
p=Path('firmware/matter/private'); p.mkdir(mode=0o700, exist_ok=True)
for name, data in [('diag.key', secrets.token_hex(32).encode()+b'\n'),
                   ('device-identity.key', secrets.token_bytes(32))]:
    f=p/name
    if not f.exists():
        f.write_bytes(data); f.chmod(0o600)
PY
```

macOS 的獨立 QR 掃描測試需要 Pillow、Swift／Apple Vision 與相同 SDK 的 native chip-tool。可以用 `firmware/matter/tools/build_chiptool_macos.py` 建立控制端（Apple Silicon macOS、Python 3.12／LLVM／Ninja）；其 build.json 與原始控制端日誌皆留在忽略目錄。

```bash
python3 firmware/matter/tools/build_chiptool_macos.py
python3 firmware/matter/tests/test_device_identity.py
python3 firmware/matter/tests/test_device_portal.py
docker run --rm -v "$PWD/firmware/matter:/work" incipio-public-build:v0.1.0-preview \
  python3 tools/build_matter_device_fixture.py
python3 - <<'PY'
import sys
sys.path.insert(0, 'firmware/matter/tests')
from test_device_identity import generate
assert generate('VM', '52:54:00:12:34:56')[0] == 0
PY
python3 firmware/matter/tools/test_device_vm.py
```

Matter 重設測試需先以 `CK_TESTING=1` 建置更新服務、以 `CK_UPDATE_TEST=1 CK_GN_EXTRA=incipio_update_test=true` 建置 Matter 與 persistent VM fixture，並建置目前版本的 `ck-setupd`。接著在 macOS 執行：

```bash
CK_SDK_DIR=firmware/matter/deps python3 tests/test_matter_reset_vm.py
```

此測試會完整配對、以 PASE-only 模擬未完成配對、呼叫經驗證的控制 API、確認原控制器失效後再用新控制器配對，並注入 MCU 的兩種長按重設事件。私人 VM console 與控制器紀錄不發布。

完整 commissioning VM 使用 loopback 端口轉送與本機 mDNS discovery adapter，MCU 为模擬串列對端，不是產品橋接器。Linux 使用相同 SDK 的 Linux native commissioner 與 discovery adapter 才能重現這一個 macOS 控制端整合測試；部分燒錄／個別化 CLI 本身支援 macOS／Linux。

原廠 MIB VM 測試需將自己的相容備份存為 `firmware/matter/private/vendor-mib-backup.bin`，並將 Release rootfs 的四個 runtime libraries 提取到 `firmware/matter/private/public-vendor/lib/`。執行 `python3 firmware/matter/tests/test_device_vendor_mib.py`；它只把 regular RAM files 當作 MTD fixture，不寫實體 Flash。

診斷 VM 先建置其服務、將三支 `samples/` 複製到 `firmware/exec-test/artifacts/`，把自己的 VM 診斷金鑰複製到 `firmware/exec-test/private/diag.key`，再執行 `python3 firmware/exec-test/tests/test_vm.py`。它重建 fixture、驗證三支樣本、故障／逾時／輸出上限、hash 拒絕、HMAC／replay、固定下載與配網頁。

## 原機待驗收

公開重打包、Mac／driver／OTP 相容性、RF／Wi-Fi 掃描、手機 captive portal、家庭 app UI、繼電器及負載切換、10 次重啟與長時間 RAM 穩定性未在本次完成。v0.2 已實作 fabrics 持久化、OTA 與標準量測，其 fixture／VM 檢查見上方新增結果；原機仍須驗收。模擬機／dummy pass 不提升这些狀態。

- [HomeKit／Matter 切換](protocol-switch-results.json)：v0.2.8 成品、ELF 佈局、互斥與資料保留檢查；原機配對待驗收。
- [v0.2.8 網路開機 VM](network-boot-v0.2.8-results.json)：原廠 BusyBox、DHCP、監督與身分延後就緒。
