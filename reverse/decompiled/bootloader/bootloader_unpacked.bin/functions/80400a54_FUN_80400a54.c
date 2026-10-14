/* FUN_80400a54 @ 80400a54 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_80400a54(uint param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if (param_1 < 0x40) {
    *(undefined4 *)(param_2 + 0x10) = param_3;
    uVar1 = FUN_804009f8();
    _DAT_b8003000 = _DAT_b8003000 | 1 << (param_1 & 0x1f);
  }
  else {
    uVar1 = 0xffffffea;
  }
  return uVar1;
}

