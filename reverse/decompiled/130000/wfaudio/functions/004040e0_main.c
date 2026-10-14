/* main @ 004040e0 */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

undefined4 main(void)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined4 local_590;
  int local_58c [3];
  char local_580 [32];
  char local_560 [32];
  undefined1 auStack_540 [64];
  undefined4 local_500 [16];
  undefined1 auStack_4c0 [64];
  char acStack_480 [64];
  undefined1 auStack_440 [128];
  int aiStack_3c0 [32];
  char local_340 [128];
  char local_2c0 [128];
  undefined1 auStack_240 [512];
  int local_40;
  int local_3c;
  int local_38;
  char *local_34;
  char *local_30;
  
  local_590 = 0;
  local_58c[0] = 0;
  local_58c[1] = 0;
  (*(code *)PTR_memset_004231a8)(auStack_540,0,0x40);
  (*(code *)PTR_memset_004231a8)(local_500,0,0x40);
  (*(code *)PTR_memset_004231a8)(auStack_4c0,0,0x40);
  (*(code *)PTR_memset_004231a8)(auStack_440,0,0x80);
  (*(code *)PTR_memset_004231a8)(aiStack_3c0,0,0x80);
  (*(code *)PTR_memset_004231a8)(local_580,0,0x20);
  (*(code *)PTR_memset_004231a8)(local_560,0,0x20);
  (*(code *)PTR_memset_004231a8)(local_340,0,0x80);
  puVar2 = PTR_stderr_00423160;
  (*(code *)PTR_memset_004231a8)(local_2c0,0,0x80);
  local_34 = *(char **)puVar2;
  DAT_004234fc = 0;
  DAT_00423500 = (char *)0x0;
  uVar4 = (*(code *)PTR_getpid_004232a8)();
  (*(code *)PTR_fprintf_00423224)
            (local_34,"\nFILE %s FUNCTION %s LINE %d: wfaudio pid=%d\n\n","wfaudio.c",&DAT_00410c10,
             0x449,uVar4);
  iVar5 = (*(code *)PTR_pidfile_acquire_00423158)("/var/run/wfaudiosink-pid");
  if (iVar5 < 0) {
    (*(code *)PTR_fprintf_00423224)
              (*(undefined4 *)puVar2,"\nFILE %s FUNCTION %s LINE %d: pidfile_acquire fail!!!\n\n\n",
               "wfaudio.c",&DAT_00410c10,0x44c);
  }
  else {
    (*(code *)PTR_pidfile_write_release_00423174)(iVar5);
    (*(code *)PTR_pthread_mutex_init_0042310c)(PTR_ProgramExit_00423114,0);
    (*(code *)PTR_pthread_mutex_init_0042310c)(PTR_ProgramState_004231b4,0);
    (*(code *)PTR_pthread_mutex_init_0042310c)(PTR_WACWifiConnecting_Lock_004232f0,0);
    (*(code *)PTR_pthread_mutex_init_0042310c)(PTR_WACWifiConnectingState_Lock_004232bc,0);
    (*(code *)PTR_pthread_mutex_init_0042310c)(PTR_WACGlobal_Lock_00423238,0);
    (*(code *)PTR_StartThreadForWFAudioNetlink_00423258)();
    FUN_00404094();
    LogFile = (*(code *)PTR_open_00423100)("/var/log/wfaudio.log",0x302,0x3f);
    if (0 < LogFile) {
      (*(code *)PTR_sprintf_00423164)(auStack_240,"%d, Log Started:",0x45c);
      (*(code *)PTR_WriteLog2File_004230d0)(auStack_240);
    }
    (*(code *)PTR_apmib_init_004230fc)();
    iVar5 = (*(code *)PTR_SetWlan_idx_00423298)("wlan0");
    if (iVar5 != 0) {
      (*(code *)PTR_apmib_get_00423264)(0x2b0,&NetWACFlag);
    }
    (*(code *)PTR_strcpy_004232f4)(&dst_connect_ap_info,"wlan0");
    if (NetWACFlag == 1) {
      (*(code *)PTR_strcpy_004232f4)(&dst_connect_ap_info,"wlan0");
      local_40 = 1;
      iVar5 = 2;
    }
    else {
      local_40 = 0;
      iVar5 = 0;
      (*(code *)PTR_strcpy_004232f4)(&dst_connect_ap_info,"wlan0-vxd");
    }
    FUN_0040324c();
    DAT_004233d8 = 0;
    *(undefined4 *)PTR_LastClientModeConnection_00423150 = 0;
    iVar10 = 0;
    iVar9 = 0;
LAB_004044b0:
    (*(code *)PTR_pthread_mutex_lock_0042312c)(PTR_ProgramExit_00423114);
    iVar11 = *(int *)PTR_program_terminate_00423184;
    (*(code *)PTR_pthread_mutex_unlock_00423178)(PTR_ProgramExit_00423114);
    if (iVar11 != 1) {
      iVar11 = (*(code *)PTR_isFileExist_004230f8)("/var/system/start_init");
      if (iVar11 == 0) {
        (*(code *)PTR_pthread_mutex_lock_0042312c)(PTR_WACWifiConnecting_Lock_004232f0);
        iVar11 = m_WACWifiConnecting;
        (*(code *)PTR_pthread_mutex_unlock_00423178)(PTR_WACWifiConnecting_Lock_004232f0);
        (*(code *)PTR_pthread_mutex_lock_0042312c)(PTR_WACWifiConnectingState_Lock_004232bc);
        local_38 = NetWACFlag;
        if (dst_connect_ap_info != '\0') {
          (*(code *)PTR_strcpy_004232f4)(local_580,&dst_connect_ap_info);
        }
        (*(code *)PTR_pthread_mutex_unlock_00423178)(PTR_WACWifiConnectingState_Lock_004232bc);
        (*(code *)PTR_pthread_mutex_lock_0042312c)(PTR_WACGlobal_Lock_00423238);
        local_3c = DAT_004233f0;
        (*(code *)PTR_pthread_mutex_unlock_00423178)(PTR_WACGlobal_Lock_00423238);
        if (local_560[0] != '\0') {
          local_30 = local_580;
          local_34 = local_560;
          iVar6 = (*(code *)PTR_strcmp_0042317c)(local_560,local_30);
          if (iVar6 != 0) {
            if (iVar11 == 0) {
              (*(code *)PTR_strcpy_004232f4)(local_34,local_30);
            }
            DAT_004233d8 = 0;
            *(undefined4 *)PTR_LastClientModeConnection_00423150 = 0;
          }
        }
        if ((local_38 == 0) && (iVar11 == 0)) {
          iVar5 = 0;
        }
        else {
          if (((iVar5 == 0) && (local_580[0] != '\0')) &&
             (iVar6 = (*(code *)PTR_strcmp_0042317c)(local_580,"wlan0-vxd"), iVar6 == 0)) {
            iVar5 = FUN_00402194();
          }
          if (DAT_00423504 == 0) {
            if (iVar5 == 1) {
              if ((local_580[0] != '\0') &&
                 (local_34 = local_580,
                 iVar6 = (*(code *)PTR_strcmp_0042317c)(local_580,"wlan0-vxd"), iVar6 == 0)) {
                iVar6 = (*(code *)PTR_Check_Wlan_isConnected_0042311c)(1,&DAT_0042334c,local_34);
                if (iVar6 == 1) {
                  (*(code *)PTR_pthread_mutex_lock_0042312c)(PTR_WACWifiConnecting_Lock_004232f0);
                  DAT_004234f8 = iVar5;
                  (*(code *)PTR_pthread_mutex_unlock_00423178)(PTR_WACWifiConnecting_Lock_004232f0);
                  if (DAT_004233d8 == 0) {
                    DAT_004233d8 = 1;
                  }
                  else {
                    iVar9 = 0;
                    if (DAT_004233d8 != 2) goto LAB_00404900;
                    iVar9 = (*(code *)PTR_getInAddr_0042328c)(&DAT_00410498,0,local_58c + 2);
                    if (iVar9 == 0) {
                      if ((DAT_00423500 == (char *)0x0) && (0x1e < DAT_004234fc)) {
                        DAT_00423500 = (char *)0x1;
                        (*(code *)PTR_printf_004232d4)
                                  ("[%s:%d] start avahi!!!\n",&DAT_00410c10,0x4d9);
                        (*(code *)PTR_pthread_create_004232cc)
                                  (PTR_m_pthread_avahi_daemon_004232b0,0,FUN_00401df4,0);
                      }
                      DAT_004233d8 = 2;
                    }
                    else {
                      uVar4 = (*(code *)PTR_inet_ntoa_00423190)(local_58c[2]);
                      (*(code *)PTR_sprintf_00423164)(auStack_540,"%s",uVar4);
                      (*(code *)PTR_apmib_get_00423264)(0xaa,local_500);
                      uVar4 = (*(code *)PTR_inet_ntoa_00423190)(local_500[0]);
                      (*(code *)PTR_sprintf_00423164)(auStack_4c0,"%s",uVar4);
                      (*(code *)PTR_fprintf_00423224)
                                (*(undefined4 *)PTR_stderr_00423160,
                                 "\nFILE %s FUNCTION %s LINE %d: Get IP address is %s\n\n",
                                 "wfaudio.c",&DAT_00410c10,0x4ce,auStack_540);
                      iVar9 = (*(code *)PTR_strcmp_0042317c)(auStack_540,"0.0.0.0");
                      if (iVar9 == 0) {
                        DAT_004233d8 = 2;
                      }
                      else {
                        DAT_004233d8 = 3;
                        DAT_00423348 = 0;
                      }
                    }
                  }
                  iVar9 = 0;
                }
                else {
                  DAT_004233d8 = 0;
                }
LAB_00404900:
                if ((*(int *)PTR_LastClientModeConnection_00423150 == 3) && (DAT_004233d8 != 3)) {
                  DAT_00423344 = 0;
                  DAT_00423348 = DAT_00423348 + 1;
                }
                if (DAT_004233d8 == 1) {
                  FUN_00401d9c();
                  iVar6 = (*(code *)PTR_isFileExist_004230f8)("/etc/udhcpc/udhcpc-br0.pid");
                  if (iVar6 == 0) {
                    (*(code *)PTR_printf_004232d4)("%d Start DHCP Client\n",0x502);
                    (*(code *)PTR_system_00423270)("ifconfig br0 0.0.0.0");
                    (*(code *)PTR_set_lan_dhcpc_0042316c)(&DAT_00410498);
                  }
                  DAT_004233d8 = 2;
                }
                else if (DAT_004233d8 == 0) {
                  iVar9 = iVar9 + 1;
                  if (0x5a < iVar9) {
                    (*(code *)PTR_fprintf_00423224)
                              (*(undefined4 *)PTR_stderr_00423160,
                               "\nFILE %s FUNCTION %s LINE %d: WiFi Client CANNOT connect, RESET to AP State\n\n"
                               ,"wfaudio.c",&DAT_00410c10,0x4f5);
                    iVar9 = 0;
                    FUN_004035dc();
                    iVar5 = 0;
                    (*(code *)PTR_ChangeLEDConfiguring_00423288)(1);
                  }
                }
                else if (DAT_004233d8 == 3) {
                  if (iVar11 == 1) {
                    if (DAT_00423508 == 0) {
                      local_30 = &DAT_00420000;
                      local_34 = acStack_480;
                      (*(code *)PTR_sprintf_00423164)
                                (acStack_480,"echo 1 > %s","/var/run/WAC_JOIN_DONE");
                      (*(code *)PTR_system_00423270)(local_34);
                      (*(code *)PTR_puts_0042327c)("WAC Join and IP GET");
                      local_30[0x3508] = '\0';
                      local_30[0x3509] = '\0';
                      local_30[0x350a] = '\0';
                      local_30[0x350b] = '\x01';
                    }
                    if (local_3c < 4) goto LAB_00404ac4;
                    if (0x28 < iVar10) goto LAB_00404ae0;
                  }
                  else {
LAB_00404ac4:
                    bVar1 = iVar10 < 0x29;
                    iVar10 = iVar10 + 1;
                    if (bVar1) goto LAB_00404ea0;
LAB_00404ae0:
                    (*(code *)PTR_printf_004232d4)
                              ("%d WACServerCurrentState NOT STOPPED=%d\n",0x520,local_3c);
                  }
                  puVar2 = PTR_SetWlan_idx_00423298;
                  DAT_00423348 = 0;
                  DAT_00423344 = 0;
                  *(undefined4 *)PTR_LastClientModeConnection_00423150 = 0;
                  DAT_004233d8 = 0;
                  iVar9 = (*(code *)puVar2)("wlan0");
                  if (iVar9 != 0) {
                    local_58c[1] = 1;
                    (*(code *)PTR_apmib_set_0042323c)(0x2b0,local_58c + 1);
                  }
                  iVar9 = (*(code *)PTR_SetWlan_idx_00423298)("wlan0-vxd");
                  if (iVar9 != 0) {
                    (*(code *)PTR_apmib_get_00423264)(1,auStack_440);
                    (*(code *)PTR_apmib_get_00423264)(0x19,local_58c);
                    (*(code *)PTR_apmib_get_00423264)(0x1e,aiStack_3c0);
                    local_58c[1] = 1;
                    (*(code *)PTR_apmib_set_0042323c)(0x16,local_58c + 1);
                    (*(code *)PTR_apmib_get_00423264)(0x1d,local_58c + 1);
                  }
                  iVar9 = (*(code *)PTR_SetWlan_idx_00423298)("wlan0");
                  if (iVar9 != 0) {
                    local_590 = 1;
                    (*(code *)PTR_apmib_set_0042323c)(0x3b,&local_590);
                    (*(code *)PTR_apmib_set_0042323c)(1,auStack_440);
                    piVar8 = local_58c;
                    uVar4 = 0x19;
                    if (local_58c[0] != 0) {
                      (*(code *)PTR_apmib_set_0042323c)(0x19,piVar8);
                      piVar8 = local_58c + 1;
                      (*(code *)PTR_apmib_set_0042323c)(0x1d,piVar8);
                      (*(code *)PTR_apmib_set_0042323c)(0x26,piVar8);
                      local_58c[1] = 2;
                      (*(code *)PTR_apmib_set_0042323c)(0x1c,piVar8);
                      uVar4 = 0x1e;
                      piVar8 = aiStack_3c0;
                    }
                    (*(code *)PTR_apmib_set_0042323c)(uVar4,piVar8);
                  }
                  local_58c[1] = 0;
                  (*(code *)PTR_apmib_set_0042323c)(0xfa,local_58c + 1);
                  (*(code *)PTR_printf_004232d4)("[%s:%d]\n",&DAT_00410c10,0x576);
                  iVar10 = 0;
                  iVar9 = 0;
                  (*(code *)PTR_pthread_mutex_lock_0042312c)
                            (PTR_WACWifiConnectingState_Lock_004232bc);
                  (*(code *)PTR_strcpy_004232f4)(&dst_connect_ap_info,"wlan0");
                  (*(code *)PTR_pthread_mutex_unlock_00423178)
                            (PTR_WACWifiConnectingState_Lock_004232bc);
                  (*(code *)PTR_puts_0042327c)("Finish Update to WLAN0");
                  (*(code *)PTR_pthread_mutex_lock_0042312c)
                            (PTR_WACWifiConnectingState_Lock_004232bc);
                  NetWACFlag = 1;
                  (*(code *)PTR_pthread_mutex_unlock_00423178)
                            (PTR_WACWifiConnectingState_Lock_004232bc);
                  (*(code *)PTR_apmib_update_00423244)(4);
                  (*(code *)PTR_pthread_mutex_lock_0042312c)(PTR_WACWifiConnecting_Lock_004232f0);
                  m_WACWifiConnecting = 0;
                  (*(code *)PTR_pthread_mutex_unlock_00423178)(PTR_WACWifiConnecting_Lock_004232f0);
                  (*(code *)PTR_pthread_mutex_lock_0042312c)(PTR_WACGlobal_Lock_00423238);
                  DAT_004233f0 = -1;
                  (*(code *)PTR_pthread_mutex_unlock_00423178)(PTR_WACGlobal_Lock_00423238);
                  (*(code *)PTR_ChangeLEDConfiguring_00423288)(0);
                  DAT_00423504 = 1;
                  (*(code *)PTR_system_00423270)("killall mdnsd");
                  (*(code *)PTR_system_00423270)("mdnsd");
                  (*(code *)PTR_system_00423270)("killall -2 homekitserver");
                  (*(code *)PTR_system_00423270)("homekitserver");
                }
LAB_00404ea0:
                if (DAT_00423348 == 0) {
LAB_00404ed0:
                  *(int *)PTR_LastClientModeConnection_00423150 = DAT_004233d8;
                }
                else if (0x1e < DAT_00423348) {
                  DAT_00423348 = 0;
                  goto LAB_00404ed0;
                }
                if (iVar5 != 1) {
                  iVar5 = 0;
                  goto LAB_00404eec;
                }
              }
            }
            else {
LAB_00404eec:
              if ((local_580[0] != '\0') &&
                 (local_34 = local_580, iVar6 = (*(code *)PTR_strcmp_0042317c)(local_580,"wlan0"),
                 iVar6 == 0)) {
                pcVar7 = (char *)(*(code *)PTR_Check_Wlan_isConnected_0042311c)
                                           (1,&DAT_0042334c,local_34);
                if (pcVar7 == (char *)0x1) {
                  if (DAT_004233d8 == 0) {
                    DAT_004234fc = 0;
                    DAT_004233d8 = 1;
                    goto LAB_004050dc;
                  }
                  iVar9 = 0;
                  if (DAT_004233d8 == 2) {
                    local_30 = pcVar7;
                    iVar9 = (*(code *)PTR_getInAddr_0042328c)(&DAT_00410498,0,local_58c + 2);
                    if (iVar9 == 0) {
                      DAT_004233d8 = 2;
                      if ((DAT_00423500 == (char *)0x0) && (0x1e < DAT_004234fc)) {
                        DAT_00423500 = local_30;
                        (*(code *)PTR_pthread_create_004232cc)
                                  (PTR_m_pthread_avahi_daemon_004232b0,0,FUN_00401df4,0);
                        goto LAB_004050c8;
                      }
                    }
                    else {
                      uVar4 = (*(code *)PTR_inet_ntoa_00423190)(local_58c[2]);
                      (*(code *)PTR_sprintf_00423164)(auStack_540,"%s",uVar4);
                      (*(code *)PTR_apmib_get_00423264)(0xaa,local_500);
                      uVar4 = (*(code *)PTR_inet_ntoa_00423190)(local_500[0]);
                      (*(code *)PTR_sprintf_00423164)(auStack_4c0,"%s",uVar4);
                      iVar9 = (*(code *)PTR_strcmp_0042317c)(auStack_540,"0.0.0.0");
                      if (iVar9 == 0) {
                        DAT_004233d8 = 2;
                        (*(code *)PTR_fprintf_00423224)
                                  (*(undefined4 *)PTR_stderr_00423160,
                                   "\nFILE %s FUNCTION %s LINE %d: \n","wfaudio.c",&DAT_00410c10,
                                   0x5d4);
LAB_004050c8:
                        iVar9 = 0;
                        goto LAB_004050e0;
                      }
                      DAT_004233d8 = 3;
                      DAT_00423348 = 0;
                    }
LAB_004050dc:
                    iVar9 = 0;
                  }
                }
                else {
                  DAT_004233d8 = 0;
                }
LAB_004050e0:
                if ((*(int *)PTR_LastClientModeConnection_00423150 == 3) && (DAT_004233d8 != 3)) {
                  DAT_00423344 = 0;
                  DAT_00423348 = DAT_00423348 + 1;
                }
                if (DAT_004233d8 == 1) {
                  FUN_00401d9c();
                  iVar11 = (*(code *)PTR_isFileExist_004230f8)("/etc/udhcpc/udhcpc-br0.pid");
                  if (iVar11 == 0) {
                    (*(code *)PTR_printf_004232d4)("%d Start DHCP Client\n",0x60c);
                    (*(code *)PTR_system_00423270)("ifconfig br0 0.0.0.0");
                    (*(code *)PTR_set_lan_dhcpc_0042316c)(&DAT_00410498);
                  }
                  DAT_004233d8 = 2;
                }
                else if (DAT_004233d8 == 0) {
                  iVar9 = iVar9 + 1;
                }
                else if (DAT_004233d8 == 2) {
                  if ((DAT_00423500 == (char *)0x0) && (0x1e < DAT_004234fc)) {
                    DAT_00423500 = (char *)0x1;
                    (*(code *)PTR_pthread_create_004232cc)
                              (PTR_m_pthread_avahi_daemon_004232b0,0,FUN_00401df4,0);
                  }
                }
                else if (((DAT_004233d8 == 3) && (iVar11 == 1)) && (3 < local_3c)) {
                  DAT_00423348 = 0;
                  DAT_00423344 = 0;
                  (*(code *)PTR_system_00423270)("rm -f /tmp/net/airplay_name 2> /dev/null");
                  (*(code *)PTR_system_00423270)("rm -f /tmp/net/airplay_password 2> /dev/null");
                  (*(code *)PTR_apmib_get_00423264)(0x2b1,local_340);
                  if (local_340[0] != '\0') {
                    (*(code *)PTR_write_line_to_file_0042326c)("/tmp/net/airplay_name",1,local_340);
                    (*(code *)PTR_memset_004231a8)(local_340,0,0x80);
                  }
                  (*(code *)PTR_apmib_get_00423264)(0x2b2,local_2c0);
                  if (local_2c0[0] != '\0') {
                    (*(code *)PTR_write_line_to_file_0042326c)
                              ("/tmp/net/airplay_password",1,local_2c0);
                    (*(code *)PTR_memset_004231a8)(local_2c0,0,0x80);
                  }
                  puVar3 = PTR_WACWifiConnectingState_Lock_004232bc;
                  puVar2 = PTR_pthread_mutex_lock_0042312c;
                  *(undefined4 *)PTR_LastClientModeConnection_00423150 = 0;
                  DAT_004233d8 = 0;
                  (*(code *)puVar2)(puVar3);
                  NetWACFlag = 1;
                  (*(code *)PTR_pthread_mutex_unlock_00423178)
                            (PTR_WACWifiConnectingState_Lock_004232bc);
                  if (local_40 != 1) {
                    (*(code *)PTR_apmib_update_00423244)(4);
                  }
                  local_40 = 0;
                  iVar10 = 0;
                  (*(code *)PTR_pthread_mutex_lock_0042312c)(PTR_WACWifiConnecting_Lock_004232f0);
                  m_WACWifiConnecting = 0;
                  iVar9 = 0;
                  (*(code *)PTR_pthread_mutex_unlock_00423178)(PTR_WACWifiConnecting_Lock_004232f0);
                  (*(code *)PTR_pthread_mutex_lock_0042312c)(PTR_WACGlobal_Lock_00423238);
                  DAT_004233f0 = -1;
                  (*(code *)PTR_pthread_mutex_unlock_00423178)(PTR_WACGlobal_Lock_00423238);
                  (*(code *)PTR_ChangeLEDConfiguring_00423288)(0);
                }
                if (DAT_00423348 != 0) {
                  if (DAT_00423348 < 0x1f) goto LAB_00405448;
                  DAT_00423348 = 0;
                }
                *(int *)PTR_LastClientModeConnection_00423150 = DAT_004233d8;
              }
            }
LAB_00405448:
            (*(code *)PTR_strcpy_004232f4)(local_560,local_580);
            DAT_00423344 = DAT_00423344 + 1;
            if (300 < DAT_00423344) {
              DAT_00423344 = 0;
            }
            (*(code *)PTR_sleep_00423268)(1);
            if ((DAT_00423500 == (char *)0x0) && (DAT_004233d8 != 0)) {
              DAT_004234fc = DAT_004234fc + 1;
            }
            goto LAB_004044b0;
          }
        }
      }
      (*(code *)PTR_sleep_00423268)(1);
      goto LAB_004044b0;
    }
    (*(code *)PTR_pthread_mutex_destroy_00423134)(PTR_ProgramExit_00423114);
    (*(code *)PTR_pthread_mutex_destroy_00423134)(PTR_ProgramState_004231b4);
    (*(code *)PTR_close_004230cc)(LogFile);
    (*(code *)PTR_puts_0042327c)("Exit wfaudio");
  }
  return 0;
}

