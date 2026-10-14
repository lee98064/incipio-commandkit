/* FUN_0041426c @ 0041426c */

bool FUN_0041426c(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = 0x6000;
  if ((param_1 != 1) && (uVar1 = 0xc000, param_1 == 2)) {
    uVar1 = 0x8000;
  }
  iVar2 = FUN_00414188(param_2,uVar1);
  if (iVar2 == 0) {
    (*(code *)PTR_printf_0057d248)("flash write apmib failed");
  }
  return iVar2 != 0;
}

