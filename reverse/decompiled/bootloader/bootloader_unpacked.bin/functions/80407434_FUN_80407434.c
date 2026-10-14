/* FUN_80407434 @ 80407434 */

void FUN_80407434(void)

{
  uint uVar1;
  
  uVar1 = DAT_8040fda0 & 3;
  DAT_8040fda0 = DAT_8040fda0 + 1;
  FUN_80406880((int)(char)(&DAT_8040a7a0)[uVar1]);
  FUN_80406880(8);
  return;
}

