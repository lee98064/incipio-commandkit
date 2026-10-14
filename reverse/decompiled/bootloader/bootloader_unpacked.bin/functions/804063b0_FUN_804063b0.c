/* FUN_804063b0 @ 804063b0 */

void FUN_804063b0(void)

{
  setCopReg(0,Status,Status & 0x1fffff3f | 0x10000000);
  FUN_80406534();
  return;
}

