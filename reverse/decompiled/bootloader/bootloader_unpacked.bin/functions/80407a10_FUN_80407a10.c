/* FUN_80407a10 @ 80407a10 */

undefined4 FUN_80407a10(void)

{
  if (DAT_8040fdb0 == 1) {
    if (DAT_8040fdb4 == -0x10) {
      return 0;
    }
  }
  else if ((DAT_8040fdb0 != 2) || (DAT_8040fdb4 != -0x10)) {
    return 0;
  }
  return 0x400000;
}

