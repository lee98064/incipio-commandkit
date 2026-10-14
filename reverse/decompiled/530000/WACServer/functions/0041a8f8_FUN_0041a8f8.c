/* FUN_0041a8f8 @ 0041a8f8 */

undefined4 FUN_0041a8f8(int param_1,int param_2,uint param_3,int param_4)

{
  uint *puVar1;
  uint *puVar2;
  byte bVar3;
  byte *pbVar4;
  uint *puVar5;
  int iVar6;
  uint *puVar7;
  uint *puVar8;
  char cVar9;
  byte *pbVar10;
  byte *pbVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint *puVar15;
  int iVar16;
  int iVar17;
  
  if (param_3 != 0) {
    uVar13 = *(uint *)(param_4 + 0x114c) & 0xf;
    puVar15 = (uint *)(param_4 + 0x1010);
    pbVar4 = (byte *)((int)puVar15 + uVar13);
    uVar12 = 0;
    if ((param_2 - (int)pbVar4 & 7U) == 0) {
      uVar14 = uVar13;
      if (uVar13 != 0) {
        while( true ) {
          pbVar11 = (byte *)(param_2 + uVar12);
          pbVar10 = (byte *)(param_1 + uVar12);
          if ((param_3 <= uVar12) || ((uVar14 & 7) == 0)) break;
          bVar3 = *pbVar4;
          uVar12 = uVar12 + 1;
          pbVar4 = pbVar4 + 1;
          *pbVar10 = bVar3 ^ *pbVar11;
          uVar14 = uVar12 + uVar13;
        }
        puVar8 = (uint *)(param_4 + 0x1010 + uVar14);
        puVar5 = (uint *)(param_1 + uVar12);
        puVar7 = (uint *)(param_2 + uVar12);
        while( true ) {
          if ((param_3 < uVar12 + 8) || (8 < uVar14)) break;
          uVar14 = uVar14 + 8;
          *puVar5 = *puVar8 ^ *puVar7;
          puVar1 = puVar8 + 1;
          puVar2 = puVar7 + 1;
          puVar8 = puVar8 + 2;
          puVar7 = puVar7 + 2;
          puVar5[1] = *puVar1 ^ *puVar2;
          puVar5 = puVar5 + 2;
          uVar12 = uVar12 + 8;
        }
      }
      puVar7 = (uint *)(param_2 + uVar12);
      puVar5 = (uint *)(param_1 + uVar12);
      while (iVar16 = param_4 + 0x1000, uVar13 = uVar14, uVar12 + 0x10 <= param_3) {
        do {
          if (iVar16 == param_4 + 0xffc) break;
          cVar9 = *(char *)(iVar16 + 0xf) + '\x01';
          *(char *)(iVar16 + 0xf) = cVar9;
          iVar16 = iVar16 + -1;
        } while (cVar9 == '\0');
        (*(code *)PTR_aes_encrypt_00433084)(param_4 + 0x1000,puVar15,param_4 + 0x1050);
        *puVar5 = *puVar15 ^ *puVar7;
        puVar5[1] = *(uint *)(param_4 + 0x1014) ^ puVar7[1];
        puVar5[2] = *(uint *)(param_4 + 0x1018) ^ puVar7[2];
        puVar8 = puVar7 + 3;
        puVar7 = puVar7 + 4;
        puVar5[3] = *(uint *)(param_4 + 0x101c) ^ *puVar8;
        puVar5 = puVar5 + 4;
        uVar12 = uVar12 + 0x10;
      }
    }
    else {
      if (uVar13 != 0) {
        while( true ) {
          pbVar11 = (byte *)(param_2 + uVar12);
          pbVar10 = (byte *)(param_1 + uVar12);
          if ((param_3 <= uVar12) || (uVar13 == 0x10)) break;
          uVar13 = uVar13 + 1;
          uVar12 = uVar12 + 1;
          *pbVar10 = *pbVar4 ^ *pbVar11;
          pbVar4 = pbVar4 + 1;
        }
      }
      iVar17 = param_1 + uVar12;
      iVar16 = param_2 + uVar12;
      while (iVar6 = param_4 + 0x1000, uVar12 + 0x10 <= param_3) {
        do {
          if (iVar6 == param_4 + 0xffc) break;
          cVar9 = *(char *)(iVar6 + 0xf) + '\x01';
          *(char *)(iVar6 + 0xf) = cVar9;
          iVar6 = iVar6 + -1;
        } while (cVar9 == '\0');
        (*(code *)PTR_aes_encrypt_00433084)(param_4 + 0x1000,puVar15,param_4 + 0x1050);
        FUN_0041a780(iVar17,iVar16,puVar15);
        iVar17 = iVar17 + 0x10;
        iVar16 = iVar16 + 0x10;
        uVar12 = uVar12 + 0x10;
      }
    }
    pbVar4 = (byte *)(param_2 + uVar12);
    pbVar10 = (byte *)(param_1 + uVar12);
    iVar16 = param_4 + 0x1000;
    for (; uVar12 < param_3; uVar12 = uVar12 + 1) {
      iVar17 = iVar16;
      if ((uVar13 == 0x10) || (uVar13 == 0)) {
        do {
          if (iVar17 == param_4 + 0xffc) break;
          cVar9 = *(char *)(iVar17 + 0xf) + '\x01';
          *(char *)(iVar17 + 0xf) = cVar9;
          iVar17 = iVar17 + -1;
        } while (cVar9 == '\0');
        (*(code *)PTR_aes_encrypt_00433084)(iVar16,puVar15,param_4 + 0x1050);
        uVar13 = 0;
        puVar5 = puVar15;
      }
      else {
        puVar5 = (uint *)((int)puVar15 + uVar13);
      }
      uVar13 = uVar13 + 1;
      *pbVar10 = *(byte *)puVar5 ^ *pbVar4;
      pbVar4 = pbVar4 + 1;
      pbVar10 = pbVar10 + 1;
    }
    *(uint *)(param_4 + 0x114c) = *(int *)(param_4 + 0x114c) + uVar12;
  }
  return 0;
}

