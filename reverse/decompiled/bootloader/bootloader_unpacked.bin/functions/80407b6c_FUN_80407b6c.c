/* FUN_80407b6c @ 80407b6c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80407b6c(uint param_1)

{
  _DAT_b8002008 = 0xc7000000;
  _DAT_a1000000 = param_1 / 0x96000 - 1;
  _DAT_b8002000 = _DAT_a1000000 * 0x1000000;
  _DAT_b8002004 = (_DAT_a1000000 >> 8) << 0x18;
  _DAT_b800200c = 0x3000000;
  return;
}

