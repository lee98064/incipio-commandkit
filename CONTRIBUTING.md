# 參與開發

Contributions are welcome; project documentation is primarily Traditional Chinese.

## 環境

Python 3.11+、Node 22、C/C++ 編譯器與 Docker。從倉庫根目錄執行：

```bash
python3 -m pip install -r tools/requirements.txt
docker build -t incipio-public-build:v0.1.0-preview .
python3 tools/bootstrap.py --sdk --toolchain
```

固定依賴與工具鏈細節見[建置說明](docs/development/build.md)。

## 測試

下列命令與 [.github/workflows/ci.yml](.github/workflows/ci.yml) 相同，從倉庫根目錄依序執行：

```bash
pip install -r tools/requirements.txt
python3 tools/generate_update.py
python3 tests/test_updates.py
python3 tests/test_legacy_mtd.py
python3 tests/test_startup_recovery.py
python3 tests/test_boot_guard.py
node tests/test_update_crypto.js
node tests/test_password_crypto.js
node tests/test_monitor.js
python3 tests/test_update_feed.py
python3 tests/test_setup_control.py
python3 tests/test_public_management.py
c++ -std=c++11 -Wall -Wextra -Werror firmware/matter/tests/energy_counter_tests.cpp -o /tmp/ck-energy-tests && /tmp/ck-energy-tests
c++ -std=c++11 -Wall -Wextra -Werror firmware/matter/src/relay/RelayEngine.cpp firmware/matter/tests/relay_engine_tests.cpp -o /tmp/ck-relay-tests && /tmp/ck-relay-tests
python3 tests/test_pages_site.py
python3 tests/test_changelog.py
```

macOS 的 `test_updates.py`／`test_legacy_mtd.py`／`test_boot_guard.py` 使用 Linux 容器與獨立 venv（boot-guard 在 macOS 原生會跳過）：

```bash
docker run --rm -v "$PWD:/repo:ro" -w /repo incipio-public-build:v0.1.0-preview sh -c 'python3 -m venv /tmp/ck-tests && /tmp/ck-tests/bin/pip -q install -r tools/requirements.txt && /tmp/ck-tests/bin/python tests/test_updates.py && /tmp/ck-tests/bin/python tests/test_legacy_mtd.py && /tmp/ck-tests/bin/python tests/test_boot_guard.py'
```

## 預覽管理頁

使用真實 C HTTP 服務與示意資料；密碼為 `FixtureAdmin42`。另選本機 port，避免佔用既有 fixture：

```bash
docker run --rm -p 18984:18983 -v "$PWD:/repo:ro" -w /repo incipio-public-build:v0.1.0-preview sh -c 'python3 -m venv /tmp/ck-tests && /tmp/ck-tests/bin/pip -q install -r tools/requirements.txt && /tmp/ck-tests/bin/python tests/serve_admin_fixture.py'
```

瀏覽 `http://localhost:18984/`；停止容器即結束。可用 `CK_FIXTURE_PROTOCOL=homekit`／`CK_FIXTURE_LED=1` 容器環境變數選擇示意情境。

## 提交規則

- 不提交裝置 dumps、金鑰、憑證或任何 `private/` 內容；日誌先去識別化。
- PR 前執行 `python3 tools/check_public.py --repository . --release-dir artifacts/releases/v0.3.0-preview`；其他版本改用對應的已建置附件目錄。
- 文件使用繁體中文（zh-Hant）；英文入口維護於 `README.en.md`。
- 列出測試結果，更新相關文件與 `CHANGELOG.md`。發布流程見[維護者說明](docs/development/releasing.md)。
