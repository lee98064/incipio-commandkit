/* FUN_00431864 @ 00431864 */

void FUN_00431864(int param_1)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 unaff_s0;
  undefined1 auStack_138 [128];
  int local_b8;
  undefined1 auStack_b0 [128];
  int local_30;
  uint local_2c;
  
  (*(code *)PTR_memset_006130cc)(auStack_138,0,0x88);
  (*(code *)PTR_memset_006130cc)(auStack_b0,0,0x88);
  do {
    iVar2 = (*(code *)PTR_access_00613bac)("/var/fwProgress",4);
    if (iVar2 == 0) {
      iVar2 = (*(code *)PTR_fopen_0061395c)("/var/fwProgress","r");
      if (iVar2 == 0) goto LAB_00431928;
      uVar4 = (*(code *)PTR_fileno_00613768)(iVar2);
      iVar3 = (*(code *)PTR_flock_0061302c)(uVar4,2);
      if (iVar3 == 0) {
        (*(code *)PTR_fscanf_00612638)(iVar2,"%s %d %d",auStack_b0,&local_30,&local_2c);
        uVar4 = (*(code *)PTR_fileno_00613768)(iVar2);
        (*(code *)PTR_flock_0061302c)(uVar4,8);
        (*(code *)PTR_fclose_00613a3c)(iVar2);
      }
      puVar1 = PTR_HKUpdateValueToGlobalEventTable_006149fc;
      if (local_2c == 200) {
        unaff_s0 = 0;
        goto LAB_00431ac0;
      }
      if (200 < (int)local_2c) {
        if (local_2c == 0x191) {
          (*(code *)PTR_puts_00612670)("verify fw fail");
          unaff_s0 = 3;
        }
        else if (local_2c == 0x192) {
          (*(code *)PTR_puts_00612670)("upgrade fw fail");
          unaff_s0 = 4;
        }
        else if (local_2c == 400) {
          (*(code *)PTR_puts_00612670)("download fw fail");
          unaff_s0 = 2;
        }
LAB_00431ac0:
        puVar1 = PTR_printf_006126e8;
        *(int *)(param_1 + 0x804) = local_30;
        (*(code *)puVar1)("Progress:[%d] Result:[%d]\n",local_30,unaff_s0);
        (*(code *)PTR_HKUpdateValueToGlobalEventTable_006149fc)(0x13,local_30);
        puVar1 = PTR_HKUpdateValueToGlobalEventTable_006149fc;
        *(undefined4 *)(param_1 + 0x808) = unaff_s0;
        (*(code *)puVar1)(0x14,unaff_s0);
        (*(code *)PTR_memset_006130cc)(auStack_b0,0,0x88);
        (*(code *)PTR_memset_006130cc)(auStack_138,0,0x88);
        (*(code *)PTR_pthread_exit_00612d68)(0);
        return;
      }
      if (7 < local_2c) goto LAB_00431ac0;
      if (local_30 != local_b8) {
        local_b8 = local_30;
        *(int *)(param_1 + 0x804) = local_30;
        (*(code *)puVar1)(0x13);
      }
      uVar4 = 2;
    }
    else {
LAB_00431928:
      uVar4 = 1;
    }
    (*(code *)PTR_sleep_0061454c)(uVar4);
  } while( true );
}

