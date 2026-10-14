/* publish_boot_bank @ 80407ce4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void publish_boot_bank(void)

{
  FUN_804079cc(s_return_addr____x__boot_bank__d__b_8040db80,DAT_8040ee6c,DAT_8040fdb0,DAT_8040fdb4);
  if (DAT_8040fdb0 == 2) {
    _DAT_b8003504 = _DAT_b8003504 | 1;
  }
  return;
}

