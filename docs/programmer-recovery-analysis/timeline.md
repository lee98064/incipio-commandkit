# 復原紀錄

2026-10-20，Asia/Taipei。

1. 使用者確認本次接線條件，要求保留 HomeKit 配對碼等專屬資訊。
2. 初始 JEDEC 回傳 FF，工具停止，未擦除或寫入。重夾後一度可辨識，但第一組兩份備份不一致。
3. 差異集中第一份 kernel；下一份通過校驗。追加兩份完整備份一致，並與前一份有效讀取相同。確認裝置身分吻合且無待執行重置。
4. 確認原廠 OTA 首次安裝 kernel wrapper 已由 production OTA verifier 支援，但 host 復原工具尚未支援相同嚴格替代格式。補上 host 檢查。
5. 確認舊版 OTA 保留 pending version 8、floor 6，會使較新版程式的健康確認失敗。v0.2.10（version 12）加入新版接續狀態，沿用健康確認與 rollback floor。
6. 原生／MIPS 各 50 項、host wrapper 3 項接受與 11 項拒絕、部署 12 項（診斷版未交付，1 項略過）通過。
7. 用實際備份的私人副本執行 MIPS 更新器預演：簽章／kernel 相容、匯入、協議 boot、pending 接續成功；其他 journal key、電量與出廠範圍不變。
8. 實體寫入與開機結果另由當次私人 session 及公開驗證摘要記錄。完整備份、目標映像、金鑰與 HomeKit 資料不公開。

9. Bank 1 rootfs 寫入及內建 verify 通過，再獨立讀回 8 MiB 與完整目標一致；HomeKit pairing／PIN、MIB／MAC、kernel、journal／kWh、Bank 2、factory／校正逐 byte 未變。已請使用者移除接線、裝回外殼後進行短按與設定熱點驗收，未執行長按。
