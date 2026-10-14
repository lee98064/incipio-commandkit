/* FUN_80402d78 @ 80402d78 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_80402d78(int param_1,int param_2,uint *param_3)

{
  _DAT_bb804004 = param_2 << 0x10 | param_1 << 0x18;
  _DAT_b8003000 = _DAT_b8003000 | 0x100;
  FUN_80407318(10);
  do {
  } while ((int)_DAT_bb804008 < 0);
  *param_3 = _DAT_bb804008 & 0xffff;
  return 0;
}

