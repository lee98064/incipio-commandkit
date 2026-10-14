/* pidfile_write_release @ 004087ac */

void pidfile_write_release(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (-1 < param_1) {
    iVar1 = (*(code *)PTR_fdopen_004234bc)(param_1,&DAT_00411144);
    if (iVar1 != 0) {
      uVar2 = (*(code *)PTR_getpid_00423594)();
      (*(code *)PTR_fprintf_0042350c)(iVar1,&DAT_00411140,uVar2);
      (*(code *)PTR_fclose_00423480)(iVar1);
    }
    (*(code *)PTR_lockf_00423488)(param_1,2,0);
                    /* WARNING: Could not recover jumptable at 0x00408864. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR_close_004233ac)(param_1);
    return;
  }
  return;
}

