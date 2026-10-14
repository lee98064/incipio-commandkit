# 驗證索引

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

完整 commissioning VM 使用 loopback 端口轉送與本機 mDNS discovery adapter，MCU 为模擬串列對端，不是產品橋接器。Linux 使用相同 SDK 的 Linux native commissioner 與 discovery adapter 才能重現這一個 macOS 控制端整合測試；部分燒錄／個別化 CLI 本身支援 macOS／Linux。

原廠 MIB VM 測試需將自己的相容備份存為 `firmware/matter/private/vendor-mib-backup.bin`，並將 Release rootfs 的四個 runtime libraries 提取到 `firmware/matter/private/public-vendor/lib/`。執行 `python3 firmware/matter/tests/test_device_vendor_mib.py`；它只把 regular RAM files 當作 MTD fixture，不寫實體 Flash。

診斷 VM 先建置其服務、將三支 `samples/` 複製到 `firmware/exec-test/artifacts/`，把自己的 VM 診斷金鑰複製到 `firmware/exec-test/private/diag.key`，再執行 `python3 firmware/exec-test/tests/test_vm.py`。它重建 fixture、驗證三支樣本、故障／逾時／輸出上限、hash 拒絕、HMAC／replay、固定下載與配網頁。

## 原機待驗收

公開重打包、Mac／driver／OTP 相容性、RF／Wi-Fi 掃描、手機 captive portal、家庭 app UI、繼電器及負載切換、10 次重啟與長時間 RAM 穩定性未在本次完成。v0.2 已實作 fabrics 持久化、OTA 與標準量測，其 fixture／VM 檢查見上方新增結果；原機仍須驗收。模擬機／dummy pass 不提升这些狀態。
