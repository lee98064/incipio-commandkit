/* FUN_80409cb8 @ 80409cb8 */

void FUN_80409cb8(int param_1,undefined4 *param_2)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  uint uVar3;
  
  puVar1 = (undefined1 *)FUN_80406c50(*param_2,0,0x10);
  if (0 < param_1 + -1) {
    uVar3 = 0;
    do {
      uVar2 = FUN_80406c50(param_2[uVar3 + 1],0,0x10);
      *puVar1 = uVar2;
      uVar3 = uVar3 + 1 & 0xff;
      puVar1 = puVar1 + 1;
    } while ((int)uVar3 < param_1 + -1);
  }
  return;
}

