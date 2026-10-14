/* FUN_80405cf8 @ 80405cf8 */

undefined4 FUN_80405cf8(uint param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  uint uVar1;
  undefined4 local_30;
  int local_2c;
  int local_28;
  uint local_24;
  undefined4 local_20;
  int local_1c;
  
  param_1 = param_1 & 0xff;
  FUN_80404d84(param_2,param_3,*(undefined4 *)(&DAT_80410e7c + param_1 * 0x48),&local_30,&local_2c,
               &local_28,&local_24,&local_20,&local_1c);
  if ((local_24 == 0) && (local_1c == 0)) {
    FUN_80405c18(param_1,local_30,local_2c,param_4);
  }
  else {
    if (local_2c != 0) {
      FUN_80405c18(param_1,local_30,local_2c,param_4);
      param_4 = param_4 + local_2c;
    }
    uVar1 = 0;
    if (local_24 != 0) {
      do {
        FUN_80405b18(param_1,local_28,param_4);
        param_4 = param_4 + *(int *)(&DAT_80410e7c + param_1 * 0x48);
        local_28 = local_28 + *(int *)(&DAT_80410e7c + param_1 * 0x48);
        uVar1 = uVar1 + 1;
      } while (uVar1 < local_24);
    }
    if (local_1c != 0) {
      FUN_80405c18(param_1,local_20,local_1c,param_4);
    }
  }
  FUN_804051d4(param_1,0,0x4000000);
  return param_3;
}

