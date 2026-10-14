/* FUN_0042d380 @ 0042d380 */

undefined4 FUN_0042d380(int param_1,int param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = *(int *)(param_1 + 200);
  if (iVar2 != 0) {
    uVar3 = 0x48U - iVar2;
    if (param_3 <= 0x48U - iVar2) {
      uVar3 = param_3;
    }
    (*(code *)PTR_memcpy_006137d0)(param_1 + 0xcc + iVar2,param_2,uVar3);
    uVar1 = uVar3 + *(int *)(param_1 + 200);
    *(uint *)(param_1 + 200) = uVar1;
    if (uVar1 < 0x48) {
      return 0;
    }
    FUN_0042b1b4(param_1,param_1 + 0xcc);
    param_3 = param_3 - uVar3;
    param_2 = param_2 + uVar3;
  }
  for (; 0x47 < param_3; param_3 = param_3 - 0x48) {
    FUN_0042b1b4(param_1,param_2);
    param_2 = param_2 + 0x48;
  }
  *(uint *)(param_1 + 200) = param_3;
  if (param_3 != 0) {
    (*(code *)PTR_memcpy_006137d0)(param_1 + 0xcc,param_2,param_3);
  }
  return 0;
}

