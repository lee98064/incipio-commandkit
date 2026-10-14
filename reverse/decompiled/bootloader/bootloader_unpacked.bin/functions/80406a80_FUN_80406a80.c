/* FUN_80406a80 @ 80406a80 */

int FUN_80406a80(byte *param_1,byte *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  if (param_3 != 0) {
    iVar1 = (uint)*param_1 - (uint)*param_2;
    iVar2 = 0;
    while ((iVar1 = iVar1 * 0x1000000 >> 0x18, iVar1 == 0 && (param_3 = param_3 + -1, param_3 != 0))
          ) {
      iVar1 = (uint)param_1[iVar2 + 1] - (uint)param_2[iVar2 + 1];
      iVar2 = iVar2 + 1;
    }
  }
  return iVar1;
}

