/* HKCleanPairVerifyInfo @ 004259e4 */

void HKCleanPairVerifyInfo(int *param_1)

{
  int iVar1;
  
  if (*param_1 != 0) {
    if (*(int *)(*param_1 + 0xc) != 0) {
      (*(code *)PTR_free_006119dc)();
    }
    iVar1 = *param_1;
    if (*(int *)(iVar1 + 0x10) != 0) {
      (*(code *)PTR_free_006119dc)();
      iVar1 = *param_1;
    }
    if (*(int *)(iVar1 + 0x14) != 0) {
      (*(code *)PTR_free_006119dc)();
    }
    iVar1 = *param_1;
    if (*(int *)(iVar1 + 0x18) != 0) {
      (*(code *)PTR_free_006119dc)();
      iVar1 = *param_1;
    }
    if (*(int *)(iVar1 + 0x1c) != 0) {
      (*(code *)PTR_free_006119dc)();
    }
    iVar1 = *param_1;
    if (*(int *)(iVar1 + 0x20) != 0) {
      (*(code *)PTR_free_006119dc)();
      iVar1 = *param_1;
    }
    if (*(int *)(iVar1 + 0x24) != 0) {
      (*(code *)PTR_free_006119dc)();
    }
    (*(code *)PTR_free_006119dc)(*param_1);
    *param_1 = 0;
  }
  return;
}

