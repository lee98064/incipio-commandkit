/* FUN_0044421c @ 0044421c */

undefined4 FUN_0044421c(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_20 [8];
  undefined4 local_18;
  
  iVar1 = (*(code *)PTR_open_0046a710)(param_1,2);
  if (iVar1 == -1) {
    (*(code *)PTR_puts_0046ab3c)("Open file failed!");
    uVar3 = 0xffffffff;
  }
  else {
    iVar2 = FUN_004433ec(iVar1,auStack_20);
    uVar3 = 0xfffffffe;
    if (iVar2 != 0) {
      local_18 = param_2;
      (*(code *)PTR_write_0046a9fc)(iVar1,auStack_20,0x10);
      (*(code *)PTR_close_0046a694)(iVar1);
      uVar3 = 0;
    }
  }
  return uVar3;
}

