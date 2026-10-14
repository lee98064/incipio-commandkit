/* FUN_00443680 @ 00443680 */

undefined4 FUN_00443680(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined4 local_20;
  undefined4 local_1c;
  int local_18;
  undefined4 local_14;
  
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  iVar1 = (*(code *)PTR_open_0046a710)(param_1,2);
  if (iVar1 == -1) {
    (*(code *)PTR_fprintf_0046a9ec)
              (*(undefined4 *)PTR_stderr_0046a7f0,"Open file %s failed!\n",param_1);
  }
  else {
    iVar2 = FUN_004433ec(iVar1,&local_20);
    if (((iVar2 == 0) || (-1 < local_18)) || (local_18 != -0x10)) {
LAB_004437c0:
      (*(code *)PTR_close_0046a694)(iVar1);
      return 0;
    }
    local_18 = -0x11;
    iVar2 = (*(code *)PTR_lseek_0046aa9c)(iVar1,0x10000,0);
    if (iVar2 < 0) {
      uVar3 = *(undefined4 *)PTR_stderr_0046a7f0;
      pcVar4 = "lseek %s to 0x%x failed!\n";
    }
    else {
      iVar2 = (*(code *)PTR_write_0046a9fc)(iVar1,&local_20,0x10);
      if (iVar2 == 0x10) goto LAB_004437c0;
      uVar3 = *(undefined4 *)PTR_stderr_0046a7f0;
      pcVar4 = "write %s offset 0x%x failed!\n";
    }
    (*(code *)PTR_fprintf_0046a9ec)(uVar3,pcVar4,param_1,0x10000);
    (*(code *)PTR_close_0046a694)(iVar1);
  }
  return 0xffffffff;
}

