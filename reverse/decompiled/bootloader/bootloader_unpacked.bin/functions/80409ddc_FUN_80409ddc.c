/* FUN_80409ddc @ 80409ddc */

void FUN_80409ddc(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  
  for (puVar1 = (undefined4 *)FUN_80406c50(*param_2,0,0x10); ((uint)puVar1 & 3) != 0;
      puVar1 = (undefined4 *)((int)puVar1 + 1)) {
  }
  uVar3 = 0;
  if (param_1 != 1) {
    do {
      uVar3 = uVar3 + 1;
      uVar2 = FUN_80406c50(param_2[1],0,0x10);
      *puVar1 = uVar2;
      puVar1 = puVar1 + 1;
      param_2 = param_2 + 1;
    } while (uVar3 < param_1 - 1U);
  }
  return;
}

