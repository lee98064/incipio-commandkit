/* FUN_00431584 @ 00431584 */

undefined4 FUN_00431584(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 auStack_920 [256];
  undefined1 auStack_820 [2048];
  int local_20;
  
  (*(code *)PTR_strcpy_00612464)
            (auStack_920,
             "/homekit/getlastfwinfo/?guid=034fghijsdernck98674d32hjk&product=smartsocketwithmeter")
  ;
  iVar1 = FUN_0043116c(auStack_920,auStack_820);
  uVar2 = 0xffffffff;
  if (iVar1 == 1) {
    (*(code *)PTR_printf_006126e8)("[GetFWINFO]Send fw info API done RES = [%s] \n",auStack_820);
    iVar1 = (*(code *)PTR_strstr_00612aa4)(auStack_820,"information");
    if (iVar1 == 0) {
      iVar1 = (*(code *)PTR_strstr_00612aa4)(auStack_820,"400 Bad Request");
      uVar2 = 0xffffffff;
      if (iVar1 != 0) {
        (*(code *)PTR_puts_00612670)("Bad Request");
        uVar2 = 0xffffffff;
      }
    }
    else {
      iVar1 = (*(code *)PTR_strstr_00612aa4)(auStack_820,"\"fwver\":\"");
      iVar1 = iVar1 + 9;
      iVar3 = (*(code *)PTR_strstr_00612aa4)(iVar1,&DAT_005adf88);
      (*(code *)PTR_snprintf_00613e24)(&DAT_00615930,(iVar3 + 1) - iVar1,"%s",iVar1);
      local_20 = (*(code *)PTR_strstr_00612aa4)(auStack_820,"update_url\":\"");
      local_20 = local_20 + 0xd;
      iVar1 = (*(code *)PTR_strstr_00612aa4)(local_20,&DAT_005adf9c);
      (*(code *)PTR_snprintf_00613e24)(&DAT_00615730,(iVar1 + 1) - local_20,"%s");
      (*(code *)PTR_printf_006126e8)
                ("[GetFWINFO] Get FW info from HTTP API : ver:[%s] URL:[%s]\n",&DAT_00615930,
                 &DAT_00615730);
      uVar2 = 1;
    }
  }
  return uVar2;
}

