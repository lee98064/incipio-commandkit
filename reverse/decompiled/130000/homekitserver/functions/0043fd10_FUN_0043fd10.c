/* FUN_0043fd10 @ 0043fd10 */

undefined4 FUN_0043fd10(int *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  if (param_1[2] < param_2) {
    iVar2 = param_1[2] << 1;
    if (param_1[2] << 1 <= param_2 + 8) {
      iVar2 = param_2 + 8;
    }
    iVar3 = (*(code *)PTR_realloc_00613690)(*param_1,iVar2);
    if (iVar3 == 0) {
      uVar1 = 0xffffffff;
    }
    else {
      param_1[2] = iVar2;
      *param_1 = iVar3;
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

