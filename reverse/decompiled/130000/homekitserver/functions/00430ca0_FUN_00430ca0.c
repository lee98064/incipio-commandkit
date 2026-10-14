/* FUN_00430ca0 @ 00430ca0 */

undefined4 FUN_00430ca0(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 auStack_920 [256];
  undefined1 auStack_820 [2048];
  int local_20;
  
  (*(code *)PTR_strcpy_006115d0)
            (auStack_920,
             "/homekit/getlastfwinfo/?guid=034fghijsdernck98674d32hjk&product=smartsocketwithmeter")
  ;
  iVar1 = FUN_00430888(auStack_920,auStack_820);
  uVar2 = 0xffffffff;
  if (iVar1 == 1) {
    (*(code *)PTR_printf_0061185c)("[GetFWINFO]Send fw info API done RES = [%s] \n",auStack_820);
    iVar1 = (*(code *)PTR_strstr_00611c14)(auStack_820,"information");
    if (iVar1 == 0) {
      iVar1 = (*(code *)PTR_strstr_00611c14)(auStack_820,"400 Bad Request");
      uVar2 = 0xffffffff;
      if (iVar1 != 0) {
        (*(code *)PTR_puts_006117e4)("Bad Request");
        uVar2 = 0xffffffff;
      }
    }
    else {
      iVar1 = (*(code *)PTR_strstr_00611c14)(auStack_820,"\"fwver\":\"");
      iVar1 = iVar1 + 9;
      iVar3 = (*(code *)PTR_strstr_00611c14)(iVar1,&DAT_005ad0c8);
      (*(code *)PTR_snprintf_00612f8c)(&DAT_00614a80,(iVar3 + 1) - iVar1,"%s",iVar1);
      local_20 = (*(code *)PTR_strstr_00611c14)(auStack_820,"update_url\":\"");
      local_20 = local_20 + 0xd;
      iVar1 = (*(code *)PTR_strstr_00611c14)(local_20,&DAT_005ad0dc);
      (*(code *)PTR_snprintf_00612f8c)(&DAT_00614880,(iVar1 + 1) - local_20,"%s");
      (*(code *)PTR_printf_0061185c)
                ("[GetFWINFO] Get FW info from HTTP API : ver:[%s] URL:[%s]\n",&DAT_00614a80,
                 &DAT_00614880);
      uVar2 = 1;
    }
  }
  return uVar2;
}

