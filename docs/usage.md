# 使用說明

先完成 [燒錄及全片讀回](flashing.md)，移除所有燒錄接線，再裝回外殼上電。兩種韌體用途不同，請先確認使用的 Release。

## Matter 版

有效的既有 Wi-Fi 設定會先嘗試重連；無法連線時進入設定熱點。選擇 `CommandKit-Setup-XXXXXX`，此版設定熱點不需密碼。手機瀏覽 `http://192.168.1.254/`，選擇可支援的 2.4 GHz 網路、輸入家中 Wi-Fi 密碼。開放的家中網路可免密碼。

頁面顯示該台插座的 11 位 Matter 設定碼與 QR。這組碼由插座自己的 MAC 與部署時的新私人金鑰產生；相同裝置／金鑰重開保持一致。不要沿用歷史文件、另一台插座或另一個 profile 的 QR。

連上家中網路後，手機切回同一個網路，再從支援 Matter 的家庭 app 加入配件。本版使用開發 VID/PID `0xFFF1/0x8000` 及 SDK 範例 attestation；控制平台的測試整合／中樞條件應按各平台官方文件設定。家庭 app UI 的成功與韌體 commissioning 成功分開驗收。

Matter On/Off/Toggle 會送出 MCU 命令並等待狀態確認；按鍵回報同步到 Matter 屬性。MCU 未確認時命令失敗，不假裝已切換。冷啟動要求 OFF 確認；Identify 與負載燈號邏輯包含於原始碼。首次原機驗收先採無負載測試。

**fabrics／配對紀錄目前只在 RAM，斷電後需重新配對。**本版不啟動 HomeKit server，且停用原廠 OTA。保留 Bank 2 不代表應用崩潰時 bootloader 必然自動切換。

## 執行檔診斷版

本版不啟動 Matter 或 HomeKit，也不提供軟體繼電器切換。它在開機約 30 秒後只執行一輪：

| 樣本 | 預期字樣 | 通過條件 |
|---|---|---|
| `tiny_eb` | `RLX-OK` | exit 0 且含預期字樣 |
| `tiny_gcc16` | `RLX-OK` | exit 0 且含預期字樣 |
| `cpp_lean` | `CXX-RT-OK` | exit 0 且含預期字樣 |

每支程式先核對 SHA-256，再於 RAM 的獨立 chroot／UID 65534 子行程執行。限制 8 MiB 位址空間、20 秒 CPU、30 秒子行程 alarm／35 秒父行程上限；低記憶體時拒絕或終止。結果最多約兩分鐘可取得。

設定熱點採本機新產生的 WPA2 帳密，請讀取自己的 `private/outlet-a/setup-ap.json`，再瀏覽 `http://192.168.1.254/`。有效既有 Wi-Fi 設定仍會先嘗試重連。

`TEST_END … PASS` 才代表該項通過；`TEST_REJECT` 是 RAM、hash 或準備失敗，不足以判定工具鏈相容性。`TEST_FAULT` 在 kernel 允許 ptrace 時包含訊號、PC／cause 與指令。樣本來源僅提供執行檔，見 [樣本說明](../firmware/exec-test/samples/README.md)。

## 下載兩版診斷

電腦與插座使用同一個網路。設定熱點可使用 `192.168.1.254`；家中網路從路由器 DHCP 清單取得 IP。保存到本機 private 目錄：

```bash
python3 tools/diagnostics.py --host 192.168.1.254 \
  --profile private/outlet-a --output private/diagnostics-01.txt
```

診斷服務為 TCP 18080、固定只讀端點，使用一次性 challenge／HMAC-SHA256，不送出金鑰本身。報告上限 96 KiB，包括 kernel／CPU、RAM、行程、MTD、網路及測試紀錄。服務尚未準備好時稍後重試；診斷存於 RAM，斷電前下載。報告可能含本機網路／配對資訊，分享前需另外去識別化。
