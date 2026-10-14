/* FUN_004306e0 @ 004306e0 */

undefined4 FUN_004306e0(void)

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
  (*(code *)PTR_strcpy_00612464)(auStack_2c,"10219");
  iVar8 = 0;
  (*(code *)PTR_printf_006126e8)("***orifwVer:[%s]\n",auStack_2c);
  for (iVar2 = (*(code *)PTR_atol_00614190)(auStack_2c); 9999 < iVar2; iVar2 = iVar2 + -10000) {
    iVar8 = (iVar8 + 1) * 0x1000000 >> 0x18;
  }
  (*(code *)PTR_printf_006126e8)("ver_x = %d, ver_rem = %d\n",iVar8,iVar2);
  iVar7 = 0;
  for (; 99 < iVar2; iVar2 = iVar2 + -100) {
    iVar7 = (iVar7 + 1) * 0x1000000 >> 0x18;
  }
  (*(code *)PTR_printf_006126e8)("ver_y = %d, ver_rem = %d\n",iVar7,iVar2);
  (*(code *)PTR_printf_006126e8)("ver_z = %d, ver_rem = %d\n",(int)(char)iVar2,iVar2);
  puVar3 = (undefined1 *)(*(code *)PTR_strchr_006127e8)(&DAT_00615930,0x2e);
  puVar1 = PTR_sprintf_00612e20;
  *puVar3 = 0;
  (*(code *)puVar1)(&local_38,&DAT_00615930);
  iVar4 = (*(code *)PTR_atoi_00612850)(&local_38);
  puVar1 = PTR_strchr_006127e8;
  uVar5 = 1;
  if (iVar4 <= iVar8) {
    *puVar3 = 0x2e;
    puVar6 = (undefined1 *)(*(code *)puVar1)(puVar3 + 1,0x2e);
    puVar1 = PTR_sprintf_00612e20;
    *puVar6 = 0;
    (*(code *)puVar1)(&local_34,puVar3 + 1);
    iVar8 = (*(code *)PTR_atoi_00612850)(&local_34);
    puVar1 = PTR_sprintf_00612e20;
    uVar5 = 1;
    if (iVar8 <= iVar7) {
      *puVar6 = 0x2e;
      (*(code *)puVar1)(&local_30,puVar6 + 1);
      iVar8 = (*(code *)PTR_atoi_00612850)(&local_30);
      if ((char)iVar2 < iVar8) {
        uVar5 = 1;
      }
      else {
        (*(code *)PTR_HKUpdateValueToGlobalEventTable_006149fc)(0x14,1);
        uVar5 = 0xffffffff;
      }
    }
  }
  return uVar5;
}

