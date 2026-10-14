/* FUN_80407ee8 @ 80407ee8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80407ee8(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  if (param_1 == 0) {
    _DAT_b8003000 = 0;
    FUN_80407d48();
  }
  else {
    iVar1 = FUN_80407de0(990000000);
    if (iVar1 != 1) {
      jump_to_kernel(param_2,param_3);
    }
    FUN_804077a4(s____Escape_booting_by_user_8040dbf0);
    _DAT_b8003000 = 0;
    FUN_80407d48();
  }
  return;
}

