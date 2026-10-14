/* FUN_80406ae8 @ 80406ae8 */

int FUN_80406ae8(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = FUN_80406a00(param_2);
  if (iVar1 != 0) {
    iVar2 = FUN_80406a00(param_1);
    while (iVar1 <= iVar2) {
      iVar3 = FUN_80406a80(param_1,param_2,iVar1);
      iVar2 = iVar2 + -1;
      if (iVar3 == 0) {
        return param_1;
      }
      param_1 = param_1 + 1;
    }
    param_1 = 0;
  }
  return param_1;
}

