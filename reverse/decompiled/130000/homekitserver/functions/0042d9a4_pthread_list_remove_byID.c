/* pthread_list_remove_byID @ 0042d9a4 */

undefined4 pthread_list_remove_byID(int param_1)

{
  undefined *puVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  
  (*(code *)PTR_pthread_mutex_lock_0061308c)(&DAT_006147d0);
  puVar1 = PTR_free_006119dc;
  if ((undefined4 **)DAT_006147e8 != &DAT_006147e8) {
    piVar2 = DAT_00614810;
    piVar3 = (int *)*DAT_00614810;
    while ((int **)piVar2 != &DAT_00614810) {
      if (piVar2[-10] == param_1) {
        piVar3 = (int *)piVar2[1];
        iVar4 = *piVar2;
        uVar5 = 0;
        *(int **)(iVar4 + 4) = piVar3;
        *piVar3 = iVar4;
        piVar2[1] = (int)piVar2;
        *piVar2 = (int)piVar2;
        (*(code *)puVar1)(piVar2 + -10);
        goto LAB_0042da50;
      }
      piVar2 = piVar3;
      piVar3 = (int *)*piVar3;
    }
  }
  uVar5 = 0xffffffff;
LAB_0042da50:
  (*(code *)PTR_pthread_mutex_unlock_00611c8c)(&DAT_006147d0);
  return uVar5;
}

