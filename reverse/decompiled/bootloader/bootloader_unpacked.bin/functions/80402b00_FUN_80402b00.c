/* FUN_80402b00 @ 80402b00 */

void FUN_80402b00(undefined4 param_1,uint param_2)

{
  uint uVar1;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  if (param_2 != 0) {
    uVar1 = 0;
    do {
      FUN_804044a8(param_1,uVar1,&local_38);
      uVar1 = uVar1 + 1;
    } while (uVar1 < param_2);
  }
  return;
}

