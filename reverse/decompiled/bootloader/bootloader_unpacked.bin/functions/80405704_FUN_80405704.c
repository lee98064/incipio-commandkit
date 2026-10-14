/* FUN_80405704 @ 80405704 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80405704(int param_1,char param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  
  param_3 = param_3 & 0xff;
  DAT_8040e920 = 0;
  uVar1 = (DAT_80410e6c - 0x11) * 0x200000 | param_1 << 0x18;
  if (param_2 == '\x01') {
    uVar1 = param_3 << 0x10 | param_3 << 0xb | uVar1;
LAB_8040579c:
    uVar2 = param_3 << 1;
    if (param_3 != 0) goto LAB_804057a8;
  }
  else if (param_2 == '\0') {
    uVar1 = param_3 << 0xb | uVar1;
  }
  else {
    if (param_2 == '\x02') {
      uVar1 = param_3 << 0x12 | param_3 << 0x10 | uVar1 | param_3 << 0xb;
      goto LAB_8040579c;
    }
    uVar1 = param_3 << 0xb | uVar1;
  }
  uVar2 = 1;
LAB_804057a8:
  if (uVar2 == 0) {
    trap(0x1c00);
  }
  do {
  } while ((_DAT_b8001208 & 0x8000000) == 0);
  _DAT_b8001204 = ((param_4 & 0xff) << 2) / uVar2 << 0xd | uVar1;
  return;
}

