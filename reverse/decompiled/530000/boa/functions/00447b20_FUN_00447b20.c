/* FUN_00447b20 @ 00447b20 */

void FUN_00447b20(int param_1)

{
  undefined *puVar1;
  char *pcVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  uint local_80;
  int local_7c;
  undefined1 auStack_78 [108];
  
  local_80 = 0;
  local_7c = 0;
  pcVar2 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)(param_1,"submit-url",&DAT_0044b32c);
  uVar3 = (*(code *)PTR_req_get_cstream_var_0046a674)(param_1,"ddnsEnabled",&DAT_0044b32c);
  iVar4 = (*(code *)PTR_strcmp_0046a824)(uVar3,"ON");
  local_80 = (uint)(iVar4 == 0);
  iVar4 = (*(code *)PTR_apmib_set_0046aa28)(0xbb,&local_80);
  if (iVar4 == 0) {
    pcVar2 = "Set enabled flag error!";
  }
  else {
    if (local_80 == 0) {
LAB_00447d64:
      iVar4 = (*(code *)PTR_apmib_update_0046aa2c)(4);
      if (iVar4 != 0) {
        (*(code *)PTR_save_cs_to_file_0046a8f8)();
      }
      (*(code *)PTR_run_init_script_0046a844)(&DAT_0044d9f4);
      *(undefined4 *)PTR_needReboot_0046a9b4 = 1;
      if (*pcVar2 == '\0') {
        (*(code *)PTR_strcpy_0046ac60)(pcVar2,"/wizard.htm");
      }
      (*(code *)PTR_req_format_write_0046a95c)
                (param_1,
                 "<html><body><blockquote><h4>Change setting successfully!</h4>Your changes have been saved. The router must be rebooted for the changes to take effect.<br> You can reboot now, or you can continue to make other changes and reboot later.\n"
                );
      (*(code *)PTR_req_format_write_0046a95c)
                (param_1,"<form action=/boafrm/formRebootCheck method=POST name=\'rebootForm\'>");
      (*(code *)PTR_req_format_write_0046a95c)
                (param_1,"<input type=\'hidden\' value=\'%s\' name=\'submit-url\'>",pcVar2);
      (*(code *)PTR_req_format_write_0046a95c)
                (param_1,
                 "<input id=\'restartNow\' type=\'submit\' value=\'Reboot Now\' onclick=\"return true\" />&nbsp;&nbsp;"
                );
      (*(code *)PTR_req_format_write_0046a95c)
                (param_1,
                 "<input id=\'restartLater\' type=\'button\' value=\'Reboot Later\' OnClick=window.location.replace(\"%s\")>"
                 ,pcVar2);
      (*(code *)PTR_req_format_write_0046a95c)(param_1,"</form></blockquote></body></html>");
      (*(code *)PTR_log_boaform_0046a9d8)("formRebootCheck");
      return;
    }
    pcVar5 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)(param_1,"ddnsType",&DAT_0044b32c);
    if ((*pcVar5 == 0) ||
       (local_7c = *pcVar5 + -0x30, iVar4 = (*(code *)PTR_apmib_set_0046aa28)(0xbc,&local_7c),
       iVar4 != 0)) {
      pcVar5 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)(param_1,"ddnsUser",&DAT_0044b32c)
      ;
      if ((*pcVar5 == '\0') || (iVar4 = (*(code *)PTR_apmib_set_0046aa28)(0xbe,pcVar5), iVar4 != 0))
      {
        pcVar5 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)
                                   (param_1,"ddnsPassword",&DAT_0044b32c);
        if (((*pcVar5 == '\0') ||
            (iVar4 = (*(code *)PTR_apmib_set_0046aa28)(0xbf,pcVar5), iVar4 != 0)) &&
           ((pcVar5 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)
                                        (param_1,"ddnsDomainName",&DAT_0044b32c), *pcVar5 == '\0' ||
            (iVar4 = (*(code *)PTR_apmib_set_0046aa28)(0xbd,pcVar5), iVar4 != 0))))
        goto LAB_00447d64;
        pcVar2 = "Set DDNS Password String error!";
      }
      else {
        pcVar2 = "Set DDNS User String error!";
      }
    }
    else {
      pcVar2 = "Set DDNS Type error!";
    }
  }
  (*(code *)PTR_strcpy_0046ac60)(auStack_78,pcVar2);
  iVar4 = (*(code *)PTR_strstr_0046a940)(param_1 + 0x8d4,"/boafrm/");
  puVar1 = PTR_log_boaform_0046a9d8;
  if (iVar4 != 0) {
    pcVar2 = (char *)(iVar4 + 8);
    do {
      pcVar5 = pcVar2;
      if (*pcVar5 == 0) break;
      pcVar2 = pcVar5 + 1;
    } while ((*(ushort *)(*(int *)PTR___ctype_b_0046abc0 + *pcVar5 * 2) & 0x20) == 0);
    *pcVar5 = '\0';
    (*(code *)puVar1)();
  }
  (*(code *)PTR_req_format_write_0046a95c)
            (param_1,"<html><body><blockquote><h4>%s</h4>\n",auStack_78);
  (*(code *)PTR_req_format_write_0046a95c)
            (param_1,
             "<form><input type=\"button\" onclick=\"history.go (-1)\" value=\"&nbsp;&nbsp;OK&nbsp;&nbsp\" name=\"OK\"></form></blockquote></body></html>"
            );
  return;
}

