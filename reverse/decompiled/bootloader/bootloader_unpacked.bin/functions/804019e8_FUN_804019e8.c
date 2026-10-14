/* FUN_804019e8 @ 804019e8 */

void FUN_804019e8(int param_1,uint param_2)

{
  int iVar1;
  short sVar2;
  char cVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined **ppuVar6;
  undefined4 *puVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  undefined4 local_88;
  undefined4 local_84;
  int local_80;
  uint local_7c;
  short local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined **local_60;
  int local_5c;
  uint local_58;
  undefined *local_54;
  int local_50;
  char *local_4c;
  char *local_48;
  undefined4 *local_44;
  char *local_40;
  char *local_3c;
  char *local_38;
  undefined4 *local_34;
  undefined *local_30;
  
  select_boot_bank(0);
  local_50 = 0;
  iVar12 = 0;
  local_5c = 0;
  local_58 = 0;
  local_4c = s_checksum_Ok___8040d3c0;
  local_48 = s_burn_Addr__0x_x__srcAddr_0x_x_le_8040d40c;
  local_44 = &DAT_8040d438;
  local_54 = &DAT_80410e64;
  local_40 = s_Flash_Write_Successed___s_8040d464;
  local_3c = s_<RealTek>_8040d2c4;
  local_38 = s_burn_offset____x___8040d448;
  local_34 = &DAT_8040d440;
  local_30 = &DAT_8040d45c;
  local_60 = &PTR_DAT_8040e5dc;
  uVar11 = 0;
LAB_80402070:
  do {
    do {
      while( true ) {
        uVar10 = uVar11;
        uVar11 = uVar10 + 0x10;
        puVar5 = (undefined4 *)(uVar10 + param_1);
        if (param_2 <= uVar11) {
          if (local_58 != 0) {
            FUN_804011e8();
          }
          return;
        }
        local_88 = *puVar5;
        local_84 = puVar5[1];
        local_80 = puVar5[2];
        local_7c = puVar5[3];
        if (local_5c != 0) break;
        iVar8 = 0;
        ppuVar6 = local_60;
        do {
          iVar1 = FUN_80406a80(&local_88,*ppuVar6,ppuVar6[2]);
          if (iVar1 == 0) {
            if (iVar8 != 10) {
              puVar7 = puVar5 + 4;
              uVar9 = local_7c;
              if (local_60[(iVar8 * 3 + 1) * 2 + 1] == (undefined *)0x0) {
                puVar7 = puVar5;
                uVar9 = local_7c + 0x10;
              }
              local_58 = local_58 | (uint)local_60[iVar8 * 6 + 5];
              FUN_804077a4(s__s_upgrade__8040d34c,local_60[iVar8 * 6 + 1]);
              iVar8 = FUN_80406a80(&local_88,&DAT_8040d35c,3);
              if (iVar8 != 0) {
                iVar8 = FUN_80406a80(&local_88,&DAT_8040d374,4);
                if (iVar8 != 0) {
                  iVar8 = FUN_80406a80(&local_88,&DAT_8040d37c,4);
                  if ((iVar8 != 0) && (iVar8 = FUN_80406a80(&local_88,&DAT_8040d384,4), iVar8 != 0))
                  goto LAB_80401cb0;
                }
              }
              uVar11 = 0;
              if (local_7c != 0) {
                cVar3 = '\0';
                do {
                  cVar3 = cVar3 + *(char *)((int)puVar5 + uVar11 + 0x10);
                  uVar11 = uVar11 + 1;
                } while (uVar11 < local_7c);
                if (cVar3 != '\0') {
                  FUN_804077a4(s__s_imgage_checksum_error_at__X__8040d39c,&local_88,puVar5);
                  return;
                }
              }
              goto LAB_80401e4c;
            }
            break;
          }
          iVar8 = iVar8 + 1;
          ppuVar6 = ppuVar6 + 6;
        } while (iVar8 != 10);
        uVar11 = local_7c + 0x10 + uVar10;
      }
      iVar8 = FUN_80406a80(&local_88,&DAT_8040d364,4);
      if ((iVar8 == 0) || (iVar8 = FUN_80406a80(puVar5 + 4,&DAT_8040d36c,4), iVar8 == 0)) {
        puVar7 = puVar5 + 4;
        uVar9 = local_7c;
      }
      else {
        uVar9 = local_7c + 0x10;
        puVar7 = puVar5;
      }
LAB_80401cb0:
      iVar8 = FUN_80406a80(&local_88,&DAT_8040d38c,4);
      if ((iVar8 == 0) || (iVar8 = FUN_80406a80(&local_88,&DAT_8040d394,4), iVar8 == 0)) {
        sVar2 = 0;
        if (local_7c != 0xfffffff0) {
          uVar4 = 0;
          do {
            sVar2 = sVar2 + *(short *)(uVar4 + (int)puVar5);
            uVar4 = uVar4 + 2;
          } while (uVar4 < local_7c + 0x10);
          goto LAB_80401da0;
        }
      }
      else {
        local_78 = 0;
        uVar4 = 0;
        if (local_7c != 0) {
          sVar2 = 0;
          do {
            local_78 = *(short *)((int)puVar5 + uVar4 + 0x10);
            sVar2 = sVar2 + local_78;
            uVar4 = uVar4 + 2;
          } while (uVar4 < local_7c);
LAB_80401da0:
          if (sVar2 != 0) {
            FUN_804077a4(s__s_imgage_checksum_error_at__X__8040d39c,&local_88,puVar5);
            return;
          }
        }
      }
      iVar8 = FUN_80406a80(&local_88,&DAT_8040d38c,4);
    } while (iVar8 == 0);
    iVar8 = FUN_80406a80(&local_88,&DAT_8040d394,4);
    if (iVar8 != 0) {
LAB_80401e4c:
      FUN_804077a4(local_4c);
      if (((uVar9 & 0xfff) == 0) && (*(int *)(uVar9 + param_1) == -0x21523f22)) {
        FUN_804077a4(s_it_s_special_wrt_image_need_add_4_8040d3d0,uVar9);
        uVar9 = uVar9 + 4;
      }
      FUN_804077a4(local_48,local_80,puVar7,uVar9);
      iVar8 = FUN_80406a80(&local_88,local_44,4);
      if (iVar8 == 0) {
LAB_80401ec8:
        iVar12 = FUN_80407a10();
        FUN_804077a4(local_38,iVar12);
        local_74 = *puVar7;
        local_70 = puVar7[1];
        local_6c = puVar7[2];
        local_68 = puVar7[3];
        local_6c = FUN_80407a70();
        *puVar7 = local_74;
        puVar7[1] = local_70;
        puVar7[2] = local_6c;
        puVar7[3] = local_68;
      }
      else {
        iVar8 = FUN_80406a80(&local_88,local_34,4);
        if (iVar8 == 0) goto LAB_80401ec8;
        iVar8 = FUN_80406a80(&local_88,local_30,4);
        if (iVar8 == 0) {
          iVar12 = FUN_80407a10();
          FUN_804077a4(local_38,iVar12);
        }
      }
      iVar8 = iVar12 + local_80;
      if (*(uint *)(local_54 + 0xc) < iVar8 + uVar9) {
        iVar8 = FUN_80404b40(0,iVar8,puVar7,*(uint *)(local_54 + 0xc) - iVar8);
        if ((iVar8 != 0) &&
           (iVar8 = FUN_80404b40(1,0,(int)puVar7 + (*(int *)(local_54 + 0xc) - (iVar12 + local_80)),
                                 (uVar9 - *(int *)(local_54 + 0xc)) + iVar12 + local_80), iVar8 != 0
           )) goto LAB_804020a8;
LAB_8040201c:
        if (local_50 == 0) {
          FUN_804077a4(s_Flash_Write_Failed___s_8040d480,s_<RealTek>_8040d2c4);
          return;
        }
      }
      else {
        iVar8 = FUN_80404b40(0,iVar8,puVar7,uVar9);
        if (iVar8 == 0) goto LAB_8040201c;
LAB_804020a8:
        local_50 = 1;
      }
      FUN_804077a4(local_40,local_3c);
      uVar11 = local_7c + 0x10 + uVar10;
      goto LAB_80402070;
    }
    local_5c = 1;
  } while( true );
}

