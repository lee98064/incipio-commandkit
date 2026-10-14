/* gcm_auth_header @ 0041b138 */

undefined4 gcm_auth_header(int param_1,uint param_2,int param_3)

{
  uint *puVar1;
  byte *pbVar2;
  uint *puVar3;
  uint uVar4;
  uint *puVar5;
  byte *pbVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  int iVar10;
  undefined1 auStack_40 [16];
  undefined1 *local_30;
  uint local_2c;
  
  if (param_2 != 0) {
    uVar8 = *(uint *)(param_3 + 0x1148) & 0xf;
    if ((*(uint *)(param_3 + 0x1148) != 0) && (uVar8 == 0)) {
      (*(code *)PTR_gf_mul_4k_0043321c)(param_3 + 0x1020,param_3,auStack_40);
    }
    puVar9 = (uint *)(param_3 + 0x1020);
    pbVar2 = (byte *)((int)puVar9 + uVar8);
    uVar7 = 0;
    if ((param_1 - (int)pbVar2 & 7U) == 0) {
      while( true ) {
        uVar4 = uVar7 + uVar8;
        pbVar6 = (byte *)(param_1 + uVar7);
        if ((param_2 <= uVar7) || ((uVar4 & 7) == 0)) break;
        uVar7 = uVar7 + 1;
        *pbVar2 = *pbVar6 ^ *pbVar2;
        pbVar2 = pbVar2 + 1;
      }
      puVar3 = (uint *)(param_3 + 0x1020 + uVar4);
      puVar5 = (uint *)(param_1 + uVar7);
      while( true ) {
        if ((param_2 < uVar7 + 8) || (8 < uVar4)) break;
        *puVar3 = *puVar3 ^ *puVar5;
        puVar1 = puVar5 + 1;
        uVar4 = uVar4 + 8;
        puVar5 = puVar5 + 2;
        puVar3[1] = puVar3[1] ^ *puVar1;
        puVar3 = puVar3 + 2;
        uVar7 = uVar7 + 8;
      }
      local_30 = auStack_40;
      puVar3 = (uint *)(param_1 + uVar7);
      while (uVar8 = uVar4, uVar7 + 0x10 <= param_2) {
        local_2c = uVar7 + 0x10;
        (*(code *)PTR_gf_mul_4k_0043321c)(param_3 + 0x1020,param_3,local_30);
        *puVar9 = *puVar9 ^ *puVar3;
        *(uint *)(param_3 + 0x1024) = *(uint *)(param_3 + 0x1024) ^ puVar3[1];
        *(uint *)(param_3 + 0x1028) = *(uint *)(param_3 + 0x1028) ^ puVar3[2];
        puVar5 = puVar3 + 3;
        puVar3 = puVar3 + 4;
        *(uint *)(param_3 + 0x102c) = *(uint *)(param_3 + 0x102c) ^ *puVar5;
        uVar7 = local_2c;
      }
    }
    else {
      uVar7 = 0;
      for (; (pbVar6 = (byte *)(param_1 + uVar7), uVar7 < param_2 && (uVar8 != 0x10));
          uVar8 = uVar8 + 1) {
        uVar7 = uVar7 + 1;
        *pbVar2 = *pbVar6 ^ *pbVar2;
        pbVar2 = pbVar2 + 1;
      }
      iVar10 = param_1 + uVar7;
      uVar4 = param_3 + 0x1020;
      while (uVar7 + 0x10 <= param_2) {
        local_2c = uVar4;
        (*(code *)PTR_gf_mul_4k_0043321c)(uVar4,param_3,auStack_40);
        FUN_0041a5f0(puVar9,puVar9,iVar10);
        iVar10 = iVar10 + 0x10;
        uVar4 = local_2c;
        uVar7 = uVar7 + 0x10;
      }
    }
    pbVar2 = (byte *)(param_1 + uVar7);
    for (; uVar7 < param_2; uVar7 = uVar7 + 1) {
      puVar3 = (uint *)((int)puVar9 + uVar8);
      if (uVar8 == 0x10) {
        (*(code *)PTR_gf_mul_4k_0043321c)(param_3 + 0x1020,param_3,auStack_40);
        uVar8 = 0;
        puVar3 = puVar9;
      }
      uVar8 = uVar8 + 1;
      *(byte *)puVar3 = *(byte *)puVar3 ^ *pbVar2;
      pbVar2 = pbVar2 + 1;
    }
    *(uint *)(param_3 + 0x1148) = *(int *)(param_3 + 0x1148) + uVar7;
  }
  return 0;
}

