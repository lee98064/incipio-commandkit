/* DoCmd @ 004072fc */

uint DoCmd(int *param_1,int param_2)

{
  int iVar1;
  uint *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined1 *puVar5;
  uint local_40;
  undefined1 auStack_3c [40];
  
  iVar1 = (*(code *)PTR_fork_004234b8)();
  if (iVar1 == -1) {
    (*(code *)PTR_perror_0042356c)(&DAT_0041126c);
    puVar2 = (uint *)(*(code *)PTR___errno_location_00423408)();
    return *puVar2;
  }
  if (iVar1 != 0) {
    (*(code *)PTR_waitpid_004235d4)(iVar1,&local_40,0);
    if ((local_40 & 0x7f) != 0) {
      return local_40;
    }
    return (int)(local_40 & 0xff00) >> 8;
  }
  (*(code *)PTR_signal_004234e8)(2,1);
  iVar1 = 2;
  if (param_2 != 0) {
    iVar1 = (*(code *)PTR_open_004233e0)(param_2,0x102);
    if (iVar1 == -1) {
      puVar5 = auStack_3c;
      (*(code *)PTR_sprintf_0042344c)(puVar5,"open %s",param_2);
      goto LAB_00407480;
    }
    (*(code *)PTR_dup2_0042355c)(iVar1,1);
    (*(code *)PTR_dup2_0042355c)(iVar1,2);
  }
  (*(code *)PTR_close_004233ac)(iVar1);
  (*(code *)PTR_setenv_004234d4)(&DAT_0041127c,"/sbin:/bin:/usr/sbin:/usr/bin",1);
  (*(code *)PTR_execvp_004233d0)(*param_1,param_1);
  puVar5 = (undefined1 *)*param_1;
LAB_00407480:
  (*(code *)PTR_perror_0042356c)(puVar5);
  puVar3 = (undefined4 *)(*(code *)PTR___errno_location_00423408)();
  uVar4 = (*(code *)PTR_exit_00423400)(*puVar3);
  return uVar4;
}

