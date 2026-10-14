/* FUN_004086fc @ 004086fc */

void FUN_004086fc(int param_1,byte *param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  uint *puVar6;
  int *piVar7;
  uint *puVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  undefined4 uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  int iVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint local_328 [177];
  uint local_64;
  uint local_60;
  uint local_5c;
  uint local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  
  iVar23 = 0;
  do {
    uVar13 = *(undefined4 *)(param_1 + iVar23 + 8);
    iVar5 = iVar23 + 8;
    *(undefined4 *)((int)local_328 + iVar23 + 4) = *(undefined4 *)(param_1 + iVar23 + 0xc);
    *(undefined4 *)((int)local_328 + iVar23) = uVar13;
    iVar23 = iVar5;
  } while (iVar5 != 0x40);
  puVar6 = local_328 + 0x10;
  puVar8 = puVar6;
  do {
    bVar1 = param_2[4];
    bVar2 = param_2[7];
    bVar3 = param_2[5];
    bVar4 = param_2[6];
    *puVar8 = (uint)*param_2 << 0x18 | (uint)param_2[1] << 0x10 | (uint)param_2[2] << 8 |
              (uint)param_2[3];
    puVar8[1] = (uint)bVar2 | (uint)bVar1 << 0x18 | (uint)bVar3 << 0x10 | (uint)bVar4 << 8;
    puVar8 = puVar8 + 2;
    param_2 = param_2 + 8;
  } while (puVar8 != local_328 + 0x30);
  puVar8 = local_328 + 0x2c;
  do {
    uVar10 = *puVar8;
    uVar12 = puVar8[1];
    uVar9 = puVar8[-0x1a];
    uVar11 = puVar8[-0x19];
    uVar15 = puVar8[-0x1b] + puVar8[-9];
    uVar14 = uVar15 + ((uVar10 >> 0x1d | uVar12 << 3) ^ (uVar10 << 0xd | uVar12 >> 0x13) ^
                      (uVar10 << 0x1a | uVar12 >> 6));
    uVar16 = uVar14 + ((uVar9 << 0x18 | uVar11 >> 8) ^ (uVar9 << 0x1f | uVar11 >> 1) ^
                      (uVar9 << 0x19 | uVar11 >> 7));
    puVar8[4] = (uint)(uVar16 < uVar14) +
                (uint)(uVar14 < uVar15) +
                (uint)(uVar15 < puVar8[-0x1b]) + puVar8[-0x1c] + puVar8[-10] +
                ((uVar12 >> 0x1d | uVar10 << 3) ^ (uVar12 << 0xd | uVar10 >> 0x13) ^ uVar10 >> 6) +
                ((uVar11 << 0x18 | uVar9 >> 8) ^ (uVar11 << 0x1f | uVar9 >> 1) ^ uVar9 >> 7);
    puVar8[5] = uVar16;
    puVar8 = puVar8 + 2;
  } while (puVar8 != local_328 + 0xac);
  piVar7 = &DAT_0041d750;
  do {
    local_328[0xb0] = local_328[9] >> 0x12;
    uVar10 = puVar6[1] + piVar7[1];
    uVar9 = uVar10 + local_328[0xf];
    local_40 = local_328[0] << 4 | local_328[1] >> 0x1c;
    local_4c = local_328[3] | local_328[1];
    local_48 = local_328[0] >> 7 | local_328[1] << 0x19;
    uVar11 = (local_328[3] | local_328[1]) & local_328[5] | local_328[3] & local_328[1];
    local_5c = local_328[1] >> 2 | local_328[0] << 0x1e;
    local_44 = local_328[1] << 4 | local_328[0] >> 0x1c;
    local_54 = (uint)(uVar9 < uVar10) +
               (uint)(uVar10 < puVar6[1]) + *puVar6 + *piVar7 + local_328[0xe] +
               ((local_328[9] << 0xe | local_328[8] >> 0x12) ^
                (local_328[9] << 0x12 | local_328[8] >> 0xe) ^
               (local_328[9] >> 9 | local_328[8] << 0x17));
    local_58 = (local_328[0] >> 2 | local_328[1] << 0x1e) ^ local_40;
    local_50 = (local_328[0xd] ^ local_328[0xb]) & local_328[9];
    local_64 = local_5c ^ local_44;
    uVar14 = uVar9 + ((local_328[8] << 0xe | local_328[9] >> 0x12) ^
                      (local_328[8] << 0x12 | local_328[9] >> 0xe) ^
                     (local_328[8] >> 9 | local_328[9] << 0x17));
    uVar10 = uVar14 + (local_50 ^ local_328[0xd]);
    local_328[0xb0] = (uVar14 < uVar9) + local_54;
    local_60 = (uint)(uVar10 < uVar14);
    uVar12 = uVar11 + (local_58 ^ local_48);
    iVar23 = (uint)(uVar10 < uVar14) +
             local_328[0xb0] + ((local_328[0xc] ^ local_328[10]) & local_328[8] ^ local_328[0xc]);
    uVar19 = uVar12 + uVar10;
    uVar9 = uVar10 + local_328[7];
    local_60 = (uint)(uVar19 < uVar12) +
               (uint)(uVar12 < uVar11) +
               ((local_328[2] | local_328[0]) & local_328[4] | local_328[2] & local_328[0]) +
               (local_64 ^ (local_328[1] >> 7 | local_328[0] << 0x19)) + iVar23;
    uVar10 = (uint)(uVar9 < uVar10) + iVar23 + local_328[6];
    uVar12 = puVar6[3] + piVar7[3];
    uVar11 = uVar12 + local_328[0xd];
    local_40 = uVar9 & (local_328[0xb] ^ local_328[9]) ^ local_328[0xb];
    local_44 = uVar10 & (local_328[10] ^ local_328[8]);
    local_3c = uVar19 | local_328[1];
    local_38 = uVar19 >> 2 | local_60 * 0x40000000;
    local_34 = uVar19 * 0x10 | local_60 >> 0x1c;
    local_4c = uVar10 >> 9 | uVar9 * 0x800000;
    local_58 = uVar9 * 0x40000 | uVar10 >> 0xe;
    local_30 = local_60 >> 7 | uVar19 * 0x2000000;
    local_50 = (uVar10 * 0x4000 | uVar9 >> 0x12) ^ (uVar10 * 0x40000 | uVar9 >> 0xe);
    uVar15 = (uVar19 | local_328[1]) & local_328[3] | uVar19 & local_328[1];
    local_48 = (local_60 >> 2 | uVar19 * 0x40000000) ^ (local_60 * 0x10 | uVar19 >> 0x1c);
    local_328[0xb0] =
         (uint)(uVar11 < uVar12) +
         (uint)(uVar12 < puVar6[3]) + puVar6[2] + piVar7[2] + local_328[0xc] +
         (local_44 ^ local_328[10]);
    local_40 = uVar11 + local_40;
    local_5c = (uVar9 * 0x4000 | uVar10 >> 0x12) ^ local_58;
    local_54 = local_60 | local_328[0];
    local_64 = local_50 ^ local_4c;
    uVar12 = uVar15 + (local_48 ^ local_30);
    local_64 = local_40 + local_64;
    iVar23 = (uint)(local_64 < local_40) +
             (local_40 < uVar11) + local_328[0xb0] + (local_5c ^ (uVar9 >> 9 | uVar10 * 0x800000));
    uVar17 = uVar12 + local_64;
    uVar14 = puVar6[5] + piVar7[5];
    uVar11 = local_64 + local_328[5];
    uVar24 = (uint)(uVar17 < uVar12) +
             (uint)(uVar12 < uVar15) +
             ((local_60 | local_328[0]) & local_328[2] | local_60 & local_328[0]) +
             (local_38 ^ local_34 ^ (uVar19 >> 7 | local_60 * 0x2000000)) + iVar23;
    uVar12 = (uint)(uVar11 < local_64) + iVar23 + local_328[4];
    uVar15 = uVar14 + local_328[0xb];
    local_40 = uVar11 & (uVar9 ^ local_328[9]) ^ local_328[9];
    local_44 = uVar12 & (uVar10 ^ local_328[8]);
    local_58 = uVar11 * 0x40000 | uVar12 >> 0xe;
    local_50 = (uVar12 * 0x4000 | uVar11 >> 0x12) ^ (uVar12 * 0x40000 | uVar11 >> 0xe);
    local_48 = (uVar24 >> 2 | uVar17 * 0x40000000) ^ (uVar24 * 0x10 | uVar17 >> 0x1c);
    local_3c = uVar17 | uVar19;
    local_4c = uVar12 >> 9 | uVar11 * 0x800000;
    local_34 = uVar17 * 0x10 | uVar24 >> 0x1c;
    local_38 = uVar17 >> 2 | uVar24 * 0x40000000;
    local_30 = uVar24 >> 7 | uVar17 * 0x2000000;
    local_54 = uVar24 | local_60;
    uVar25 = (uVar17 | uVar19) & local_328[1] | uVar17 & uVar19;
    local_328[0xb0] =
         (uint)(uVar15 < uVar14) +
         (uint)(uVar14 < puVar6[5]) + puVar6[4] + piVar7[4] + local_328[10] +
         (local_44 ^ local_328[8]);
    local_5c = (uVar11 * 0x4000 | uVar12 >> 0x12) ^ local_58;
    local_40 = uVar15 + local_40;
    local_64 = local_50 ^ local_4c;
    uVar21 = uVar25 + (local_48 ^ local_30);
    local_64 = local_40 + local_64;
    uVar14 = local_64 + local_328[3];
    iVar23 = (uint)(local_64 < local_40) +
             (local_40 < uVar15) + local_328[0xb0] + (local_5c ^ (uVar11 >> 9 | uVar12 * 0x800000));
    uVar16 = puVar6[7] + piVar7[7];
    uVar15 = (uint)(uVar14 < local_64) + iVar23 + local_328[2];
    uVar18 = uVar21 + local_64;
    uVar22 = (uint)(uVar18 < uVar21) +
             (uint)(uVar21 < uVar25) +
             ((uVar24 | local_60) & local_328[0] | uVar24 & local_60) +
             (local_38 ^ local_34 ^ (uVar17 >> 7 | uVar24 * 0x2000000)) + iVar23;
    uVar21 = uVar16 + local_328[9];
    local_44 = uVar15 & (uVar12 ^ uVar10);
    local_40 = uVar14 & (uVar11 ^ uVar9) ^ uVar9;
    local_3c = uVar18 | uVar17;
    local_38 = uVar18 >> 2 | uVar22 * 0x40000000;
    local_58 = uVar14 * 0x40000 | uVar15 >> 0xe;
    local_4c = uVar15 >> 9 | uVar14 * 0x800000;
    local_48 = (uVar22 >> 2 | uVar18 * 0x40000000) ^ (uVar22 * 0x10 | uVar18 >> 0x1c);
    local_34 = uVar18 * 0x10 | uVar22 >> 0x1c;
    local_54 = uVar22 | uVar24;
    uVar26 = (uVar18 | uVar17) & uVar19 | uVar18 & uVar17;
    local_50 = (uVar15 * 0x4000 | uVar14 >> 0x12) ^ (uVar15 * 0x40000 | uVar14 >> 0xe);
    local_328[0xb0] =
         (uint)(uVar21 < uVar16) + (uint)(uVar16 < puVar6[7]) + puVar6[6] + piVar7[6] + local_328[8]
         + (local_44 ^ uVar10);
    local_30 = uVar22 >> 7 | uVar18 * 0x2000000;
    local_5c = (uVar14 * 0x4000 | uVar15 >> 0x12) ^ local_58;
    local_40 = uVar21 + local_40;
    local_64 = local_50 ^ local_4c;
    local_64 = local_40 + local_64;
    uVar20 = uVar26 + (local_48 ^ local_30);
    uVar16 = local_64 + local_328[1];
    iVar23 = (uint)(local_64 < local_40) +
             (local_40 < uVar21) + local_328[0xb0] + (local_5c ^ (uVar14 >> 9 | uVar15 * 0x800000));
    uVar25 = puVar6[9] + piVar7[9];
    uVar21 = (uint)(uVar16 < local_64) + iVar23 + local_328[0];
    uVar27 = uVar20 + local_64;
    uVar20 = (uint)(uVar27 < uVar20) +
             (uint)(uVar20 < uVar26) +
             ((uVar22 | uVar24) & local_60 | uVar22 & uVar24) +
             (local_38 ^ local_34 ^ (uVar18 >> 7 | uVar22 * 0x2000000)) + iVar23;
    uVar9 = uVar25 + uVar9;
    local_44 = uVar21 & (uVar15 ^ uVar12);
    local_40 = uVar16 & (uVar14 ^ uVar11) ^ uVar11;
    local_58 = uVar16 * 0x40000 | uVar21 >> 0xe;
    local_3c = uVar27 | uVar18;
    local_4c = uVar21 >> 9 | uVar16 * 0x800000;
    local_38 = uVar27 >> 2 | uVar20 * 0x40000000;
    local_50 = (uVar21 * 0x4000 | uVar16 >> 0x12) ^ (uVar21 * 0x40000 | uVar16 >> 0xe);
    local_34 = uVar27 * 0x10 | uVar20 >> 0x1c;
    local_48 = (uVar20 >> 2 | uVar27 * 0x40000000) ^ (uVar20 * 0x10 | uVar27 >> 0x1c);
    local_30 = uVar20 >> 7 | uVar27 * 0x2000000;
    local_328[0xb0] =
         (uint)(uVar9 < uVar25) + (uint)(uVar25 < puVar6[9]) + puVar6[8] + piVar7[8] + uVar10 +
         (local_44 ^ uVar12);
    local_54 = uVar20 | uVar22;
    uVar26 = (uVar27 | uVar18) & uVar17 | uVar27 & uVar18;
    local_5c = (uVar16 * 0x4000 | uVar21 >> 0x12) ^ local_58;
    local_64 = local_50 ^ local_4c;
    local_40 = uVar9 + local_40;
    uVar25 = uVar26 + (local_48 ^ local_30);
    local_64 = local_40 + local_64;
    uVar10 = puVar6[0xb] + piVar7[0xb];
    local_328[0xf] = local_64 + uVar19;
    iVar23 = (uint)(local_64 < local_40) +
             (local_40 < uVar9) + local_328[0xb0] + (local_5c ^ (uVar16 >> 9 | uVar21 * 0x800000));
    local_328[7] = uVar25 + local_64;
    local_328[0xe] = (uint)(local_328[0xf] < local_64) + iVar23 + local_60;
    local_328[6] = (uint)(local_328[7] < uVar25) +
                   (uint)(uVar25 < uVar26) +
                   ((uVar20 | uVar22) & uVar24 | uVar20 & uVar22) +
                   (local_38 ^ local_34 ^ (uVar27 >> 7 | uVar20 * 0x2000000)) + iVar23;
    local_30 = local_328[6] * 0x10 | local_328[7] >> 0x1c;
    uVar11 = uVar10 + uVar11;
    local_44 = local_328[0xe] & (uVar21 ^ uVar15);
    local_40 = local_328[0xf] & (uVar16 ^ uVar14) ^ uVar14;
    local_3c = local_328[7] | uVar27;
    local_38 = local_328[7] >> 2 | local_328[6] * 0x40000000;
    local_4c = local_328[0xe] >> 9 | local_328[0xf] * 0x800000;
    local_34 = local_328[7] * 0x10 | local_328[6] >> 0x1c;
    local_50 = (local_328[0xe] * 0x4000 | local_328[0xf] >> 0x12) ^
               (local_328[0xe] * 0x40000 | local_328[0xf] >> 0xe);
    local_48 = (local_328[6] >> 2 | local_328[7] * 0x40000000) ^ local_30;
    local_40 = uVar11 + local_40;
    uVar9 = (local_328[7] | uVar27) & uVar18 | local_328[7] & uVar27;
    local_58 = (local_328[0xf] * 0x4000 | local_328[0xe] >> 0x12) ^
               (local_328[0xf] * 0x40000 | local_328[0xe] >> 0xe);
    local_328[0xb0] = local_50 ^ local_4c;
    local_54 = local_328[6] | uVar20;
    local_64 = local_48 ^ (local_328[6] >> 7 | local_328[7] * 0x2000000);
    local_60 = (uint)(local_40 < uVar11) +
               (uint)(uVar11 < uVar10) +
               (uint)(uVar10 < puVar6[0xb]) + puVar6[10] + piVar7[10] + uVar12 + (local_44 ^ uVar15)
    ;
    local_5c = local_58 ^ (local_328[0xf] >> 9 | local_328[0xe] * 0x800000);
    local_328[0xb0] = local_40 + local_328[0xb0];
    local_64 = uVar9 + local_64;
    local_328[0xd] = local_328[0xb0] + uVar17;
    iVar23 = (uint)(local_328[0xb0] < local_40) + local_60 + local_5c;
    local_328[5] = local_64 + local_328[0xb0];
    local_328[0xc] = (uint)(local_328[0xd] < local_328[0xb0]) + iVar23 + uVar24;
    uVar10 = puVar6[0xd] + piVar7[0xd];
    local_328[4] = (uint)(local_328[5] < local_64) +
                   (uint)(local_64 < uVar9) +
                   ((local_328[6] | uVar20) & uVar22 | local_328[6] & uVar20) +
                   (local_38 ^ local_34 ^ (local_328[7] >> 7 | local_328[6] * 0x2000000)) + iVar23;
    uVar14 = uVar10 + uVar14;
    local_30 = local_328[4] * 0x10 | local_328[5] >> 0x1c;
    local_44 = local_328[0xc] & (local_328[0xe] ^ uVar21);
    local_40 = local_328[0xd] & (local_328[0xf] ^ uVar16) ^ uVar16;
    local_3c = local_328[5] | local_328[7];
    local_50 = (local_328[0xc] * 0x4000 | local_328[0xd] >> 0x12) ^
               (local_328[0xc] * 0x40000 | local_328[0xd] >> 0xe);
    local_4c = local_328[0xc] >> 9 | local_328[0xd] * 0x800000;
    local_38 = local_328[5] >> 2 | local_328[4] * 0x40000000;
    local_34 = local_328[5] * 0x10 | local_328[4] >> 0x1c;
    local_40 = uVar14 + local_40;
    uVar9 = (local_328[5] | local_328[7]) & uVar27 | local_328[5] & local_328[7];
    local_48 = (local_328[4] >> 2 | local_328[5] * 0x40000000) ^ local_30;
    local_58 = (local_328[0xd] * 0x4000 | local_328[0xc] >> 0x12) ^
               (local_328[0xd] * 0x40000 | local_328[0xc] >> 0xe);
    local_328[0xb0] = local_50 ^ local_4c;
    local_54 = local_328[4] | local_328[6];
    local_64 = local_48 ^ (local_328[4] >> 7 | local_328[5] * 0x2000000);
    local_60 = (uint)(local_40 < uVar14) +
               (uint)(uVar14 < uVar10) +
               (uint)(uVar10 < puVar6[0xd]) + puVar6[0xc] + piVar7[0xc] + uVar15 +
               (local_44 ^ uVar21);
    local_5c = local_58 ^ (local_328[0xd] >> 9 | local_328[0xc] * 0x800000);
    local_328[0xb0] = local_40 + local_328[0xb0];
    local_64 = uVar9 + local_64;
    local_328[0xb] = local_328[0xb0] + uVar18;
    iVar23 = (uint)(local_328[0xb0] < local_40) + local_60 + local_5c;
    local_328[3] = local_64 + local_328[0xb0];
    local_328[10] = (uint)(local_328[0xb] < local_328[0xb0]) + iVar23 + uVar22;
    uVar10 = puVar6[0xf] + piVar7[0xf];
    local_328[2] = (uint)(local_328[3] < local_64) +
                   (uint)(local_64 < uVar9) +
                   ((local_328[4] | local_328[6]) & uVar20 | local_328[4] & local_328[6]) +
                   (local_38 ^ local_34 ^ (local_328[5] >> 7 | local_328[4] * 0x2000000)) + iVar23;
    uVar16 = uVar10 + uVar16;
    local_30 = local_328[2] * 0x10 | local_328[3] >> 0x1c;
    local_44 = local_328[10] & (local_328[0xc] ^ local_328[0xe]);
    local_50 = (local_328[10] * 0x4000 | local_328[0xb] >> 0x12) ^
               (local_328[10] * 0x40000 | local_328[0xb] >> 0xe);
    local_40 = local_328[0xb] & (local_328[0xd] ^ local_328[0xf]) ^ local_328[0xf];
    local_3c = local_328[3] | local_328[5];
    local_4c = local_328[10] >> 9 | local_328[0xb] * 0x800000;
    local_34 = local_328[3] * 0x10 | local_328[2] >> 0x1c;
    local_38 = local_328[3] >> 2 | local_328[2] * 0x40000000;
    local_40 = uVar16 + local_40;
    local_5c = local_328[2] >> 7 | local_328[3] * 0x2000000;
    uVar9 = (local_328[3] | local_328[5]) & local_328[7] | local_328[3] & local_328[5];
    local_48 = (local_328[2] >> 2 | local_328[3] * 0x40000000) ^ local_30;
    local_60 = (uint)(uVar16 < uVar10) +
               (uint)(uVar10 < puVar6[0xf]) + puVar6[0xe] + piVar7[0xe] + uVar21 +
               (local_44 ^ local_328[0xe]);
    local_58 = (local_328[0xb] * 0x4000 | local_328[10] >> 0x12) ^
               (local_328[0xb] * 0x40000 | local_328[10] >> 0xe);
    local_328[0xb0] = local_50 ^ local_4c;
    local_54 = local_328[2] | local_328[4];
    local_64 = local_48 ^ local_5c;
    local_328[0xb0] = local_40 + local_328[0xb0];
    local_64 = uVar9 + local_64;
    local_328[9] = local_328[0xb0] + uVar27;
    iVar23 = (uint)(local_328[0xb0] < local_40) +
             (local_40 < uVar16) + local_60 +
             (local_58 ^ (local_328[0xb] >> 9 | local_328[10] * 0x800000));
    local_328[1] = local_64 + local_328[0xb0];
    piVar7 = piVar7 + 0x10;
    local_328[8] = (uint)(local_328[9] < local_328[0xb0]) + iVar23 + uVar20;
    local_328[0] = (uint)(local_328[1] < local_64) +
                   (uint)(local_64 < uVar9) +
                   ((local_328[2] | local_328[4]) & local_328[6] | local_328[2] & local_328[4]) +
                   (local_38 ^ local_34 ^ (local_328[3] >> 7 | local_328[2] * 0x2000000)) + iVar23;
    puVar6 = puVar6 + 0x10;
  } while (piVar7 != &DAT_0041d9d0);
  puVar8 = local_328;
  do {
    uVar10 = *puVar8;
    uVar9 = *(uint *)(param_1 + 0xc) + puVar8[1];
    puVar8 = puVar8 + 2;
    *(uint *)(param_1 + 8) =
         (uint)(uVar9 < *(uint *)(param_1 + 0xc)) + *(int *)(param_1 + 8) + uVar10;
    *(uint *)(param_1 + 0xc) = uVar9;
    param_1 = param_1 + 8;
  } while (puVar8 != local_328 + 0x10);
  return;
}

