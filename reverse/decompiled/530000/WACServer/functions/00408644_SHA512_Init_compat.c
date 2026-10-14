/* SHA512_Init_compat @ 00408644 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SHA512_Init_compat(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = DAT_0041d9d4;
  uVar1 = DAT_0041d9d0;
  param_1[0x12] = 0;
  param_1[3] = uVar2;
  param_1[2] = uVar1;
  uVar1 = DAT_0041d9d8;
  param_1[5] = DAT_0041d9dc;
  param_1[4] = uVar1;
  uVar1 = DAT_0041d9e0;
  param_1[7] = DAT_0041d9e4;
  param_1[6] = uVar1;
  uVar1 = DAT_0041d9e8;
  param_1[9] = DAT_0041d9ec;
  param_1[8] = uVar1;
  uVar1 = DAT_0041d9f0;
  param_1[0xb] = DAT_0041d9f4;
  param_1[10] = uVar1;
  uVar1 = DAT_0041d9f8;
  param_1[0xd] = DAT_0041d9fc;
  param_1[0xc] = uVar1;
  uVar1 = DAT_0041da00;
  param_1[0xf] = DAT_0041da04;
  param_1[0xe] = uVar1;
  uVar1 = DAT_0041da08;
  param_1[0x11] = _DAT_0041da0c;
  param_1[0x10] = uVar1;
  param_1[1] = 0;
  *param_1 = 0;
  return;
}

