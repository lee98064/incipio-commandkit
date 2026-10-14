/* pthread_list_terminal_AllThread @ 0042e1e0 */

void pthread_list_terminal_AllThread(void)

{
  undefined *puVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  char local_58 [40];
  int *local_30;
  
  (*(code *)PTR_pthread_mutex_lock_00613f24)(&DAT_00615670);
  if ((undefined4 **)DAT_00615688 != &DAT_00615688) {
    piVar4 = DAT_006156b0;
    piVar6 = (int *)*DAT_006156b0;
    while ((int **)piVar4 != &DAT_006156b0) {
      piVar7 = piVar4 + -10;
      iVar2 = 0;
      local_30 = piVar4 + -9;
      do {
        (*(code *)PTR_memset_006130cc)(local_58,0,0x24);
        iVar5 = iVar2 + 1;
        iVar2 = (*(code *)PTR_Phytrex_HMGetControllerName_006135b4)(local_58,iVar2);
        if (((iVar2 == 0) && (local_58[0] != '\0')) &&
           (iVar2 = (*(code *)PTR_memcmp_00612e6c)(local_58,local_30,0x24), iVar2 == 0)) {
          iVar2 = (*(code *)PTR_pthread_kill_00613d24)(*piVar7,0);
          if ((iVar2 != 3) && (iVar2 != 0x16)) {
            (*(code *)PTR_pthread_kill_00613d24)(*piVar7,3);
            puVar1 = PTR_free_0061286c;
            piVar3 = (int *)piVar4[1];
            iVar2 = *piVar4;
            *(int **)(iVar2 + 4) = piVar3;
            *piVar3 = iVar2;
            piVar4[1] = (int)piVar4;
            *piVar4 = (int)piVar4;
            (*(code *)puVar1)(piVar7);
          }
          break;
        }
        iVar2 = iVar5;
      } while (iVar5 != 0x10);
      piVar4 = piVar6;
      piVar6 = (int *)*piVar6;
    }
  }
  (*(code *)PTR_pthread_mutex_unlock_00612b1c)(&DAT_00615670);
  return;
}

