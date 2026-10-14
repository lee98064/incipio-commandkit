/* FUN_00403f1c @ 00403f1c */

void FUN_00403f1c(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = (*(code *)PTR_strlen_00423484)(param_2);
  iVar2 = (*(code *)PTR_write_00423538)(param_1,param_2,uVar1);
  iVar3 = (*(code *)PTR_strlen_00423484)(param_2);
  if (iVar2 != iVar3) {
    (*(code *)PTR_puts_00423594)("Write WPA config file error!");
    (*(code *)PTR_close_00423460)(param_1);
    (*(code *)PTR_exit_00423494)(1);
    return;
  }
  return;
}

