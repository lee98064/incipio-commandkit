/* FUN_0043c7a8 @ 0043c7a8 */

/* WARNING: Type propagation algorithm not settling */

void FUN_0043c7a8(undefined4 param_1)

{
  char *pcVar1;
  int iVar2;
  undefined4 uVar3;
  undefined2 uVar5;
  char *pcVar4;
  ushort uVar6;
  undefined4 local_140;
  uint local_13c [6];
  undefined4 local_124;
  undefined4 local_120;
  undefined1 auStack_11c [264];
  
  local_140 = 0;
  local_13c[0] = 0;
  pcVar1 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)(param_1,"webpage",&DAT_0044b32c);
  iVar2 = (*(code *)PTR_apmib_set_0046aa28)(0x401fc,local_13c + 1);
  if (iVar2 == 0) {
    pcVar1 = "Delete table entry error!";
  }
  else {
    local_120 = 0;
    local_13c[1] = 0;
    local_13c[2] = 0;
    local_13c[3] = 0;
    local_13c[4] = 0;
    local_13c[5] = 0;
    local_124 = 0;
    uVar3 = (*(code *)PTR_req_get_cstream_var_0046a674)(param_1,"enabled_sch",&DAT_0044b32c);
    iVar2 = (*(code *)PTR_strcmp_0046a824)(uVar3,&DAT_00451ab4);
    if (iVar2 != 0) {
      local_124 = local_124 & 0xfff7ffff;
    }
    else {
      local_124 = local_124 | 0x80000;
    }
    local_13c[0] = (uint)(iVar2 == 0);
    (*(code *)PTR_apmib_set_0046aa28)(0x1f7,local_13c);
    (*(code *)PTR_strcpy_0046ac60)(local_13c + 1,"wlanSchedule");
    uVar3 = (*(code *)PTR_req_get_cstream_var_0046a674)(param_1,"weekdays",&DAT_0044b32c);
    uVar5 = (*(code *)PTR_atoi_0046a73c)(uVar3);
    local_120 = CONCAT22(local_120._0_2_,uVar5);
    iVar2 = (*(code *)PTR_strcmp_0046a824)(uVar3,&DAT_00455a08);
    uVar6 = (ushort)(local_124 >> 0x10);
    if (iVar2 == 0) {
      uVar6 = uVar6 | 2;
    }
    else {
      uVar6 = uVar6 & 0xfffd;
    }
    local_124._0_2_ = uVar6;
    uVar3 = (*(code *)PTR_req_get_cstream_var_0046a674)(param_1,"all_day",&DAT_0044b32c);
    iVar2 = (*(code *)PTR_strcmp_0046a824)(uVar3,"on");
    if (iVar2 == 0) {
      local_124._0_2_ = local_124._0_2_ | 1;
    }
    else {
      local_124._0_2_ = local_124._0_2_ & 0xfffe;
    }
    pcVar4 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)(param_1,"start_time",&DAT_0044b32c)
    ;
    if (*pcVar4 != '\0') {
      uVar5 = (*(code *)PTR_atoi_0046a73c)(pcVar4);
      local_124 = CONCAT22(local_124._0_2_,uVar5);
    }
    pcVar4 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)(param_1,"end_time",&DAT_0044b32c);
    if (*pcVar4 != '\0') {
      uVar5 = (*(code *)PTR_atoi_0046a73c)(pcVar4);
      local_120 = CONCAT22(uVar5,local_120._2_2_);
    }
    if ((local_124 & 0x10000) != 0) {
      local_120 = CONCAT22(0x5a0,local_120._2_2_);
      local_124 = local_124 & 0xffff0000;
    }
    iVar2 = (*(code *)PTR_apmib_get_0046aadc)(0x1f8,&local_140);
    if (iVar2 == 0) {
      pcVar1 = "\"Get entry number error!\"";
    }
    else {
      iVar2 = (*(code *)PTR_apmib_set_0046aa28)(0x101fa,local_13c + 1);
      if (iVar2 != 0) {
        FUN_0043c750();
        run_init_script("bridge");
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
      pcVar1 = "Add table entry error!";
    }
  }
  (*(code *)PTR_strcpy_0046ac60)(auStack_11c,pcVar1);
  FUN_004340e4(param_1);
  (*(code *)PTR_req_format_write_0046a95c)
            (param_1,"<html><body><blockquote><h4>%s</h4>\n",auStack_11c);
  (*(code *)PTR_req_format_write_0046a95c)
            (param_1,
             "<form><input type=\"button\" onclick=\"history.go (-1)\" value=\"&nbsp;&nbsp;OK&nbsp;&nbsp\" name=\"OK\"></form></blockquote></body></html>"
            );
  return;
}

