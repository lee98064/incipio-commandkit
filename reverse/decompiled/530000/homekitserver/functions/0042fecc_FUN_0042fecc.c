/* FUN_0042fecc @ 0042fecc */

undefined4 FUN_0042fecc(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_30 [4];
  undefined1 auStack_2c [17];
  undefined1 local_1b;
  
  iVar1 = (*(code *)PTR_open_0061479c)("/dev/mtdblock2",2);
  if (iVar1 < 1) {
    (*(code *)PTR_printf_006126e8)("open MTD device %s fail...\n","/dev/mtdblock2");
  }
  else {
    iVar2 = (*(code *)PTR_lseek_00613e6c)(iVar1,0x10000,0);
    if ((iVar2 != -1) && (iVar2 = (*(code *)PTR_read_00613d88)(iVar1,auStack_30,0x18), iVar2 != -1))
    {
      iVar2 = (*(code *)PTR_memcmp_00612e6c)(auStack_30,&DAT_005ad7cc,4);
      if (iVar2 == 0) {
        local_1b = 0;
        uVar3 = (*(code *)PTR_strlen_00613f4c)(auStack_2c);
        uVar3 = FUN_0042fd28(auStack_2c,uVar3);
        (*(code *)PTR_memcpy_00614674)(param_1,uVar3,10);
        iVar2 = FUN_0042fb84(param_1);
        if (iVar2 != 0) {
          (*(code *)PTR_close_00613604)(iVar1);
          return 1;
        }
      }
    }
    (*(code *)PTR_close_00613604)(iVar1);
  }
  return 0;
}

