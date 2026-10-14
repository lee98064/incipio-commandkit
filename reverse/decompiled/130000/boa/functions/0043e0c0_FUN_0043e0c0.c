/* FUN_0043e0c0 @ 0043e0c0 */

void FUN_0043e0c0(undefined4 param_1)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  int local_158;
  int local_154;
  undefined1 local_150 [6];
  undefined1 local_14a [22];
  undefined1 auStack_134 [260];
  char *local_30;
  
  (*(code *)PTR_memset_0046a87c)(auStack_134,0,0x100);
  pcVar1 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)(param_1,"addFilterMac",&DAT_0044b32c)
  ;
  pcVar2 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)
                             (param_1,"deleteSelFilterMac",&DAT_0044b32c);
  pcVar3 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)
                             (param_1,"deleteAllFilterMac",&DAT_0044b32c);
  pcVar4 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)
                             (param_1,"wlanAcEnabled",&DAT_0044b32c);
  if (*pcVar1 == '\0') {
LAB_0043e350:
    if (*pcVar2 == '\0') {
LAB_0043e47c:
      if ((*pcVar3 == '\0') ||
         (iVar5 = (*(code *)PTR_apmib_set_0046aa28)(0x40039,local_150), iVar5 != 0)) {
LAB_0043e508:
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
      goto LAB_0043e4b8;
    }
    iVar5 = (*(code *)PTR_apmib_get_0046aadc)(0x35,&local_158);
    if (iVar5 != 0) {
      iVar5 = local_158;
      do {
        while( true ) {
          if (iVar5 < 1) goto LAB_0043e47c;
          (*(code *)PTR_snprintf_0046abe4)(auStack_134,0x14,"select%d",iVar5);
          uVar7 = (*(code *)PTR_req_get_cstream_var_0046a674)(param_1,auStack_134,&DAT_0044b32c);
          iVar8 = (*(code *)PTR_strcmp_0046a824)(uVar7,"ON");
          if (iVar8 == 0) break;
          iVar5 = iVar5 + -1;
        }
        local_150[0] = (undefined1)iVar5;
        iVar8 = (*(code *)PTR_apmib_get_0046aadc)(0x8036,local_150);
        if (iVar8 == 0) {
          pcVar1 = "Get table entry error!";
          goto LAB_0043e4b8;
        }
        iVar8 = (*(code *)PTR_apmib_set_0046aa28)(0x20038,local_150);
        iVar5 = iVar5 + -1;
      } while (iVar8 != 0);
      pcVar1 = "Delete table entry error!";
      goto LAB_0043e4b8;
    }
  }
  else {
    local_154 = *pcVar4 + -0x30;
    iVar5 = (*(code *)PTR_apmib_set_0046aa28)(0x34,&local_154);
    if (iVar5 == 0) {
      pcVar1 = "Set enabled flag error!";
      goto LAB_0043e4b8;
    }
    pcVar1 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)
                               (param_1,&DAT_0044fd74,&DAT_0044b32c);
    if (*pcVar1 == '\0') goto LAB_0043e508;
    iVar5 = (*(code *)PTR_strlen_0046a714)(pcVar1);
    if ((iVar5 != 0xc) || (iVar5 = FUN_00434520(pcVar1,local_150,0xc), iVar5 == 0)) {
      pcVar1 = "Error! Invalid MAC address.";
      goto LAB_0043e4b8;
    }
    pcVar1 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)(param_1,"comment",&DAT_0044b32c);
    if (*pcVar1 == '\0') {
      local_14a[0] = 0;
    }
    else {
      local_30 = pcVar1;
      uVar6 = (*(code *)PTR_strlen_0046a714)(pcVar1);
      if (0x14 < uVar6) {
        pcVar1 = "Error! Comment length too long.";
        goto LAB_0043e4b8;
      }
      (*(code *)PTR_strcpy_0046ac60)(local_14a,local_30);
    }
    iVar5 = (*(code *)PTR_apmib_get_0046aadc)(0x35,&local_158);
    if (iVar5 != 0) {
      if (0x14 < local_158 + 1) {
        pcVar1 = "Cannot add new entry because table is full!";
        goto LAB_0043e4b8;
      }
      (*(code *)PTR_apmib_set_0046aa28)(0x20038,local_150);
      iVar5 = (*(code *)PTR_apmib_set_0046aa28)(0x10037,local_150);
      if (iVar5 == 0) {
        pcVar1 = "Add table entry error!";
        goto LAB_0043e4b8;
      }
      goto LAB_0043e350;
    }
  }
  pcVar1 = "Get entry number error!";
LAB_0043e4b8:
  (*(code *)PTR_strcpy_0046ac60)(auStack_134,pcVar1);
  FUN_004340e4(param_1);
  (*(code *)PTR_req_format_write_0046a95c)
            (param_1,"<html><body><blockquote><h4>%s</h4>\n",auStack_134);
  (*(code *)PTR_req_format_write_0046a95c)
            (param_1,
             "<form><input type=\"button\" onclick=\"history.go (-1)\" value=\"&nbsp;&nbsp;OK&nbsp;&nbsp\" name=\"OK\"></form></blockquote></body></html>"
            );
  return;
}

