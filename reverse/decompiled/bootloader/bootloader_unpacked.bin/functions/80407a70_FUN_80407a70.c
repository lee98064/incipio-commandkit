/* FUN_80407a70 @ 80407a70 */

uint FUN_80407a70(void)

{
  uint uVar1;
  
  if (DAT_8040fdb4 < 0x80000002) {
    return 0x80000002;
  }
  uVar1 = DAT_8040fdb4;
  if (DAT_8040fdb4 != 0xfffffff0) {
    uVar1 = DAT_8040fdb4 + 1;
  }
  return uVar1;
}

