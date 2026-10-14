/* init_4k_table @ 0041c2c8 */

void init_4k_table(undefined4 param_1,uint *param_2)

{
  ushort uVar1;
  undefined *puVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  int iVar6;
  uint *puVar7;
  uint uVar8;
  uint *puVar9;
  uint uVar10;
  
  puVar2 = PTR_memcpy_004332a8;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  (*(code *)puVar2)(param_2 + 0x200,param_1,0x10);
  iVar6 = 0;
  iVar3 = 0x40;
  do {
    puVar4 = param_2 + iVar3 * 8;
    uVar8 = puVar4[2];
    uVar10 = puVar4[3];
    puVar5 = param_2 + iVar3 * 4;
    puVar5[2] = uVar8 >> 1 | puVar4[1] << 0x1f;
    puVar5[3] = uVar8 << 0x1f | uVar10 >> 1;
    uVar8 = *puVar4;
    uVar1 = *(ushort *)(&DAT_00422900 + (uVar10 & 1) * 0x100);
    iVar6 = iVar6 + 1;
    puVar5[1] = uVar8 << 0x1f | puVar4[1] >> 1;
    *puVar5 = (uint)uVar1 << 0x10 ^ uVar8 >> 1;
    iVar3 = iVar3 >> 1;
  } while (iVar6 != 7);
  iVar3 = 2;
  do {
    puVar9 = param_2 + iVar3 * 4;
    puVar7 = param_2 + (iVar3 + 1) * 4;
    puVar5 = param_2 + (iVar3 + 1) * 4 + 2;
    puVar4 = param_2;
    for (iVar6 = 1; iVar6 < iVar3; iVar6 = iVar6 + 1) {
      *puVar7 = *puVar9 ^ puVar4[4];
      puVar7[1] = puVar9[1] ^ puVar4[5];
      puVar7 = puVar7 + 4;
      *puVar5 = puVar9[2] ^ puVar4[6];
      puVar5[1] = puVar9[3] ^ puVar4[7];
      puVar5 = puVar5 + 4;
      puVar4 = puVar4 + 4;
    }
    iVar3 = iVar3 << 1;
  } while (iVar3 < 0x100);
  return;
}

