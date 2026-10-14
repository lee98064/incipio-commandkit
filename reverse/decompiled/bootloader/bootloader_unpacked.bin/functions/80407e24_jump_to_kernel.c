/* jump_to_kernel @ 80407e24 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void jump_to_kernel(int param_1,int param_2)

{
  int iVar1;
  code *pcVar2;
  
  iVar1 = 0;
  do {
    *(undefined2 *)(param_2 + iVar1) = *(undefined2 *)(&DAT_b8000000 + iVar1 + param_1);
    iVar1 = iVar1 + 2;
  } while (iVar1 != 0x10);
  iVar1 = FUN_80407de0(0);
  if (iVar1 == 0) {
    _DAT_b8003528 = _DAT_b8003528 | 0x1000000;
    _DAT_b8003000 = iVar1;
    FUN_804079cc(s_Jump_to_image_start_0x_x____8040dbd0,*(undefined4 *)(param_2 + 4));
    publish_boot_bank();
    pcVar2 = *(code **)(param_2 + 4);
    setCopReg(0,Status,(Status | 1) ^ 1);
    FUN_80406454();
    (*pcVar2)();
  }
  return;
}

