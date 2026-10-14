/* writeProductInfo_handler @ 00403130 */

void writeProductInfo_handler(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 8) == 0) {
    (*(code *)PTR_puts_00416300)("argv[2] error.");
  }
  else {
    iVar1 = (*(code *)PTR_strcmp_004162ac)(*(undefined4 *)(param_1 + 8),"PARCE");
    if (iVar1 == 0) {
      (*(code *)PTR_write_productInfo_parce_00416320)(param_1);
    }
    else {
      iVar1 = (*(code *)PTR_strcmp_004162ac)(*(undefined4 *)(param_1 + 8),"PHYTREX");
      if (iVar1 == 0) {
        (*(code *)PTR_write_productInfo_phytrex_004162e4)(param_1);
      }
      else {
        iVar1 = (*(code *)PTR_strcmp_004162ac)(*(undefined4 *)(param_1 + 8),"INCIPIO");
        if (iVar1 == 0) {
          (*(code *)PTR_write_productInfo_incipio_004162c8)(param_1);
        }
      }
    }
  }
  return;
}

