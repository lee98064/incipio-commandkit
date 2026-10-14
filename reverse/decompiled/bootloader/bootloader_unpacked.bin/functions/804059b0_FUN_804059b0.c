/* FUN_804059b0 @ 804059b0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_804059b0(undefined1 param_1,undefined4 param_2,uint param_3,undefined4 *param_4,
                 uint param_5,undefined1 param_6,undefined1 param_7,undefined1 param_8)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined4 local_28 [2];
  
  FUN_80405554(param_1,param_2,param_5,param_6,param_7,param_8);
  if (DAT_8040e920 != '\0') {
    local_28[0] = FUN_80405704(param_5 >> 0x18,param_6,param_7,param_8);
  }
  uVar3 = param_3 >> 2;
  if (uVar3 != 0) {
    uVar2 = 0;
    puVar1 = param_4;
    do {
      local_28[0] = _DAT_b800120c;
      *puVar1 = _DAT_b800120c;
      uVar2 = uVar2 + 1;
      puVar1 = puVar1 + 1;
    } while (uVar2 < uVar3);
    param_4 = param_4 + uVar3;
  }
  if ((param_3 & 3) != 0) {
    local_28[0] = _DAT_b800120c;
    FUN_80406a54(param_4,local_28);
  }
  FUN_80405050(param_1,0,0);
  return param_3;
}

