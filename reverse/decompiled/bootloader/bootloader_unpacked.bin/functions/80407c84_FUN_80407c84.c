/* FUN_80407c84 @ 80407c84 */

void FUN_80407c84(void)

{
  FUN_804065e0(&DAT_80410ef8,&DAT_80420ef0);
  setCopReg(0,Status,(Status | 1) ^ 1);
  FUN_80406454();
  return;
}

