/* FUN_8040316c @ 8040316c */

undefined4 FUN_8040316c(undefined4 param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  uint local_18 [2];
  
  FUN_80402d78(param_3,4,local_18);
  if (param_2 == 0) {
    if ((local_18[0] & 0x400) == 0) {
      return 0;
    }
    local_18[0] = local_18[0] & 0xfffffbff;
  }
  else {
    uVar1 = local_18[0] & 0x400;
    local_18[0] = local_18[0] | 0x400;
    if (uVar1 != 0) {
      return 0;
    }
  }
  FUN_80402a40(param_3,4,local_18[0]);
  FUN_8040311c(param_1,param_3);
  return 0;
}

