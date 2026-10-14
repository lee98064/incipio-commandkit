/* FUN_80409e80 @ 80409e80 */

void FUN_80409e80(int param_1,int *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_1 < 1) {
    FUN_804077a4(s_Wrong_argument_number__8040e0f0);
  }
  else if (*param_2 == 0) {
    FUN_804077a4(s_Wrong_argument_number__8040e0f0);
  }
  else {
    puVar1 = (undefined4 *)FUN_80406c50(*param_2,0,0x10);
    if (-1 < (int)puVar1) {
      puVar1 = (undefined4 *)((uint)puVar1 | 0x80000000);
    }
    if (param_2[1] == 0) {
      uVar3 = 1;
    }
    else {
      uVar3 = FUN_80406c50(param_2[1],0,10);
    }
    for (; ((uint)puVar1 & 3) != 0; puVar1 = (undefined4 *)((int)puVar1 + 1)) {
    }
    uVar2 = 0;
    if (uVar3 != 0) {
      do {
        FUN_804077a4(s__08X___08X__08X__08X__08X_8040e10c,puVar1,*puVar1,puVar1[1],puVar1[2],
                     puVar1[3]);
        uVar2 = uVar2 + 4;
        puVar1 = puVar1 + 4;
      } while (uVar2 < uVar3);
    }
  }
  return;
}

