/* FUN_80409d48 @ 80409d48 */

void FUN_80409d48(int param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined2 uVar2;
  undefined2 *puVar3;
  
  uVar1 = FUN_80406c50(*param_2,0,0x10);
  if (0 < param_1 + -1) {
    puVar3 = (undefined2 *)(uVar1 & 0xfffffffe);
    uVar1 = 0;
    do {
      uVar2 = FUN_80406c50(param_2[uVar1 + 1],0,0x10);
      *puVar3 = uVar2;
      uVar1 = uVar1 + 1 & 0xffff;
      puVar3 = puVar3 + 1;
    } while ((int)uVar1 < param_1 + -1);
  }
  return;
}

