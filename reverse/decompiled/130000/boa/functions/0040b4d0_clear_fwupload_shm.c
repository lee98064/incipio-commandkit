/* clear_fwupload_shm @ 0040b4d0 */

void clear_fwupload_shm(void)

{
  int iVar1;
  
  if (DAT_0046dfc0 != 0) {
    iVar1 = (*(code *)PTR_shmdt_0046a994)();
    if (iVar1 == -1) {
      (*(code *)PTR_fputs_0046a6e4)("shmdt failed\n",*(undefined4 *)PTR_stderr_0046a7f0);
    }
  }
  if (DAT_0046dfc4 != 0) {
    iVar1 = (*(code *)PTR_shmctl_0046ac08)(DAT_0046dfc4,0,0);
    if (iVar1 == -1) {
      (*(code *)PTR_fputs_0046a6e4)("shmctl(IPC_RMID) failed\n",*(undefined4 *)PTR_stderr_0046a7f0);
    }
  }
  DAT_0046dfc4 = 0;
  DAT_0046dfc0 = 0;
  return;
}

