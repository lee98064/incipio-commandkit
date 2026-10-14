/* FUN_0040af4c @ 0040af4c */

void FUN_0040af4c(undefined4 param_1,int param_2,uint param_3,int param_4,int *param_5)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  char *pcVar6;
  uint uVar7;
  undefined4 uVar8;
  byte bVar9;
  undefined *puVar10;
  undefined *puVar11;
  uint uVar12;
  char *pcVar13;
  uint uVar14;
  byte *pbVar15;
  uint uVar16;
  uint uVar17;
  char *pcVar18;
  int iVar19;
  uint local_1290;
  uint local_128c;
  uint local_1288;
  int local_1284;
  undefined1 auStack_1280 [100];
  undefined auStack_121c [20];
  undefined4 auStack_1208 [95];
  char local_108c [1024];
  char local_c8c [1024];
  undefined1 local_88c [2];
  undefined1 uStack_88a;
  byte local_888;
  byte local_887;
  byte local_886;
  byte bStack_885;
  byte bStack_884;
  byte bStack_883;
  byte local_882;
  undefined1 local_881;
  undefined1 local_880;
  undefined1 local_87c;
  byte local_87b;
  byte local_87a;
  byte local_879;
  undefined2 local_878;
  undefined2 local_876;
  undefined2 local_874;
  undefined2 uStack_872;
  undefined4 local_870;
  undefined1 local_86c [4];
  undefined4 local_868;
  byte local_864 [61];
  undefined1 local_827;
  undefined1 local_826;
  byte local_825;
  undefined1 local_824;
  undefined1 local_823;
  undefined1 local_822;
  undefined1 local_821;
  undefined1 local_820;
  undefined1 local_81f;
  undefined1 local_81e;
  undefined1 local_81d;
  undefined1 local_81c;
  undefined1 local_81b;
  undefined1 local_81a;
  undefined1 local_80b;
  undefined1 local_80a;
  undefined1 local_809;
  undefined1 local_808;
  undefined1 local_807;
  undefined1 local_806;
  undefined1 local_805;
  undefined1 local_804;
  undefined1 local_803;
  undefined1 local_802;
  undefined1 local_801;
  undefined1 local_800;
  undefined1 local_7ff;
  undefined1 local_7f0;
  undefined1 local_7ef;
  undefined1 local_7ee;
  undefined1 local_7ed;
  byte local_7ec;
  undefined1 local_7eb;
  undefined1 local_7ea;
  undefined1 local_7e9;
  undefined1 local_7e8;
  undefined1 local_7e7;
  undefined1 local_7e6;
  undefined1 local_7e5;
  undefined1 local_7e4;
  byte local_7d5;
  byte local_7d4;
  byte local_7d3;
  byte local_7d2;
  byte local_7d1;
  undefined1 local_7d0;
  undefined1 local_7cf;
  undefined1 local_7ce;
  undefined1 local_7cd;
  undefined1 local_7cc;
  undefined1 local_7cb;
  undefined1 local_7ca;
  undefined1 local_7c9;
  undefined4 *local_88;
  undefined *local_84;
  uint *local_80;
  byte *local_7c;
  int local_78;
  byte *local_74;
  uint local_70;
  uint local_6c;
  uint local_68;
  uint local_64;
  uint local_60;
  byte *local_5c;
  undefined4 *local_58;
  undefined4 *local_54;
  undefined4 *local_50;
  undefined **local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  uint *local_3c;
  uint local_38;
  undefined *local_34;
  uint local_30;
  
  (*(code *)PTR_memset_004234dc)(local_108c,0,0x400);
  local_1288 = 0;
  (*(code *)PTR_memset_004234dc)(auStack_1280,0,100);
  if (param_4 == 0) {
LAB_0040bf98:
    if (param_3 == 2) {
      pcVar18 = "%s=\"%s\"\n";
    }
    else {
      pcVar18 = "%s=%s\n";
    }
    (*(code *)PTR_printf_004235c4)(pcVar18,auStack_1280,local_108c);
  }
  else {
    (*(code *)PTR_strcat_00423534)(auStack_1280,param_1);
    local_4c = &switchD_0040b07c::switchdataD_00413328 + param_3;
    local_7c = &local_887;
    local_80 = (uint *)(local_88c + 1);
    local_74 = local_864;
    local_5c = &bStack_885;
    local_58 = (undefined4 *)&local_874;
    local_54 = &local_870;
    local_50 = &local_868;
    local_78 = 0;
    iVar19 = 1;
    pcVar18 = (char *)0x0;
    while (iVar3 = (*(code *)PTR_strlen_00423484)(local_108c), param_3 < 0x18) {
      switch((uint)*local_4c & 0xfffffffe) {
      case 0x40b084:
        pcVar18 = "%d";
        local_3c = &local_128c;
        goto LAB_0040b10c;
      case 0x40b094:
        pcVar18 = "%s";
        local_3c = &local_1290;
        goto LAB_0040b10c;
      case 0x40b0a4:
        pcVar18 = "%02x%02x%02x%02x%02x";
        break;
      case 0x40b0b0:
        pcVar18 = "%02x%02x%02x%02x%02x%02x";
        break;
      case 0x40b0bc:
        pcVar18 = "%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x";
        break;
      case 0x40b0c8:
        pcVar18 = "%s";
        break;
      case 0x40b0d4:
        pcVar18 = "%u";
        local_3c = &local_1288;
        goto LAB_0040b10c;
      case 0x40b0e4:
        _local_88c = CONCAT13((char)iVar19,stack0xfffff775);
        local_78 = 1;
        iVar19 = iVar19 + 1;
        break;
      case 0x40b0f8:
        goto switchD_0040b07c_caseD_40b0f8;
      }
      local_3c = (uint *)local_88c;
LAB_0040b10c:
      iVar4 = FUN_00408d80(param_2,local_3c);
      if (iVar4 == 0) {
        pcVar18 = "Get MIB failed!";
        goto LAB_0040b480;
      }
      pcVar13 = local_108c + iVar3;
      if (param_3 == 6) {
        puVar5 = (uint *)(*(code *)PTR_inet_ntoa_004234c4)(local_1290);
LAB_0040b18c:
        (*(code *)PTR_sprintf_004234b0)(pcVar13,pcVar18,puVar5);
        if (param_3 == 2) {
          puVar10 = (undefined *)0x0;
          puVar11 = (undefined *)0x0;
          for (pcVar6 = pcVar13; cVar1 = *pcVar6, cVar1 != '\0'; pcVar6 = pcVar6 + 1) {
            if ((((cVar1 == '\"') || (cVar1 == '\\')) || (cVar1 == '$')) ||
               ((cVar1 == '`' || (cVar1 == ' ')))) {
              local_c8c[(int)puVar10] = '\\';
              puVar10 = puVar10 + 1;
            }
            puVar11 = puVar11 + 1;
            local_c8c[(int)puVar10] = *pcVar6;
            puVar10 = puVar10 + 1;
          }
          if (puVar10 != puVar11) {
            local_34 = puVar10;
            (*(code *)PTR_memcpy_004235a4)(pcVar13,local_c8c,puVar10);
            pcVar13[(int)local_34] = '\0';
          }
        }
        goto LAB_0040bec4;
      }
      pcVar6 = pcVar18;
      uVar7 = local_128c;
      if (param_3 < 2) goto LAB_0040b4a4;
      puVar5 = local_3c;
      if (param_3 == 2) goto LAB_0040b18c;
      uVar2 = local_88c[1];
      bVar9 = local_88c[0];
      if (param_3 == 3) {
        (*(code *)PTR_sprintf_004234b0)
                  (pcVar13,pcVar18,local_88c[0],local_88c[1],uStack_88a,_local_88c & 0xff,local_888,
                   local_887);
LAB_0040b2f0:
        FUN_00402158(pcVar13);
      }
      else {
        if (param_3 == 4) {
          (*(code *)PTR_sprintf_004234b0)
                    (pcVar13,pcVar18,local_88c[0],local_88c[1],uStack_88a,_local_88c & 0xff,
                     local_888,local_887,local_886);
          goto LAB_0040b2f0;
        }
        if (param_3 == 5) {
          (*(code *)PTR_sprintf_004234b0)
                    (pcVar13,pcVar18,local_88c[0],local_88c[1],uStack_88a,_local_88c & 0xff,
                     local_888,local_887,local_886,bStack_885,bStack_884,bStack_883,local_882,
                     local_881,local_880);
          goto LAB_0040b2f0;
        }
        if (param_3 == 8) {
          if ((param_2 - 0x385U < 7) ||
             ((local_34 = (undefined *)0xc4, 4 < param_2 - 0x38eU &&
              (local_34 = (undefined *)0x32, param_2 != 0x3ae)))) {
            local_34 = (undefined *)0xe;
          }
          if ((param_5 == (int *)0x0) || (*param_5 == 0)) {
            local_88 = (undefined4 *)local_88c;
            local_38 = 0;
            local_84 = auStack_121c;
            do {
              (*(code *)PTR_sprintf_004234b0)
                        (local_84,"%02x",*(undefined1 *)((int)local_88 + local_38));
              local_38 = local_38 + 1;
              (*(code *)PTR_strcat_00423534)(pcVar13,local_84);
            } while ((int)local_38 < (int)local_34);
            goto LAB_0040b2f0;
          }
          iVar3 = (*(code *)PTR_atoi_00423488)();
          if ((0 < iVar3) && (iVar3 <= (int)local_34)) {
            pcVar6 = "%d";
            uVar7 = (uint)*(byte *)((int)local_3c + iVar3 + -1);
            goto LAB_0040b4a4;
          }
          pcVar18 = "invalid channel number";
          goto LAB_0040b480;
        }
        uVar7 = local_1288;
        if (param_3 == 7) {
LAB_0040b4a4:
          (*(code *)PTR_sprintf_004234b0)(pcVar13,pcVar6,uVar7);
          goto LAB_0040bec4;
        }
        if (param_3 == 0xb) {
          local_3c = (uint *)(uint)local_888;
          local_38 = (uint)local_887;
          local_48 = (uint)local_886;
          local_44 = (uint)bStack_885;
          local_40 = (uint)bStack_884;
          local_34 = (undefined *)(uint)bStack_883;
          uVar7 = (*(code *)PTR_inet_ntoa_004234c4)(_local_88c);
          pcVar6 = "%02x%02x%02x%02x%02x%02x,%s,%s";
          puVar5 = local_3c;
          uVar17 = local_38;
          uVar16 = local_48;
          uVar14 = local_44;
          uVar12 = local_40;
          puVar10 = local_34;
LAB_0040b648:
          (*(code *)PTR_sprintf_004234b0)
                    (pcVar13,pcVar6,puVar5,uVar17,uVar16,uVar14,uVar12,puVar10,uVar7);
        }
        else {
          if (param_3 == 0x16) {
            local_1284 = -1;
            (*(code *)PTR_apmib_get_0042357c)(0xc0,&local_1284);
            iVar3 = (*(code *)PTR_strncmp_00423510)(local_80,&DAT_00410fdc,4);
            if (iVar3 == 0) {
              uVar7 = (uint)(local_1284 - 1U < 2);
            }
            else {
              uVar8 = (*(code *)PTR_strlen_00423484)(local_80);
              iVar3 = (*(code *)PTR_strncmp_00423510)("wlan0",local_80,uVar8);
              uVar7 = 1;
              if (iVar3 == 0) {
                uVar7 = (uint)(local_1284 != 2);
              }
            }
            uVar16 = (uint)local_87b;
            uVar14 = (uint)local_87a;
            uVar12 = (uint)local_879;
            uVar17 = _local_88c >> 0x18;
            puVar10 = (undefined *)(uint)local_878;
            pcVar6 = "%s,%d,%d,%d,%d,%d,%d";
            puVar5 = local_80;
            goto LAB_0040b648;
          }
          if (param_3 == 0x15) {
            (*(code *)PTR_sprintf_004234b0)
                      (pcVar13,"%d,%d,%d,%d",local_878,uStack_872,local_876,local_874);
            goto LAB_0040bec4;
          }
          if (param_3 == 0xc) {
            uVar8 = (*(code *)PTR_inet_ntoa_004234c4)(_local_88c);
            uVar7 = (uint)(local_86c + 3) & 3;
            (*(code *)PTR_sprintf_004234b0)
                      (pcVar13,"%s, %d, %d, %d, %d",uVar8,CONCAT11(local_888,local_887),
                       CONCAT11(local_886,bStack_885),bStack_884,
                       (uint)local_86c & -1 << (uVar7 + 1) * 8 |
                       *(uint *)(local_86c + 3 + -uVar7) >> (3 - uVar7) * 8);
            if (*local_74 == 0) goto LAB_0040bec4;
            pcVar6 = ", %s";
            pbVar15 = local_74;
LAB_0040bac0:
            local_34 = auStack_121c;
            (*(code *)PTR_sprintf_004234b0)(local_34,pcVar6,pbVar15);
            puVar10 = local_34;
LAB_0040beb8:
            (*(code *)PTR_strcat_00423534)(pcVar13,puVar10);
          }
          else {
            if (param_3 != 0xe) {
              if (param_3 == 0xd) {
                uVar8 = (*(code *)PTR_inet_ntoa_004234c4)(_local_88c);
                (*(code *)PTR_sprintf_004234b0)(pcVar13,"%s, %d",uVar8,local_888);
                bVar9 = *local_7c;
                goto LAB_0040b808;
              }
              if (param_3 == 0xf) {
                pcVar6 = "%02x:%02x:%02x:%02x:%02x:%02x";
LAB_0040ba94:
                (*(code *)PTR_sprintf_004234b0)
                          (pcVar13,pcVar6,bVar9,uVar2,uStack_88a,_local_88c & 0xff,local_888,
                           local_887);
                if (local_886 != 0) {
                  pcVar6 = ", %s";
                  pbVar15 = &local_886;
                  goto LAB_0040bac0;
                }
                goto LAB_0040bec4;
              }
              if (param_3 == 0x10) {
                iVar3 = (*(code *)PTR_strncmp_00423510)(local_88c,"http://",7);
                pbVar15 = local_88c;
                if (iVar3 == 0) {
                  pbVar15 = local_5c;
                }
                (*(code *)PTR_strcpy_004235d0)(pcVar13,pbVar15);
                pcVar6 = ", %d";
                pbVar15 = (byte *)(uint)(byte)local_870;
                goto LAB_0040bac0;
              }
              if (param_3 == 0x11) {
                (*(code *)PTR_sprintf_004234b0)
                          (pcVar13,"%d, %d, %d, %d, %d, %d",local_88c,_local_88c & 0xffff,local_888,
                           CONCAT11(local_887,local_886),CONCAT11(bStack_885,bStack_884),bStack_883)
                ;
LAB_0040bb28:
                if (local_882 != 0) {
                  pcVar6 = ", %s";
                  pbVar15 = &local_882;
                  goto LAB_0040bac0;
                }
                goto LAB_0040bec4;
              }
              if (param_3 == 0x13) {
                local_84 = auStack_121c;
                local_88 = auStack_1208;
                uVar8 = (*(code *)PTR_inet_ntoa_004234c4)(*local_58);
                (*(code *)PTR_strcpy_004235d0)(local_84,uVar8);
                uVar8 = (*(code *)PTR_inet_ntoa_004234c4)(*local_54);
                (*(code *)PTR_strcpy_004235d0)(local_88,uVar8);
                (*(code *)PTR_sprintf_004234b0)
                          (pcVar13,"%d, %02x%02x%02x%02x%02x%02x, %d, %s, %s, %d, %d, %s, %s",
                           local_87c,local_87b,local_87a,local_879,local_878._0_1_,
                           (undefined1)local_878,local_876._0_1_,(undefined1)local_876,local_84,
                           local_88,local_86c,local_868,local_88c);
                goto LAB_0040bec4;
              }
              if ((param_3 == 10) || (param_3 == 0x14)) {
                pcVar6 = "%02x%02x%02x%02x%02x%02x";
                goto LAB_0040ba94;
              }
              if (param_3 == 0x12) {
                (*(code *)PTR_sprintf_004234b0)
                          (pcVar13,"%02x%02x%02x%02x%02x%02x,%u",bVar9,uVar2,uStack_88a,
                           _local_88c & 0xff,local_888,local_887,
                           CONCAT31(CONCAT21(CONCAT11(local_886,bStack_885),bStack_884),bStack_883))
                ;
                goto LAB_0040bb28;
              }
              if (param_3 != 0x17) goto LAB_0040bec4;
              (*(code *)PTR_sprintf_004234b0)
                        (pcVar13,"%s,enc=%d,auth=%d",local_88c,local_86c[1],
                         (uint)local_86c >> 8 & 0xff);
              if ((byte)(local_86c[1] - 1U) < 2) {
                local_84 = PTR_sprintf_004234b0;
                local_88 = (undefined4 *)(uint)local_825;
                local_30 = (uint)local_7ec;
                local_70 = (uint)local_7d5;
                local_6c = (uint)local_7d4;
                local_68 = (uint)local_7d3;
                local_64 = (uint)local_7d2;
                local_60 = (uint)local_7d1;
                if (local_86c[1] == '\x01') {
                  (*(code *)PTR_sprintf_004234b0)
                            (auStack_121c,
                             ",id=%d,key1=%02x%02x%02x%02x%02x,key2=%02x%02x%02x%02x%02x,key3=%02x%02x%02x%02x%02x,key4=%02x%02x%02x%02x%02x"
                             ,local_827,local_826,local_88,local_824,local_823,local_822,local_80b,
                             local_80a,local_809,local_808,local_807,local_7f0,local_7ef,local_7ee,
                             local_7ed,local_30,local_70,local_6c,local_68,local_64,local_60);
                }
                else {
                  (*(code *)PTR_sprintf_004234b0)
                            (auStack_121c,
                             ",id=%d,key1=%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x,key2=%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x,key3=%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x,key4=%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x"
                             ,local_827,local_826,local_88,local_824,local_823,local_822,local_821,
                             local_820,local_81f,local_81e,local_81d,local_81c,local_81b,local_81a,
                             local_80b,local_80a,local_809,local_808,local_807,local_806,local_805,
                             local_804,local_803,local_802,local_801,local_800,local_7ff,local_7f0,
                             local_7ef,local_7ee,local_7ed,local_30,local_7eb,local_7ea,local_7e9,
                             local_7e8,local_7e7,local_7e6,local_7e5,local_7e4,local_70,local_6c,
                             local_68,local_64,local_60,local_7d0,local_7cf,local_7ce,local_7cd,
                             local_7cc,local_7cb,local_7ca,local_7c9);
                }
                puVar10 = auStack_121c;
              }
              else {
                if (1 < (byte)(local_86c[1] - 3U)) goto LAB_0040bec4;
                local_34 = auStack_121c;
                (*(code *)PTR_sprintf_004234b0)
                          (auStack_121c,",wpa_cipher=%d,psk=%s",(uint)local_86c & 0xff,local_50);
                puVar10 = local_34;
              }
              goto LAB_0040beb8;
            }
            (*(code *)PTR_sprintf_004234b0)
                      (pcVar13,"%d, %d, %d",local_88c,_local_88c & 0xffff,local_888);
            bVar9 = *local_7c;
LAB_0040b808:
            if (bVar9 != 0) {
              pcVar6 = ", %s";
              pbVar15 = local_7c;
              goto LAB_0040bac0;
            }
          }
        }
      }
LAB_0040bec4:
      param_4 = param_4 + -1;
      if (param_4 < 1) {
        if (local_78 != 0) {
          if (param_3 == 2) {
            pcVar18 = "%s%d=\"%s\"\n";
          }
          else {
            pcVar18 = "%s%d=%s\n";
          }
          (*(code *)PTR_printf_004235c4)(pcVar18,auStack_1280,iVar19 + -1,local_108c);
          return;
        }
        goto LAB_0040bf98;
      }
      if (local_78 == 0) {
        if (param_3 == 2) {
          pcVar13 = "%s=\"%s\"\n";
        }
        else {
          pcVar13 = "%s=%s\n";
        }
        (*(code *)PTR_printf_004235c4)(pcVar13,auStack_1280,local_108c);
      }
      else {
        if (param_3 == 2) {
          pcVar13 = "%s%d=\"%s\"\n";
        }
        else {
          pcVar13 = "%s%d=%s\n";
        }
        (*(code *)PTR_printf_004235c4)(pcVar13,auStack_1280,iVar19 + -1,local_108c);
      }
      local_108c[0] = '\0';
    }
switchD_0040b07c_caseD_40b0f8:
    pcVar18 = "invalid mib!";
LAB_0040b480:
    (*(code *)PTR_puts_00423594)(pcVar18);
  }
  return;
}

