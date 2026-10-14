/* FUN_80405338 @ 80405338 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_80405338(undefined1 param_1,undefined1 param_2,uint param_3,uint param_4)

{
  uint uVar1;
  
  FUN_80404ff4(param_1,0,param_2);
  do {
  } while ((_DAT_b8001208 & 0x8000000) == 0);
  _DAT_b800120c = param_3;
  FUN_80404ff4(param_1,(param_4 & 0xff) - 1 & 0xff,param_2);
  uVar1 = _DAT_b800120c;
  FUN_80405050(param_1,0,param_2);
  return uVar1 >> ((4 - (param_4 & 0xff)) * 8 & 0x1f);
}

