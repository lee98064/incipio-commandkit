/* DoCmd @ 00402664 */

uint DoCmd(int *param_1,int param_2)

{
  int iVar1;
  uint *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined1 *puVar5;
  uint local_40;
  undefined1 auStack_3c [40];
  
  iVar1 = (*(code *)PTR_fork_0042b134)();
  if (iVar1 == -1) {
    (*(code *)PTR_perror_0042b1c0)(&DAT_00417a18);
    puVar2 = (uint *)(*(code *)PTR___errno_location_0042b0d0)();
    return *puVar2;
  }
  if (iVar1 != 0) {
    (*(code *)PTR_waitpid_0042b200)(iVar1,&local_40,0);
    if ((local_40 & 0x7f) != 0) {
      return local_40;
    }
    return (int)(local_40 & 0xff00) >> 8;
  }
  (*(code *)PTR_signal_0042b158)(2,1);
  iVar1 = 2;
  if (param_2 != 0) {
    iVar1 = (*(code *)PTR_open_0042b0b4)(param_2,0x102);
    if (iVar1 == -1) {
      puVar5 = auStack_3c;
      (*(code *)PTR_sprintf_0042b0e8)(puVar5,"open %s",param_2);
      goto LAB_004027e8;
    }
    (*(code *)PTR_dup2_0042b1b0)(iVar1,1);
    (*(code *)PTR_dup2_0042b1b0)(iVar1,2);
  }
  (*(code *)PTR_close_0042b098)(iVar1);
  (*(code *)PTR_setenv_0042b144)(&DAT_00417a28,"/sbin:/bin:/usr/sbin:/usr/bin",1);
  (*(code *)PTR_execvp_0042b0a8)(*param_1,param_1);
  puVar5 = (undefined1 *)*param_1;
LAB_004027e8:
  (*(code *)PTR_perror_0042b1c0)(puVar5);
  puVar3 = (undefined4 *)(*(code *)PTR___errno_location_0042b0d0)();
  uVar4 = (*(code *)PTR_exit_0042b0cc)(*puVar3);
  return uVar4;
}

