/* HKCleanPairSetupInfo @ 004260e0 */

void HKCleanPairSetupInfo(int *param_1,int param_2)

{
  int iVar1;
  
  if ((*param_1 != 0) && (*(char *)(param_2 + 0x110) != '\0')) {
    DAT_00600a50 = 1;
    *(undefined1 *)(param_2 + 0x110) = 0;
    if (*(int *)(*param_1 + 4) != 0) {
      (*(code *)PTR_free_0061286c)();
    }
    iVar1 = *param_1;
    if (*(int *)(iVar1 + 0xc) != 0) {
      (*(code *)PTR_free_0061286c)();
      iVar1 = *param_1;
    }
    if (*(int *)(iVar1 + 0x14) != 0) {
      (*(code *)PTR_free_0061286c)();
    }
    iVar1 = *param_1;
    if (*(int *)(iVar1 + 0x1c) != 0) {
      (*(code *)PTR_free_0061286c)();
      iVar1 = *param_1;
    }
    if (*(int *)(*(int *)(iVar1 + 8) + 0x30) != 0) {
      (*(code *)PTR_free_0061286c)();
    }
    if (*(int *)(*(int *)(*param_1 + 8) + 0x28) != 0) {
      (*(code *)PTR_free_0061286c)();
    }
    if (*(int *)(*(int *)(*param_1 + 8) + 0x24) != 0) {
      (*(code *)PTR_free_0061286c)();
    }
    if (*(int *)(*(int *)(*param_1 + 8) + 0x48) != 0) {
      (*(code *)PTR_free_0061286c)();
    }
    if (*(int *)(*param_1 + 8) != 0) {
      (*(code *)PTR_free_0061286c)();
    }
    (*(code *)PTR_free_0061286c)(*param_1);
    *param_1 = 0;
  }
  return;
}

