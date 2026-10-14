/* pidfile_write_release @ 004084fc */

void pidfile_write_release(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (-1 < param_1) {
    iVar1 = (*(code *)PTR_fdopen_004231d4)(param_1,&DAT_00410e64);
    if (iVar1 != 0) {
      uVar2 = (*(code *)PTR_getpid_004232a8)();
      (*(code *)PTR_fprintf_00423224)(iVar1,&DAT_00410e60,uVar2);
      (*(code *)PTR_fclose_00423198)(iVar1);
    }
    (*(code *)PTR_lockf_004231a0)(param_1,2,0);
                    /* WARNING: Could not recover jumptable at 0x004085b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR_close_004230cc)(param_1);
    return;
  }
  return;
}

