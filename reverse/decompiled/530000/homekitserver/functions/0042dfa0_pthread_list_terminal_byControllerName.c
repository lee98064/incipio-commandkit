/* pthread_list_terminal_byControllerName @ 0042dfa0 */

undefined4 pthread_list_terminal_byControllerName(int param_1)

{
  undefined *puVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  undefined4 uVar5;
  
  uVar5 = 0xffffffff;
  if (param_1 != 0) {
    (*(code *)PTR_pthread_mutex_lock_00613f24)(&DAT_00615670);
    if ((undefined4 **)DAT_00615688 != &DAT_00615688) {
      piVar4 = DAT_006156b0;
      piVar3 = (int *)*DAT_006156b0;
      while( true ) {
        if ((int **)piVar4 == &DAT_006156b0) break;
        iVar2 = (*(code *)PTR_memcmp_00612e6c)(param_1,piVar4 + -9,0x24);
        if (iVar2 == 0) {
          iVar2 = (*(code *)PTR_pthread_kill_00613d24)(piVar4[-10],0);
          if ((iVar2 != 3) && (iVar2 != 0x16)) {
            uVar5 = 0;
            (*(code *)PTR_pthread_kill_00613d24)(piVar4[-10],3);
            puVar1 = PTR_free_0061286c;
            piVar3 = (int *)piVar4[1];
            iVar2 = *piVar4;
            *(int **)(iVar2 + 4) = piVar3;
            *piVar3 = iVar2;
            piVar4[1] = (int)piVar4;
            *piVar4 = (int)piVar4;
            (*(code *)puVar1)(piVar4 + -10);
            goto LAB_0042e0b8;
          }
        }
        piVar4 = piVar3;
        piVar3 = (int *)*piVar3;
      }
    }
    uVar5 = 0xffffffff;
LAB_0042e0b8:
    (*(code *)PTR_pthread_mutex_unlock_00612b1c)(&DAT_00615670);
  }
  return uVar5;
}

