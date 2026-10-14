/* SHA512_Init_compat @ 004084e4 */

void SHA512_Init_compat(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = DAT_0041d7b4;
  uVar1 = DAT_0041d7b0;
  param_1[0x12] = 0;
  param_1[3] = uVar2;
  param_1[2] = uVar1;
  uVar1 = DAT_0041d7b8;
  param_1[5] = DAT_0041d7bc;
  param_1[4] = uVar1;
  uVar1 = DAT_0041d7c0;
  param_1[7] = DAT_0041d7c4;
  param_1[6] = uVar1;
  uVar1 = DAT_0041d7c8;
  param_1[9] = DAT_0041d7cc;
  param_1[8] = uVar1;
  uVar1 = DAT_0041d7d0;
  param_1[0xb] = DAT_0041d7d4;
  param_1[10] = uVar1;
  uVar1 = DAT_0041d7d8;
  param_1[0xd] = DAT_0041d7dc;
  param_1[0xc] = uVar1;
  uVar1 = DAT_0041d7e0;
  param_1[0xf] = DAT_0041d7e4;
  param_1[0xe] = uVar1;
  uVar1 = DAT_0041d7e8;
  param_1[0x11] = DAT_0041d7ec;
  param_1[0x10] = uVar1;
  param_1[1] = 0;
  *param_1 = 0;
  return;
}

