/* FUN_004434f4 @ 004434f4 */

int FUN_004434f4(int param_1)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  undefined1 auStack_30 [4];
  undefined1 auStack_2c [24];
  
  puVar3 = (&PTR_s__dev_mtdblock1_0046a618)[param_1 + -1];
  iVar1 = (*(code *)PTR_open_0046a710)((&PTR_s__dev_mtdblock0_0046a610)[param_1 + -1],0);
  if (iVar1 != -1) {
    iVar2 = FUN_004433ec(iVar1,auStack_2c);
    (*(code *)PTR_close_0046a694)(iVar1);
    if (iVar2 != 2) {
      return iVar2;
    }
    iVar1 = (*(code *)PTR_open_0046a710)(puVar3,0);
    if (iVar1 != -1) {
      iVar2 = (*(code *)PTR_read_0046a934)(iVar1,auStack_30,4);
      iVar4 = 0;
      if (iVar2 == 4) {
        iVar2 = (*(code *)PTR_memcmp_0046a8d0)(auStack_30,&DAT_00456a54,4);
        if ((iVar2 == 0) ||
           (iVar2 = (*(code *)PTR_memcmp_0046a8d0)(auStack_30,&DAT_00456a5c,4), iVar2 == 0)) {
          iVar4 = 1;
        }
        else {
          (*(code *)PTR_puts_0046ab3c)("no rootfs signature at !");
        }
      }
      (*(code *)PTR_close_0046a694)(iVar1);
      return iVar4;
    }
  }
  (*(code *)PTR_puts_0046ab3c)("Open file failed!");
  return 0;
}

