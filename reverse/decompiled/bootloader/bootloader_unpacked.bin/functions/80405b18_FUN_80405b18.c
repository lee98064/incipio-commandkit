/* FUN_80405b18 @ 80405b18 */

undefined4 FUN_80405b18(uint param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  
  param_1 = param_1 & 0xff;
  FUN_804077a4(s_EB_<Address>_<Value1>_<Value2>___8040e324 + 0x20);
  (**(code **)(&DAT_80410e98 + param_1 * 0x48))(param_1,param_2);
  uVar2 = 0;
  if (*(int *)(&DAT_80410e88 + param_1 * 0x48) != 0) {
    iVar1 = param_1 * 0x48;
    do {
      (**(code **)(&DAT_80410ea8 + iVar1))
                (param_1,param_2,*(undefined4 *)(&DAT_80410e84 + iVar1),param_3);
      param_2 = param_2 + *(int *)(&DAT_80410e84 + iVar1);
      param_3 = param_3 + *(int *)(&DAT_80410e84 + iVar1);
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)(&DAT_80410e88 + iVar1));
  }
  return *(undefined4 *)(&DAT_80410e7c + param_1 * 0x48);
}

