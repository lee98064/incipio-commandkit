/* pthread_list_terminal_AllThread @ 0042da90 */

void pthread_list_terminal_AllThread(void)

{
  undefined *puVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  
  (*(code *)PTR_pthread_mutex_lock_0061308c)(&DAT_006147d0);
  if ((undefined4 **)DAT_006147e8 != &DAT_006147e8) {
    piVar4 = DAT_00614810;
    piVar5 = (int *)*DAT_00614810;
    while ((int **)piVar4 != &DAT_00614810) {
      iVar2 = (*(code *)PTR_pthread_kill_00612e8c)(piVar4[-10],0);
      if ((iVar2 != 3) && (iVar2 != 0x16)) {
        (*(code *)PTR_pthread_cancel_00611e60)(piVar4[-10]);
        puVar1 = PTR_free_006119dc;
        piVar3 = (int *)piVar4[1];
        iVar2 = *piVar4;
        *(int **)(iVar2 + 4) = piVar3;
        *piVar3 = iVar2;
        piVar4[1] = (int)piVar4;
        *piVar4 = (int)piVar4;
        (*(code *)puVar1)(piVar4 + -10);
      }
      piVar4 = piVar5;
      piVar5 = (int *)*piVar5;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0042db94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_pthread_mutex_unlock_00611c8c)(&DAT_006147d0);
  return;
}

