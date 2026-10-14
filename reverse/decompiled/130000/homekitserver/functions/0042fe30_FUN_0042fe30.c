/* FUN_0042fe30 @ 0042fe30 */

undefined4 FUN_0042fe30(void)

{
  undefined *puVar1;
  int iVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined1 *puVar6;
  int iVar7;
  int iVar8;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined1 auStack_2c [16];
  
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  (*(code *)PTR_strcpy_006115d0)(auStack_2c,"10206");
  iVar8 = 0;
  (*(code *)PTR_printf_0061185c)("***orifwVer:[%s]\n",auStack_2c);
  for (iVar2 = (*(code *)PTR_atol_006132f0)(auStack_2c); 9999 < iVar2; iVar2 = iVar2 + -10000) {
    iVar8 = (iVar8 + 1) * 0x1000000 >> 0x18;
  }
  (*(code *)PTR_printf_0061185c)("ver_x = %d, ver_rem = %d\n",iVar8,iVar2);
  iVar7 = 0;
  for (; 99 < iVar2; iVar2 = iVar2 + -100) {
    iVar7 = (iVar7 + 1) * 0x1000000 >> 0x18;
  }
  (*(code *)PTR_printf_0061185c)("ver_y = %d, ver_rem = %d\n",iVar7,iVar2);
  (*(code *)PTR_printf_0061185c)("ver_z = %d, ver_rem = %d\n",(int)(char)iVar2,iVar2);
  puVar3 = (undefined1 *)(*(code *)PTR_strchr_00611958)(&DAT_00614a80,0x2e);
  puVar1 = PTR_sprintf_00611f90;
  *puVar3 = 0;
  (*(code *)puVar1)(&local_38,&DAT_00614a80);
  iVar4 = (*(code *)PTR_atoi_006119c0)(&local_38);
  puVar1 = PTR_strchr_00611958;
  uVar5 = 1;
  if (iVar4 <= iVar8) {
    *puVar3 = 0x2e;
    puVar6 = (undefined1 *)(*(code *)puVar1)(puVar3 + 1,0x2e);
    puVar1 = PTR_sprintf_00611f90;
    *puVar6 = 0;
    (*(code *)puVar1)(&local_34,puVar3 + 1);
    iVar8 = (*(code *)PTR_atoi_006119c0)(&local_34);
    puVar1 = PTR_sprintf_00611f90;
    uVar5 = 1;
    if (iVar8 <= iVar7) {
      *puVar6 = 0x2e;
      (*(code *)puVar1)(&local_30,puVar6 + 1);
      iVar8 = (*(code *)PTR_atoi_006119c0)(&local_30);
      if ((char)iVar2 < iVar8) {
        uVar5 = 1;
      }
      else {
        (*(code *)PTR_HKUpdateValueToGlobalEventTable_00613b54)(0x14,1);
        uVar5 = 0xffffffff;
      }
    }
  }
  return uVar5;
}

