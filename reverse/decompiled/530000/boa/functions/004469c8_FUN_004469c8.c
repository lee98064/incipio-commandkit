/* FUN_004469c8 @ 004469c8 */

void FUN_004469c8(undefined4 param_1)

{
  char *pcVar1;
  char *pcVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  uint local_88;
  uint local_84;
  undefined1 auStack_80 [4];
  undefined1 auStack_7c [104];
  
  pcVar1 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)(param_1,"submit-url",&DAT_0044b32c);
  pcVar2 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)(param_1,"clear",&DAT_0044b32c);
  if (*pcVar2 != '\0') {
    (*(code *)PTR_snprintf_0046abe4)(auStack_7c,100,"echo \" \" > %s","/var/log/messages");
    (*(code *)PTR_system_0046ab18)(auStack_7c);
    (*(code *)PTR_system_0046ab18)("rm /var/log/messages.* >/dev/null 2>&1");
    (*(code *)PTR_send_redirect_perm_0046ac78)(param_1,pcVar1);
    return;
  }
  (*(code *)PTR_apmib_get_0046aadc)(0xb8,&local_88);
  uVar3 = (*(code *)PTR_req_get_cstream_var_0046a674)(param_1,"logEnabled",&DAT_0044b32c);
  iVar4 = (*(code *)PTR_strcmp_0046a824)(uVar3,"ON");
  uVar5 = 0xfffffffe;
  if (iVar4 == 0) {
    local_88 = local_88 | 1;
    uVar3 = (*(code *)PTR_req_get_cstream_var_0046a674)(param_1,"syslogEnabled",&DAT_0044b32c);
    iVar4 = (*(code *)PTR_strcmp_0046a824)(uVar3,"ON");
    if (iVar4 == 0) {
      local_88 = local_88 | 2;
    }
    else {
      local_88 = local_88 & 0xfffffffd;
    }
    uVar3 = (*(code *)PTR_req_get_cstream_var_0046a674)(param_1,"wlanlogEnabled",&DAT_0044b32c);
    iVar4 = (*(code *)PTR_strcmp_0046a824)(uVar3,"ON");
    if (iVar4 == 0) {
      local_88 = local_88 | 4;
    }
    else {
      local_88 = local_88 & 0xfffffffb;
    }
    uVar3 = (*(code *)PTR_req_get_cstream_var_0046a674)(param_1,"doslogEnabled",&DAT_0044b32c);
    iVar4 = (*(code *)PTR_strcmp_0046a824)(uVar3,"ON");
    uVar5 = 0xfffffff7;
    if (iVar4 != 0) goto LAB_00446c00;
    local_88 = local_88 | 8;
  }
  else {
LAB_00446c00:
    local_88 = local_88 & uVar5;
  }
  iVar4 = (*(code *)PTR_apmib_set_0046aa28)(0xb8,&local_88);
  if (iVar4 == 0) {
    pcVar1 = "Set log enable error!";
LAB_00446d20:
    (*(code *)PTR_strcpy_0046ac60)(auStack_7c,pcVar1);
    FUN_00441988(param_1);
    (*(code *)PTR_req_format_write_0046a95c)
              (param_1,"<html><body><blockquote><h4>%s</h4>\n",auStack_7c);
    (*(code *)PTR_req_format_write_0046a95c)
              (param_1,
               "<form><input type=\"button\" onclick=\"history.go (-1)\" value=\"&nbsp;&nbsp;OK&nbsp;&nbsp\" name=\"OK\"></form></blockquote></body></html>"
              );
  }
  else {
    if ((local_88 & 1) != 0) {
      uVar3 = (*(code *)PTR_req_get_cstream_var_0046a674)(param_1,"rtLogEnabled",&DAT_0044b32c);
      iVar4 = (*(code *)PTR_strcmp_0046a824)(uVar3,"ON");
      local_84 = (uint)(iVar4 == 0);
      iVar4 = (*(code *)PTR_apmib_set_0046aa28)(0xe3,&local_84);
      if (iVar4 == 0) {
        pcVar1 = "Set remote log enable error!";
        goto LAB_00446d20;
      }
      pcVar2 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)
                                 (param_1,"logServer",&DAT_0044b32c);
      if (*pcVar2 != '\0') {
        (*(code *)PTR_inet_aton_0046a89c)(pcVar2,auStack_80);
        iVar4 = (*(code *)PTR_apmib_set_0046aa28)(0xe4,auStack_80);
        if (iVar4 == 0) {
          pcVar1 = "Set remote log server error!";
          goto LAB_00446d20;
        }
      }
    }
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
  }
  return;
}

