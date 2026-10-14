/* main @ 0040c740 */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

undefined4 main(int param_1,undefined4 *param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  undefined2 uVar8;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar9;
  char cVar12;
  int *piVar10;
  undefined4 *puVar11;
  char *pcVar13;
  bool bVar15;
  undefined *puVar14;
  undefined4 uVar16;
  undefined4 uVar17;
  char *pcVar18;
  undefined4 uVar19;
  int iVar20;
  undefined4 uVar21;
  undefined *puVar22;
  undefined1 *puVar23;
  int *piVar24;
  code *pcVar25;
  undefined4 local_4f20;
  int *local_4f1c;
  int local_4f18;
  int iStack_4f14;
  undefined2 local_4f10;
  int local_4f08;
  undefined1 auStack_4f04 [20];
  char local_4ef0 [120];
  char acStack_4e78 [100];
  char acStack_4e14 [100];
  char local_4db0 [100];
  int local_4d4c [171];
  undefined1 auStack_4aa0 [52];
  uint local_4a6c;
  undefined4 local_46a0;
  char local_469c;
  char local_469b;
  char local_469a;
  char local_4699;
  char local_4698;
  char local_4697;
  char local_4696;
  char local_4695;
  undefined1 auStack_42a0 [17000];
  undefined1 *local_38;
  undefined1 *local_34;
  int *local_30;
  int *local_2c;
  
  (*(code *)PTR_memset_0042350c)(local_4ef0 + 0x14,0,100);
  if (param_1 < 2) {
LAB_0040fa38:
    FUN_00408dec();
LAB_0040fa40:
    uVar21 = 0xffffffff;
    goto LAB_004106cc;
  }
  uVar21 = param_2[1];
  iVar2 = (*(code *)PTR_strcmp_004234ec)(uVar21,&DAT_00412788);
  if (iVar2 != 0) {
    iVar2 = (*(code *)PTR_strcmp_004234ec)(uVar21,&DAT_00412794);
    if (iVar2 == 0) {
      if (param_1 != 2) {
        (*(code *)PTR_sscanf_00423524)(param_2[2],"%s",local_4ef0 + 0x14);
      }
      FUN_0040c3ac(local_4ef0 + 0x14);
      return 0;
    }
    iVar2 = (*(code *)PTR_strcmp_004234ec)(uVar21,&DAT_0041279c);
    if (iVar2 == 0) {
      iVar2 = 0;
      if (param_1 != 2) {
        if (param_1 < 5) {
LAB_0040cb54:
          iVar20 = 2;
        }
        else {
          iVar20 = param_2[2];
          iVar2 = (*(code *)PTR_memcmp_0042352c)(iVar20,&DAT_0041278c,4);
          if (iVar2 != 0) goto LAB_0040cb54;
          uVar3 = (*(code *)PTR_strlen_004234b4)(iVar20);
          if ((((8 < uVar3) && (*(char *)(iVar20 + 5) == '-')) && (*(char *)(iVar20 + 6) == 'v')) &&
             (*(char *)(iVar20 + 7) == 'a')) {
            iVar2 = (*(code *)PTR_atoi_004234b8)(iVar20 + 8);
            if (4 < iVar2) goto LAB_0040f4f8;
            *(int *)PTR_vwlan_idx_0042355c = iVar2 + 1;
          }
          iVar2 = param_2[2];
          uVar3 = (*(code *)PTR_strlen_004234b4)(iVar2);
          if (((8 < uVar3) && (*(char *)(iVar2 + 5) == '-')) &&
             (iVar2 = (*(code *)PTR_memcmp_0042352c)(iVar2 + 6,&DAT_00410e48,3), iVar2 == 0)) {
            *(undefined4 *)PTR_vwlan_idx_0042355c = 5;
          }
          iVar2 = (*(code *)PTR_atoi_004234b8)(param_2[2] + 4);
          iVar20 = 3;
          if (0 < iVar2) goto LAB_0040f3ac;
          *(int *)PTR_wlan_idx_00423548 = iVar2;
        }
        pcVar13 = local_4ef0 + 0x14;
        (*(code *)PTR_sscanf_00423524)(param_2[iVar20],"%s",pcVar13);
        iVar2 = (*(code *)PTR_strcmp_004234ec)(pcVar13,&DAT_004127a0);
        piVar9 = (int *)0x1;
        if (iVar2 != 0) {
          iVar2 = (*(code *)PTR_strcmp_004234ec)(pcVar13,"WLAN0_SSID");
          piVar9 = (int *)0x1;
          if (iVar2 != 0) {
            iVar2 = (*(code *)PTR_strcmp_004234ec)(pcVar13,"WLAN0_WSC_SSID");
            piVar9 = (int *)0x1;
            if (iVar2 != 0) {
              iVar2 = (*(code *)PTR_strcmp_004234ec)(pcVar13,"WLAN0_VAP0_SSID");
              piVar9 = (int *)0x1;
              if (iVar2 != 0) {
                iVar2 = (*(code *)PTR_strcmp_004234ec)(pcVar13,"WLAN0_VAP1_SSID");
                piVar9 = (int *)0x1;
                if (iVar2 != 0) {
                  iVar2 = (*(code *)PTR_strcmp_004234ec)(pcVar13,"WLAN0_VAP2_SSID");
                  piVar9 = (int *)0x1;
                  if (iVar2 != 0) {
                    iVar2 = (*(code *)PTR_strcmp_004234ec)(pcVar13,"WLAN0_VAP3_SSID");
                    piVar9 = (int *)0x1;
                    if (iVar2 != 0) {
                      iVar2 = (*(code *)PTR_strcmp_004234ec)(pcVar13,"WLAN0_VAP4_SSID");
                      piVar9 = (int *)0x1;
                      if (iVar2 != 0) {
                        iVar2 = (*(code *)PTR_strcmp_004234ec)(pcVar13,"REPEATER_SSID1");
                        piVar9 = (int *)0x1;
                        if (iVar2 != 0) {
                          iVar2 = (*(code *)PTR_strcmp_004234ec)(pcVar13,"REPEATER_SSID2");
                          if (iVar2 == 0) {
                            piVar9 = (int *)0x1;
                          }
                          else {
                            iVar2 = (*(code *)PTR_strcmp_004234ec)(local_4ef0 + 0x14,"NTP_TIMEZONE")
                            ;
                            piVar9 = (int *)(uint)(iVar2 == 0);
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        puVar11 = param_2 + iVar20 + 1;
        puVar23 = auStack_42a0;
        piVar24 = local_4d4c;
        piVar10 = (int *)0x1;
        iVar5 = 0;
        while (iVar20 = iVar20 + 1, iVar2 = iVar5, iVar20 < param_1) {
          iVar2 = iVar5 + 1;
          if (piVar9 == piVar10) {
            (*(code *)PTR_strcpy_00423600)(auStack_42a0 + iVar5 * 100,param_2[iVar20]);
            local_4d4c[iVar5] = (int)(auStack_42a0 + iVar5 * 100);
            break;
          }
          local_30 = piVar9;
          local_2c = piVar10;
          (*(code *)PTR_sscanf_00423524)(*puVar11,"%s",puVar23);
          *piVar24 = (int)puVar23;
          puVar11 = puVar11 + 1;
          puVar23 = puVar23 + 100;
          piVar24 = piVar24 + 1;
          piVar9 = local_30;
          piVar10 = local_2c;
          iVar5 = iVar2;
        }
        local_4d4c[iVar2] = 0;
      }
      iVar20 = 2;
      goto LAB_00410740;
    }
    iVar2 = (*(code *)PTR_strcmp_004234ec)(uVar21,"virtual_flash_init");
    if (iVar2 == 0) {
      return 1;
    }
    iVar2 = (*(code *)PTR_strcmp_004234ec)(uVar21,&DAT_00412858);
    if (iVar2 == 0) {
      iVar2 = 0;
      iVar20 = 3;
      goto LAB_00410740;
    }
    iVar2 = (*(code *)PTR_strcmp_004234ec)(uVar21,"default");
    uVar17 = 1;
    if (iVar2 == 0) {
LAB_0040ce40:
      uVar21 = FUN_004024b4(uVar17);
      return uVar21;
    }
    iVar2 = (*(code *)PTR_strcmp_004234ec)(uVar21,"default-sw");
    if (iVar2 == 0) {
      uVar17 = 0;
      goto LAB_0040ce40;
    }
    iVar2 = (*(code *)PTR_strcmp_004234ec)(uVar21,"reset");
    if (iVar2 == 0) {
      local_4f1c = (int *)0x0;
      uVar21 = (*(code *)PTR_open_004234b0)("/dev/mtdblock0",2);
      (*(code *)PTR_apmib_sem_lock_004234c8)();
      pcVar13 = (char *)(*(code *)PTR_apmib_dsconf_00423594)();
      if (pcVar13 == (char *)0x0) {
        (*(code *)PTR_puts_004235c4)("Default configuration invalid!");
        goto LAB_0040d21c;
      }
      iVar2 = (*(code *)PTR_mib_get_setting_len_0042359c)(2);
      local_30 = (int *)(iVar2 << 2);
      local_4f1c = (int *)0x0;
      iVar2 = (*(code *)PTR_malloc_004235b8)(local_30);
      (*(code *)PTR_memset_0042350c)(iVar2,0,local_30);
      if ((iVar2 == 0) ||
         (iVar20 = (*(code *)PTR_mib_tlv_save_00423500)(2,pcVar13,iVar2,&local_4f1c), iVar20 != 1))
      {
LAB_0040d090:
        (*(code *)PTR_sprintf_004234e0)(&iStack_4f14,"%s%02d",&DAT_00411014,1);
        local_4f10 = 0x6a36;
        cVar12 = '\0';
        pcVar4 = pcVar13;
        do {
          cVar1 = *pcVar4;
          pcVar4 = pcVar4 + 1;
          cVar12 = cVar12 + cVar1;
        } while (pcVar4 != pcVar13 + 0x6a35);
        local_4f18 = CONCAT13(-cVar12,local_4f18._1_3_);
        (*(code *)PTR_sprintf_004234e0)(&iStack_4f14,"%s%02d",&DAT_00411064,1);
        local_4f10 = 0x6a36;
        pcVar4 = pcVar13;
      }
      else {
        pcVar4 = (char *)(*(code *)PTR_malloc_004235b8)((undefined *)((int)local_4f1c + 1));
        if (pcVar4 != (char *)0x0) {
          (*(code *)PTR_memcpy_004235d4)(pcVar4,iVar2,local_4f1c);
        }
        (*(code *)PTR_free_0042348c)(iVar2);
        if (pcVar4 == (char *)0x0) goto LAB_0040d090;
        (*(code *)PTR_sprintf_004234e0)(&iStack_4f14,"%s%02d",&DAT_00411014,1);
        puVar14 = PTR_sprintf_004234e0;
        local_4f10 = SUB42((undefined *)((int)local_4f1c + 1),0);
        cVar12 = '\0';
        for (iVar2 = 0; iVar2 < (int)(((uint)((int)local_4f1c + 1) & 0xffff) - 1); iVar2 = iVar2 + 1
            ) {
          cVar12 = cVar12 + pcVar4[iVar2];
        }
        local_4f18 = CONCAT13(-cVar12,local_4f18._1_3_);
        cVar12 = '\0';
        for (iVar2 = 0; iVar2 < (int)local_4f1c; iVar2 = iVar2 + 1) {
          cVar12 = cVar12 + pcVar4[iVar2];
        }
        pcVar4[(int)local_4f1c] = -cVar12;
        (*(code *)puVar14)(&iStack_4f14,"%s%02d",&DAT_00411064,1);
        cVar12 = '\0';
        local_4f10 = SUB42((undefined *)((int)local_4f1c + 1),0);
        for (iVar2 = 0; iVar2 < (int)(((uint)((int)local_4f1c + 1) & 0xffff) - 1); iVar2 = iVar2 + 1
            ) {
          cVar12 = cVar12 + pcVar4[iVar2];
        }
        local_4f18 = CONCAT13(-cVar12,local_4f18._1_3_);
      }
      (*(code *)PTR_lseek_00423598)(uVar21,0xc000,0);
      iVar2 = FUN_004014b0(4,pcVar4,&iStack_4f14,&local_4f18);
      if (iVar2 != 1) {
        iVar2 = (*(code *)PTR_write_00423568)(uVar21,PTR_dsHeader_004234c0,6);
        puVar14 = PTR_dsHeader_004234c0;
        if (iVar2 == 6) {
          uVar3 = (*(code *)PTR_write_00423568)
                            (uVar21,pcVar13,*(undefined2 *)(PTR_dsHeader_004234c0 + 4));
          if (uVar3 == *(ushort *)(puVar14 + 4)) goto LAB_0040d234;
          pcVar4 = "write cs MIB failed!";
        }
        else {
          pcVar4 = "write cs header failed!";
        }
        (*(code *)PTR_puts_004235c4)(pcVar4);
        (*(code *)PTR_apmib_shm_free_00423584)(pcVar13,1);
LAB_0040d21c:
        (*(code *)PTR_apmib_sem_unlock_004234f8)();
        return 0xffffffff;
      }
LAB_0040d234:
      (*(code *)PTR_close_00423490)(uVar21);
      (*(code *)PTR_sync_00423534)();
      FUN_0040188c(0xc000);
      (*(code *)PTR_apmib_load_csconf_004235d8)();
LAB_0040ef20:
      uVar21 = 1;
LAB_0040ef80:
      (*(code *)PTR_apmib_shm_free_00423584)(pcVar13,uVar21);
      (*(code *)PTR_apmib_sem_unlock_004234f8)();
      return 0;
    }
    iVar2 = (*(code *)PTR_strcmp_004234ec)(uVar21,"hostapd");
    if (iVar2 == 0) {
      iVar2 = (*(code *)PTR_apmib_init_004234ac)();
      if (iVar2 != 0) {
        pcVar13 = (char *)(*(code *)PTR_fopen_00423510)("/etc/hostapd.conf",&DAT_0041318c);
        if (pcVar13 == (char *)0x0) {
          pcVar13 = "Create hostapd config file error!";
          pcVar25 = (code *)PTR_puts_004235c4;
          goto LAB_0040d2d4;
        }
        (*(code *)PTR_strcpy_00423600)(auStack_4aa0,"interface=wlan0\n");
        (*(code *)PTR_fputs_004234a0)(auStack_4aa0,pcVar13);
        (*(code *)PTR_strcpy_00423600)(auStack_4aa0,"logger_syslog=-1\n");
        (*(code *)PTR_fputs_004234a0)(auStack_4aa0,pcVar13);
        (*(code *)PTR_strcpy_00423600)(auStack_4aa0,"logger_stdout=-1\n");
        (*(code *)PTR_fputs_004234a0)(auStack_4aa0,pcVar13);
        (*(code *)PTR_strcpy_00423600)(auStack_4aa0,"logger_syslog_level=2\n");
        (*(code *)PTR_fputs_004234a0)(auStack_4aa0,pcVar13);
        (*(code *)PTR_strcpy_00423600)(auStack_4aa0,"logger_stdout_level=2\n");
        (*(code *)PTR_fputs_004234a0)(auStack_4aa0,pcVar13);
        (*(code *)PTR_strcpy_00423600)(auStack_4aa0,"dump_file=/tmp/hostapd.dump\n");
        (*(code *)PTR_fputs_004234a0)(auStack_4aa0,pcVar13);
        (*(code *)PTR_strcpy_00423600)(auStack_4aa0,"ctrl_interface=/var/run/hostapd\n");
        (*(code *)PTR_fputs_004234a0)(auStack_4aa0,pcVar13);
        (*(code *)PTR_strcpy_00423600)(auStack_4aa0,"ctrl_interface_group=0\n");
        (*(code *)PTR_fputs_004234a0)(auStack_4aa0,pcVar13);
        local_30 = &local_46a0;
        (*(code *)PTR_apmib_get_004235ac)(1,local_30);
        (*(code *)PTR_sprintf_004234e0)(auStack_4aa0,"ssid=%s\n",local_30);
        (*(code *)PTR_fputs_004234a0)(auStack_4aa0,pcVar13);
        (*(code *)PTR_apmib_get_004235ac)(0x4a,&local_4f1c);
        if (local_4f1c == (int *)0x1) {
          pcVar4 = "hw_mode=b\n";
        }
        else {
          pcVar4 = "hw_mode=g\n";
        }
        (*(code *)PTR_strcpy_00423600)(auStack_4aa0,pcVar4);
        (*(code *)PTR_fputs_004234a0)(auStack_4aa0,pcVar13);
        if ((int)local_4f1c < 7) {
          (*(code *)PTR_strcpy_00423600)(auStack_4aa0,"ieee80211n=0");
        }
        else {
          (*(code *)PTR_strcpy_00423600)(auStack_4aa0,"ieee80211n=1\n");
          (*(code *)PTR_sprintf_004234e0)(auStack_4aa0,"%sht_capab=",auStack_4aa0);
          (*(code *)PTR_apmib_get_004235ac)(0x11c,&local_4f1c);
          if (local_4f1c == (int *)0x0) {
            (*(code *)PTR_apmib_get_004235ac)(0x11f,&local_4f1c);
            if (local_4f1c != (int *)0x0) {
              pcVar4 = "%s%s";
              pcVar18 = "[SHORT-GI-20]";
              goto LAB_0040d690;
            }
          }
          else {
            (*(code *)PTR_apmib_get_004235ac)(0x11d);
            if (local_4f1c == (int *)0x0) {
              pcVar4 = "[40-]";
            }
            else {
              pcVar4 = "[40+]";
            }
            (*(code *)PTR_sprintf_004234e0)(auStack_4aa0,&DAT_004129e0,auStack_4aa0,pcVar4);
            (*(code *)PTR_apmib_get_004235ac)(0x11f,&local_4f1c);
            if (local_4f1c != (int *)0x0) {
              pcVar4 = "%s %s";
              pcVar18 = "[SHORT-GI-40]";
LAB_0040d690:
              (*(code *)PTR_sprintf_004234e0)(auStack_4aa0,pcVar4,auStack_4aa0,pcVar18);
            }
          }
          (*(code *)PTR_apmib_get_004235ac)(0x11e,&local_4f1c);
          if (0 < (int)local_4f1c) {
            (*(code *)PTR_sprintf_004234e0)(auStack_4aa0,"%s %s",auStack_4aa0,"[MAX-AMSDU-7935]");
          }
        }
        (*(code *)PTR_sprintf_004234e0)(auStack_4aa0,"%s\n",auStack_4aa0);
        (*(code *)PTR_fputs_004234a0)(auStack_4aa0,pcVar13);
        (*(code *)PTR_apmib_get_004235ac)(2,&local_4f1c);
        if (local_4f1c != (int *)0x0) {
          (*(code *)PTR_sprintf_004234e0)(auStack_4aa0,"channel=%d\n");
          (*(code *)PTR_fputs_004234a0)(auStack_4aa0,pcVar13);
        }
        (*(code *)PTR_apmib_get_004235ac)(0x10,&local_4f1c);
        (*(code *)PTR_sprintf_004234e0)(auStack_4aa0,"beacon_int=%d\n",local_4f1c);
        (*(code *)PTR_fputs_004234a0)(auStack_4aa0,pcVar13);
        (*(code *)PTR_apmib_get_004235ac)(0x3a,&local_4f1c);
        iVar2 = (*(code *)PTR_atoi_004234b8)(&local_46a0);
        if (iVar2 == 0) {
          (*(code *)PTR_strcpy_00423600)(auStack_4aa0,"dtim_period=2\n");
        }
        else {
          (*(code *)PTR_sprintf_004234e0)(auStack_4aa0,"dtim_period=%d\n",local_4f1c);
        }
        (*(code *)PTR_fputs_004234a0)(auStack_4aa0,pcVar13);
        (*(code *)PTR_strcpy_00423600)(auStack_4aa0,"max_num_sta=255\n");
        (*(code *)PTR_fputs_004234a0)(auStack_4aa0,pcVar13);
        (*(code *)PTR_apmib_get_004235ac)(0x13,&local_4f1c);
        if (local_4f1c == (int *)0x0) {
          (*(code *)PTR_strcpy_00423600)(auStack_4aa0,"rts_threshold=2347\n");
        }
        else {
          (*(code *)PTR_sprintf_004234e0)(auStack_4aa0,"rts_threshold=%d\n");
        }
        (*(code *)PTR_fputs_004234a0)(auStack_4aa0,pcVar13);
        (*(code *)PTR_apmib_get_004235ac)(0xe,&local_4f1c);
        if (local_4f1c == (int *)0x0) {
          (*(code *)PTR_strcpy_00423600)(auStack_4aa0,"fragm_threshold=2346\n");
        }
        else {
          (*(code *)PTR_sprintf_004234e0)(auStack_4aa0,"fragm_threshold=%d\n");
        }
        (*(code *)PTR_fputs_004234a0)(auStack_4aa0,pcVar13);
        (*(code *)PTR_apmib_get_004235ac)(0x11,&local_4f1c);
        (*(code *)PTR_sprintf_004234e0)(auStack_4aa0,"preamble=%d\n",local_4f1c);
        (*(code *)PTR_fputs_004234a0)(auStack_4aa0,pcVar13);
        (*(code *)PTR_apmib_get_004235ac)(0x34,&local_4f1c);
        (*(code *)PTR_apmib_get_004235ac)(0x35,&local_4f18);
        if (local_4f1c == (int *)0x1) {
          (*(code *)PTR_strcpy_00423600)(auStack_4aa0,"macaddr_acl=1\n");
          (*(code *)PTR_fputs_004234a0)(auStack_4aa0,pcVar13);
          iVar2 = (*(code *)PTR_fopen_00423510)("/etc/hostapd.accept",&DAT_0041318c);
          if (iVar2 != 0) {
            for (; local_4f18 != 0; local_4f18 = local_4f18 + -1) {
              (*(code *)PTR_apmib_get_004235ac)(0x8036,&local_46a0);
              (*(code *)PTR_sprintf_004234e0)
                        (auStack_4aa0,"%c%c:%c%c:%c%c:%c%c:%c%c:%c%c\n",(int)local_46a0._0_1_,
                         (int)local_46a0._1_1_,(int)local_46a0._2_1_,(int)(char)local_46a0,
                         (int)local_469c,(int)local_469b,(int)local_469a,(int)local_4699,
                         (int)local_4698,(int)local_4697,(int)local_4696,(int)local_4695);
              (*(code *)PTR_fputs_004234a0)(auStack_4aa0,iVar2);
            }
LAB_0040dc54:
            (*(code *)PTR_fclose_004234fc)(iVar2);
          }
        }
        else if (local_4f1c == (int *)0x2) {
          (*(code *)PTR_strcpy_00423600)(auStack_4aa0,"macaddr_acl=0\n");
          (*(code *)PTR_fputs_004234a0)(auStack_4aa0,pcVar13);
          iVar2 = (*(code *)PTR_fopen_00423510)("/etc/hostapd.deny",&DAT_0041318c);
          if (iVar2 != 0) {
            for (; local_4f18 != 0; local_4f18 = local_4f18 + -1) {
              (*(code *)PTR_apmib_get_004235ac)(0x8036,&local_46a0);
              (*(code *)PTR_sprintf_004234e0)
                        (auStack_4aa0,"%c%c:%c%c:%c%c:%c%c:%c%c:%c%c\n",(int)local_46a0._0_1_,
                         (int)local_46a0._1_1_,(int)local_46a0._2_1_,(int)(char)local_46a0,
                         (int)local_469c,(int)local_469b,(int)local_469a,(int)local_4699,
                         (int)local_4698,(int)local_4697,(int)local_4696,(int)local_4695);
              (*(code *)PTR_fputs_004234a0)(auStack_4aa0,iVar2);
            }
            goto LAB_0040dc54;
          }
        }
        else {
          (*(code *)PTR_strcpy_00423600)(auStack_4aa0,"#macaddr_acl=0\n");
          (*(code *)PTR_fputs_004234a0)(auStack_4aa0,pcVar13);
        }
        (*(code *)PTR_apmib_get_004235ac)(0x19,&local_4f1c);
        if (local_4f1c == (int *)0x1) {
          (*(code *)PTR_strcpy_00423600)(auStack_4aa0,"auth_algs=2\n");
          (*(code *)PTR_apmib_get_004235ac)(3,&local_4f1c);
          local_2c = &local_46a0;
          if (local_4f1c == (int *)0x1) {
            (*(code *)PTR_apmib_get_004235ac)(4,local_2c);
            if (local_46a0._0_1_ != '\0') {
              (*(code *)PTR_sprintf_004234e0)(auStack_4aa0,"%swep_key0=%s\n",auStack_4aa0,local_2c);
            }
            local_2c = &local_46a0;
            (*(code *)PTR_apmib_get_004235ac)(5,local_2c);
            if (local_46a0._0_1_ != '\0') {
              (*(code *)PTR_sprintf_004234e0)(auStack_4aa0,"%swep_key1=%s\n",auStack_4aa0,local_2c);
            }
            local_2c = &local_46a0;
            (*(code *)PTR_apmib_get_004235ac)(6,local_2c);
            if (local_46a0._0_1_ != '\0') {
              (*(code *)PTR_sprintf_004234e0)(auStack_4aa0,"%swep_key2=%s\n",auStack_4aa0,local_2c);
            }
            uVar21 = 7;
          }
          else {
            (*(code *)PTR_apmib_get_004235ac)(8,local_2c);
            if (local_46a0._0_1_ != '\0') {
              (*(code *)PTR_sprintf_004234e0)(auStack_4aa0,"%swep_key0=%s\n",auStack_4aa0,local_2c);
            }
            local_2c = &local_46a0;
            (*(code *)PTR_apmib_get_004235ac)(9,local_2c);
            if (local_46a0._0_1_ != '\0') {
              (*(code *)PTR_sprintf_004234e0)(auStack_4aa0,"%swep_key1=%s\n",auStack_4aa0,local_2c);
            }
            local_2c = &local_46a0;
            (*(code *)PTR_apmib_get_004235ac)(10,local_2c);
            if (local_46a0._0_1_ != '\0') {
              (*(code *)PTR_sprintf_004234e0)(auStack_4aa0,"%swep_key2=%s\n",auStack_4aa0,local_2c);
            }
            uVar21 = 0xb;
          }
          local_2c = &local_46a0;
          (*(code *)PTR_apmib_get_004235ac)(uVar21,local_2c);
          if (local_46a0._0_1_ != '\0') {
            pcVar4 = "%swep_key3=%s\n";
            piVar9 = local_2c;
            goto LAB_0040e284;
          }
        }
        else {
          if ((int)local_4f1c < 2) {
            (*(code *)PTR_strcpy_00423600)(auStack_4aa0,"wpa=0\n");
            goto LAB_0040e2ac;
          }
          (*(code *)PTR_strcpy_00423600)(auStack_4aa0,"auth_algs=1\n");
          (*(code *)PTR_sprintf_004234e0)
                    (auStack_4aa0,"%swpa=%d\n",auStack_4aa0,(int)local_4f1c >> 1);
          piVar9 = local_4f1c;
          local_2c = &local_46a0;
          (*(code *)PTR_apmib_get_004235ac)(0x1e,local_2c);
          if (local_46a0._0_1_ != '\0') {
            (*(code *)PTR_sprintf_004234e0)
                      (auStack_4aa0,"%swpa_passphrase=%s\n",auStack_4aa0,local_2c);
          }
          (*(code *)PTR_apmib_get_004235ac)(0x1c,&local_4f1c);
          if (local_4f1c == (int *)0x1) {
            (*(code *)PTR_sprintf_004234e0)(auStack_4aa0,"%swpa_key_mgmt=WPA-EAP\n",auStack_4aa0);
            (*(code *)PTR_apmib_get_004235ac)(0x20,&local_4f1c);
            (*(code *)PTR_sprintf_004234e0)
                      (auStack_4aa0,"%sauth_server_addr=%u.%u.%u.%u\n",auStack_4aa0,local_4f1c._0_1_
                       ,(uint)local_4f1c >> 0x10 & 0xff,(uint)local_4f1c >> 8 & 0xff,
                       (uint)local_4f1c & 0xff);
            (*(code *)PTR_apmib_get_004235ac)(0x21,&local_4f1c);
            (*(code *)PTR_sprintf_004234e0)
                      (auStack_4aa0,"%sauth_server_port=%d\n",auStack_4aa0,local_4f1c);
            local_2c = &local_46a0;
            (*(code *)PTR_apmib_get_004235ac)(0x22,local_2c);
            if (local_46a0._0_1_ == '\0') {
              pcVar4 = "%sauth_server_shared_secret=\n";
              goto LAB_0040e0b0;
            }
            (*(code *)PTR_sprintf_004234e0)
                      (auStack_4aa0,"%sauth_server_shared_secret=%s\n",auStack_4aa0,local_2c);
          }
          else {
            pcVar4 = "%swpa_key_mgmt=WPA-PSK\n";
LAB_0040e0b0:
            (*(code *)PTR_sprintf_004234e0)(auStack_4aa0,pcVar4,auStack_4aa0);
          }
          (*(code *)PTR_apmib_get_004235ac)(0x1d,&local_4f1c);
          if ((0 < (int)local_4f1c) && (((uint)piVar9 & 2) != 0)) {
            (*(code *)PTR_sprintf_004234e0)(auStack_4aa0,"%swpa_pairwise=",auStack_4aa0);
            if (local_4f1c == (int *)0x1) {
              pcVar4 = "%sTKIP\n";
            }
            else if (local_4f1c == (int *)0x3) {
              pcVar4 = "%sTKIP CCMP\n";
            }
            else {
              pcVar4 = "%sCCMP\n";
            }
            (*(code *)PTR_sprintf_004234e0)(auStack_4aa0,pcVar4,auStack_4aa0);
          }
          (*(code *)PTR_apmib_get_004235ac)(0x26,&local_4f1c);
          if ((0 < (int)local_4f1c) && (((uint)piVar9 & 4) != 0)) {
            (*(code *)PTR_sprintf_004234e0)(auStack_4aa0,"%srsn_pairwise=",auStack_4aa0);
            if (local_4f1c == (int *)0x1) {
              pcVar4 = "%sTKIP\n";
            }
            else if (local_4f1c == (int *)0x3) {
              pcVar4 = "%sTKIP CCMP\n";
            }
            else {
              pcVar4 = "%sCCMP\n";
            }
            (*(code *)PTR_sprintf_004234e0)(auStack_4aa0,pcVar4,auStack_4aa0);
          }
          (*(code *)PTR_apmib_get_004235ac)(0x1f,&local_4f1c);
          (*(code *)PTR_sprintf_004234e0)
                    (auStack_4aa0,"%swpa_group_rekey=%d\n",auStack_4aa0,local_4f1c);
          (*(code *)PTR_sprintf_004234e0)
                    (auStack_4aa0,"%swpa_ptk_rekey=%d\n",auStack_4aa0,local_4f1c);
          (*(code *)PTR_apmib_get_004235ac)(0x25,&local_4f1c);
          pcVar4 = "%srsn_preauth=%d\n";
          piVar9 = local_4f1c;
LAB_0040e284:
          (*(code *)PTR_sprintf_004234e0)(auStack_4aa0,pcVar4,auStack_4aa0,piVar9);
        }
LAB_0040e2ac:
        (*(code *)PTR_fputs_004234a0)(auStack_4aa0,pcVar13);
        (*(code *)PTR_apmib_get_004235ac)(0x15,&local_4f1c);
        (*(code *)PTR_sprintf_004234e0)(auStack_4aa0,"ignore_broadcast_ssid=%d\n",local_4f1c);
        (*(code *)PTR_fputs_004234a0)(auStack_4aa0,pcVar13);
        (*(code *)PTR_apmib_get_004235ac)(0x59,&local_4f1c);
        (*(code *)PTR_sprintf_004234e0)(auStack_4aa0,"wme_enabled=%d\n",local_4f1c);
        (*(code *)PTR_fputs_004234a0)(auStack_4aa0,pcVar13);
        (*(code *)PTR_apmib_get_004235ac)(0x32,&local_4f1c);
        (*(code *)PTR_sprintf_004234e0)(auStack_4aa0,"ap_max_inactivity=%d\n",local_4f1c);
        (*(code *)PTR_fputs_004234a0)(auStack_4aa0,pcVar13);
        (*(code *)PTR_apmib_get_004235ac)(0x23,&local_4f1c);
        if (local_4f1c != (int *)0x0) {
          (*(code *)PTR_sprintf_004234e0)(auStack_4aa0,"ieee8021x=%d\n");
          (*(code *)PTR_apmib_get_004235ac)(0x20,&local_4f1c);
          (*(code *)PTR_sprintf_004234e0)
                    (auStack_4aa0,"%sauth_server_addr=%u.%u.%u.%u\n",auStack_4aa0,local_4f1c._0_1_,
                     (uint)local_4f1c >> 0x10 & 0xff,(uint)local_4f1c >> 8 & 0xff,
                     (uint)local_4f1c & 0xff);
          (*(code *)PTR_apmib_get_004235ac)(0x21,&local_4f1c);
          (*(code *)PTR_sprintf_004234e0)
                    (auStack_4aa0,"%sauth_server_port=%d\n",auStack_4aa0,local_4f1c);
          local_2c = &local_46a0;
          (*(code *)PTR_apmib_get_004235ac)(0x22,local_2c);
          if (local_46a0._0_1_ == '\0') {
            (*(code *)PTR_sprintf_004234e0)
                      (auStack_4aa0,"%sauth_server_shared_secret=\n",auStack_4aa0,local_2c);
          }
          else {
            (*(code *)PTR_sprintf_004234e0)
                      (auStack_4aa0,"%sauth_server_shared_secret=%s\n",auStack_4aa0);
          }
          (*(code *)PTR_apmib_get_004235ac)(0x27,&local_4f1c);
          if (local_4f1c != (int *)0x0) {
            (*(code *)PTR_apmib_get_004235ac)(0x28,&local_4f1c);
            (*(code *)PTR_sprintf_004234e0)
                      (auStack_4aa0,"%sacct_server_addr=%u.%u.%u.%u\n",auStack_4aa0,local_4f1c._0_1_
                       ,(uint)local_4f1c >> 0x10 & 0xff,(uint)local_4f1c >> 8 & 0xff,
                       (uint)local_4f1c & 0xff);
            (*(code *)PTR_apmib_get_004235ac)(0x29,&local_4f1c);
            (*(code *)PTR_sprintf_004234e0)
                      (auStack_4aa0,"%sacct_server_port=%d\n",auStack_4aa0,local_4f1c);
          }
          (*(code *)PTR_apmib_get_004235ac)(0x2e,&local_4f1c);
          (*(code *)PTR_sprintf_004234e0)
                    (auStack_4aa0,"%sradius_retry_primary_interval=%d\n",auStack_4aa0,local_4f1c);
          (*(code *)PTR_apmib_get_004235ac)(0x2f,&local_4f1c);
          (*(code *)PTR_sprintf_004234e0)
                    (auStack_4aa0,"%sradius_acct_interim_interval=%d\n",auStack_4aa0,local_4f1c);
          (*(code *)PTR_fputs_004234a0)(auStack_4aa0,pcVar13);
        }
        (*(code *)PTR_apmib_get_004235ac)(0x3e,&local_4f1c);
        pcVar25 = (code *)PTR_fclose_004234fc;
        if (local_4f1c == (int *)0x0) {
          (*(code *)PTR_strcpy_00423600)(auStack_4aa0,"iapp_interface=br0\n");
          (*(code *)PTR_fputs_004234a0)(auStack_4aa0,pcVar13);
          pcVar25 = (code *)PTR_fclose_004234fc;
        }
LAB_0040f96c:
        (*pcVar25)(pcVar13);
        return 0;
      }
      goto LAB_0040d2c8;
    }
    iVar2 = (*(code *)PTR_strcmp_004234ec)(uVar21,&DAT_00412e0c);
    if (iVar2 == 0) {
      if (param_1 == 2) {
        pcVar4 = (char *)*param_2;
        pcVar13 = "Usage: %s web prefix\n";
        goto LAB_0040e7b4;
      }
      local_4ef0[0] = '\0';
      local_4ef0[1] = '\0';
      local_4ef0[2] = '\0';
      local_4ef0[3] = '\0';
      local_4ef0[4] = '\0';
      local_4ef0[5] = '\0';
      local_4ef0[6] = '\0';
      local_4ef0[7] = '\0';
      local_4ef0[8] = '\0';
      local_4ef0[9] = '\0';
      local_4ef0[10] = '\0';
      local_4ef0[0xb] = '\0';
      local_4ef0[0xc] = '\0';
      local_4ef0[0xd] = '\0';
      local_4ef0[0xe] = '\0';
      local_4ef0[0xf] = '\0';
      local_4ef0[0x10] = '\0';
      local_4ef0[0x11] = '\0';
      local_4ef0[0x12] = '\0';
      local_4ef0[0x13] = '\0';
      (*(code *)PTR_sscanf_00423524)(param_2[2],"%s",auStack_4f04);
      if (param_1 != 3) {
        (*(code *)PTR_sscanf_00423524)(param_2[3],"%s",local_4ef0);
      }
      pcVar4 = local_4ef0;
      if (local_4ef0[0] == '\0') {
        iVar2 = FUN_004017c0(&iStack_4f14,0x10000,0x10);
        pcVar4 = (char *)0x0;
        if (iVar2 == 0) {
          pcVar13 = "Read web header failed!";
          pcVar25 = (code *)PTR_puts_004235c4;
          goto LAB_0040d2d4;
        }
        pcVar13 = (char *)0x0;
      }
      else {
        pcVar13 = (char *)(*(code *)PTR_open_004234b0)(pcVar4,0);
        if ((int)pcVar13 < 0) {
          pcVar13 = "Can\'t open file %s\n";
          goto LAB_0040e7b4;
        }
        (*(code *)PTR_lseek_00423598)(pcVar13,0,0);
        iVar2 = (*(code *)PTR_read_00423544)(pcVar13,&iStack_4f14,0x10);
        if (iVar2 != 0x10) {
          (*(code *)PTR_printf_004235f4)("Read web header failed %s!\n",pcVar4);
          pcVar25 = (code *)PTR_close_00423490;
          goto LAB_0040d2d4;
        }
      }
      iVar2 = (*(code *)PTR_memcmp_0042352c)(&iStack_4f14,&DAT_00412e5c,4);
      if (iVar2 != 0) {
        pcVar13 = "Invalid web image! Expect %s\n";
        pcVar4 = "w6cg";
        goto LAB_0040e7b4;
      }
      iVar2 = (*(code *)PTR_malloc_004235b8)(local_4f08);
      if (iVar2 == 0) {
        (*(code *)PTR_sprintf_004234e0)(local_4db0,"Allocate buffer failed %d!\n",local_4f08);
        pcVar13 = local_4db0;
        pcVar25 = (code *)PTR_printf_004235f4;
        goto LAB_0040d2d4;
      }
      if (pcVar4 == (char *)0x0) {
        iVar20 = FUN_004017c0(iVar2,0x10010);
        if (iVar20 != 0) goto LAB_0040e884;
LAB_0040e864:
        pcVar13 = "Read web image failed!";
      }
      else {
        iVar20 = (*(code *)PTR_read_00423544)(pcVar13,iVar2,local_4f08);
        if (iVar20 != local_4f08) goto LAB_0040e864;
        (*(code *)PTR_close_00423490)(pcVar13);
LAB_0040e884:
        cVar12 = '\0';
        for (iVar20 = 0; iVar20 < local_4f08; iVar20 = iVar20 + 1) {
          cVar12 = cVar12 + *(char *)(iVar2 + iVar20);
        }
        if (cVar12 == '\0') {
          pcVar18 = acStack_4e78;
          (*(code *)PTR_strcpy_00423600)(pcVar18,"flashweb.bz2");
          pcVar13 = (char *)(*(code *)PTR_open_004234b0)(pcVar18,0x302);
          if (pcVar13 == (char *)0xffffffff) {
            (*(code *)PTR_printf_004235f4)("Create output file error %s!\n",pcVar18);
            goto LAB_0041072c;
          }
          iVar20 = (*(code *)PTR_write_00423568)(pcVar13,iVar2,local_4f08 + -1);
          if (iVar20 != local_4f08 + -1) {
            (*(code *)PTR_printf_004235f4)("write file error %s!\n",pcVar18);
            (*(code *)PTR_free_0042348c)(iVar2);
            pcVar25 = (code *)PTR_close_00423490;
            goto LAB_0040d2d4;
          }
          (*(code *)PTR_close_00423490)(pcVar13);
          pcVar4 = local_4db0;
          (*(code *)PTR_free_0042348c)(iVar2);
          (*(code *)PTR_sync_00423534)();
          (*(code *)PTR_sprintf_004234e0)(acStack_4e14,"%sXXXXXX",pcVar18);
          (*(code *)PTR_mkstemp_004234d8)(acStack_4e14);
          (*(code *)PTR_sprintf_004234e0)(pcVar4,"bunzip2 -c %s > %s",pcVar18,acStack_4e14);
          (*(code *)PTR_system_004235bc)(pcVar4);
          (*(code *)PTR_unlink_00423538)(pcVar18);
          (*(code *)PTR_sync_00423534)();
          iVar2 = (*(code *)PTR_stat_004234cc)(acStack_4e14,auStack_4aa0);
          if (iVar2 != 0) {
            pcVar13 = "Stat file error %s!\n";
            pcVar4 = acStack_4e14;
LAB_0040e7b4:
            (*(code *)PTR_printf_004235f4)(pcVar13,pcVar4);
            return 0xffffffff;
          }
          if (0x3f < local_4a6c) {
            iVar2 = (*(code *)PTR_malloc_004235b8)();
            if (iVar2 == 0) {
              (*(code *)PTR_sprintf_004234e0)(pcVar4,"Allocate buffer failed %ld!\n",local_4a6c);
              pcVar13 = pcVar4;
              pcVar25 = (code *)PTR_printf_004235f4;
              goto LAB_0040d2d4;
            }
            pcVar13 = (char *)(*(code *)PTR_open_004234b0)(acStack_4e14,0);
            if ((int)pcVar13 < 0) {
              pcVar13 = "Can\'t open file %s\n";
              pcVar18 = acStack_4e14;
LAB_0040ed78:
              (*(code *)PTR_printf_004235f4)(pcVar13,pcVar18);
              goto LAB_0041072c;
            }
            (*(code *)PTR_lseek_00423598)(pcVar13,0,0);
            uVar3 = (*(code *)PTR_read_00423544)(pcVar13,iVar2,local_4a6c);
            if (uVar3 != local_4a6c) {
              (*(code *)PTR_printf_004235f4)("Read file error %ld!\n");
              (*(code *)PTR_free_0042348c)(iVar2);
              pcVar25 = (code *)PTR_close_00423490;
              goto LAB_0040d2d4;
            }
            (*(code *)PTR_close_00423490)(pcVar13);
            iVar20 = 0;
            (*(code *)PTR_unlink_00423538)(acStack_4e14);
            local_34 = auStack_4aa0;
            (*(code *)PTR_sync_00423534)();
            local_38 = auStack_4f04;
LAB_0040ee2c:
            if (iVar20 < (int)local_4a6c) {
              iVar5 = iVar2 + iVar20;
              (*(code *)PTR_strcpy_00423600)(pcVar18,local_38);
              piVar9 = (int *)0x0;
              (*(code *)PTR_strcat_00423564)(pcVar18,&DAT_00412f94);
              (*(code *)PTR_strcat_00423564)(pcVar18,iVar5);
              do {
                (*(code *)PTR_strcpy_00423600)(&local_46a0,pcVar18);
                piVar9 = (int *)((int)piVar9 + 1);
                local_4db0[0] = '\0';
                piVar10 = piVar9;
                pcVar13 = (char *)&local_46a0;
                do {
                  local_30 = piVar10;
                  puVar23 = (undefined1 *)(*(code *)PTR_strchr_004234a4)(pcVar13,0x2f);
                  puVar14 = PTR_strcpy_00423600;
                  piVar10 = (int *)((int)local_30 + -1);
                  if (puVar23 == (undefined1 *)0x0) {
                    pcVar13 = (char *)(*(code *)PTR_open_004234b0)(pcVar18,0x302);
                    if (pcVar13 == (char *)0xffffffff) {
                      pcVar13 = "Create output file error %s!\n";
                      goto LAB_0040ed78;
                    }
                    iVar6 = (*(code *)PTR_write_00423568)
                                      (pcVar13,iVar2 + iVar20 + 0x40,*(undefined4 *)(iVar5 + 0x3c));
                    if (iVar6 == *(int *)(iVar5 + 0x3c)) {
                      (*(code *)PTR_close_00423490)(pcVar13);
                      iVar20 = *(int *)(iVar5 + 0x3c) + 0x40 + iVar20;
                      goto LAB_0040ee2c;
                    }
                    (*(code *)PTR_printf_004235f4)("Write file error %s, len=%d!\n",pcVar18);
                    (*(code *)PTR_free_0042348c)(iVar2);
                    pcVar25 = (code *)PTR_close_00423490;
                    goto LAB_0040d2d4;
                  }
                  pcVar13 = puVar23 + 1;
                } while (piVar10 != (int *)0x0);
                *puVar23 = 0;
                (*(code *)puVar14)(pcVar4,&local_46a0);
              } while (((local_4db0[0] == '\0') ||
                       (iVar6 = (*(code *)PTR_stat_004234cc)(pcVar4,local_34), -1 < iVar6)) ||
                      (iVar6 = (*(code *)PTR_mkdir_00423498)(pcVar4,0x180), -1 < iVar6));
              pcVar13 = "Create directory %s failed!\n";
              goto LAB_0040e7b4;
            }
            (*(code *)PTR_free_0042348c)(iVar2);
            pcVar13 = local_4ef0;
            pcVar25 = (code *)PTR_unlink_00423538;
            goto LAB_0040f96c;
          }
          (*(code *)PTR_sprintf_004234e0)(pcVar4,"Invalid decompress file size %ld!\n",local_4a6c);
          (*(code *)PTR_printf_004235f4)(pcVar4);
          pcVar13 = acStack_4e14;
          pcVar25 = (code *)PTR_unlink_00423538;
          goto LAB_0040d2d4;
        }
        pcVar13 = "Web image invalid!";
      }
      (*(code *)PTR_puts_004235c4)(pcVar13);
LAB_0041072c:
      (*(code *)PTR_free_0042348c)(iVar2);
      return 0xffffffff;
    }
    iVar2 = (*(code *)PTR_strcmp_004234ec)(uVar21,"test-hwconf");
    if (iVar2 == 0) {
      (*(code *)PTR_apmib_sem_lock_004234c8)();
      pcVar13 = (char *)(*(code *)PTR_apmib_hwconf_004235f0)();
      if (pcVar13 == (char *)0x0) goto LAB_0040d21c;
      uVar21 = 0;
      goto LAB_0040ef80;
    }
    iVar2 = (*(code *)PTR_strcmp_004234ec)(uVar21,"test-dsconf");
    if (iVar2 == 0) {
      (*(code *)PTR_apmib_sem_lock_004234c8)();
      pcVar13 = (char *)(*(code *)PTR_apmib_dsconf_00423594)();
      if (pcVar13 == (char *)0x0) goto LAB_0040d21c;
      goto LAB_0040ef20;
    }
    iVar2 = (*(code *)PTR_strcmp_004234ec)(uVar21,"test-csconf");
    if (iVar2 == 0) {
      (*(code *)PTR_apmib_sem_lock_004234c8)();
      pcVar13 = (char *)(*(code *)PTR_apmib_csconf_004235a4)();
      if (pcVar13 != (char *)0x0) {
        uVar21 = 2;
        goto LAB_0040ef80;
      }
      goto LAB_0040d21c;
    }
    iVar2 = (*(code *)PTR_strcmp_004234ec)(uVar21,"default-fc");
    if (iVar2 == 0) {
      local_4f18 = 0;
      (*(code *)PTR_apmib_init_004234ac)();
      local_4f18 = 1;
      (*(code *)PTR_apmib_set_00423574)(0xc0,&local_4f18);
      (*(code *)PTR_apmib_get_004235ac)(0xad,&local_4f18);
      if (1 < local_4f18) {
        local_4f18 = 0;
      }
      (*(code *)PTR_apmib_set_00423574)(0xad,&local_4f18);
      local_4f18 = -0x3f57fe06;
      (*(code *)PTR_apmib_set_00423574)(0xaa,&local_4f18);
      local_4f18 = 3;
      (*(code *)PTR_apmib_set_00423574)(0x517,&local_4f18);
      local_4f18 = 0;
      FUN_004021d4("wlan0");
      (*(code *)PTR_apmib_set_00423574)(0x516,&local_4f18);
      pcVar13 = (char *)0x4;
      pcVar25 = (code *)PTR_apmib_update_00423578;
      goto LAB_0040f96c;
    }
    iVar2 = (*(code *)PTR_strcmp_004234ec)(uVar21,&DAT_00413020);
    if (iVar2 == 0) {
      if (param_1 < 4) {
        pcVar13 = "Miss arguments [wlan_interface config_filename]!";
        pcVar25 = (code *)PTR_puts_004235c4;
        goto LAB_0040f96c;
      }
      iVar20 = param_2[2];
      iVar2 = (*(code *)PTR_memcmp_0042352c)(iVar20,&DAT_0041278c,4);
      if (iVar2 != 0) {
LAB_0040f298:
        pcVar13 = "Miss wlan_interface argument!";
        pcVar25 = (code *)PTR_puts_004235c4;
        goto LAB_0040f96c;
      }
      uVar3 = (*(code *)PTR_strlen_004234b4)(iVar20);
      if (((8 < uVar3) && (*(char *)(iVar20 + 5) == '-')) &&
         ((*(char *)(iVar20 + 6) == 'v' && (*(char *)(iVar20 + 7) == 'a')))) {
        iVar2 = (*(code *)PTR_atoi_004234b8)(iVar20 + 8);
        if (4 < iVar2) {
LAB_0040f4f8:
          pcVar13 = "invalid virtual wlan interface index number!";
          pcVar25 = (code *)PTR_puts_004235c4;
          goto LAB_0040f96c;
        }
        *(int *)PTR_vwlan_idx_0042355c = iVar2 + 1;
      }
      iVar2 = param_2[2];
      uVar3 = (*(code *)PTR_strlen_004234b4)(iVar2);
      if (((8 < uVar3) && (*(char *)(iVar2 + 5) == '-')) &&
         (iVar2 = (*(code *)PTR_memcmp_0042352c)(iVar2 + 6,&DAT_00410e48,3), iVar2 == 0)) {
        *(undefined4 *)PTR_vwlan_idx_0042355c = 5;
      }
      iVar2 = (*(code *)PTR_atoi_004234b8)(param_2[2] + 4);
      *(int *)PTR_wlan_idx_00423548 = iVar2;
      if (0 < iVar2) goto LAB_0040f3ac;
      bVar15 = false;
      if (param_1 != 4) {
        iVar2 = (*(code *)PTR_strcmp_004234ec)(param_2[4],&DAT_00413044);
        bVar15 = iVar2 == 0;
      }
      FUN_00404014(param_2[3],bVar15);
      goto LAB_0041057c;
    }
    iVar2 = (*(code *)PTR_strcmp_004234ec)(uVar21,"-param_file");
    if (iVar2 == 0) {
      *(undefined4 *)PTR_vwlan_idx_0042355c = 0;
      if (param_1 < 4) {
        pcVar13 = "Miss arguments [wlan_interface param_file]!";
        pcVar25 = (code *)PTR_puts_004235c4;
        goto LAB_0040f96c;
      }
      iVar20 = param_2[2];
      iVar2 = (*(code *)PTR_memcmp_0042352c)(iVar20,&DAT_0041278c,4);
      if (iVar2 != 0) goto LAB_0040f298;
      uVar3 = (*(code *)PTR_strlen_004234b4)(iVar20);
      if ((((8 < uVar3) && (*(char *)(iVar20 + 5) == '-')) && (*(char *)(iVar20 + 6) == 'v')) &&
         (*(char *)(iVar20 + 7) == 'a')) {
        iVar2 = (*(code *)PTR_atoi_004234b8)(iVar20 + 8);
        if (4 < iVar2) goto LAB_0040f4f8;
        *(int *)PTR_vwlan_idx_0042355c = iVar2 + 1;
      }
      iVar2 = param_2[2];
      uVar3 = (*(code *)PTR_strlen_004234b4)(iVar2);
      if (((8 < uVar3) && (*(char *)(iVar2 + 5) == '-')) &&
         (iVar2 = (*(code *)PTR_memcmp_0042352c)(iVar2 + 6,&DAT_00410e48,3), iVar2 == 0)) {
        *(undefined4 *)PTR_vwlan_idx_0042355c = 5;
      }
      iVar2 = (*(code *)PTR_atoi_004234b8)(param_2[2] + 4);
      *(int *)PTR_wlan_idx_00423548 = iVar2;
      if (iVar2 < 1) {
        FUN_0040aba8(param_2[3]);
        return 0;
      }
LAB_0040f3ac:
      pcVar13 = "invalid wlan interface index number!";
      goto LAB_00410574;
    }
    iVar2 = (*(code *)PTR_strcmp_004234ec)(uVar21,"tblchk");
    if (iVar2 == 0) {
      uVar21 = (*(code *)PTR_mibtbl_check_004234d4)();
      return uVar21;
    }
    iVar2 = (*(code *)PTR_strcmp_004234ec)(uVar21,"wapi-check");
    if (iVar2 == 0) {
      return 0;
    }
    iVar2 = (*(code *)PTR_strcmp_004234ec)(uVar21,"set_mib");
    if (iVar2 != 0) {
      iVar2 = (*(code *)PTR_strcmp_004234ec)(uVar21,"gen-pppoe");
      if (iVar2 == 0) {
        if (4 < param_1) {
          uVar19 = param_2[4];
          uVar17 = param_2[2];
          uVar16 = param_2[3];
          uVar21 = 1;
LAB_0040f648:
          uVar21 = FUN_00403a94(uVar21,uVar17,uVar16,uVar19);
          return uVar21;
        }
      }
      else {
        iVar2 = (*(code *)PTR_strcmp_004234ec)(uVar21,"gen-pptp");
        if (iVar2 != 0) {
          iVar2 = (*(code *)PTR_strcmp_004234ec)(uVar21,"clearppp");
          if (iVar2 == 0) {
            uVar21 = (*(code *)PTR_atoi_004234b8)(param_2[2]);
            uVar21 = FUN_00406b10(uVar21,param_2[3]);
            return uVar21;
          }
          iVar2 = (*(code *)PTR_strcmp_004234ec)(uVar21,"clearl2tp");
          if (iVar2 == 0) {
            uVar8 = (*(code *)PTR_atoi_004234b8)(param_2[2]);
            uVar21 = (*(code *)PTR_atoi_004234b8)(param_2[3]);
            uVar21 = FUN_00407038(uVar8,uVar21,param_2[6],param_2[4],param_2[5]);
            return uVar21;
          }
          iVar2 = (*(code *)PTR_strcmp_004234ec)(uVar21,"settime");
          if (iVar2 == 0) {
            uVar21 = FUN_0040727c();
            return uVar21;
          }
          iVar2 = (*(code *)PTR_strcmp_004234ec)(uVar21,"upd-wsc-conf");
          uVar17 = 0;
          if (iVar2 == 0) {
            uVar21 = param_2[2];
            uVar16 = param_2[3];
            piVar9 = (int *)param_2[4];
LAB_0040f7c4:
            uVar21 = FUN_004076bc(uVar21,uVar16,uVar17,piVar9);
            return uVar21;
          }
          iVar2 = (*(code *)PTR_strcmp_004234ec)(uVar21,"gen-pin",0);
          if (iVar2 == 0) {
            local_2c = &iStack_4f14;
            (*(code *)PTR_sprintf_004234e0)(local_2c,"wlan%d",*(undefined4 *)PTR_wlan_idx_00423548);
            uVar21 = 0;
            uVar16 = 0;
            uVar17 = 1;
            piVar9 = local_2c;
            goto LAB_0040f7c4;
          }
          iVar2 = (*(code *)PTR_strcmp_004234ec)(uVar21,"gethw");
          if (iVar2 == 0) {
            iVar2 = 0;
            if (param_1 != 2) {
              iVar20 = 2;
              if (param_1 != 3) {
                iVar5 = param_2[2];
                iVar2 = (*(code *)PTR_memcmp_0042352c)(iVar5,&DAT_0041278c,4);
                iVar20 = 2;
                if (iVar2 == 0) {
                  iVar2 = (*(code *)PTR_atoi_004234b8)(iVar5 + 4);
                  iVar20 = 3;
                  if (0 < iVar2) {
LAB_0040f960:
                    pcVar13 = "invalid wlan interface index number!";
                    pcVar25 = (code *)PTR_puts_004235c4;
                    goto LAB_0040f96c;
                  }
                  *(int *)PTR_wlan_idx_00423548 = iVar2;
                }
              }
              (*(code *)PTR_sscanf_00423524)(param_2[iVar20],"%s",local_4ef0 + 0x14);
              param_2 = param_2 + iVar20 + 1;
              puVar23 = auStack_42a0;
              piVar9 = local_4d4c;
              iVar2 = 0;
              while (iVar20 = iVar20 + 1, iVar20 < param_1) {
                (*(code *)PTR_sscanf_00423524)(*param_2,"%s",puVar23);
                iVar2 = iVar2 + 1;
                *piVar9 = (int)puVar23;
                param_2 = param_2 + 1;
                puVar23 = puVar23 + 100;
                piVar9 = piVar9 + 1;
              }
              local_4d4c[iVar2] = 0;
            }
            iVar20 = 4;
          }
          else {
            iVar2 = (*(code *)PTR_strcmp_004234ec)(uVar21,"sethw");
            if (iVar2 != 0) {
              iVar20 = (*(code *)PTR_strcmp_004234ec)(uVar21,&DAT_00413188);
              iVar2 = 0;
              if (iVar20 != 0) goto LAB_0040fa38;
              iVar20 = 6;
              goto LAB_00410740;
            }
            iVar2 = 0;
            if (param_1 != 2) {
              iVar20 = 2;
              if (4 < param_1) {
                iVar5 = param_2[2];
                iVar2 = (*(code *)PTR_memcmp_0042352c)(iVar5,&DAT_0041278c,4);
                iVar20 = 2;
                if (iVar2 == 0) {
                  iVar2 = (*(code *)PTR_atoi_004234b8)(iVar5 + 4);
                  iVar20 = 3;
                  if (0 < iVar2) goto LAB_0040f960;
                  *(int *)PTR_wlan_idx_00423548 = iVar2;
                }
              }
              (*(code *)PTR_sscanf_00423524)(param_2[iVar20],"%s",local_4ef0 + 0x14);
              param_2 = param_2 + iVar20 + 1;
              puVar23 = auStack_42a0;
              piVar9 = local_4d4c;
              iVar2 = 0;
              while (iVar20 = iVar20 + 1, iVar20 < param_1) {
                (*(code *)PTR_sscanf_00423524)(*param_2,"%s",puVar23);
                iVar2 = iVar2 + 1;
                *piVar9 = (int)puVar23;
                param_2 = param_2 + 1;
                puVar23 = puVar23 + 100;
                piVar9 = piVar9 + 1;
              }
              local_4d4c[iVar2] = 0;
            }
            iVar20 = 5;
          }
          goto LAB_00410740;
        }
        if (4 < param_1) {
          uVar19 = param_2[4];
          uVar17 = param_2[2];
          uVar16 = param_2[3];
          uVar21 = 0;
          goto LAB_0040f648;
        }
      }
      pcVar13 = "Miss arguments [option-file pap-file chap-file]!";
      pcVar25 = (code *)PTR_puts_004235c4;
      goto LAB_0040d2d4;
    }
    if (param_1 == 2) {
      pcVar13 = "Miss arguments [wlan_interface]!";
      pcVar25 = (code *)PTR_puts_004235c4;
      goto LAB_0040d2d4;
    }
    iVar20 = param_2[2];
    iVar2 = (*(code *)PTR_memcmp_0042352c)(iVar20,&DAT_0041278c,4);
    if (iVar2 != 0) {
      pcVar13 = "Miss wlan_interface argument!";
      pcVar25 = (code *)PTR_puts_004235c4;
      goto LAB_0040d2d4;
    }
    uVar3 = (*(code *)PTR_strlen_004234b4)(iVar20);
    if (((8 < uVar3) && (*(char *)(iVar20 + 5) == '-')) &&
       ((*(char *)(iVar20 + 6) == 'v' && (*(char *)(iVar20 + 7) == 'a')))) {
      iVar2 = (*(code *)PTR_atoi_004234b8)(iVar20 + 8);
      if (4 < iVar2) goto LAB_0040f4f8;
      *(int *)PTR_vwlan_idx_0042355c = iVar2 + 1;
    }
    iVar2 = param_2[2];
    uVar3 = (*(code *)PTR_strlen_004234b4)(iVar2);
    if (((8 < uVar3) && (*(char *)(iVar2 + 5) == '-')) &&
       (iVar2 = (*(code *)PTR_memcmp_0042352c)(iVar2 + 6,&DAT_00410e48,3), iVar2 == 0)) {
      *(undefined4 *)PTR_vwlan_idx_0042355c = 5;
    }
    iVar2 = (*(code *)PTR_atoi_004234b8)(param_2[2] + 4);
    *(int *)PTR_wlan_idx_00423548 = iVar2;
    if (iVar2 < 1) {
      uVar21 = FUN_00404d14(param_2[2]);
      goto LAB_004106cc;
    }
    pcVar13 = "invalid wlan interface index number!";
LAB_004100e0:
    (*(code *)PTR_puts_004235c4)(pcVar13);
    goto LAB_0040fa40;
  }
  iVar2 = 0;
  if (param_1 != 2) {
    if (param_1 == 3) {
LAB_0040c914:
      iVar20 = 2;
    }
    else {
      iVar20 = param_2[2];
      iVar2 = (*(code *)PTR_memcmp_0042352c)(iVar20,&DAT_0041278c,4);
      if (iVar2 != 0) goto LAB_0040c914;
      uVar3 = (*(code *)PTR_strlen_004234b4)(iVar20);
      if (((8 < uVar3) && (*(char *)(iVar20 + 5) == '-')) &&
         ((*(char *)(iVar20 + 6) == 'v' && (*(char *)(iVar20 + 7) == 'a')))) {
        iVar2 = (*(code *)PTR_atoi_004234b8)(iVar20 + 8);
        if (4 < iVar2) goto LAB_0040f4f8;
        *(int *)PTR_vwlan_idx_0042355c = iVar2 + 1;
      }
      iVar2 = param_2[2];
      uVar3 = (*(code *)PTR_strlen_004234b4)(iVar2);
      if (((8 < uVar3) && (*(char *)(iVar2 + 5) == '-')) &&
         (iVar2 = (*(code *)PTR_memcmp_0042352c)(iVar2 + 6,&DAT_00410e48,3), iVar2 == 0)) {
        *(undefined4 *)PTR_vwlan_idx_0042355c = 5;
      }
      iVar2 = (*(code *)PTR_atoi_004234b8)(param_2[2] + 4);
      if (0 < iVar2) goto LAB_0040f3ac;
      iVar20 = 3;
      *(int *)PTR_wlan_idx_00423548 = iVar2;
    }
    (*(code *)PTR_sscanf_00423524)(param_2[iVar20],"%s",local_4ef0 + 0x14);
    param_2 = param_2 + iVar20 + 1;
    puVar23 = auStack_42a0;
    piVar9 = local_4d4c;
    iVar2 = 0;
    while (iVar20 = iVar20 + 1, iVar20 < param_1) {
      (*(code *)PTR_sscanf_00423524)(*param_2,"%s",puVar23);
      iVar2 = iVar2 + 1;
      *piVar9 = (int)puVar23;
      param_2 = param_2 + 1;
      puVar23 = puVar23 + 100;
      piVar9 = piVar9 + 1;
    }
    local_4d4c[iVar2] = 0;
  }
  iVar20 = 1;
LAB_00410740:
  if (iVar20 - 1U < 2) {
    if (local_4ef0[0x14] != '\0') {
      if (iVar20 != 2) goto LAB_0041008c;
      iVar5 = (*(code *)PTR_strcmp_004234ec)(local_4ef0 + 0x14,"MACAC_ADDR");
      if ((iVar5 == 0) ||
         (iVar5 = (*(code *)PTR_strcmp_004234ec)(local_4ef0 + 0x14,"DEF_MACAC_ADDR"), iVar5 == 0)) {
        iVar5 = local_4d4c[0];
        if (iVar2 != 0) {
          iVar6 = (*(code *)PTR_strcmp_004234ec)(local_4d4c[0],&DAT_004120b8);
          if ((iVar6 != 0) &&
             (iVar7 = (*(code *)PTR_strcmp_004234ec)(iVar5,&DAT_004120dc), iVar7 != 0)) {
            iVar7 = (*(code *)PTR_strcmp_004234ec)(iVar5,"delall");
            uVar21 = 0xffffffff;
            if (iVar7 != 0) goto LAB_004106cc;
          }
          iVar5 = (*(code *)PTR_strcmp_004234ec)(iVar5,&DAT_004120dc);
          if (((iVar5 == 0) || (iVar6 == 0)) && (uVar21 = 0xffffffff, local_4d4c[1] == 0))
          goto LAB_004106cc;
          goto LAB_0040fb44;
        }
      }
      else {
LAB_0040fb44:
        iVar5 = (*(code *)PTR_strcmp_004234ec)(local_4ef0 + 0x14,"VLANCONFIG_TBL");
        if ((iVar5 == 0) ||
           (iVar5 = (*(code *)PTR_strcmp_004234ec)(local_4ef0 + 0x14,"DEF_VLANCONFIG_TBL"),
           iVar5 == 0)) {
          iVar5 = local_4d4c[0];
          if (iVar2 == 0) goto LAB_004106c8;
          iVar6 = (*(code *)PTR_strcmp_004234ec)(local_4d4c[0],&DAT_004120b8);
          if ((iVar6 != 0) &&
             (iVar6 = (*(code *)PTR_strcmp_004234ec)(iVar5,&DAT_004120dc), iVar6 != 0)) {
            iVar5 = (*(code *)PTR_strcmp_004234ec)(iVar5,"delall");
            uVar21 = 0xffffffff;
            if (iVar5 != 0) goto LAB_004106cc;
          }
        }
        iVar5 = (*(code *)PTR_strcmp_004234ec)(local_4ef0 + 0x14,&DAT_004131b8);
        if ((iVar5 == 0) ||
           (iVar5 = (*(code *)PTR_strcmp_004234ec)(local_4ef0 + 0x14,&DAT_004131b4), iVar5 == 0)) {
          iVar5 = local_4d4c[0];
          if (iVar2 == 0) goto LAB_004106c8;
          iVar6 = (*(code *)PTR_strcmp_004234ec)(local_4d4c[0],&DAT_004120b8);
          if ((iVar6 != 0) &&
             (iVar7 = (*(code *)PTR_strcmp_004234ec)(iVar5,&DAT_004120dc), iVar7 != 0)) {
            iVar7 = (*(code *)PTR_strcmp_004234ec)(iVar5,"delall");
            uVar21 = 0xffffffff;
            if (iVar7 != 0) goto LAB_004106cc;
          }
          iVar5 = (*(code *)PTR_strcmp_004234ec)(iVar5,&DAT_004120dc);
          if (((iVar5 == 0) || (iVar6 == 0)) && (uVar21 = 0xffffffff, local_4d4c[1] == 0))
          goto LAB_004106cc;
        }
        iVar5 = (*(code *)PTR_strcmp_004234ec)(local_4ef0 + 0x14,"PORTFW_TBL");
        if ((iVar5 == 0) ||
           (iVar5 = (*(code *)PTR_strcmp_004234ec)(local_4ef0 + 0x14,"DEF_PORTFW_TBL"), iVar5 == 0))
        {
          iVar5 = local_4d4c[0];
          if (iVar2 == 0) goto LAB_004106c8;
          iVar6 = (*(code *)PTR_strcmp_004234ec)(local_4d4c[0],&DAT_004120b8);
          if ((iVar6 != 0) &&
             (iVar6 = (*(code *)PTR_strcmp_004234ec)(iVar5,&DAT_004120dc), iVar6 != 0)) {
            iVar5 = (*(code *)PTR_strcmp_004234ec)(iVar5,"delall");
            uVar21 = 0xffffffff;
            if (iVar5 != 0) goto LAB_004106cc;
          }
        }
        iVar5 = (*(code *)PTR_strcmp_004234ec)(local_4ef0 + 0x14,"PORTFILTER_TBL");
        if ((iVar5 == 0) ||
           (iVar5 = (*(code *)PTR_strcmp_004234ec)(local_4ef0 + 0x14,"DEF_PORTFILTER_TBL"),
           iVar5 == 0)) {
          iVar5 = local_4d4c[0];
          if (iVar2 == 0) goto LAB_004106c8;
          iVar6 = (*(code *)PTR_strcmp_004234ec)(local_4d4c[0],&DAT_004120b8);
          if ((iVar6 != 0) &&
             (iVar6 = (*(code *)PTR_strcmp_004234ec)(iVar5,&DAT_004120dc), iVar6 != 0)) {
            iVar5 = (*(code *)PTR_strcmp_004234ec)(iVar5,"delall");
            uVar21 = 0xffffffff;
            if (iVar5 != 0) goto LAB_004106cc;
          }
        }
        iVar5 = (*(code *)PTR_strcmp_004234ec)(local_4ef0 + 0x14,"IPFILTER_TBL");
        if ((iVar5 == 0) ||
           (iVar5 = (*(code *)PTR_strcmp_004234ec)(local_4ef0 + 0x14,"DEF_IPFILTER_TBL"), iVar5 == 0
           )) {
          iVar5 = local_4d4c[0];
          if (iVar2 == 0) goto LAB_004106c8;
          iVar6 = (*(code *)PTR_strcmp_004234ec)(local_4d4c[0],&DAT_004120b8);
          if ((iVar6 != 0) &&
             (iVar6 = (*(code *)PTR_strcmp_004234ec)(iVar5,&DAT_004120dc), iVar6 != 0)) {
            iVar5 = (*(code *)PTR_strcmp_004234ec)(iVar5,"delall");
            uVar21 = 0xffffffff;
            if (iVar5 != 0) goto LAB_004106cc;
          }
        }
        iVar5 = (*(code *)PTR_strcmp_004234ec)(local_4ef0 + 0x14,"MACFILTER_TBL");
        if ((iVar5 == 0) ||
           (iVar5 = (*(code *)PTR_strcmp_004234ec)(local_4ef0 + 0x14,"DEF_MACFILTER_TBL"),
           iVar5 == 0)) {
          iVar5 = local_4d4c[0];
          if (iVar2 == 0) goto LAB_004106c8;
          iVar6 = (*(code *)PTR_strcmp_004234ec)(local_4d4c[0],&DAT_004120b8);
          if ((iVar6 != 0) &&
             (iVar6 = (*(code *)PTR_strcmp_004234ec)(iVar5,&DAT_004120dc), iVar6 != 0)) {
            iVar5 = (*(code *)PTR_strcmp_004234ec)(iVar5,"delall");
            uVar21 = 0xffffffff;
            if (iVar5 != 0) goto LAB_004106cc;
          }
        }
        iVar5 = (*(code *)PTR_strcmp_004234ec)(local_4ef0 + 0x14,"URLFILTER_TBL");
        if ((iVar5 == 0) ||
           (iVar5 = (*(code *)PTR_strcmp_004234ec)(local_4ef0 + 0x14,"DEF_URLFILTER_TBL"),
           iVar5 == 0)) {
          iVar5 = local_4d4c[0];
          if (iVar2 == 0) goto LAB_004106c8;
          iVar6 = (*(code *)PTR_strcmp_004234ec)(local_4d4c[0],&DAT_004120b8);
          if ((iVar6 != 0) &&
             (iVar6 = (*(code *)PTR_strcmp_004234ec)(iVar5,&DAT_004120dc), iVar6 != 0)) {
            iVar5 = (*(code *)PTR_strcmp_004234ec)(iVar5,"delall");
            uVar21 = 0xffffffff;
            if (iVar5 != 0) goto LAB_004106cc;
          }
        }
        iVar5 = (*(code *)PTR_strcmp_004234ec)(local_4ef0 + 0x14,"TRIGGERPORT_TBL");
        if (((iVar5 != 0) &&
            (iVar5 = (*(code *)PTR_strcmp_004234ec)(local_4ef0 + 0x14,"DEF_TRIGGERPORT_TBL"),
            iVar5 != 0)) ||
           ((iVar2 != 0 &&
            (((iVar5 = (*(code *)PTR_strcmp_004234ec)(local_4d4c[0],&DAT_004120b8), iVar5 == 0 ||
              (iVar5 = (*(code *)PTR_strcmp_004234ec)(local_4d4c[0],&DAT_004120dc), iVar5 == 0)) ||
             (iVar5 = (*(code *)PTR_strcmp_004234ec)(local_4d4c[0],"delall"), iVar5 == 0))))))
        goto LAB_0041008c;
      }
LAB_004106c8:
      uVar21 = 0xffffffff;
      goto LAB_004106cc;
    }
LAB_00410388:
    FUN_00402374();
    goto LAB_0040fa40;
  }
LAB_0041008c:
  switch(iVar20) {
  case 2:
    iVar20 = (*(code *)PTR_apmib_init_004234ac)();
    if (iVar20 == 0) {
LAB_004100d4:
      pcVar13 = "Initialize AP MIB failed!";
      goto LAB_004100e0;
    }
    iVar20 = FUN_00401c7c(local_4ef0 + 0x14);
    if (iVar20 == -1) {
LAB_00410380:
      FUN_00408dec();
      goto LAB_00410388;
    }
    if (iVar2 == 0) goto LAB_0040fa38;
    puVar14 = PTR_hwmib_table_00423580;
    if (((DAT_00423630 != 1) && (puVar14 = PTR_hwmib_wlan_table_004234e8, DAT_00423630 != 2)) &&
       ((DAT_00423630 == 3 || (puVar14 = PTR_mib_wlan_table_004235e8, DAT_00423630 == 5)))) {
      puVar14 = PTR_mib_table_0042358c;
    }
    goto LAB_00410518;
  case 3:
    FUN_0040c02c();
    break;
  case 4:
    iVar2 = (*(code *)PTR_apmib_init_HW_004235fc)();
    if (iVar2 == 0) {
      pcVar13 = "Initialize AP HW MIB failed!";
      pcVar25 = (code *)PTR_puts_004235c4;
      goto LAB_0040d2d4;
    }
    iVar2 = FUN_00401c7c(local_4ef0 + 0x14);
    if (iVar2 == -1) {
LAB_004104c0:
      FUN_00408dec();
      FUN_004013e8();
      return 0xffffffff;
    }
    local_4f20 = 1;
    puVar14 = PTR_hwmib_table_00423580;
    if ((DAT_00423630 != 1) && (puVar14 = PTR_hwmib_wlan_table_004234e8, DAT_00423630 != 2)) {
      puVar14 = (undefined *)0x0;
    }
    uVar17 = *(undefined4 *)((int)(puVar14 + iVar2 * 0x3c) + 0x24);
    uVar21 = *(undefined4 *)(puVar14 + iVar2 * 0x3c);
    goto LAB_00410478;
  case 5:
    iVar20 = (*(code *)PTR_apmib_init_HW_004235fc)();
    if (iVar20 == 0) {
LAB_0040d2c8:
      pcVar13 = "Initialize AP MIB failed!";
      pcVar25 = (code *)PTR_puts_004235c4;
LAB_0040d2d4:
      (*pcVar25)(pcVar13);
      return 0xffffffff;
    }
    iVar20 = FUN_00401c7c(local_4ef0 + 0x14);
    if (iVar20 == -1) goto LAB_004104c0;
    if (iVar2 == 0) {
      FUN_00408dec();
      return 0xffffffff;
    }
    puVar14 = PTR_hwmib_table_00423580;
    if ((DAT_00423630 != 1) && (puVar14 = PTR_hwmib_wlan_table_004234e8, DAT_00423630 != 2)) {
      puVar14 = (undefined *)0x0;
    }
LAB_00410518:
    puVar11 = (undefined4 *)(puVar14 + iVar20 * 0x3c);
    FUN_00408fa4(local_4ef0 + 0x14,*puVar11,puVar11[9],puVar11[0xb],iVar2,local_4d4c);
    break;
  case 6:
    iVar2 = (*(code *)PTR_apmib_init_HW_004235fc)();
    puVar14 = PTR_wlan_idx_00423548;
    if (iVar2 != 0) {
      *(undefined4 *)PTR_vwlan_idx_0042355c = 0;
      DAT_00423630 = 0;
      puVar22 = (undefined *)0x0;
LAB_004105b4:
      uVar3 = DAT_00423630 + 1;
      if (uVar3 < 3) {
        if (DAT_00423630 != 0) {
          DAT_00423630 = uVar3;
          if (uVar3 != 2) goto LAB_004106b0;
          puVar22 = PTR_hwmib_wlan_table_004234e8;
          goto LAB_004106b0;
        }
        iVar2 = 0;
        puVar22 = PTR_hwmib_table_00423580;
        DAT_00423630 = uVar3;
        while( true ) {
          while (piVar9 = (int *)(puVar22 + iVar2 * 0x3c), *piVar9 != 0) {
            if ((DAT_00423630 - 1 < 2) &&
               (local_30 = piVar9, (*(code *)PTR_printf_004235f4)(&DAT_00410dd4), piVar9 = local_30,
               DAT_00423630 == 2)) {
              (*(code *)PTR_printf_004235f4)("WLAN%d_",*(undefined4 *)puVar14);
              piVar9 = local_30;
            }
            iVar2 = iVar2 + 1;
            if (piVar9[9] != 9) {
              FUN_0040af80(piVar9 + 1,*piVar9,piVar9[9],1,0);
            }
          }
          if (DAT_00423630 != 2) goto LAB_004105b4;
          iVar2 = *(int *)puVar14;
          *(int *)puVar14 = iVar2 + 1;
          if (0 < iVar2 + 1) break;
LAB_004106b0:
          iVar2 = 0;
        }
        *(undefined4 *)puVar14 = 0;
        goto LAB_004105b4;
      }
      uVar21 = 0;
      DAT_00423630 = uVar3;
      goto LAB_004106cc;
    }
    pcVar13 = "Initialize AP MIB failed!";
LAB_00410574:
    (*(code *)PTR_puts_004235c4)(pcVar13);
    break;
  default:
    iVar2 = (*(code *)PTR_apmib_init_004234ac)();
    pcVar13 = local_4ef0 + 0x14;
    if (iVar2 == 0) goto LAB_004100d4;
    iVar2 = FUN_00401c7c(pcVar13);
    if (iVar2 == -1) goto LAB_00410380;
    local_4f20 = 1;
    if ((DAT_00423630 == 4) || (DAT_00423630 == 6)) {
      iVar20 = *(int *)(PTR_mib_wlan_table_004235e8 + iVar2 * 0x3c);
      uVar21 = 0x35;
      if ((iVar20 == 0x8036) ||
         ((uVar21 = 0x40, iVar20 == 0x8041 || (uVar21 = 0x1f8, iVar20 == 0x81f9))))
      goto LAB_004102d4;
    }
    else {
      iVar20 = (*(code *)PTR_strcmp_004234ec)(pcVar13,"PORTFW_TBL");
      uVar21 = 0x6f;
      if (iVar20 != 0) {
        iVar20 = (*(code *)PTR_strcmp_004234ec)(pcVar13,"PORTFILTER_TBL");
        uVar21 = 0x81;
        if (iVar20 != 0) {
          iVar20 = (*(code *)PTR_strcmp_004234ec)(pcVar13,"IPFILTER_TBL");
          uVar21 = 0x75;
          if (iVar20 != 0) {
            iVar20 = (*(code *)PTR_strcmp_004234ec)(pcVar13,"MACFILTER_TBL");
            uVar21 = 0x7b;
            if (iVar20 != 0) {
              iVar20 = (*(code *)PTR_strcmp_004234ec)(pcVar13,"URLFILTER_TBL");
              uVar21 = 0xf0;
              if (iVar20 != 0) {
                pcVar13 = local_4ef0 + 0x14;
                iVar20 = (*(code *)PTR_strcmp_004234ec)(pcVar13,"TRIGGERPORT_TBL");
                uVar21 = 0x87;
                if (iVar20 != 0) {
                  iVar20 = (*(code *)PTR_strcmp_004234ec)(pcVar13,"QOS_RULE_TBL");
                  uVar21 = 0x136;
                  if (iVar20 != 0) {
                    iVar20 = (*(code *)PTR_strcmp_004234ec)(pcVar13,"DHCPRSVDIP_TBL");
                    uVar21 = 0x125;
                    if (iVar20 != 0) {
                      iVar20 = (*(code *)PTR_strcmp_004234ec)(pcVar13,"VLANCONFIG_TBL");
                      uVar21 = 0x269;
                      if (iVar20 != 0) {
                        iVar20 = (*(code *)PTR_strcmp_004234ec)(pcVar13,"PROFILE_TBL1");
                        uVar21 = 0x835;
                        if (iVar20 != 0) {
                          iVar20 = (*(code *)PTR_strcmp_004234ec)(pcVar13,"PROFILE_TBL2");
                          if (iVar20 != 0) goto LAB_004102e4;
                          uVar21 = 0x847;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
LAB_004102d4:
      FUN_00408db4(uVar21,&local_4f20);
    }
LAB_004102e4:
    puVar14 = PTR_hwmib_table_00423580;
    if (((DAT_00423630 != 1) && (puVar14 = PTR_hwmib_wlan_table_004234e8, DAT_00423630 != 2)) &&
       ((DAT_00423630 == 3 || (puVar14 = PTR_mib_wlan_table_004235e8, DAT_00423630 == 5)))) {
      puVar14 = PTR_mib_table_0042358c;
    }
    uVar17 = *(undefined4 *)((int)(puVar14 + iVar2 * 0x3c) + 0x24);
    uVar21 = *(undefined4 *)(puVar14 + iVar2 * 0x3c);
LAB_00410478:
    FUN_0040af80(local_4ef0 + 0x14,uVar21,uVar17,local_4f20,local_4d4c);
  }
LAB_0041057c:
  uVar21 = 0;
LAB_004106cc:
  *(undefined4 *)PTR_vwlan_idx_0042355c = 0;
  return uVar21;
}

