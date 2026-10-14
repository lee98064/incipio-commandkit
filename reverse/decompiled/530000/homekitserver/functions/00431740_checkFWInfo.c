/* checkFWInfo @ 00431740 */

undefined4 checkFWInfo(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_00431584();
  if (0 < iVar1) {
    (*(code *)PTR_sprintf_00612e20)(param_1,&DAT_00615730);
    iVar1 = FUN_004306e0();
    if (0 < iVar1) {
      return 1;
    }
  }
  return 0xffffffff;
}

