/* FUN_0043cc20 @ 0043cc20 */

void FUN_0043cc20(undefined4 param_1)

{
  char *pcVar1;
  int iVar2;
  undefined2 uVar3;
  int iVar4;
  undefined4 local_148;
  int local_144 [5];
  undefined4 local_130;
  undefined4 local_12c;
  undefined1 auStack_128 [256];
  
  (*(code *)PTR_memset_0046a87c)(auStack_128,0,0x100);
  pcVar1 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)(param_1,"wlsch_onoff",&DAT_0044b32c);
  if (*pcVar1 != '\0') {
    local_148 = (*(code *)PTR_atoi_0046a73c)(pcVar1);
    iVar2 = (*(code *)PTR_apmib_set_0046aa28)(0x1f7,&local_148);
    if (iVar2 == 0) {
      pcVar1 = "set  MIB_WLAN_SCHEDULE_ENABLED error!";
      goto LAB_0043cf74;
    }
  }
  iVar2 = (*(code *)PTR_apmib_set_0046aa28)(0x401fc,local_144);
  iVar4 = 1;
  if (iVar2 == 0) {
    pcVar1 = "MIB_WLAN_SCHEDULE_DELALL error!";
  }
  else {
    while( true ) {
      local_144[1] = 0;
      local_144[2] = 0;
      local_144[3] = 0;
      local_144[4] = 0;
      local_130 = 0;
      local_12c = 0;
      local_144[0] = iVar4 << 0x18;
      (*(code *)PTR_apmib_get_0046aadc)(0x81f9,local_144);
      iVar2 = iVar4 + -1;
      (*(code *)PTR_memset_0046a87c)(auStack_128,0,0x100);
      (*(code *)PTR_sprintf_0046a808)(auStack_128,"wlsch_enable_%d",iVar2);
      pcVar1 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)
                                 (param_1,auStack_128,&DAT_0044b32c);
      if (*pcVar1 != '\0') {
        uVar3 = (*(code *)PTR_atoi_0046a73c)(pcVar1);
        local_130 = CONCAT22(uVar3,local_130._2_2_);
      }
      (*(code *)PTR_memset_0046a87c)(auStack_128,0,0x100);
      (*(code *)PTR_sprintf_0046a808)(auStack_128,"wlsch_day_%d",iVar2);
      pcVar1 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)
                                 (param_1,auStack_128,&DAT_0044b32c);
      if (*pcVar1 != '\0') {
        uVar3 = (*(code *)PTR_atoi_0046a73c)(pcVar1);
        local_12c = CONCAT22(local_12c._0_2_,uVar3);
      }
      (*(code *)PTR_memset_0046a87c)(auStack_128,0,0x100);
      (*(code *)PTR_sprintf_0046a808)(auStack_128,"wlsch_from_%d",iVar2);
      pcVar1 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)
                                 (param_1,auStack_128,&DAT_0044b32c);
      if (*pcVar1 != '\0') {
        uVar3 = (*(code *)PTR_atoi_0046a73c)(pcVar1);
        local_130 = CONCAT22(local_130._0_2_,uVar3);
      }
      (*(code *)PTR_memset_0046a87c)(auStack_128,0,0x100);
      (*(code *)PTR_sprintf_0046a808)(auStack_128,"wlsch_to_%d",iVar2);
      pcVar1 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)
                                 (param_1,auStack_128,&DAT_0044b32c);
      if (*pcVar1 != '\0') {
        uVar3 = (*(code *)PTR_atoi_0046a73c)(pcVar1);
        local_12c = CONCAT22(uVar3,local_12c._2_2_);
      }
      iVar2 = (*(code *)PTR_apmib_set_0046aa28)(0x101fa,local_144);
      iVar4 = iVar4 + 1;
      if (iVar2 == 0) break;
      if (iVar4 == 0xb) {
        pcVar1 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)
                                   (param_1,"submit-url",&DAT_0044b32c);
        FUN_0043c750();
        run_init_script(&DAT_0044d9f4);
        *(undefined4 *)PTR_needReboot_0046a9b4 = 1;
        if (*pcVar1 == '\0') {
          (*(code *)PTR_strcpy_0046ac60)(pcVar1,"/wizard.htm");
        }
        (*(code *)PTR_req_format_write_0046a95c)
                  (param_1,
                   "<html><body><blockquote><h4>Change setting successfully!</h4>Your changes have been saved. The router must be rebooted for the changes to take effect.<br> You can reboot now, or you can continue to make other changes and reboot later.\n"
                  );
        (*(code *)PTR_req_format_write_0046a95c)
                  (param_1,"<form action=/boafrm/formRebootCheck method=POST name=\'rebootForm\'>");
        (*(code *)PTR_req_format_write_0046a95c)
                  (param_1,"<input type=\'hidden\' value=\'%s\' name=\'submit-url\'>",pcVar1);
        (*(code *)PTR_req_format_write_0046a95c)
                  (param_1,
                   "<input id=\'restartNow\' type=\'submit\' value=\'Reboot Now\' onclick=\"return true\" />&nbsp;&nbsp;"
                  );
        (*(code *)PTR_req_format_write_0046a95c)
                  (param_1,
                   "<input id=\'restartLater\' type=\'button\' value=\'Reboot Later\' OnClick=window.location.replace(\"%s\")>"
                   ,pcVar1);
        (*(code *)PTR_req_format_write_0046a95c)(param_1,"</form></blockquote></body></html>");
        (*(code *)PTR_log_boaform_0046a9d8)("formRebootCheck");
        return;
      }
    }
    pcVar1 = "MIB_WLAN_SCHEDULE_ADD error!";
  }
LAB_0043cf74:
  (*(code *)PTR_strcpy_0046ac60)(auStack_128,pcVar1);
  FUN_004340e4(param_1);
  (*(code *)PTR_req_format_write_0046a95c)
            (param_1,"<html><body><blockquote><h4>%s</h4>\n",auStack_128);
  (*(code *)PTR_req_format_write_0046a95c)
            (param_1,
             "<form><input type=\"button\" onclick=\"history.go (-1)\" value=\"&nbsp;&nbsp;OK&nbsp;&nbsp\" name=\"OK\"></form></blockquote></body></html>"
            );
  return;
}

