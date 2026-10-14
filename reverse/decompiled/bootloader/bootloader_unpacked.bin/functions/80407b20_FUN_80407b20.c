/* FUN_80407b20 @ 80407b20 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80407b20(void)

{
  _DAT_b8000040 = _DAT_b8000040 & 0xfffffff8 | 6;
  _DAT_b8003500 = _DAT_b8003500 & 0xffffffdf;
  _DAT_b8003508 = _DAT_b8003508 & 0xffffffdf;
  return;
}

