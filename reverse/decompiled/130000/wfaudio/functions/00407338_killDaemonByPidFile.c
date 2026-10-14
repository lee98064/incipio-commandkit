/* killDaemonByPidFile @ 00407338 */

undefined4 killDaemonByPidFile(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_20 [16];
  undefined1 *local_10;
  
  if (param_1 == 0) {
    (*(code *)PTR_printf_004232d4)("%s : input file name is null!\n","killDaemonByPidFile");
    uVar2 = 0xffffffff;
  }
  else {
    iVar1 = isFileExist();
    uVar2 = 0xffffffff;
    if (iVar1 != 0) {
      iVar1 = getPid_fromFile(param_1);
      if (iVar1 != 0) {
        local_10 = auStack_20;
        (*(code *)PTR_sprintf_00423164)(auStack_20,&DAT_00411514,iVar1);
        RunSystemCmd(0,&DAT_00410fe4,&DAT_00410fec,local_10,"");
      }
      (*(code *)PTR_unlink_004231f0)(param_1);
      uVar2 = 0;
    }
  }
  return uVar2;
}

