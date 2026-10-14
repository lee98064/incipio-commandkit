/* checkWanStatus @ 004172b0 */

undefined4 checkWanStatus(void)

{
  int iVar1;
  undefined4 uVar2;
  int local_18;
  int local_14 [2];
  
  local_14[0] = -1;
  local_18 = -1;
  iVar1 = (*(code *)PTR_isFileExist_0042b0ac)("/proc/eth1/up_event");
  if (iVar1 == 0) {
    (*(code *)PTR_printf_0042b1f0)("%s: %s is not exist!!\n","checkWanStatus","/proc/eth1/up_event")
    ;
    uVar2 = 0xffffffff;
  }
  else {
    (*(code *)PTR_apmib_get_0042b1a0)(0x68,local_14);
    uVar2 = 0xffffffff;
    if (local_14[0] == 0) {
      iVar1 = (*(code *)PTR_fopen_0042b118)("/proc/eth1/up_event",&DAT_00419c20);
      if (iVar1 == 0) {
        uVar2 = 0xffffffff;
      }
      else {
        (*(code *)PTR_fscanf_0042b1d4)(iVar1,&DAT_00417aa4,&local_18);
        if (local_18 == 1) {
          (*(code *)PTR_RunSystemCmd_0042b0dc)("/proc/eth1/up_event",&DAT_00417b58,&DAT_00418d58,"")
          ;
          FUN_0041718c();
        }
        (*(code *)PTR_fclose_0042b10c)(iVar1);
        uVar2 = 0;
      }
    }
  }
  return uVar2;
}

