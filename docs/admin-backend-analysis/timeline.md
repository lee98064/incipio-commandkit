# 實作與驗證紀錄

2026-10-20（Asia/Taipei），此紀錄只列本輪事件，不推定實機結果。

1. 確認五項管理需求；使用者選擇長按完整恢復出廠，包含 Wi-Fi 與 kWh。
2. 將 HTTP 管理服務改為獨立 PID1 service，加入密碼 enrollment、challenge／session／CSRF 及登入後設定。
3. 增加 owner 內電量清零、確認長按事件與 durable factory intent，修補原廠 HAP reset CLI 的 MIB 身分改寫。
4. 原生／MIPS 各 48 項、SDK 配對／清零／重置、原廠 HAP 模擬重置、BusyBox PID1／DHCP／port 80 轉址驗證通過。
5. 真正 C HTTP backend 的瀏覽器測試找到並修復全域 JavaScript 名稱衝突；重測登入、設定可見性與登出。
6. 產生 v0.2.9 簽章 OTA，核對實際 payload 及部署保存範圍。原機驗收待完成。
