# 2026-10-19 工作紀錄（Asia/Taipei）

1. 讀取原廠 upload.htm、Boa handler table、更新／雙槽函式及 imports，確認兩個端點用途不同。
2. 使用者指定另一顆原廠插座，回報 10219-1531、Active Bank 2 及雙韌體已啟用。
3. 建立 v0.2.4／software_version 6；新增專用安裝檔封裝及嚴格 factory kernel 平台核對。
4. 以原廠 MIPS Boa 執行檔驗證格式與 fwd 寫入規劃，再以原廠 bootloader 執行選槽／checksum。
5. 用實際 MIPS 更新器、regular-file NOR fixture 驗證首次匯入、版本確認、下一版簽章 OTA、身分保存及破損拒絕。
6. 產生一顆插座專用的私人 BIN、checksum、指南；未連線或寫入插座。
