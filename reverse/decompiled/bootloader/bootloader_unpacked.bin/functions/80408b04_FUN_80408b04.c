/* FUN_80408b04 @ 80408b04 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_80408b04(int param_1)

{
  undefined4 uVar1;
  uint *puVar2;
  undefined4 *unaff_s3;
  int local_20;
  
  if (param_1 == 0) {
    puVar2 = (uint *)&DAT_b8b00728;
  }
  else if (param_1 == 1) {
    puVar2 = (uint *)0xb8b20728;
  }
  else {
    if (param_1 != 2) {
      return 2;
    }
    puVar2 = (uint *)0xb8b40728;
  }
  FUN_80407318(10);
  local_20 = 5;
  do {
    local_20 = local_20 + -1;
    if (local_20 == 0) break;
    FUN_80407318(10);
  } while ((*puVar2 & 0x1f) != 0x11);
  if (local_20 == 0) {
    if (DAT_8040ecd0 == 0) {
      FUN_804077a4(s_PCIE_P_d__>_Cannot_LinkUP_8040dce4,param_1);
      uVar1 = 0;
    }
    else {
      uVar1 = 0;
    }
  }
  else {
    if (param_1 == 0) {
      _DAT_b8b00004 = 0x100007;
      unaff_s3 = (undefined4 *)&DAT_b8b10000;
    }
    else if (param_1 == 1) {
      _DAT_b8b20004 = 0x100007;
      unaff_s3 = (undefined4 *)0xb8b30000;
    }
    if (DAT_8040ecd0 == 0) {
      FUN_804077a4(s_Find_Port__x_Device_Vender_ID__x_8040dd00,param_1,*unaff_s3);
      uVar1 = 1;
    }
    else {
      uVar1 = 1;
    }
  }
  return uVar1;
}

