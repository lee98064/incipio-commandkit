/* FUN_00445d60 @ 00445d60 */

/* WARNING: Type propagation algorithm not settling */

void FUN_00445d60(undefined4 param_1)

{
  undefined *puVar1;
  int iVar2;
  char *pcVar3;
  code *pcVar4;
  int local_98 [3];
  undefined1 auStack_8c [20];
  undefined1 auStack_78 [108];
  
  local_98[1] = 0;
  iVar2 = (*(code *)PTR_tcpipWanHandler_0046abc8)(param_1,auStack_78,local_98 + 1);
  puVar1 = PTR_req_get_cstream_var_0046a674;
  if (iVar2 < 0) {
LAB_00445ff0:
    (*(code *)PTR_req_format_write_0046a95c)
              (param_1,"<html><body><blockquote><h4>%s</h4>\n",auStack_78);
    (*(code *)PTR_req_format_write_0046a95c)
              (param_1,
               "<form><input type=button value=\"  OK  \" OnClick=window.location.replace(\"%s\")></form></blockquote></body></html>"
               ,"/wizard.htm");
  }
  else {
    *(undefined4 *)PTR_wlan_idx_0046a93c = 0;
    pcVar3 = (char *)(*(code *)puVar1)(param_1,"pocket_ssid",&DAT_0044b32c);
    if (*pcVar3 != '\0') {
      (*(code *)PTR_apmib_set_0046aa28)(1,pcVar3);
    }
    puVar1 = PTR_sprintf_0046a808;
    *(undefined4 *)PTR_wlan_idx_0046a93c = 0;
    *(undefined4 *)PTR_vwlan_idx_0046a9b0 = 0;
    (*(code *)puVar1)(auStack_8c,"mode%d",0);
    pcVar3 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)(param_1,auStack_8c,&DAT_0044b32c);
    if (*pcVar3 != '\0') {
      local_98[0] = (*(code *)PTR_atoi_0046a73c)(pcVar3);
      (*(code *)PTR_apmib_set_0046aa28)(0x3b,local_98);
    }
    (*(code *)PTR_sprintf_0046a808)(auStack_8c,"method%d",0);
    pcVar3 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)(param_1,auStack_8c,&DAT_0044b32c);
    if (*pcVar3 != '\0') {
      local_98[0] = (*(code *)PTR_atoi_0046a73c)(pcVar3);
      if (local_98[0] == 0) {
        local_98[2] = 0;
        (*(code *)PTR_apmib_set_0046aa28)(0x19,local_98 + 2);
      }
      else {
        pcVar4 = (code *)PTR_wepHandler_0046a878;
        if (((local_98[0] == 1) ||
            (pcVar4 = (code *)PTR_wpaHandler_0046a8e8, local_98[0] - 2U < 0x21)) &&
           (iVar2 = (*pcVar4)(param_1,auStack_78,0), iVar2 < 0)) goto LAB_00445ff0;
      }
    }
    (*(code *)PTR_addWlProfileHandler_0046aabc)(param_1,auStack_78,0);
    FUN_00444434();
    puVar1 = PTR_run_init_script_0046a844;
    *(undefined4 *)PTR_run_init_script_flag_0046a7e0 = 1;
    (*(code *)puVar1)(&DAT_0044d9f4);
    (*(code *)PTR_req_get_cstream_var_0046a674)(param_1,"method0",&DAT_0044b32c);
    (*(code *)PTR_strcpy_0046ac60)(PTR_lastUrl_0046ac3c,"/wizard.htm");
    (*(code *)PTR_strcpy_0046ac60)(PTR_okMsg_0046ab58,"<h4>Change setting successfully!<BR>");
    puVar1 = PTR_send_redirect_perm_0046ac78;
    *(undefined4 *)PTR_countDownTime_0046a6fc = 0x14;
    (*(code *)puVar1)(param_1,"/countDownPage.htm");
  }
  return;
}

