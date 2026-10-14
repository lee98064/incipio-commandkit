/* killDaemonByPidFile @ 00402918 */

undefined4 killDaemonByPidFile(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_20 [16];
  undefined1 *local_10;
  
  if (param_1 == 0) {
    (*(code *)PTR_printf_0042b1f0)("%s : input file name is null!\n","killDaemonByPidFile");
    uVar2 = 0xffffffff;
  }
  else {
    iVar1 = isFileExist();
    uVar2 = 0xffffffff;
    if (iVar1 != 0) {
      iVar1 = getPid_fromFile(param_1);
      if (iVar1 != 0) {
        local_10 = auStack_20;
        (*(code *)PTR_sprintf_0042b0e8)(auStack_20,&DAT_004179c4,iVar1);
        RunSystemCmd(0,&DAT_00417990,&DAT_00417998,local_10,"");
      }
      (*(code *)PTR_unlink_0042b148)(param_1);
      uVar2 = 0;
    }
  }
  return uVar2;
}

