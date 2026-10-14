/* productInfoDel_handler @ 00403ad0 */

void productInfoDel_handler(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 8) == 0) {
    (*(code *)PTR_puts_00415f10)("argv[2] error.");
  }
  else {
    iVar1 = (*(code *)PTR_strcmp_00415ebc)(*(undefined4 *)(param_1 + 8),"WDATA");
    if (iVar1 == 0) {
      (*(code *)PTR_wPartionDataDel_00415f00)(param_1);
    }
    else {
      iVar1 = (*(code *)PTR_strcmp_00415ebc)(*(undefined4 *)(param_1 + 8),"HWINFO");
      if (iVar1 == 0) {
        (*(code *)PTR_hwInfoDel_00415f3c)(param_1);
      }
      else {
        (*(code *)PTR_puts_00415f10)("InfoDel argv error");
      }
    }
  }
  return;
}

