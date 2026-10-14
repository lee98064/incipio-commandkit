/* setWlan_Applications @ 00409640 */

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
  bool bVar15;
  int local_5d8;
  undefined4 local_5d4;
  int local_5d0;
  int local_5cc;
  int local_5c8;
  undefined4 local_5c4;
  int local_5c0;
  uint local_5bc;
  uint local_5b8;
  int local_5b4;
  int local_5b0;
  int local_5ac;
  int local_5a8;
  int local_5a4;
  int local_5a0;
  int local_59c;
  int local_598;
  int local_594;
  int local_590;
  int local_58c;
  int local_588;
  undefined4 local_584;
  int local_580;
  char acStack_57c [12];
  char acStack_570 [6];
  char local_56a;
  char local_569;
  undefined4 local_560;
  undefined4 local_55c;
  undefined4 local_558;
  undefined4 local_554;
  undefined4 local_550;
  undefined4 local_54c;
  undefined4 local_548;
  undefined4 local_544;
  char acStack_540 [32];
  undefined1 auStack_520 [32];
  char local_500 [32];
  char acStack_4e0 [32];
  char acStack_4c0 [40];
  char acStack_498 [40];
  char *local_470 [8];
  char *local_450 [8];
  char local_430 [100];
  undefined1 auStack_3cc [100];
  undefined1 auStack_368 [200];
  char local_2a0 [200];
  char local_1d8 [200];
  char local_110 [200];
  int *local_48;
  char *local_44;
  int local_40;
  int local_3c;
  int local_38;
  char *local_34;
  char *local_30;
  char *local_2c;
  
  (*(code *)PTR_memset_0042b114)(local_2a0,0,200);
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
  local_590 = 0;
  local_58c = 0;
  local_588 = 0;
  (*(code *)PTR_memset_0042b114)(acStack_540,0,0x1e);
  (*(code *)PTR_memset_0042b114)(auStack_520,0,0x1e);
  (*(code *)PTR_memset_0042b114)(local_500,0,0x1e);
  (*(code *)PTR_memset_0042b114)(local_1d8,0,200);
  (*(code *)PTR_memset_0042b114)(local_110,0,200);
  (*(code *)PTR_memset_0042b114)(acStack_4e0,0,0x1e);
  local_580 = 0;
  local_560 = 0;
  local_55c = 0;
  local_558 = 0;
  local_554 = 0;
  local_550 = 0;
  local_54c = 0;
  local_548 = 0;
  local_544 = 0;
  (*(code *)PTR_memset_0042b114)(local_470,0,0x40);
  local_584 = 0;
  (*(code *)PTR_strcpy_0042b208)(auStack_368,param_2);
  iVar3 = (*(code *)PTR_strtok_r_0042b1f8)(auStack_368,&DAT_00417a44,&local_584);
  if (iVar3 != 0) {
    do {
      (*(code *)PTR_strcpy_0042b208)(acStack_570,iVar3);
      iVar3 = (*(code *)PTR_strncmp_0042b154)(acStack_570,&DAT_00417ea0,4);
      pcVar6 = acStack_4e0;
      pcVar8 = acStack_570;
      pcVar14 = (code *)PTR_strcpy_0042b208;
      if ((iVar3 == 0) && (pcVar6 = local_110, local_110[0] != '\0')) {
        (*(code *)PTR_sprintf_0042b0e8)(acStack_540," %s",acStack_570);
        pcVar8 = acStack_540;
        pcVar14 = (code *)PTR_strcat_0042b170;
      }
      (*pcVar14)(pcVar6,pcVar8);
      iVar3 = (*(code *)PTR_strtok_r_0042b1f8)(0,&DAT_00417a44,&local_584);
    } while (iVar3 != 0);
  }
  iVar3 = (*(code *)PTR_isFileExist_0042b0ac)("/var/run/iwcontrol.pid");
  if (iVar3 != 0) {
    iVar3 = (*(code *)PTR_getPid_fromFile_0042b1e0)("/var/run/iwcontrol.pid");
    if (iVar3 != -1) {
      local_34 = acStack_57c;
      (*(code *)PTR_sprintf_0042b0e8)(acStack_57c,&DAT_004179c4,iVar3);
      (*(code *)PTR_RunSystemCmd_0042b0dc)(0,&DAT_00417990,&DAT_00417998,local_34,"");
    }
    (*(code *)PTR_unlink_0042b148)("/var/run/iwcontrol.pid");
  }
  local_584 = 0;
  (*(code *)PTR_strcpy_0042b208)(auStack_368,local_110);
  iVar3 = (*(code *)PTR_strtok_r_0042b1f8)(auStack_368,&DAT_00417a44,&local_584);
  if (iVar3 != 0) {
    do {
      (*(code *)PTR_strcpy_0042b208)(acStack_570,iVar3);
      iVar3 = (*(code *)PTR_strncmp_0042b154)(acStack_570,&DAT_00417ea0,4);
      if (iVar3 == 0) {
        (*(code *)PTR_sprintf_0042b0e8)(local_430,"/var/run/auth-%s.pid",acStack_570);
        iVar3 = (*(code *)PTR_isFileExist_0042b0ac)(local_430);
        if (iVar3 != 0) {
          iVar3 = (*(code *)PTR_getPid_fromFile_0042b1e0)(local_430);
          if (iVar3 != -1) {
            local_34 = acStack_57c;
            (*(code *)PTR_sprintf_0042b0e8)(acStack_57c,&DAT_004179c4,iVar3);
            (*(code *)PTR_RunSystemCmd_0042b0dc)(0,&DAT_00417990,&DAT_00417998,local_34,"");
          }
          (*(code *)PTR_unlink_0042b148)(local_430);
          (*(code *)PTR_sprintf_0042b0e8)(auStack_3cc,"/var/run/auth-%s-vxd.pid",acStack_570);
          iVar3 = (*(code *)PTR_isFileExist_0042b0ac)(auStack_3cc);
          if (iVar3 != 0) {
            iVar3 = (*(code *)PTR_getPid_fromFile_0042b1e0)(auStack_3cc);
            if (iVar3 != -1) {
              local_34 = acStack_57c;
              (*(code *)PTR_sprintf_0042b0e8)(acStack_57c,&DAT_004179c4,iVar3);
              (*(code *)PTR_RunSystemCmd_0042b0dc)(0,&DAT_00417990,&DAT_00417998,local_34,"");
            }
            (*(code *)PTR_unlink_0042b148)(auStack_3cc);
          }
        }
        (*(code *)PTR_sprintf_0042b0e8)(auStack_3cc,"/var/run/wscd-%s.pid",acStack_570);
        iVar3 = (*(code *)PTR_isFileExist_0042b0ac)(auStack_3cc);
        if (iVar3 != 0) {
          iVar3 = (*(code *)PTR_getPid_fromFile_0042b1e0)(auStack_3cc);
          if (iVar3 != -1) {
            local_34 = acStack_57c;
            (*(code *)PTR_sprintf_0042b0e8)(acStack_57c,&DAT_004179c4,iVar3);
            (*(code *)PTR_RunSystemCmd_0042b0dc)(0,&DAT_00417990,&DAT_00417998,local_34,"");
          }
          (*(code *)PTR_unlink_0042b148)(auStack_3cc);
        }
        (*(code *)PTR_RunSystemCmd_0042b0dc)("/proc/gpio",&DAT_00417a78,&DAT_00418c68,"");
      }
      do {
        iVar3 = (*(code *)PTR_isFileExist_0042b0ac)("/var/run/wscd-wlan0.pid");
        if (iVar3 == 0) {
          iVar3 = (*(code *)PTR_isFileExist_0042b0ac)("/var/run/wscd-wlan1.pid");
          if (iVar3 == 0) {
            iVar3 = (*(code *)PTR_isFileExist_0042b0ac)("/var/run/wscd-wlan0-wlan1.pid");
            if ((iVar3 == 0) ||
               (iVar3 = (*(code *)PTR_getPid_fromFile_0042b1e0)("/var/run/wscd-wlan0-wlan1.pid"),
               iVar3 == -1)) break;
            (*(code *)PTR_sprintf_0042b0e8)(acStack_57c,&DAT_004179c4,iVar3);
            (*(code *)PTR_RunSystemCmd_0042b0dc)(0,&DAT_00417990,&DAT_00417998,acStack_57c,"");
            pcVar6 = "/var/run/wscd-wlan0-wlan1.pid";
          }
          else {
            iVar3 = (*(code *)PTR_getPid_fromFile_0042b1e0)("/var/run/wscd-wlan1.pid");
            if (iVar3 == -1) break;
            (*(code *)PTR_sprintf_0042b0e8)(acStack_57c,&DAT_004179c4,iVar3);
            (*(code *)PTR_RunSystemCmd_0042b0dc)(0,&DAT_00417990,&DAT_00417998,acStack_57c,"");
            pcVar6 = "/var/run/wscd-wlan1.pid";
          }
        }
        else {
          iVar3 = (*(code *)PTR_getPid_fromFile_0042b1e0)("/var/run/wscd-wlan0.pid");
          if (iVar3 == -1) break;
          (*(code *)PTR_sprintf_0042b0e8)(acStack_57c,&DAT_004179c4,iVar3);
          (*(code *)PTR_RunSystemCmd_0042b0dc)(0,&DAT_00417990,&DAT_00417998,acStack_57c,"");
          pcVar6 = "/var/run/wscd-wlan0.pid";
        }
        (*(code *)PTR_unlink_0042b148)(pcVar6);
        (*(code *)PTR_sleep_0042b1a4)(1);
        iVar3 = (*(code *)PTR_find_pid_by_name_0042b1bc)(&DAT_004188c4);
      } while (0 < iVar3);
      iVar3 = (*(code *)PTR_strtok_r_0042b1f8)(0,&DAT_00417a44,&local_584);
    } while (iVar3 != 0);
  }
  iVar3 = (*(code *)PTR_isFileExist_0042b0ac)("/var/run/iapp.pid");
  if (iVar3 != 0) {
    iVar3 = (*(code *)PTR_getPid_fromFile_0042b1e0)("/var/run/iapp.pid");
    if (iVar3 != -1) {
      local_34 = acStack_57c;
      (*(code *)PTR_sprintf_0042b0e8)(acStack_57c,&DAT_004179c4,iVar3);
      (*(code *)PTR_RunSystemCmd_0042b0dc)(0,&DAT_00417990,&DAT_00417998,local_34,"");
    }
    (*(code *)PTR_unlink_0042b148)("/var/run/iapp.pid");
  }
  (*(code *)PTR_system_0042b1ac)("rm -f /var/*.fifo");
  iVar3 = (*(code *)PTR_strcmp_0042b0fc)(param_1,&DAT_00417990);
  if (iVar3 != 0) {
    (*(code *)PTR_puts_0042b1b8)("Init Wlan application...");
    iVar3 = (*(code *)PTR_SetWlan_idx_0042b1cc)("wlan0");
    if (iVar3 != 0) {
      (*(code *)PTR_apmib_get_0042b1a0)(0x16,&local_5d4);
      (*(code *)PTR_apmib_get_0042b1a0)(0x3b,&local_5d8);
      (*(code *)PTR_apmib_get_0042b1a0)(0x3e,&local_5cc);
      (*(code *)PTR_apmib_get_0042b1a0)(0x10e,&local_5c8);
      (*(code *)PTR_apmib_get_0042b1a0)(0x23,&local_5c0);
      (*(code *)PTR_apmib_get_0042b1a0)(0x19,&local_5bc);
      (*(code *)PTR_apmib_get_0042b1a0)(0x2d,&local_5b8);
      (*(code *)PTR_apmib_get_0042b1a0)(0x3c,&local_5c4);
      (*(code *)PTR_apmib_get_0042b1a0)(0x1c,&local_5d0);
      (*(code *)PTR_apmib_get_0042b1a0)(0x117,&local_580);
    }
    local_584 = 0;
    (*(code *)PTR_strcpy_0042b208)(auStack_368,local_110);
    bVar2 = false;
    iVar3 = (*(code *)PTR_strtok_r_0042b1f8)(auStack_368,&DAT_00417a44,&local_584);
    if (iVar3 != 0) {
      cVar10 = '\0';
      local_48 = (int *)0x0;
      bVar15 = false;
      bVar11 = false;
      local_40 = 0;
      local_38 = 0;
      local_3c = 0;
      do {
        (*(code *)PTR_strcpy_0042b208)(acStack_570,iVar3);
        iVar3 = (*(code *)PTR_strncmp_0042b154)(acStack_570,&DAT_00417ea0,4);
        if (iVar3 == 0) {
          uVar4 = (*(code *)PTR_strlen_0042b0bc)(acStack_570);
          cVar13 = '\0';
          if (8 < uVar4) {
            cVar13 = local_56a;
            cVar10 = local_569;
          }
          iVar3 = (*(code *)PTR_SetWlan_idx_0042b1cc)(acStack_570);
          if (iVar3 != 0) {
            (*(code *)PTR_apmib_get_0042b1a0)(0x16,&local_5b4);
            (*(code *)PTR_apmib_get_0042b1a0)(0x3b,&local_5b0);
            (*(code *)PTR_apmib_get_0042b1a0)(0x3f,&local_5ac);
            (*(code *)PTR_apmib_get_0042b1a0)(0x40,&local_5a8);
            (*(code *)PTR_apmib_get_0042b1a0)(0x19,&local_5a4);
            (*(code *)PTR_apmib_get_0042b1a0)(0x1c,&local_59c);
            if ((((local_5b4 == 0) && (local_5b0 - 2U < 2)) && (local_5ac != 0)) && (local_5a8 != 0)
               ) {
              (*(code *)PTR_apmib_get_0042b1a0)(0x45,&local_5a0);
              if (local_5a0 - 3U < 2) {
                local_44 = local_430;
                (*(code *)PTR_sprintf_0042b0e8)(local_430,"/var/wpa-wds-%s.conf",acStack_570);
                (*(code *)PTR_RunSystemCmd_0042b0dc)
                          (0,"flash",&DAT_00418928,acStack_570,local_44,&DAT_0041892c,"");
                (*(code *)PTR_RunSystemCmd_0042b0dc)
                          (0,&DAT_00418930,acStack_570,acStack_4e0,&DAT_0041892c,local_44,"");
                local_44 = auStack_3cc;
                (*(code *)PTR_sprintf_0042b0e8)(local_44,"/var/run/auth-%s.pid",acStack_570);
                iVar3 = 0;
                do {
                  iVar3 = iVar3 + 1;
                  iVar5 = (*(code *)PTR_isFileExist_0042b0ac)(local_44);
                  if (iVar5 != 0) break;
                  (*(code *)PTR_sleep_0042b1a4)(1);
                } while (iVar3 != 10);
              }
            }
            if (local_5a4 < 2) {
              (*(code *)PTR_apmib_get_0042b1a0)(0x23,&local_598);
              (*(code *)PTR_apmib_get_0042b1a0)(0x2d,&local_594);
              bVar1 = true;
              if ((local_598 == 0) && (local_594 == 0)) {
                bVar1 = false;
                goto LAB_0040a574;
              }
LAB_0040a3e8:
              if (local_5b4 != 0) goto LAB_0040a574;
              local_2c = local_430;
              local_34 = acStack_570;
              (*(code *)PTR_sprintf_0042b0e8)(local_2c,"/var/wpa-%s.conf",local_34);
              (*(code *)PTR_RunSystemCmd_0042b0dc)(0,"flash",&DAT_00418928,local_34,local_2c,"");
              pcVar6 = "auth";
              if (local_5b0 == 1) {
                (*(code *)PTR_apmib_get_0042b1a0)(0x3c,&local_590);
                if (local_590 == 0) {
                  pcVar6 = "client-infra";
                }
                else {
                  pcVar6 = "client-adhoc";
                }
              }
              (*(code *)PTR_strcpy_0042b208)(auStack_520,pcVar6);
              if (((cVar13 == 'v') && (cVar10 == 'a')) && ((local_5d8 != 0 && (local_5d8 != 3)))) {
                local_40 = 1;
              }
              if (((local_5b0 == 2) || (local_40 != 0)) || ((local_59c == 2 && (!bVar1))))
              goto LAB_0040a574;
              (*(code *)PTR_RunSystemCmd_0042b0dc)
                        (0,&DAT_00418930,acStack_570,acStack_4e0,auStack_520,local_430,"");
              bVar2 = true;
              if (cVar13 == 'v') {
                if (cVar10 != 'a') {
                  local_3c = 1;
                  goto LAB_0040a57c;
                }
                local_38 = 1;
                goto LAB_0040a604;
              }
              local_3c = 1;
            }
            else {
              if (local_5a4 != 7) {
                bVar1 = false;
                if (local_59c == 1) {
                  bVar1 = true;
                }
                goto LAB_0040a3e8;
              }
              bVar1 = false;
LAB_0040a574:
              if (cVar13 == 'v') {
LAB_0040a57c:
                if (cVar10 == 'x') {
                  if ((local_5b4 == 0) &&
                     ((iVar3 = (*(code *)PTR_strcmp_0042b0fc)(auStack_520,&DAT_00418930), iVar3 != 0
                      || (bVar1)))) {
                    pcVar8 = local_500;
                    (*(code *)PTR_strcat_0042b170)(pcVar8,&DAT_00417a44);
                    pcVar6 = acStack_570;
                    pcVar14 = (code *)PTR_strcat_0042b170;
LAB_0040a64c:
                    (*pcVar14)(pcVar8,pcVar6);
                  }
                }
                else if (cVar10 == 'a') {
LAB_0040a604:
                  if ((local_5b4 == 0) && ((local_5cc == 0 || (local_38 != 0)))) {
                    pcVar8 = local_1d8;
                    pcVar6 = acStack_570;
                    pcVar14 = (code *)PTR_strcpy_0042b208;
                    if (local_1d8[0] != '\0') {
                      (*(code *)PTR_sprintf_0042b0e8)(acStack_540," %s",pcVar6);
                      pcVar6 = acStack_540;
                      pcVar14 = (code *)PTR_strcat_0042b170;
                    }
                    goto LAB_0040a64c;
                  }
                }
                goto LAB_0040a790;
              }
            }
            if (cVar10 != 'x') {
              (*(code *)PTR_apmib_get_0042b1a0)(0x3e,&local_588);
              (*(code *)PTR_apmib_get_0042b1a0)(0x10e,&local_58c);
              if (((local_3c != 0) || (local_588 == 0)) || (local_58c == 0)) {
                pcVar6 = acStack_570;
                pcVar14 = (code *)PTR_strcpy_0042b208;
                if (local_1d8[0] != '\0') {
                  (*(code *)PTR_sprintf_0042b0e8)(acStack_540," %s",pcVar6);
                  pcVar6 = acStack_540;
                  pcVar14 = (code *)PTR_strcat_0042b170;
                }
                (*pcVar14)(local_1d8,pcVar6);
              }
              if (cVar10 != 'a') {
                if (local_5b4 == 0) {
                  bVar11 = true;
                }
                if (((local_5b0 == 0) || (local_5b0 == 3)) || ((local_5b0 == 4 || (local_5b0 == 6)))
                   ) {
                  bVar15 = true;
                }
                if (local_588 == 0) {
                  local_48 = (int *)0x1;
                }
              }
            }
          }
        }
LAB_0040a790:
        iVar3 = (*(code *)PTR_strtok_r_0042b1f8)(0,&DAT_00417a44,&local_584);
      } while (iVar3 != 0);
      if (((bVar11) && (bVar15)) && (local_48 == (int *)0x1)) {
        local_584 = 0;
        (*(code *)PTR_strcpy_0042b208)(auStack_368,local_1d8);
        pcVar6 = (char *)(*(code *)PTR_strtok_r_0042b1f8)(auStack_368,&DAT_00417a44,&local_584);
        if (pcVar6 != (char *)0x0) {
          local_48 = &local_5d8;
          do {
            local_34 = pcVar6;
            iVar3 = (*(code *)PTR_strcmp_0042b0fc)(pcVar6,"wlan0");
            if ((iVar3 == 0) ||
               (iVar3 = (*(code *)PTR_strcmp_0042b0fc)(local_34,"wlan1"), iVar3 == 0)) {
              (*(code *)PTR_SetWlan_idx_0042b1cc)(local_34);
              (*(code *)PTR_apmib_get_0042b1a0)(0x3b,local_48);
              (*(code *)PTR_apmib_get_0042b1a0)(0x3e,&local_5cc);
              if (((local_5d8 == 0) || (((local_5d8 == 3 || (local_5d8 == 4)) || (local_5d8 == 6))))
                 && (local_5cc == 0)) goto LAB_0040a904;
            }
            else {
LAB_0040a904:
              pcVar6 = local_34;
              pcVar14 = (code *)PTR_strcpy_0042b208;
              if (local_2a0[0] != '\0') {
                (*(code *)PTR_sprintf_0042b0e8)(acStack_540," %s");
                pcVar6 = acStack_540;
                pcVar14 = (code *)PTR_strcat_0042b170;
              }
              (*pcVar14)(local_2a0,pcVar6);
            }
            pcVar6 = (char *)(*(code *)PTR_strtok_r_0042b1f8)(0,&DAT_00417a44,&local_584);
          } while (pcVar6 != (char *)0x0);
        }
        (*(code *)PTR_sprintf_0042b0e8)(local_430,"iapp %s %s",acStack_4e0,local_2a0);
        (*(code *)PTR_system_0042b1ac)(local_430);
        iVar3 = (*(code *)PTR_isFileExist_0042b0ac)("/var/restart_iapp");
        if (iVar3 != 0) {
          (*(code *)PTR_unlink_0042b148)("/var/restart_iapp");
        }
        (*(code *)PTR_RunSystemCmd_0042b0dc)("/var/restart_iapp",&DAT_00417a78,local_430,"");
        bVar2 = true;
      }
    }
    iVar3 = (*(code *)PTR_isFileExist_0042b0ac)("/bin/wscd");
    if (iVar3 != 0) {
      (*(code *)PTR_memset_0042b114)(local_430,0,100);
      (*(code *)PTR_memset_0042b114)(auStack_3cc,0,100);
      local_584 = 0;
      (*(code *)PTR_strcpy_0042b208)(auStack_368,local_1d8);
      pcVar6 = (char *)(*(code *)PTR_strtok_r_0042b1f8)(auStack_368,&DAT_00417a44,&local_584);
      while (pcVar6 != (char *)0x0) {
        (*(code *)PTR_memset_0042b114)(acStack_4c0,0,0x28);
        (*(code *)PTR_memset_0042b114)(acStack_498,0,0x28);
        iVar3 = (*(code *)PTR_strcmp_0042b0fc)(pcVar6,"wlan0");
        if ((iVar3 == 0) || (iVar3 = (*(code *)PTR_strcmp_0042b0fc)(pcVar6,"wlan1"), iVar3 == 0)) {
          (*(code *)PTR_SetWlan_idx_0042b1cc)(pcVar6);
          (*(code *)PTR_apmib_get_0042b1a0)(0x3b,&local_5d8);
          (*(code *)PTR_apmib_get_0042b1a0)(0x23,&local_5c0);
          (*(code *)PTR_apmib_get_0042b1a0)(0x19,&local_5bc);
          (*(code *)PTR_apmib_get_0042b1a0)(0x2d,&local_5b8);
          (*(code *)PTR_apmib_get_0042b1a0)(0x1c,&local_5d0);
          (*(code *)PTR_apmib_get_0042b1a0)(0x117,&local_580);
          uVar4 = local_5bc;
          local_5d4 = 0;
          local_5c4 = 0;
          uVar12 = local_5bc ^ 7;
          if ((1 < (int)local_5bc) || (bVar11 = true, uVar12 = local_5b8, local_5c0 == 0)) {
            bVar11 = uVar12 != 0;
          }
          iVar3 = (*(code *)PTR_strcmp_0042b0fc)(pcVar6,"wlan0");
          if ((iVar3 == 0) && ((local_5c8 != 0 || (local_5d8 == 2)))) goto LAB_0040b160;
          if (local_5d8 == 0) {
            if ((int)uVar4 < 2) {
              if (!bVar11) goto LAB_0040ac84;
            }
            else if ((uVar4 == 7) || (local_5d0 != 1)) goto LAB_0040ac84;
          }
          else {
LAB_0040ac84:
            local_470[3] = (char *)0x0;
            local_470[1] = (char *)0x0;
            local_470[2] = (char *)0x0;
            local_470[0] = "wscd";
            iVar3 = (*(code *)PTR_isFileExist_0042b0ac)("/var/wps/simplecfgservice.xml");
            if (iVar3 == 0) {
              iVar3 = (*(code *)PTR_isFileExist_0042b0ac)("/var/wps");
              if (iVar3 != 0) {
                (*(code *)PTR_RunSystemCmd_0042b0dc)(0,&DAT_00417adc,"/var/wps",&DAT_004189c4,"");
              }
              (*(code *)PTR_RunSystemCmd_0042b0dc)(0,"mkdir","/var/wps","");
              (*(code *)PTR_system_0042b1ac)("cp /etc/simplecfg*.xml /var/wps");
            }
            if (local_5d8 == 1) {
              local_470[1] = "-mode";
              local_470[2] = "2";
              local_580 = 0;
              iVar3 = 3;
            }
            else {
              local_470[1] = "-start";
              iVar3 = 2;
            }
            if (local_580 == 1) {
              local_2c = "255.255.255.255";
              local_30 = "netmask";
              local_34 = "239.255.255.250";
              (*(code *)PTR_RunSystemCmd_0042b0dc)
                        (0,"route",&DAT_00417f5c,&DAT_00417f64,"239.255.255.250","netmask",
                         "255.255.255.255",acStack_4e0,"");
              (*(code *)PTR_RunSystemCmd_0042b0dc)
                        (0,"route",&DAT_00417f60,&DAT_00417f64,local_34,local_30,local_2c,
                         acStack_4e0,"");
            }
            (*(code *)PTR_sprintf_0042b0e8)(acStack_4c0,"/var/wsc-%s.conf",pcVar6);
            (*(code *)PTR_RunSystemCmd_0042b0dc)
                      (0,"flash","upd-wsc-conf","/etc/wscd.conf",acStack_4c0,pcVar6,"");
            local_470[iVar3] = "-c";
            local_470[iVar3 + 1] = acStack_4c0;
            local_470[iVar3 + 2] = "-w";
            local_470[iVar3 + 3] = pcVar6;
            local_470[iVar3 + 4] = "-fi";
            (*(code *)PTR_sprintf_0042b0e8)(acStack_498,"/var/wscd-%s.fifo",pcVar6);
            local_470[iVar3 + 5] = acStack_498;
            iVar5 = (*(code *)PTR_isFileExist_0042b0ac)("/var/wps_start_pbc");
            iVar9 = iVar3 + 6;
            if (iVar5 != 0) {
              local_470[iVar9] = "-start_pbc";
              (*(code *)PTR_unlink_0042b148)("/var/wps_start_pbc");
              iVar9 = iVar3 + 7;
            }
            iVar3 = (*(code *)PTR_isFileExist_0042b0ac)("/var/wps_start_pin");
            if (iVar3 != 0) {
              local_470[iVar9] = "-start";
              (*(code *)PTR_unlink_0042b148)("/var/wps_start_pin");
              iVar9 = iVar9 + 1;
            }
            iVar3 = (*(code *)PTR_isFileExist_0042b0ac)("/var/wps_local_pin");
            if (iVar3 != 0) {
              iVar3 = (*(code *)PTR_fopen_0042b118)("/var/wps_local_pin",&DAT_00418704);
              if (iVar3 != 0) {
                (*(code *)PTR_fscanf_0042b1d4)(iVar3,"%s",auStack_3cc);
                (*(code *)PTR_fclose_0042b10c)(iVar3);
              }
              (*(code *)PTR_strcpy_0042b208)(&local_560,auStack_3cc);
              local_470[iVar9] = "-local_pin";
              local_470[iVar9 + 1] = (char *)&local_560;
              (*(code *)PTR_unlink_0042b148)("/var/wps_local_pin");
              iVar9 = iVar9 + 2;
            }
            iVar5 = (*(code *)PTR_isFileExist_0042b0ac)("/var/wps_peer_pin");
            iVar7 = iVar9 + 1;
            iVar3 = iVar9;
            if (iVar5 != 0) {
              iVar3 = (*(code *)PTR_fopen_0042b118)("/var/wps_peer_pin",&DAT_00418704);
              if (iVar3 != 0) {
                (*(code *)PTR_fscanf_0042b1d4)(iVar3,"%s",auStack_3cc);
                (*(code *)PTR_fclose_0042b10c)(iVar3);
              }
              (*(code *)PTR_strcpy_0042b208)(&local_550,auStack_3cc);
              local_470[iVar9] = "-peer_pin";
              local_470[iVar9 + 1] = (char *)&local_550;
              (*(code *)PTR_unlink_0042b148)("/var/wps_peer_pin");
              iVar3 = iVar9 + 2;
              iVar7 = iVar9 + 3;
            }
            local_470[iVar3] = "-daemon";
            local_470[iVar7] = (char *)0x0;
            (*(code *)PTR_DoCmd_0042b0d4)(local_470,0);
            bVar2 = true;
          }
LAB_0040b160:
          iVar3 = 5;
          do {
            iVar5 = (*(code *)PTR_isFileExist_0042b0ac)(acStack_498);
            if (iVar5 != 0) break;
            iVar3 = iVar3 + -1;
            (*(code *)PTR_sleep_0042b1a4)(1);
          } while (iVar3 != 0);
        }
        pcVar6 = (char *)(*(code *)PTR_strtok_r_0042b1f8)(0,&DAT_00417a44,&local_584);
      }
    }
    if (bVar2) {
      if (local_500[0] == '\0') {
        (*(code *)PTR_sprintf_0042b0e8)(local_430,"iwcontrol %s",local_1d8);
      }
      else {
        (*(code *)PTR_sprintf_0042b0e8)(local_430,"iwcontrol %s %s",local_1d8,local_500);
      }
      (*(code *)PTR_system_0042b1ac)(local_430);
    }
  }
  return 0;
}

