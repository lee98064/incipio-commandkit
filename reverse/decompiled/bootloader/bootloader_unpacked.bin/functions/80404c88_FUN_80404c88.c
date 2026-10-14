/* FUN_80404c88 @ 80404c88 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80404c88(uint param_1,uint param_2,int param_3,int param_4,int param_5)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = FUN_80404c30();
  if (param_2 == 0) {
    trap(0x1c00);
  }
  uVar2 = uVar1 / param_2;
  if (uVar1 % param_2 != 0) {
    uVar2 = uVar1 / param_2 + 1;
  }
  if ((uVar2 & 1) != 0) {
    uVar2 = uVar2 + 1;
  }
  if (uVar2 == 0) {
    trap(0x1c00);
  }
  *(uint *)(&DAT_80410e8c + (param_1 & 0xff) * 0x48) = uVar1 / uVar2;
  do {
  } while ((_DAT_b8001208 & 0x8000000) == 0);
  _DAT_b8001200 = param_4 << 0x1b | param_3 << 0x1c | param_5 << 0x16 | (uVar2 - 2 >> 1) << 0x1d;
  return;
}

