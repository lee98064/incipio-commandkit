/* FUN_80404e88 @ 80404e88 */

void FUN_80404e88(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6,
                 undefined4 param_7,undefined4 param_8,undefined4 param_9,undefined4 param_10,
                 undefined4 param_11)

{
  int iVar1;
  undefined1 uVar2;
  int iVar3;
  uint uVar4;
  
  param_1 = param_1 & 0xff;
  uVar4 = 1 << (param_3 & 0x1f);
  iVar1 = param_1 * 0x48;
  *(uint *)(&DAT_80410e64 + iVar1) = param_2;
  (&DAT_80410e68)[iVar1] = (char)(param_2 >> 0x10);
  (&DAT_80410e69)[iVar1] = (char)(param_2 >> 8);
  (&DAT_80410e6a)[iVar1] = (char)param_2;
  uVar2 = FUN_80404e5c(param_2 & 0xff,param_3 & 0xff);
  (&DAT_80410e6b)[iVar1] = uVar2;
  iVar3 = (param_1 * 9 + 1) * 8;
  (&DAT_80410e64)[iVar3] = (char)param_3;
  *(uint *)(&DAT_80410e68 + iVar3) = uVar4;
  *(uint *)(&DAT_80410e74 + iVar1) = param_4;
  if (param_4 == 0) {
    trap(0x1c00);
  }
  *(uint *)(&DAT_80410e78 + iVar1) = uVar4 / param_4;
  *(uint *)(&DAT_80410e7c + iVar1) = param_5;
  if (param_5 == 0) {
    trap(0x1c00);
  }
  *(uint *)(&DAT_80410e80 + iVar1) = uVar4 / param_5;
  *(uint *)(&DAT_80410e84 + iVar1) = param_6;
  if (param_6 == 0) {
    trap(0x1c00);
  }
  *(uint *)(&DAT_80410e88 + iVar1) = param_5 / param_6;
  *(undefined4 *)(&DAT_80410e90 + iVar1) = param_7;
  *(undefined4 *)(&DAT_80410e98 + iVar1) = param_8;
  (&DAT_80410e9c)[param_1 * 0x12] = FUN_80405cf8;
  (&DAT_80410ea0)[param_1 * 0x12] = param_9;
  *(undefined4 *)(&DAT_80410ea4 + iVar1) = param_10;
  *(undefined4 *)(&DAT_80410ea8 + iVar1) = param_11;
  return;
}

