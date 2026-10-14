/* writeProductInfo_handler @ 00403090 */

void writeProductInfo_handler(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 8) == 0) {
    (*(code *)PTR_puts_00415f10)("argv[2] error.");
  }
  else {
    iVar1 = (*(code *)PTR_strcmp_00415ebc)(*(undefined4 *)(param_1 + 8),"PARCE");
    if (iVar1 == 0) {
      (*(code *)PTR_write_productInfo_parce_00415f2c)(param_1);
    }
    else {
      iVar1 = (*(code *)PTR_strcmp_00415ebc)(*(undefined4 *)(param_1 + 8),"PHYTREX");
      if (iVar1 == 0) {
        (*(code *)PTR_write_productInfo_phytrex_00415ef4)(param_1);
      }
      else {
        iVar1 = (*(code *)PTR_strcmp_00415ebc)(*(undefined4 *)(param_1 + 8),"INCIPIO");
        if (iVar1 == 0) {
          (*(code *)PTR_write_productInfo_incipio_00415ed8)(param_1);
        }
      }
    }
  }
  return;
}

