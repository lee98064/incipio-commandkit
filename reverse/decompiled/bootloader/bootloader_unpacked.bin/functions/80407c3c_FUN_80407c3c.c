/* FUN_80407c3c @ 80407c3c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80407c3c(void)

{
  _DAT_b8003000 = 0;
  FUN_80406390();
  FUN_8040d07c();
  FUN_8040d05c();
  setCopReg(0,Status,(Status | 0x1f) ^ 0x1e);
  return;
}

