/* FUN_80402a40 @ 80402a40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_80402a40(int param_1,int param_2,uint param_3)

{
  _DAT_bb804004 = param_1 << 0x18 | 0x80000000U | param_2 << 0x10 | param_3;
  do {
  } while (_DAT_bb804008 < 0);
  return 0;
}

