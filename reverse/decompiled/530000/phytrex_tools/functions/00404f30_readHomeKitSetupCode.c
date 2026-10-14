/* readHomeKitSetupCode @ 00404f30 */

undefined4 readHomeKitSetupCode(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [17];
  undefined1 local_13;
  
  iVar1 = (*(code *)PTR_open_0041628c)("/dev/mtdblock2",2);
  if (iVar1 < 1) {
    (*(code *)PTR_printf_00416324)("open MTD device %s fail...\n","/dev/mtdblock2");
  }
  else {
    iVar2 = (*(code *)PTR_lseek_004162ec)(iVar1,0x10000,0);
    if ((iVar2 != -1) && (iVar2 = (*(code *)PTR_read_004162d0)(iVar1,auStack_28,0x18), iVar2 != -1))
    {
      local_13 = 0;
      uVar3 = (*(code *)PTR_strlen_00416290)(auStack_24);
      uVar3 = FUN_0040438c(auStack_24,uVar3);
      (*(code *)PTR_printf_00416324)(&DAT_004061c8,uVar3);
      if (0 < iVar1) {
        (*(code *)PTR_close_00416284)(iVar1);
      }
      return 1;
    }
  }
  if (0 < iVar1) {
    (*(code *)PTR_close_00416284)(iVar1);
  }
  return 0;
}

