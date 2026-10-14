/* FUN_80407ad0 @ 80407ad0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_80407ad0(uint param_1)

{
  if (((_DAT_b8002014 & 0x1000000) != 0) && (_DAT_b8002000 >> 0x18 == param_1)) {
    DAT_8040fdb8 = 1;
    return 1;
  }
  return 0;
}

