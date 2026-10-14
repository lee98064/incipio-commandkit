/* aes_encrypt_key128 @ 00416290 */

undefined4 aes_encrypt_key128(byte *param_1,uint *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  
  uVar3 = (uint)param_1[3] | (uint)*param_1 << 0x18 | (uint)param_1[1] << 0x10 |
          (uint)param_1[2] << 8;
  *param_2 = uVar3;
  uVar9 = (uint)param_1[4] << 0x18 | (uint)param_1[5] << 0x10 | (uint)param_1[7] |
          (uint)param_1[6] << 8;
  param_2[1] = uVar9;
  uVar8 = (uint)param_1[8] << 0x18 | (uint)param_1[9] << 0x10 | (uint)param_1[0xb] |
          (uint)param_1[10] << 8;
  param_2[2] = uVar8;
  puVar2 = PTR_t_fl_00433100;
  puVar1 = PTR_t_rc_004330e4;
  uVar5 = (uint)param_1[0xc] << 0x18 | (uint)param_1[0xd] << 0x10 | (uint)param_1[0xf] |
          (uint)param_1[0xe] << 8;
  uVar3 = uVar3 ^ *(uint *)PTR_t_rc_004330e4 ^
          *(uint *)(PTR_t_fl_00433100 + (param_1[0xf] + 0x200) * 4) ^
          *(uint *)(PTR_t_fl_00433100 + (param_1[0xc] + 0x300) * 4) ^
          *(uint *)(PTR_t_fl_00433100 + (uint)param_1[0xd] * 4) ^
          *(uint *)(PTR_t_fl_00433100 + (param_1[0xe] + 0x100) * 4);
  uVar9 = uVar3 ^ uVar9;
  uVar8 = uVar9 ^ uVar8;
  uVar4 = uVar8 ^ uVar5;
  uVar6 = uVar3 ^ *(uint *)(PTR_t_rc_004330e4 + 4) ^
          *(uint *)(PTR_t_fl_00433100 + ((uVar4 & 0xff) + 0x200) * 4) ^
          *(uint *)(PTR_t_fl_00433100 + ((uVar4 >> 0x18) + 0x300) * 4) ^
          *(uint *)(PTR_t_fl_00433100 + (uVar4 >> 0xe & 0x3fc)) ^
          *(uint *)(PTR_t_fl_00433100 + ((uVar4 >> 8 & 0xff) + 0x100) * 4);
  uVar19 = uVar6 ^ uVar9;
  uVar18 = uVar19 ^ uVar8;
  uVar7 = uVar18 ^ uVar4;
  param_2[3] = uVar5;
  param_2[4] = uVar3;
  param_2[5] = uVar9;
  param_2[6] = uVar8;
  param_2[7] = uVar4;
  uVar17 = uVar6 ^ *(uint *)(puVar1 + 8) ^ *(uint *)(puVar2 + ((uVar7 & 0xff) + 0x200) * 4) ^
           *(uint *)(puVar2 + ((uVar7 >> 0x18) + 0x300) * 4) ^
           *(uint *)(puVar2 + (uVar7 >> 0xe & 0x3fc)) ^
           *(uint *)(puVar2 + ((uVar7 >> 8 & 0xff) + 0x100) * 4);
  uVar16 = uVar17 ^ uVar19;
  uVar21 = uVar16 ^ uVar18;
  uVar5 = uVar21 ^ uVar7;
  param_2[8] = uVar6;
  uVar20 = uVar17 ^ *(uint *)(puVar1 + 0xc) ^ *(uint *)(puVar2 + ((uVar5 & 0xff) + 0x200) * 4) ^
           *(uint *)(puVar2 + ((uVar5 >> 0x18) + 0x300) * 4) ^
           *(uint *)(puVar2 + (uVar5 >> 0xe & 0x3fc)) ^
           *(uint *)(puVar2 + ((uVar5 >> 8 & 0xff) + 0x100) * 4);
  uVar13 = uVar20 ^ uVar16;
  uVar12 = uVar13 ^ uVar21;
  uVar4 = uVar12 ^ uVar5;
  uVar11 = uVar20 ^ *(uint *)(puVar1 + 0x10) ^ *(uint *)(puVar2 + ((uVar4 & 0xff) + 0x200) * 4) ^
           *(uint *)(puVar2 + ((uVar4 >> 0x18) + 0x300) * 4) ^
           *(uint *)(puVar2 + (uVar4 >> 0xe & 0x3fc)) ^
           *(uint *)(puVar2 + ((uVar4 >> 8 & 0xff) + 0x100) * 4);
  uVar10 = uVar11 ^ uVar13;
  uVar9 = uVar10 ^ uVar12;
  uVar3 = uVar9 ^ uVar4;
  uVar6 = uVar11 ^ *(uint *)(puVar1 + 0x14) ^ *(uint *)(puVar2 + ((uVar3 & 0xff) + 0x200) * 4) ^
          *(uint *)(puVar2 + ((uVar3 >> 0x18) + 0x300) * 4) ^
          *(uint *)(puVar2 + (uVar3 >> 0xe & 0x3fc)) ^
          *(uint *)(puVar2 + ((uVar3 >> 8 & 0xff) + 0x100) * 4);
  uVar15 = uVar6 ^ uVar10;
  uVar14 = uVar15 ^ uVar9;
  uVar8 = uVar14 ^ uVar3;
  param_2[9] = uVar19;
  param_2[10] = uVar18;
  param_2[0xb] = uVar7;
  param_2[0xc] = uVar17;
  param_2[0xd] = uVar16;
  param_2[0xe] = uVar21;
  param_2[0xf] = uVar5;
  param_2[0x10] = uVar20;
  param_2[0x11] = uVar13;
  param_2[0x12] = uVar12;
  param_2[0x13] = uVar4;
  param_2[0x14] = uVar11;
  param_2[0x15] = uVar10;
  param_2[0x17] = uVar3;
  uVar20 = uVar6 ^ *(uint *)(puVar1 + 0x18) ^ *(uint *)(puVar2 + ((uVar8 & 0xff) + 0x200) * 4) ^
           *(uint *)(puVar2 + ((uVar8 >> 0x18) + 0x300) * 4) ^
           *(uint *)(puVar2 + (uVar8 >> 0xe & 0x3fc)) ^
           *(uint *)(puVar2 + ((uVar8 >> 8 & 0xff) + 0x100) * 4);
  uVar19 = uVar20 ^ uVar15;
  uVar17 = uVar19 ^ uVar14;
  uVar7 = uVar17 ^ uVar8;
  param_2[0x18] = uVar6;
  uVar16 = uVar20 ^ *(uint *)(puVar1 + 0x1c) ^ *(uint *)(puVar2 + ((uVar7 & 0xff) + 0x200) * 4) ^
           *(uint *)(puVar2 + ((uVar7 >> 0x18) + 0x300) * 4) ^
           *(uint *)(puVar2 + (uVar7 >> 0xe & 0x3fc)) ^
           *(uint *)(puVar2 + ((uVar7 >> 8 & 0xff) + 0x100) * 4);
  uVar13 = uVar16 ^ uVar19;
  uVar12 = uVar13 ^ uVar17;
  uVar6 = uVar12 ^ uVar7;
  param_2[0x16] = uVar9;
  uVar11 = uVar16 ^ *(uint *)(puVar1 + 0x20) ^ *(uint *)(puVar2 + ((uVar6 & 0xff) + 0x200) * 4) ^
           *(uint *)(puVar2 + ((uVar6 >> 0x18) + 0x300) * 4) ^
           *(uint *)(puVar2 + (uVar6 >> 0xe & 0x3fc)) ^
           *(uint *)(puVar2 + ((uVar6 >> 8 & 0xff) + 0x100) * 4);
  uVar10 = uVar11 ^ uVar13;
  uVar9 = uVar10 ^ uVar12;
  uVar3 = uVar9 ^ uVar6;
  uVar18 = uVar11 ^ *(uint *)(puVar1 + 0x24) ^ *(uint *)(puVar2 + ((uVar3 & 0xff) + 0x200) * 4) ^
           *(uint *)(puVar2 + ((uVar3 >> 0x18) + 0x300) * 4) ^
           *(uint *)(puVar2 + (uVar3 >> 0xe & 0x3fc)) ^
           *(uint *)(puVar2 + ((uVar3 >> 8 & 0xff) + 0x100) * 4);
  uVar5 = uVar18 ^ uVar10;
  uVar4 = uVar5 ^ uVar9;
  param_2[0x19] = uVar15;
  param_2[0x1a] = uVar14;
  param_2[0x1b] = uVar8;
  param_2[0x1c] = uVar20;
  param_2[0x1d] = uVar19;
  param_2[0x1e] = uVar17;
  param_2[0x1f] = uVar7;
  param_2[0x20] = uVar16;
  param_2[0x21] = uVar13;
  param_2[0x22] = uVar12;
  param_2[0x23] = uVar6;
  param_2[0x28] = uVar18;
  param_2[0x2b] = uVar4 ^ uVar3;
  param_2[0x27] = uVar3;
  param_2[0x3c] = 0;
  *(undefined1 *)(param_2 + 0x3c) = 0xa0;
  param_2[0x24] = uVar11;
  param_2[0x25] = uVar10;
  param_2[0x26] = uVar9;
  param_2[0x29] = uVar5;
  param_2[0x2a] = uVar4;
  return 0;
}

