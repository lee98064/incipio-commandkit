/* FUN_00411cf8 @ 00411cf8 */

int FUN_00411cf8(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_00411c70(param_1,PTR_str_boundry_0046ab20,param_2);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = (*(code *)PTR_strlen_0046a714)(PTR_str_boundry_0046ab20);
    iVar2 = iVar1 + iVar2 + 2;
  }
  return iVar2;
}

