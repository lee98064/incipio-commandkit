/* FUN_00403f50 @ 00403f50 */

void FUN_00403f50(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = (*(code *)PTR_strlen_004234b4)(param_2);
  iVar2 = (*(code *)PTR_write_00423568)(param_1,param_2,uVar1);
  iVar3 = (*(code *)PTR_strlen_004234b4)(param_2);
  if (iVar2 != iVar3) {
    (*(code *)PTR_puts_004235c4)("Write WPA config file error!");
    (*(code *)PTR_close_00423490)(param_1);
    (*(code *)PTR_exit_004234c4)(1);
    return;
  }
  return;
}

