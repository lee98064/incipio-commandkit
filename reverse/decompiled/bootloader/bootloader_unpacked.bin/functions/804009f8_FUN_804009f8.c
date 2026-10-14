/* FUN_804009f8 @ 804009f8 */

undefined4 FUN_804009f8(int param_1,undefined4 param_2)

{
  setCopReg(0,Status,(Status | 1) ^ 1);
  *(undefined4 *)(&DAT_8040ee84 + param_1 * 4) = param_2;
  setCopReg(0,Status,Status & 1 | (Status | 1) ^ 1);
  return 0;
}

