/* DoCmd @ 0040704c */

uint DoCmd(int *param_1,int param_2)

{
  int iVar1;
  uint *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined1 *puVar5;
  uint local_40;
  undefined1 auStack_3c [40];
  
  iVar1 = (*(code *)PTR_fork_004231d0)();
  if (iVar1 == -1) {
    (*(code *)PTR_perror_00423284)(&DAT_00410f8c);
    puVar2 = (uint *)(*(code *)PTR___errno_location_00423128)();
    return *puVar2;
  }
  if (iVar1 != 0) {
    (*(code *)PTR_waitpid_004232e8)(iVar1,&local_40,0);
    if ((local_40 & 0x7f) != 0) {
      return local_40;
    }
    return (int)(local_40 & 0xff00) >> 8;
  }
  (*(code *)PTR_signal_00423200)(2,1);
  iVar1 = 2;
  if (param_2 != 0) {
    iVar1 = (*(code *)PTR_open_00423100)(param_2,0x102);
    if (iVar1 == -1) {
      puVar5 = auStack_3c;
      (*(code *)PTR_sprintf_00423164)(puVar5,"open %s",param_2);
      goto LAB_004071d0;
    }
    (*(code *)PTR_dup2_00423274)(iVar1,1);
    (*(code *)PTR_dup2_00423274)(iVar1,2);
  }
  (*(code *)PTR_close_004230cc)(iVar1);
  (*(code *)PTR_setenv_004231ec)(&DAT_00410f9c,"/sbin:/bin:/usr/sbin:/usr/bin",1);
  (*(code *)PTR_execvp_004230f0)(*param_1,param_1);
  puVar5 = (undefined1 *)*param_1;
LAB_004071d0:
  (*(code *)PTR_perror_00423284)(puVar5);
  puVar3 = (undefined4 *)(*(code *)PTR___errno_location_00423128)();
  uVar4 = (*(code *)PTR_exit_00423120)(*puVar3);
  return uVar4;
}

