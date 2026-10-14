/* FUN_0041914c @ 0041914c */

undefined4 FUN_0041914c(byte *param_1,uint *param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
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
  int iVar26;
  int iVar27;
  uint uVar28;
  uint uVar29;
  int iVar30;
  int iVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  uint uVar40;
  uint uVar41;
  uint uVar42;
  uint uVar43;
  
  uVar40 = (uint)param_1[3] | (uint)*param_1 << 0x18 | (uint)param_1[1] << 0x10 |
           (uint)param_1[2] << 8;
  param_2[0x38] = uVar40;
  uVar28 = (uint)param_1[4] << 0x18 | (uint)param_1[5] << 0x10 | (uint)param_1[7] |
           (uint)param_1[6] << 8;
  param_2[0x39] = uVar28;
  uVar25 = (uint)param_1[8] << 0x18 | (uint)param_1[9] << 0x10 | (uint)param_1[0xb] |
           (uint)param_1[10] << 8;
  param_2[0x3a] = uVar25;
  uVar22 = (uint)param_1[0xc] << 0x18 | (uint)param_1[0xd] << 0x10 | (uint)param_1[0xf] |
           (uint)param_1[0xe] << 8;
  param_2[0x3b] = uVar22;
  puVar15 = PTR_t_im_00433138;
  bVar1 = param_1[0x10];
  bVar2 = param_1[0x11];
  bVar3 = param_1[0x13];
  bVar4 = param_1[0x12];
  param_2[0x34] =
       *(uint *)(PTR_t_im_00433138 + (bVar3 + 0x300) * 4) ^
       *(uint *)(PTR_t_im_00433138 + (uint)bVar1 * 4) ^
       *(uint *)(PTR_t_im_00433138 + (bVar2 + 0x100) * 4) ^
       *(uint *)(PTR_t_im_00433138 + (bVar4 + 0x200) * 4);
  bVar5 = param_1[0x14];
  bVar6 = param_1[0x15];
  bVar7 = param_1[0x17];
  bVar8 = param_1[0x16];
  param_2[0x35] =
       *(uint *)(puVar15 + (bVar7 + 0x300) * 4) ^ *(uint *)(puVar15 + (uint)bVar5 * 4) ^
       *(uint *)(puVar15 + (bVar6 + 0x100) * 4) ^ *(uint *)(puVar15 + (bVar8 + 0x200) * 4);
  bVar9 = param_1[0x18];
  bVar10 = param_1[0x19];
  bVar11 = param_1[0x1b];
  bVar12 = param_1[0x1a];
  param_2[0x36] =
       *(uint *)(puVar15 + (bVar11 + 0x300) * 4) ^ *(uint *)(puVar15 + (uint)bVar9 * 4) ^
       *(uint *)(puVar15 + (bVar10 + 0x100) * 4) ^ *(uint *)(puVar15 + (bVar12 + 0x200) * 4);
  puVar14 = PTR_t_fl_00433100;
  uVar23 = (uint)param_1[0x1c];
  uVar19 = (uint)param_1[0x1d];
  uVar16 = (uint)param_1[0x1e];
  uVar17 = (uint)param_1[0x1f];
  uVar29 = uVar40 ^ *(uint *)PTR_t_rc_004330e4 ^ *(uint *)(PTR_t_fl_00433100 + (uVar17 + 0x200) * 4)
           ^ *(uint *)(PTR_t_fl_00433100 + (uVar23 + 0x300) * 4) ^
           *(uint *)(PTR_t_fl_00433100 + uVar19 * 4) ^
           *(uint *)(PTR_t_fl_00433100 + (uVar16 + 0x100) * 4);
  uVar28 = uVar29 ^ uVar28;
  uVar25 = uVar28 ^ uVar25;
  uVar35 = *(uint *)(puVar15 + (uVar29 >> 0x18) * 4);
  uVar38 = *(uint *)(puVar15 + ((uVar29 & 0xff) + 0x300) * 4);
  uVar22 = uVar25 ^ uVar22;
  uVar33 = *(uint *)(puVar15 + ((uVar29 >> 0x10 & 0xff) + 0x100) * 4);
  uVar32 = *(uint *)(puVar15 + ((uVar29 >> 8 & 0xff) + 0x200) * 4);
  iVar26 = (uVar22 >> 0x18) * 4;
  uVar42 = *(uint *)(puVar15 + ((uVar28 & 0xff) + 0x300) * 4) ^
           *(uint *)(puVar15 + (uVar28 >> 0x18) * 4) ^
           *(uint *)(puVar15 + ((uVar28 >> 0x10 & 0xff) + 0x100) * 4) ^
           *(uint *)(puVar15 + ((uVar28 >> 8 & 0xff) + 0x200) * 4);
  iVar27 = ((uVar22 >> 8 & 0xff) + 0x200) * 4;
  iVar30 = ((uVar22 & 0xff) + 0x300) * 4;
  uVar20 = *(uint *)(puVar15 + ((uVar25 & 0xff) + 0x300) * 4) ^
           *(uint *)(puVar15 + (uVar25 >> 0x18) * 4) ^
           *(uint *)(puVar15 + ((uVar25 >> 0x10 & 0xff) + 0x100) * 4) ^
           *(uint *)(puVar15 + ((uVar25 >> 8 & 0xff) + 0x200) * 4);
  iVar31 = ((uVar22 >> 0x10 & 0xff) + 0x100) * 4;
  uVar21 = *(uint *)(PTR_t_fl_00433100 + iVar26) ^ *(uint *)(PTR_t_fl_00433100 + iVar30) ^
           ((uint)bVar1 << 0x18 | (uint)bVar2 << 0x10 | (uint)bVar3 | (uint)bVar4 << 8) ^
           *(uint *)(PTR_t_fl_00433100 + iVar31) ^ *(uint *)(PTR_t_fl_00433100 + iVar27);
  uVar18 = uVar21 ^ ((uint)bVar5 << 0x18 | (uint)bVar6 << 0x10 | (uint)bVar7 | (uint)bVar8 << 8);
  uVar40 = uVar18 ^ ((uint)bVar9 << 0x18 | (uint)bVar10 << 0x10 | (uint)bVar11 | (uint)bVar12 << 8);
  uVar24 = uVar40 ^ (uVar23 << 0x18 | uVar19 << 0x10 | uVar17 | uVar16 << 8);
  param_2[0x37] =
       *(uint *)(puVar15 + (uVar17 + 0x300) * 4) ^ *(uint *)(puVar15 + uVar23 * 4) ^
       *(uint *)(puVar15 + (uVar19 + 0x100) * 4) ^ *(uint *)(puVar15 + (uVar16 + 0x200) * 4);
  uVar19 = uVar24 >> 8 & 0xff;
  uVar17 = uVar24 >> 0x10 & 0xff;
  uVar16 = *(uint *)(puVar14 + ((uVar24 & 0xff) + 0x200) * 4) ^
           *(uint *)(puVar14 + ((uVar24 >> 0x18) + 0x300) * 4) ^ *(uint *)(PTR_t_rc_004330e4 + 4) ^
           *(uint *)(puVar14 + uVar17 * 4) ^ *(uint *)(puVar14 + (uVar19 + 0x100) * 4);
  uVar32 = uVar38 ^ uVar35 ^ uVar33 ^ uVar32;
  param_2[0x30] = uVar32;
  param_2[0x31] = uVar42;
  param_2[0x32] = uVar20;
  uVar28 = uVar16 ^ uVar29 ^ uVar28;
  uVar23 = *(uint *)(puVar15 + (uVar40 >> 0x18) * 4);
  uVar35 = *(uint *)(puVar15 + ((uVar40 & 0xff) + 0x300) * 4);
  uVar25 = uVar28 ^ uVar25;
  uVar38 = *(uint *)(puVar15 + ((uVar40 >> 0x10 & 0xff) + 0x100) * 4);
  uVar33 = *(uint *)(puVar15 + ((uVar40 >> 8 & 0xff) + 0x200) * 4);
  uVar22 = uVar25 ^ uVar22;
  uVar43 = *(uint *)(puVar15 + iVar30) ^ *(uint *)(puVar15 + iVar26) ^ *(uint *)(puVar15 + iVar31) ^
           *(uint *)(puVar15 + iVar27);
  uVar41 = *(uint *)(puVar15 + (uVar16 >> 0x18) * 4) ^
           *(uint *)(puVar15 + ((uVar16 & 0xff) + 0x300) * 4) ^ uVar32 ^
           *(uint *)(puVar15 + ((uVar16 >> 0x10 & 0xff) + 0x100) * 4) ^
           *(uint *)(puVar15 + ((uVar16 >> 8 & 0xff) + 0x200) * 4);
  uVar32 = *(uint *)(puVar15 + ((uVar24 & 0xff) + 0x300) * 4) ^
           *(uint *)(puVar15 + (uVar24 >> 0x18) * 4) ^ *(uint *)(puVar15 + (uVar17 + 0x100) * 4) ^
           *(uint *)(puVar15 + (uVar19 + 0x200) * 4);
  uVar39 = *(uint *)(puVar15 + ((uVar21 & 0xff) + 0x300) * 4) ^
           *(uint *)(puVar15 + (uVar21 >> 0x18) * 4) ^
           *(uint *)(puVar15 + ((uVar21 >> 0x10 & 0xff) + 0x100) * 4) ^
           *(uint *)(puVar15 + ((uVar21 >> 8 & 0xff) + 0x200) * 4);
  uVar34 = *(uint *)(puVar15 + ((uVar18 & 0xff) + 0x300) * 4) ^
           *(uint *)(puVar15 + (uVar18 >> 0x18) * 4) ^
           *(uint *)(puVar15 + ((uVar18 >> 0x10 & 0xff) + 0x100) * 4) ^
           *(uint *)(puVar15 + ((uVar18 >> 8 & 0xff) + 0x200) * 4);
  param_2[0x33] = uVar43;
  param_2[0x2c] = uVar39;
  param_2[0x2d] = uVar34;
  uVar36 = *(uint *)(puVar14 + ((uVar22 & 0xff) + 0x300) * 4) ^
           *(uint *)(puVar14 + (uVar22 >> 0x18) * 4) ^
           *(uint *)(puVar14 + ((uVar22 >> 0x10 & 0xff) + 0x100) * 4) ^
           *(uint *)(puVar14 + ((uVar22 >> 8 & 0xff) + 0x200) * 4);
  uVar18 = uVar36 ^ uVar21 ^ uVar18;
  uVar40 = uVar18 ^ uVar40;
  uVar24 = uVar40 ^ uVar24;
  param_2[0x2f] = uVar32;
  uVar17 = *(uint *)(puVar14 + ((uVar24 & 0xff) + 0x200) * 4) ^
           *(uint *)(puVar14 + ((uVar24 >> 0x18) + 0x300) * 4) ^ *(uint *)(PTR_t_rc_004330e4 + 8) ^
           *(uint *)(puVar14 + (uVar24 >> 0xe & 0x3fc)) ^
           *(uint *)(puVar14 + ((uVar24 >> 8 & 0xff) + 0x100) * 4);
  uVar19 = uVar17 ^ uVar16 ^ uVar29;
  uVar28 = uVar19 ^ uVar28;
  uVar25 = uVar28 ^ uVar25;
  uVar22 = uVar25 ^ uVar22;
  uVar33 = uVar35 ^ uVar23 ^ uVar38 ^ uVar33;
  uVar16 = *(uint *)(puVar14 + ((uVar22 & 0xff) + 0x300) * 4) ^
           *(uint *)(puVar14 + (uVar22 >> 0x18) * 4) ^
           *(uint *)(puVar14 + ((uVar22 >> 0x10 & 0xff) + 0x100) * 4) ^
           *(uint *)(puVar14 + ((uVar22 >> 8 & 0xff) + 0x200) * 4);
  uVar21 = uVar16 ^ uVar36 ^ uVar21;
  uVar29 = *(uint *)(puVar15 + (uVar36 >> 0x18) * 4) ^
           *(uint *)(puVar15 + ((uVar36 & 0xff) + 0x300) * 4) ^ uVar39 ^
           *(uint *)(puVar15 + ((uVar36 >> 0x10 & 0xff) + 0x100) * 4) ^
           *(uint *)(puVar15 + ((uVar36 >> 8 & 0xff) + 0x200) * 4);
  uVar37 = *(uint *)(puVar15 + (uVar16 >> 0x18) * 4) ^
           *(uint *)(puVar15 + ((uVar16 & 0xff) + 0x300) * 4) ^ uVar29 ^
           *(uint *)(puVar15 + ((uVar16 >> 0x10 & 0xff) + 0x100) * 4) ^
           *(uint *)(puVar15 + ((uVar16 >> 8 & 0xff) + 0x200) * 4);
  uVar18 = uVar21 ^ uVar18;
  uVar36 = *(uint *)(puVar15 + (uVar17 >> 0x18) * 4) ^
           *(uint *)(puVar15 + ((uVar17 & 0xff) + 0x300) * 4) ^ uVar41 ^
           *(uint *)(puVar15 + ((uVar17 >> 0x10 & 0xff) + 0x100) * 4) ^
           *(uint *)(puVar15 + ((uVar17 >> 8 & 0xff) + 0x200) * 4);
  uVar34 = uVar29 ^ uVar34;
  param_2[0x28] = uVar41;
  uVar40 = uVar18 ^ uVar40;
  uVar41 = uVar41 ^ uVar42;
  uVar24 = uVar40 ^ uVar24;
  uVar20 = uVar41 ^ uVar20;
  uVar38 = uVar36 ^ uVar41;
  param_2[0x2e] = uVar33;
  uVar33 = uVar34 ^ uVar33;
  uVar35 = uVar38 ^ uVar20;
  uVar43 = uVar20 ^ uVar43;
  uVar32 = uVar33 ^ uVar32;
  uVar23 = uVar35 ^ uVar43;
  param_2[0x2a] = uVar20;
  param_2[0x2b] = uVar43;
  puVar13 = PTR_t_rc_004330e4;
  param_2[0x29] = uVar41;
  param_2[0x27] = uVar32;
  uVar16 = *(uint *)(puVar14 + ((uVar24 >> 0x18) + 0x300) * 4);
  uVar17 = *(uint *)(puVar14 + ((uVar24 & 0xff) + 0x200) * 4);
  param_2[0x24] = uVar29;
  uVar20 = *(uint *)(puVar13 + 0xc);
  param_2[0x23] = uVar23;
  uVar41 = uVar17 ^ uVar16 ^ uVar20 ^ *(uint *)(puVar14 + (uVar24 >> 0xe & 0x3fc)) ^
           *(uint *)(puVar14 + ((uVar24 >> 8 & 0xff) + 0x100) * 4);
  uVar19 = uVar41 ^ uVar19;
  uVar28 = uVar19 ^ uVar28;
  uVar25 = uVar28 ^ uVar25;
  uVar22 = uVar25 ^ uVar22;
  uVar29 = *(uint *)(puVar14 + ((uVar22 & 0xff) + 0x300) * 4) ^
           *(uint *)(puVar14 + (uVar22 >> 0x18) * 4) ^
           *(uint *)(puVar14 + ((uVar22 >> 0x10 & 0xff) + 0x100) * 4) ^
           *(uint *)(puVar14 + ((uVar22 >> 8 & 0xff) + 0x200) * 4);
  uVar21 = uVar29 ^ uVar21;
  uVar18 = uVar21 ^ uVar18;
  uVar40 = uVar18 ^ uVar40;
  uVar24 = uVar40 ^ uVar24;
  uVar39 = *(uint *)(puVar14 + ((uVar24 & 0xff) + 0x200) * 4);
  uVar16 = *(uint *)(puVar14 + ((uVar24 >> 0x18) + 0x300) * 4);
  uVar42 = *(uint *)(puVar13 + 0x10);
  uVar20 = *(uint *)(puVar14 + (uVar24 >> 0xe & 0x3fc));
  uVar17 = *(uint *)(puVar14 + ((uVar24 >> 8 & 0xff) + 0x100) * 4);
  uVar43 = *(uint *)(puVar15 + (uVar29 >> 0x18) * 4);
  param_2[0x25] = uVar34;
  param_2[0x26] = uVar33;
  param_2[0x20] = uVar36;
  param_2[0x21] = uVar38;
  param_2[0x22] = uVar35;
  param_2[0x1c] = uVar37;
  uVar17 = uVar39 ^ uVar16 ^ uVar42 ^ uVar20 ^ uVar17;
  uVar19 = uVar17 ^ uVar19;
  uVar16 = *(uint *)(puVar15 + (uVar41 >> 0x18) * 4) ^
           *(uint *)(puVar15 + ((uVar41 & 0xff) + 0x300) * 4) ^ uVar36 ^
           *(uint *)(puVar15 + ((uVar41 >> 0x10 & 0xff) + 0x100) * 4) ^
           *(uint *)(puVar15 + ((uVar41 >> 8 & 0xff) + 0x200) * 4);
  uVar34 = uVar37 ^ uVar34;
  uVar28 = uVar19 ^ uVar28;
  uVar25 = uVar28 ^ uVar25;
  uVar22 = uVar25 ^ uVar22;
  uVar20 = *(uint *)(puVar15 + (uVar17 >> 0x18) * 4) ^
           *(uint *)(puVar15 + ((uVar17 & 0xff) + 0x300) * 4) ^ uVar16 ^
           *(uint *)(puVar15 + ((uVar17 >> 0x10 & 0xff) + 0x100) * 4) ^
           *(uint *)(puVar15 + ((uVar17 >> 8 & 0xff) + 0x200) * 4);
  uVar17 = uVar43 ^ *(uint *)(puVar15 + ((uVar29 & 0xff) + 0x300) * 4) ^ uVar37 ^
           *(uint *)(puVar15 + ((uVar29 >> 0x10 & 0xff) + 0x100) * 4) ^
           *(uint *)(puVar15 + ((uVar29 >> 8 & 0xff) + 0x200) * 4);
  uVar33 = uVar34 ^ uVar33;
  uVar36 = uVar17 ^ uVar34;
  uVar38 = uVar16 ^ uVar38;
  uVar39 = uVar36 ^ uVar33;
  uVar35 = uVar38 ^ uVar35;
  uVar32 = uVar33 ^ uVar32;
  uVar29 = uVar39 ^ uVar32;
  uVar23 = uVar35 ^ uVar23;
  param_2[0x1d] = uVar34;
  param_2[0x1e] = uVar33;
  param_2[0x1f] = uVar32;
  param_2[0x18] = uVar16;
  param_2[0x19] = uVar38;
  param_2[0x1a] = uVar35;
  param_2[0x1b] = uVar23;
  param_2[0x14] = uVar17;
  param_2[0x15] = uVar36;
  param_2[0x16] = uVar39;
  param_2[0x17] = uVar29;
  param_2[0x10] = uVar20;
  uVar33 = *(uint *)(puVar14 + ((uVar22 & 0xff) + 0x300) * 4) ^
           *(uint *)(puVar14 + (uVar22 >> 0x18) * 4) ^
           *(uint *)(puVar14 + ((uVar22 >> 0x10 & 0xff) + 0x100) * 4) ^
           *(uint *)(puVar14 + ((uVar22 >> 8 & 0xff) + 0x200) * 4);
  uVar40 = uVar33 ^ uVar21 ^ uVar18 ^ uVar40;
  uVar24 = uVar40 ^ uVar24;
  uVar16 = *(uint *)(puVar14 + ((uVar24 & 0xff) + 0x200) * 4) ^
           *(uint *)(puVar14 + ((uVar24 >> 0x18) + 0x300) * 4) ^ *(uint *)(PTR_t_rc_004330e4 + 0x14)
           ^ *(uint *)(puVar14 + (uVar24 >> 0xe & 0x3fc)) ^
           *(uint *)(puVar14 + ((uVar24 >> 8 & 0xff) + 0x100) * 4);
  uVar19 = uVar16 ^ uVar19;
  uVar28 = uVar19 ^ uVar28;
  uVar25 = uVar28 ^ uVar25;
  uVar22 = uVar25 ^ uVar22;
  uVar21 = *(uint *)(puVar14 + ((uVar22 & 0xff) + 0x300) * 4) ^
           *(uint *)(puVar14 + (uVar22 >> 0x18) * 4) ^
           *(uint *)(puVar14 + ((uVar22 >> 0x10 & 0xff) + 0x100) * 4) ^
           *(uint *)(puVar14 + ((uVar22 >> 8 & 0xff) + 0x200) * 4);
  uVar24 = uVar18 ^ uVar40 ^ uVar24 ^ uVar21;
  uVar18 = *(uint *)(puVar15 + (uVar33 >> 0x18) * 4) ^
           *(uint *)(puVar15 + ((uVar33 & 0xff) + 0x300) * 4) ^ uVar17 ^
           *(uint *)(puVar15 + ((uVar33 >> 0x10 & 0xff) + 0x100) * 4) ^
           *(uint *)(puVar15 + ((uVar33 >> 8 & 0xff) + 0x200) * 4);
  uVar40 = *(uint *)(puVar15 + (uVar16 >> 0x18) * 4) ^
           *(uint *)(puVar15 + ((uVar16 & 0xff) + 0x300) * 4) ^ uVar20 ^
           *(uint *)(puVar15 + ((uVar16 >> 0x10 & 0xff) + 0x100) * 4) ^
           *(uint *)(puVar15 + ((uVar16 >> 8 & 0xff) + 0x200) * 4);
  uVar20 = uVar20 ^ uVar38;
  uVar17 = uVar40 ^ uVar20;
  uVar35 = uVar20 ^ uVar35;
  uVar16 = uVar17 ^ uVar35;
  uVar23 = uVar35 ^ uVar23;
  uVar21 = *(uint *)(puVar15 + (uVar21 >> 0x18) * 4) ^
           *(uint *)(puVar15 + ((uVar21 & 0xff) + 0x300) * 4) ^ uVar18 ^
           *(uint *)(puVar15 + ((uVar21 >> 0x10 & 0xff) + 0x100) * 4) ^
           *(uint *)(puVar15 + ((uVar21 >> 8 & 0xff) + 0x200) * 4);
  uVar36 = uVar18 ^ uVar36;
  param_2[10] = uVar16;
  puVar13 = PTR_t_rc_004330e4;
  uVar39 = uVar36 ^ uVar39;
  uVar29 = uVar39 ^ uVar29;
  param_2[8] = uVar40;
  param_2[9] = uVar17;
  uVar17 = uVar19 ^ *(uint *)(puVar13 + 0x18) ^ *(uint *)(puVar14 + ((uVar24 & 0xff) + 0x200) * 4) ^
           *(uint *)(puVar14 + ((uVar24 >> 0x18) + 0x300) * 4) ^
           *(uint *)(puVar14 + (uVar24 >> 0xe & 0x3fc)) ^
           *(uint *)(puVar14 + ((uVar24 >> 8 & 0xff) + 0x100) * 4);
  param_2[0xd] = uVar36;
  uVar28 = uVar17 ^ uVar28;
  uVar36 = uVar21 ^ uVar36;
  param_2[0xe] = uVar39;
  uVar25 = uVar28 ^ uVar25;
  uVar39 = uVar36 ^ uVar39;
  param_2[0xf] = uVar29;
  param_2[0xb] = uVar16 ^ uVar23;
  param_2[7] = uVar39 ^ uVar29;
  param_2[0x11] = uVar20;
  param_2[0x12] = uVar35;
  param_2[0x13] = uVar23;
  param_2[0xc] = uVar18;
  param_2[4] = uVar21;
  param_2[3] = uVar25 ^ uVar22;
  param_2[0x3c] = 0;
  *(undefined1 *)(param_2 + 0x3c) = 0xe0;
  param_2[5] = uVar36;
  param_2[6] = uVar39;
  *param_2 = uVar17;
  param_2[1] = uVar28;
  param_2[2] = uVar25;
  return 0;
}

