/* FUN_80402a84 @ 80402a84 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_80402a84(void)

{
  return ((_DAT_b8000008 & 0x40) >> 6) * 2 + ((_DAT_b8000008 & 0x80) >> 7);
}

