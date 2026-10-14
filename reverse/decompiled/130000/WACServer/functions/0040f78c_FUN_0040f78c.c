/* FUN_0040f78c @ 0040f78c */

void FUN_0040f78c(int *param_1)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  iVar4 = 0;
  piVar1 = param_1;
  do {
    iVar9 = *piVar1;
    uVar5 = piVar1[1];
    uVar7 = (uint)(iVar9 >> 0x1f) >> 6;
    uVar2 = uVar7 + uVar5;
    uVar8 = (uint)(uVar2 < uVar7) + iVar9;
    uVar2 = uVar2 >> 0x1a;
    uVar7 = uVar8 * 0x40 | uVar2;
    uVar3 = uVar7 + piVar1[3];
    iVar6 = (uint)(uVar3 < uVar7) + ((int)uVar8 >> 0x1a) + piVar1[2];
    uVar10 = (uint)(iVar6 >> 0x1f) >> 7;
    uVar7 = uVar10 + uVar3;
    uVar11 = (uint)(uVar7 < uVar10) + iVar6;
    uVar7 = uVar7 >> 0x19;
    uVar2 = uVar5 + uVar2 * -0x4000000;
    uVar10 = uVar3 + uVar7 * -0x2000000;
    uVar7 = piVar1[5] + (uVar11 * 0x80 | uVar7);
    iVar4 = iVar4 + 2;
    *piVar1 = (iVar9 - (uVar8 & 0x3ffffff | ((int)uVar8 >> 0x1a) << 0x1a)) - (uint)(uVar5 < uVar2);
    piVar1[1] = uVar2;
    piVar1[2] = (iVar6 - (uVar11 & 0x1ffffff | ((int)uVar11 >> 0x19) << 0x19)) -
                (uint)(uVar3 < uVar10);
    piVar1[3] = uVar10;
    piVar1[4] = (uint)(uVar7 < (uint)piVar1[5]) + piVar1[4] + ((int)uVar11 >> 0x19);
    piVar1[5] = uVar7;
    piVar1 = piVar1 + 4;
  } while (iVar4 != 10);
  iVar6 = param_1[0x14];
  uVar2 = param_1[0x15] * 0x10;
  uVar7 = uVar2 + param_1[1];
  iVar4 = (uint)(uVar7 < uVar2) + ((uint)param_1[0x15] >> 0x1c | iVar6 << 4) + *param_1;
  *param_1 = iVar4;
  param_1[1] = uVar7;
  uVar2 = uVar7 + param_1[0x15] * 2;
  iVar4 = (uint)(uVar2 < uVar7) + iVar4 + ((uint)param_1[0x15] >> 0x1f | iVar6 << 1);
  *param_1 = iVar4;
  param_1[1] = uVar2;
  uVar3 = uVar2 + param_1[0x15];
  param_1[0x14] = 0;
  iVar4 = (uint)(uVar3 < uVar2) + iVar4 + iVar6;
  uVar7 = (uint)(iVar4 >> 0x1f) >> 6;
  uVar2 = uVar7 + uVar3;
  uVar5 = (uint)(uVar2 < uVar7) + iVar4;
  uVar2 = uVar2 >> 0x1a;
  uVar7 = uVar5 * 0x40 | uVar2;
  param_1[0x15] = 0;
  uVar2 = uVar3 + uVar2 * -0x4000000;
  *param_1 = (iVar4 - (uVar5 & 0x3ffffff | ((int)uVar5 >> 0x1a) << 0x1a)) - (uint)(uVar3 < uVar2);
  param_1[1] = uVar2;
  uVar2 = uVar7 + param_1[3];
  iVar6 = ((uint)((int)uVar2 >> 0x1f) >> 7) + uVar2;
  iVar4 = iVar6 >> 0x19;
  uVar3 = uVar2 + iVar4 * -0x2000000;
  param_1[2] = (((uint)(uVar2 < uVar7) + ((int)uVar5 >> 0x1a) + param_1[2]) -
               (iVar4 * 0x2000000 >> 0x1f)) - (uint)(uVar2 < uVar3);
  param_1[3] = uVar3;
  uVar2 = param_1[5] + iVar4;
  param_1[4] = (uint)(uVar2 < (uint)param_1[5]) + param_1[4] + (iVar6 >> 0x1f);
  param_1[5] = uVar2;
  return;
}

