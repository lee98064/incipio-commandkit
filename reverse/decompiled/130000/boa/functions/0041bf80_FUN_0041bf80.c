/* FUN_0041bf80 @ 0041bf80 */

void FUN_0041bf80(undefined4 param_1)

{
  undefined *puVar1;
  char *pcVar2;
  undefined4 uVar3;
  int iVar4;
  uint local_88;
  uint local_84;
  uint local_80;
  uint local_7c;
  undefined1 auStack_78 [108];
  
  pcVar2 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)(param_1,&DAT_0044fc7c,&DAT_0044b32c);
  if (*pcVar2 == '\0') {
LAB_0041c150:
    FUN_0041af38();
    iVar4 = (*(code *)PTR_fork_0046a8c8)();
    if (iVar4 == 0) {
      (*(code *)PTR_snprintf_0046abe4)(auStack_78,100,"%s/%s",&DAT_0044d824,"firewall.sh");
      (*(code *)PTR_execl_0046ab4c)(auStack_78,"firewall.sh",0);
      (*(code *)PTR_exit_0046a75c)(1);
      return;
    }
    (*(code *)PTR_waitpid_0046ac48)(iVar4,0,0);
    pcVar2 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)(param_1,"submit-url",&DAT_0044b32c)
    ;
    if (*(int *)PTR_needReboot_0046a9b4 == 1) {
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
    }
    else if (*pcVar2 != '\0') {
      (*(code *)PTR_send_redirect_perm_0046ac78)(param_1,pcVar2);
    }
  }
  else {
    uVar3 = (*(code *)PTR_req_get_cstream_var_0046a674)(param_1,"enabled",&DAT_0044b32c);
    iVar4 = (*(code *)PTR_strcmp_0046a824)(uVar3,"ON");
    local_88 = (uint)(iVar4 == 0);
    iVar4 = (*(code *)PTR_apmib_set_0046aa28)(0x8c,&local_88);
    if (iVar4 == 0) {
      pcVar2 = "Set enabled flag error!";
    }
    else {
      pcVar2 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)(param_1,"ip",&DAT_0044b32c);
      puVar1 = PTR_BRIDGE_IF_0046abe0;
      if (*pcVar2 == '\0') goto LAB_0041c150;
      (*(code *)PTR_inet_aton_0046a89c)(pcVar2,&local_84);
      (*(code *)PTR_getInAddr_0046ab50)(*(undefined4 *)puVar1,0,&local_80);
      (*(code *)PTR_getInAddr_0046ab50)(*(undefined4 *)puVar1,2,&local_7c);
      if ((local_84 == 0) || (((local_80 ^ local_84) & local_7c) == 0)) {
        iVar4 = (*(code *)PTR_apmib_set_0046aa28)(0x8d,&local_84);
        if (iVar4 != 0) goto LAB_0041c150;
        pcVar2 = "Set DMZ MIB error!";
      }
      else {
        pcVar2 = "Invalid IP address! It should be set within the current subnet.";
      }
    }
    (*(code *)PTR_strcpy_0046ac60)(auStack_78,pcVar2);
    FUN_00419fe8(param_1);
    (*(code *)PTR_req_format_write_0046a95c)
              (param_1,"<html><body><blockquote><h4>%s</h4>\n",auStack_78);
    (*(code *)PTR_req_format_write_0046a95c)
              (param_1,
               "<form><input type=\"button\" onclick=\"history.go (-1)\" value=\"&nbsp;&nbsp;OK&nbsp;&nbsp\" name=\"OK\"></form></blockquote></body></html>"
              );
  }
  return;
}

