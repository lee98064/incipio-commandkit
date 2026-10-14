/* FUN_0042e390 @ 0042e390 */

undefined4 FUN_0042e390(void)

{
  undefined *puVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  
  (*(code *)PTR_pthread_mutex_lock_00613f24)(&DAT_00615670);
  if ((undefined4 **)DAT_00615688 != &DAT_00615688) {
    piVar2 = DAT_006156b0;
    piVar5 = (int *)*DAT_006156b0;
    while( true ) {
      puVar1 = PTR_free_0061286c;
      if ((int **)piVar2 == &DAT_006156b0) break;
      piVar3 = (int *)piVar2[1];
      iVar4 = *piVar2;
      *(int **)(iVar4 + 4) = piVar3;
      *piVar3 = iVar4;
      *piVar2 = (int)piVar2;
      piVar2[1] = (int)piVar2;
      (*(code *)puVar1)(piVar2 + -10);
      piVar2 = piVar5;
      piVar5 = (int *)*piVar5;
    }
  }
  (*(code *)PTR_pthread_mutex_unlock_00612b1c)(&DAT_00615670);
  (*(code *)PTR_pthread_mutex_destroy_00613ae8)(&DAT_00615670);
  return 0;
}

