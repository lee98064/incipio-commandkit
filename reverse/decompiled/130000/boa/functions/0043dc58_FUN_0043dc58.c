/* FUN_0043dc58 @ 0043dc58 */

void FUN_0043dc58(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined *puVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  undefined4 local_158;
  undefined4 local_154;
  undefined1 auStack_150 [40];
  undefined1 auStack_128 [260];
  
  (*(code *)PTR_memset_0046a87c)(auStack_128,0,0x100);
  uVar2 = (*(code *)PTR_req_get_cstream_var_0046a674)(param_1,"wlan_ssid_id",&DAT_0044b32c);
  pcVar3 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)(param_1,"SSID_Setting",&DAT_0044b32c)
  ;
  puVar1 = PTR_mssid_idx_0046a88c;
  if (*pcVar3 == '\0') {
    *(undefined4 *)PTR_mssid_idx_0046a88c = 0;
    iVar5 = -1;
LAB_0043ded8:
    iVar4 = wpaHandler(param_1,auStack_128,*(undefined4 *)PTR_wlan_idx_0046a93c);
    if (iVar4 < 0) {
      if (-1 < iVar5) {
        *(int *)PTR_vwlan_idx_0046a9b0 = iVar5;
      }
LAB_0043e054:
      FUN_004340e4(param_1);
      (*(code *)PTR_req_format_write_0046a95c)
                (param_1,"<html><body><blockquote><h4>%s</h4>\n",auStack_128);
      (*(code *)PTR_req_format_write_0046a95c)
                (param_1,
                 "<form><input type=\"button\" onclick=\"history.go (-1)\" value=\"&nbsp;&nbsp;OK&nbsp;&nbsp\" name=\"OK\"></form></blockquote></body></html>"
                );
      return;
    }
  }
  else {
    iVar4 = (*(code *)PTR_atoi_0046a73c)(pcVar3);
    uVar2 = (*(code *)PTR_atoi_0046a73c)(uVar2);
    *(undefined4 *)puVar1 = uVar2;
    iVar5 = *(int *)PTR_vwlan_idx_0046a9b0;
    *(int *)PTR_vwlan_idx_0046a9b0 = iVar4;
    if (iVar4 < 6) {
      (*(code *)PTR_sprintf_0046a808)(auStack_150,"method%d",*(undefined4 *)PTR_wlan_idx_0046a93c);
      pcVar3 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)
                                 (param_1,auStack_150,&DAT_0044b32c);
      if ((*pcVar3 == '1') &&
         (pcVar3 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)
                                     (param_1,"authType",&DAT_0044b32c), *pcVar3 != '\0')) {
        iVar4 = (*(code *)PTR_strcmp_0046a824)(pcVar3,&DAT_00453708);
        if (iVar4 == 0) {
          local_158 = 0;
        }
        else {
          iVar4 = (*(code *)PTR_strcmp_0046a824)(pcVar3,"shared");
          local_158 = 1;
          if (iVar4 != 0) {
            local_158 = 2;
          }
        }
        (*(code *)PTR_apmib_set_0046aa28)(0x14,&local_158);
        (*(code *)PTR_sprintf_0046a808)(auStack_150,"use1x%d",*(undefined4 *)PTR_wlan_idx_0046a93c);
        pcVar3 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)
                                   (param_1,auStack_150,&DAT_0044b32c);
        if ((*pcVar3 != '\0') && (iVar4 = (*(code *)PTR_strcmp_0046a824)(pcVar3,"ON"), iVar4 != 0))
        {
          local_154 = 0;
          (*(code *)PTR_apmib_set_0046aa28)(0x23,&local_154);
          FUN_0043da70(param_1,param_2,param_3);
          goto LAB_0043e048;
        }
      }
      goto LAB_0043ded8;
    }
    iVar4 = FUN_00437f3c(param_1,auStack_128);
    if (iVar4 != 0) goto LAB_0043e054;
  }
  FUN_0043c750();
  run_init_script("bridge");
  pcVar3 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)(param_1,"submit-url",&DAT_0044b32c);
  *(undefined4 *)PTR_needReboot_0046a9b4 = 1;
  if (*pcVar3 == '\0') {
    (*(code *)PTR_strcpy_0046ac60)(pcVar3,"/wizard.htm");
  }
  (*(code *)PTR_req_format_write_0046a95c)
            (param_1,
             "<html><body><blockquote><h4>Change setting successfully!</h4>Your changes have been saved. The router must be rebooted for the changes to take effect.<br> You can reboot now, or you can continue to make other changes and reboot later.\n"
            );
  (*(code *)PTR_req_format_write_0046a95c)
            (param_1,"<form action=/boafrm/formRebootCheck method=POST name=\'rebootForm\'>");
  (*(code *)PTR_req_format_write_0046a95c)
            (param_1,"<input type=\'hidden\' value=\'%s\' name=\'submit-url\'>",pcVar3);
  (*(code *)PTR_req_format_write_0046a95c)
            (param_1,
             "<input id=\'restartNow\' type=\'submit\' value=\'Reboot Now\' onclick=\"return true\" />&nbsp;&nbsp;"
            );
  (*(code *)PTR_req_format_write_0046a95c)
            (param_1,
             "<input id=\'restartLater\' type=\'button\' value=\'Reboot Later\' OnClick=window.location.replace(\"%s\")>"
             ,pcVar3);
  (*(code *)PTR_req_format_write_0046a95c)(param_1,"</form></blockquote></body></html>");
  (*(code *)PTR_log_boaform_0046a9d8)("formRebootCheck");
  if (iVar5 < 0) {
    return;
  }
LAB_0043e048:
  *(int *)PTR_vwlan_idx_0046a9b0 = iVar5;
  return;
}

