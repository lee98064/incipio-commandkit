/* FUN_804065e0 @ 804065e0 */

void FUN_804065e0(undefined4 *param_1,int param_2)

{
  DAT_8040fd40 = param_1;
  *param_1 = 0;
  DAT_8040fd44 = (uint)(param_2 - (int)param_1) >> 3;
  param_1[1] = DAT_8040fd44;
  return;
}

