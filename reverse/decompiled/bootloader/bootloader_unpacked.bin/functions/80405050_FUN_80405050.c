/* FUN_80405050 @ 80405050 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80405050(undefined4 param_1,uint param_2,int param_3)

{
  param_2 = param_2 & 0xff;
  if (param_2 == 0) {
    param_2 = 1;
  }
  do {
  } while ((_DAT_b8001208 & 0x8000000) == 0);
  _DAT_b8001208 = param_3 << 0x19 | 0xc8050000U | param_2 << 0x1c;
  return;
}

