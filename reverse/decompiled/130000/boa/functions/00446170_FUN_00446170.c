/* FUN_00446170 @ 00446170 */

void FUN_00446170(undefined4 param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  
  uVar2 = (*(code *)PTR_req_get_cstream_var_0046a674)(param_1,"submit-url",&DAT_0044b32c);
  FUN_00444434();
  puVar1 = PTR_run_init_script_0046a844;
  *(undefined4 *)PTR_run_init_script_flag_0046a7e0 = 1;
  (*(code *)puVar1)(&DAT_0044d9f4);
  (*(code *)PTR_strcpy_0046ac60)(PTR_lastUrl_0046ac3c,uVar2);
  (*(code *)PTR_strcpy_0046ac60)(PTR_okMsg_0046ab58,"<h4>Change setting successfully!<BR>");
  puVar1 = PTR_send_redirect_perm_0046ac78;
  *(undefined4 *)PTR_countDownTime_0046a6fc = 0x14;
  (*(code *)puVar1)(param_1,"/countDownPage.htm");
  *(undefined4 *)PTR_needReboot_0046a9b4 = 0;
  return;
}

