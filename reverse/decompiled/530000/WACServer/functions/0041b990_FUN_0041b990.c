/* FUN_0041b990 @ 0041b990 */

void FUN_0041b990(uint *param_1)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = param_1[3];
  uVar2 = param_1[2];
  param_1[2] = uVar2 >> 8 | param_1[1] << 0x18;
  param_1[3] = uVar2 << 0x18 | uVar3 >> 8;
  uVar1 = *(ushort *)(&DAT_00422b50 + (uVar3 & 0xff) * 2);
  param_1[1] = *param_1 << 0x18 | param_1[1] >> 8;
  *param_1 = (uint)uVar1 << 0x10 ^ *param_1 >> 8;
  return;
}

