# 從來源重建

可重建的是新增／修改的服務及 rootfs 組裝流程；原廠 bootloader、kernel、Wi-Fi 驅動與 helper libraries 並沒有取得完整原廠原始碼。這些部分由使用者自己的相容 8 MiB 備份提取，保留 bytes。

## 環境與固定版本

Python 3.11+、Docker、主機 LLVM／LLD（具 MIPS backend）、SquashFS tools 的 LZMA 支援。macOS 可安裝 `llvm lld squashfs`。Linux 可安裝 clang／lld／llvm／squashfs-tools；需要時用 `LLVM_BIN` 指定工具目錄。

主要版本：Matter SDK `v1.6.1.0`／commit `3bcdd56ba54fb88b2afb4bfef575014671df7aa7`，GCC 14.3.0、binutils 2.44、uClibc-ng 1.0.54，原廠 Linux 2.6.30.9 headers；目標 MIPS-I、大端、o32、soft-float。`third_party/` 有 commit／下載 SHA-256 與 QR encoder 來源。工具鏈包含禁用不相容指令及舊 netlink headers 的相容修補。

建立本專案自己的 Docker image，不需要過去研究時的 image：

```bash
docker build -t incipio-public-build:v0.1.0-preview .
python3 tools/bootstrap.py --sdk --toolchain --vm
```

bootstrap 只下載固定 commit／SHA-256 的第三方元件，輸出到忽略的 `firmware/matter/deps/`。首次工具鏈建置較久，後續可使用自己的快取：

```bash
docker run --rm -v "$PWD/firmware/matter:/work" incipio-public-build:v0.1.0-preview \
  sh -c 'make -C deps/musl-cross-make -j8 && make -C deps/musl-cross-make install && sh tools/build_uclibc_toolchain.sh'
```

需使用 Linux 的區分大小寫檔案系統解壓舊 kernel headers；腳本已在容器 `/tmp` 處理。SDK、下載、工具鏈與 build 產物不應加入 Git。

## v0.2 一次建立兩版及更新附件

依賴及工具鏈準備完成後，使用 [更新說明](updates.md) 的 `tools/release.py`。它從固定 SHA-256 的公開 v0.1 基底組裝兩種韌體，不需要將私人 Flash 備份交給 CI。新版私鑰需沿用，公鑰已固定於來源。

下列個別建置命令也需先產生版本及更新服務：

```bash
python3 tools/generate_update.py
docker run --rm -v "$PWD/firmware/matter:/work" incipio-public-build:v0.1.0-preview \
  sh tools/build_updates.sh
```

## 提取自己的原廠 helper libraries

```bash
python3 tools/extract_vendor.py --backup private/read-01/before-1.bin --output private/vendor
```

只輸出所需 runtime libraries，提供動態 helper 的真實 ABI。建置時生成的 import-only DSOs 僅用於連結，不部署到裝置；裝置仍使用其原廠 libraries。

## Matter 版

```bash
docker run --rm -v "$PWD/firmware/matter:/work" incipio-public-build:v0.1.0-preview \
  sh tools/build_uclibc_matter_device.sh
docker run --rm -v "$PWD/firmware/matter:/work" -v "$PWD/private/vendor:/firmware:ro" \
  incipio-public-build:v0.1.0-preview sh tools/build_setup_device.sh
python3 tools/build.py matter --binaries firmware/matter/artifacts/softap-device-code \
  --base private/read-01/before-1.bin --output artifacts/matter-8m-region.bin
```

`build.py` 從搬移後的來源編譯診斷、設定頁、RAM runner、Wi-Fi scan 與 lease publisher，稽核 ISA、組裝原廠 Bank 2 rootfs、停用原廠 HomeKit／OTA，加入簽章更新入口，並移除私人憑證。輸出公開格式 BIN 與 JSON；接著使用 [prepare](flashing.md) 個別化，不能直接全片寫入此公開檔。

生成頁面 header 的腳本是來源的一部分；重建可能更新生成 header。沒有共用配對碼的私有 header 依賴。

## 執行檔診斷版

先建置前面的 Matter 共用服務／工具鏈，再編譯舊版 WPA2 設定 helper：

```bash
docker run --rm -v "$PWD/firmware/matter:/work" -v "$PWD/private/vendor:/firmware:ro" \
  incipio-public-build:v0.1.0-preview sh tools/build_setup_legacy.sh
mkdir -p firmware/exec-test/artifacts
cp firmware/matter/artifacts/softap/ck-wificfg firmware/exec-test/artifacts/
cp firmware/matter/artifacts/softap-device-code/ck-wifiscan firmware/exec-test/artifacts/
cp firmware/matter/artifacts/softap-device-code/ck-lease firmware/exec-test/artifacts/
python3 tools/build.py exec-test --binaries firmware/exec-test/artifacts \
  --base private/read-01/before-1.bin --output artifacts/exec-test-8m-region.bin
```

三支附件程式直接取自 `samples/` 的固定 bytes，並保存 hash。其編译來源沒有提供；不可宣稱已重建它們。測試 runner、診斷、portal 和啟動程式有完整自寫來源。

## flashrom 與驗證

Linux／容器建立固定版本 flashrom：

```bash
python3 tools/bootstrap.py --flashrom
```

macOS 安裝 Meson、Ninja、libusb、libftdi 後也使用同一命令。輸出為 `artifacts/flashrom-source/build/flashrom`；使用 `flash.py` 的 `--flashrom` 指定。只建置 CH341A／dummy programmer，不執行實體操作。

```bash
python3 tests/test_deployment.py --release-dir artifacts/releases -v
python3 tests/test_dummy_flashrom.py --flashrom artifacts/flashrom-source/build/flashrom
python3 tools/check_public.py --repository . --release-dir artifacts/releases
```

完整 MIPS／Matter 測試的操作和必要第三方測試工具見 [驗證索引](../verification/README.md)。所有 VM 結果均不能代替 RLX4181／原廠 kernel 或實體射頻驗收。
