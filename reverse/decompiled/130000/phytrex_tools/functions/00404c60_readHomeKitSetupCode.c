/* readHomeKitSetupCode @ 00404c60 */

undefined4 readHomeKitSetupCode(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [17];
  undefined1 local_13;
  
  iVar1 = (*(code *)PTR_open_00415e9c)("/dev/mtdblock2",2);
  if (iVar1 < 1) {
    (*(code *)PTR_printf_00415f30)("open MTD device %s fail...\n","/dev/mtdblock2");
  }
  else {
    iVar2 = (*(code *)PTR_lseek_00415efc)(iVar1,0x10000,0);
    if ((iVar2 != -1) && (iVar2 = (*(code *)PTR_read_00415ee0)(iVar1,auStack_28,0x18), iVar2 != -1))
    {
      local_13 = 0;
      uVar3 = (*(code *)PTR_strlen_00415ea0)(auStack_24);
      uVar3 = FUN_004040bc(auStack_24,uVar3);
      (*(code *)PTR_printf_00415f30)(&DAT_00405dd8,uVar3);
      if (0 < iVar1) {
        (*(code *)PTR_close_00415e94)(iVar1);
      }
      return 1;
    }
  }
  if (0 < iVar1) {
    (*(code *)PTR_close_00415e94)(iVar1);
  }
  return 0;
}

