/* FUN_8040604c @ 8040604c */

void FUN_8040604c(uint param_1)

{
  char **ppcVar1;
  uint uVar2;
  uint *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  char **ppcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  int iVar10;
  char *local_58 [3];
  code *local_4c [2];
  char *local_44;
  code *local_40 [10];
  undefined1 auStack_18 [8];
  
  param_1 = param_1 & 0xff;
  FUN_80405104(param_1,4);
  uVar2 = FUN_80405104(param_1,4);
  uVar2 = uVar2 >> 8;
  puVar3 = &DAT_8040e924;
  iVar10 = 0;
  while ((*puVar3 != uVar2 || (puVar3[1] != 0))) {
    iVar10 = iVar10 + 1;
    puVar3 = puVar3 + 8;
    if (iVar10 == 0x1b) {
LAB_804060d4:
      local_58[0] = (char *)0x1f;
      FUN_80404c88(param_1,0x28,1,1);
      local_58[0] = (char *)0x1000;
      local_58[1] = (char *)0x100;
      local_58[2] = s_UNKNOWN_8040d978;
      local_4c[0] = FUN_80405444;
      local_4c[1] = FUN_80405ae0;
      local_44 = &LAB_8040554c;
      local_40[0] = FUN_8040597c;
      FUN_80404e88(param_1,uVar2,0x16,0x10000);
LAB_804062bc:
      iVar10 = param_1 * 0x48;
      (**(code **)(&DAT_80410ea4 + iVar10))(param_1);
      puVar5 = &DAT_80410e70 + param_1 * 0x12;
      ppcVar1 = local_58;
      do {
        ppcVar6 = ppcVar1;
        puVar4 = puVar5;
        pcVar9 = (char *)puVar4[1];
        pcVar8 = (char *)puVar4[2];
        pcVar7 = (char *)puVar4[3];
        *ppcVar6 = (char *)*puVar4;
        ppcVar6[1] = pcVar9;
        ppcVar6[2] = pcVar8;
        ppcVar6[3] = pcVar7;
        puVar5 = puVar4 + 4;
        ppcVar1 = ppcVar6 + 4;
      } while (puVar5 != &DAT_80410ea0 + param_1 * 0x12);
      pcVar8 = (char *)puVar4[5];
      pcVar7 = (char *)puVar4[6];
      ppcVar6[4] = (char *)*puVar5;
      ppcVar6[5] = pcVar8;
      ppcVar6[6] = pcVar7;
      FUN_80405e90(param_1,*(undefined4 *)(&DAT_80410e64 + iVar10),
                   *(undefined4 *)(&DAT_80410e68 + iVar10),*(undefined4 *)(&DAT_80410e6c + iVar10));
      (*(code *)(&DAT_80410ea0)[param_1 * 0x12])(param_1,0,4,auStack_18);
      return;
    }
  }
  if (iVar10 != 0x1b) {
    local_58[0] = (char *)0x1f;
    FUN_80404c88(param_1,*(undefined4 *)(iVar10 * 0x20 + -0x7fbf16c0),1,1);
    if ((uVar2 & 0xffff00) == 0x10200) {
      local_58[0] = *(char **)(iVar10 * 0x20 + -0x7fbf16cc);
      local_58[1] = *(char **)(iVar10 * 0x20 + -0x7fbf16c8);
      local_58[2] = *(char **)(iVar10 * 0x20 + -0x7fbf16c4);
      local_4c[0] = FUN_804054a4;
      local_4c[1] = FUN_80405ae0;
      local_44 = &LAB_8040554c;
      local_40[0] = FUN_8040597c;
      FUN_80404e88(param_1,uVar2,*(undefined4 *)(iVar10 * 0x20 + -0x7fbf16d4),
                   *(undefined4 *)(iVar10 * 0x20 + -0x7fbf16d0));
    }
    else {
      local_58[0] = *(char **)(iVar10 * 0x20 + -0x7fbf16cc);
      local_58[1] = *(char **)(iVar10 * 0x20 + -0x7fbf16c8);
      local_58[2] = *(char **)(iVar10 * 0x20 + -0x7fbf16c4);
      local_4c[0] = FUN_80405444;
      local_4c[1] = FUN_80405ae0;
      local_44 = &LAB_8040554c;
      local_40[0] = FUN_8040597c;
      FUN_80404e88(param_1,uVar2,*(undefined4 *)(iVar10 * 0x20 + -0x7fbf16d4),
                   *(undefined4 *)(iVar10 * 0x20 + -0x7fbf16d0));
    }
    goto LAB_804062bc;
  }
  goto LAB_804060d4;
}

