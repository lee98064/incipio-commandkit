/* productInfoDel_handler @ 00403b70 */

void productInfoDel_handler(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 8) == 0) {
    (*(code *)PTR_puts_00416300)("argv[2] error.");
  }
  else {
    iVar1 = (*(code *)PTR_strcmp_004162ac)(*(undefined4 *)(param_1 + 8),"WDATA");
    if (iVar1 == 0) {
      (*(code *)PTR_wPartionDataDel_004162f0)(param_1);
    }
    else {
      iVar1 = (*(code *)PTR_strcmp_004162ac)(*(undefined4 *)(param_1 + 8),"HWINFO");
      if (iVar1 == 0) {
        (*(code *)PTR_hwInfoDel_00416330)(param_1);
      }
      else {
        (*(code *)PTR_puts_00416300)("InfoDel argv error");
      }
    }
  }
  return;
}

