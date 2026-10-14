/* FUN_80405104 @ 80405104 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_80405104(undefined1 param_1,char param_2)

{
  undefined4 uVar1;
  
  do {
  } while ((_DAT_b8001208 & 0x8000000) == 0);
  _DAT_b8001200 = 0xffc00000;
  FUN_804050a4(param_1);
  FUN_80404ff4(param_1,0,0);
  do {
  } while ((_DAT_b8001208 & 0x8000000) == 0);
  _DAT_b800120c = 0x9f000000;
  FUN_80404ff4(param_1,param_2 + -1,0);
  uVar1 = _DAT_b800120c;
  FUN_80405050(param_1,0,0);
  return uVar1;
}

