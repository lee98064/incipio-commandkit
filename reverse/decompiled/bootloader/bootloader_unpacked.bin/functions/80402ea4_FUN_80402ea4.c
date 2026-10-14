/* FUN_80402ea4 @ 80402ea4 */

void FUN_80402ea4(uint param_1,uint param_2,undefined4 param_3,uint param_4,uint param_5)

{
  uint uVar1;
  uint local_30 [3];
  
  local_30[0] = 0;
  if (param_1 == 999) {
    uVar1 = 5;
    param_1 = 0;
  }
  else {
    uVar1 = param_1 + 1;
    if (uVar1 <= param_1) {
      return;
    }
  }
  do {
    if (param_2 < 0x1f) {
      FUN_80402a40(param_1,0x1f,param_2);
    }
    else {
      FUN_80402a40(param_1,0x1f,7);
      FUN_80402a40(param_1,0x1e,param_2);
    }
    if (param_4 != 0) {
      FUN_80402d78(param_1,param_3,local_30);
      local_30[0] = local_30[0] & param_4;
    }
    FUN_80402a40(param_1,param_3,param_5 | local_30[0]);
    FUN_80402a40(param_1,0x1f,0);
    param_1 = param_1 + 1;
  } while (param_1 < uVar1);
  return;
}

