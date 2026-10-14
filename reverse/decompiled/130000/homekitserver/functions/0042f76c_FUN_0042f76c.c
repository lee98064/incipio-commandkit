/* FUN_0042f76c @ 0042f76c */

undefined4 FUN_0042f76c(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_30 [4];
  undefined1 auStack_2c [17];
  undefined1 local_1b;
  
  iVar1 = (*(code *)PTR_open_006138f8)("/dev/mtdblock2",2);
  if (iVar1 < 1) {
    (*(code *)PTR_printf_0061185c)("open MTD device %s fail...\n","/dev/mtdblock2");
  }
  else {
    iVar2 = (*(code *)PTR_lseek_00612fd4)(iVar1,0x10000,0);
    if ((iVar2 != -1) && (iVar2 = (*(code *)PTR_read_00612ef0)(iVar1,auStack_30,0x18), iVar2 != -1))
    {
      iVar2 = (*(code *)PTR_memcmp_00611fdc)(auStack_30,&DAT_005ac98c,4);
      if (iVar2 == 0) {
        local_1b = 0;
        uVar3 = (*(code *)PTR_strlen_006130b4)(auStack_2c);
        uVar3 = FUN_0042f5c8(auStack_2c,uVar3);
        (*(code *)PTR_memcpy_006137d0)(param_1,uVar3,10);
        iVar2 = FUN_0042f424(param_1);
        if (iVar2 != 0) {
          (*(code *)PTR_close_0061276c)(iVar1);
          return 1;
        }
      }
    }
    (*(code *)PTR_close_0061276c)(iVar1);
  }
  return 0;
}

