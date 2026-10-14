/* FUN_00408094 @ 00408094 */

void FUN_00408094(int param_1,byte *param_2)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint local_150 [80];
  
  puVar1 = local_150;
  puVar2 = puVar1;
  do {
    *puVar2 = (uint)*param_2 << 0x18 | (uint)param_2[1] << 0x10 | (uint)param_2[3] |
              (uint)param_2[2] << 8;
    puVar2 = puVar2 + 1;
    param_2 = param_2 + 4;
  } while (puVar2 != local_150 + 0x10);
  uVar11 = *(uint *)(param_1 + 8);
  uVar6 = *(uint *)(param_1 + 0xc);
  uVar5 = *(uint *)(param_1 + 0x10);
  uVar4 = *(uint *)(param_1 + 0x14);
  uVar3 = *(uint *)(param_1 + 0x18);
  puVar2 = local_150 + 0xd;
  do {
    uVar7 = puVar2[-5] ^ *puVar2 ^ puVar2[-0xb] ^ puVar2[-0xd];
    puVar2[3] = uVar7 >> 0x1f | uVar7 << 1;
    puVar2 = puVar2 + 1;
  } while (puVar2 != local_150 + 0x4d);
  uVar7 = uVar11;
  do {
    uVar9 = uVar6 << 0x1e | uVar6 >> 2;
    uVar6 = *puVar1 + 0x5a827999 + uVar3 + (uVar7 >> 0x1b | uVar7 << 5) +
            ((uVar4 ^ uVar5) & uVar6 ^ uVar4);
    uVar8 = uVar7 << 0x1e | uVar7 >> 2;
    uVar7 = puVar1[1] + 0x5a827999 + uVar4 + ((uVar9 ^ uVar5) & uVar7 ^ uVar5) +
            (uVar6 >> 0x1b | uVar6 * 0x20);
    uVar3 = uVar6 * 0x40000000 | uVar6 >> 2;
    uVar5 = puVar1[2] + 0x5a827999 + uVar5 + (uVar6 & (uVar8 ^ uVar9) ^ uVar9) +
            (uVar7 >> 0x1b | uVar7 * 0x20);
    puVar2 = puVar1 + 4;
    uVar4 = uVar7 * 0x40000000 | uVar7 >> 2;
    uVar6 = puVar1[3] + 0x5a827999 + uVar9 + ((uVar3 ^ uVar8) & uVar7 ^ uVar8) +
            (uVar5 >> 0x1b | uVar5 * 0x20);
    puVar1 = puVar1 + 5;
    uVar7 = *puVar2 + 0x5a827999 + uVar8 + ((uVar4 ^ uVar3) & uVar5 ^ uVar3) +
            (uVar6 >> 0x1b | uVar6 * 0x20);
    uVar5 = uVar5 * 0x40000000 | uVar5 >> 2;
  } while (puVar1 != local_150 + 0x14);
  puVar2 = local_150 + 0x14;
  do {
    uVar10 = *puVar2 + 0x6ed9eba1 + uVar3 + (uVar7 >> 0x1b | uVar7 << 5) + (uVar5 ^ uVar6 ^ uVar4);
    uVar9 = uVar6 << 0x1e | uVar6 >> 2;
    uVar8 = uVar7 << 0x1e | uVar7 >> 2;
    uVar6 = puVar2[1] + 0x6ed9eba1 + uVar4 + (uVar5 ^ uVar7 ^ uVar9) +
            (uVar10 >> 0x1b | uVar10 * 0x20);
    uVar3 = uVar10 * 0x40000000 | uVar10 >> 2;
    uVar5 = puVar2[2] + 0x6ed9eba1 + uVar5 + (uVar8 ^ uVar9 ^ uVar10) +
            (uVar6 >> 0x1b | uVar6 * 0x20);
    puVar1 = puVar2 + 4;
    uVar4 = uVar6 * 0x40000000 | uVar6 >> 2;
    uVar6 = puVar2[3] + 0x6ed9eba1 + uVar9 + (uVar3 ^ uVar8 ^ uVar6) +
            (uVar5 >> 0x1b | uVar5 * 0x20);
    puVar2 = puVar2 + 5;
    uVar7 = *puVar1 + 0x6ed9eba1 + uVar8 + (uVar4 ^ uVar3 ^ uVar5) + (uVar6 >> 0x1b | uVar6 * 0x20);
    uVar5 = uVar5 * 0x40000000 | uVar5 >> 2;
  } while (puVar2 != local_150 + 0x28);
  puVar2 = local_150 + 0x28;
  while( true ) {
    uVar9 = uVar6 << 0x1e | uVar6 >> 2;
    uVar8 = uVar7 << 0x1e | uVar7 >> 2;
    if (puVar2 == local_150 + 0x3c) break;
    uVar10 = *puVar2 + 0x8f1bbcdc + uVar3 + (uVar7 >> 0x1b | uVar7 << 5) +
             ((uVar5 | uVar6) & uVar4 | uVar5 & uVar6);
    uVar6 = puVar2[1] + 0x8f1bbcdc + uVar4 + ((uVar9 | uVar7) & uVar5 | uVar9 & uVar7) +
            (uVar10 >> 0x1b | uVar10 * 0x20);
    uVar3 = uVar10 * 0x40000000 | uVar10 >> 2;
    uVar5 = puVar2[2] + 0x8f1bbcdc + uVar5 + (uVar6 >> 0x1b | uVar6 * 0x20) +
            ((uVar10 | uVar8) & uVar9 | uVar10 & uVar8);
    uVar4 = uVar6 * 0x40000000 | uVar6 >> 2;
    uVar6 = puVar2[3] + 0x8f1bbcdc + uVar9 + ((uVar6 | uVar3) & uVar8 | uVar6 & uVar3) +
            (uVar5 >> 0x1b | uVar5 * 0x20);
    uVar7 = puVar2[4] + 0x8f1bbcdc + uVar8 + (uVar6 >> 0x1b | uVar6 * 0x20) +
            ((uVar5 | uVar4) & uVar3 | uVar5 & uVar4);
    uVar5 = uVar5 * 0x40000000 | uVar5 >> 2;
    puVar2 = puVar2 + 5;
  }
  puVar2 = local_150 + 0x3c;
  while( true ) {
    uVar8 = uVar6 << 0x1e | uVar6 >> 2;
    uVar9 = uVar7 << 0x1e | uVar7 >> 2;
    if (puVar2 == (uint *)&stack0xfffffff0) break;
    uVar6 = *puVar2 + 0xca62c1d6 + uVar3 + (uVar7 >> 0x1b | uVar7 << 5) + (uVar5 ^ uVar6 ^ uVar4);
    uVar7 = puVar2[1] + 0xca62c1d6 + uVar4 + (uVar5 ^ uVar7 ^ uVar8) +
            (uVar6 >> 0x1b | uVar6 * 0x20);
    uVar3 = uVar6 * 0x40000000 | uVar6 >> 2;
    uVar5 = puVar2[2] + 0xca62c1d6 + uVar5 + (uVar9 ^ uVar8 ^ uVar6) +
            (uVar7 >> 0x1b | uVar7 * 0x20);
    uVar4 = uVar7 * 0x40000000 | uVar7 >> 2;
    uVar6 = puVar2[3] + 0xca62c1d6 + uVar8 + (uVar3 ^ uVar9 ^ uVar7) +
            (uVar5 >> 0x1b | uVar5 * 0x20);
    uVar7 = puVar2[4] + 0xca62c1d6 + uVar9 + (uVar4 ^ uVar3 ^ uVar5) +
            (uVar6 >> 0x1b | uVar6 * 0x20);
    uVar5 = uVar5 * 0x40000000 | uVar5 >> 2;
    puVar2 = puVar2 + 5;
  }
  *(uint *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + uVar3;
  *(uint *)(param_1 + 8) = uVar7 + uVar11;
  *(uint *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + uVar6;
  *(uint *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + uVar5;
  *(uint *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + uVar4;
  return;
}

