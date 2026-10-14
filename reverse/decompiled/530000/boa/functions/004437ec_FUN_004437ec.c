/* FUN_004437ec @ 004437ec */

int FUN_004437ec(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined1 auStack_28 [8];
  uint local_20;
  
  iVar1 = (*(code *)PTR_open_0046a710)(param_1,0);
  if (iVar1 == -1) {
    (*(code *)PTR_fprintf_0046a9ec)(*(undefined4 *)PTR_stderr_0046a7f0,"%s\n","Open file failed!\n")
    ;
    return -0x80000000;
  }
  iVar2 = FUN_004433ec(iVar1,auStack_28);
  uVar3 = 0x80000000;
  if ((iVar2 != 0) && (uVar3 = local_20, -1 < (int)local_20)) {
    uVar3 = 0x80000001;
  }
  (*(code *)PTR_close_0046a694)(iVar1);
  if (0x80000001 < uVar3) {
    if ((uVar3 != 0xfffffff0) && (param_2 != 0)) {
      return uVar3 + 1;
    }
    iVar1 = FUN_00443680(param_1);
    if (-1 < iVar1) {
      return -0x10;
    }
  }
  return -0x7ffffffe;
}

