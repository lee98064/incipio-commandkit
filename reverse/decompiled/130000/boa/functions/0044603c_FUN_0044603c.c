/* FUN_0044603c @ 0044603c */

void FUN_0044603c(undefined4 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 auStack_78 [104];
  
  uVar3 = (*(code *)PTR_req_get_cstream_var_0046a674)(param_1,"submit-url",&DAT_0044b32c);
  iVar4 = FUN_004422d8(param_1,auStack_78);
  if (iVar4 < 0) {
    FUN_00441988(param_1);
    (*(code *)PTR_req_format_write_0046a95c)
              (param_1,"<html><body><blockquote><h4>%s</h4>\n",auStack_78);
    (*(code *)PTR_req_format_write_0046a95c)
              (param_1,
               "<form><input type=\"button\" onclick=\"history.go (-1)\" value=\"&nbsp;&nbsp;OK&nbsp;&nbsp\" name=\"OK\"></form></blockquote></body></html>"
              );
  }
  else {
    FUN_00444434();
    puVar2 = PTR_strcpy_0046ac60;
    puVar1 = PTR_lastUrl_0046ac3c;
    *(undefined4 *)PTR_run_init_script_flag_0046a7e0 = 1;
    (*(code *)puVar2)(puVar1,uVar3);
    (*(code *)PTR_strcpy_0046ac60)(PTR_okMsg_0046ab58,"<h4>Change setting successfully!<BR>");
    puVar1 = PTR_send_redirect_perm_0046ac78;
    *(undefined4 *)PTR_countDownTime_0046a6fc = 0x14;
    (*(code *)puVar1)(param_1,"/countDownPage.htm");
    (*(code *)PTR_run_init_script_0046a844)(&DAT_0044d9f4);
  }
  return;
}

