/* FUN_00403a60 @ 00403a60 */

undefined4 FUN_00403a60(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  char local_1c0 [100];
  char local_15c [100];
  char local_f8 [200];
  int local_30;
  
  local_30 = param_1;
  iVar2 = (*(code *)PTR_apmib_init_0042347c)();
  if (iVar2 == 0) {
    (*(code *)PTR_puts_00423594)("Initialize AP MIB failed!");
  }
  else {
    if (local_30 == 0) {
      (*(code *)PTR_apmib_get_0042357c)(0x94,local_1c0);
      uVar4 = 0x95;
    }
    else {
      (*(code *)PTR_apmib_get_0042357c)(0x6a);
      uVar4 = 0x6b;
    }
    iVar5 = 0;
    (*(code *)PTR_apmib_get_0042357c)(uVar4,local_15c);
    for (iVar2 = 0; cVar1 = local_1c0[iVar2], cVar1 != '\0'; iVar2 = iVar2 + 1) {
      if (cVar1 == '\"') {
        local_f8[iVar5] = '\\';
        iVar5 = iVar5 + 1;
      }
      local_f8[iVar5] = cVar1;
      iVar5 = iVar5 + 1;
    }
    if (iVar5 != iVar2) {
      (*(code *)PTR_memcpy_004235a4)(local_1c0,local_f8,iVar5);
      local_1c0[iVar5] = '\0';
    }
    iVar5 = 0;
    for (iVar2 = 0; cVar1 = local_15c[iVar2], cVar1 != '\0'; iVar2 = iVar2 + 1) {
      if (cVar1 == '\"') {
        local_f8[iVar5] = '\\';
        iVar5 = iVar5 + 1;
      }
      local_f8[iVar5] = cVar1;
      iVar5 = iVar5 + 1;
    }
    if (iVar5 != iVar2) {
      (*(code *)PTR_memcpy_004235a4)(local_15c,local_f8,iVar5);
      local_15c[iVar5] = '\0';
    }
    iVar2 = (*(code *)PTR_fopen_004234e0)(param_2,&DAT_0041315c);
    if (iVar2 != 0) {
      (*(code *)PTR_sprintf_004234b0)(local_f8,"name \"%s\"\n",local_1c0);
      (*(code *)PTR_fputs_00423470)(local_f8,iVar2);
      uVar3 = (*(code *)PTR_strlen_00423484)(local_15c);
      if (0x1f < uVar3) {
        (*(code *)PTR_strcpy_004235d0)(local_f8,"-mschap\r\n");
        (*(code *)PTR_fputs_00423470)(local_f8,iVar2);
        (*(code *)PTR_strcpy_004235d0)(local_f8,"-mschap-v2\r\n");
        (*(code *)PTR_fputs_00423470)(local_f8,iVar2);
      }
      (*(code *)PTR_fclose_004234cc)(iVar2);
      iVar2 = (*(code *)PTR_fopen_004234e0)(param_3,&DAT_0041315c);
      param_2 = param_3;
      if (iVar2 != 0) {
        (*(code *)PTR_fputs_00423470)("#################################################\n",iVar2);
        (*(code *)PTR_sprintf_004234b0)(local_f8,"\"%s\"\t*\t\"%s\"\n",local_1c0,local_15c);
        (*(code *)PTR_fputs_00423470)(local_f8,iVar2);
        iVar2 = (*(code *)PTR_fopen_004234e0)(param_4,&DAT_0041315c);
        param_2 = param_4;
        if (iVar2 != 0) {
          (*(code *)PTR_fputs_00423470)("#################################################\n",iVar2)
          ;
          (*(code *)PTR_sprintf_004234b0)(local_f8,"\"%s\"\t*\t\"%s\"\n",local_1c0,local_15c);
          (*(code *)PTR_fputs_00423470)(local_f8,iVar2);
          return 0;
        }
      }
    }
    (*(code *)PTR_printf_004235c4)("open file %s error!\n",param_2);
  }
  return 0xffffffff;
}

