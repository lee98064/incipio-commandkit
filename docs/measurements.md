# Matter 電力量測

v0.2 在同一個 endpoint 1 宣告 On/Off Plug-in Unit 與 Electrical Sensor，提供標準 ElectricalPowerMeasurement（`0x0090`）、ElectricalEnergyMeasurement（`0x0091`，累積匯入電量）及 PowerTopology（`0x009C`，NodeTopology）。已配對且獲 ACL 允許的 Matter controller 可透過標準讀取／訂閱取得相同資料，不使用廠商私有 characteristic 或 Apple 專屬橋接。

**可配對不等於該系統已實作電力量測 UI。** Matter 1.3 加入標準電力／能源回報；較舊或尚未支援這些叢集的 controller 可能只顯示開關。Apple 官方 Matter framework 提供此類 cluster API，但本專案沒有完成 iPhone 家庭 app 或其他家庭平台的真機 UI 驗收，不能保證每個 app 都會顯示每個欄位。

## 可取得的數值

| 屬性 | ID | Matter 單位 | MCU 換算 | 語義 |
|---|---|---|---|---|
| Voltage | `0x0004` | mV | `round(raw × 1000 / 64)` | 原廠 Vrms，通用電壓欄位 |
| RMSVoltage | `0x000B` | mV | 同上 | 明確標示 RMS 的同一讀值 |
| RMSCurrent | `0x000C` | mA | `round(raw × 1000 / 256)` | 原廠 Irms |
| ActivePower | `0x0008` | mW | `raw × 1000` | 原廠 Power |

`raw = b1 + 256*b2`，數值回應為 `FF b1 b2 55`。A5、A6、A7 查詢與原廠公式來自既有[逐 byte 協議核對](../reverse/docs/meter_protocol.md)。例如 `FF 40 1B 55` 在 A5 查詢後對應 109000 mV；`FF 80 01 55` 在 A6 後對應 1500 mA；`FF F4 01 55` 在 A7 後對應 500000 mW。

這是依原廠 Vrms／Irms／Power 命名、算式及 300／15／2000 上限採用的**名義 V／A／W 映射**。原機與參考電表比對、非零負載精度及校正仍待驗收，不宣稱計費精度。Accuracy 列出量測類型及名義範圍，沒有填入未經證實的誤差百分比。

只取得 RMS 電流，不能據此聲稱得到 ActiveCurrent（同相分量）；此屬性不列入 AttributeList。未取得的 reactive/apparent power、頻率及功率因數不宣告。v0.2.1 新增由功率積分的軟體累積電量，透過標準 ElectricalEnergyMeasurement 回報，Accuracy.Measured=false 表示估算，不宣稱 MCU 有獨立硬體能源計數器。

## 更新、過期與通知

單一 MCU owner 依序查詢，電力量測約每 5 秒一次；繼電器確認命令優先。每次只有一個待回覆查詢，拆段回應逐 byte 解析。數值回應沒有 transaction ID，因此無法從內容判別任意延遲跨查詢的回覆；逾時後加入安靜間隔並忽略非待查詢數值，實際最大回應延遲仍需原機確認。

查詢逾時、斷線、超出原廠名義上限，或資料超過 15 秒，屬性為 Matter `null`。有效的 0 保持為 0；失去資料不補 0，不依繼電器狀態推算功率。讀值變更及有效／null 轉換會通知 Matter reporting engine，依 controller 訂閱間隔回報。

## 累積耗電 kWh

`CumulativeEnergyImported.Energy` 是自功能初始化以來的累積用電，標準單位為 mWh；除以 **1,000,000** 就是 kWh。1,000 W 持續 1 小時會累積 1 kWh。

韌體對相鄰有效功率樣本作梯形積分：`ΔmWh = (前次 mW + 本次 mW) × Δ毫秒 / 7,200,000`。保留除法餘數，避免每 5 秒截斷造成小負載電量消失。只有相鄰、有效且相隔不超過 7.5 秒的樣本才累積；過期、斷線或查詢失敗會清除積分基準，恢復後重新起算，不補算缺測或斷電時間。

兩個獨立 4 KiB Flash pages 以 64-byte record 循環記錄總量、餘數及序號，並以 SHA-256、最後寫入的 commit word 及讀回驗證保護。每 page 64 筆、共 128 筆；只有輪替到另一 page 才擦除，保留最近有效紀錄。設定 journal 不會擦除這兩個電量 pages。

約每 **30 秒**保存一次，正常停止及 OTA 停止時另嘗試保存。Matter 只回報已確認保存的總量，因此一般斷電重開不會把先前已顯示的數字倒退。突然斷電可能遺失最後約 30 秒尚未保存的積分，加上尚未收到下一個功率樣本的時間；以 2,000 W 負載及 35 秒為例，約對應 0.0195 kWh。Flash 寫入失敗時維持上次已保存值並記錄錯誤，失敗期間損失可能更大，不聲稱完全零損失。

新功能起點為 0，不能還原功能安裝前的歷史耗電。保留資料跨重啟及後續 OTA；本版未提供清零操作。舊 journal 若曾用超過新的 61,376-byte payload 容量，會拒絕啟用電量紀錄，保留原資料供遷移，不會為電量強制擦除配對。

## 使用標準 controller 驗證

以下 node ID `12344321` 是本機 VM 測試節點，實際使用時改成自己的 node ID：

```bash
chip-tool descriptor read device-type-list 12344321 1
chip-tool descriptor read server-list 12344321 1
chip-tool electricalpowermeasurement read attribute-list 12344321 1
chip-tool electricalpowermeasurement read voltage 12344321 1
chip-tool electricalpowermeasurement read rmscurrent 12344321 1
chip-tool electricalpowermeasurement read active-power 12344321 1
chip-tool electricalpowermeasurement subscribe active-power 1 10 12344321 1
chip-tool electricalenergymeasurement read cumulative-energy-imported 12344321 1
chip-tool electricalenergymeasurement read accuracy 12344321 1
# 訂閱需使用 chip-tool interactive start 保持控制端運作
chip-tool electricalenergymeasurement subscribe cumulative-energy-imported 1 60 12344321 1
```

模擬機測試使用實際 MIPS Matter stack、完整 commissioning、加密 CASE、kernel TTY 及可控制的 MCU 對端，驗證縮放、訂閱變更、過期 null、恢復、估算電量、缺測暫停及電量跨重啟保存；結果見[驗證紀錄](../verification/energy-results.json)。模擬 MCU 數值只作測試，不植入產品執行路徑。

## 平台驗收與來源

原機需要與參考電表比對電壓／電流／功率；再以每個目標系統完成配對、讀取、訂閱與失聯測試。Apple 家庭 iPhone 是使用者的優先 UI；尚未取得該 UI 實測證據。不能用 chip-tool 成功代替 Apple 家庭或其他系統已顯示成功。

- [CSA：Matter 1.3 的即時電力與能源回報](https://csa-iot.org/newsroom/matter-1-3-specification-released/)
- [固定 SDK 的標準 ElectricalPowerMeasurement 實作](https://github.com/project-chip/connectedhomeip/tree/3bcdd56ba54fb88b2afb4bfef575014671df7aa7/src/app/clusters/electrical-power-measurement-server)
- [Apple Matter framework](https://developer.apple.com/documentation/matter)
- [Apple Matter 互通說明](https://developer.apple.com/apple-home/matter/)
