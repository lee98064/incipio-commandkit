/* FUN_80405254 @ 80405254 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80405254(undefined1 param_1,undefined1 param_2,undefined4 param_3,int param_4,byte param_5)

{
  FUN_80404ff4(param_1,0,param_2);
  do {
  } while ((_DAT_b8001208 & 0x8000000) == 0);
  _DAT_b800120c = param_3;
  FUN_80404ff4(param_1,param_5 - 1 & 0xff,param_2);
  do {
  } while ((_DAT_b8001208 & 0x8000000) == 0);
  _DAT_b800120c = param_4 << ((4 - (uint)param_5) * 8 & 0x1f);
  FUN_80405050(param_1,0,0);
  return;
}

