/* setWlan_Applications @ 0040d8e0 */

undefined4 setWlan_Applications(undefined4 param_1,undefined4 param_2)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  char *pcVar8;
  char cVar10;
  int iVar9;
  bool bVar11;
  char cVar13;
  uint uVar12;
  code *pcVar14;
  int local_5e8;
  undefined4 local_5e4;
  int local_5e0;
  int local_5dc;
  int local_5d8;
  undefined4 local_5d4;
  int local_5d0;
  uint local_5cc;
  uint local_5c8;
  int local_5c4;
  int local_5c0;
  int local_5bc;
  int local_5b8;
  int local_5b4;
  int local_5b0;
  int local_5ac;
  int local_5a8;
  int local_5a4;
  int local_5a0;
  int local_59c;
  int local_598;
  int local_594;
  undefined4 local_590;
  int local_58c;
  char acStack_588 [12];
  char acStack_57c [6];
  char local_576;
  char local_575;
  undefined4 local_56c;
  undefined4 local_568;
  undefined4 local_564;
  undefined4 local_560;
  undefined4 local_55c;
  undefined4 local_558;
  undefined4 local_554;
  undefined4 local_550;
  char acStack_54c [32];
  undefined1 auStack_52c [32];
  char local_50c [32];
  char acStack_4ec [32];
  char acStack_4cc [40];
  char acStack_4a4 [40];
  char *local_47c [8];
  char *local_45c [8];
  undefined1 local_43c [100];
  undefined1 auStack_3d8 [100];
  undefined1 auStack_374 [200];
  char local_2ac [200];
  char local_1e4 [200];
  char local_11c [204];
  int *local_50;
  undefined1 *local_4c;
  undefined1 *local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  char *local_34;
  char *local_30;
  char *local_2c;
  
  (*(code *)PTR_memset_004231a8)(local_2ac,0,200);
  local_5e8 = 0;
  local_5e4 = 0;
  local_5e0 = 0;
  local_5dc = 0;
  local_5d8 = 0;
  local_5d4 = 0;
  local_5d0 = 0;
  local_5cc = 0;
  local_5c8 = 0;
  local_5c4 = 0;
  local_5c0 = 0;
  local_5bc = 0;
  local_5b8 = 0;
  local_5b4 = 0;
  local_5b0 = 0;
  local_5ac = 0;
  local_5a8 = 0;
  local_5a4 = 0;
  local_5a0 = 0;
  local_59c = 0;
  local_598 = 0;
  local_594 = 0;
  (*(code *)PTR_memset_004231a8)(acStack_54c,0,0x1e);
  (*(code *)PTR_memset_004231a8)(auStack_52c,0,0x1e);
  (*(code *)PTR_memset_004231a8)(local_50c,0,0x1e);
  (*(code *)PTR_memset_004231a8)(local_1e4,0,200);
  (*(code *)PTR_memset_004231a8)(local_11c,0,200);
  (*(code *)PTR_memset_004231a8)(acStack_4ec,0,0x1e);
  local_590 = 0;
  local_58c = 0;
  local_56c = 0;
  local_568 = 0;
  local_564 = 0;
  local_560 = 0;
  local_55c = 0;
  local_558 = 0;
  local_554 = 0;
  local_550 = 0;
  (*(code *)PTR_memset_004231a8)(local_47c,0,0x40);
  local_590 = 0;
  (*(code *)PTR_strcpy_004232f4)(auStack_374,param_2);
  iVar3 = (*(code *)PTR_strtok_r_004232dc)(auStack_374," ",&local_590);
  if (iVar3 != 0) {
    do {
      (*(code *)PTR_strcpy_004232f4)(acStack_57c,iVar3);
      iVar3 = (*(code *)PTR_strncmp_004231fc)(acStack_57c,&DAT_004118d0,4);
      pcVar6 = acStack_4ec;
      pcVar8 = acStack_57c;
      pcVar14 = (code *)PTR_strcpy_004232f4;
      if ((iVar3 == 0) && (pcVar6 = local_11c, local_11c[0] != '\0')) {
        (*(code *)PTR_sprintf_00423164)(acStack_54c," %s",acStack_57c);
        pcVar8 = acStack_54c;
        pcVar14 = (code *)PTR_strcat_00423220;
      }
      (*pcVar14)(pcVar6,pcVar8);
      iVar3 = (*(code *)PTR_strtok_r_004232dc)(0," ",&local_590);
    } while (iVar3 != 0);
  }
  iVar3 = (*(code *)PTR_isFileExist_004230f8)("/var/run/iwcontrol.pid");
  if (iVar3 != 0) {
    iVar3 = (*(code *)PTR_getPid_fromFile_004232c4)("/var/run/iwcontrol.pid");
    if (iVar3 != -1) {
      local_34 = acStack_588;
      (*(code *)PTR_sprintf_00423164)(acStack_588,&DAT_00411514,iVar3);
      (*(code *)PTR_RunSystemCmd_00423148)(0,&DAT_00410fe4,&DAT_00410fec,local_34,"");
    }
    (*(code *)PTR_unlink_004231f0)("/var/run/iwcontrol.pid");
  }
  local_590 = 0;
  (*(code *)PTR_strcpy_004232f4)(auStack_374,local_11c);
  iVar3 = (*(code *)PTR_strtok_r_004232dc)(auStack_374," ",&local_590);
  if (iVar3 != 0) {
    do {
      (*(code *)PTR_strcpy_004232f4)(acStack_57c,iVar3);
      iVar3 = (*(code *)PTR_strncmp_004231fc)(acStack_57c,&DAT_004118d0,4);
      if (iVar3 == 0) {
        (*(code *)PTR_sprintf_00423164)(local_43c,"/var/run/auth-%s.pid",acStack_57c);
        iVar3 = (*(code *)PTR_isFileExist_004230f8)(local_43c);
        if (iVar3 != 0) {
          iVar3 = (*(code *)PTR_getPid_fromFile_004232c4)(local_43c);
          if (iVar3 != -1) {
            local_34 = acStack_588;
            (*(code *)PTR_sprintf_00423164)(acStack_588,&DAT_00411514,iVar3);
            (*(code *)PTR_RunSystemCmd_00423148)(0,&DAT_00410fe4,&DAT_00410fec,local_34,"");
          }
          (*(code *)PTR_unlink_004231f0)(local_43c);
          (*(code *)PTR_sprintf_00423164)(auStack_3d8,"/var/run/auth-%s-vxd.pid",acStack_57c);
          iVar3 = (*(code *)PTR_isFileExist_004230f8)(auStack_3d8);
          if (iVar3 != 0) {
            iVar3 = (*(code *)PTR_getPid_fromFile_004232c4)(auStack_3d8);
            if (iVar3 != -1) {
              local_34 = acStack_588;
              (*(code *)PTR_sprintf_00423164)(acStack_588,&DAT_00411514,iVar3);
              (*(code *)PTR_RunSystemCmd_00423148)(0,&DAT_00410fe4,&DAT_00410fec,local_34,"");
            }
            (*(code *)PTR_unlink_004231f0)(auStack_3d8);
          }
        }
        (*(code *)PTR_sprintf_00423164)(auStack_3d8,"/var/run/wscd-%s.pid",acStack_57c);
        iVar3 = (*(code *)PTR_isFileExist_004230f8)(auStack_3d8);
        if (iVar3 != 0) {
          iVar3 = (*(code *)PTR_getPid_fromFile_004232c4)(auStack_3d8);
          if (iVar3 != -1) {
            local_34 = acStack_588;
            (*(code *)PTR_sprintf_00423164)(acStack_588,&DAT_00411514,iVar3);
            (*(code *)PTR_RunSystemCmd_00423148)(0,&DAT_00410fe4,&DAT_00410fec,local_34,"");
          }
          (*(code *)PTR_unlink_004231f0)(auStack_3d8);
        }
        (*(code *)PTR_RunSystemCmd_00423148)("/proc/gpio",&DAT_00411550,&DAT_00411ca0,"");
      }
      do {
        iVar3 = (*(code *)PTR_isFileExist_004230f8)("/var/run/wscd-wlan0.pid");
        if (iVar3 == 0) {
          iVar3 = (*(code *)PTR_isFileExist_004230f8)("/var/run/wscd-wlan1.pid");
          if (iVar3 == 0) {
            iVar3 = (*(code *)PTR_isFileExist_004230f8)("/var/run/wscd-wlan0-wlan1.pid");
            if ((iVar3 == 0) ||
               (iVar3 = (*(code *)PTR_getPid_fromFile_004232c4)("/var/run/wscd-wlan0-wlan1.pid"),
               iVar3 == -1)) break;
            (*(code *)PTR_sprintf_00423164)(acStack_588,&DAT_00411514,iVar3);
            (*(code *)PTR_RunSystemCmd_00423148)(0,&DAT_00410fe4,&DAT_00410fec,acStack_588,"");
            pcVar6 = "/var/run/wscd-wlan0-wlan1.pid";
          }
          else {
            iVar3 = (*(code *)PTR_getPid_fromFile_004232c4)("/var/run/wscd-wlan1.pid");
            if (iVar3 == -1) break;
            (*(code *)PTR_sprintf_00423164)(acStack_588,&DAT_00411514,iVar3);
            (*(code *)PTR_RunSystemCmd_00423148)(0,&DAT_00410fe4,&DAT_00410fec,acStack_588,"");
            pcVar6 = "/var/run/wscd-wlan1.pid";
          }
        }
        else {
          iVar3 = (*(code *)PTR_getPid_fromFile_004232c4)("/var/run/wscd-wlan0.pid");
          if (iVar3 == -1) break;
          (*(code *)PTR_sprintf_00423164)(acStack_588,&DAT_00411514,iVar3);
          (*(code *)PTR_RunSystemCmd_00423148)(0,&DAT_00410fe4,&DAT_00410fec,acStack_588,"");
          pcVar6 = "/var/run/wscd-wlan0.pid";
        }
        (*(code *)PTR_unlink_004231f0)(pcVar6);
        (*(code *)PTR_sleep_00423268)(1);
        iVar3 = (*(code *)PTR_find_pid_by_name_00423280)(&DAT_00411f84);
      } while (0 < iVar3);
      iVar3 = (*(code *)PTR_strtok_r_004232dc)(0," ",&local_590);
    } while (iVar3 != 0);
  }
  iVar3 = (*(code *)PTR_isFileExist_004230f8)("/var/run/iapp.pid");
  if (iVar3 != 0) {
    iVar3 = (*(code *)PTR_getPid_fromFile_004232c4)("/var/run/iapp.pid");
    if (iVar3 != -1) {
      local_34 = acStack_588;
      (*(code *)PTR_sprintf_00423164)(acStack_588,&DAT_00411514,iVar3);
      (*(code *)PTR_RunSystemCmd_00423148)(0,&DAT_00410fe4,&DAT_00410fec,local_34,"");
    }
    (*(code *)PTR_unlink_004231f0)("/var/run/iapp.pid");
  }
  (*(code *)PTR_system_00423270)("rm -f /var/*.fifo");
  iVar3 = (*(code *)PTR_strcmp_0042317c)(param_1,&DAT_00410fe4);
  if (iVar3 != 0) {
    (*(code *)PTR_puts_0042327c)("Init Wlan application...");
    iVar3 = (*(code *)PTR_SetWlan_idx_00423298)("wlan0");
    if (iVar3 != 0) {
      (*(code *)PTR_apmib_get_00423264)(0x16,&local_5e4);
      (*(code *)PTR_apmib_get_00423264)(0x3b,&local_5e8);
      (*(code *)PTR_apmib_get_00423264)(0x3e,&local_5dc);
      (*(code *)PTR_apmib_get_00423264)(0x10e,&local_5d8);
      (*(code *)PTR_apmib_get_00423264)(0x23,&local_5d0);
      (*(code *)PTR_apmib_get_00423264)(0x19,&local_5cc);
      (*(code *)PTR_apmib_get_00423264)(0x2d,&local_5c8);
      (*(code *)PTR_apmib_get_00423264)(0x3c,&local_5d4);
      (*(code *)PTR_apmib_get_00423264)(0x1c,&local_5e0);
      (*(code *)PTR_apmib_get_00423264)(0x117,&local_58c);
    }
    local_590 = 0;
    (*(code *)PTR_strcpy_004232f4)(auStack_374,local_11c);
    bVar2 = false;
    iVar3 = (*(code *)PTR_strtok_r_004232dc)(auStack_374," ",&local_590);
    if (iVar3 != 0) {
      cVar10 = '\0';
      local_50 = (int *)0x0;
      local_44 = 0;
      bVar11 = false;
      local_40 = 0;
      local_38 = 0;
      local_3c = 0;
      do {
        (*(code *)PTR_strcpy_004232f4)(acStack_57c,iVar3);
        iVar3 = (*(code *)PTR_strncmp_004231fc)(acStack_57c,&DAT_004118d0,4);
        if (iVar3 == 0) {
          uVar4 = (*(code *)PTR_strlen_00423108)(acStack_57c);
          cVar13 = '\0';
          if (8 < uVar4) {
            cVar13 = local_576;
            cVar10 = local_575;
          }
          iVar3 = (*(code *)PTR_SetWlan_idx_00423298)(acStack_57c);
          if (iVar3 != 0) {
            (*(code *)PTR_apmib_get_00423264)(0x16,&local_5c4);
            (*(code *)PTR_apmib_get_00423264)(0x3b,&local_5c0);
            (*(code *)PTR_apmib_get_00423264)(0x3f,&local_5bc);
            (*(code *)PTR_apmib_get_00423264)(0x40,&local_5b8);
            (*(code *)PTR_apmib_get_00423264)(0x19,&local_5b4);
            (*(code *)PTR_apmib_get_00423264)(0x1c,&local_5ac);
            if ((local_5c4 == 0) && (3 < local_5c0)) {
              (*(code *)PTR_apmib_get_00423264)(0x22f,&local_5a8);
            }
            if ((((local_5c4 == 0) && (local_5c0 - 2U < 2)) && (local_5bc != 0)) &&
               ((local_5b8 != 0 &&
                ((*(code *)PTR_apmib_get_00423264)(0x45,&local_5b0), local_5b0 - 3U < 2)))) {
              (*(code *)PTR_sprintf_00423164)(local_43c,"/var/wpa-wds-%s.conf",acStack_57c);
              (*(code *)PTR_RunSystemCmd_00423148)
                        (0,"flash",&DAT_00411fe8,acStack_57c,local_43c,&DAT_00411fec,"");
              (*(code *)PTR_RunSystemCmd_00423148)
                        (0,&DAT_00411ff0,acStack_57c,acStack_4ec,&DAT_00411fec,local_43c,"");
              local_4c = auStack_3d8;
              (*(code *)PTR_sprintf_00423164)(local_4c,"/var/run/auth-%s.pid",acStack_57c);
              iVar3 = 0;
              do {
                iVar3 = iVar3 + 1;
                iVar5 = (*(code *)PTR_isFileExist_004230f8)(local_4c);
                if (iVar5 != 0) break;
                (*(code *)PTR_sleep_00423268)(1);
              } while (iVar3 != 10);
            }
            if (local_5b4 < 2) {
              (*(code *)PTR_apmib_get_00423264)(0x23,&local_5a4);
              (*(code *)PTR_apmib_get_00423264)(0x2d,&local_5a0);
              if ((local_5a4 == 0) && (local_5a0 == 0)) {
LAB_0040e6dc:
                bVar1 = false;
                local_4c = (undefined1 *)0x0;
              }
              else {
LAB_0040e6d0:
                bVar1 = true;
                local_4c = (undefined1 *)0x1;
              }
            }
            else {
              if (local_5b4 == 7) goto LAB_0040e6dc;
              if (local_5ac == 1) goto LAB_0040e6d0;
              bVar1 = false;
              local_4c = (undefined1 *)0x1;
            }
            if (((local_5c4 == 0) && (3 < local_5c0)) && (local_5a8 != 0)) {
              local_48 = local_43c;
              (*(code *)PTR_sprintf_00423164)(local_43c,"/var/wpa-%s-msh0.conf",acStack_57c);
              (*(code *)PTR_RunSystemCmd_00423148)
                        (0,"flash",&DAT_00411fe8,acStack_57c,local_48,&DAT_00411d84,"");
              (*(code *)PTR_RunSystemCmd_00423148)
                        (0,&DAT_00411ff0,acStack_57c,acStack_4ec,&DAT_00411d84,local_48,"");
              local_48 = auStack_3d8;
              (*(code *)PTR_sprintf_00423164)(local_48,"/var/run/auth-%s.pid",acStack_57c);
              iVar3 = 0;
              do {
                iVar3 = iVar3 + 1;
                iVar5 = (*(code *)PTR_isFileExist_004230f8)(local_48);
                if (iVar5 != 0) break;
                (*(code *)PTR_sleep_00423268)(1);
              } while (iVar3 != 10);
            }
            if ((local_4c == (undefined1 *)0x0) || (local_5c4 != 0)) {
LAB_0040e998:
              if (cVar13 == 'v') {
LAB_0040e9a0:
                if (cVar10 == 'x') {
                  if ((local_5c4 == 0) &&
                     ((iVar3 = (*(code *)PTR_strcmp_0042317c)(auStack_52c,&DAT_00411ff0), iVar3 != 0
                      || (bVar1)))) {
                    pcVar8 = local_50c;
                    (*(code *)PTR_strcat_00423220)(pcVar8," ");
                    pcVar6 = acStack_57c;
                    pcVar14 = (code *)PTR_strcat_00423220;
                    goto LAB_0040ea6c;
                  }
                }
                else if (cVar10 == 'a') goto LAB_0040ea24;
              }
              else {
LAB_0040ea10:
                if (cVar10 != 'x') {
                  (*(code *)PTR_apmib_get_00423264)(0x3e,&local_594);
                  (*(code *)PTR_apmib_get_00423264)(0x10e,&local_598);
                  if (((local_3c != 0) || (local_594 == 0)) || (local_598 == 0)) {
                    pcVar6 = acStack_57c;
                    pcVar14 = (code *)PTR_strcpy_004232f4;
                    if (local_1e4[0] != '\0') {
                      (*(code *)PTR_sprintf_00423164)(acStack_54c," %s",pcVar6);
                      pcVar6 = acStack_54c;
                      pcVar14 = (code *)PTR_strcat_00423220;
                    }
                    (*pcVar14)(local_1e4,pcVar6);
                  }
                  if (cVar10 != 'a') {
                    if (local_5c4 == 0) {
                      bVar11 = true;
                    }
                    if (((local_5c0 == 0) || (local_5c0 == 3)) ||
                       ((local_5c0 == 4 || (local_5c0 == 6)))) {
                      local_44 = 1;
                    }
                    if (local_594 == 0) {
                      local_50 = (int *)0x1;
                    }
                  }
                }
              }
            }
            else {
              local_34 = acStack_57c;
              (*(code *)PTR_sprintf_00423164)(local_43c,"/var/wpa-%s.conf",local_34);
              (*(code *)PTR_RunSystemCmd_00423148)(0,"flash",&DAT_00411fe8,local_34,local_43c,"");
              pcVar6 = "auth";
              if (local_5c0 == 1) {
                (*(code *)PTR_apmib_get_00423264)(0x3c,&local_59c);
                if (local_59c == 0) {
                  pcVar6 = "client-infra";
                }
                else {
                  pcVar6 = "client-adhoc";
                }
              }
              (*(code *)PTR_strcpy_004232f4)(auStack_52c,pcVar6);
              if (((cVar13 == 'v') && (cVar10 == 'a')) && ((local_5e8 != 0 && (local_5e8 != 3)))) {
                local_40 = 1;
              }
              if (((local_5c0 == 2) || (local_40 != 0)) || ((local_5ac == 2 && (!bVar1))))
              goto LAB_0040e998;
              (*(code *)PTR_RunSystemCmd_00423148)
                        (0,&DAT_00411ff0,acStack_57c,acStack_4ec,auStack_52c,local_43c,"");
              bVar2 = true;
              if (cVar13 != 'v') {
                local_3c = 1;
                goto LAB_0040ea10;
              }
              if (cVar10 != 'a') {
                local_3c = 1;
                goto LAB_0040e9a0;
              }
              local_38 = 1;
LAB_0040ea24:
              if ((local_5c4 == 0) && ((local_5dc == 0 || (local_38 != 0)))) {
                pcVar8 = local_1e4;
                pcVar6 = acStack_57c;
                pcVar14 = (code *)PTR_strcpy_004232f4;
                if (local_1e4[0] != '\0') {
                  (*(code *)PTR_sprintf_00423164)(acStack_54c," %s",pcVar6);
                  pcVar6 = acStack_54c;
                  pcVar14 = (code *)PTR_strcat_00423220;
                }
LAB_0040ea6c:
                (*pcVar14)(pcVar8,pcVar6);
              }
            }
          }
        }
        iVar3 = (*(code *)PTR_strtok_r_004232dc)(0," ",&local_590);
      } while (iVar3 != 0);
      if (((bVar11) && (local_44 == 1)) && (local_50 == (int *)0x1)) {
        local_590 = 0;
        (*(code *)PTR_strcpy_004232f4)(auStack_374,local_1e4);
        pcVar6 = (char *)(*(code *)PTR_strtok_r_004232dc)(auStack_374," ",&local_590);
        if (pcVar6 != (char *)0x0) {
          local_50 = &local_5e8;
          do {
            local_34 = pcVar6;
            iVar3 = (*(code *)PTR_strcmp_0042317c)(pcVar6,"wlan0");
            if ((iVar3 == 0) ||
               (iVar3 = (*(code *)PTR_strcmp_0042317c)(local_34,"wlan1"), iVar3 == 0)) {
              (*(code *)PTR_SetWlan_idx_00423298)(local_34);
              (*(code *)PTR_apmib_get_00423264)(0x3b,local_50);
              (*(code *)PTR_apmib_get_00423264)(0x3e,&local_5dc);
              if ((((local_5e8 == 0) || ((local_5e8 == 3 || (local_5e8 == 4)))) || (local_5e8 == 6))
                 && (local_5dc == 0)) goto LAB_0040ed30;
            }
            else {
LAB_0040ed30:
              pcVar6 = local_34;
              pcVar14 = (code *)PTR_strcpy_004232f4;
              if (local_2ac[0] != '\0') {
                (*(code *)PTR_sprintf_00423164)(acStack_54c," %s");
                pcVar6 = acStack_54c;
                pcVar14 = (code *)PTR_strcat_00423220;
              }
              (*pcVar14)(local_2ac,pcVar6);
            }
            pcVar6 = (char *)(*(code *)PTR_strtok_r_004232dc)(0," ",&local_590);
          } while (pcVar6 != (char *)0x0);
        }
        (*(code *)PTR_sprintf_00423164)(local_43c,"iapp %s %s",acStack_4ec,local_2ac);
        (*(code *)PTR_system_00423270)(local_43c);
        iVar3 = (*(code *)PTR_isFileExist_004230f8)("/var/restart_iapp");
        if (iVar3 != 0) {
          (*(code *)PTR_unlink_004231f0)("/var/restart_iapp");
        }
        (*(code *)PTR_RunSystemCmd_00423148)("/var/restart_iapp",&DAT_00411550,local_43c,"");
        bVar2 = true;
      }
    }
    iVar3 = (*(code *)PTR_isFileExist_004230f8)("/bin/wscd");
    if (iVar3 != 0) {
      (*(code *)PTR_memset_004231a8)(local_43c,0,100);
      (*(code *)PTR_memset_004231a8)(auStack_3d8,0,100);
      local_590 = 0;
      (*(code *)PTR_strcpy_004232f4)(auStack_374,local_1e4);
      pcVar6 = (char *)(*(code *)PTR_strtok_r_004232dc)(auStack_374," ",&local_590);
      while (pcVar6 != (char *)0x0) {
        (*(code *)PTR_memset_004231a8)(acStack_4cc,0,0x28);
        (*(code *)PTR_memset_004231a8)(acStack_4a4,0,0x28);
        iVar3 = (*(code *)PTR_strcmp_0042317c)(pcVar6,"wlan0");
        if ((iVar3 == 0) || (iVar3 = (*(code *)PTR_strcmp_0042317c)(pcVar6,"wlan1"), iVar3 == 0)) {
          (*(code *)PTR_SetWlan_idx_00423298)(pcVar6);
          (*(code *)PTR_apmib_get_00423264)(0x3b,&local_5e8);
          (*(code *)PTR_apmib_get_00423264)(0x23,&local_5d0);
          (*(code *)PTR_apmib_get_00423264)(0x19,&local_5cc);
          (*(code *)PTR_apmib_get_00423264)(0x2d,&local_5c8);
          (*(code *)PTR_apmib_get_00423264)(0x1c,&local_5e0);
          (*(code *)PTR_apmib_get_00423264)(0x117,&local_58c);
          uVar4 = local_5cc;
          local_5e4 = 0;
          local_5d4 = 0;
          uVar12 = local_5cc ^ 7;
          if ((1 < (int)local_5cc) || (bVar11 = true, uVar12 = local_5c8, local_5d0 == 0)) {
            bVar11 = uVar12 != 0;
          }
          iVar3 = (*(code *)PTR_strcmp_0042317c)(pcVar6,"wlan0");
          if ((iVar3 == 0) && ((local_5d8 != 0 || (local_5e8 == 2)))) goto LAB_0040f588;
          if (local_5e8 == 0) {
            if ((int)uVar4 < 2) {
              if (!bVar11) goto LAB_0040f0a8;
            }
            else if ((uVar4 == 7) || (local_5e0 != 1)) goto LAB_0040f0a8;
          }
          else {
LAB_0040f0a8:
            local_47c[3] = (char *)0x0;
            local_47c[1] = (char *)0x0;
            local_47c[2] = (undefined *)0x0;
            local_47c[0] = "wscd";
            iVar3 = (*(code *)PTR_isFileExist_004230f8)("/var/wps/simplecfgservice.xml");
            if (iVar3 == 0) {
              iVar3 = (*(code *)PTR_isFileExist_004230f8)("/var/wps");
              if (iVar3 != 0) {
                (*(code *)PTR_RunSystemCmd_00423148)(0,&DAT_004115bc,"/var/wps",&DAT_004120a4,"");
              }
              (*(code *)PTR_RunSystemCmd_00423148)(0,"mkdir","/var/wps","");
              (*(code *)PTR_system_00423270)("cp /etc/simplecfg*.xml /var/wps");
            }
            if (local_5e8 == 1) {
              local_47c[1] = "-mode";
              local_47c[2] = "2";
              local_58c = 0;
              iVar3 = 3;
            }
            else {
              local_47c[1] = "-start";
              iVar3 = 2;
            }
            if (local_58c == 1) {
              local_2c = "255.255.255.255";
              local_30 = "netmask";
              local_34 = "239.255.255.250";
              (*(code *)PTR_RunSystemCmd_00423148)
                        (0,"route",&DAT_00411dbc,&DAT_00411c24,"239.255.255.250","netmask",
                         "255.255.255.255",acStack_4ec,"");
              (*(code *)PTR_RunSystemCmd_00423148)
                        (0,"route",&DAT_00411c20,&DAT_00411c24,local_34,local_30,local_2c,
                         acStack_4ec,"");
            }
            (*(code *)PTR_sprintf_00423164)(acStack_4cc,"/var/wsc-%s.conf",pcVar6);
            (*(code *)PTR_RunSystemCmd_00423148)
                      (0,"flash","upd-wsc-conf","/etc/wscd.conf",acStack_4cc,pcVar6,"");
            local_47c[iVar3] = "-c";
            local_47c[iVar3 + 1] = acStack_4cc;
            local_47c[iVar3 + 2] = "-w";
            local_47c[iVar3 + 3] = pcVar6;
            local_47c[iVar3 + 4] = "-fi";
            (*(code *)PTR_sprintf_00423164)(acStack_4a4,"/var/wscd-%s.fifo",pcVar6);
            local_47c[iVar3 + 5] = acStack_4a4;
            iVar5 = (*(code *)PTR_isFileExist_004230f8)("/var/wps_start_pbc");
            iVar9 = iVar3 + 6;
            if (iVar5 != 0) {
              local_47c[iVar9] = "-start_pbc";
              (*(code *)PTR_unlink_004231f0)("/var/wps_start_pbc");
              iVar9 = iVar3 + 7;
            }
            iVar3 = (*(code *)PTR_isFileExist_004230f8)("/var/wps_start_pin");
            if (iVar3 != 0) {
              local_47c[iVar9] = "-start";
              (*(code *)PTR_unlink_004231f0)("/var/wps_start_pin");
              iVar9 = iVar9 + 1;
            }
            iVar3 = (*(code *)PTR_isFileExist_004230f8)("/var/wps_local_pin");
            if (iVar3 != 0) {
              iVar3 = (*(code *)PTR_fopen_004231b0)("/var/wps_local_pin",&DAT_00411d04);
              if (iVar3 != 0) {
                (*(code *)PTR_fscanf_004232a0)(iVar3,"%s",auStack_3d8);
                (*(code *)PTR_fclose_00423198)(iVar3);
              }
              (*(code *)PTR_strcpy_004232f4)(&local_56c,auStack_3d8);
              local_47c[iVar9] = "-local_pin";
              local_47c[iVar9 + 1] = (char *)&local_56c;
              (*(code *)PTR_unlink_004231f0)("/var/wps_local_pin");
              iVar9 = iVar9 + 2;
            }
            iVar5 = (*(code *)PTR_isFileExist_004230f8)("/var/wps_peer_pin");
            iVar7 = iVar9 + 1;
            iVar3 = iVar9;
            if (iVar5 != 0) {
              iVar3 = (*(code *)PTR_fopen_004231b0)("/var/wps_peer_pin",&DAT_00411d04);
              if (iVar3 != 0) {
                (*(code *)PTR_fscanf_004232a0)(iVar3,"%s",auStack_3d8);
                (*(code *)PTR_fclose_00423198)(iVar3);
              }
              (*(code *)PTR_strcpy_004232f4)(&local_55c,auStack_3d8);
              local_47c[iVar9] = "-peer_pin";
              local_47c[iVar9 + 1] = (char *)&local_55c;
              (*(code *)PTR_unlink_004231f0)("/var/wps_peer_pin");
              iVar3 = iVar9 + 2;
              iVar7 = iVar9 + 3;
            }
            local_47c[iVar3] = "-daemon";
            local_47c[iVar7] = (char *)0x0;
            (*(code *)PTR_DoCmd_00423130)(local_47c,0);
            bVar2 = true;
          }
LAB_0040f588:
          iVar3 = 5;
          do {
            iVar5 = (*(code *)PTR_isFileExist_004230f8)(acStack_4a4);
            if (iVar5 != 0) break;
            iVar3 = iVar3 + -1;
            (*(code *)PTR_sleep_00423268)(1);
          } while (iVar3 != 0);
        }
        pcVar6 = (char *)(*(code *)PTR_strtok_r_004232dc)(0," ",&local_590);
      }
    }
    if (bVar2) {
      if (local_50c[0] == '\0') {
        (*(code *)PTR_sprintf_00423164)(local_43c,"iwcontrol %s",local_1e4);
      }
      else {
        (*(code *)PTR_sprintf_00423164)(local_43c,"iwcontrol %s %s",local_1e4,local_50c);
      }
      (*(code *)PTR_system_00423270)(local_43c);
    }
  }
  return 0;
}

