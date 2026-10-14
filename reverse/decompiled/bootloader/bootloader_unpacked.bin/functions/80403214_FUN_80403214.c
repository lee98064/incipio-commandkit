/* FUN_80403214 @ 80403214 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80403214(void)

{
  _DAT_b8000010 = _DAT_b8000010 & 0xfffff7ff;
  FUN_80409010(5000);
  _DAT_b8000010 = _DAT_b8000010 | 0x800;
  FUN_80409010(1000);
  return;
}

