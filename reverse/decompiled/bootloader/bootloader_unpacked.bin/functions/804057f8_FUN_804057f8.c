/* FUN_804057f8 @ 804057f8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_804057f8(undefined1 param_1,undefined4 param_2,uint param_3,undefined4 *param_4,
                 undefined4 param_5,undefined1 param_6,undefined1 param_7,undefined1 param_8)

{
  uint uVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 local_28 [2];
  
  FUN_804051d4(param_1,0,0x6000000);
  FUN_80405554(param_1,param_2,param_5,param_6,param_7,param_8);
  uVar1 = param_3 >> 2;
  if (uVar1 != 0) {
    uVar3 = 0;
    puVar2 = param_4;
    do {
      _DAT_b800120c = *puVar2;
      puVar2 = puVar2 + 1;
      do {
      } while ((_DAT_b8001208 & 0x8000000) == 0);
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar1);
    param_4 = param_4 + uVar1;
    local_28[0] = _DAT_b800120c;
  }
  uVar1 = param_3 & 3;
  if (uVar1 != 0) {
    FUN_80406a54(local_28,param_4,uVar1);
    FUN_80404ff4(param_1,uVar1 - 1 & 0xff,param_7);
    do {
    } while ((_DAT_b8001208 & 0x8000000) == 0);
    _DAT_b800120c = local_28[0];
  }
  FUN_80405050(param_1,0,0);
  FUN_804053f4(param_1);
  return param_3;
}

