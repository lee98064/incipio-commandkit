/* aes_decrypt_key128 @ 00417814 */

undefined4 aes_decrypt_key128(byte *param_1,uint *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
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
  uint *puVar14;
  uint *puVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  
  uVar9 = (uint)param_1[3] | (uint)*param_1 << 0x18 | (uint)param_1[1] << 0x10 |
          (uint)param_1[2] << 8;
  param_2[0x28] = uVar9;
  uVar5 = (uint)param_1[4] << 0x18 | (uint)param_1[5] << 0x10 | (uint)param_1[7] |
          (uint)param_1[6] << 8;
  param_2[0x29] = uVar5;
  uVar8 = (uint)param_1[8] << 0x18 | (uint)param_1[9] << 0x10 | (uint)param_1[0xb] |
          (uint)param_1[10] << 8;
  param_2[0x2a] = uVar8;
  puVar3 = PTR_t_im_00433138;
  puVar2 = PTR_t_fl_00433100;
  puVar1 = PTR_t_rc_004330e4;
  uVar4 = (uint)param_1[0xc] << 0x18 | (uint)param_1[0xd] << 0x10 | (uint)param_1[0xf] |
          (uint)param_1[0xe] << 8;
  uVar13 = *(uint *)(PTR_t_fl_00433100 + (param_1[0xf] + 0x200) * 4) ^
           *(uint *)(PTR_t_fl_00433100 + (param_1[0xc] + 0x300) * 4) ^ *(uint *)PTR_t_rc_004330e4 ^
           *(uint *)(PTR_t_fl_00433100 + (uint)param_1[0xd] * 4) ^
           *(uint *)(PTR_t_fl_00433100 + (param_1[0xe] + 0x100) * 4);
  uVar6 = uVar13 ^ uVar9;
  uVar20 = uVar6 ^ uVar5;
  uVar13 = uVar5 ^ uVar8 ^ uVar9 ^ uVar4 ^ uVar13;
  uVar11 = *(uint *)(PTR_t_im_00433138 + ((uVar6 & 0xff) + 0x300) * 4) ^
           *(uint *)(PTR_t_im_00433138 + (uVar6 >> 0x18) * 4) ^
           *(uint *)(PTR_t_im_00433138 + ((uVar6 >> 0x10 & 0xff) + 0x100) * 4) ^
           *(uint *)(PTR_t_im_00433138 + ((uVar6 >> 8 & 0xff) + 0x200) * 4);
  uVar10 = *(uint *)(PTR_t_im_00433138 + ((uVar20 & 0xff) + 0x300) * 4) ^
           *(uint *)(PTR_t_im_00433138 + (uVar20 >> 0x18) * 4) ^
           *(uint *)(PTR_t_im_00433138 + ((uVar20 >> 0x10 & 0xff) + 0x100) * 4) ^
           *(uint *)(PTR_t_im_00433138 + ((uVar20 >> 8 & 0xff) + 0x200) * 4);
  puVar15 = (uint *)(PTR_t_fl_00433100 + ((uVar13 & 0xff) + 0x200) * 4);
  puVar14 = (uint *)(PTR_t_fl_00433100 + ((uVar13 >> 0x18) + 0x300) * 4);
  param_2[0x2b] = uVar4;
  param_2[0x24] = uVar11;
  uVar17 = *puVar15 ^ *puVar14 ^ *(uint *)(puVar1 + 4) ^ *(uint *)(puVar2 + (uVar13 >> 0xe & 0x3fc))
           ^ *(uint *)(puVar2 + ((uVar13 >> 8 & 0xff) + 0x100) * 4);
  uVar9 = uVar4 ^ uVar5 ^ uVar17;
  uVar20 = uVar20 ^ uVar8;
  uVar5 = *(uint *)(puVar2 + ((uVar9 & 0xff) + 0x200) * 4) ^
          *(uint *)(puVar2 + ((uVar9 >> 0x18) + 0x300) * 4) ^ *(uint *)(puVar1 + 8) ^
          *(uint *)(puVar2 + (uVar9 >> 0xe & 0x3fc)) ^
          *(uint *)(puVar2 + ((uVar9 >> 8 & 0xff) + 0x100) * 4);
  uVar6 = uVar20 ^ uVar4;
  uVar16 = *(uint *)(puVar3 + (uVar5 >> 0x18) * 4);
  uVar22 = *(uint *)(puVar3 + ((uVar5 & 0xff) + 0x300) * 4);
  uVar12 = *(uint *)(puVar3 + ((uVar5 >> 0x10 & 0xff) + 0x100) * 4);
  uVar7 = uVar4 ^ uVar8 ^ uVar5;
  uVar18 = *(uint *)(puVar3 + (uVar17 >> 0x18) * 4) ^
           *(uint *)(puVar3 + ((uVar17 & 0xff) + 0x300) * 4) ^ uVar11 ^
           *(uint *)(puVar3 + ((uVar17 >> 0x10 & 0xff) + 0x100) * 4) ^
           *(uint *)(puVar3 + ((uVar17 >> 8 & 0xff) + 0x200) * 4);
  uVar11 = *(uint *)(puVar3 + ((uVar5 >> 8 & 0xff) + 0x200) * 4);
  uVar8 = *(uint *)(puVar3 + ((uVar20 & 0xff) + 0x300) * 4) ^
          *(uint *)(puVar3 + (uVar20 >> 0x18) * 4) ^
          *(uint *)(puVar3 + ((uVar20 >> 0x10 & 0xff) + 0x100) * 4) ^
          *(uint *)(puVar3 + ((uVar20 >> 8 & 0xff) + 0x200) * 4);
  uVar5 = *(uint *)(puVar3 + ((uVar6 & 0xff) + 0x300) * 4) ^ *(uint *)(puVar3 + (uVar6 >> 0x18) * 4)
          ^ *(uint *)(puVar3 + ((uVar6 >> 0x10 & 0xff) + 0x100) * 4) ^
          *(uint *)(puVar3 + ((uVar6 >> 8 & 0xff) + 0x200) * 4);
  param_2[0x25] = uVar10;
  uVar10 = uVar18 ^ uVar10;
  uVar17 = uVar10 ^ uVar8;
  uVar11 = uVar16 ^ uVar22 ^ uVar18 ^ uVar12 ^ uVar11;
  param_2[0x26] = uVar8;
  uVar16 = uVar11 ^ uVar10;
  uVar19 = uVar17 ^ uVar5;
  param_2[0x27] = uVar5;
  param_2[0x21] = uVar10;
  uVar8 = *(uint *)(puVar2 + ((uVar7 & 0xff) + 0x200) * 4) ^
          *(uint *)(puVar2 + ((uVar7 >> 0x18) + 0x300) * 4) ^ *(uint *)(puVar1 + 0xc) ^
          *(uint *)(puVar2 + (uVar7 >> 0xe & 0x3fc)) ^
          *(uint *)(puVar2 + ((uVar7 >> 8 & 0xff) + 0x100) * 4);
  uVar4 = uVar8 ^ uVar4;
  uVar6 = *(uint *)(puVar2 + ((uVar4 & 0xff) + 0x200) * 4) ^
          *(uint *)(puVar2 + ((uVar4 >> 0x18) + 0x300) * 4) ^ *(uint *)(puVar1 + 0x10) ^
          *(uint *)(puVar2 + (uVar4 >> 0xe & 0x3fc)) ^
          *(uint *)(puVar2 + ((uVar4 >> 8 & 0xff) + 0x100) * 4);
  uVar13 = uVar6 ^ uVar13;
  param_2[0x20] = uVar18;
  uVar5 = *(uint *)(puVar2 + ((uVar13 & 0xff) + 0x200) * 4) ^
          *(uint *)(puVar2 + ((uVar13 >> 0x18) + 0x300) * 4) ^ *(uint *)(puVar1 + 0x14) ^
          *(uint *)(puVar2 + (uVar13 >> 0xe & 0x3fc)) ^
          *(uint *)(puVar2 + ((uVar13 >> 8 & 0xff) + 0x100) * 4);
  uVar22 = *(uint *)(puVar3 + ((uVar6 & 0xff) + 0x300) * 4);
  uVar18 = *(uint *)(puVar3 + (uVar6 >> 0x18) * 4);
  uVar10 = *(uint *)(puVar3 + ((uVar6 >> 0x10 & 0xff) + 0x100) * 4);
  uVar12 = *(uint *)(puVar3 + (uVar8 >> 0x18) * 4) ^
           *(uint *)(puVar3 + ((uVar8 & 0xff) + 0x300) * 4) ^ uVar11 ^
           *(uint *)(puVar3 + ((uVar8 >> 0x10 & 0xff) + 0x100) * 4) ^
           *(uint *)(puVar3 + ((uVar8 >> 8 & 0xff) + 0x200) * 4);
  uVar9 = uVar5 ^ uVar9;
  param_2[0x1c] = uVar11;
  uVar21 = *(uint *)(puVar3 + (uVar5 >> 0x18) * 4);
  uVar8 = *(uint *)(puVar3 + ((uVar5 & 0xff) + 0x300) * 4);
  uVar20 = *(uint *)(puVar3 + ((uVar5 >> 0x10 & 0xff) + 0x100) * 4);
  uVar6 = uVar18 ^ uVar22 ^ uVar12 ^ uVar10 ^ *(uint *)(puVar3 + ((uVar6 >> 8 & 0xff) + 0x200) * 4);
  param_2[0x22] = uVar17;
  uVar17 = uVar16 ^ uVar17;
  uVar10 = uVar12 ^ uVar16;
  uVar11 = uVar6 ^ uVar10;
  uVar23 = *(uint *)(puVar3 + ((uVar5 >> 8 & 0xff) + 0x200) * 4);
  param_2[0x23] = uVar19;
  uVar5 = uVar10 ^ uVar17;
  uVar19 = uVar17 ^ uVar19;
  param_2[0x1d] = uVar16;
  param_2[0x1e] = uVar17;
  uVar18 = uVar11 ^ uVar5;
  uVar22 = uVar5 ^ uVar19;
  uVar16 = *(uint *)(puVar2 + ((uVar9 & 0xff) + 0x200) * 4);
  param_2[0x19] = uVar10;
  param_2[0x1a] = uVar5;
  param_2[0x14] = uVar6;
  uVar5 = *(uint *)(puVar2 + ((uVar9 >> 0x18) + 0x300) * 4);
  param_2[0x18] = uVar12;
  uVar10 = uVar16 ^ uVar5 ^ *(uint *)(puVar1 + 0x18) ^ *(uint *)(puVar2 + (uVar9 >> 0xe & 0x3fc)) ^
           *(uint *)(puVar2 + ((uVar9 >> 8 & 0xff) + 0x100) * 4);
  uVar7 = uVar10 ^ uVar7;
  uVar23 = uVar21 ^ uVar8 ^ uVar6 ^ uVar20 ^ uVar23;
  param_2[0x1b] = uVar22;
  uVar22 = uVar18 ^ uVar22;
  uVar6 = *(uint *)(puVar2 + ((uVar7 & 0xff) + 0x200) * 4) ^
          *(uint *)(puVar2 + ((uVar7 >> 0x18) + 0x300) * 4) ^ *(uint *)(puVar1 + 0x1c) ^
          *(uint *)(puVar2 + (uVar7 >> 0xe & 0x3fc)) ^
          *(uint *)(puVar2 + ((uVar7 >> 8 & 0xff) + 0x100) * 4);
  uVar4 = uVar6 ^ uVar4;
  param_2[0x1f] = uVar19;
  uVar5 = *(uint *)(puVar2 + ((uVar4 & 0xff) + 0x200) * 4) ^
          *(uint *)(puVar2 + ((uVar4 >> 0x18) + 0x300) * 4) ^ *(uint *)(puVar1 + 0x20) ^
          *(uint *)(puVar2 + (uVar4 >> 0xe & 0x3fc)) ^
          *(uint *)(puVar2 + ((uVar4 >> 8 & 0xff) + 0x100) * 4);
  uVar8 = *(uint *)(puVar3 + (uVar6 >> 0x18) * 4);
  uVar20 = *(uint *)(puVar3 + ((uVar6 & 0xff) + 0x300) * 4);
  uVar17 = *(uint *)(puVar3 + ((uVar6 >> 0x10 & 0xff) + 0x100) * 4);
  uVar16 = *(uint *)(puVar3 + (uVar10 >> 0x18) * 4) ^
           *(uint *)(puVar3 + ((uVar10 & 0xff) + 0x300) * 4) ^ uVar23 ^
           *(uint *)(puVar3 + ((uVar10 >> 0x10 & 0xff) + 0x100) * 4) ^
           *(uint *)(puVar3 + ((uVar10 >> 8 & 0xff) + 0x200) * 4);
  uVar6 = *(uint *)(puVar3 + ((uVar6 >> 8 & 0xff) + 0x200) * 4);
  uVar12 = *(uint *)(puVar3 + ((uVar5 & 0xff) + 0x300) * 4);
  uVar19 = *(uint *)(puVar3 + (uVar5 >> 0x18) * 4);
  uVar13 = uVar5 ^ uVar13;
  param_2[0x10] = uVar23;
  uVar21 = *(uint *)(puVar3 + ((uVar5 >> 0x10 & 0xff) + 0x100) * 4);
  uVar23 = uVar23 ^ uVar11;
  uVar6 = uVar8 ^ uVar20 ^ uVar16 ^ uVar17 ^ uVar6;
  param_2[0x15] = uVar11;
  param_2[0x16] = uVar18;
  uVar11 = uVar16 ^ uVar23;
  uVar18 = uVar23 ^ uVar18;
  uVar8 = uVar11 ^ uVar18;
  uVar10 = uVar6 ^ uVar11;
  param_2[0x17] = uVar22;
  uVar22 = uVar18 ^ uVar22;
  uVar20 = *(uint *)(puVar3 + ((uVar5 >> 8 & 0xff) + 0x200) * 4);
  param_2[0x11] = uVar23;
  uVar5 = uVar10 ^ uVar8;
  uVar23 = uVar8 ^ uVar22;
  param_2[0xc] = uVar16;
  param_2[0xd] = uVar11;
  uVar17 = *(uint *)(puVar1 + 0x24);
  param_2[0xe] = uVar8;
  param_2[8] = uVar6;
  uVar16 = *(uint *)(puVar2 + ((uVar13 & 0xff) + 0x200) * 4);
  uVar11 = *(uint *)(puVar2 + ((uVar13 >> 0x18) + 0x300) * 4);
  uVar20 = uVar19 ^ uVar12 ^ uVar6 ^ uVar21 ^ uVar20;
  uVar8 = *(uint *)(puVar2 + (uVar13 >> 0xe & 0x3fc));
  uVar6 = *(uint *)(puVar2 + ((uVar13 >> 8 & 0xff) + 0x100) * 4);
  param_2[9] = uVar10;
  uVar10 = uVar20 ^ uVar10;
  uVar12 = uVar5 ^ uVar23;
  param_2[10] = uVar5;
  uVar5 = uVar10 ^ uVar5;
  param_2[0xb] = uVar12;
  uVar6 = uVar9 ^ uVar17 ^ uVar16 ^ uVar11 ^ uVar8 ^ uVar6;
  param_2[0xf] = uVar23;
  param_2[4] = uVar20;
  param_2[7] = uVar5 ^ uVar12;
  param_2[6] = uVar5;
  param_2[0x3c] = 0;
  param_2[0x12] = uVar18;
  param_2[0x13] = uVar22;
  *param_2 = uVar4 ^ uVar7 ^ uVar6 ^ uVar13;
  param_2[1] = uVar6 ^ uVar4;
  param_2[2] = uVar6 ^ uVar13;
  param_2[3] = uVar6;
  *(undefined1 *)(param_2 + 0x3c) = 0xa0;
  param_2[5] = uVar10;
  return 0;
}

