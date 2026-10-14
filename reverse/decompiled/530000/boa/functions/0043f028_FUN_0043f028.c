/* FUN_0043f028 @ 0043f028 */

void FUN_0043f028(undefined4 param_1)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int local_158;
  uint local_154;
  undefined1 local_150 [6];
  int local_14a;
  undefined1 local_146 [22];
  undefined1 auStack_130 [256];
  char *local_30;
  
  (*(code *)PTR_memset_0046a87c)(auStack_130,0,0x100);
  pcVar1 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)(param_1,"addWdsMac",&DAT_0044b32c);
  pcVar2 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)
                             (param_1,"deleteSelWdsMac",&DAT_0044b32c);
  pcVar3 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)
                             (param_1,"deleteAllWdsMac",&DAT_0044b32c);
  uVar4 = (*(code *)PTR_req_get_cstream_var_0046a674)(param_1,"wlanWdsEnabled",&DAT_0044b32c);
  if (*pcVar1 == '\0') {
LAB_0043f370:
    if (*pcVar2 == '\0') {
LAB_0043f49c:
      if ((*pcVar3 == '\0') ||
         (iVar5 = (*(code *)PTR_apmib_set_0046aa28)(0x40044,local_150), iVar5 != 0)) {
LAB_0043f528:
        FUN_0043c750();
        run_init_script("bridge");
        pcVar1 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)
                                   (param_1,"submit-url",&DAT_0044b32c);
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
      pcVar1 = "Delete all table error!";
      goto LAB_0043f4d8;
    }
    iVar5 = (*(code *)PTR_apmib_get_0046aadc)(0x40,&local_158);
    if (iVar5 != 0) {
      iVar5 = local_158;
      do {
        while( true ) {
          if (iVar5 < 1) goto LAB_0043f49c;
          (*(code *)PTR_snprintf_0046abe4)(auStack_130,0x14,"select%d",iVar5);
          uVar4 = (*(code *)PTR_req_get_cstream_var_0046a674)(param_1,auStack_130,&DAT_0044b32c);
          iVar7 = (*(code *)PTR_strcmp_0046a824)(uVar4,"ON");
          if (iVar7 == 0) break;
          iVar5 = iVar5 + -1;
        }
        local_150[0] = (undefined1)iVar5;
        iVar7 = (*(code *)PTR_apmib_get_0046aadc)(0x8041,local_150);
        if (iVar7 == 0) {
          pcVar1 = "Get table entry error!";
          goto LAB_0043f4d8;
        }
        iVar7 = (*(code *)PTR_apmib_set_0046aa28)(0x20043,local_150);
        iVar5 = iVar5 + -1;
      } while (iVar7 != 0);
      pcVar1 = "Delete table entry error!";
      goto LAB_0043f4d8;
    }
  }
  else {
    iVar5 = (*(code *)PTR_strcmp_0046a824)(uVar4,"ON");
    local_154 = (uint)(iVar5 == 0);
    iVar5 = (*(code *)PTR_apmib_set_0046aa28)(0x3f,&local_154);
    if (iVar5 == 0) {
      pcVar1 = "Set enabled flag error!";
      goto LAB_0043f4d8;
    }
    pcVar1 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)
                               (param_1,&DAT_0044fd74,&DAT_0044b32c);
    if (*pcVar1 == '\0') goto LAB_0043f528;
    iVar5 = (*(code *)PTR_strlen_0046a714)(pcVar1);
    if ((iVar5 != 0xc) || (iVar5 = FUN_00434520(pcVar1,local_150,0xc), iVar5 == 0)) {
      pcVar1 = "Error! Invalid MAC address.";
      goto LAB_0043f4d8;
    }
    pcVar1 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)(param_1,"comment",&DAT_0044b32c);
    if (*pcVar1 == '\0') {
      local_146[0] = 0;
    }
    else {
      local_30 = pcVar1;
      uVar6 = (*(code *)PTR_strlen_0046a714)(pcVar1);
      if (0x14 < uVar6) {
        pcVar1 = "Error! Comment length too long.";
        goto LAB_0043f4d8;
      }
      (*(code *)PTR_strcpy_0046ac60)(local_146,local_30);
    }
    pcVar1 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)(param_1,"txRate",&DAT_0044b32c);
    if (*pcVar1 != '\0') {
      if (*pcVar1 == '0') {
        local_14a = 0;
      }
      else {
        iVar5 = (*(code *)PTR_atoi_0046a73c)(pcVar1);
        (*(code *)PTR_printf_0046ac28)("\n\nwds txRate val=%d\n\n",iVar5);
        if (iVar5 < 0x1e) {
          local_14a = 1 << (iVar5 - 1U & 0x1f);
        }
        else {
          local_14a = iVar5 + 0x7fffffe2;
        }
      }
    }
    iVar5 = (*(code *)PTR_apmib_get_0046aadc)(0x40,&local_158);
    if (iVar5 != 0) {
      if (8 < local_158 + 1) {
        pcVar1 = "Cannot add new entry because table is full!";
        goto LAB_0043f4d8;
      }
      (*(code *)PTR_apmib_set_0046aa28)(0x20043,local_150);
      iVar5 = (*(code *)PTR_apmib_set_0046aa28)(0x10042,local_150);
      if (iVar5 == 0) {
        pcVar1 = "Add table entry error!";
        goto LAB_0043f4d8;
      }
      goto LAB_0043f370;
    }
  }
  pcVar1 = "Get entry number error!";
LAB_0043f4d8:
  (*(code *)PTR_strcpy_0046ac60)(auStack_130,pcVar1);
  FUN_004340e4(param_1);
  (*(code *)PTR_req_format_write_0046a95c)
            (param_1,"<html><body><blockquote><h4>%s</h4>\n",auStack_130);
  (*(code *)PTR_req_format_write_0046a95c)
            (param_1,
             "<form><input type=\"button\" onclick=\"history.go (-1)\" value=\"&nbsp;&nbsp;OK&nbsp;&nbsp\" name=\"OK\"></form></blockquote></body></html>"
            );
  return;
}

