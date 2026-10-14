# 附件中的執行檔樣本

`tiny_eb`、`tiny_gcc16` 與 `cpp_lean` 是使用者提供的固定測試執行檔。`manifest.json` 的個別 bytes／SHA-256 記錄保留；原附件 archive 本身不公開。

本專案沒有拿到這三支程式的 C／C++／組語來源，也没有重建其工具鏈。它們不屬於宣稱可從本專案來源完整重建的部分。測試服務、hash／資源控制與診斷程式的來源在相鄰 `src/`。

預期 `tiny_eb`／`tiny_gcc16` 輸出 `RLX-OK`，`cpp_lean` 輸出 `CXX-RT-OK`。來源工具鏈版本敘述来自附件，不當作本專案已驗證的编譯 provenance；實際 RTL8196E die 的驗證仍待使用者完成。
