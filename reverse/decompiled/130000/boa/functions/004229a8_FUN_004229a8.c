/* FUN_004229a8 @ 004229a8 */

bool FUN_004229a8(int param_1)

{
  uint local_10 [2];
  
  local_10[0] = 0;
  FUN_0042286c(&DAT_0044bfe4,0x839,local_10,local_10);
  return (1 << (param_1 * 4 + 1U & 0x1f) & local_10[0]) != 0;
}

