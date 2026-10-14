/* FUN_80405c18 @ 80405c18 */

void FUN_80405c18(uint param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  undefined1 *puVar3;
  
  param_1 = param_1 & 0xff;
  uVar1 = *(uint *)(&DAT_80410e7c + param_1 * 0x48);
  puVar3 = &stack0xffffffe0 + -(uVar1 + 0xe & 0xfffffff8);
  if (uVar1 == 0) {
    trap(0x1c00);
  }
  iVar2 = param_2 - param_2 % uVar1;
  (*(code *)(&DAT_80410ea0)[param_1 * 0x12])(param_1,iVar2,uVar1,puVar3);
  FUN_80406a54(puVar3 + param_2 % uVar1,param_4,param_3);
  FUN_80405b18(param_1,iVar2,puVar3);
  return;
}

