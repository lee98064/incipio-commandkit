/* HKCleanPairSetupInfo @ 00425b60 */

void HKCleanPairSetupInfo(int *param_1,int param_2)

{
  int iVar1;
  
  if ((*param_1 != 0) && (*(char *)(param_2 + 0x110) != '\0')) {
    DAT_005ffbb0 = 1;
    *(undefined1 *)(param_2 + 0x110) = 0;
    if (*(int *)*param_1 != 0) {
      (*(code *)PTR_free_006119dc)();
    }
    iVar1 = *param_1;
    if (*(int *)(iVar1 + 8) != 0) {
      (*(code *)PTR_free_006119dc)();
      iVar1 = *param_1;
    }
    if (*(int *)(iVar1 + 0x10) != 0) {
      (*(code *)PTR_free_006119dc)();
    }
    iVar1 = *param_1;
    if (*(int *)(iVar1 + 0x18) != 0) {
      (*(code *)PTR_free_006119dc)();
      iVar1 = *param_1;
    }
    if (*(int *)(*(int *)(iVar1 + 4) + 0x30) != 0) {
      (*(code *)PTR_free_006119dc)();
    }
    if (*(int *)(*(int *)(*param_1 + 4) + 0x28) != 0) {
      (*(code *)PTR_free_006119dc)();
    }
    if (*(int *)(*(int *)(*param_1 + 4) + 0x24) != 0) {
      (*(code *)PTR_free_006119dc)();
    }
    if (*(int *)(*(int *)(*param_1 + 4) + 0x48) != 0) {
      (*(code *)PTR_free_006119dc)();
    }
    if (*(int *)(*param_1 + 4) != 0) {
      (*(code *)PTR_free_006119dc)();
    }
    (*(code *)PTR_free_006119dc)(*param_1);
    *param_1 = 0;
  }
  return;
}

