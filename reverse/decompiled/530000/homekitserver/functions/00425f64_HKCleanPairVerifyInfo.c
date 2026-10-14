/* HKCleanPairVerifyInfo @ 00425f64 */

void HKCleanPairVerifyInfo(int *param_1)

{
  int iVar1;
  
  if (*param_1 != 0) {
    if (*(int *)(*param_1 + 0xc) != 0) {
      (*(code *)PTR_free_0061286c)();
    }
    iVar1 = *param_1;
    if (*(int *)(iVar1 + 0x10) != 0) {
      (*(code *)PTR_free_0061286c)();
      iVar1 = *param_1;
    }
    if (*(int *)(iVar1 + 0x14) != 0) {
      (*(code *)PTR_free_0061286c)();
    }
    iVar1 = *param_1;
    if (*(int *)(iVar1 + 0x18) != 0) {
      (*(code *)PTR_free_0061286c)();
      iVar1 = *param_1;
    }
    if (*(int *)(iVar1 + 0x1c) != 0) {
      (*(code *)PTR_free_0061286c)();
    }
    iVar1 = *param_1;
    if (*(int *)(iVar1 + 0x20) != 0) {
      (*(code *)PTR_free_0061286c)();
      iVar1 = *param_1;
    }
    if (*(int *)(iVar1 + 0x24) != 0) {
      (*(code *)PTR_free_0061286c)();
    }
    (*(code *)PTR_free_0061286c)(*param_1);
    *param_1 = 0;
  }
  return;
}

