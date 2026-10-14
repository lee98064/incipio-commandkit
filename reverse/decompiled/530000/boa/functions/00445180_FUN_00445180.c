/* FUN_00445180 @ 00445180 */

void FUN_00445180(undefined4 param_1)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  uint local_c8;
  uint local_c4;
  int local_c0;
  undefined4 local_bc;
  int local_b8;
  int local_b4;
  int local_b0;
  int local_ac;
  int local_a8;
  int local_a4;
  int local_a0;
  undefined4 local_94;
  undefined1 auStack_88 [108];
  
  local_c8 = 0;
  local_c4 = 0;
  local_c0 = 0;
  local_bc = 0;
  pcVar1 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)(param_1,"submit-url",&DAT_0044b32c);
  pcVar2 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)(param_1,&DAT_0044fc7c,&DAT_0044b32c);
  pcVar3 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)(param_1,"timeZone",&DAT_0044b32c);
  if ((*pcVar3 == '\0') || (iVar4 = (*(code *)PTR_apmib_set_0046aa28)(0x99,pcVar3), iVar4 != 0)) {
    uVar5 = (*(code *)PTR_req_get_cstream_var_0046a674)(param_1,"dlenabled",&DAT_0044b32c);
    iVar4 = (*(code *)PTR_strcmp_0046a824)(uVar5,"ON");
    local_c4 = (uint)(iVar4 == 0);
    iVar4 = (*(code *)PTR_apmib_set_0046aa28)(0x11a,&local_c4);
    if (iVar4 == 0) {
      pcVar1 = "Set dl enabled flag error!";
    }
    else {
      (*(code *)PTR_set_timeZone_0046aae0)();
      if (*pcVar2 == '\0') {
LAB_00445610:
        if ((local_c8 == 0) || (iVar4 = FUN_00441ffc(param_1,auStack_88,0), -1 < iVar4)) {
          FUN_00444434();
          (*(code *)PTR_run_init_script_0046a844)(&DAT_0044d9f4);
          *(undefined4 *)PTR_needReboot_0046a9b4 = 1;
          if (*pcVar1 == '\0') {
            (*(code *)PTR_strcpy_0046ac60)(pcVar1,"/wizard.htm");
          }
          (*(code *)PTR_req_format_write_0046a95c)
                    (param_1,
                     "<html><body><blockquote><h4>Change setting successfully!</h4>Your changes have been saved. The router must be rebooted for the changes to take effect.<br> You can reboot now, or you can continue to make other changes and reboot later.\n"
                    );
          (*(code *)PTR_req_format_write_0046a95c)
                    (param_1,"<form action=/boafrm/formRebootCheck method=POST name=\'rebootForm\'>"
                    );
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
        goto LAB_00445754;
      }
      uVar5 = (*(code *)PTR_localtime_0046a880)(&local_b8);
      (*(code *)PTR_memcpy_0046ab5c)(&local_b4,uVar5,0x2c);
      local_94 = 0xffffffff;
      local_b4 = 0;
      local_b0 = 0;
      local_ac = 0;
      uVar5 = (*(code *)PTR_req_get_cstream_var_0046a674)(param_1,&DAT_00450e6c,&DAT_0044b32c);
      local_bc = (*(code *)PTR_atoi_0046a73c)(uVar5);
      local_a0 = (*(code *)PTR_atoi_0046a73c)(uVar5);
      local_a0 = local_a0 + -0x76c;
      uVar5 = (*(code *)PTR_req_get_cstream_var_0046a674)(param_1,"month",&DAT_0044b32c);
      local_a4 = (*(code *)PTR_atoi_0046a73c)(uVar5);
      local_a4 = local_a4 + -1;
      uVar5 = (*(code *)PTR_req_get_cstream_var_0046a674)(param_1,"day",&DAT_0044b32c);
      local_a8 = (*(code *)PTR_atoi_0046a73c)(uVar5);
      uVar5 = (*(code *)PTR_req_get_cstream_var_0046a674)(param_1,&DAT_00450e7c,&DAT_0044b32c);
      local_ac = (*(code *)PTR_atoi_0046a73c)(uVar5);
      uVar5 = (*(code *)PTR_req_get_cstream_var_0046a674)(param_1,"minute",&DAT_0044b32c);
      local_b0 = (*(code *)PTR_atoi_0046a73c)(uVar5);
      uVar5 = (*(code *)PTR_req_get_cstream_var_0046a674)(param_1,"second",&DAT_0044b32c);
      local_b4 = (*(code *)PTR_atoi_0046a73c)(uVar5);
      local_b8 = (*(code *)PTR_mktime_0046a954)(&local_b4);
      if ((local_b8 < 0) || (iVar4 = (*(code *)PTR_stime_0046a750)(&local_b8), iVar4 < 0)) {
        pcVar1 = "set Time Error\n";
      }
      else {
        (*(code *)PTR_apmib_set_0046aa28)(0x141,&local_bc);
        local_c0 = local_a4;
        (*(code *)PTR_apmib_set_0046aa28)(0x142,&local_c0);
        local_c0 = local_a8;
        (*(code *)PTR_apmib_set_0046aa28)(0x143,&local_c0);
        local_c0 = local_ac;
        (*(code *)PTR_apmib_set_0046aa28)(0x144,&local_c0);
        local_c0 = local_b0;
        (*(code *)PTR_apmib_set_0046aa28)(0x145,&local_c0);
        local_c0 = local_b4;
        (*(code *)PTR_apmib_set_0046aa28)(0x146,&local_c0);
        uVar5 = (*(code *)PTR_req_get_cstream_var_0046a674)(param_1,"enabled",&DAT_0044b32c);
        iVar4 = (*(code *)PTR_strcmp_0046a824)(uVar5,"ON");
        local_c8 = (uint)(iVar4 == 0);
        iVar4 = (*(code *)PTR_apmib_set_0046aa28)(0x97,&local_c8);
        if (iVar4 != 0) goto LAB_00445610;
        pcVar1 = "Set enabled flag error!";
      }
    }
  }
  else {
    pcVar1 = "Set Time Zone error!";
  }
  (*(code *)PTR_strcpy_0046ac60)(auStack_88,pcVar1);
LAB_00445754:
  FUN_00441988(param_1);
  (*(code *)PTR_req_format_write_0046a95c)
            (param_1,"<html><body><blockquote><h4>%s</h4>\n",auStack_88);
  (*(code *)PTR_req_format_write_0046a95c)
            (param_1,
             "<form><input type=\"button\" onclick=\"history.go (-1)\" value=\"&nbsp;&nbsp;OK&nbsp;&nbsp\" name=\"OK\"></form></blockquote></body></html>"
            );
  return;
}

