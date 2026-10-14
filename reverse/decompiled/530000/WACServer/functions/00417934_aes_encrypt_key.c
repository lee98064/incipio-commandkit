/* aes_encrypt_key @ 00417934 */

undefined4 aes_encrypt_key(byte *param_1,int param_2,uint *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
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
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  
  if (param_2 == 0x20) {
LAB_004170c4:
    uVar4 = (uint)param_1[3] | (uint)*param_1 << 0x18 | (uint)param_1[1] << 0x10 |
            (uint)param_1[2] << 8;
    *param_3 = uVar4;
    uVar15 = (uint)param_1[4] << 0x18 | (uint)param_1[5] << 0x10 | (uint)param_1[7] |
             (uint)param_1[6] << 8;
    param_3[1] = uVar15;
    uVar17 = (uint)param_1[8] << 0x18 | (uint)param_1[9] << 0x10 | (uint)param_1[0xb] |
             (uint)param_1[10] << 8;
    param_3[2] = uVar17;
    uVar7 = (uint)param_1[0xc] << 0x18 | (uint)param_1[0xd] << 0x10 | (uint)param_1[0xf] |
            (uint)param_1[0xe] << 8;
    param_3[3] = uVar7;
    uVar5 = (uint)param_1[0x10] << 0x18 | (uint)param_1[0x11] << 0x10 | (uint)param_1[0x13] |
            (uint)param_1[0x12] << 8;
    param_3[4] = uVar5;
    uVar13 = (uint)param_1[0x14] << 0x18 | (uint)param_1[0x15] << 0x10 | (uint)param_1[0x17] |
             (uint)param_1[0x16] << 8;
    param_3[5] = uVar13;
    uVar12 = (uint)param_1[0x18] << 0x18 | (uint)param_1[0x19] << 0x10 | (uint)param_1[0x1b] |
             (uint)param_1[0x1a] << 8;
    param_3[6] = uVar12;
    puVar2 = PTR_t_fl_00433100;
    puVar1 = PTR_t_rc_004330e4;
    uVar9 = (uint)param_1[0x1c] << 0x18 | (uint)param_1[0x1d] << 0x10 | (uint)param_1[0x1f] |
            (uint)param_1[0x1e] << 8;
    uVar4 = uVar4 ^ *(uint *)PTR_t_rc_004330e4 ^
            *(uint *)(PTR_t_fl_00433100 + (param_1[0x1f] + 0x200) * 4) ^
            *(uint *)(PTR_t_fl_00433100 + (param_1[0x1c] + 0x300) * 4) ^
            *(uint *)(PTR_t_fl_00433100 + (uint)param_1[0x1d] * 4) ^
            *(uint *)(PTR_t_fl_00433100 + (param_1[0x1e] + 0x100) * 4);
    uVar15 = uVar4 ^ uVar15;
    uVar17 = uVar15 ^ uVar17;
    uVar7 = uVar17 ^ uVar7;
    uVar16 = *(uint *)(PTR_t_fl_00433100 + (uVar7 >> 0x18) * 4) ^
             *(uint *)(PTR_t_fl_00433100 + ((uVar7 & 0xff) + 0x300) * 4) ^ uVar5 ^
             *(uint *)(PTR_t_fl_00433100 + ((uVar7 >> 0x10 & 0xff) + 0x100) * 4) ^
             *(uint *)(PTR_t_fl_00433100 + ((uVar7 >> 8 & 0xff) + 0x200) * 4);
    uVar13 = uVar16 ^ uVar13;
    uVar12 = uVar13 ^ uVar12;
    uVar6 = uVar12 ^ uVar9;
    uVar11 = uVar4 ^ *(uint *)(PTR_t_rc_004330e4 + 4) ^
             *(uint *)(PTR_t_fl_00433100 + ((uVar6 & 0xff) + 0x200) * 4) ^
             *(uint *)(PTR_t_fl_00433100 + ((uVar6 >> 0x18) + 0x300) * 4) ^
             *(uint *)(PTR_t_fl_00433100 + (uVar6 >> 0xe & 0x3fc)) ^
             *(uint *)(PTR_t_fl_00433100 + ((uVar6 >> 8 & 0xff) + 0x100) * 4);
    uVar18 = uVar11 ^ uVar15;
    uVar14 = uVar18 ^ uVar17;
    uVar5 = uVar14 ^ uVar7;
    uVar10 = *(uint *)(PTR_t_fl_00433100 + (uVar5 >> 0x18) * 4) ^
             *(uint *)(PTR_t_fl_00433100 + ((uVar5 & 0xff) + 0x300) * 4) ^ uVar16 ^
             *(uint *)(PTR_t_fl_00433100 + ((uVar5 >> 0x10 & 0xff) + 0x100) * 4) ^
             *(uint *)(PTR_t_fl_00433100 + ((uVar5 >> 8 & 0xff) + 0x200) * 4);
    uVar20 = uVar10 ^ uVar13;
    uVar19 = uVar20 ^ uVar12;
    uVar8 = uVar19 ^ uVar6;
    param_3[7] = uVar9;
    param_3[8] = uVar4;
    param_3[9] = uVar15;
    param_3[10] = uVar17;
    param_3[0xb] = uVar7;
    param_3[0xc] = uVar16;
    param_3[0xd] = uVar13;
    param_3[0xe] = uVar12;
    param_3[0xf] = uVar6;
    param_3[0x10] = uVar11;
    param_3[0x11] = uVar18;
    param_3[0x12] = uVar14;
    uVar15 = uVar11 ^ *(uint *)(puVar1 + 8) ^ *(uint *)(puVar2 + ((uVar8 & 0xff) + 0x200) * 4) ^
             *(uint *)(puVar2 + ((uVar8 >> 0x18) + 0x300) * 4) ^
             *(uint *)(puVar2 + (uVar8 >> 0xe & 0x3fc)) ^
             *(uint *)(puVar2 + ((uVar8 >> 8 & 0xff) + 0x100) * 4);
    uVar18 = uVar15 ^ uVar18;
    uVar14 = uVar18 ^ uVar14;
    param_3[0x13] = uVar5;
    uVar5 = uVar14 ^ uVar5;
    uVar13 = *(uint *)(puVar2 + (uVar5 >> 0x18) * 4) ^
             *(uint *)(puVar2 + ((uVar5 & 0xff) + 0x300) * 4) ^ uVar10 ^
             *(uint *)(puVar2 + ((uVar5 >> 0x10 & 0xff) + 0x100) * 4) ^
             *(uint *)(puVar2 + ((uVar5 >> 8 & 0xff) + 0x200) * 4);
    uVar12 = uVar13 ^ uVar20;
    uVar11 = uVar12 ^ uVar19;
    uVar4 = uVar11 ^ uVar8;
    param_3[0x14] = uVar10;
    uVar10 = uVar15 ^ *(uint *)(puVar1 + 0xc) ^ *(uint *)(puVar2 + ((uVar4 & 0xff) + 0x200) * 4) ^
             *(uint *)(puVar2 + ((uVar4 >> 0x18) + 0x300) * 4) ^
             *(uint *)(puVar2 + (uVar4 >> 0xe & 0x3fc)) ^
             *(uint *)(puVar2 + ((uVar4 >> 8 & 0xff) + 0x100) * 4);
    uVar22 = uVar10 ^ uVar18;
    uVar21 = uVar22 ^ uVar14;
    uVar6 = uVar21 ^ uVar5;
    uVar9 = *(uint *)(puVar2 + (uVar6 >> 0x18) * 4) ^
            *(uint *)(puVar2 + ((uVar6 & 0xff) + 0x300) * 4) ^ uVar13 ^
            *(uint *)(puVar2 + ((uVar6 >> 0x10 & 0xff) + 0x100) * 4) ^
            *(uint *)(puVar2 + ((uVar6 >> 8 & 0xff) + 0x200) * 4);
    uVar17 = uVar9 ^ uVar12;
    uVar16 = uVar17 ^ uVar11;
    uVar7 = uVar16 ^ uVar4;
    param_3[0x15] = uVar20;
    param_3[0x16] = uVar19;
    param_3[0x17] = uVar8;
    param_3[0x18] = uVar15;
    param_3[0x19] = uVar18;
    param_3[0x1a] = uVar14;
    param_3[0x1b] = uVar5;
    param_3[0x1c] = uVar13;
    param_3[0x1d] = uVar12;
    param_3[0x1e] = uVar11;
    param_3[0x1f] = uVar4;
    param_3[0x20] = uVar10;
    param_3[0x21] = uVar22;
    param_3[0x22] = uVar21;
    uVar15 = uVar10 ^ *(uint *)(puVar1 + 0x10) ^ *(uint *)(puVar2 + ((uVar7 & 0xff) + 0x200) * 4) ^
             *(uint *)(puVar2 + ((uVar7 >> 0x18) + 0x300) * 4) ^
             *(uint *)(puVar2 + (uVar7 >> 0xe & 0x3fc)) ^
             *(uint *)(puVar2 + ((uVar7 >> 8 & 0xff) + 0x100) * 4);
    uVar22 = uVar15 ^ uVar22;
    uVar21 = uVar22 ^ uVar21;
    param_3[0x23] = uVar6;
    uVar6 = uVar21 ^ uVar6;
    uVar14 = *(uint *)(puVar2 + (uVar6 >> 0x18) * 4) ^
             *(uint *)(puVar2 + ((uVar6 & 0xff) + 0x300) * 4) ^ uVar9 ^
             *(uint *)(puVar2 + ((uVar6 >> 0x10 & 0xff) + 0x100) * 4) ^
             *(uint *)(puVar2 + ((uVar6 >> 8 & 0xff) + 0x200) * 4);
    uVar13 = uVar14 ^ uVar17;
    uVar12 = uVar13 ^ uVar16;
    uVar5 = uVar12 ^ uVar7;
    param_3[0x24] = uVar9;
    uVar11 = uVar15 ^ *(uint *)(puVar1 + 0x14) ^ *(uint *)(puVar2 + ((uVar5 & 0xff) + 0x200) * 4) ^
             *(uint *)(puVar2 + ((uVar5 >> 0x18) + 0x300) * 4) ^
             *(uint *)(puVar2 + (uVar5 >> 0xe & 0x3fc)) ^
             *(uint *)(puVar2 + ((uVar5 >> 8 & 0xff) + 0x100) * 4);
    uVar10 = uVar11 ^ uVar22;
    uVar9 = uVar10 ^ uVar21;
    uVar4 = uVar9 ^ uVar6;
    uVar20 = *(uint *)(puVar2 + (uVar4 >> 0x18) * 4) ^
             *(uint *)(puVar2 + ((uVar4 & 0xff) + 0x300) * 4) ^ uVar14 ^
             *(uint *)(puVar2 + ((uVar4 >> 0x10 & 0xff) + 0x100) * 4) ^
             *(uint *)(puVar2 + ((uVar4 >> 8 & 0xff) + 0x200) * 4);
    uVar19 = uVar20 ^ uVar13;
    uVar18 = uVar19 ^ uVar12;
    uVar8 = uVar18 ^ uVar5;
    param_3[0x25] = uVar17;
    param_3[0x26] = uVar16;
    param_3[0x27] = uVar7;
    param_3[0x28] = uVar15;
    param_3[0x2b] = uVar6;
    param_3[0x2e] = uVar12;
    param_3[0x2f] = uVar5;
    param_3[0x30] = uVar11;
    param_3[0x31] = uVar10;
    param_3[0x29] = uVar22;
    param_3[0x2a] = uVar21;
    param_3[0x2c] = uVar14;
    param_3[0x2d] = uVar13;
    param_3[0x32] = uVar9;
    uVar5 = uVar11 ^ *(uint *)(puVar1 + 0x18) ^ *(uint *)(puVar2 + ((uVar8 & 0xff) + 0x200) * 4) ^
            *(uint *)(puVar2 + ((uVar8 >> 0x18) + 0x300) * 4) ^
            *(uint *)(puVar2 + (uVar8 >> 0xe & 0x3fc)) ^
            *(uint *)(puVar2 + ((uVar8 >> 8 & 0xff) + 0x100) * 4);
    uVar10 = uVar5 ^ uVar10;
    uVar9 = uVar10 ^ uVar9;
    param_3[0x33] = uVar4;
    param_3[0x34] = uVar20;
    param_3[0x35] = uVar19;
    param_3[0x36] = uVar18;
    param_3[0x3b] = uVar9 ^ uVar4;
    param_3[0x3c] = 0;
    *(undefined1 *)(param_3 + 0x3c) = 0xe0;
    param_3[0x37] = uVar8;
    param_3[0x38] = uVar5;
    param_3[0x39] = uVar10;
    param_3[0x3a] = uVar9;
    return 0;
  }
  if (param_2 < 0x21) {
    if (param_2 == 0x10) {
LAB_0041798c:
      uVar3 = aes_encrypt_key128();
      return uVar3;
    }
    if (param_2 != 0x18) {
      return 1;
    }
  }
  else if (param_2 != 0xc0) {
    if (param_2 == 0x100) goto LAB_004170c4;
    if (param_2 != 0x80) {
      return 1;
    }
    goto LAB_0041798c;
  }
  uVar5 = (uint)param_1[3] | (uint)*param_1 << 0x18 | (uint)param_1[1] << 0x10 |
          (uint)param_1[2] << 8;
  *param_3 = uVar5;
  uVar26 = (uint)param_1[4] << 0x18 | (uint)param_1[5] << 0x10 | (uint)param_1[7] |
           (uint)param_1[6] << 8;
  param_3[1] = uVar26;
  uVar23 = (uint)param_1[8] << 0x18 | (uint)param_1[9] << 0x10 | (uint)param_1[0xb] |
           (uint)param_1[10] << 8;
  param_3[2] = uVar23;
  uVar22 = (uint)param_1[0xc] << 0x18 | (uint)param_1[0xd] << 0x10 | (uint)param_1[0xf] |
           (uint)param_1[0xe] << 8;
  param_3[3] = uVar22;
  uVar21 = (uint)param_1[0x10] << 0x18 | (uint)param_1[0x11] << 0x10 | (uint)param_1[0x13] |
           (uint)param_1[0x12] << 8;
  param_3[4] = uVar21;
  puVar2 = PTR_t_fl_00433100;
  puVar1 = PTR_t_rc_004330e4;
  uVar4 = (uint)param_1[0x14] << 0x18 | (uint)param_1[0x15] << 0x10 | (uint)param_1[0x17] |
          (uint)param_1[0x16] << 8;
  uVar5 = uVar5 ^ *(uint *)PTR_t_rc_004330e4 ^
          *(uint *)(PTR_t_fl_00433100 + (param_1[0x17] + 0x200) * 4) ^
          *(uint *)(PTR_t_fl_00433100 + (param_1[0x14] + 0x300) * 4) ^
          *(uint *)(PTR_t_fl_00433100 + (uint)param_1[0x15] * 4) ^
          *(uint *)(PTR_t_fl_00433100 + (param_1[0x16] + 0x100) * 4);
  uVar26 = uVar5 ^ uVar26;
  uVar23 = uVar26 ^ uVar23;
  uVar22 = uVar23 ^ uVar22;
  uVar21 = uVar22 ^ uVar21;
  uVar8 = uVar21 ^ uVar4;
  param_3[5] = uVar4;
  uVar20 = uVar5 ^ *(uint *)(puVar1 + 4) ^ *(uint *)(puVar2 + ((uVar8 & 0xff) + 0x200) * 4) ^
           *(uint *)(puVar2 + ((uVar8 >> 0x18) + 0x300) * 4) ^
           *(uint *)(puVar2 + (uVar8 >> 0xe & 0x3fc)) ^
           *(uint *)(puVar2 + ((uVar8 >> 8 & 0xff) + 0x100) * 4);
  uVar19 = uVar20 ^ uVar26;
  uVar18 = uVar19 ^ uVar23;
  uVar17 = uVar18 ^ uVar22;
  uVar16 = uVar17 ^ uVar21;
  uVar7 = uVar16 ^ uVar8;
  param_3[6] = uVar5;
  uVar25 = uVar20 ^ *(uint *)(puVar1 + 8) ^ *(uint *)(puVar2 + ((uVar7 & 0xff) + 0x200) * 4) ^
           *(uint *)(puVar2 + ((uVar7 >> 0x18) + 0x300) * 4) ^
           *(uint *)(puVar2 + (uVar7 >> 0xe & 0x3fc)) ^
           *(uint *)(puVar2 + ((uVar7 >> 8 & 0xff) + 0x100) * 4);
  uVar24 = uVar25 ^ uVar19;
  uVar15 = uVar24 ^ uVar18;
  uVar14 = uVar15 ^ uVar17;
  uVar13 = uVar14 ^ uVar16;
  uVar6 = uVar13 ^ uVar7;
  uVar12 = uVar25 ^ *(uint *)(puVar1 + 0xc) ^ *(uint *)(puVar2 + ((uVar6 & 0xff) + 0x200) * 4) ^
           *(uint *)(puVar2 + ((uVar6 >> 0x18) + 0x300) * 4) ^
           *(uint *)(puVar2 + (uVar6 >> 0xe & 0x3fc)) ^
           *(uint *)(puVar2 + ((uVar6 >> 8 & 0xff) + 0x100) * 4);
  uVar11 = uVar12 ^ uVar24;
  uVar10 = uVar11 ^ uVar15;
  uVar4 = uVar10 ^ uVar14;
  uVar9 = uVar4 ^ uVar13;
  uVar5 = uVar9 ^ uVar6;
  param_3[7] = uVar26;
  param_3[8] = uVar23;
  param_3[9] = uVar22;
  param_3[10] = uVar21;
  param_3[0xb] = uVar8;
  param_3[0xc] = uVar20;
  param_3[0xd] = uVar19;
  param_3[0xe] = uVar18;
  param_3[0xf] = uVar17;
  param_3[0x10] = uVar16;
  param_3[0x11] = uVar7;
  param_3[0x17] = uVar6;
  param_3[0x15] = uVar14;
  param_3[0x16] = uVar13;
  uVar8 = *(uint *)(puVar1 + 0x10);
  uVar7 = *(uint *)(puVar2 + ((uVar5 & 0xff) + 0x200) * 4);
  uVar6 = *(uint *)(puVar2 + ((uVar5 >> 0x18) + 0x300) * 4);
  param_3[0x18] = uVar12;
  uVar12 = uVar12 ^ uVar8 ^ uVar7 ^ uVar6 ^ *(uint *)(puVar2 + (uVar5 >> 0xe & 0x3fc)) ^
           *(uint *)(puVar2 + ((uVar5 >> 8 & 0xff) + 0x100) * 4);
  param_3[0x19] = uVar11;
  uVar11 = uVar12 ^ uVar11;
  uVar22 = uVar11 ^ uVar10;
  uVar21 = uVar22 ^ uVar4;
  uVar20 = uVar21 ^ uVar9;
  uVar7 = uVar20 ^ uVar5;
  uVar19 = uVar12 ^ *(uint *)(puVar1 + 0x14) ^ *(uint *)(puVar2 + ((uVar7 & 0xff) + 0x200) * 4) ^
           *(uint *)(puVar2 + ((uVar7 >> 0x18) + 0x300) * 4) ^
           *(uint *)(puVar2 + (uVar7 >> 0xe & 0x3fc)) ^
           *(uint *)(puVar2 + ((uVar7 >> 8 & 0xff) + 0x100) * 4);
  uVar18 = uVar19 ^ uVar11;
  uVar17 = uVar18 ^ uVar22;
  uVar16 = uVar17 ^ uVar21;
  param_3[0x12] = uVar25;
  uVar25 = uVar16 ^ uVar20;
  uVar6 = uVar25 ^ uVar7;
  param_3[0x14] = uVar15;
  param_3[0x13] = uVar24;
  uVar23 = uVar19 ^ *(uint *)(puVar1 + 0x18) ^ *(uint *)(puVar2 + ((uVar6 & 0xff) + 0x200) * 4) ^
           *(uint *)(puVar2 + ((uVar6 >> 0x18) + 0x300) * 4) ^
           *(uint *)(puVar2 + (uVar6 >> 0xe & 0x3fc)) ^
           *(uint *)(puVar2 + ((uVar6 >> 8 & 0xff) + 0x100) * 4);
  uVar15 = uVar23 ^ uVar18;
  uVar14 = uVar15 ^ uVar17;
  uVar13 = uVar14 ^ uVar16;
  uVar8 = uVar13 ^ uVar25 ^ uVar6;
  param_3[0x1a] = uVar10;
  param_3[0x1b] = uVar4;
  param_3[0x1c] = uVar9;
  uVar9 = *(uint *)(puVar1 + 0x1c);
  param_3[0x29] = uVar6;
  param_3[0x1d] = uVar5;
  param_3[0x23] = uVar7;
  uVar5 = *(uint *)(puVar2 + ((uVar8 & 0xff) + 0x200) * 4);
  uVar4 = *(uint *)(puVar2 + ((uVar8 >> 0x18) + 0x300) * 4);
  param_3[0x2a] = uVar23;
  uVar4 = uVar23 ^ uVar9 ^ uVar5 ^ uVar4 ^ *(uint *)(puVar2 + (uVar8 >> 0xe & 0x3fc)) ^
          *(uint *)(puVar2 + ((uVar8 >> 8 & 0xff) + 0x100) * 4);
  param_3[0x2b] = uVar15;
  uVar15 = uVar4 ^ uVar15;
  param_3[0x2c] = uVar14;
  uVar14 = uVar15 ^ uVar14;
  param_3[0x20] = uVar22;
  param_3[0x21] = uVar21;
  param_3[0x22] = uVar20;
  param_3[0x24] = uVar19;
  param_3[0x25] = uVar18;
  param_3[0x26] = uVar17;
  param_3[0x27] = uVar16;
  param_3[0x2e] = uVar13 ^ uVar25;
  param_3[0x33] = uVar14 ^ uVar13;
  param_3[0x3c] = 0;
  *(undefined1 *)(param_3 + 0x3c) = 0xc0;
  param_3[0x1e] = uVar12;
  param_3[0x1f] = uVar11;
  param_3[0x28] = uVar25;
  param_3[0x2d] = uVar13;
  param_3[0x2f] = uVar8;
  param_3[0x30] = uVar4;
  param_3[0x31] = uVar15;
  param_3[0x32] = uVar14;
  return 0;
}

