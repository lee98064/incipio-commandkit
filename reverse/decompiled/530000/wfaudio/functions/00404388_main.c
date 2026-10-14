/* main @ 00404388 */

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
  (*(code *)PTR_memset_00423490)(auStack_540,0,0x40);
  (*(code *)PTR_memset_00423490)(local_500,0,0x40);
  (*(code *)PTR_memset_00423490)(auStack_4c0,0,0x40);
  (*(code *)PTR_memset_00423490)(auStack_440,0,0x80);
  (*(code *)PTR_memset_00423490)(aiStack_3c0,0,0x80);
  (*(code *)PTR_memset_00423490)(local_580,0,0x20);
  (*(code *)PTR_memset_00423490)(local_560,0,0x20);
  (*(code *)PTR_memset_00423490)(local_340,0,0x80);
  puVar2 = PTR_stderr_00423444;
  (*(code *)PTR_memset_00423490)(local_2c0,0,0x80);
  local_34 = *(char **)puVar2;
  DAT_004237dc = 0;
  DAT_004237e0 = (char *)0x0;
  uVar4 = (*(code *)PTR_getpid_00423594)();
  (*(code *)PTR_fprintf_0042350c)
            (local_34,"\nFILE %s FUNCTION %s LINE %d: wfaudio pid=%d\n\n","wfaudio.c",&DAT_00410ee8,
             0x46d,uVar4);
  iVar5 = (*(code *)PTR_pidfile_acquire_0042343c)("/var/run/wfaudiosink-pid");
  if (iVar5 < 0) {
    (*(code *)PTR_fprintf_0042350c)
              (*(undefined4 *)puVar2,"\nFILE %s FUNCTION %s LINE %d: pidfile_acquire fail!!!\n\n\n",
               "wfaudio.c",&DAT_00410ee8,0x470);
  }
  else {
    (*(code *)PTR_pidfile_write_release_0042345c)(iVar5);
    (*(code *)PTR_pthread_mutex_init_004233ec)(PTR_ProgramExit_004233f4,0);
    (*(code *)PTR_pthread_mutex_init_004233ec)(PTR_ProgramState_0042349c,0);
    (*(code *)PTR_pthread_mutex_init_004233ec)(PTR_WACWifiConnecting_Lock_004235dc,0);
    (*(code *)PTR_pthread_mutex_init_004233ec)(PTR_WACWifiConnectingState_Lock_004235a8,0);
    (*(code *)PTR_pthread_mutex_init_004233ec)(PTR_WACGlobal_Lock_00423520,0);
    (*(code *)PTR_StartThreadForWFAudioNetlink_00423540)();
    FUN_0040433c();
    LogFile = (*(code *)PTR_open_004233e0)("/var/log/wfaudio.log",0x302,0x3f);
    if (0 < LogFile) {
      (*(code *)PTR_sprintf_0042344c)(auStack_240,"%d, Log Started:",0x480);
      (*(code *)PTR_WriteLog2File_004233b0)(auStack_240);
    }
    (*(code *)PTR_apmib_init_004233dc)();
    iVar5 = (*(code *)PTR_SetWlan_idx_00423580)("wlan0");
    if (iVar5 != 0) {
      (*(code *)PTR_apmib_get_0042354c)(0x2b0,&NetWACFlag);
    }
    (*(code *)PTR_strcpy_004235e0)(&dst_connect_ap_info,"wlan0");
    if (NetWACFlag == 1) {
      (*(code *)PTR_strcpy_004235e0)(&dst_connect_ap_info,"wlan0");
      local_40 = 1;
      iVar5 = 2;
    }
    else {
      local_40 = 0;
      iVar5 = 0;
      (*(code *)PTR_strcpy_004235e0)(&dst_connect_ap_info,"wlan0-vxd");
    }
    FUN_004034f4();
    DAT_004236b8 = 0;
    *(undefined4 *)PTR_LastClientModeConnection_00423430 = 0;
    iVar10 = 0;
    iVar9 = 0;
LAB_00404758:
    (*(code *)PTR_pthread_mutex_lock_0042340c)(PTR_ProgramExit_004233f4);
    iVar11 = *(int *)PTR_program_terminate_0042346c;
    (*(code *)PTR_pthread_mutex_unlock_00423460)(PTR_ProgramExit_004233f4);
    if (iVar11 != 1) {
      iVar11 = (*(code *)PTR_isFileExist_004233d8)("/var/system/start_init");
      if (iVar11 == 0) {
        (*(code *)PTR_pthread_mutex_lock_0042340c)(PTR_WACWifiConnecting_Lock_004235dc);
        iVar11 = m_WACWifiConnecting;
        (*(code *)PTR_pthread_mutex_unlock_00423460)(PTR_WACWifiConnecting_Lock_004235dc);
        (*(code *)PTR_pthread_mutex_lock_0042340c)(PTR_WACWifiConnectingState_Lock_004235a8);
        local_38 = NetWACFlag;
        if (dst_connect_ap_info != '\0') {
          (*(code *)PTR_strcpy_004235e0)(local_580,&dst_connect_ap_info);
        }
        (*(code *)PTR_pthread_mutex_unlock_00423460)(PTR_WACWifiConnectingState_Lock_004235a8);
        (*(code *)PTR_pthread_mutex_lock_0042340c)(PTR_WACGlobal_Lock_00423520);
        local_3c = DAT_004236d0;
        (*(code *)PTR_pthread_mutex_unlock_00423460)(PTR_WACGlobal_Lock_00423520);
        if (local_560[0] != '\0') {
          local_30 = local_580;
          local_34 = local_560;
          iVar6 = (*(code *)PTR_strcmp_00423464)(local_560,local_30);
          if (iVar6 != 0) {
            if (iVar11 == 0) {
              (*(code *)PTR_strcpy_004235e0)(local_34,local_30);
            }
            DAT_004236b8 = 0;
            *(undefined4 *)PTR_LastClientModeConnection_00423430 = 0;
          }
        }
        if ((local_38 == 0) && (iVar11 == 0)) {
          iVar5 = 0;
        }
        else {
          if (((iVar5 == 0) && (local_580[0] != '\0')) &&
             (iVar6 = (*(code *)PTR_strcmp_00423464)(local_580,"wlan0-vxd"), iVar6 == 0)) {
            iVar5 = FUN_00402204();
          }
          if (DAT_004237e4 == 0) {
            if (iVar5 == 1) {
              if ((local_580[0] != '\0') &&
                 (local_34 = local_580,
                 iVar6 = (*(code *)PTR_strcmp_00423464)(local_580,"wlan0-vxd"), iVar6 == 0)) {
                iVar6 = (*(code *)PTR_Check_Wlan_isConnected_004233fc)(1,&DAT_0042362c,local_34);
                if (iVar6 == 1) {
                  (*(code *)PTR_pthread_mutex_lock_0042340c)(PTR_WACWifiConnecting_Lock_004235dc);
                  DAT_004237d8 = iVar5;
                  (*(code *)PTR_pthread_mutex_unlock_00423460)(PTR_WACWifiConnecting_Lock_004235dc);
                  if (DAT_004236b8 == 0) {
                    DAT_004236b8 = 1;
                  }
                  else {
                    iVar9 = 0;
                    if (DAT_004236b8 != 2) goto LAB_00404ba8;
                    iVar9 = (*(code *)PTR_getInAddr_00423574)(&DAT_00410768,0,local_58c + 2);
                    if (iVar9 == 0) {
                      if ((DAT_004237e0 == (char *)0x0) && (0x1e < DAT_004237dc)) {
                        DAT_004237e0 = (char *)0x1;
                        (*(code *)PTR_printf_004235c0)
                                  ("[%s:%d] start avahi!!!\n",&DAT_00410ee8,0x4fd);
                        (*(code *)PTR_pthread_create_004235b8)
                                  (PTR_m_pthread_avahi_daemon_0042359c,0,FUN_00401e64,0);
                      }
                      DAT_004236b8 = 2;
                    }
                    else {
                      uVar4 = (*(code *)PTR_inet_ntoa_00423478)(local_58c[2]);
                      (*(code *)PTR_sprintf_0042344c)(auStack_540,"%s",uVar4);
                      (*(code *)PTR_apmib_get_0042354c)(0xaa,local_500);
                      uVar4 = (*(code *)PTR_inet_ntoa_00423478)(local_500[0]);
                      (*(code *)PTR_sprintf_0042344c)(auStack_4c0,"%s",uVar4);
                      (*(code *)PTR_fprintf_0042350c)
                                (*(undefined4 *)PTR_stderr_00423444,
                                 "\nFILE %s FUNCTION %s LINE %d: Get IP address is %s\n\n",
                                 "wfaudio.c",&DAT_00410ee8,0x4f2,auStack_540);
                      iVar9 = (*(code *)PTR_strcmp_00423464)(auStack_540,"0.0.0.0");
                      if (iVar9 == 0) {
                        DAT_004236b8 = 2;
                      }
                      else {
                        DAT_004236b8 = 3;
                        DAT_00423628 = 0;
                      }
                    }
                  }
                  iVar9 = 0;
                }
                else {
                  DAT_004236b8 = 0;
                }
LAB_00404ba8:
                if ((*(int *)PTR_LastClientModeConnection_00423430 == 3) && (DAT_004236b8 != 3)) {
                  DAT_00423624 = 0;
                  DAT_00423628 = DAT_00423628 + 1;
                }
                if (DAT_004236b8 == 1) {
                  FUN_00401e0c();
                  iVar6 = (*(code *)PTR_isFileExist_004233d8)("/etc/udhcpc/udhcpc-br0.pid");
                  if (iVar6 == 0) {
                    (*(code *)PTR_printf_004235c0)("%d Start DHCP Client\n",0x526);
                    (*(code *)PTR_system_00423558)("ifconfig br0 0.0.0.0");
                    (*(code *)PTR_set_lan_dhcpc_00423454)(&DAT_00410768);
                  }
                  DAT_004236b8 = 2;
                }
                else if (DAT_004236b8 == 0) {
                  iVar9 = iVar9 + 1;
                  if (0x5a < iVar9) {
                    (*(code *)PTR_fprintf_0042350c)
                              (*(undefined4 *)PTR_stderr_00423444,
                               "\nFILE %s FUNCTION %s LINE %d: WiFi Client CANNOT connect, RESET to AP State\n\n"
                               ,"wfaudio.c",&DAT_00410ee8,0x519);
                    iVar9 = 0;
                    FUN_00403884();
                    iVar5 = 0;
                    (*(code *)PTR_ChangeLEDConfiguring_00423570)(1);
                  }
                }
                else if (DAT_004236b8 == 3) {
                  if (iVar11 == 1) {
                    if (DAT_004237e8 == 0) {
                      local_30 = &DAT_00420000;
                      local_34 = acStack_480;
                      (*(code *)PTR_sprintf_0042344c)
                                (acStack_480,"echo 1 > %s","/var/run/WAC_JOIN_DONE");
                      (*(code *)PTR_system_00423558)(local_34);
                      (*(code *)PTR_puts_00423564)("WAC Join and IP GET");
                      local_30[0x37e8] = '\0';
                      local_30[0x37e9] = '\0';
                      local_30[0x37ea] = '\0';
                      local_30[0x37eb] = '\x01';
                    }
                    if (local_3c < 4) goto LAB_00404d6c;
                    if (0x28 < iVar10) goto LAB_00404d88;
                  }
                  else {
LAB_00404d6c:
                    bVar1 = iVar10 < 0x29;
                    iVar10 = iVar10 + 1;
                    if (bVar1) goto LAB_00405148;
LAB_00404d88:
                    (*(code *)PTR_printf_004235c0)
                              ("%d WACServerCurrentState NOT STOPPED=%d\n",0x544,local_3c);
                  }
                  puVar2 = PTR_SetWlan_idx_00423580;
                  DAT_00423628 = 0;
                  DAT_00423624 = 0;
                  *(undefined4 *)PTR_LastClientModeConnection_00423430 = 0;
                  DAT_004236b8 = 0;
                  iVar9 = (*(code *)puVar2)("wlan0");
                  if (iVar9 != 0) {
                    local_58c[1] = 1;
                    (*(code *)PTR_apmib_set_00423524)(0x2b0,local_58c + 1);
                  }
                  iVar9 = (*(code *)PTR_SetWlan_idx_00423580)("wlan0-vxd");
                  if (iVar9 != 0) {
                    (*(code *)PTR_apmib_get_0042354c)(1,auStack_440);
                    (*(code *)PTR_apmib_get_0042354c)(0x19,local_58c);
                    (*(code *)PTR_apmib_get_0042354c)(0x1e,aiStack_3c0);
                    local_58c[1] = 1;
                    (*(code *)PTR_apmib_set_00423524)(0x16,local_58c + 1);
                    (*(code *)PTR_apmib_get_0042354c)(0x1d,local_58c + 1);
                  }
                  iVar9 = (*(code *)PTR_SetWlan_idx_00423580)("wlan0");
                  if (iVar9 != 0) {
                    local_590 = 1;
                    (*(code *)PTR_apmib_set_00423524)(0x3b,&local_590);
                    (*(code *)PTR_apmib_set_00423524)(1,auStack_440);
                    piVar8 = local_58c;
                    uVar4 = 0x19;
                    if (local_58c[0] != 0) {
                      (*(code *)PTR_apmib_set_00423524)(0x19,piVar8);
                      piVar8 = local_58c + 1;
                      (*(code *)PTR_apmib_set_00423524)(0x1d,piVar8);
                      (*(code *)PTR_apmib_set_00423524)(0x26,piVar8);
                      local_58c[1] = 2;
                      (*(code *)PTR_apmib_set_00423524)(0x1c,piVar8);
                      uVar4 = 0x1e;
                      piVar8 = aiStack_3c0;
                    }
                    (*(code *)PTR_apmib_set_00423524)(uVar4,piVar8);
                  }
                  local_58c[1] = 0;
                  (*(code *)PTR_apmib_set_00423524)(0xfa,local_58c + 1);
                  (*(code *)PTR_printf_004235c0)("[%s:%d]\n",&DAT_00410ee8,0x59a);
                  iVar10 = 0;
                  iVar9 = 0;
                  (*(code *)PTR_pthread_mutex_lock_0042340c)
                            (PTR_WACWifiConnectingState_Lock_004235a8);
                  (*(code *)PTR_strcpy_004235e0)(&dst_connect_ap_info,"wlan0");
                  (*(code *)PTR_pthread_mutex_unlock_00423460)
                            (PTR_WACWifiConnectingState_Lock_004235a8);
                  (*(code *)PTR_puts_00423564)("Finish Update to WLAN0");
                  (*(code *)PTR_pthread_mutex_lock_0042340c)
                            (PTR_WACWifiConnectingState_Lock_004235a8);
                  NetWACFlag = 1;
                  (*(code *)PTR_pthread_mutex_unlock_00423460)
                            (PTR_WACWifiConnectingState_Lock_004235a8);
                  (*(code *)PTR_apmib_update_0042352c)(4);
                  (*(code *)PTR_pthread_mutex_lock_0042340c)(PTR_WACWifiConnecting_Lock_004235dc);
                  m_WACWifiConnecting = 0;
                  (*(code *)PTR_pthread_mutex_unlock_00423460)(PTR_WACWifiConnecting_Lock_004235dc);
                  (*(code *)PTR_pthread_mutex_lock_0042340c)(PTR_WACGlobal_Lock_00423520);
                  DAT_004236d0 = -1;
                  (*(code *)PTR_pthread_mutex_unlock_00423460)(PTR_WACGlobal_Lock_00423520);
                  (*(code *)PTR_ChangeLEDConfiguring_00423570)(0);
                  DAT_004237e4 = 1;
                  (*(code *)PTR_system_00423558)("killall mdnsd");
                  (*(code *)PTR_system_00423558)("mdnsd");
                  (*(code *)PTR_system_00423558)("killall -2 homekitserver");
                  (*(code *)PTR_system_00423558)("homekitserver");
                }
LAB_00405148:
                if (DAT_00423628 == 0) {
LAB_00405178:
                  *(int *)PTR_LastClientModeConnection_00423430 = DAT_004236b8;
                }
                else if (0x1e < DAT_00423628) {
                  DAT_00423628 = 0;
                  goto LAB_00405178;
                }
                if (iVar5 != 1) {
                  iVar5 = 0;
                  goto LAB_00405194;
                }
              }
            }
            else {
LAB_00405194:
              if ((local_580[0] != '\0') &&
                 (local_34 = local_580, iVar6 = (*(code *)PTR_strcmp_00423464)(local_580,"wlan0"),
                 iVar6 == 0)) {
                pcVar7 = (char *)(*(code *)PTR_Check_Wlan_isConnected_004233fc)
                                           (1,&DAT_0042362c,local_34);
                if (pcVar7 == (char *)0x1) {
                  if (DAT_004236b8 == 0) {
                    DAT_004237dc = 0;
                    DAT_004236b8 = 1;
                    goto LAB_00405384;
                  }
                  iVar9 = 0;
                  if (DAT_004236b8 == 2) {
                    local_30 = pcVar7;
                    iVar9 = (*(code *)PTR_getInAddr_00423574)(&DAT_00410768,0,local_58c + 2);
                    if (iVar9 == 0) {
                      DAT_004236b8 = 2;
                      if ((DAT_004237e0 == (char *)0x0) && (0x1e < DAT_004237dc)) {
                        DAT_004237e0 = local_30;
                        (*(code *)PTR_pthread_create_004235b8)
                                  (PTR_m_pthread_avahi_daemon_0042359c,0,FUN_00401e64,0);
                        goto LAB_00405370;
                      }
                    }
                    else {
                      uVar4 = (*(code *)PTR_inet_ntoa_00423478)(local_58c[2]);
                      (*(code *)PTR_sprintf_0042344c)(auStack_540,"%s",uVar4);
                      (*(code *)PTR_apmib_get_0042354c)(0xaa,local_500);
                      uVar4 = (*(code *)PTR_inet_ntoa_00423478)(local_500[0]);
                      (*(code *)PTR_sprintf_0042344c)(auStack_4c0,"%s",uVar4);
                      iVar9 = (*(code *)PTR_strcmp_00423464)(auStack_540,"0.0.0.0");
                      if (iVar9 == 0) {
                        DAT_004236b8 = 2;
                        (*(code *)PTR_fprintf_0042350c)
                                  (*(undefined4 *)PTR_stderr_00423444,
                                   "\nFILE %s FUNCTION %s LINE %d: \n","wfaudio.c",&DAT_00410ee8,
                                   0x5f8);
LAB_00405370:
                        iVar9 = 0;
                        goto LAB_00405388;
                      }
                      DAT_004236b8 = 3;
                      DAT_00423628 = 0;
                    }
LAB_00405384:
                    iVar9 = 0;
                  }
                }
                else {
                  DAT_004236b8 = 0;
                }
LAB_00405388:
                if ((*(int *)PTR_LastClientModeConnection_00423430 == 3) && (DAT_004236b8 != 3)) {
                  DAT_00423624 = 0;
                  DAT_00423628 = DAT_00423628 + 1;
                }
                if (DAT_004236b8 == 1) {
                  FUN_00401e0c();
                  iVar11 = (*(code *)PTR_isFileExist_004233d8)("/etc/udhcpc/udhcpc-br0.pid");
                  if (iVar11 == 0) {
                    (*(code *)PTR_printf_004235c0)("%d Start DHCP Client\n",0x630);
                    (*(code *)PTR_system_00423558)("ifconfig br0 0.0.0.0");
                    (*(code *)PTR_set_lan_dhcpc_00423454)(&DAT_00410768);
                  }
                  DAT_004236b8 = 2;
                }
                else if (DAT_004236b8 == 0) {
                  iVar9 = iVar9 + 1;
                }
                else if (DAT_004236b8 == 2) {
                  if ((DAT_004237e0 == (char *)0x0) && (0x1e < DAT_004237dc)) {
                    DAT_004237e0 = (char *)0x1;
                    (*(code *)PTR_pthread_create_004235b8)
                              (PTR_m_pthread_avahi_daemon_0042359c,0,FUN_00401e64,0);
                  }
                }
                else if (((DAT_004236b8 == 3) && (iVar11 == 1)) && (3 < local_3c)) {
                  DAT_00423628 = 0;
                  DAT_00423624 = 0;
                  (*(code *)PTR_system_00423558)("rm -f /tmp/net/airplay_name 2> /dev/null");
                  (*(code *)PTR_system_00423558)("rm -f /tmp/net/airplay_password 2> /dev/null");
                  (*(code *)PTR_apmib_get_0042354c)(0x2b1,local_340);
                  if (local_340[0] != '\0') {
                    (*(code *)PTR_write_line_to_file_00423554)("/tmp/net/airplay_name",1,local_340);
                    (*(code *)PTR_memset_00423490)(local_340,0,0x80);
                  }
                  (*(code *)PTR_apmib_get_0042354c)(0x2b2,local_2c0);
                  if (local_2c0[0] != '\0') {
                    (*(code *)PTR_write_line_to_file_00423554)
                              ("/tmp/net/airplay_password",1,local_2c0);
                    (*(code *)PTR_memset_00423490)(local_2c0,0,0x80);
                  }
                  puVar3 = PTR_WACWifiConnectingState_Lock_004235a8;
                  puVar2 = PTR_pthread_mutex_lock_0042340c;
                  *(undefined4 *)PTR_LastClientModeConnection_00423430 = 0;
                  DAT_004236b8 = 0;
                  (*(code *)puVar2)(puVar3);
                  NetWACFlag = 1;
                  (*(code *)PTR_pthread_mutex_unlock_00423460)
                            (PTR_WACWifiConnectingState_Lock_004235a8);
                  if (local_40 != 1) {
                    (*(code *)PTR_apmib_update_0042352c)(4);
                  }
                  local_40 = 0;
                  iVar10 = 0;
                  (*(code *)PTR_pthread_mutex_lock_0042340c)(PTR_WACWifiConnecting_Lock_004235dc);
                  m_WACWifiConnecting = 0;
                  iVar9 = 0;
                  (*(code *)PTR_pthread_mutex_unlock_00423460)(PTR_WACWifiConnecting_Lock_004235dc);
                  (*(code *)PTR_pthread_mutex_lock_0042340c)(PTR_WACGlobal_Lock_00423520);
                  DAT_004236d0 = -1;
                  (*(code *)PTR_pthread_mutex_unlock_00423460)(PTR_WACGlobal_Lock_00423520);
                  (*(code *)PTR_ChangeLEDConfiguring_00423570)(0);
                }
                if (DAT_00423628 != 0) {
                  if (DAT_00423628 < 0x1f) goto LAB_004056f0;
                  DAT_00423628 = 0;
                }
                *(int *)PTR_LastClientModeConnection_00423430 = DAT_004236b8;
              }
            }
LAB_004056f0:
            (*(code *)PTR_strcpy_004235e0)(local_560,local_580);
            DAT_00423624 = DAT_00423624 + 1;
            if (300 < DAT_00423624) {
              DAT_00423624 = 0;
            }
            (*(code *)PTR_sleep_00423550)(1);
            if ((DAT_004237e0 == (char *)0x0) && (DAT_004236b8 != 0)) {
              DAT_004237dc = DAT_004237dc + 1;
            }
            goto LAB_00404758;
          }
        }
      }
      (*(code *)PTR_sleep_00423550)(1);
      goto LAB_00404758;
    }
    (*(code *)PTR_pthread_mutex_destroy_00423414)(PTR_ProgramExit_004233f4);
    (*(code *)PTR_pthread_mutex_destroy_00423414)(PTR_ProgramState_0042349c);
    (*(code *)PTR_close_004233ac)(LogFile);
    (*(code *)PTR_puts_00423564)("Exit wfaudio");
  }
  return 0;
}

