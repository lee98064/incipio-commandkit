/* pthread_list_remove_byID @ 0042e0f4 */

undefined4 pthread_list_remove_byID(int param_1)

{
  undefined *puVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  
  (*(code *)PTR_pthread_mutex_lock_00613f24)(&DAT_00615670);
  puVar1 = PTR_free_0061286c;
  if ((undefined4 **)DAT_00615688 != &DAT_00615688) {
    piVar2 = DAT_006156b0;
    piVar3 = (int *)*DAT_006156b0;
    while ((int **)piVar2 != &DAT_006156b0) {
      if (piVar2[-10] == param_1) {
        piVar3 = (int *)piVar2[1];
        iVar4 = *piVar2;
        uVar5 = 0;
        *(int **)(iVar4 + 4) = piVar3;
        *piVar3 = iVar4;
        piVar2[1] = (int)piVar2;
        *piVar2 = (int)piVar2;
        (*(code *)puVar1)(piVar2 + -10);
        goto LAB_0042e1a0;
      }
      piVar2 = piVar3;
      piVar3 = (int *)*piVar3;
    }
  }
  uVar5 = 0xffffffff;
LAB_0042e1a0:
  (*(code *)PTR_pthread_mutex_unlock_00612b1c)(&DAT_00615670);
  return uVar5;
}

