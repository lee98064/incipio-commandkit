/* FUN_0043efd4 @ 0043efd4 */

void FUN_0043efd4(void)

{
  bool bVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  int local_10;
  int local_c;
  
  (*(code *)PTR_sscanf_00613470)
            (PTR_s_bfPjPmmrJagyc0JnT6m8oXWXV3AGNaOk_00612340 + -0x10f4,
             PTR_s_bfPjPmmrJagyc0JnT6m8oXWXV3AGNaOk_00612340 + -0x10d4,&local_10);
  piVar3 = (int *)(*(code *)PTR___errno_location_00614824)();
  iVar4 = *piVar3;
  bVar1 = false;
  if ((local_10 == -0x80000000) && (local_c == 0)) {
    bVar1 = true;
  }
  (*(code *)PTR_sscanf_00613470)
            (PTR_s_bfPjPmmrJagyc0JnT6m8oXWXV3AGNaOk_00612340 + -0x10cc,
             PTR_s_bfPjPmmrJagyc0JnT6m8oXWXV3AGNaOk_00612340 + -0x10d4,&local_10);
  piVar3 = (int *)(*(code *)PTR___errno_location_00614824)();
  bVar2 = false;
  if ((local_10 == 0x7fffffff) && (local_c == -1)) {
    bVar2 = true;
  }
  if ((((iVar4 != 0x22) || (!bVar1)) || (*piVar3 != 0x22)) || (!bVar2)) {
    *(undefined4 *)(PTR_DAT_00612328 + 0x5f50) = 1;
  }
  return;
}

