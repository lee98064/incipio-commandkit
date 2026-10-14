/* FUN_00404ce0 @ 00404ce0 */

undefined4 FUN_00404ce0(int param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  undefined *puVar4;
  char *pcVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  uint uVar9;
  char *pcVar10;
  undefined4 uVar11;
  int *piVar12;
  undefined1 *puVar13;
  int iVar14;
  code *pcVar15;
  int local_990;
  int local_98c;
  int local_988;
  int local_984;
  int local_980;
  int local_97c;
  int local_978;
  int local_974;
  uint local_970;
  int local_96c;
  int local_968;
  uint local_964;
  undefined2 local_960;
  undefined1 auStack_95c [16];
  int *local_94c;
  undefined2 local_948;
  undefined1 auStack_93c [16];
  int *local_92c;
  undefined2 local_928;
  undefined1 local_91c [33];
  byte local_8fb;
  byte local_8fa;
  byte local_8f9;
  undefined1 auStack_8f8 [65];
  byte local_8b7;
  undefined1 auStack_8b6 [27];
  undefined1 auStack_89b [27];
  undefined1 auStack_880 [27];
  undefined1 auStack_865 [29];
  int local_848;
  undefined1 local_844;
  undefined4 local_842;
  undefined1 auStack_448 [1024];
  undefined1 *local_48;
  undefined1 *local_44;
  undefined1 *local_40;
  undefined1 *local_3c;
  undefined1 *local_38;
  int local_34;
  int local_30;
  
  local_97c = 0;
  local_978 = 0;
  local_974 = 0;
  pcVar5 = (char *)(*(code *)PTR_socket_00423578)(2,1,0);
  if ((int)pcVar5 < 0) {
    pcVar5 = "socket() fail";
    pcVar15 = (code *)PTR_puts_00423594;
    goto LAB_00404db8;
  }
  (*(code *)PTR_strncpy_0042350c)(auStack_95c,param_1,0x10);
  iVar6 = (*(code *)PTR_ioctl_004235c8)(pcVar5,0x8b01,auStack_95c);
  if (iVar6 < 0) {
    (*(code *)PTR_printf_004235c4)("Interface %s open failed!\n",param_1);
    pcVar15 = (code *)PTR_close_00423460;
    goto LAB_00404db8;
  }
  piVar7 = (int *)(*(code *)PTR_malloc_00423588)(0x3340);
  if (piVar7 == (int *)0x0) {
    (*(code *)PTR_puts_00423594)("MIB buffer allocation failed!");
    pcVar15 = (code *)PTR_close_00423460;
    goto LAB_00404db8;
  }
  iVar6 = (*(code *)PTR_apmib_init_0042347c)();
  if (iVar6 == 0) {
    pcVar10 = "Initialize AP MIB failed!";
    goto LAB_00406a58;
  }
  (*(code *)PTR_sprintf_004234b0)(&local_848,"ifconfig %s down",param_1);
  (*(code *)PTR_system_0042358c)(&local_848);
  if (*(int *)PTR_vwlan_idx_0042352c == 0) {
    iVar6 = 0;
    do {
      (*(code *)PTR_sprintf_004234b0)(&local_848,"ifconfig %s-wds%d down",param_1,iVar6);
      iVar6 = iVar6 + 1;
      (*(code *)PTR_system_0042358c)(&local_848);
    } while (iVar6 != 8);
    (*(code *)PTR_sprintf_004234b0)(&local_848,"wlanapp.sh kill %s",param_1);
    (*(code *)PTR_system_0042358c)(&local_848);
LAB_00404f70:
    if ((*(int *)PTR_vwlan_idx_0042352c == 0) &&
       ((*(code *)PTR_apmib_get_0042357c)(0xcd,&local_990), local_990 == 0)) {
      (*(code *)PTR_puts_00423594)("RF type is NULL!");
      goto LAB_004051c4;
    }
    (*(code *)PTR_apmib_get_0042357c)(0x16,&local_990);
    if (local_990 == 1) goto LAB_004051c4;
    local_948 = 0x3340;
    if (*(int *)PTR_vwlan_idx_0042352c == 0) {
      puVar13 = auStack_95c;
    }
    else {
      local_928 = 0x3340;
      puVar13 = auStack_93c;
      local_92c = piVar7;
    }
    local_94c = piVar7;
    iVar6 = (*(code *)PTR_ioctl_004235c8)(pcVar5,0x8b42,puVar13);
    if (iVar6 < 0) {
      pcVar10 = "Get WLAN MIB failed!";
    }
    else if (*piVar7 == 0x16) {
      if (*(int *)PTR_vwlan_idx_0042352c < 1) {
LAB_004050a4:
        if (*(int *)PTR_vwlan_idx_0042352c == 0) {
          (*(code *)PTR_apmib_get_0042357c)(0xcc,&local_990);
          piVar7[0xf0] = local_990;
        }
        (*(code *)PTR_apmib_get_0042357c)(0x18,&local_964);
        iVar6 = (*(code *)PTR_memcmp_004234fc)(&local_964,&DAT_004132b0,6);
        if (iVar6 == 0) {
          iVar6 = *(int *)PTR_vwlan_idx_0042352c;
          if ((iVar6 < 1) || (iVar6 == 5)) {
            uVar11 = 0xcb;
          }
          else if (iVar6 == 2) {
            uVar11 = 0x130;
          }
          else if (iVar6 < 3) {
            if (iVar6 != 1) {
LAB_004051a8:
              (*(code *)PTR_printf_004235c4)("Fail to get MAC address of VAP%d!\n",iVar6 + -1);
LAB_004051c4:
              (*(code *)PTR_free_0042345c)(piVar7);
              (*(code *)PTR_close_00423460)(pcVar5);
              return 0;
            }
            uVar11 = 0x12f;
          }
          else if (iVar6 == 3) {
            uVar11 = 0x131;
          }
          else {
            if (iVar6 != 4) goto LAB_004051a8;
            uVar11 = 0x132;
          }
          (*(code *)PTR_apmib_get_0042357c)(uVar11,&local_964);
        }
        (*(code *)PTR_apmib_get_0042357c)(0xc0,&local_990);
        (*(code *)PTR_apmib_get_0042357c)(0xc1,&local_98c);
        (*(code *)PTR_sprintf_004234b0)(&local_848,"wlan%d",local_98c);
        iVar6 = *(int *)PTR_vwlan_idx_0042352c;
        if ((iVar6 != 5) &&
           (((local_990 != 2 ||
             (iVar8 = (*(code *)PTR_strcmp_004234bc)(&local_848,param_1), iVar8 != 0)) ||
            (0 < iVar6)))) {
          (*(code *)PTR_sprintf_004234b0)
                    (auStack_448,"ifconfig %s hw ether %02x%02x%02x%02x%02x%02x",param_1,
                     local_964._0_1_,local_964 >> 0x10 & 0xff,local_964 >> 8 & 0xff,local_964 & 0xff
                     ,local_960._0_1_,(undefined1)local_960);
          (*(code *)PTR_system_0042358c)(auStack_448);
          piVar7[0x1c3] = local_964;
          *(undefined2 *)(piVar7 + 0x1c4) = local_960;
        }
        if ((local_990 == 2) && (*(int *)PTR_vwlan_idx_0042352c == 0)) {
          piVar7[0x1d5] = 1;
        }
        (*(code *)PTR_apmib_get_0042357c)(0xd4,&local_990);
        puVar4 = PTR_apmib_get_0042357c;
        piVar7[0x1cc] = local_990;
        (*(code *)puVar4)(1,&local_848);
        local_98c = (*(code *)PTR_strlen_00423484)(&local_848);
        piVar7[0xb] = local_98c;
        (*(code *)PTR_memset_004234dc)((int)piVar7 + 10,0,0x20);
        (*(code *)PTR_memcpy_004235a4)((int)piVar7 + 10,&local_848,local_98c);
        pcVar15 = (code *)PTR_memset_004234dc;
        if ((((piVar7[0xb] == 3) &&
             ((*(char *)((int)piVar7 + 10) == 'A' || (*(char *)((int)piVar7 + 10) == 'a')))) &&
            ((*(char *)((int)piVar7 + 0xb) == 'N' || (*(char *)((int)piVar7 + 0xb) == 'n')))) &&
           ((*(char *)(piVar7 + 3) == 'Y' || (*(char *)(piVar7 + 3) == 'y')))) {
          piVar7[0x1d] = 0;
          piVar12 = (int *)0x0;
          iVar6 = 0x20;
        }
        else {
          piVar7[0x1d] = local_98c;
          (*pcVar15)(piVar7 + 0x15,0,0x20);
          piVar12 = &local_848;
          iVar6 = local_98c;
          pcVar15 = (code *)PTR_memcpy_004235a4;
        }
        (*pcVar15)(piVar7 + 0x15,piVar12,iVar6);
        (*(code *)PTR_apmib_get_0042357c)(0x3b,&local_980);
        if (local_980 == 1) {
          (*(code *)PTR_apmib_get_0042357c)(0x3c,&local_98c);
          puVar4 = PTR_apmib_get_0042357c;
          if (local_98c == 0) {
            cVar1 = *(char *)(param_1 + 4);
            piVar7[0x1c5] = 8;
            iVar6 = cVar1 + -0x30;
            if (iVar6 == 0) {
              (*(code *)PTR_apmib_get_0042357c)(0x834);
              uVar11 = 0x835;
            }
            else {
              (*(code *)PTR_apmib_get_0042357c)(0x844,&local_96c);
              uVar11 = 0x847;
            }
            (*(code *)PTR_apmib_get_0042357c)(uVar11,&local_968);
            uVar9 = 0;
            if (local_96c != 0) {
              uVar9 = (uint)(local_968 != 0);
            }
            piVar7[0xa86] = uVar9;
            if ((local_96c != 0) && (local_968 != 0)) {
              (*(code *)PTR_printf_004235c4)("Init wireless[%d] profile...\r\n",iVar6);
              local_48 = auStack_8b6;
              local_44 = auStack_89b;
              local_40 = auStack_880;
              local_3c = auStack_865;
              local_38 = auStack_8f8;
              iVar8 = 1;
              piVar12 = piVar7;
              while( true ) {
                iVar14 = iVar8 + -1;
                uVar11 = 0x8836;
                if (local_968 <= iVar14) break;
                local_91c[0] = (undefined1)iVar8;
                if (iVar6 != 0) {
                  uVar11 = 0x8848;
                }
                iVar8 = iVar8 + 1;
                (*(code *)PTR_apmib_get_0042357c)(uVar11,local_91c);
                iVar3 = iVar14 * 0xb0;
                (*(code *)PTR_strcpy_004235d0)(piVar7 + iVar14 * 0x2c + 0xa89,local_91c);
                piVar12[0xa93] = (uint)local_8fa;
                piVar12[0xa92] = (uint)local_8fb;
                piVar12[0xaa6] = (uint)local_8b7;
                (*(code *)PTR_memcpy_004235a4)(piVar7 + iVar14 * 0x2c + 0xaa7,local_48,0xd);
                (*(code *)PTR_memcpy_004235a4)((int)piVar7 + iVar3 + 0x2aa9,local_44,0xd);
                (*(code *)PTR_memcpy_004235a4)((int)piVar7 + iVar3 + 0x2ab6,local_40,0xd);
                (*(code *)PTR_memcpy_004235a4)((int)piVar7 + iVar3 + 0x2ac3,local_3c,0xd);
                piVar12[0xa94] = (uint)local_8f9;
                piVar12 = piVar12 + 0x2c;
                (*(code *)PTR_strcpy_004235d0)(piVar7 + iVar14 * 0x2c + 0xa95,local_38);
              }
            }
            piVar7[0xa87] = local_968;
          }
          else {
            piVar7[0x1c5] = 0x20;
            (*(code *)puVar4)(0x3d,&local_848);
            local_98c = (*(code *)PTR_strlen_00423484)(&local_848);
            piVar7[0x14] = local_98c;
            (*(code *)PTR_memset_004234dc)(piVar7 + 0xc,0,0x20);
            (*(code *)PTR_memcpy_004235a4)(piVar7 + 0xc,&local_848,local_98c);
          }
        }
        else {
          piVar7[0x1c5] = 0x10;
        }
        if (local_980 == 2) {
          piVar7[0x6dd] = 1;
        }
        else {
          piVar7[0x6dd] = 0;
        }
        puVar4 = PTR_apmib_get_0042357c;
        piVar7[0xed] = 0;
        (*(code *)puVar4)(0x34,&local_990);
        piVar7[0x2c] = local_990;
        if (local_990 != 0) {
          (*(code *)PTR_apmib_get_0042357c)(0x35,&local_990);
          iVar6 = 0;
          if (local_990 != 0) {
            piVar12 = piVar7 + 0x2d;
            while (bVar2 = iVar6 < local_990, iVar6 = iVar6 + 1, bVar2) {
              local_848 = CONCAT13((char)iVar6,local_848._1_3_);
              (*(code *)PTR_apmib_get_0042357c)(0x8036,&local_848);
              (*(code *)PTR_memcpy_004235a4)(piVar12,&local_848,6);
              piVar7[0xed] = piVar7[0xed] + 1;
              piVar12 = (int *)((int)piVar12 + 6);
            }
          }
        }
        if (*(int *)PTR_vwlan_idx_0042352c == 0) {
          (*(code *)PTR_apmib_get_0042357c)(0xcd,&local_990);
          puVar4 = PTR_apmib_get_0042357c;
          piVar7[0x1da] = local_990;
          (*(code *)puVar4)(200,&local_990);
          puVar4 = PTR_apmib_get_0042357c;
          iVar6 = 1;
          if (local_990 == 1) {
            iVar6 = 3;
          }
          else if (local_990 == 2) {
            iVar6 = 4;
          }
          piVar7[0x2f8] = iVar6;
          (*(code *)puVar4)(0x385,&local_848);
          (*(code *)PTR_memcpy_004235a4)(piVar7 + 0x1de,&local_848,0xe);
          (*(code *)PTR_apmib_get_0042357c)(0x386,&local_848);
          (*(code *)PTR_memcpy_004235a4)((int)piVar7 + 0x786,&local_848,0xe);
          (*(code *)PTR_apmib_get_0042357c)(0x387,&local_848);
          (*(code *)PTR_memcpy_004235a4)(piVar7 + 0x1e5,&local_848,0xe);
          (*(code *)PTR_apmib_get_0042357c)(0x388,&local_848);
          (*(code *)PTR_memcpy_004235a4)((int)piVar7 + 0x7a2,&local_848,0xe);
          (*(code *)PTR_apmib_get_0042357c)(0x389,&local_848);
          (*(code *)PTR_memcpy_004235a4)(piVar7 + 0x1ec,&local_848,0xe);
          (*(code *)PTR_apmib_get_0042357c)(0x38a,&local_848);
          (*(code *)PTR_memcpy_004235a4)((int)piVar7 + 0x7be,&local_848,0xe);
          (*(code *)PTR_apmib_get_0042357c)(0x38b,&local_848);
          (*(code *)PTR_memcpy_004235a4)(piVar7 + 499,&local_848,0xe);
          (*(code *)PTR_apmib_get_0042357c)(0x206,&local_990);
          puVar4 = PTR_apmib_get_0042357c;
          piVar7[0x2f3] = local_990;
          (*(code *)puVar4)(0x207,&local_990);
          puVar4 = PTR_apmib_get_0042357c;
          piVar7[0x2f4] = local_990;
          (*(code *)puVar4)(0x208,&local_990);
          puVar4 = PTR_apmib_get_0042357c;
          piVar7[0x2f5] = local_990;
          (*(code *)puVar4)(0x122,&local_990);
          puVar4 = PTR_apmib_get_0042357c;
          piVar7[0x2f2] = local_990;
          (*(code *)puVar4)(0x209,&local_990);
          puVar4 = PTR_apmib_get_0042357c;
          piVar7[0x2ef] = local_990;
          (*(code *)puVar4)(0x20a,&local_990);
          puVar4 = PTR_apmib_get_0042357c;
          *(char *)(piVar7 + 0x2fd) = (char)local_990;
          (*(code *)puVar4)(0x20b,&local_990);
          puVar4 = PTR_apmib_get_0042357c;
          *(char *)((int)piVar7 + 0xbf5) = (char)local_990;
          (*(code *)puVar4)(0x20c,&local_990);
          puVar4 = PTR_apmib_get_0042357c;
          piVar7[0x302] = local_990;
          (*(code *)puVar4)(0x20d,&local_990);
          piVar7[0x304] = local_990;
          if (piVar7[0x1da] == 10) {
            (*(code *)PTR_apmib_get_0042357c)(0x107,&local_990);
            if (local_990 == 1) {
              iVar6 = 3;
LAB_00405b54:
              local_990 = iVar6;
            }
            else {
              if (local_990 == 2) {
                iVar6 = 6;
                goto LAB_00405b54;
              }
              if (local_990 == 3) {
                iVar6 = 9;
                goto LAB_00405b54;
              }
              iVar6 = 0x11;
              if (local_990 == 4) goto LAB_00405b54;
            }
            if (local_990 != 0) {
              iVar6 = 0;
              piVar12 = piVar7;
              do {
                if (*(byte *)(piVar12 + 0x1de) != 0) {
                  iVar8 = (uint)*(byte *)(piVar12 + 0x1de) - local_990;
                  if (iVar8 < 1) {
                    *(undefined1 *)(piVar12 + 0x1de) = 1;
                  }
                  else {
                    *(char *)(piVar12 + 0x1de) = (char)iVar8;
                  }
                }
                if (*(byte *)((int)piVar12 + 0x786) != 0) {
                  iVar8 = (uint)*(byte *)((int)piVar12 + 0x786) - local_990;
                  if (iVar8 < 1) {
                    *(undefined1 *)((int)piVar12 + 0x786) = 1;
                  }
                  else {
                    *(char *)((int)piVar12 + 0x786) = (char)iVar8;
                  }
                }
                if (*(byte *)(piVar12 + 0x1e5) != 0) {
                  iVar8 = (uint)*(byte *)(piVar12 + 0x1e5) - local_990;
                  if (iVar8 < 1) {
                    *(undefined1 *)(piVar12 + 0x1e5) = 1;
                  }
                  else {
                    *(char *)(piVar12 + 0x1e5) = (char)iVar8;
                  }
                }
                if (*(byte *)((int)piVar12 + 0x7a2) != 0) {
                  iVar8 = (uint)*(byte *)((int)piVar12 + 0x7a2) - local_990;
                  if (iVar8 < 1) {
                    *(undefined1 *)((int)piVar12 + 0x7a2) = 1;
                  }
                  else {
                    *(char *)((int)piVar12 + 0x7a2) = (char)iVar8;
                  }
                }
                iVar6 = iVar6 + 1;
                piVar12 = (int *)((int)piVar12 + 1);
              } while (iVar6 != 0xe);
            }
          }
          (*(code *)PTR_apmib_get_0042357c)(0x10,&local_990);
          puVar4 = PTR_apmib_get_0042357c;
          piVar7[0x29] = local_990;
          (*(code *)puVar4)(2,&local_990);
          puVar4 = PTR_apmib_get_0042357c;
          *(char *)(piVar7 + 0x1db) = (char)local_990;
          (*(code *)puVar4)(0x13,&local_990);
          puVar4 = PTR_apmib_get_0042357c;
          piVar7[0x1c7] = local_990;
          (*(code *)puVar4)(0x8cc,&local_990);
          puVar4 = PTR_apmib_get_0042357c;
          piVar7[0x1c9] = local_990;
          (*(code *)puVar4)(0xe,&local_990);
          puVar4 = PTR_apmib_get_0042357c;
          piVar7[0x1c8] = local_990;
          (*(code *)puVar4)(0x32,&local_990);
          puVar4 = PTR_apmib_get_0042357c;
          piVar7[0x1cb] = local_990;
          (*(code *)puVar4)(0x11,&local_990);
          puVar4 = PTR_apmib_get_0042357c;
          piVar7[0x2ee] = local_990;
          (*(code *)puVar4)(0x3a,&local_990);
          puVar4 = PTR_apmib_get_0042357c;
          piVar7[0x2a] = local_990;
          (*(code *)puVar4)(0x286,&local_990);
          puVar4 = PTR_apmib_get_0042357c;
          piVar7[0x946] = local_990;
          (*(code *)puVar4)(0x288,&local_990);
          puVar4 = PTR_apmib_get_0042357c;
          piVar7[0x947] = local_990;
          (*(code *)puVar4)(0x287,&local_990);
          puVar4 = PTR_apmib_get_0042357c;
          piVar7[0x94f] = local_990;
          (*(code *)puVar4)(0x2ae,&local_990);
          puVar4 = PTR_apmib_get_0042357c;
          piVar7[0x76d] = local_990;
          (*(code *)puVar4)(0x1c2,&local_990);
          puVar4 = PTR_apmib_get_0042357c;
          piVar7[0x2ff] = local_990;
          (*(code *)puVar4)(0x3e,&local_990);
          if (local_990 == 0) {
            piVar7[0x1ce] = 1;
          }
          else {
            piVar7[0x1ce] = 0;
          }
          (*(code *)PTR_apmib_get_0042357c)(0x4e,&local_990);
          puVar4 = PTR_apmib_get_0042357c;
          piVar7[0xf5] = local_990;
          (*(code *)puVar4)(0x4c,&local_990);
          puVar4 = PTR_apmib_get_0042357c;
          piVar7[0x1cf] = local_990;
          (*(code *)puVar4)(0x104,&local_990);
          puVar4 = PTR_apmib_get_0042357c;
          piVar7[0x1d2] = local_990;
          (*(code *)puVar4)(0x3f,&local_990);
          (*(code *)PTR_apmib_get_0042357c)(0x40,&local_98c);
          piVar7[0x6f3] = 0;
          if (((local_980 - 2U < 2) && (local_990 != 0)) && (local_98c != 0)) {
            iVar6 = 0;
            while (iVar6 < local_98c) {
              local_848 = CONCAT13((char)(iVar6 + 1),local_848._1_3_);
              local_30 = iVar6;
              (*(code *)PTR_apmib_get_0042357c)(0x8041,&local_848);
              local_34 = iVar6 * 10;
              (*(code *)PTR_memcpy_004235a4)((int)piVar7 + local_34 + 0x1b7c,&local_848,6);
              *(undefined4 *)((int)piVar7 + local_34 + 0x1b82) = local_842;
              piVar7[0x6f3] = piVar7[0x6f3] + 1;
              (*(code *)PTR_sprintf_004234b0)
                        (auStack_448,"ifconfig %s-wds%d hw ether %02x%02x%02x%02x%02x%02x",param_1,
                         local_30,local_964 >> 0x18,local_964 >> 0x10 & 0xff,local_964 >> 8 & 0xff,
                         local_964 & 0xff,local_960._0_1_,(undefined1)local_960);
              (*(code *)PTR_system_0042358c)(auStack_448);
              iVar6 = iVar6 + 1;
            }
            piVar7[0x6dc] = local_990;
          }
          else {
            piVar7[0x6dc] = 0;
          }
          if ((local_980 - 2U < 2) && (local_990 != 0)) {
            (*(code *)PTR_apmib_get_0042357c)(0x45,&local_990);
            puVar4 = PTR_apmib_get_0042357c;
            if (local_990 == 0) {
              piVar7[0x6f4] = 0;
            }
            else {
              iVar6 = 2;
              if (local_990 == 1) {
                (*(code *)PTR_apmib_get_0042357c)(0x47,&local_848);
                uVar11 = 10;
                piVar7[0x6f4] = 1;
              }
              else {
                if (local_990 != 2) {
                  if (local_990 != 3) {
                    iVar6 = 4;
                  }
                  piVar7[0x6f4] = iVar6;
                  (*(code *)puVar4)(0x49,&local_848);
                  (*(code *)PTR_strcpy_004235d0)(piVar7 + 0x746,&local_848);
                  goto LAB_004060a4;
                }
                (*(code *)PTR_apmib_get_0042357c)(0x47,&local_848);
                uVar11 = 0x1a;
                piVar7[0x6f4] = 5;
              }
              FUN_00404bc0(&local_848,piVar7 + 0x6f5,uVar11);
            }
          }
LAB_004060a4:
          (*(code *)PTR_apmib_get_0042357c)(0x3e,&local_990);
          if (local_990 == 0) {
            piVar7[0x1ce] = 1;
          }
          else {
            piVar7[0x1ce] = 0;
          }
          (*(code *)PTR_apmib_get_0042357c)(0x4d,&local_990);
          if ((local_990 == 1) && (local_980 == 1)) {
            piVar7[0x758] = 1;
          }
          else {
            piVar7[0x758] = 0;
          }
          (*(code *)PTR_apmib_get_0042357c)(0xc0,&local_990);
          if (local_990 == 2) {
            piVar7[0x757] = 0;
            piVar7[0x758] = 0;
          }
          puVar4 = PTR_apmib_get_0042357c;
          piVar7[0x7d7] = 0;
          (*(code *)puVar4)(0x11c,&local_97c);
          puVar4 = PTR_apmib_get_0042357c;
          piVar7[0x942] = local_97c;
          (*(code *)puVar4)(0x11d,&local_990);
          if (local_97c == 0) {
            piVar7[0x943] = 0;
          }
          else {
            if (local_990 == 0) {
              piVar7[0x943] = 1;
            }
            if (local_990 == 1) {
              piVar7[0x943] = 2;
            }
          }
          (*(code *)PTR_apmib_get_0042357c)(0x11f,&local_990);
          puVar4 = PTR_apmib_get_0042357c;
          piVar7[0x945] = local_990;
          piVar7[0x944] = local_990;
          (*(code *)puVar4)(0x11e,&local_978);
          if (local_978 == 0) {
            piVar7[0x948] = 0;
LAB_00406204:
            piVar7[0x949] = 0;
          }
          else {
            if (local_978 == 1) {
              piVar7[0x948] = 1;
              goto LAB_00406204;
            }
            if (local_978 == 2) {
              piVar7[0x949] = 1;
              piVar7[0x948] = 0;
            }
            else if (local_978 == 3) {
              piVar7[0x949] = 1;
              piVar7[0x948] = 1;
            }
          }
          puVar4 = PTR_vwlan_idx_0042352c;
          if ((piVar7[0x1c5] & 0x10U) == 0) {
LAB_004062c8:
            piVar7[0x781] = 0;
          }
          else {
            iVar6 = 0;
            *(undefined4 *)PTR_vwlan_idx_0042352c = 1;
            while (*(int *)puVar4 < 5) {
              (*(code *)PTR_apmib_get_0042357c)(0x16,&local_974);
              bVar2 = local_974 == 0;
              local_974 = 0;
              iVar6 = iVar6 + (uint)bVar2;
              *(int *)puVar4 = *(int *)puVar4 + 1;
            }
            *(undefined4 *)PTR_vwlan_idx_0042352c = 0;
            if ((iVar6 == 0) || ((local_980 != 0 && (local_980 != 3)))) goto LAB_004062c8;
            piVar7[0x781] = 1;
          }
          (*(code *)PTR_apmib_get_0042357c)(0x297,&local_990);
          piVar7[0xfa] = local_990;
        }
        if (*(int *)PTR_vwlan_idx_0042352c != 5) {
          (*(code *)PTR_apmib_get_0042357c)(0x12,&local_990);
          puVar4 = PTR_apmib_get_0042357c;
          piVar7[0xef] = local_990;
          (*(code *)puVar4)(0xf,&local_990);
          puVar4 = PTR_apmib_get_0042357c;
          piVar7[0xee] = local_990;
          (*(code *)puVar4)(0x33,&local_990);
          puVar4 = PTR_apmib_get_0042357c;
          if (local_990 == 0) {
            local_968 = 0;
            piVar7[0xf2] = 0;
            (*(code *)puVar4)(0x4b,&local_968);
            piVar7[0xf3] = local_968;
          }
          else {
            piVar7[0xf2] = 1;
          }
          (*(code *)PTR_apmib_get_0042357c)(0x15,&local_990);
          puVar4 = PTR_apmib_get_0042357c;
          piVar7[0x1c6] = local_990;
          (*(code *)puVar4)(0x4a,&local_990);
          if (((local_980 == 1) || (piVar7[0x1d2] != 1)) || (local_990 != 2)) {
            if (local_990 == 8) {
              iVar6 = 3;
            }
            else {
              if (local_990 == 2) {
                piVar7[0xf8] = 1;
                iVar6 = 3;
                goto LAB_0040645c;
              }
              if (local_990 != 10) {
                iVar6 = local_990;
                if (local_990 != 0x40) goto LAB_00406440;
                iVar6 = 0xc;
                goto LAB_0040644c;
              }
              iVar6 = 1;
            }
            piVar7[0xf8] = iVar6;
            iVar6 = 0xb;
          }
          else {
            iVar6 = 3;
LAB_00406440:
            if (iVar6 == 0x48) {
              iVar6 = 4;
LAB_0040644c:
              piVar7[0xf8] = iVar6;
              iVar6 = 0x4c;
            }
            else {
              piVar7[0xf8] = 0;
            }
          }
LAB_0040645c:
          puVar4 = PTR_apmib_get_0042357c;
          *(char *)(piVar7 + 0x6d4) = (char)iVar6;
          (*(code *)puVar4)(0x13b,&local_990);
          puVar4 = PTR_apmib_get_0042357c;
          piVar7[0x1d7] = local_990;
          (*(code *)puVar4)(0x59,&local_990);
          puVar4 = PTR_apmib_get_0042357c;
          piVar7[0x788] = local_990;
          (*(code *)puVar4)(0x8cd,&local_990);
          piVar7[0x789] = local_990;
        }
        (*(code *)PTR_apmib_get_0042357c)(0x14,&local_990);
        (*(code *)PTR_apmib_get_0042357c)(0x19,&local_988);
        if ((local_990 == 1) && (local_988 != 1)) {
          local_990 = 0;
        }
        piVar7[0x14b] = local_990;
        if (local_988 == 0) {
          *(undefined1 *)(piVar7 + 0x14c) = 0;
        }
        else if (local_988 == 1) {
          (*(code *)PTR_apmib_get_0042357c)(3,&local_984);
          puVar4 = PTR_apmib_get_0042357c;
          if (local_984 == 1) {
            *(undefined1 *)(piVar7 + 0x14c) = 1;
            (*(code *)puVar4)(4,&local_848);
            puVar4 = PTR_apmib_get_0042357c;
            piVar7[0x17b] = local_848;
            *(undefined1 *)(piVar7 + 0x17c) = local_844;
            (*(code *)puVar4)(5,&local_848);
            (*(code *)PTR_memcpy_004235a4)(piVar7 + 0x17f,&local_848,5);
            (*(code *)PTR_apmib_get_0042357c)(6,&local_848);
            (*(code *)PTR_memcpy_004235a4)(piVar7 + 0x183,&local_848,5);
            (*(code *)PTR_apmib_get_0042357c)(7,&local_848);
            uVar11 = 5;
          }
          else {
            *(undefined1 *)(piVar7 + 0x14c) = 5;
            (*(code *)puVar4)(8,&local_848);
            (*(code *)PTR_memcpy_004235a4)(piVar7 + 0x17b,&local_848,0xd);
            (*(code *)PTR_apmib_get_0042357c)(9,&local_848);
            (*(code *)PTR_memcpy_004235a4)(piVar7 + 0x17f,&local_848,0xd);
            (*(code *)PTR_apmib_get_0042357c)(10,&local_848);
            (*(code *)PTR_memcpy_004235a4)(piVar7 + 0x183,&local_848,0xd);
            (*(code *)PTR_apmib_get_0042357c)(0xb,&local_848);
            uVar11 = 0xd;
          }
          (*(code *)PTR_memcpy_004235a4)(piVar7 + 0x187,&local_848,uVar11);
          (*(code *)PTR_apmib_get_0042357c)(0xd,&local_990);
          piVar7[0x14d] = local_990;
        }
        else {
          *(undefined1 *)(piVar7 + 0x14c) = 2;
        }
        if ((0 < *(int *)PTR_vwlan_idx_0042352c) && (piVar7[0x1d7] != 0)) {
          piVar7[0x1cf] = 1;
        }
        iVar6 = 1;
        if (local_988 < 2) {
          (*(code *)PTR_apmib_get_0042357c)(0x23,&local_990);
          (*(code *)PTR_apmib_get_0042357c)(0x2d,&local_98c);
          if ((local_990 != 0) || (iVar6 = 0, local_98c != 0)) {
            iVar6 = 1;
          }
        }
        puVar4 = PTR_apmib_get_0042357c;
        piVar7[0x175] = iVar6;
        (*(code *)puVar4)(0x27,&local_990);
        puVar4 = PTR_apmib_get_0042357c;
        piVar7[0x178] = local_990;
        (*(code *)puVar4)(0x1c4,&local_968);
        (*(code *)PTR_apmib_get_0042357c)(0x1c5,&local_96c);
        puVar4 = PTR_apmib_get_0042357c;
        iVar6 = 5;
        if (local_968 == 0) {
          iVar6 = 4;
          if (local_96c == 0) {
            iVar6 = 0;
          }
        }
        else if (local_96c == 0) {
          iVar6 = 3;
        }
        piVar7[0x93e] = local_968 << 10;
        piVar7[0x8dc] = iVar6;
        piVar7[0x93f] = local_96c << 10;
        (*(code *)puVar4)(0x1c,&local_970);
        puVar4 = PTR_apmib_get_0042357c;
        if (((local_970 & 2) == 0) || (local_988 < 2)) {
          piVar7[0x14f] = 0;
        }
        else {
          if (local_988 == 2) {
            local_990 = 1;
          }
          else if (local_988 == 4) {
            local_990 = 2;
          }
          else {
            if (local_988 != 6) {
              pcVar5 = "invalid ENCRYPT value!";
              pcVar15 = (code *)PTR_puts_00423594;
              goto LAB_00404db8;
            }
            local_990 = 3;
          }
          piVar7[0x14f] = local_990;
          (*(code *)puVar4)(0x1e,&local_848);
          (*(code *)PTR_strcpy_004235d0)(piVar7 + 0x152,&local_848);
          (*(code *)PTR_apmib_get_0042357c)(0x1f,&local_990);
          piVar7[0x173] = local_990;
        }
        if ((local_970 != 0) && (1 < local_988)) {
          if ((local_988 == 2) || (local_988 == 6)) {
            (*(code *)PTR_apmib_get_0042357c)(0x1d,&local_98c);
            if (local_98c == 1) {
              local_990 = 2;
            }
            else if (local_98c == 2) {
              local_990 = 8;
            }
            else {
              if (local_98c != 3) {
                pcVar5 = "invalid WPA_CIPHER_SUITE value!";
                pcVar15 = (code *)PTR_puts_00423594;
                goto LAB_00404db8;
              }
              local_990 = 10;
            }
            piVar7[0x150] = local_990;
          }
          if ((local_988 == 4) || (local_988 == 6)) {
            (*(code *)PTR_apmib_get_0042357c)(0x26,&local_98c);
            if (local_98c == 1) {
              local_990 = 2;
            }
            else if (local_98c == 2) {
              local_990 = 8;
            }
            else {
              if (local_98c != 3) {
                pcVar5 = "invalid WPA2_CIPHER_SUITE value!";
                pcVar15 = (code *)PTR_puts_00423594;
                goto LAB_00404db8;
              }
              local_990 = 10;
            }
            piVar7[0x151] = local_990;
          }
        }
        local_948 = 0x3340;
        local_94c = piVar7;
        iVar6 = (*(code *)PTR_ioctl_004235c8)(pcVar5,0x8b43,auStack_95c);
        if (-1 < iVar6) {
          (*(code *)PTR_close_00423460)(pcVar5);
          (*(code *)PTR_free_0042345c)(piVar7);
          return 0;
        }
      }
      else {
        local_948 = 0x3340;
        local_94c = piVar7;
        iVar6 = (*(code *)PTR_ioctl_004235c8)(pcVar5,0x8b43,auStack_95c);
        if (-1 < iVar6) {
          piVar7[0x784] = 0;
          goto LAB_004050a4;
        }
      }
      pcVar10 = "Set WLAN MIB failed!";
    }
    else {
      pcVar10 = "WLAN MIB version mismatch!";
    }
LAB_00406a58:
    (*(code *)PTR_puts_00423594)(pcVar10);
  }
  else {
    (*(code *)PTR_sprintf_004234b0)(&local_848,"wlan%d",*(undefined4 *)PTR_wlan_idx_00423518);
    (*(code *)PTR_strncpy_0042350c)(auStack_93c,&local_848,0x10);
    iVar6 = (*(code *)PTR_ioctl_004235c8)(pcVar5,0x8b01,auStack_93c);
    if (-1 < iVar6) goto LAB_00404f70;
    (*(code *)PTR_printf_004235c4)("Root Interface %s open failed!\n",&local_848);
  }
  (*(code *)PTR_free_0042345c)(piVar7);
  pcVar15 = (code *)PTR_close_00423460;
LAB_00404db8:
  (*pcVar15)(pcVar5);
  return 0xffffffff;
}

