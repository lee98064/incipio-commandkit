/* FUN_0040dc80 @ 0040dc80 */

void FUN_0040dc80(longlong *param_1,int param_2,int param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  int iVar5;
  int iVar6;
  longlong lVar3;
  longlong lVar4;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int local_58;
  int local_54;
  int local_50;
  uint local_4c;
  int local_48;
  int local_44;
  int local_40;
  uint local_3c;
  
  *param_1 = (longlong)*(int *)(param_3 + 4) * (longlong)*(int *)(param_2 + 4);
  lVar1 = (longlong)*(int *)(param_3 + 0xc) * (longlong)*(int *)(param_2 + 4);
  local_4c = (uint)lVar1;
  local_50 = (int)((ulonglong)lVar1 >> 0x20);
  local_58 = (int)((ulonglong)((longlong)*(int *)(param_3 + 4) * (longlong)*(int *)(param_2 + 0xc))
                  >> 0x20);
  *(uint *)((int)param_1 + 0xc) = local_4c + local_54;
  *(uint *)(param_1 + 1) = (uint)(local_4c + local_54 < local_4c) + local_50 + local_58;
  uVar11 = *(uint *)(param_3 + 0xc);
  uVar2 = (longlong)*(int *)(param_2 + 0xc) * 2;
  iVar5 = ((int)uVar11 >> 0x1f) * local_44;
  local_48 = (int)(uVar2 >> 0x20);
  iVar6 = local_48 * uVar11;
  lVar1 = (uVar2 & 0xffffffff) * (ulonglong)uVar11;
  local_48 = (int)((ulonglong)lVar1 >> 0x20);
  local_44 = (int)lVar1;
  param_1[2] = (longlong)*(int *)(param_3 + 4) * (longlong)*(int *)(param_2 + 0x14) +
               (longlong)*(int *)(param_3 + 0x14) * (longlong)*(int *)(param_2 + 4) +
               CONCAT44(iVar6 + iVar5 + local_48,local_44);
  lVar1 = (longlong)*(int *)(param_3 + 0xc) * (longlong)*(int *)(param_2 + 0x14);
  local_4c = (uint)lVar1;
  param_1[3] = (longlong)*(int *)(param_3 + 0x1c) * (longlong)*(int *)(param_2 + 4) +
               (longlong)*(int *)(param_3 + 4) * (longlong)*(int *)(param_2 + 0x1c) +
               lVar1 + (longlong)*(int *)(param_3 + 0x14) * (longlong)*(int *)(param_2 + 0xc);
  lVar1 = (longlong)*(int *)(param_3 + 0x14) * (longlong)*(int *)(param_2 + 0x14);
  local_4c = local_3c + local_4c;
  local_50 = (int)((ulonglong)((longlong)*(int *)(param_3 + 0x24) * (longlong)*(int *)(param_2 + 4))
                  >> 0x20);
  local_40 = (int)((ulonglong)lVar1 >> 0x20);
  local_3c = (uint)lVar1;
  lVar1 = (longlong)*(int *)(param_3 + 0xc) * (longlong)*(int *)(param_2 + 0x1c) +
          (longlong)*(int *)(param_3 + 0x1c) * (longlong)*(int *)(param_2 + 0xc);
  uVar11 = (uint)lVar1;
  param_1[4] = (longlong)*(int *)(param_3 + 4) * (longlong)*(int *)(param_2 + 0x24) +
               CONCAT44((uint)(local_4c < local_3c) + local_40 + local_50,local_4c) +
               CONCAT44(uVar11 >> 0x1f | (int)((ulonglong)lVar1 >> 0x20) * 2,uVar11 * 2);
  lVar1 = (longlong)*(int *)(param_3 + 4) * (longlong)*(int *)(param_2 + 0x2c);
  local_44 = (int)lVar1;
  param_1[5] = (longlong)*(int *)(param_3 + 0x2c) * (longlong)*(int *)(param_2 + 4) +
               (longlong)*(int *)(param_3 + 0x14) * (longlong)*(int *)(param_2 + 0x1c) +
               (longlong)*(int *)(param_3 + 0x1c) * (longlong)*(int *)(param_2 + 0x14) + lVar1 +
               (longlong)*(int *)(param_3 + 0xc) * (longlong)*(int *)(param_2 + 0x24) +
               (longlong)*(int *)(param_3 + 0x24) * (longlong)*(int *)(param_2 + 0xc);
  local_48 = (int)((ulonglong)((longlong)*(int *)(param_3 + 0x34) * (longlong)*(int *)(param_2 + 4))
                  >> 0x20);
  lVar1 = (longlong)*(int *)(param_3 + 0xc) * (longlong)*(int *)(param_2 + 0x2c) +
          (longlong)*(int *)(param_3 + 0x2c) * (longlong)*(int *)(param_2 + 0xc) +
          (longlong)*(int *)(param_3 + 0x1c) * (longlong)*(int *)(param_2 + 0x1c);
  uVar11 = (uint)lVar1;
  param_1[6] = (longlong)*(int *)(param_3 + 4) * (longlong)*(int *)(param_2 + 0x34) +
               (longlong)*(int *)(param_3 + 0x24) * (longlong)*(int *)(param_2 + 0x14) +
               CONCAT44(local_48,local_44) +
               (longlong)*(int *)(param_3 + 0x14) * (longlong)*(int *)(param_2 + 0x24) +
               CONCAT44(uVar11 >> 0x1f | (int)((ulonglong)lVar1 >> 0x20) * 2,uVar11 * 2);
  lVar1 = (longlong)*(int *)(param_3 + 4) * (longlong)*(int *)(param_2 + 0x3c);
  local_44 = (int)lVar1;
  param_1[7] = (longlong)*(int *)(param_3 + 0x3c) * (longlong)*(int *)(param_2 + 4) +
               (longlong)*(int *)(param_3 + 0x1c) * (longlong)*(int *)(param_2 + 0x24) +
               (longlong)*(int *)(param_3 + 0x24) * (longlong)*(int *)(param_2 + 0x1c) + lVar1 +
               (longlong)*(int *)(param_3 + 0x14) * (longlong)*(int *)(param_2 + 0x2c) +
               (longlong)*(int *)(param_3 + 0x2c) * (longlong)*(int *)(param_2 + 0x14) +
               (longlong)*(int *)(param_3 + 0xc) * (longlong)*(int *)(param_2 + 0x34) +
               (longlong)*(int *)(param_3 + 0x34) * (longlong)*(int *)(param_2 + 0xc);
  local_48 = (int)((ulonglong)
                   ((longlong)*(int *)(param_3 + 0x14) * (longlong)*(int *)(param_2 + 0x34)) >> 0x20
                  );
  lVar1 = (longlong)*(int *)(param_3 + 0x2c) * (longlong)*(int *)(param_2 + 0x1c) +
          (longlong)*(int *)(param_3 + 0x1c) * (longlong)*(int *)(param_2 + 0x2c) +
          (longlong)*(int *)(param_3 + 0xc) * (longlong)*(int *)(param_2 + 0x3c) +
          (longlong)*(int *)(param_3 + 0x3c) * (longlong)*(int *)(param_2 + 0xc);
  uVar11 = (uint)lVar1;
  param_1[8] = (longlong)*(int *)(param_3 + 4) * (longlong)*(int *)(param_2 + 0x44) +
               (longlong)*(int *)(param_3 + 0x24) * (longlong)*(int *)(param_2 + 0x24) +
               CONCAT44(local_48,local_44) +
               (longlong)*(int *)(param_3 + 0x34) * (longlong)*(int *)(param_2 + 0x14) +
               (longlong)*(int *)(param_3 + 0x44) * (longlong)*(int *)(param_2 + 4) +
               CONCAT44(uVar11 >> 0x1f | (int)((ulonglong)lVar1 >> 0x20) * 2,uVar11 * 2);
  param_1[9] = (longlong)*(int *)(param_3 + 0x2c) * (longlong)*(int *)(param_2 + 0x24) +
               (longlong)*(int *)(param_3 + 0x24) * (longlong)*(int *)(param_2 + 0x2c) +
               (longlong)*(int *)(param_3 + 4) * (longlong)*(int *)(param_2 + 0x4c) +
               (longlong)*(int *)(param_3 + 0x1c) * (longlong)*(int *)(param_2 + 0x34) +
               (longlong)*(int *)(param_3 + 0x34) * (longlong)*(int *)(param_2 + 0x1c) +
               (longlong)*(int *)(param_3 + 0x14) * (longlong)*(int *)(param_2 + 0x3c) +
               (longlong)*(int *)(param_3 + 0x3c) * (longlong)*(int *)(param_2 + 0x14) +
               (longlong)*(int *)(param_3 + 0xc) * (longlong)*(int *)(param_2 + 0x44) +
               (longlong)*(int *)(param_3 + 0x44) * (longlong)*(int *)(param_2 + 0xc) +
               (longlong)*(int *)(param_3 + 0x4c) * (longlong)*(int *)(param_2 + 4);
  lVar1 = (longlong)*(int *)(param_3 + 0x2c) * (longlong)*(int *)(param_2 + 0x2c);
  local_54 = (int)lVar1;
  lVar3 = (longlong)*(int *)(param_3 + 0x1c) * (longlong)*(int *)(param_2 + 0x3c);
  local_58 = (int)((ulonglong)
                   ((longlong)*(int *)(param_3 + 0x34) * (longlong)*(int *)(param_2 + 0x24)) >> 0x20
                  );
  local_4c = (uint)lVar3;
  lVar3 = lVar3 + (longlong)*(int *)(param_3 + 0x3c) * (longlong)*(int *)(param_2 + 0x1c) + lVar1 +
                  (longlong)*(int *)(param_3 + 0x4c) * (longlong)*(int *)(param_2 + 0xc);
  uVar11 = (uint)lVar3;
  local_4c = uVar11 + local_4c;
  lVar1 = (longlong)*(int *)(param_3 + 0x14) * (longlong)*(int *)(param_2 + 0x44);
  local_50 = (int)((ulonglong)
                   ((longlong)*(int *)(param_3 + 0xc) * (longlong)*(int *)(param_2 + 0x4c)) >> 0x20)
  ;
  param_1[10] = (longlong)*(int *)(param_3 + 0x24) * (longlong)*(int *)(param_2 + 0x34) +
                (longlong)*(int *)(param_3 + 0x44) * (longlong)*(int *)(param_2 + 0x14) +
                CONCAT44(local_58,local_54) + lVar1 +
                CONCAT44(local_4c >> 0x1f |
                         ((uint)(local_4c < uVar11) + (int)((ulonglong)lVar3 >> 0x20) + local_50) *
                         2,local_4c * 2);
  local_54 = (int)lVar1;
  local_58 = (int)((ulonglong)
                   ((longlong)*(int *)(param_3 + 0x34) * (longlong)*(int *)(param_2 + 0x2c)) >> 0x20
                  );
  lVar7 = CONCAT44(local_58,local_54);
  lVar1 = (longlong)*(int *)(param_3 + 0x3c) * (longlong)*(int *)(param_2 + 0x24);
  lVar3 = (longlong)*(int *)(param_3 + 0x44) * (longlong)*(int *)(param_2 + 0x1c);
  local_54 = (int)lVar1;
  local_58 = (int)((ulonglong)lVar3 >> 0x20);
  lVar8 = CONCAT44(local_58,local_54);
  lVar4 = (longlong)*(int *)(param_3 + 0x4c) * (longlong)*(int *)(param_2 + 0x14);
  local_54 = (int)lVar3;
  local_58 = (int)((ulonglong)lVar4 >> 0x20);
  param_1[0xb] = (longlong)*(int *)(param_3 + 0x14) * (longlong)*(int *)(param_2 + 0x4c) +
                 (longlong)*(int *)(param_3 + 0x1c) * (longlong)*(int *)(param_2 + 0x44) +
                 (longlong)*(int *)(param_3 + 0x24) * (longlong)*(int *)(param_2 + 0x3c) +
                 (longlong)*(int *)(param_3 + 0x2c) * (longlong)*(int *)(param_2 + 0x34) + lVar7 +
                 lVar1 + lVar8 + CONCAT44(local_58,local_54);
  lVar1 = (longlong)*(int *)(param_3 + 0x1c) * (longlong)*(int *)(param_2 + 0x4c);
  local_54 = (int)lVar4;
  local_58 = (int)((ulonglong)lVar1 >> 0x20);
  lVar4 = CONCAT44(local_58,local_54);
  lVar3 = (longlong)*(int *)(param_3 + 0x44) * (longlong)*(int *)(param_2 + 0x24);
  local_54 = (int)lVar1;
  local_58 = (int)((ulonglong)lVar3 >> 0x20);
  lVar1 = (longlong)*(int *)(param_3 + 0x2c) * (longlong)*(int *)(param_2 + 0x3c) +
          (longlong)*(int *)(param_3 + 0x3c) * (longlong)*(int *)(param_2 + 0x2c) + lVar4 +
          (longlong)*(int *)(param_3 + 0x4c) * (longlong)*(int *)(param_2 + 0x1c);
  uVar10 = (uint)lVar1;
  lVar4 = (longlong)*(int *)(param_3 + 0x24) * (longlong)*(int *)(param_2 + 0x44) +
          (longlong)*(int *)(param_3 + 0x34) * (longlong)*(int *)(param_2 + 0x34) +
          CONCAT44(local_58,local_54);
  uVar9 = (uint)lVar4;
  uVar11 = uVar9 + uVar10 * 2;
  *(uint *)(param_1 + 0xc) =
       (uint)(uVar11 < uVar9) +
       (int)((ulonglong)lVar4 >> 0x20) + (uVar10 >> 0x1f | (int)((ulonglong)lVar1 >> 0x20) * 2);
  *(uint *)((int)param_1 + 100) = uVar11;
  local_54 = (int)lVar3;
  local_58 = (int)((ulonglong)
                   ((longlong)*(int *)(param_3 + 0x3c) * (longlong)*(int *)(param_2 + 0x34)) >> 0x20
                  );
  param_1[0xd] = (longlong)*(int *)(param_3 + 0x4c) * (longlong)*(int *)(param_2 + 0x24) +
                 (longlong)*(int *)(param_3 + 0x24) * (longlong)*(int *)(param_2 + 0x4c) +
                 (longlong)*(int *)(param_3 + 0x2c) * (longlong)*(int *)(param_2 + 0x44) +
                 (longlong)*(int *)(param_3 + 0x34) * (longlong)*(int *)(param_2 + 0x3c) +
                 CONCAT44(local_58,local_54) +
                 (longlong)*(int *)(param_3 + 0x44) * (longlong)*(int *)(param_2 + 0x2c);
  lVar1 = (longlong)*(int *)(param_3 + 0x2c) * (longlong)*(int *)(param_2 + 0x4c) +
          (longlong)*(int *)(param_3 + 0x4c) * (longlong)*(int *)(param_2 + 0x2c) +
          (longlong)*(int *)(param_3 + 0x3c) * (longlong)*(int *)(param_2 + 0x3c);
  uVar11 = (uint)lVar1;
  param_1[0xe] = (longlong)*(int *)(param_3 + 0x34) * (longlong)*(int *)(param_2 + 0x44) +
                 (longlong)*(int *)(param_3 + 0x44) * (longlong)*(int *)(param_2 + 0x34) +
                 CONCAT44(uVar11 >> 0x1f | (int)((ulonglong)lVar1 >> 0x20) * 2,uVar11 * 2);
  param_1[0xf] = (longlong)*(int *)(param_3 + 0x4c) * (longlong)*(int *)(param_2 + 0x34) +
                 (longlong)*(int *)(param_3 + 0x34) * (longlong)*(int *)(param_2 + 0x4c) +
                 (longlong)*(int *)(param_3 + 0x3c) * (longlong)*(int *)(param_2 + 0x44) +
                 (longlong)*(int *)(param_3 + 0x44) * (longlong)*(int *)(param_2 + 0x3c);
  lVar1 = (longlong)*(int *)(param_3 + 0x3c) * (longlong)*(int *)(param_2 + 0x4c) +
          (longlong)*(int *)(param_3 + 0x4c) * (longlong)*(int *)(param_2 + 0x3c);
  uVar11 = (uint)lVar1;
  param_1[0x10] =
       (longlong)*(int *)(param_3 + 0x44) * (longlong)*(int *)(param_2 + 0x44) +
       CONCAT44(uVar11 >> 0x1f | (int)((ulonglong)lVar1 >> 0x20) * 2,uVar11 * 2);
  param_1[0x11] =
       (longlong)*(int *)(param_3 + 0x44) * (longlong)*(int *)(param_2 + 0x4c) +
       (longlong)*(int *)(param_3 + 0x4c) * (longlong)*(int *)(param_2 + 0x44);
  param_1[0x12] = (longlong)*(int *)(param_2 + 0x4c) * 2 * (longlong)*(int *)(param_3 + 0x4c);
  return;
}

