# 繼電器與電表通訊

以下是本次兩槽靜態分析；未發送實機命令，沒有 TX/RX 實測擷取。

## UART 與命令

`CONFIRMED`：兩版實際開啟 **`/dev/ttyACM0`**，UART 初始化函式收到 **19200、8N1** 的參數；參數不等於實際設定的 baud。2026-10-13 核對 Bank 2 的分支：19200 落入 `0x00433998`，`cfsetispeed/cfsetospeed` 實際接到 `0x0d`，即 MIPS Linux 的 **B9600**。Bank 1 `0x00433178` 經 pointer `0x005ED7C8` 取得字串 VA `0x005AD928`；Bank 2 `0x004335E8(1)` 經 pointer `0x005EE668` 取得字串 VA `0x005AE7BC`。雖然 debug 訊息寫 `open ttyUSB0`，該訊息不是實際傳給 `open()` 的路徑。先前「實際設定 19200」的敘述已更正；未作儀器 baud 實測。

Bank 1 的具名 `Serial_Gpio_Open` (`0x00433620`) 同時初始化 GPIO 與 UART，後者呼叫 `0x0043334C(fd,19200,8,'N',1)`。Bank 2 UART 初始化移至 `0x00433A90`，呼叫 `0x004337BC(fd,19200,8,'N',1)`；同名 `Serial_Gpio_Open` (`0x00432FEC`) 已是 GPIO/LED 初始化。指標與 raw bytes 見 `../evidence/meter-data.json`。

兩槽的八個 14-byte TX 命令逐 byte 相同，位址及 file offset 見 `../evidence/meter-data.json`。

| 操作 | 14-byte frame | Bank 2 VA |
|---|---|---|
| OFF | `FF A1 00 E0 4C 81 96 C1 C1 30 1B 00 00 55` | `0x00600B00` |
| ON | `FF A1 00 E0 4C 81 96 C1 C1 31 1B 00 00 55` | `0x00600B10` |
| A2，含義未知 | `FF A2 00 E0 4C 81 96 C1 C1 00 1B 00 64 55` | `0x00600B20` |
| A3，含義未知 | `FF A3 00 E0 4C 81 96 C1 C1 00 1B 32 00 55` | `0x00600B30` |
| Relay query | `FF A4 00 E0 4C 81 96 C1 C1 00 1B 32 00 55` | `0x00600B40` |
| Voltage query | `FF A5 00 E0 4C 81 96 C1 C1 00 1B 32 00 55` | `0x00600B50` |
| Current query | `FF A6 00 E0 4C 81 96 C1 C1 00 1B 32 00 55` | `0x00600B60` |
| Power query | `FF A7 00 E0 4C 81 96 C1 C1 00 1B 32 00 55` | `0x00600B70` |

`CONFIRMED`：Bank 2 `Relay_SwitchSetup` (`0x0043485C`) 在 mutex 內寫入 ON/OFF frame，更新快取與持久 HomeKit 狀態。其 ON、OFF 成功都回傳 0；Bank 1 成功回傳的值跟 ON/OFF 狀態相同，兩版 API 行為不可混用。

## 讀值公式：以 byte offset 明確表示

令 `b1`、`b2` 為收到的數值回應起點後 `+1`、`+2` 的**無號** bytes。

`CONFIRMED`，由讀取指令、soft-float 呼叫及原始常數交叉核對：

| 讀值 | 實作算式 | Bank 2 函式 | 常數 |
|---|---|---|---|
| Voltage | `4*b2 + b1/64` | `0x00434110` | float 4.0、double 1/64 |
| Current | `b2 + b1/256` | `0x00433E48` | double 1/256 |
| Power | `256*b2 + b1` | `0x00433B80` | double 256.0 |

Bank 1 `Get_Vrms_value` (`0x00432C18`)、`Get_Irms_value` (`0x00432A68`)、`Get_Power_value` (`0x004328B8`) 以 `memchr(...,0xFF,...)` 找回應起點後作相同計算。先前 guide 對 byte1/byte2 的簡式不夠精確；應使用上述 offset 定義。這是韌體中的算術語義，實際量測單位、校正與非零負載結果仍需真機確認。

## 10219 的背景執行緒

`CONFIRMED`：`meterHandlerInit` (`0x00432B94`) 啟動 `0x00434A3C`。初始化 UART 後，以 select 等待資料與約 5 秒的輪詢節奏；逾時呼叫 `0x004345D4` 更新電壓／電流／功率／繼電器快取並送 HomeKit 事件。getter `get_*_value` 回傳快取；上限常數分別為 300、15、2000，下限為 0。

收到資料時 `0x004332FC` 處理至少兩類尾端事件：`FE 30 30 56` 代表 off，其他 `FE ?? ?? 56` 分支設為 on；`AA FF 00 55` 進入 reset 流程旗標，`AA FF FF 55` 執行原廠 reset/reboot 分支。這些是 parser 條件，並未在本次實機觸發。

Relay query `0x004343D8` 對 `+1`、`+2` 同為 ASCII `'0'` 判為 off。數值 query 與事件 query 的起始條件不同，不能只憑固定 10-byte read 推論所有 RX frame 格式。

`UNKNOWN`：A2/A3、完整 MCU checksum、封包切割／合併規則、實體 MCU 型號、所有 RX frame 類型。未將尾端 `0x55` 或固定 `0x1B` 擅自命名為已證明的 checksum。

重建的純資料／算式 C 檔見 `../src/reconstructed/Socket_Meter.c`；逐函式 machine pseudo-C 與組語見 `../decompiled/530000/homekitserver/functions/`。
