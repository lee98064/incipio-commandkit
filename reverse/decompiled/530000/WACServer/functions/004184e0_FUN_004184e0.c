/* FUN_004184e0 @ 004184e0 */

undefined4 FUN_004184e0(byte *param_1,uint *param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
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
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  
  uVar11 = (uint)param_1[3] | (uint)*param_1 << 0x18 | (uint)param_1[1] << 0x10 |
           (uint)param_1[2] << 8;
  param_2[0x30] = uVar11;
  uVar23 = (uint)param_1[4] << 0x18 | (uint)param_1[5] << 0x10 | (uint)param_1[7] |
           (uint)param_1[6] << 8;
  param_2[0x31] = uVar23;
  uVar22 = (uint)param_1[8] << 0x18 | (uint)param_1[9] << 0x10 | (uint)param_1[0xb] |
           (uint)param_1[10] << 8;
  param_2[0x32] = uVar22;
  uVar20 = (uint)param_1[0xc] << 0x18 | (uint)param_1[0xd] << 0x10 | (uint)param_1[0xf] |
           (uint)param_1[0xe] << 8;
  param_2[0x33] = uVar20;
  puVar7 = PTR_t_im_00433138;
  bVar1 = param_1[0x10];
  bVar2 = param_1[0x11];
  bVar3 = param_1[0x13];
  bVar4 = param_1[0x12];
  param_2[0x2c] =
       *(uint *)(PTR_t_im_00433138 + (bVar3 + 0x300) * 4) ^
       *(uint *)(PTR_t_im_00433138 + (uint)bVar1 * 4) ^
       *(uint *)(PTR_t_im_00433138 + (bVar2 + 0x100) * 4) ^
       *(uint *)(PTR_t_im_00433138 + (bVar4 + 0x200) * 4);
  puVar6 = PTR_t_fl_00433100;
  puVar5 = PTR_t_rc_004330e4;
  uVar12 = (uint)param_1[0x14];
  uVar10 = (uint)param_1[0x15];
  uVar8 = (uint)param_1[0x16];
  uVar9 = (uint)param_1[0x17];
  param_2[0x2d] =
       *(uint *)(puVar7 + (uVar9 + 0x300) * 4) ^ *(uint *)(puVar7 + uVar12 * 4) ^
       *(uint *)(puVar7 + (uVar10 + 0x100) * 4) ^ *(uint *)(puVar7 + (uVar8 + 0x200) * 4);
  uVar11 = uVar11 ^ *(uint *)puVar5 ^ *(uint *)(puVar6 + (uVar9 + 0x200) * 4) ^
           *(uint *)(puVar6 + (uVar12 + 0x300) * 4) ^ *(uint *)(puVar6 + uVar10 * 4) ^
           *(uint *)(puVar6 + (uVar8 + 0x100) * 4);
  uVar23 = uVar11 ^ uVar23;
  uVar22 = uVar23 ^ uVar22;
  uVar20 = uVar22 ^ uVar20;
  uVar21 = uVar20 ^ ((uint)bVar1 << 0x18 | (uint)bVar2 << 0x10 | (uint)bVar3 | (uint)bVar4 << 8);
  uVar10 = uVar21 ^ (uVar12 << 0x18 | uVar10 << 0x10 | uVar9 | uVar8 << 8);
  uVar8 = uVar10 >> 8 & 0xff;
  uVar9 = uVar10 >> 0x10 & 0xff;
  uVar13 = *(uint *)(puVar7 + ((uVar20 & 0xff) + 0x300) * 4) ^
           *(uint *)(puVar7 + (uVar20 >> 0x18) * 4) ^
           *(uint *)(puVar7 + ((uVar20 >> 0x10 & 0xff) + 0x100) * 4) ^
           *(uint *)(puVar7 + ((uVar20 >> 8 & 0xff) + 0x200) * 4);
  uVar25 = *(uint *)(puVar7 + ((uVar11 & 0xff) + 0x300) * 4) ^
           *(uint *)(puVar7 + (uVar11 >> 0x18) * 4) ^
           *(uint *)(puVar7 + ((uVar11 >> 0x10 & 0xff) + 0x100) * 4) ^
           *(uint *)(puVar7 + ((uVar11 >> 8 & 0xff) + 0x200) * 4);
  uVar16 = *(uint *)(puVar7 + ((uVar10 & 0xff) + 0x300) * 4) ^
           *(uint *)(puVar7 + (uVar10 >> 0x18) * 4) ^ *(uint *)(puVar7 + (uVar9 + 0x100) * 4) ^
           *(uint *)(puVar7 + (uVar8 + 0x200) * 4);
  uVar15 = *(uint *)(puVar7 + ((uVar23 & 0xff) + 0x300) * 4) ^
           *(uint *)(puVar7 + (uVar23 >> 0x18) * 4) ^
           *(uint *)(puVar7 + ((uVar23 >> 0x10 & 0xff) + 0x100) * 4) ^
           *(uint *)(puVar7 + ((uVar23 >> 8 & 0xff) + 0x200) * 4);
  uVar14 = *(uint *)(puVar7 + ((uVar22 & 0xff) + 0x300) * 4) ^
           *(uint *)(puVar7 + (uVar22 >> 0x18) * 4) ^
           *(uint *)(puVar7 + ((uVar22 >> 0x10 & 0xff) + 0x100) * 4) ^
           *(uint *)(puVar7 + ((uVar22 >> 8 & 0xff) + 0x200) * 4);
  uVar12 = *(uint *)(puVar7 + ((uVar21 & 0xff) + 0x300) * 4) ^
           *(uint *)(puVar7 + (uVar21 >> 0x18) * 4) ^
           *(uint *)(puVar7 + ((uVar21 >> 0x10 & 0xff) + 0x100) * 4) ^
           *(uint *)(puVar7 + ((uVar21 >> 8 & 0xff) + 0x200) * 4);
  param_2[0x2e] = uVar25;
  param_2[0x2f] = uVar15;
  param_2[0x28] = uVar14;
  param_2[0x29] = uVar13;
  param_2[0x2a] = uVar12;
  param_2[0x2b] = uVar16;
  uVar28 = *(uint *)(puVar6 + ((uVar10 & 0xff) + 0x200) * 4) ^
           *(uint *)(puVar6 + ((uVar10 >> 0x18) + 0x300) * 4) ^ *(uint *)(puVar5 + 4) ^
           *(uint *)(puVar6 + uVar9 * 4) ^ *(uint *)(puVar6 + (uVar8 + 0x100) * 4);
  uVar23 = uVar28 ^ uVar11 ^ uVar23;
  uVar22 = uVar23 ^ uVar22;
  uVar20 = uVar22 ^ uVar20;
  uVar21 = uVar20 ^ uVar21;
  uVar10 = uVar21 ^ uVar10;
  uVar9 = *(uint *)(puVar6 + ((uVar10 & 0xff) + 0x200) * 4) ^
          *(uint *)(puVar6 + ((uVar10 >> 0x18) + 0x300) * 4) ^ *(uint *)(puVar5 + 8) ^
          *(uint *)(puVar6 + (uVar10 >> 0xe & 0x3fc)) ^
          *(uint *)(puVar6 + ((uVar10 >> 8 & 0xff) + 0x100) * 4);
  uVar24 = uVar9 ^ uVar28 ^ uVar11;
  uVar23 = uVar24 ^ uVar23;
  uVar22 = uVar23 ^ uVar22;
  uVar20 = uVar22 ^ uVar20;
  uVar21 = uVar20 ^ uVar21;
  uVar10 = uVar21 ^ uVar10;
  uVar8 = *(uint *)(puVar6 + ((uVar10 & 0xff) + 0x200) * 4) ^
          *(uint *)(puVar6 + ((uVar10 >> 0x18) + 0x300) * 4) ^ *(uint *)(puVar5 + 0xc) ^
          *(uint *)(puVar6 + (uVar10 >> 0xe & 0x3fc)) ^
          *(uint *)(puVar6 + ((uVar10 >> 8 & 0xff) + 0x100) * 4);
  uVar24 = uVar8 ^ uVar24;
  uVar25 = *(uint *)(puVar7 + (uVar28 >> 0x18) * 4) ^
           *(uint *)(puVar7 + ((uVar28 & 0xff) + 0x300) * 4) ^ uVar25 ^
           *(uint *)(puVar7 + ((uVar28 >> 0x10 & 0xff) + 0x100) * 4) ^
           *(uint *)(puVar7 + ((uVar28 >> 8 & 0xff) + 0x200) * 4);
  uVar23 = uVar24 ^ uVar23;
  uVar22 = uVar23 ^ uVar22;
  uVar20 = uVar22 ^ uVar20;
  uVar21 = uVar20 ^ uVar21;
  uVar10 = uVar21 ^ uVar10;
  uVar11 = *(uint *)(puVar7 + (uVar9 >> 0x18) * 4) ^
           *(uint *)(puVar7 + ((uVar9 & 0xff) + 0x300) * 4) ^ uVar25 ^
           *(uint *)(puVar7 + ((uVar9 >> 0x10 & 0xff) + 0x100) * 4) ^
           *(uint *)(puVar7 + ((uVar9 >> 8 & 0xff) + 0x200) * 4);
  uVar15 = uVar25 ^ uVar15;
  uVar9 = uVar11 ^ uVar15;
  uVar14 = uVar15 ^ uVar14;
  uVar13 = uVar14 ^ uVar13;
  uVar18 = uVar9 ^ uVar14;
  uVar12 = uVar13 ^ uVar12;
  uVar17 = uVar18 ^ uVar13;
  uVar27 = uVar17 ^ uVar12;
  uVar16 = uVar12 ^ uVar16;
  uVar19 = *(uint *)(puVar7 + (uVar8 >> 0x18) * 4) ^
           *(uint *)(puVar7 + ((uVar8 & 0xff) + 0x300) * 4) ^ uVar11 ^
           *(uint *)(puVar7 + ((uVar8 >> 0x10 & 0xff) + 0x100) * 4) ^
           *(uint *)(puVar7 + ((uVar8 >> 8 & 0xff) + 0x200) * 4);
  uVar28 = uVar27 ^ uVar16;
  param_2[0x26] = uVar14;
  param_2[0x22] = uVar11;
  param_2[0x27] = uVar13;
  param_2[0x20] = uVar12;
  param_2[0x1f] = uVar28;
  uVar12 = *(uint *)(puVar6 + ((uVar10 & 0xff) + 0x200) * 4) ^
           *(uint *)(puVar6 + ((uVar10 >> 0x18) + 0x300) * 4) ^ *(uint *)(puVar5 + 0x10) ^
           *(uint *)(puVar6 + (uVar10 >> 0xe & 0x3fc)) ^
           *(uint *)(puVar6 + ((uVar10 >> 8 & 0xff) + 0x100) * 4);
  uVar24 = uVar12 ^ uVar24;
  uVar23 = uVar24 ^ uVar23;
  uVar22 = uVar23 ^ uVar22;
  uVar20 = uVar22 ^ uVar20;
  uVar21 = uVar20 ^ uVar21;
  uVar10 = uVar21 ^ uVar10;
  param_2[0x25] = uVar15;
  param_2[0x24] = uVar25;
  uVar8 = *(uint *)(puVar6 + ((uVar10 >> 0x18) + 0x300) * 4);
  uVar15 = *(uint *)(puVar6 + ((uVar10 & 0xff) + 0x200) * 4);
  uVar13 = *(uint *)(puVar5 + 0x14);
  uVar14 = *(uint *)(puVar6 + (uVar10 >> 0xe & 0x3fc));
  uVar11 = *(uint *)(puVar6 + ((uVar10 >> 8 & 0xff) + 0x100) * 4);
  param_2[0x21] = uVar16;
  uVar11 = uVar15 ^ uVar8 ^ uVar13 ^ uVar14 ^ uVar11;
  uVar24 = uVar11 ^ uVar24;
  uVar14 = *(uint *)(puVar7 + ((uVar11 & 0xff) + 0x300) * 4);
  uVar23 = uVar24 ^ uVar23;
  uVar15 = *(uint *)(puVar7 + (uVar11 >> 0x18) * 4);
  uVar22 = uVar23 ^ uVar22;
  uVar20 = uVar22 ^ uVar20;
  uVar13 = *(uint *)(puVar7 + ((uVar11 >> 0x10 & 0xff) + 0x100) * 4);
  uVar26 = *(uint *)(puVar7 + (uVar12 >> 0x18) * 4) ^
           *(uint *)(puVar7 + ((uVar12 & 0xff) + 0x300) * 4) ^ uVar19 ^
           *(uint *)(puVar7 + ((uVar12 >> 0x10 & 0xff) + 0x100) * 4) ^
           *(uint *)(puVar7 + ((uVar12 >> 8 & 0xff) + 0x200) * 4);
  uVar12 = *(uint *)(puVar7 + ((uVar11 >> 8 & 0xff) + 0x200) * 4);
  uVar8 = uVar20 ^ uVar21 ^ uVar10;
  param_2[0x23] = uVar9;
  param_2[0x18] = uVar19;
  uVar19 = uVar19 ^ uVar9;
  uVar12 = uVar15 ^ uVar14 ^ uVar26 ^ uVar13 ^ uVar12;
  param_2[0x1c] = uVar18;
  param_2[0x1d] = uVar17;
  uVar18 = uVar19 ^ uVar18;
  param_2[0x1e] = uVar27;
  uVar17 = uVar18 ^ uVar17;
  uVar27 = uVar17 ^ uVar27;
  uVar11 = uVar26 ^ uVar19;
  uVar28 = uVar27 ^ uVar28;
  uVar16 = uVar11 ^ uVar18;
  uVar25 = uVar16 ^ uVar17;
  uVar9 = uVar25 ^ uVar27;
  uVar21 = uVar9 ^ uVar28;
  uVar15 = uVar12 ^ uVar11;
  param_2[0x14] = uVar27;
  param_2[0x15] = uVar28;
  param_2[0x16] = uVar26;
  param_2[0x17] = uVar11;
  uVar14 = uVar15 ^ uVar16;
  uVar13 = uVar14 ^ uVar25;
  uVar11 = uVar13 ^ uVar9;
  param_2[0x10] = uVar16;
  param_2[0x11] = uVar25;
  param_2[0x12] = uVar9;
  param_2[0x13] = uVar21;
  uVar8 = *(uint *)(puVar6 + ((uVar8 & 0xff) + 0x200) * 4) ^
          *(uint *)(puVar6 + ((uVar8 >> 0x18) + 0x300) * 4) ^ *(uint *)(puVar5 + 0x18) ^
          *(uint *)(puVar6 + (uVar8 >> 0xe & 0x3fc)) ^
          *(uint *)(puVar6 + ((uVar8 >> 8 & 0xff) + 0x100) * 4);
  uVar24 = uVar8 ^ uVar24;
  param_2[0x1b] = uVar17;
  uVar23 = uVar24 ^ uVar23;
  uVar22 = uVar23 ^ uVar22;
  uVar20 = uVar22 ^ uVar20;
  uVar10 = uVar10 ^ uVar20;
  param_2[0x1a] = uVar18;
  uVar27 = *(uint *)(puVar7 + (uVar8 >> 0x18) * 4);
  uVar28 = *(uint *)(puVar7 + ((uVar8 & 0xff) + 0x300) * 4);
  uVar26 = *(uint *)(puVar5 + 0x1c);
  uVar18 = *(uint *)(puVar7 + ((uVar8 >> 0x10 & 0xff) + 0x100) * 4);
  uVar17 = *(uint *)(puVar6 + ((uVar10 & 0xff) + 0x200) * 4);
  uVar16 = *(uint *)(puVar6 + ((uVar10 >> 0x18) + 0x300) * 4);
  uVar25 = *(uint *)(puVar7 + ((uVar8 >> 8 & 0xff) + 0x200) * 4);
  param_2[0xc] = uVar12;
  uVar9 = *(uint *)(puVar6 + (uVar10 >> 0xe & 0x3fc));
  uVar8 = *(uint *)(puVar6 + ((uVar10 >> 8 & 0xff) + 0x100) * 4);
  uVar25 = uVar27 ^ uVar28 ^ uVar12 ^ uVar18 ^ uVar25;
  param_2[0xd] = uVar15;
  uVar15 = uVar25 ^ uVar15;
  uVar8 = uVar24 ^ uVar26 ^ uVar17 ^ uVar16 ^ uVar9 ^ uVar8;
  param_2[0xe] = uVar14;
  uVar14 = uVar15 ^ uVar14;
  uVar23 = uVar8 ^ uVar23;
  param_2[0xf] = uVar13;
  uVar13 = uVar14 ^ uVar13;
  uVar9 = uVar13 ^ uVar11;
  uVar22 = uVar23 ^ uVar22;
  param_2[8] = uVar11;
  uVar11 = uVar11 ^ uVar21;
  param_2[0x19] = uVar19;
  param_2[7] = uVar9 ^ uVar11;
  param_2[3] = uVar22 ^ uVar20;
  param_2[1] = uVar23;
  param_2[2] = uVar22;
  *param_2 = uVar8;
  param_2[0x3c] = 0;
  param_2[9] = uVar11;
  *(undefined1 *)(param_2 + 0x3c) = 0xc0;
  param_2[10] = uVar25;
  param_2[0xb] = uVar15;
  param_2[4] = uVar14;
  param_2[5] = uVar13;
  param_2[6] = uVar9;
  return 0;
}

