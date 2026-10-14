/* FUN_004129b8 @ 004129b8 */

undefined4
FUN_004129b8(uint *param_1,uint *param_2,uint param_3,undefined4 param_4,code *param_5,int param_6)

{
  uint *puVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  int iVar9;
  int iVar10;
  uint *puVar11;
  byte *pbVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  int local_38;
  uint *local_34;
  int local_30;
  int local_2c;
  
  uVar17 = (uint)*(byte *)(param_6 + 0xf2);
  uVar16 = uVar17;
  if (uVar17 != 0) {
    (*(code *)PTR_memcpy_004332a8)(&local_b8,param_4,0x10);
    iVar9 = aes_ecb_encrypt(&local_b8,&local_b8,0x10,param_6);
    pbVar12 = (byte *)((int)&local_b8 + uVar17);
    iVar10 = 0;
    if (iVar9 != 0) {
      return 1;
    }
    while (uVar16 = iVar10 + uVar17, (int)uVar16 < 0x10) {
      iVar10 = iVar10 + 1;
      if (param_3 == 0) {
        *(char *)(param_6 + 0xf2) = (char)uVar16;
        return 0;
      }
      bVar2 = *(byte *)param_1;
      param_1 = (uint *)((int)param_1 + 1);
      param_3 = param_3 - 1;
      *(byte *)param_2 = *pbVar12 ^ bVar2;
      pbVar12 = pbVar12 + 1;
      param_2 = (uint *)((int)param_2 + 1);
    }
    if (param_3 != 0) {
      (*param_5)(param_4);
      uVar16 = 0;
    }
  }
  local_38 = 0;
  while( true ) {
    if (param_3 == 0) {
      *(char *)(param_6 + 0xf2) = (char)uVar16;
      return 0;
    }
    uVar17 = 0x80;
    if ((int)param_3 < 0x81) {
      uVar17 = param_3;
    }
    iVar10 = 0;
    puVar11 = &local_b8;
    iVar9 = (int)uVar17 >> 4;
    while (iVar10 < iVar9) {
      local_34 = puVar11;
      local_30 = iVar9;
      local_2c = iVar10;
      (*(code *)PTR_memcpy_004332a8)(puVar11,param_4,0x10);
      local_34 = local_34 + 4;
      local_2c = local_2c + 1;
      (*param_5)(param_4);
      iVar10 = local_2c;
      puVar11 = local_34;
      iVar9 = local_30;
    }
    if ((uVar17 & 0xf) != 0) {
      local_2c = iVar10 + 1;
      (*(code *)PTR_memcpy_004332a8)();
      iVar10 = local_2c;
    }
    iVar10 = aes_ecb_encrypt(&local_b8,&local_b8,iVar10 << 4,param_6);
    if (iVar10 != 0) break;
    iVar10 = 0;
    puVar11 = &local_b8;
    if (((((uint)param_1 & 3) == 0) && (((uint)param_2 & 3) == 0)) && (local_38 == 0)) {
      for (iVar9 = 0x10; iVar9 <= (int)uVar17; iVar9 = iVar9 + 0x10) {
        uVar15 = puVar11[1];
        uVar14 = puVar11[2];
        *param_2 = *puVar11 ^ *param_1;
        uVar13 = puVar11[3];
        param_2[1] = uVar15 ^ param_1[1];
        puVar11 = puVar11 + 4;
        param_2[2] = uVar14 ^ param_1[2];
        puVar1 = param_1 + 3;
        param_1 = param_1 + 4;
        param_2[3] = uVar13 ^ *puVar1;
        param_2 = param_2 + 4;
        iVar10 = iVar9;
      }
      pbVar12 = (byte *)((int)puVar11 + uVar16);
    }
    else {
      while (iVar10 + 0x10 <= (int)uVar17) {
        bVar2 = *(byte *)((int)puVar11 + 1);
        bVar3 = *(byte *)((int)puVar11 + 2);
        *(byte *)param_2 = *(byte *)puVar11 ^ *(byte *)param_1;
        uVar13 = *puVar11;
        bVar4 = *(byte *)(puVar11 + 1);
        *(byte *)((int)param_2 + 1) = bVar2 ^ *(byte *)((int)param_1 + 1);
        bVar2 = *(byte *)((int)puVar11 + 5);
        bVar5 = *(byte *)((int)puVar11 + 6);
        *(byte *)((int)param_2 + 2) = bVar3 ^ *(byte *)((int)param_1 + 2);
        bVar3 = *(byte *)((int)puVar11 + 7);
        bVar6 = *(byte *)(puVar11 + 2);
        *(byte *)((int)param_2 + 3) = (byte)uVar13 ^ (byte)*param_1;
        bVar7 = *(byte *)((int)puVar11 + 9);
        bVar8 = *(byte *)((int)puVar11 + 10);
        *(byte *)(param_2 + 1) = bVar4 ^ *(byte *)(param_1 + 1);
        bVar4 = *(byte *)((int)puVar11 + 0xb);
        *(byte *)((int)param_2 + 5) = bVar2 ^ *(byte *)((int)param_1 + 5);
        *(byte *)((int)param_2 + 6) = bVar5 ^ *(byte *)((int)param_1 + 6);
        *(byte *)((int)param_2 + 7) = bVar3 ^ *(byte *)((int)param_1 + 7);
        *(byte *)(param_2 + 2) = bVar6 ^ *(byte *)(param_1 + 2);
        *(byte *)((int)param_2 + 9) = bVar7 ^ *(byte *)((int)param_1 + 9);
        *(byte *)((int)param_2 + 10) = bVar8 ^ *(byte *)((int)param_1 + 10);
        *(byte *)((int)param_2 + 0xb) = bVar4 ^ *(byte *)((int)param_1 + 0xb);
        bVar2 = *(byte *)((int)puVar11 + 0xd);
        bVar3 = *(byte *)((int)puVar11 + 0xe);
        *(byte *)(param_2 + 3) = *(byte *)(puVar11 + 3) ^ *(byte *)(param_1 + 3);
        bVar4 = *(byte *)((int)puVar11 + 0xf);
        *(byte *)((int)param_2 + 0xd) = bVar2 ^ *(byte *)((int)param_1 + 0xd);
        *(byte *)((int)param_2 + 0xe) = bVar3 ^ *(byte *)((int)param_1 + 0xe);
        pbVar12 = (byte *)((int)param_1 + 0xf);
        param_1 = param_1 + 4;
        *(byte *)((int)param_2 + 0xf) = bVar4 ^ *pbVar12;
        param_2 = param_2 + 4;
        puVar11 = puVar11 + 4;
        iVar10 = iVar10 + 0x10;
      }
      pbVar12 = (byte *)((int)puVar11 + uVar16);
    }
    for (; iVar10 < (int)uVar17; iVar10 = iVar10 + 1) {
      bVar2 = *(byte *)param_1;
      param_1 = (uint *)((int)param_1 + 1);
      uVar16 = uVar16 + 1;
      *(byte *)param_2 = *pbVar12 ^ bVar2;
      param_2 = (uint *)((int)param_2 + 1);
      pbVar12 = pbVar12 + 1;
    }
    param_3 = param_3 - uVar17;
  }
  return 1;
}

