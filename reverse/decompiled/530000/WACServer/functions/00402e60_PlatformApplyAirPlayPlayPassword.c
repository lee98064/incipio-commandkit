/* PlatformApplyAirPlayPlayPassword @ 00402e60 */

undefined4 PlatformApplyAirPlayPlayPassword(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  (*(code *)PTR_puts_00433294)("[WAC]PlatformApplyAirPlayPlayPassword : begin --");
  if (param_1 != 0) {
    iVar1 = (*(code *)PTR_fopen_00433194)("/tmp/net/wac_password_info.txt",&DAT_0041cdd0);
    if (iVar1 != 0) {
      uVar2 = (*(code *)PTR_strlen_004330cc)(param_1);
      (*(code *)PTR_fwrite_0043310c)(param_1,uVar2,1,iVar1);
      (*(code *)PTR_printf_004332e4)("[WAC]PASS=[%s] \n",param_1);
      (*(code *)PTR_fclose_00433178)(iVar1);
    }
  }
  (*(code *)PTR_puts_00433294)("[WAC]PlatformApplyAirPlayPlayPassword : end --");
  return 0;
}

