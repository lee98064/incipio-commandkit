/* PlatformApplyName @ 00402f4c */

undefined4 PlatformApplyName(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1 != 0) {
    (*(code *)PTR_strcpy_004332fc)(*(undefined4 *)(PTR_myParam_0043316c + 0x1c),param_1);
    iVar1 = (*(code *)PTR_fopen_00433194)("/tmp/net/wac_applyName_info.txt",&DAT_0041cdd0);
    if (iVar1 != 0) {
      uVar2 = (*(code *)PTR_strlen_004330cc)(param_1);
      (*(code *)PTR_fwrite_0043310c)(param_1,uVar2,1,iVar1);
      (*(code *)PTR_printf_004332e4)("[WAC]NAME=[%s] \n",param_1);
      (*(code *)PTR_fclose_00433178)(iVar1);
    }
  }
  return 0;
}

