/* FUN_004448e4 @ 004448e4 */

void FUN_004448e4(int param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  int iVar7;
  int local_128;
  int local_124;
  undefined4 local_120 [8];
  undefined1 auStack_100 [32];
  undefined1 auStack_e0 [204];
  
  local_128 = 0;
  local_124 = 0;
  uVar2 = (*(code *)PTR_get_shm_id_0046a7d4)();
  iVar7 = *(int *)(param_1 + 0x98);
  iVar3 = FUN_00442e04(iVar7);
  iVar7 = iVar7 + iVar3;
  if (iVar3 == -1) {
    pcVar6 = "Invalid file format!";
  }
  else {
    iVar4 = (*(code *)PTR_memcmp_0046a8d0)(iVar7,"COMPHS",6);
    if (((iVar4 == 0) || (iVar4 = (*(code *)PTR_memcmp_0046a8d0)(iVar7,"COMPDS",6), iVar4 == 0)) ||
       (iVar4 = (*(code *)PTR_memcmp_0046a8d0)(iVar7,"COMPCS",6), iVar4 == 0)) {
      FUN_004428e4(iVar7,*(int *)(param_1 + 0x9c) - iVar3,&local_124,&local_128);
    }
    if ((local_128 != 0) && (local_124 != 0)) {
      (*(code *)PTR_strcpy_0046ac60)
                (auStack_e0,
                 "Update successfully!<br><br>Update in progressing.<br>Do not turn off or reboot the Device during this time.<br>"
                );
      DAT_0046f460 = 0x2d;
      uVar2 = (*(code *)PTR_req_get_cstream_var_0046a674)(param_1,"submit-url",&DAT_0044b32c);
      (*(code *)PTR_apmib_reinit_0046aa6c)();
      FUN_00444434();
      (*(code *)PTR_apmib_get_0046aadc)(0xaa,local_120);
      uVar5 = (*(code *)PTR_inet_ntoa_0046a854)(local_120[0]);
      (*(code *)PTR_strcpy_0046ac60)(auStack_100,uVar5);
      (*(code *)PTR_strcpy_0046ac60)(PTR_lastUrl_0046ac3c,uVar2);
      (*(code *)PTR_strcpy_0046ac60)(PTR_okMsg_0046ab58,auStack_e0);
      puVar1 = PTR_send_redirect_perm_0046ac78;
      *(undefined4 *)PTR_countDownTime_0046a6fc = DAT_0046f460;
      (*(code *)puVar1)(param_1,"/countDownPage.htm");
      isCFGUPGRADE = 1;
      return;
    }
    pcVar6 = "Invalid configuration file!";
  }
  (*(code *)PTR_strcpy_0046ac60)(auStack_e0,pcVar6);
  (*(code *)PTR_clear_fwupload_shm_0046a8b8)(uVar2);
  FUN_00441988(param_1);
  (*(code *)PTR_req_format_write_0046a95c)
            (param_1,"<html><body><blockquote><h4>%s</h4>\n",auStack_e0);
  (*(code *)PTR_req_format_write_0046a95c)
            (param_1,
             "<form><input type=\"button\" onclick=\"history.go (-1)\" value=\"&nbsp;&nbsp;OK&nbsp;&nbsp\" name=\"OK\"></form></blockquote></body></html>"
            );
  return;
}

