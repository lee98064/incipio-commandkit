/* FUN_0043da70 @ 0043da70 */

void FUN_0043da70(undefined4 param_1)

{
  int iVar1;
  char *pcVar2;
  undefined1 auStack_110 [260];
  
  (*(code *)PTR_memset_0046a87c)(auStack_110,0,0x100);
  iVar1 = wepHandler(param_1,auStack_110,*(undefined4 *)PTR_wlan_idx_0046a93c);
  if (iVar1 < 0) {
    FUN_004340e4(param_1);
    (*(code *)PTR_req_format_write_0046a95c)
              (param_1,"<html><body><blockquote><h4>%s</h4>\n",auStack_110);
    (*(code *)PTR_req_format_write_0046a95c)
              (param_1,
               "<form><input type=\"button\" onclick=\"history.go (-1)\" value=\"&nbsp;&nbsp;OK&nbsp;&nbsp\" name=\"OK\"></form></blockquote></body></html>"
              );
  }
  else {
    FUN_0043c750();
    run_init_script("bridge");
    pcVar2 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)(param_1,"submit-url",&DAT_0044b32c)
    ;
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
  return;
}

