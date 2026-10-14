/* FUN_80400ebc @ 80400ebc */

uint FUN_80400ebc(ushort *param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = 0;
  for (param_2 = param_2 >> 1; param_2 != 0; param_2 = param_2 + -1) {
    uVar1 = uVar1 + *param_1;
    if (0xffff < uVar1) {
      uVar1 = uVar1 - 0xffff;
    }
    param_1 = param_1 + 1;
  }
  return ~uVar1 & 0xffff;
}

