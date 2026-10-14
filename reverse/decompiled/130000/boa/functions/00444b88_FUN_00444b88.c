/* FUN_00444b88 @ 00444b88 */

void FUN_00444b88(undefined4 param_1)

{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  undefined1 auStack_e8 [200];
  undefined1 *local_20;
  
  pcVar1 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)(param_1,"submit-url",&DAT_0044b32c);
  pcVar2 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)(param_1,"active",&DAT_0044b32c);
  if (*pcVar2 != '\0') {
    iVar3 = (*(code *)PTR_strcmp_0046a824)(pcVar2,&DAT_0044fc7c);
    if (iVar3 == 0) {
      pcVar2 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)(param_1,"dualFw",&DAT_0044b32c);
      FUN_00444378(*pcVar2 != '\0');
    }
    else {
      iVar3 = (*(code *)PTR_strcmp_0046a824)(pcVar2,"reboot");
      if (iVar3 == 0) {
        iVar3 = FUN_004442e0();
        local_20 = auStack_e8;
        if (iVar3 == 0) {
          (*(code *)PTR_strcpy_0046ac60)(local_20,"Rebooting !!~~~~Please wait for 40~50secs! ");
          FUN_00441988(param_1);
          (*(code *)PTR_req_format_write_0046a95c)
                    (param_1,"<html><body><blockquote><h4>%s</h4>\n",local_20);
          (*(code *)PTR_req_format_write_0046a95c)
                    (param_1,
                     "<form><input type=\"button\" onclick=\"history.go (-1)\" value=\"&nbsp;&nbsp;OK&nbsp;&nbsp\" name=\"OK\"></form></blockquote></body></html>"
                    );
          (*(code *)PTR_system_0046ab18)("reboot");
          return;
        }
        (*(code *)PTR_strcpy_0046ac60)
                  (local_20,"Reboot Fail!!The image in Backup Bank maybe corrupted!! ");
        FUN_00441988(param_1);
        (*(code *)PTR_req_format_write_0046a95c)
                  (param_1,"<html><body><blockquote><h4>%s</h4>\n",local_20);
        (*(code *)PTR_req_format_write_0046a95c)
                  (param_1,
                   "<form><input type=\"button\" onclick=\"history.go (-1)\" value=\"&nbsp;&nbsp;OK&nbsp;&nbsp\" name=\"OK\"></form></blockquote></body></html>"
                  );
        return;
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
  return;
}

