/* FUN_0042db9c @ 0042db9c */

undefined4 FUN_0042db9c(void)

{
  undefined *puVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  
  (*(code *)PTR_pthread_mutex_lock_0061308c)(&DAT_006147d0);
  if ((undefined4 **)DAT_006147e8 != &DAT_006147e8) {
    piVar2 = DAT_00614810;
    piVar5 = (int *)*DAT_00614810;
    while( true ) {
      puVar1 = PTR_free_006119dc;
      if ((int **)piVar2 == &DAT_00614810) break;
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
  (*(code *)PTR_pthread_mutex_unlock_00611c8c)(&DAT_006147d0);
  (*(code *)PTR_pthread_mutex_destroy_00612c4c)(&DAT_006147d0);
  return 0;
}

