/* checkFWInfo @ 00430e5c */

undefined4 checkFWInfo(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_00430ca0();
  if (0 < iVar1) {
    (*(code *)PTR_sprintf_00611f90)(param_1,&DAT_00614880);
    iVar1 = FUN_0042fe30();
    if (0 < iVar1) {
      return 1;
    }
  }
  return 0xffffffff;
}

