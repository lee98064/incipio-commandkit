/* FUN_0041126c @ 0041126c */

undefined4 FUN_0041126c(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int local_18;
  undefined4 local_14;
  
  iVar1 = (*(code *)PTR_pipe_0046aa44)(&local_18);
  uVar2 = 0xffffffff;
  if (iVar1 != -1) {
    iVar1 = (*(code *)PTR_fork_0046a8c8)();
    if (iVar1 == 0) {
      (*(code *)PTR_close_0046a694)(local_14);
      if (local_18 != 0) {
        (*(code *)PTR_dup2_0046ab34)(local_18,0);
        (*(code *)PTR_close_0046a694)(local_18);
      }
      (*(code *)PTR_execl_0046ab4c)("/bin/sh",&DAT_0044bf54,&DAT_0044bf58,param_1,0);
      uVar2 = (*(code *)PTR_exit_0046a75c)(1);
      return uVar2;
    }
    (*(code *)PTR_close_0046a694)(local_18);
    uVar2 = local_14;
    if (iVar1 < 0) {
      (*(code *)PTR_close_0046a694)();
      uVar2 = 0xffffffff;
    }
  }
  return uVar2;
}

