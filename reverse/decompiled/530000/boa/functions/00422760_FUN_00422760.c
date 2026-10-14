/* FUN_00422760 @ 00422760 */

void FUN_00422760(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_210 [516];
  
  uVar1 = FUN_00421134();
  (*(code *)PTR_write_0046a9fc)(uVar1,&DAT_00450a8c,3);
  (*(code *)PTR_write_0046a9fc)(uVar1,&DAT_004498e4,2);
  do {
    iVar2 = FUN_004218dc(uVar1,auStack_210,0x1ff);
  } while (0 < iVar2);
  (*(code *)PTR_close_0046a694)(uVar1);
  return;
}

