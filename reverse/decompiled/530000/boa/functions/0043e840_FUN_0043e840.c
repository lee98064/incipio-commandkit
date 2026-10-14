/* FUN_0043e840 @ 0043e840 */

void FUN_0043e840(undefined4 param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  uint local_120;
  uint local_11c;
  uint local_118;
  uint local_114;
  int local_110;
  undefined1 auStack_10c [20];
  char local_f8 [200];
  undefined4 local_30;
  
  local_30 = *(undefined4 *)PTR_vwlan_idx_0046a9b0;
  iVar5 = 1;
  do {
    puVar1 = PTR_sprintf_0046a808;
    *(int *)PTR_vwlan_idx_0046a9b0 = iVar5;
    (*(code *)puVar1)(auStack_10c,"wl_disable%d",iVar5);
    uVar2 = (*(code *)PTR_req_get_cstream_var_0046a674)(param_1,auStack_10c,&DAT_0044b32c);
    iVar3 = (*(code *)PTR_strcmp_0046a824)(uVar2,"ON");
    local_120 = (uint)(iVar3 != 0);
    (*(code *)PTR_apmib_set_0046aa28)(0x16,&local_120);
    if (local_120 == 0) {
      (*(code *)PTR_sprintf_0046a808)(auStack_10c,"wl_band%d",iVar5);
      pcVar4 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)
                                 (param_1,auStack_10c,&DAT_0044b32c);
      if (*pcVar4 != '\0') {
        iVar3 = (*(code *)PTR_strtol_0046aa48)(pcVar4,0,10);
        local_11c = iVar3 + 1;
        (*(code *)PTR_apmib_set_0046aa28)(0x4a,&local_11c);
        if ((local_11c & 8) != 0) {
          (*(code *)PTR_apmib_get_0046aadc)(0x19,&local_110);
          (*(code *)PTR_apmib_get_0046aadc)(0x1d,&local_118);
          (*(code *)PTR_apmib_get_0046aadc)(0x26,&local_114);
          if (((local_110 == 2) || (local_110 == 4)) || (local_110 == 6)) {
            local_118 = local_118 & 0xfffffffe;
            if (local_118 == 0) {
              local_118 = 2;
            }
            (*(code *)PTR_apmib_set_0046aa28)(0x1d,&local_118);
            local_114 = local_114 & 0xfffffffe;
            if (local_114 == 0) {
              local_114 = 2;
            }
            (*(code *)PTR_apmib_set_0046aa28)(0x26,&local_114);
          }
        }
      }
      (*(code *)PTR_sprintf_0046a808)(auStack_10c,"wl_ssid%d",iVar5);
      pcVar4 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)
                                 (param_1,auStack_10c,&DAT_0044b32c);
      if (*pcVar4 != '\0') {
        (*(code *)PTR_apmib_set_0046aa28)(1,pcVar4);
      }
      (*(code *)PTR_sprintf_0046a808)(auStack_10c,"TxRate%d",iVar5);
      pcVar4 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)
                                 (param_1,auStack_10c,&DAT_0044b32c);
      if (*pcVar4 != '\0') {
        if (*pcVar4 == '0') {
          local_11c = 1;
          uVar2 = 0x33;
        }
        else {
          local_11c = 0;
          (*(code *)PTR_apmib_set_0046aa28)(0x33,&local_11c);
          iVar3 = (*(code *)PTR_atoi_0046a73c)(pcVar4);
          if (iVar3 < 0x1e) {
            local_11c = 1 << (iVar3 - 1U & 0x1f);
          }
          else {
            local_11c = iVar3 + 0x7fffffe2;
          }
          uVar2 = 0x4b;
        }
        (*(code *)PTR_apmib_set_0046aa28)(uVar2,&local_11c);
      }
      (*(code *)PTR_sprintf_0046a808)(auStack_10c,"wl_hide_ssid%d",iVar5);
      pcVar4 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)
                                 (param_1,auStack_10c,&DAT_0044b32c);
      if (*pcVar4 != '\0') {
        local_11c = (uint)(*pcVar4 != '0');
        (*(code *)PTR_apmib_set_0046aa28)(0x15,&local_11c);
      }
      (*(code *)PTR_sprintf_0046a808)(auStack_10c,"wl_wmm_capable%d",iVar5);
      pcVar4 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)
                                 (param_1,auStack_10c,&DAT_0044b32c);
      if (*pcVar4 == '\0') {
        (*(code *)PTR_apmib_get_0046aadc)(0x4a,&local_110);
        if (local_110 - 10U < 2) {
          local_11c = 1;
          goto LAB_0043ecd8;
        }
      }
      else {
        local_11c = (uint)(*pcVar4 != '0');
LAB_0043ecd8:
        (*(code *)PTR_apmib_set_0046aa28)(0x59,&local_11c);
      }
      (*(code *)PTR_sprintf_0046a808)(auStack_10c,"wl_access%d",iVar5);
      pcVar4 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)
                                 (param_1,auStack_10c,&DAT_0044b32c);
      if (*pcVar4 != '\0') {
        local_11c = (uint)(*pcVar4 != '0');
        (*(code *)PTR_apmib_set_0046aa28)(0x13b,&local_11c);
      }
      (*(code *)PTR_sprintf_0046a808)(auStack_10c,"tx_restrict%d",iVar5);
      pcVar4 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)
                                 (param_1,auStack_10c,&DAT_0044b32c);
      if (*pcVar4 != '\0') {
        local_11c = (*(code *)PTR_atoi_0046a73c)(pcVar4);
        (*(code *)PTR_apmib_set_0046aa28)(0x1c4,&local_11c);
      }
      (*(code *)PTR_sprintf_0046a808)(auStack_10c,"rx_restrict%d",iVar5);
      pcVar4 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)
                                 (param_1,auStack_10c,&DAT_0044b32c);
      if (*pcVar4 != '\0') {
        local_11c = (*(code *)PTR_atoi_0046a73c)(pcVar4);
        (*(code *)PTR_apmib_set_0046aa28)(0x1c5,&local_11c);
      }
      local_11c = 0;
      (*(code *)PTR_apmib_set_0046aa28)(0x12,&local_11c);
      (*(code *)PTR_apmib_set_0046aa28)(0xf,&local_11c);
    }
    iVar5 = iVar5 + 1;
    if (iVar5 == 5) {
      *(undefined4 *)PTR_vwlan_idx_0046a9b0 = local_30;
      FUN_0043c750();
      run_init_script("bridge");
      uVar2 = (*(code *)PTR_req_get_cstream_var_0046a674)(param_1,"submit-url",&DAT_0044b32c);
      (*(code *)PTR_memset_0046a87c)(local_f8,0,200);
      (*(code *)PTR_sprintf_0046a808)
                (local_f8,"/boafrm/formWlanRedirect?redirect-url=%s&wlan_id=%d",uVar2,
                 *(undefined4 *)PTR_wlan_idx_0046a93c);
      *(undefined4 *)PTR_needReboot_0046a9b4 = 1;
      if (local_f8[0] == '\0') {
        (*(code *)PTR_strcpy_0046ac60)(local_f8,"/wizard.htm");
      }
      (*(code *)PTR_req_format_write_0046a95c)
                (param_1,
                 "<html><body><blockquote><h4>Change setting successfully!</h4>Your changes have been saved. The router must be rebooted for the changes to take effect.<br> You can reboot now, or you can continue to make other changes and reboot later.\n"
                );
      (*(code *)PTR_req_format_write_0046a95c)
                (param_1,"<form action=/boafrm/formRebootCheck method=POST name=\'rebootForm\'>");
      (*(code *)PTR_req_format_write_0046a95c)
                (param_1,"<input type=\'hidden\' value=\'%s\' name=\'submit-url\'>",local_f8);
      (*(code *)PTR_req_format_write_0046a95c)
                (param_1,
                 "<input id=\'restartNow\' type=\'submit\' value=\'Reboot Now\' onclick=\"return true\" />&nbsp;&nbsp;"
                );
      (*(code *)PTR_req_format_write_0046a95c)
                (param_1,
                 "<input id=\'restartLater\' type=\'button\' value=\'Reboot Later\' OnClick=window.location.replace(\"%s\")>"
                 ,local_f8);
      (*(code *)PTR_req_format_write_0046a95c)(param_1,"</form></blockquote></body></html>");
      (*(code *)PTR_log_boaform_0046a9d8)("formRebootCheck");
      return;
    }
  } while( true );
}

