/* Ghidra-generated pseudo-C; not original source or a buildable project. */
/* _init @ 00401938 */

int _init(EVP_PKEY_CTX *ctx)

{
  int iVar1;
  
  FUN_00401b38();
  iVar1 = FUN_0040f990();
  return iVar1;
}


/* entry @ 004019d0 */

void processEntry entry(undefined4 param_1,undefined4 param_2)

{
  undefined1 auStack_20 [16];
  undefined *local_10;
  undefined4 local_c;
  undefined1 *local_8;
  
  local_8 = auStack_20;
  local_10 = PTR__fini_00423450;
  local_c = param_1;
  (*(code *)PTR___uClibc_main_004234a8)
            (PTR_main_0042348c,param_2,&stack0x00000004,PTR__init_00423538);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* FUN_00401a30 @ 00401a30 */

void FUN_00401a30(void)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  code *pcVar6;
  
  if (PTR_DAT_00423388[0x3600] == '\0') {
    if (PTR___cxa_finalize_00423560 != (undefined *)0x0) {
      (*(code *)PTR___cxa_finalize_00423560)(*(undefined4 *)PTR_LOOP_0042338c);
    }
    puVar1 = PTR_DAT_00423388;
    puVar4 = PTR_DAT_00423388 + 0x24ec;
    iVar5 = (int)PTR___DTOR_END___00423390 - (int)puVar4;
    while( true ) {
      uVar2 = *(uint *)(puVar1 + 0x3604);
      iVar3 = uVar2 + 1;
      if ((iVar5 >> 2) - 1U <= uVar2) break;
      pcVar6 = *(code **)(puVar4 + iVar3 * 4);
      *(int *)(puVar1 + 0x3604) = iVar3;
      (*pcVar6)();
    }
    if (PTR___deregister_frame_info_00423518 != (undefined *)0x0) {
      (*(code *)PTR___deregister_frame_info_00423518)
                (PTR_s_nal_SIGTERM____0040ffd4_0x2c_00423394 + 0x24e0);
    }
    PTR_DAT_00423388[0x3600] = 1;
  }
  return;
}


/* FUN_00401b38 @ 00401b38 */

void FUN_00401b38(void)

{
  if (PTR___register_frame_info_004235a0 != (undefined *)0x0) {
    (*(code *)PTR___register_frame_info_004235a0)
              (PTR_s_nal_SIGTERM____0040ffd4_0x2c_00423394 + 0x24e0,PTR_DAT_00423388 + 0x3608);
  }
  if (*(int *)(PTR_DAT_00423388 + 0x24f4) != 0) {
    if (PTR__Jv_RegisterClasses_004233c4 != (undefined *)0x0) {
      (*(code *)PTR__Jv_RegisterClasses_004233c4)(PTR_DAT_00423388 + 0x24f4);
      return;
    }
  }
  return;
}


/* FUN_00401bdc @ 00401bdc */

void FUN_00401bdc(int param_1)

{
  undefined *puVar1;
  undefined *UNRECOVERED_JUMPTABLE;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  
  puVar1 = PTR_stderr_00423444;
  uVar3 = *(undefined4 *)PTR_stderr_00423444;
  uVar2 = (*(code *)PTR_getpid_00423594)();
  (*(code *)PTR_fprintf_0042350c)
            (uVar3,"\nFILE %s FUNCTION %s LINE %d: wfaudio My pid=%d, sig=%d\n\n","wfaudio.c",
             "signal_handler",0x83,uVar2,param_1);
  if (param_1 == 2) {
    uVar2 = *(undefined4 *)puVar1;
    uVar3 = 0x85;
    pcVar4 = "\nFILE %s FUNCTION %s LINE %d: Aborted by signal SIGINT...\n\n";
  }
  else {
    if (param_1 == 0xf) {
      (*(code *)PTR_fprintf_0042350c)
                (*(undefined4 *)puVar1,
                 "\nFILE %s FUNCTION %s LINE %d: Aborted by signal SIGTERM...\n\n","wfaudio.c",
                 "signal_handler",0x87);
      (*(code *)PTR_pthread_mutex_lock_0042340c)(PTR_ProgramExit_004233f4);
      UNRECOVERED_JUMPTABLE = PTR_pthread_mutex_unlock_00423460;
      puVar1 = PTR_ProgramExit_004233f4;
      *(undefined4 *)PTR_program_terminate_0042346c = 1;
                    /* WARNING: Could not recover jumptable at 0x00401cec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)UNRECOVERED_JUMPTABLE)(puVar1);
      return;
    }
    if (param_1 != 6) {
      return;
    }
    uVar2 = *(undefined4 *)puVar1;
    pcVar4 = "\nFILE %s FUNCTION %s LINE %d: Aborted by signal SIGABRT...\n\n";
    uVar3 = 0x89;
  }
  (*(code *)PTR_fprintf_0042350c)(uVar2,pcVar4,"wfaudio.c","signal_handler",uVar3);
  return;
}


/* FUN_00401d38 @ 00401d38 */

void FUN_00401d38(void)

{
                    /* WARNING: Could not recover jumptable at 0x00401d4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_isFileExist_004233d8)("/var/run/avahi-autoipd.br0.pid");
  return;
}


/* FUN_00401d54 @ 00401d54 */

void FUN_00401d54(void)

{
  char local_a0 [64];
  undefined1 auStack_60 [84];
  
  (*(code *)PTR_memset_00423490)(local_a0,0,0x40);
  (*(code *)PTR_memset_00423490)(auStack_60,0,0x50);
  (*(code *)PTR_apmib_get_0042354c)(0x2b1,local_a0);
  if (local_a0[0] != '\0') {
    (*(code *)PTR_sprintf_0042344c)(auStack_60,"hostname \'%s\'",local_a0);
    (*(code *)PTR_system_00423558)(auStack_60);
  }
  return;
}


/* FUN_00401e0c @ 00401e0c */

void FUN_00401e0c(void)

{
  (*(code *)PTR_system_00423558)("killall -9 udhcpd 2> /dev/null");
  (*(code *)PTR_system_00423558)("rm -f /var/run/udhcpd.pid 2> /dev/null");
                    /* WARNING: Could not recover jumptable at 0x00401e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_system_00423558)("rm -f /var/lib/misc/udhcpd-br0.leases");
  return;
}


/* FUN_00401e64 @ 00401e64 */

void FUN_00401e64(void)

{
  int iVar1;
  char *pcVar2;
  
  iVar1 = FUN_00401d38();
  if (iVar1 == 0) {
    (*(code *)PTR_printf_004235c0)
              ("[%s:%d]--------------------start avahi first time----------------------------\n",
               "start_avahi_daemon",0x37);
    pcVar2 = "avahi-autoipd -t /etc/avahi-autoipd.action --debug --no-drop-root br0";
  }
  else {
    (*(code *)PTR_printf_004235c0)
              ("[%s:%d] AVAHI process already exist!!!!!!!!!!!!!!!!!!!!!\n","start_avahi_daemon",
               0x34);
    pcVar2 = "avahi-autoipd -r br0";
  }
                    /* WARNING: Could not recover jumptable at 0x00401ee4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_system_00423558)(pcVar2);
  return;
}


/* FUN_00401eec @ 00401eec */

bool FUN_00401eec(void)

{
  undefined *puVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  char local_120 [128];
  undefined1 auStack_a0 [128];
  
  (*(code *)PTR_memset_00423490)(local_120,0,0x80);
  (*(code *)PTR_memset_00423490)(auStack_a0,0,0x80);
  bVar4 = false;
  iVar2 = (*(code *)PTR_access_00423418)("/tmp/net/wac_wifi_info_ready.txt",4);
  puVar1 = PTR_stderr_00423444;
  bVar3 = false;
  if (iVar2 == 0) {
    (*(code *)PTR_fprintf_0042350c)
              (*(undefined4 *)PTR_stderr_00423444,
               "\nFILE %s FUNCTION %s LINE %d: --- file ready : %s --- \n\n","wfaudio.c",
               "getWACWifiInfo",0x38d,"/tmp/net/wac_wifi_info_ready.txt");
    iVar2 = (*(code *)PTR_access_00423418)("/tmp/net/wac_applyName_info.txt",4);
    if (iVar2 == 0) {
      iVar2 = (*(code *)PTR_fopen_00423498)("/tmp/net/wac_applyName_info.txt",&DAT_00411fe4);
      if (iVar2 != 0) {
        (*(code *)PTR_fprintf_0042350c)
                  (*(undefined4 *)puVar1,"\nFILE %s FUNCTION %s LINE %d: --- read : %s --- \n\n",
                   "wfaudio.c","getWACWifiInfo",0x392,"/tmp/net/wac_applyName_info.txt");
        (*(code *)PTR_fread_004234ac)(local_120,0x80,1,iVar2);
        (*(code *)PTR_fprintf_0042350c)
                  (*(undefined4 *)puVar1,"\nFILE %s FUNCTION %s LINE %d: => get NAME=[%s]\n\n",
                   "wfaudio.c","getWACWifiInfo",0x394,local_120);
        bVar4 = local_120[0] != '\0';
        if (bVar4) {
          (*(code *)PTR_apmib_set_00423524)(0x2b1,local_120);
          FUN_00401d54();
        }
        (*(code *)PTR_fclose_00423480)(iVar2);
      }
      (*(code *)PTR_unlink_004234d8)("/tmp/net/wac_applyName_info.txt");
    }
    iVar2 = (*(code *)PTR_access_00423418)("/tmp/net/wac_password_info.txt",4);
    bVar3 = bVar4;
    if (iVar2 == 0) {
      iVar2 = (*(code *)PTR_fopen_00423498)("/tmp/net/wac_password_info.txt",&DAT_00411fe4);
      puVar1 = PTR_stderr_00423444;
      if (iVar2 != 0) {
        (*(code *)PTR_fprintf_0042350c)
                  (*(undefined4 *)PTR_stderr_00423444,
                   "\nFILE %s FUNCTION %s LINE %d: --- read : %s --- \n\n","wfaudio.c",
                   "getWACWifiInfo",0x3a6,"/tmp/net/wac_password_info.txt");
        (*(code *)PTR_fread_004234ac)(auStack_a0,0x80,1,iVar2);
        (*(code *)PTR_fprintf_0042350c)
                  (*(undefined4 *)puVar1,"\nFILE %s FUNCTION %s LINE %d: => get PASS=[%s]\n\n\n",
                   "wfaudio.c","getWACWifiInfo",0x3a8,auStack_a0);
        bVar4 = true;
        (*(code *)PTR_apmib_set_00423524)(0x2b2,auStack_a0);
        (*(code *)PTR_fclose_00423480)(iVar2);
      }
      (*(code *)PTR_unlink_004234d8)("/tmp/net/wac_password_info.txt");
      bVar3 = bVar4;
    }
  }
  return bVar3;
}


/* FUN_00402204 @ 00402204 */

undefined4 FUN_00402204(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 local_4a8;
  undefined4 local_4a4;
  undefined4 local_4a0;
  int local_49c;
  undefined1 auStack_498 [128];
  undefined1 auStack_418 [512];
  undefined4 auStack_218 [129];
  
  (*(code *)PTR_fprintf_0042350c)
            (*(undefined4 *)PTR_stderr_00423444,
             "\nFILE %s FUNCTION %s LINE %d: [thread_RT_WAC_Wifi_Connect]: begin\n\n","wfaudio.c",
             "thread_RT_WAC_Wifi_Connect",0x3bd);
  local_4a8 = 0;
  local_4a4 = 0;
  local_4a0 = 0;
  (*(code *)PTR_memset_00423490)(auStack_418,0,0x200);
  (*(code *)PTR_memset_00423490)(auStack_498,0,0x80);
  local_49c = 0;
  (*(code *)PTR_memset_00423490)(auStack_218,0,0x200);
  iVar4 = 0;
  do {
    iVar1 = (*(code *)PTR_access_00423418)("/tmp/net/wac_wifi_info_ready.txt",4);
    iVar4 = iVar4 + 1;
    if (iVar1 == 0) break;
    (*(code *)PTR_printf_004235c0)
              ("thread_RT_WAC_Wifi_Connect--- read : %s  fail!! try! count=%d \n",
               "/tmp/net/wac_wifi_info_ready.txt",iVar4);
    (*(code *)PTR_sleep_00423550)(1);
  } while (iVar4 != 3);
  FUN_00401eec();
  iVar4 = (*(code *)PTR_access_00423418)("/tmp/net/wac_wifi_pass_len_info.txt",4);
  if (iVar4 == 0) {
    iVar4 = (*(code *)PTR_fopen_00423498)("/tmp/net/wac_wifi_pass_len_info.txt",&DAT_00411fe4);
    (*(code *)PTR_fprintf_0042350c)
              (*(undefined4 *)PTR_stderr_00423444,
               "\nFILE %s FUNCTION %s LINE %d: thread_RT_WAC_Wifi_Connect--- read : %s --- \n\n",
               "wfaudio.c","thread_RT_WAC_Wifi_Connect",0x3de,"/tmp/net/wac_wifi_pass_len_info.txt")
    ;
    if (iVar4 != 0) {
      iVar1 = (*(code *)PTR_fgets_00423588)(auStack_418,0x200,iVar4);
      if (iVar1 != 0) {
        (*(code *)PTR_sscanf_004234b4)(auStack_418,&DAT_004117f4,&local_49c);
        (*(code *)PTR_printf_004235c0)("=> get WifiPSKLen=[%d]\n\n",local_49c);
      }
      (*(code *)PTR_fclose_00423480)(iVar4);
    }
    (*(code *)PTR_unlink_004234d8)("/tmp/net/wac_wifi_pass_len_info.txt");
  }
  iVar4 = (*(code *)PTR_access_00423418)("/tmp/net/wac_wifi_ssid_info.txt",4);
  if (iVar4 == 0) {
    iVar4 = (*(code *)PTR_fopen_00423498)("/tmp/net/wac_wifi_ssid_info.txt",&DAT_00411fe4);
    if (iVar4 != 0) {
      (*(code *)PTR_fread_004234ac)(auStack_498,0x80,1,iVar4);
      (*(code *)PTR_printf_004235c0)("=> get SSID=[%s]\n\n",auStack_498);
      (*(code *)PTR_fclose_00423480)(iVar4);
    }
    (*(code *)PTR_unlink_004234d8)("/tmp/net/wac_wifi_ssid_info.txt");
  }
  if (0 < local_49c) {
    iVar4 = (*(code *)PTR_access_00423418)("/tmp/net/wac_wifi_pass_info.txt",4);
    if (iVar4 == 0) {
      iVar4 = (*(code *)PTR_fopen_00423498)("/tmp/net/wac_wifi_pass_info.txt",&DAT_00411fe4);
      (*(code *)PTR_fprintf_0042350c)
                (*(undefined4 *)PTR_stderr_00423444,
                 "\nFILE %s FUNCTION %s LINE %d: thread_RT_WAC_Wifi_Connect--- read : %s --- \n\n",
                 "wfaudio.c","thread_RT_WAC_Wifi_Connect",0x3f6,"/tmp/net/wac_wifi_pass_info.txt");
      if (iVar4 != 0) {
        (*(code *)PTR_fread_004234ac)(auStack_218,0x80,1,iVar4);
        (*(code *)PTR_printf_004235c0)("=> get WIFI-PASS=[%s]\n\n",auStack_218);
        (*(code *)PTR_fclose_00423480)(iVar4);
      }
      (*(code *)PTR_unlink_004234d8)("/tmp/net/wac_wifi_pass_info.txt");
    }
  }
  (*(code *)PTR_unlink_004234d8)("/tmp/net/wac_wifi_info_ready.txt");
  local_4a8 = 0;
  (*(code *)PTR_apmib_set_00423524)(0xad,&local_4a8);
  iVar4 = (*(code *)PTR_SetWlan_idx_00423580)("wlan0-vxd");
  if (iVar4 != 0) {
    local_4a4 = 1;
    (*(code *)PTR_apmib_set_00423524)(0x3b,&local_4a4);
    (*(code *)PTR_apmib_set_00423524)(1,auStack_498);
    puVar3 = &local_4a0;
    (*(code *)PTR_apmib_set_00423524)(0xfb,auStack_498);
    if (local_49c == 0) {
      local_4a0 = 0;
      uVar2 = 0x19;
    }
    else {
      local_4a0 = 6;
      (*(code *)PTR_apmib_set_00423524)(0x19,puVar3);
      local_4a0 = 3;
      (*(code *)PTR_apmib_set_00423524)(0x1d,puVar3);
      (*(code *)PTR_apmib_set_00423524)(0x26,puVar3);
      local_4a0 = 2;
      (*(code *)PTR_apmib_set_00423524)(0x1c,puVar3);
      uVar2 = 0x1e;
      puVar3 = auStack_218;
    }
    (*(code *)PTR_apmib_set_00423524)(uVar2,puVar3);
    local_4a0 = 0;
    (*(code *)PTR_apmib_set_00423524)(0x16,&local_4a0);
  }
  local_4a0 = 1;
  (*(code *)PTR_apmib_set_00423524)(0xfa,&local_4a0);
  (*(code *)PTR_setinit_004235cc)();
  return 1;
}


/* getWACServerState @ 00402784 */

undefined4 getWACServerState(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 local_98;
  undefined1 auStack_94 [136];
  
  local_98 = 0xffffffff;
  (*(code *)PTR_memset_00423490)(auStack_94,0,0x80);
  (*(code *)PTR_pthread_mutex_lock_0042340c)(PTR_WACGlobal_Lock_00423520);
  iVar1 = m_WACServerStart;
  (*(code *)PTR_pthread_mutex_unlock_00423460)(PTR_WACGlobal_Lock_00423520);
  if (iVar1 != 0) {
    iVar1 = (*(code *)PTR_access_00423418)("/tmp/net/wac_state.txt",4);
    if (iVar1 == 0) {
      iVar1 = (*(code *)PTR_fopen_00423498)("/tmp/net/wac_state.txt",&DAT_00411fe4);
      if (iVar1 != 0) {
        uVar2 = (*(code *)PTR_fileno_004233f0)(iVar1);
        iVar3 = (*(code *)PTR_flock_004234f0)(uVar2,2);
        if (iVar3 == 0) {
          iVar3 = (*(code *)PTR_fgets_00423588)(auStack_94,0x80,iVar1);
          if (iVar3 != 0) {
            (*(code *)PTR_sscanf_004234b4)(auStack_94,&DAT_004117f4,&local_98);
          }
          uVar2 = (*(code *)PTR_fileno_004233f0)(iVar1);
          (*(code *)PTR_flock_004234f0)(uVar2,8);
        }
        (*(code *)PTR_fclose_00423480)(iVar1);
      }
    }
  }
  return local_98;
}


/* FUN_004028fc @ 004028fc */

void FUN_004028fc(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined2 uVar4;
  
  (*(code *)PTR_pthread_mutex_lock_0042340c)(PTR_WACGlobal_Lock_00423520);
  iVar2 = m_WACServerStart;
  iVar1 = m_WACMonitorThreadRunning;
  (*(code *)PTR_pthread_mutex_unlock_00423460)(PTR_WACGlobal_Lock_00423520);
  iVar3 = getWACServerState();
  if ((iVar3 == 3) && (iVar1 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00402980. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR_puts_00423564)
              (
              "AirPlayFlowControl::stopWACServer() : state=WAC_SERVER_STATE_CONFIG_RECEVIED, m_WACMonitorThreadRunning=true, so do not stop!!"
              );
    return;
  }
  (*(code *)PTR_pthread_mutex_lock_0042340c)(PTR_WACGlobal_Lock_00423520);
  if (Apple_vendor_IE != '\0') {
    uVar4 = (*(code *)PTR_strlen_004233e8)(&Apple_vendor_IE);
    (*(code *)PTR_DeleteWlanIE_004235ac)("wlan0",&Apple_vendor_IE,uVar4);
    (*(code *)PTR_memset_00423490)(&Apple_vendor_IE,0,0x100);
  }
  (*(code *)PTR_pthread_mutex_unlock_00423460)(PTR_WACGlobal_Lock_00423520);
  if (iVar2 != 0) {
    (*(code *)PTR_system_00423558)("killall WACServer 2> /dev/null");
  }
  (*(code *)PTR_pthread_mutex_lock_0042340c)(PTR_WACGlobal_Lock_00423520);
  m_WACMonitorThreadRunning = 0;
  m_WACServerStart = 0;
  m_WACServerCounter = 0;
  m_WACWifiInfoReady = 0;
  (*(code *)PTR_pthread_mutex_unlock_00423460)(PTR_WACGlobal_Lock_00423520);
  (*(code *)PTR_unlink_004234d8)("/tmp/net/wac_state.txt");
  (*(code *)PTR_unlink_004234d8)("/tmp/net/wac_wifi_info_ready.txt");
  (*(code *)PTR_unlink_004234d8)("/tmp/net/wac_wifi_ssid_info.txt");
  (*(code *)PTR_unlink_004234d8)("/tmp/net/wac_wifi_pass_len_info.txt");
  (*(code *)PTR_unlink_004234d8)("/tmp/net/wac_wifi_pass_info.txt");
  (*(code *)PTR_unlink_004234d8)("/tmp/net/wac_applyName_info.txt");
  (*(code *)PTR_unlink_004234d8)("/tmp/net/wac_password_info.txt");
  (*(code *)PTR_unlink_004234d8)("/tmp/net/wac_notify_stop_swap.txt");
                    /* WARNING: Could not recover jumptable at 0x00402b48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_unlink_004234d8)("/usr/local/etc/dvdplayer/wac_wifi_info.txt");
  return;
}


/* FUN_00402b50 @ 00402b50 */

undefined4 FUN_00402b50(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 **ppuVar3;
  int iVar4;
  undefined4 local_578;
  undefined2 local_574;
  undefined4 local_570;
  undefined4 local_56c;
  undefined4 local_568;
  undefined1 auStack_564 [2];
  undefined1 local_562;
  undefined1 local_561;
  undefined1 local_560;
  undefined1 local_55f;
  undefined1 local_55e;
  undefined1 local_55d;
  undefined1 *local_554 [4];
  undefined1 *apuStack_544 [16];
  uint local_504;
  undefined2 local_500;
  char local_4a0 [128];
  undefined1 local_420 [256];
  undefined1 auStack_320 [256];
  undefined1 auStack_220 [256];
  undefined1 auStack_120 [256];
  char *local_20;
  
  (*(code *)PTR_memset_00423490)(&local_504,0,100);
  (*(code *)PTR_memset_00423490)(local_420,0,0x100);
  (*(code *)PTR_memset_00423490)(auStack_320,0,0x100);
  (*(code *)PTR_memset_00423490)(auStack_220,0,0x100);
  (*(code *)PTR_memset_00423490)(auStack_120,0,0x100);
  local_570 = 0;
  local_56c = 0;
  local_568 = 0;
  local_554[0] = local_420;
  local_554[1] = auStack_320;
  local_554[2] = auStack_220;
  local_554[3] = auStack_120;
  (*(code *)PTR_apmib_get_0042354c)(0x17,&local_504);
  iVar1 = (*(code *)PTR_memcmp_004234c4)(&local_504,&DAT_00410ee0,6);
  if (iVar1 == 0) {
    (*(code *)PTR_getInAddr_00423574)("wlan0",3,auStack_564);
    local_578 = CONCAT31(CONCAT21(CONCAT11(local_562,local_561),local_560),local_55f);
    local_574 = CONCAT11(local_55e,local_55d);
  }
  else {
    local_574 = local_500;
    local_578 = local_504;
  }
  iVar1 = (*(code *)PTR_fopen_00423498)("/tmp/net/wac_device_info.txt",&DAT_004105d8);
  uVar2 = 0;
  if (iVar1 != 0) {
    (*(code *)PTR_fprintf_0042350c)
              (iVar1,"mac %02X:%02X:%02X:%02X:%02X:%02X\n",local_578._0_1_,local_578._1_1_,
               local_578 >> 8 & 0xff,local_578 & 0xff,local_574._0_1_,(undefined1)local_574);
    ppuVar3 = (undefined1 **)local_4a0;
    (*(code *)PTR_memset_00423490)(ppuVar3,0,0x80);
    (*(code *)PTR_apmib_get_0042354c)(0x2b1,ppuVar3);
    if (local_4a0[0] == '\0') {
      local_20 = (char *)apuStack_544;
      (*(code *)PTR_get_wac_name_00423590)(local_20);
      ppuVar3 = (undefined1 **)local_20;
    }
    (*(code *)PTR_fprintf_0042350c)(iVar1,"name %s\n",ppuVar3);
    ppuVar3 = local_554;
    (*(code *)PTR_fputs_004233d4)("model Device1,1\n",iVar1);
    (*(code *)PTR_fputs_004233d4)("manufacturer Apple\n",iVar1);
    (*(code *)PTR_fputs_004233d4)("firmwareRevision FW.1.1.1.1.1\n",iVar1);
    (*(code *)PTR_fputs_004233d4)("hardwareRevision HW.2.2.2.2.2\n",iVar1);
    iVar4 = 0;
    (*(code *)PTR_fputs_004233d4)("serialNumber SER.1.1.1.1.1\n",iVar1);
    (*(code *)PTR_fprintf_0042350c)(iVar1,"isUnconfigured %d\n",NetWACFlag == 0);
    (*(code *)PTR_fputs_004233d4)("supportsAirPlay 0\n",iVar1);
    (*(code *)PTR_fputs_004233d4)("supportsAirPrint 0\n",iVar1);
    (*(code *)PTR_fputs_004233d4)("supports2_4GHzWiFi 1\n",iVar1);
    (*(code *)PTR_fprintf_0042350c)(iVar1,"supports5GHzWiFi %d\n",0);
    (*(code *)PTR_fputs_004233d4)("supportsWakeOnWireless 0\n",iVar1);
    (*(code *)PTR_fputs_004233d4)("supportsHKAccessoryProtocol 1\n",iVar1);
    (*(code *)PTR_get_eaProtocol_name_00423584)(ppuVar3);
    do {
      if (**ppuVar3 != '\0') {
        (*(code *)PTR_fputs_004233d4)("eaProtocols ",iVar1);
        iVar4 = iVar4 + 1;
        (*(code *)PTR_fprintf_0042350c)(iVar1,*ppuVar3);
        (*(code *)PTR_fputc_00423438)(10,iVar1);
      }
      ppuVar3 = ppuVar3 + 1;
    } while (ppuVar3 != apuStack_544);
    (*(code *)PTR_sprintf_0042344c)(local_4a0,&DAT_004117f4,iVar4);
    (*(code *)PTR_fputs_004233d4)("numEAProtocols ",iVar1);
    (*(code *)PTR_fprintf_0042350c)(iVar1,local_4a0);
    (*(code *)PTR_fputc_00423438)(10,iVar1);
    (*(code *)PTR_get_ea_bundle_seed_id_00423448)(&local_570);
    (*(code *)PTR_fputs_004233d4)("eaBundleSeedID ",iVar1);
    (*(code *)PTR_fprintf_0042350c)(iVar1,&local_570);
    (*(code *)PTR_fputc_00423438)(10,iVar1);
    (*(code *)PTR_fclose_00423480)(iVar1);
    uVar2 = 1;
  }
  return uVar2;
}


/* FUN_004030a4 @ 004030a4 */

/* WARNING: Removing unreachable block (ram,0x00403120) */

void FUN_004030a4(int param_1)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  char *pcVar4;
  int iVar5;
  int local_20;
  int local_1c;
  
  (*(code *)PTR_gettimeofday_004234a0)(&local_20,0);
  iVar5 = 0;
  (*(code *)PTR_srand_00423484)(local_1c + local_20);
  do {
    iVar1 = (*(code *)PTR_rand_004234f4)();
    uVar2 = iVar1 % 0x100 & 0xff;
    cVar3 = (char)(iVar1 % 0x100);
    if ((uVar2 < 0x21) ||
       ((0x7e < uVar2 && (cVar3 = (char)(uVar2 - 0x7e), (uVar2 - 0x7e & 0xff) < 0x21)))) {
      cVar3 = cVar3 + '!';
    }
    pcVar4 = (char *)(param_1 + iVar5);
    iVar5 = iVar5 + 1;
    *pcVar4 = cVar3;
  } while (iVar5 != 0x20);
  *(undefined1 *)(param_1 + 0x20) = 0;
  return;
}


/* Reset_to_AP @ 0040318c */

void Reset_to_AP(void)

{
  int iVar1;
  undefined1 *puVar2;
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined1 auStack_134 [2];
  undefined1 auStack_132 [4];
  undefined1 local_12e [10];
  undefined1 auStack_124 [64];
  undefined1 auStack_e4 [64];
  undefined1 auStack_a4 [64];
  undefined1 auStack_64 [68];
  undefined1 *local_20;
  
  local_140 = 2;
  local_13c = 0;
  local_138 = 0;
  (*(code *)PTR_apmib_set_00423524)(0xad,&local_140);
  puVar2 = (undefined1 *)0x0;
  iVar1 = (*(code *)PTR_SetWlan_idx_00423580)("wlan0");
  if (iVar1 != 0) {
    local_13c = 0;
    (*(code *)PTR_apmib_set_00423524)(0x3b,&local_13c);
    iVar1 = (*(code *)PTR_getInAddr_00423574)(&DAT_00410768,3,auStack_134);
    if (iVar1 == 0) {
      puVar2 = (undefined1 *)0x0;
      (*(code *)PTR_strcpy_004235e0)(auStack_124,"WAC_Config");
    }
    else {
      local_20 = auStack_a4;
      (*(code *)PTR_get_ssid_name_004235b4)(local_20);
      puVar2 = auStack_132;
      (*(code *)PTR_sprintf_0042344c)(auStack_124,"%s%02X%02X",local_20,local_12e[0],local_12e[1]);
    }
    (*(code *)PTR_apmib_set_00423524)(1,auStack_124);
    local_138 = 0;
    (*(code *)PTR_apmib_set_00423524)(0x14,&local_138);
    local_138 = 0;
    (*(code *)PTR_apmib_set_00423524)(0x19,&local_138);
  }
  FUN_004030a4(auStack_e4);
  iVar1 = (*(code *)PTR_SetWlan_idx_00423580)("wlan0-vxd");
  if (iVar1 != 0) {
    local_138 = 1;
    (*(code *)PTR_apmib_set_00423524)(0x16,&local_138);
    local_13c = 1;
    (*(code *)PTR_apmib_set_00423524)(0x3b,&local_13c);
    (*(code *)PTR_apmib_set_00423524)(1,auStack_e4);
    local_138 = 0;
    (*(code *)PTR_apmib_set_00423524)(0x19,&local_138);
  }
  local_138 = 0;
  (*(code *)PTR_apmib_set_00423524)(0xfa,&local_138);
  (*(code *)PTR_apmib_set_00423524)(0xfb,auStack_e4);
  local_20 = auStack_a4;
  (*(code *)PTR_get_wac_name_00423590)(local_20);
  if (puVar2 == (undefined1 *)0x0) {
    (*(code *)PTR_strcpy_004235e0)(auStack_124,local_20);
  }
  else {
    (*(code *)PTR_sprintf_0042344c)(auStack_124,"%s%02X%02X",local_20,puVar2[4],puVar2[5]);
  }
  (*(code *)PTR_apmib_set_00423524)(0x2b1,auStack_124);
  (*(code *)PTR_apmib_set_00423524)(0x2b2,"");
  (*(code *)PTR_apmib_update_0042352c)(4);
  (*(code *)PTR_system_00423558)("iwpriv wlan0 set_mib func_off=0");
  FUN_00401d54();
  FUN_00401e0c();
  DAT_004237e4 = 0;
  DAT_004237e8 = 0;
  (*(code *)PTR_sprintf_0042344c)(auStack_64,"rm -rf %s","/var/run/WAC_JOIN_DONE");
  (*(code *)PTR_system_00423558)(auStack_64);
  return;
}


/* FUN_004034f4 @ 004034f4 */

void FUN_004034f4(void)

{
  bool bVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined2 uVar6;
  
  (*(code *)PTR_pthread_mutex_lock_0042340c)(PTR_WACWifiConnectingState_Lock_004235a8);
  iVar5 = NetWACFlag;
  (*(code *)PTR_pthread_mutex_unlock_00423460)(PTR_WACWifiConnectingState_Lock_004235a8);
  (*(code *)PTR_pthread_mutex_lock_0042340c)(PTR_WACGlobal_Lock_00423520);
  iVar4 = m_WACServerStart;
  iVar3 = m_WACMonitorThreadRunning;
  bVar1 = 0x708 < m_WACServerCounter;
  (*(code *)PTR_pthread_mutex_unlock_00423460)(PTR_WACGlobal_Lock_00423520);
  puVar2 = PTR_stderr_00423444;
  if (bVar1) {
    (*(code *)PTR_fprintf_0042350c)
              (*(undefined4 *)PTR_stderr_00423444,
               "\nFILE %s FUNCTION %s LINE %d: : WAC Server timeout! should not start WACServer, just start SoftAP is oK! \n\n"
               ,"wfaudio.c","startWACServer",0x305);
    Reset_to_AP();
    (*(code *)PTR_pthread_mutex_lock_0042340c)(PTR_WACGlobal_Lock_00423520);
    if (Apple_vendor_IE != '\0') {
      (*(code *)PTR_fprintf_0042350c)
                (*(undefined4 *)puVar2,"\nFILE %s FUNCTION %s LINE %d: DeleteWlanIE\n\n","wfaudio.c"
                 ,"startWACServer",0x30b);
      uVar6 = (*(code *)PTR_strlen_004233e8)(&Apple_vendor_IE);
      (*(code *)PTR_DeleteWlanIE_004235ac)("wlan0",&Apple_vendor_IE,uVar6);
      (*(code *)PTR_memset_00423490)(&Apple_vendor_IE,0,0x100);
    }
    (*(code *)PTR_pthread_mutex_unlock_00423460)(PTR_WACGlobal_Lock_00423520);
                    /* WARNING: Could not recover jumptable at 0x00403698. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR_setinit_004235cc)();
    return;
  }
  if (iVar5 == 1) {
    (*(code *)PTR_pthread_mutex_lock_0042340c)(PTR_WACWifiConnectingState_Lock_004235a8);
    (*(code *)PTR_strcpy_004235e0)(&dst_connect_ap_info,"wlan0");
    (*(code *)PTR_pthread_mutex_unlock_00423460)(PTR_WACWifiConnectingState_Lock_004235a8);
    (*(code *)PTR_pthread_mutex_lock_0042340c)(PTR_WACWifiConnecting_Lock_004235dc);
    m_WACWifiConnecting = iVar5;
                    /* WARNING: Could not recover jumptable at 0x0040372c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR_pthread_mutex_unlock_00423460)(PTR_WACWifiConnecting_Lock_004235dc);
    return;
  }
  if (iVar4 != 0) {
    FUN_004028fc();
  }
  (*(code *)PTR_unlink_004234d8)("/tmp/net/apple_ie.txt");
  (*(code *)PTR_unlink_004234d8)("/tmp/net/wac_state.txt");
  FUN_00402b50();
  (*(code *)PTR_system_00423558)("WACServer &");
  (*(code *)PTR_pthread_mutex_lock_0042340c)(PTR_WACGlobal_Lock_00423520);
  m_WACServerCounter = 0;
  (*(code *)PTR_pthread_mutex_unlock_00423460)(PTR_WACGlobal_Lock_00423520);
  if (iVar3 == 0) {
    (*(code *)PTR_pthread_mutex_lock_0042340c)(PTR_WACGlobal_Lock_00423520);
    m_WACServerStart = 1;
    m_WACMonitorThreadRunning = 1;
    (*(code *)PTR_pthread_mutex_unlock_00423460)(PTR_WACGlobal_Lock_00423520);
    (*(code *)PTR_pthread_create_004235b8)
              (PTR_m_thread_RT_WACServer_monitor_004234c0,0,FUN_00403b80,0);
    (*(code *)PTR_pthread_detach_0042353c)
              (*(undefined4 *)PTR_m_thread_RT_WACServer_monitor_004234c0);
                    /* WARNING: Could not recover jumptable at 0x00403860. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR_ChangeLEDConfiguring_00423570)(1);
    return;
  }
  return;
}


/* FUN_00403884 @ 00403884 */

void FUN_00403884(void)

{
  int iVar1;
  undefined2 uVar2;
  undefined4 local_10 [2];
  
  local_10[0] = 0;
  iVar1 = (*(code *)PTR_SetWlan_idx_00423580)("wlan0");
  if (iVar1 != 0) {
    local_10[0] = 0;
    (*(code *)PTR_apmib_set_00423524)(0x2b0,local_10);
  }
  Reset_to_AP();
  (*(code *)PTR_pthread_mutex_lock_0042340c)(PTR_WACGlobal_Lock_00423520);
  if (Apple_vendor_IE != '\0') {
    (*(code *)PTR_fprintf_0042350c)
              (*(undefined4 *)PTR_stderr_00423444,"\nFILE %s FUNCTION %s LINE %d: DeleteWlanIE\n\n",
               "wfaudio.c","RestoreToUnConfigured",0x2ca);
    uVar2 = (*(code *)PTR_strlen_004233e8)(&Apple_vendor_IE);
    (*(code *)PTR_DeleteWlanIE_004235ac)("wlan0",&Apple_vendor_IE,uVar2);
    (*(code *)PTR_memset_00423490)(&Apple_vendor_IE,0,0x100);
  }
  m_WACMonitorThreadRunning = 0;
  m_WACServerStart = 0;
  m_WACServerCounter = 0;
  m_WACWifiInfoReady = 0;
  (*(code *)PTR_pthread_mutex_unlock_00423460)(PTR_WACGlobal_Lock_00423520);
  (*(code *)PTR_pthread_mutex_lock_0042340c)(PTR_WACWifiConnecting_Lock_004235dc);
  m_WACWifiConnecting = 0;
  (*(code *)PTR_pthread_mutex_unlock_00423460)(PTR_WACWifiConnecting_Lock_004235dc);
  (*(code *)PTR_pthread_mutex_lock_0042340c)(PTR_WACWifiConnectingState_Lock_004235a8);
  NetWACFlag = 0;
  (*(code *)PTR_strcpy_004235e0)(&dst_connect_ap_info,"wlan0-vxd");
  (*(code *)PTR_pthread_mutex_unlock_00423460)(PTR_WACWifiConnectingState_Lock_004235a8);
  (*(code *)PTR_system_00423558)("rm -f /tmp/net/airplay_name 2> /dev/null");
  (*(code *)PTR_system_00423558)("rm -f /tmp/net/airplay_password 2> /dev/null");
  (*(code *)PTR_system_00423558)("killall WACServer 2> /dev/null");
  (*(code *)PTR_unlink_004234d8)("/tmp/net/wac_state.txt");
  (*(code *)PTR_unlink_004234d8)("/tmp/net/wac_wifi_info_ready.txt");
  (*(code *)PTR_unlink_004234d8)("/tmp/net/wac_wifi_ssid_info.txt");
  (*(code *)PTR_unlink_004234d8)("/tmp/net/wac_wifi_pass_len_info.txt");
  (*(code *)PTR_unlink_004234d8)("/tmp/net/wac_wifi_pass_info.txt");
  (*(code *)PTR_unlink_004234d8)("/tmp/net/wac_applyName_info.txt");
  (*(code *)PTR_unlink_004234d8)("/tmp/net/wac_password_info.txt");
  (*(code *)PTR_unlink_004234d8)("/tmp/net/wac_notify_stop_swap.txt");
  (*(code *)PTR_unlink_004234d8)("/usr/local/etc/dvdplayer/wac_wifi_info.txt");
  (*(code *)PTR_setinit_004235cc)();
  FUN_004034f4();
  return;
}


/* FUN_00403b80 @ 00403b80 */

/* WARNING: Restarted to delay deadcode elimination for space: ram */

void FUN_00403b80(void)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined2 uVar6;
  char *pcVar7;
  undefined *puVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  code *pcVar12;
  int iVar13;
  undefined1 auStack_228 [512];
  
  (*(code *)PTR_memset_00423490)(auStack_228,0,0x200);
  bVar1 = false;
  iVar10 = 0;
  do {
    (*(code *)PTR_pthread_mutex_lock_0042340c)(PTR_ProgramExit_004233f4);
    iVar9 = *(int *)PTR_program_terminate_0042346c;
    (*(code *)PTR_pthread_mutex_unlock_00423460)(PTR_ProgramExit_004233f4);
    (*(code *)PTR_pthread_mutex_lock_0042340c)(PTR_WACWifiConnectingState_Lock_004235a8);
    iVar3 = NetWACFlag;
    (*(code *)PTR_pthread_mutex_unlock_00423460)(PTR_WACWifiConnectingState_Lock_004235a8);
    (*(code *)PTR_pthread_mutex_lock_0042340c)(PTR_WACGlobal_Lock_00423520);
    iVar13 = m_WACWifiInfoReady;
    iVar11 = m_WACServerCounter;
    iVar2 = m_WACMonitorThreadRunning;
    (*(code *)PTR_pthread_mutex_unlock_00423460)(PTR_WACGlobal_Lock_00423520);
    if (iVar9 == 1) {
      (*(code *)PTR_printf_004235c0)("--thread_RT_WACServer_monitor : program_status == 1 stop");
LAB_00403d60:
      bVar1 = false;
LAB_004041c4:
      (*(code *)PTR_pthread_mutex_lock_0042340c)(PTR_WACGlobal_Lock_00423520);
      iVar10 = m_WACServerStart;
      m_WACMonitorThreadRunning = 0;
      (*(code *)PTR_pthread_mutex_unlock_00423460)(PTR_WACGlobal_Lock_00423520);
      (*(code *)PTR_pthread_mutex_lock_0042340c)(PTR_WACWifiConnectingState_Lock_004235a8);
      iVar2 = NetWACFlag;
      (*(code *)PTR_pthread_mutex_unlock_00423460)(PTR_WACWifiConnectingState_Lock_004235a8);
      if (iVar10 != 0) {
        FUN_004028fc();
      }
      (*(code *)PTR_unlink_004234d8)("/tmp/net/apple_ie.txt");
      if ((!bVar1) && (iVar2 == 0)) {
        (*(code *)PTR_puts_00423564)
                  ("--thread_RT_WACServer_monitor : end of thread, restart SoftAP !\n");
        Reset_to_AP();
        if (Apple_vendor_IE != '\0') {
          uVar6 = (*(code *)PTR_strlen_004233e8)(&Apple_vendor_IE);
          (*(code *)PTR_DeleteWlanIE_004235ac)("wlan0",&Apple_vendor_IE,uVar6);
          (*(code *)PTR_memset_00423490)(&Apple_vendor_IE,0,0x100);
        }
        (*(code *)PTR_ChangeLEDConfiguring_00423570)(0);
        (*(code *)PTR_setinit_004235cc)();
      }
      return;
    }
    iVar9 = (*(code *)PTR_isFileExist_004233d8)("/var/system/start_init");
    if (iVar9 == 0) {
      if (iVar3 == 1) {
        bVar1 = false;
        goto LAB_004041c4;
      }
      if (iVar2 == 0) {
        (*(code *)PTR_printf_004235c0)
                  ("--thread_RT_WACServer_monitor : get stop thread running. 0 ");
        bVar1 = true;
        goto LAB_004041c4;
      }
      iVar2 = getWACServerState();
      if (iVar2 < 3) {
        iVar11 = iVar11 + 1;
      }
      else {
        iVar10 = iVar10 + 1;
      }
      if (0x708 < iVar11) {
        (*(code *)PTR_printf_004235c0)
                  ("--thread_RT_WACServer_monitor : WAC Server timeout(%d) or in received state timeout (%d) stop! \n"
                   ,m_WACServerCounter,iVar10);
        goto LAB_00403d60;
      }
      iVar3 = (*(code *)PTR_access_00423418)("/tmp/net/apple_ie.txt",4);
      if (iVar3 == 0) {
        pcVar4 = (char *)(*(code *)PTR_fopen_00423498)("/tmp/net/apple_ie.txt",&DAT_00411fe4);
        if (pcVar4 == (char *)0x0) {
          pcVar4 = "--thread_RT_WACServer_monitor : can not open file!!";
          pcVar12 = (code *)PTR_puts_00423564;
        }
        else {
          uVar5 = (*(code *)PTR_fileno_004233f0)(pcVar4);
          iVar3 = (*(code *)PTR_flock_004234f0)(uVar5,2);
          pcVar12 = (code *)PTR_fclose_00423480;
          if (iVar3 == 0) {
            iVar3 = (*(code *)PTR_fgets_00423588)(auStack_228,0x200,pcVar4);
            if (iVar3 == 0) {
              pcVar7 = "--thread_RT_WACServer_monitor : read IE for wifi driver is NULL.";
              pcVar12 = (code *)PTR_puts_00423564;
            }
            else {
              (*(code *)PTR_printf_004235c0)
                        ("--thread_RT_WACServer_monitor : set IE=[%s] to wifi driver and start softAP here! \n"
                         ,auStack_228);
              uVar6 = (*(code *)PTR_strlen_004233e8)(auStack_228);
              (*(code *)PTR_InsertWlanIE_004234fc)("wlan0",auStack_228,uVar6);
              (*(code *)PTR_pthread_mutex_lock_0042340c)(PTR_WACGlobal_Lock_00423520);
              (*(code *)PTR_strcpy_004235e0)(&Apple_vendor_IE,auStack_228);
              pcVar7 = PTR_WACGlobal_Lock_00423520;
              pcVar12 = (code *)PTR_pthread_mutex_unlock_00423460;
            }
            (*pcVar12)(pcVar7);
            uVar5 = (*(code *)PTR_fileno_004233f0)(pcVar4);
            (*(code *)PTR_flock_004234f0)(uVar5,8);
            pcVar12 = (code *)PTR_fclose_00423480;
          }
        }
        (*pcVar12)(pcVar4);
        (*(code *)PTR_unlink_004234d8)("/tmp/net/apple_ie.txt");
      }
      pcVar12 = (code *)PTR_puts_00423564;
      if (iVar2 == 4) {
        pcVar4 = 
        "-thread_RT_WACServer_monitor- WAC_SERVER_STATE_CONFIG_COMPLETE -- : set configured!!";
LAB_00404150:
        (*pcVar12)(pcVar4);
      }
      else if (iVar2 < 5) {
        if (iVar2 == 3) {
          if ((iVar13 == 0) && (iVar3 = FUN_00401eec(), iVar3 != 0)) {
            iVar13 = 1;
            (*(code *)PTR_pthread_mutex_lock_0042340c)(PTR_WACGlobal_Lock_00423520);
            m_WACWifiInfoReady = 1;
            (*(code *)PTR_pthread_mutex_unlock_00423460)(PTR_WACGlobal_Lock_00423520);
          }
          (*(code *)PTR_pthread_mutex_lock_0042340c)(PTR_WACWifiConnecting_Lock_004235dc);
          iVar9 = DAT_004237d8;
          iVar3 = m_WACWifiConnecting;
          (*(code *)PTR_pthread_mutex_unlock_00423460)(PTR_WACWifiConnecting_Lock_004235dc);
          if (bVar1) {
            if (iVar3 == 0) {
              if (iVar9 != 0) goto LAB_00404164;
              (*(code *)PTR_puts_00423564)
                        (
                        "-thread_RT_WACServer_monitor-  wifi connect fail! restart WAC Serve and oounter!! "
                        );
              bVar1 = false;
              iVar10 = 0;
              iVar2 = -1;
              (*(code *)PTR_pthread_mutex_lock_0042340c)(PTR_WACGlobal_Lock_00423520);
              m_WACWifiInfoReady = 0;
              m_WACServerCounter = 0;
              (*(code *)PTR_pthread_mutex_unlock_00423460)(PTR_WACGlobal_Lock_00423520);
            }
          }
          else if ((iVar13 != 0) &&
                  (iVar13 = (*(code *)PTR_access_00423418)("/tmp/net/wac_notify_stop_swap.txt",4),
                  iVar13 == 0)) {
            (*(code *)PTR_unlink_004234d8)("/tmp/net/wac_notify_stop_swap.txt");
            (*(code *)PTR_puts_00423564)
                      ("-thread_RT_WACServer_monitor- send event to connect wifi !-- ");
            (*(code *)PTR_pthread_mutex_lock_0042340c)(PTR_WACWifiConnecting_Lock_004235dc);
            m_WACWifiConnecting = 1;
            (*(code *)PTR_pthread_mutex_unlock_00423460)(PTR_WACWifiConnecting_Lock_004235dc);
            if (Apple_vendor_IE != '\0') {
              uVar6 = (*(code *)PTR_strlen_004233e8)(&Apple_vendor_IE);
              (*(code *)PTR_DeleteWlanIE_004235ac)("wlan0",&Apple_vendor_IE,uVar6);
              (*(code *)PTR_memset_00423490)(&Apple_vendor_IE,0,0x100);
            }
            pcVar4 = "iwpriv wlan0 set_mib func_off=1";
            bVar1 = true;
            pcVar12 = (code *)PTR_system_00423558;
            goto LAB_00404150;
          }
        }
      }
      else if (iVar2 == 5) {
LAB_00404164:
        bVar1 = false;
      }
      else if (iVar2 == 6) {
        pcVar4 = "-thread_RT_WACServer_monitor- WAC_SERVER_STATE_ERROR -- ";
        goto LAB_00404150;
      }
      (*(code *)PTR_sleep_00423550)(1);
      (*(code *)PTR_pthread_mutex_lock_0042340c)(PTR_WACGlobal_Lock_00423520);
      puVar8 = PTR_WACGlobal_Lock_00423520;
      pcVar12 = (code *)PTR_pthread_mutex_unlock_00423460;
      m_WACServerCounter = iVar11;
      DAT_004236d0 = iVar2;
    }
    else {
      puVar8 = (undefined *)0x1;
      pcVar12 = (code *)PTR_sleep_00423550;
    }
    (*pcVar12)(puVar8);
  } while( true );
}


/* FUN_0040433c @ 0040433c */

void FUN_0040433c(void)

{
  (*(code *)PTR_signal_004234e8)(2,FUN_00401bdc);
                    /* WARNING: Could not recover jumptable at 0x00404380. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_signal_004234e8)(0xf,FUN_00401bdc);
  return;
}


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


/* StartThreadForWFAudioNetlink @ 00405820 */

bool StartThreadForWFAudioNetlink(void)

{
  int iVar1;
  undefined4 local_10 [3];
  
  iVar1 = (*(code *)PTR_pthread_create_004235b8)(local_10,0,FUN_00405e90,0);
  if (iVar1 == 0) {
    (*(code *)PTR_pthread_detach_0042353c)(local_10[0]);
  }
  else {
    (*(code *)PTR_fprintf_0042350c)
              (*(undefined4 *)PTR_stderr_00423444,"%s:%s:Create RTSPSinkThread Thread Fail!\n",
               "wfaudio_nl_user.c","StartThreadForWFAudioNetlink");
  }
  return iVar1 == 0;
}


/* FUN_004058ac @ 004058ac */

int FUN_004058ac(int param_1)

{
  undefined *puVar1;
  int *piVar2;
  int iVar3;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  if (DAT_00422520 < 1) {
    (*(code *)PTR_puts_00423564)("WFD  Send NL Msg Err, Null Socket_fd");
    iVar3 = -1;
  }
  else {
    local_20 = 0x100000;
    local_1c = 0;
    local_18 = 0;
    piVar2 = (int *)(*(code *)PTR_calloc_0042351c)(*(ushort *)(param_1 + 2) + 0x13 & 0xfffffffc,1);
    (*(code *)PTR_memcpy_0042357c)(piVar2 + 4,param_1,*(undefined2 *)(param_1 + 2));
    puVar1 = PTR_getpid_00423594;
    *piVar2 = *(ushort *)(param_1 + 2) + 0x10;
    *(undefined2 *)(piVar2 + 1) = 0x12;
    iVar3 = (*(code *)puVar1)();
    piVar2[3] = iVar3;
    puVar1 = PTR_sendto_004234d0;
    iVar3 = DAT_00422520;
    *(undefined2 *)((int)piVar2 + 6) = 0;
    iVar3 = (*(code *)puVar1)(iVar3,piVar2,*piVar2,0,&local_20,0xc);
    if (iVar3 < 1) {
      (*(code *)PTR_printf_004235c0)("WFD Send NL Msg Err (%d)\n",iVar3);
    }
    (*(code *)PTR_free_004233a8)(piVar2);
  }
  return iVar3;
}


/* FUN_004059ec @ 004059ec */

undefined4 FUN_004059ec(short *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined2 uVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  code *pcVar8;
  int local_18 [2];
  
  if (*param_1 != 2) {
    (*(code *)PTR_printf_004235c0)("WFAudio User: Rcv Unknown NL Msg(%d)\n");
    return 0;
  }
  (*(code *)PTR_printf_004235c0)("Gpio state=%d\n",*(undefined4 *)(param_1 + 2));
  if (*(int *)(param_1 + 2) != 0) {
    return 0;
  }
  (*(code *)PTR_system_00423558)("source ./tmp/homekitclean.script");
  (*(code *)PTR_system_00423558)("phytrex_tools -dwpi  WDATA");
  (*(code *)PTR_puts_00423564)("[METER] Reset WRITEABLE data");
  iVar3 = (*(code *)PTR_SetWlan_idx_00423580)("wlan0");
  if (iVar3 != 0) {
    (*(code *)PTR_apmib_get_0042354c)(0x2b0,local_18);
  }
  iVar3 = (*(code *)PTR_getWACServerState_00423434)();
  if (local_18[0] == 0) {
    (*(code *)PTR_pthread_mutex_lock_0042340c)(PTR_WACGlobal_Lock_00423520);
    iVar7 = *(int *)PTR_m_WACMonitorThreadRunning_00423420;
    iVar6 = *(int *)PTR_m_WACServerStart_00423404;
    (*(code *)PTR_pthread_mutex_unlock_00423460)(PTR_WACGlobal_Lock_00423520);
    if ((iVar7 != 0) || (iVar6 != 0)) {
      if (iVar3 < 3) {
        (*(code *)PTR_pthread_mutex_lock_0042340c)(PTR_WACGlobal_Lock_00423520);
        puVar2 = PTR_WACGlobal_Lock_00423520;
        puVar1 = PTR_pthread_mutex_unlock_00423460;
        *(undefined4 *)PTR_m_WACServerCounter_00423530 = 0;
        (*(code *)puVar1)(puVar2);
        pcVar5 = "WACServer is running just clean m_WACServerCounter";
        pcVar8 = (code *)PTR_puts_00423564;
      }
      else {
        pcVar5 = "WAC  is in progress, do nothing";
        pcVar8 = (code *)PTR_puts_00423564;
      }
      goto LAB_00405d74;
    }
  }
  else {
    iVar3 = (*(code *)PTR_SetWlan_idx_00423580)("wlan0");
    if (iVar3 != 0) {
      local_18[0] = 0;
      (*(code *)PTR_apmib_set_00423524)(0x2b0,local_18);
    }
  }
  puVar1 = PTR_Apple_vendor_IE_00423598;
  (*(code *)PTR_Reset_to_AP_0042347c)();
  (*(code *)PTR_pthread_mutex_lock_0042340c)(PTR_WACGlobal_Lock_00423520);
  if (*puVar1 != '\0') {
    uVar4 = (*(code *)PTR_strlen_004233e8)(puVar1);
    (*(code *)PTR_DeleteWlanIE_004235ac)("wlan0",puVar1,uVar4);
    (*(code *)PTR_memset_00423490)(puVar1,0,0x100);
  }
  puVar2 = PTR_WACGlobal_Lock_00423520;
  puVar1 = PTR_pthread_mutex_unlock_00423460;
  *(undefined4 *)PTR_m_WACMonitorThreadRunning_00423420 = 0;
  *(undefined4 *)PTR_m_WACServerStart_00423404 = 0;
  *(undefined4 *)PTR_m_WACServerCounter_00423530 = 0;
  *(undefined4 *)PTR_m_WACWifiInfoReady_00423528 = 0;
  (*(code *)puVar1)(puVar2);
  (*(code *)PTR_pthread_mutex_lock_0042340c)(PTR_WACWifiConnecting_Lock_004235dc);
  puVar2 = PTR_WACWifiConnecting_Lock_004235dc;
  puVar1 = PTR_pthread_mutex_unlock_00423460;
  *(undefined4 *)PTR_m_WACWifiConnecting_004233c0 = 0;
  (*(code *)puVar1)(puVar2);
  (*(code *)PTR_pthread_mutex_lock_0042340c)(PTR_WACWifiConnectingState_Lock_004235a8);
  puVar2 = PTR_strcpy_004235e0;
  puVar1 = PTR_dst_connect_ap_info_00423468;
  *(undefined4 *)PTR_NetWACFlag_004233cc = 0;
  (*(code *)puVar2)(puVar1,"wlan0-vxd");
  (*(code *)PTR_pthread_mutex_unlock_00423460)(PTR_WACWifiConnectingState_Lock_004235a8);
  (*(code *)PTR_system_00423558)("rm -f /tmp/net/airplay_name 2> /dev/null");
  (*(code *)PTR_system_00423558)("rm -f /tmp/net/airplay_password 2> /dev/null");
  (*(code *)PTR_system_00423558)("flash default-sw");
  (*(code *)PTR_puts_00423564)("Reset to default...");
  pcVar5 = "reboot";
  pcVar8 = (code *)PTR_system_00423558;
LAB_00405d74:
  (*pcVar8)(pcVar5);
  return 0;
}


/* FUN_00405dac @ 00405dac */

int FUN_00405dac(void)

{
  int iVar1;
  int iVar2;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  iVar1 = (*(code *)PTR_socket_00423548)(0x10,3,0x1a);
  if (iVar1 < 0) {
    (*(code *)PTR_printf_004235c0)("(WFD) Open NL Err (%d)\n",iVar1);
    iVar2 = iVar1;
  }
  else {
    local_1c = 0;
    local_20 = 0x100000;
    local_18 = 0;
    local_1c = (*(code *)PTR_getpid_00423594)();
    local_18 = 1;
    iVar2 = (*(code *)PTR_bind_00423504)(iVar1,&local_20,0xc);
    if (iVar2 < 0) {
      (*(code *)PTR_printf_004235c0)("(WFD) Bind NL Err (%d)\n",iVar1);
    }
    else {
      iVar2 = 0;
      DAT_00422520 = iVar1;
    }
  }
  return iVar2;
}


/* FUN_00405e90 @ 00405e90 */

void FUN_00405e90(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int local_78 [5];
  undefined2 local_64;
  undefined2 local_62;
  undefined4 local_60;
  undefined4 local_5c;
  undefined1 auStack_58 [20];
  int *local_44;
  undefined4 local_40;
  int *local_3c;
  undefined4 local_38;
  
  uVar1 = (*(code *)PTR_getpid_00423594)();
  (*(code *)PTR_sprintf_0042344c)(auStack_58,&DAT_00411140,uVar1);
  iVar2 = (*(code *)PTR_fopen_00423498)(PTR_s__var_run_wfaudio_nl_pid_004224f8,&DAT_00411144);
  if (iVar2 != 0) {
    uVar1 = (*(code *)PTR_strlen_004233e8)(auStack_58);
    (*(code *)PTR_fwrite_0042341c)(auStack_58,uVar1,1,iVar2);
    (*(code *)PTR_fclose_00423480)(iVar2);
  }
  iVar2 = FUN_00405dac();
  if (-1 < iVar2) {
    local_64 = 1;
    local_62 = 0xc;
    local_60 = (*(code *)PTR_getpid_00423594)();
    local_5c = 0;
    FUN_004058ac(&local_64);
    local_78[2] = 0;
    local_78[3] = 0;
    local_78[4] = 0;
    iVar2 = (*(code *)PTR_calloc_0042351c)(0x210,1);
    while( true ) {
      (*(code *)PTR_memset_00423490)(iVar2,0,0x210);
      local_78[1] = 0x210;
      local_40 = 0xc;
      local_38 = 1;
      local_78[0] = iVar2;
      local_44 = local_78 + 2;
      local_3c = local_78;
      iVar3 = (*(code *)PTR_recvmsg_004233b8)(DAT_00422520,&local_44,0);
      if (iVar3 < 1) break;
      FUN_004059ec(iVar2 + 0x10);
    }
    (*(code *)PTR_printf_004235c0)("<<\n\nWFAudio User Rcv NL Err(%d)>>\n\n",iVar3);
    (*(code *)PTR_free_004233a8)(iVar2);
  }
  return;
}


/* FUN_004060b0 @ 004060b0 */

char * FUN_004060b0(char *param_1,char *param_2)

{
  char cVar1;
  undefined *puVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  uint uVar6;
  int iVar7;
  
  puVar2 = PTR___ctype_b_004235a4;
  do {
    pcVar3 = param_2;
    param_2 = pcVar3 + 1;
  } while ((*(ushort *)(*(int *)PTR___ctype_b_004235a4 + *pcVar3 * 2) & 0x20) != 0);
  while( true ) {
    iVar7 = (int)*pcVar3;
    pcVar4 = pcVar3 + 1;
    pcVar5 = param_1 + 1;
    if ((iVar7 == 0) || ((*(ushort *)(*(int *)puVar2 + iVar7 * 2) & 0x20) != 0)) goto LAB_004061ac;
    if (iVar7 == 0x3a) break;
    *param_1 = *pcVar3;
    pcVar3 = pcVar4;
    param_1 = pcVar5;
  }
  *param_1 = ':';
  puVar2 = PTR___ctype_b_004235a4;
  while( true ) {
    cVar1 = *pcVar4;
    if ((*(ushort *)(*(int *)puVar2 + cVar1 * 2) & 8) == 0) break;
    *pcVar5 = cVar1;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar6 = (int)cVar1 ^ 0x3a;
  if (uVar6 != 0) {
    pcVar4 = pcVar3;
  }
  if (uVar6 != 0) {
    pcVar5 = param_1;
  }
  param_1 = pcVar5;
  pcVar3 = (char *)0x0;
  if (*pcVar4 != '\0') {
    pcVar3 = pcVar4 + 1;
LAB_004061ac:
    *param_1 = '\0';
  }
  return pcVar3;
}


/* FUN_004061b8 @ 004061b8 */

/* WARNING: Removing unreachable block (ram,0x00406204) */

undefined8 FUN_004061b8(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = ((param_1 - param_2) * 1000000) / 48000;
  if (param_1 < param_2) {
    (*(code *)PTR_printf_004235c0)
              ("Max=%ld, Avail=%ld,TN=%016llX\n",param_1,param_2,param_4,iVar1 >> 0x1f,iVar1);
  }
  return CONCAT44(iVar1,iVar1 >> 0x1f);
}


/* ChangeLEDConfiguring @ 0040624c */

undefined4 ChangeLEDConfiguring(undefined4 param_1)

{
  char *pcVar1;
  int iVar2;
  code *pcVar3;
  undefined1 local_40 [4];
  undefined4 local_3c;
  undefined1 auStack_38 [16];
  undefined1 *local_28;
  undefined2 local_24;
  undefined1 *local_18;
  
  pcVar1 = (char *)(*(code *)PTR_socket_00423548)(2,1,0);
  if ((int)pcVar1 < 0) {
    pcVar1 = "socket() error!";
    pcVar3 = (code *)PTR_puts_00423564;
  }
  else {
    local_18 = auStack_38;
    local_40[0] = 0x77;
    local_3c = param_1;
    (*(code *)PTR_strcpy_004235e0)(local_18,"wlan0");
    local_28 = local_40;
    local_24 = 8;
    iVar2 = (*(code *)PTR_ioctl_004235d0)(pcVar1,0x89ff,local_18);
    if (-1 < iVar2) {
      (*(code *)PTR_close_004233ac)(pcVar1);
      return 0;
    }
    (*(code *)PTR_puts_00423564)("ioctl failed");
    pcVar3 = (code *)PTR_close_004233ac;
  }
  (*pcVar3)(pcVar1);
  return 0xffffffff;
}


/* FUN_00406350 @ 00406350 */

uint FUN_00406350(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined1 auStack_38 [16];
  short local_28;
  undefined1 *local_18;
  
  iVar1 = (*(code *)PTR_socket_00423548)(2,1,0);
  uVar3 = 0;
  if (iVar1 != -1) {
    local_18 = auStack_38;
    (*(code *)PTR_strcpy_004235e0)(local_18,param_1);
    iVar2 = (*(code *)PTR_ioctl_004235d0)(iVar1,0x8913,local_18);
    if (iVar2 < 0) {
      (*(code *)PTR_close_004233ac)(iVar1);
    }
    else {
      uVar3 = (int)local_28 & 1;
      (*(code *)PTR_printf_004235c0)("SIOCGIFFLAGS result of %s=%x\n",param_1,(int)local_28);
    }
  }
  return uVar3;
}


/* getInAddr @ 0040642c */

undefined4 getInAddr(undefined4 param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_38 [16];
  undefined1 auStack_28 [4];
  undefined4 local_24;
  
  iVar1 = (*(code *)PTR_socket_00423548)(2,1,0);
  if (iVar1 == -1) {
    return 0;
  }
  (*(code *)PTR_strcpy_004235e0)(auStack_38,param_1);
  iVar2 = (*(code *)PTR_ioctl_004235d0)(iVar1,0x8913,auStack_38);
  if (iVar2 < 0) {
    uVar3 = 0;
    goto LAB_00406584;
  }
  if (param_2 == 3) {
    iVar2 = (*(code *)PTR_ioctl_004235d0)(iVar1,0x8927,auStack_38);
    if (-1 < iVar2) {
      (*(code *)PTR_memcpy_0042357c)(param_3,auStack_28,0x10);
      uVar3 = 1;
      goto LAB_00406584;
    }
  }
  else if (param_2 == 0) {
    iVar2 = (*(code *)PTR_ioctl_004235d0)(iVar1,0x8915,auStack_38);
    if (iVar2 == 0) {
LAB_00406568:
      uVar3 = 1;
      *param_3 = local_24;
      goto LAB_00406584;
    }
  }
  else if ((param_2 == 1) &&
          (iVar2 = (*(code *)PTR_ioctl_004235d0)(iVar1,0x891b,auStack_38), -1 < iVar2))
  goto LAB_00406568;
  uVar3 = 0;
LAB_00406584:
  (*(code *)PTR_close_004233ac)(iVar1);
  return uVar3;
}


/* FUN_004065b0 @ 004065b0 */

undefined4 FUN_004065b0(char *param_1,int param_2,int param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  int iVar3;
  char local_20;
  char local_1f;
  undefined1 local_1e;
  
  iVar3 = 0;
  while( true ) {
    if (param_3 <= iVar3 << 1) {
      return 1;
    }
    local_20 = *param_1;
    local_1f = param_1[1];
    local_1e = 0;
    if ((((9 < (byte)(local_20 - 0x30U)) && (5 < (byte)(local_20 + 0xbfU))) &&
        (5 < (byte)(local_20 + 0x9fU))) ||
       (((9 < (byte)(local_1f - 0x30U) && (5 < (byte)(local_1f + 0xbfU))) &&
        (5 < (byte)(local_1f + 0x9fU))))) break;
    param_1 = param_1 + 2;
    uVar1 = (*(code *)PTR_strtol_00423534)(&local_20);
    puVar2 = (undefined1 *)(param_2 + iVar3);
    iVar3 = iVar3 + 1;
    *puVar2 = uVar1;
  }
  (*(code *)PTR_puts_00423564)("Not HEX",0,0x10);
  return 0;
}


/* DeleteWlanIE @ 004066ec */

undefined4 DeleteWlanIE(undefined4 param_1,undefined4 param_2,uint param_3)

{
  char *pcVar1;
  int iVar2;
  uint uVar3;
  code *pcVar4;
  undefined1 auStack_248 [16];
  undefined1 *local_238;
  undefined2 local_234;
  undefined1 auStack_228 [256];
  undefined1 local_128;
  undefined1 local_127;
  undefined2 local_126;
  undefined2 local_124;
  undefined1 auStack_122 [258];
  undefined1 *local_20;
  
  pcVar1 = (char *)(*(code *)PTR_socket_00423548)(2,1,0);
  if ((int)pcVar1 < 0) {
    pcVar1 = "socket() error!";
    pcVar4 = (code *)PTR_puts_00423564;
  }
  else {
    uVar3 = (param_3 & 0xffff) >> 1;
    local_128 = 0x76;
    local_126 = 2;
    local_127 = 0;
    local_124 = (undefined2)uVar3;
    FUN_004065b0(param_2,auStack_228,param_3 & 0xffff);
    (*(code *)PTR_memcpy_0042357c)(auStack_122,auStack_228,uVar3);
    local_20 = auStack_248;
    (*(code *)PTR_strcpy_004235e0)(local_20,param_1);
    local_238 = &local_128;
    local_234 = 0x106;
    iVar2 = (*(code *)PTR_ioctl_004235d0)(pcVar1,0x89ff,local_20);
    if (-1 < iVar2) {
      (*(code *)PTR_close_004233ac)(pcVar1);
      return 0;
    }
    (*(code *)PTR_puts_00423564)("ioctl failed");
    pcVar4 = (code *)PTR_close_004233ac;
  }
  (*pcVar4)(pcVar1);
  return 0xffffffff;
}


/* InsertWlanIE @ 00406850 */

undefined4 InsertWlanIE(undefined4 param_1,undefined4 param_2,uint param_3)

{
  char *pcVar1;
  int iVar2;
  uint uVar3;
  code *pcVar4;
  undefined1 auStack_248 [16];
  undefined1 *local_238;
  undefined2 local_234;
  undefined1 auStack_228 [256];
  undefined1 local_128;
  undefined1 local_127;
  undefined2 local_126;
  undefined2 local_124;
  undefined1 auStack_122 [258];
  undefined1 *local_20;
  
  pcVar1 = (char *)(*(code *)PTR_socket_00423548)(2,1,0);
  if ((int)pcVar1 < 0) {
    pcVar1 = "socket() error!";
    pcVar4 = (code *)PTR_puts_00423564;
  }
  else {
    uVar3 = (param_3 & 0xffff) >> 1;
    local_128 = 0x76;
    local_126 = 1;
    local_127 = 0;
    local_124 = (undefined2)uVar3;
    FUN_004065b0(param_2,auStack_228,param_3 & 0xffff);
    (*(code *)PTR_memcpy_0042357c)(auStack_122,auStack_228,uVar3);
    local_20 = auStack_248;
    (*(code *)PTR_strcpy_004235e0)(local_20,param_1);
    local_238 = &local_128;
    local_234 = 0x106;
    iVar2 = (*(code *)PTR_ioctl_004235d0)(pcVar1,0x89ff,local_20);
    if (-1 < iVar2) {
      (*(code *)PTR_close_004233ac)(pcVar1);
      return 0;
    }
    (*(code *)PTR_puts_00423564)("ioctl failed");
    pcVar4 = (code *)PTR_close_004233ac;
  }
  (*pcVar4)(pcVar1);
  return 0xffffffff;
}


/* find_pid_by_name @ 004069b4 */

uint find_pid_by_name(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_c8 [52];
  undefined1 auStack_94 [52];
  undefined1 auStack_60 [56];
  
  iVar1 = (*(code *)PTR_opendir_00423470)("/proc");
  if (iVar1 == 0) {
    (*(code *)PTR_printf_004235c0)("Cannot open /proc");
    uVar2 = 0;
  }
  else {
    do {
      while( true ) {
        do {
          do {
            iVar4 = (*(code *)PTR_readdir_00423544)(iVar1);
            iVar5 = iVar4 + 0xb;
            if (iVar4 == 0) {
              iVar1 = (*(code *)PTR_strcmp_00423464)(param_1,"init");
              return (uint)(iVar1 == 0);
            }
            iVar3 = (*(code *)PTR_strcmp_00423464)(iVar5,&DAT_0041122c);
          } while ((iVar3 == 0) ||
                  ((*(ushort *)(*(int *)PTR___ctype_b_004235a4 + *(char *)(iVar4 + 0xb) * 2) & 8) ==
                   0));
          (*(code *)PTR_sprintf_0042344c)(auStack_c8,"/proc/%s/status",iVar5);
          iVar4 = (*(code *)PTR_fopen_00423498)(auStack_c8,&DAT_00411fe4);
        } while (iVar4 == 0);
        iVar3 = (*(code *)PTR_fgets_00423588)(auStack_94,0x31,iVar4);
        if (iVar3 != 0) break;
        (*(code *)PTR_fclose_00423480)();
      }
      (*(code *)PTR_fclose_00423480)(iVar4);
      (*(code *)PTR_sscanf_004234b4)(auStack_94,"%*s %s",auStack_60);
      iVar4 = (*(code *)PTR_strcmp_00423464)(auStack_60,param_1);
    } while (iVar4 != 0);
    uVar2 = (*(code *)PTR_strtol_00423534)(iVar5,0,0);
  }
  return uVar2;
}


/* gettoken @ 00406bc8 */

undefined1 * gettoken(int param_1,uint param_2,char param_3)

{
  byte bVar1;
  undefined1 uVar2;
  bool bVar3;
  uint uVar4;
  undefined1 *puVar5;
  int iVar6;
  undefined1 *puVar7;
  uint uVar8;
  undefined1 *puVar9;
  byte local_48 [56];
  
  (*(code *)PTR_memset_00423490)(&DAT_004237f0,0,0x32);
  uVar4 = (*(code *)PTR_strlen_004233e8)(param_1);
  iVar6 = 1;
  for (uVar8 = 0; uVar8 < uVar4; uVar8 = uVar8 + 1) {
    if (*(char *)(param_1 + uVar8) == param_3) {
      local_48[iVar6] = (byte)uVar8;
      iVar6 = iVar6 + 1;
    }
  }
  puVar5 = (undefined1 *)0x0;
  if (param_2 <= iVar6 - 1U) {
    local_48[0] = 0;
    local_48[iVar6] = (byte)uVar4;
    if (param_2 != 0) {
      puVar5 = (undefined1 *)(local_48[param_2] + 1);
    }
    bVar1 = local_48[param_2 + 1];
    puVar9 = puVar5 + param_1;
    puVar7 = &DAT_004237f0;
    while (bVar3 = (int)puVar5 < (int)(uint)bVar1, puVar5 = puVar5 + 1, bVar3) {
      uVar2 = *puVar9;
      puVar9 = puVar9 + 1;
      *puVar7 = uVar2;
      puVar7 = puVar7 + 1;
    }
    puVar5 = &DAT_004237f0;
  }
  return puVar5;
}


/* if_readlist_proc @ 00406ce8 */

int if_readlist_proc(char *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  int iVar4;
  code *pcVar5;
  undefined1 auStack_248 [16];
  undefined1 auStack_238 [16];
  undefined1 auStack_228 [516];
  
  iVar1 = (*(code *)PTR_fopen_00423498)("/proc/net/dev",&DAT_00411fe4);
  iVar4 = 0;
  if (iVar1 != 0) {
    (*(code *)PTR_fgets_00423588)(auStack_228,0x200,iVar1);
    (*(code *)PTR_fgets_00423588)(auStack_228,0x200,iVar1);
    iVar4 = 0;
    while (iVar2 = (*(code *)PTR_fgets_00423588)(auStack_228,0x200,iVar1), iVar2 != 0) {
      FUN_004060b0(auStack_248,auStack_228);
      iVar2 = (*(code *)PTR_strstr_004234f8)(auStack_248,param_2);
      if (iVar2 != 0) {
        puVar3 = auStack_248;
        pcVar5 = (code *)PTR_strcpy_004235e0;
        if (*param_1 != '\0') {
          (*(code *)PTR_sprintf_0042344c)(auStack_238," %s",auStack_248);
          puVar3 = auStack_238;
          pcVar5 = (code *)PTR_strcat_00423508;
        }
        iVar4 = iVar4 + 1;
        (*pcVar5)(param_1,puVar3);
      }
    }
    (*(code *)PTR_fclose_00423480)(iVar1);
  }
  return iVar4;
}


/* FUN_00406e80 @ 00406e80 */

void FUN_00406e80(char *param_1,undefined1 *param_2)

{
  code *pcVar1;
  undefined1 auStack_30 [32];
  
  (*(code *)PTR_memset_00423490)(auStack_30,0,0x1e);
  pcVar1 = (code *)PTR_strcpy_004235e0;
  if (*param_1 != '\0') {
    (*(code *)PTR_sprintf_0042344c)(auStack_30," %s",param_2);
    param_2 = auStack_30;
    pcVar1 = (code *)PTR_strcat_00423508;
  }
  (*pcVar1)(param_1,param_2);
  return;
}


/* setInAddr @ 00406f28 */

undefined4 setInAddr(undefined4 param_1,int param_2,int param_3,int param_4,uint param_5)

{
  int iVar1;
  int iVar2;
  uint local_60;
  uint local_5c;
  undefined2 local_58;
  undefined1 auStack_56 [14];
  undefined1 auStack_48 [16];
  undefined2 local_38 [2];
  uint local_34;
  
  iVar1 = (*(code *)PTR_socket_00423548)(2,1,0);
  if (iVar1 == -1) {
    return 0xffffffff;
  }
  (*(code *)PTR_strcpy_004235e0)(auStack_48,param_1);
  iVar2 = (*(code *)PTR_ioctl_004235d0)(iVar1,0x8913,auStack_48);
  if (iVar2 < 0) {
    (*(code *)PTR_close_004233ac)(iVar1);
    return 0xffffffff;
  }
  if ((param_5 & 0xf) == 1) {
    return 0;
  }
  local_38[0] = 0x1043;
  if (((param_5 & 2) != 0) && (param_2 != 0)) {
    (*(code *)PTR_inet_aton_004234a4)(param_2,&local_60);
    local_34 = local_60;
    local_38[0] = 2;
    iVar2 = (*(code *)PTR_ioctl_004235d0)(iVar1,0x8916,auStack_48);
    if (iVar2 < 0) goto LAB_00407178;
  }
  if ((((param_5 & 4) != 0) && (param_2 != 0)) && (param_3 != 0)) {
    (*(code *)PTR_inet_aton_004234a4)(param_3,&local_5c);
    local_34 = local_5c;
    local_38[0] = 2;
    iVar2 = (*(code *)PTR_ioctl_004235d0)(iVar1,0x891c,auStack_48);
    if (iVar2 < 0) goto LAB_00407178;
    local_34 = ~local_5c | local_5c & local_60;
    local_38[0] = 2;
    iVar2 = (*(code *)PTR_ioctl_004235d0)(iVar1,0x891a,auStack_48);
    if (iVar2 < 0) goto LAB_00407178;
  }
  if (((param_5 & 8) != 0) && (param_4 != 0)) {
    local_58 = 1;
    (*(code *)PTR_memcpy_0042357c)(auStack_56,param_4,6);
    (*(code *)PTR_memcpy_0042357c)(local_38,&local_58,0x10);
    iVar2 = (*(code *)PTR_ioctl_004235d0)(iVar1,0x8924,auStack_48);
    if (iVar2 < 0) {
LAB_00407178:
      (*(code *)PTR_close_004233ac)(iVar1);
      (*(code *)PTR_perror_0042356c)(param_1);
      return 0xffffffff;
    }
  }
  (*(code *)PTR_close_004233ac)(iVar1);
  return 0;
}


/* getPid_fromFile @ 004071d0 */

undefined4 getPid_fromFile(undefined4 param_1)

{
  int iVar1;
  undefined4 local_18 [3];
  
  local_18[0] = 0xffffffff;
  iVar1 = (*(code *)PTR_fopen_00423498)(param_1,&DAT_00411fe4);
  if (iVar1 == 0) {
    (*(code *)PTR_printf_004235c0)("can not open:%s\n",param_1);
    local_18[0] = 0xffffffff;
  }
  else {
    (*(code *)PTR_fscanf_0042358c)(iVar1,&DAT_004117f4,local_18);
    (*(code *)PTR_fclose_00423480)(iVar1);
  }
  return local_18[0];
}


/* FUN_00407278 @ 00407278 */

undefined4 FUN_00407278(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_10 [2];
  
  local_10[0] = 0xffffffff;
  iVar1 = (*(code *)PTR_fopen_00423498)(param_1,&DAT_00411fe4);
  uVar2 = 0xffffffff;
  if (iVar1 != 0) {
    (*(code *)PTR_fscanf_0042358c)(iVar1,&DAT_004117f4,local_10);
    (*(code *)PTR_fclose_00423480)(iVar1);
    uVar2 = local_10[0];
  }
  return uVar2;
}


/* DoCmd @ 004072fc */

uint DoCmd(int *param_1,int param_2)

{
  int iVar1;
  uint *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined1 *puVar5;
  uint local_40;
  undefined1 auStack_3c [40];
  
  iVar1 = (*(code *)PTR_fork_004234b8)();
  if (iVar1 == -1) {
    (*(code *)PTR_perror_0042356c)(&DAT_0041126c);
    puVar2 = (uint *)(*(code *)PTR___errno_location_00423408)();
    return *puVar2;
  }
  if (iVar1 != 0) {
    (*(code *)PTR_waitpid_004235d4)(iVar1,&local_40,0);
    if ((local_40 & 0x7f) != 0) {
      return local_40;
    }
    return (int)(local_40 & 0xff00) >> 8;
  }
  (*(code *)PTR_signal_004234e8)(2,1);
  iVar1 = 2;
  if (param_2 != 0) {
    iVar1 = (*(code *)PTR_open_004233e0)(param_2,0x102);
    if (iVar1 == -1) {
      puVar5 = auStack_3c;
      (*(code *)PTR_sprintf_0042344c)(puVar5,"open %s",param_2);
      goto LAB_00407480;
    }
    (*(code *)PTR_dup2_0042355c)(iVar1,1);
    (*(code *)PTR_dup2_0042355c)(iVar1,2);
  }
  (*(code *)PTR_close_004233ac)(iVar1);
  (*(code *)PTR_setenv_004234d4)(&DAT_0041127c,"/sbin:/bin:/usr/sbin:/usr/bin",1);
  (*(code *)PTR_execvp_004233d0)(*param_1,param_1);
  puVar5 = (undefined1 *)*param_1;
LAB_00407480:
  (*(code *)PTR_perror_0042356c)(puVar5);
  puVar3 = (undefined4 *)(*(code *)PTR___errno_location_00423408)();
  uVar4 = (*(code *)PTR_exit_00423400)(*puVar3);
  return uVar4;
}


/* RunSystemCmd @ 00407500 */

void RunSystemCmd(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined1 auStackX_0 [4];
  undefined4 local_res4;
  undefined4 local_res8;
  undefined4 local_resc;
  undefined4 *local_78;
  undefined4 local_74 [26];
  
  puVar2 = local_74;
  local_res4 = param_2;
  local_res8 = param_3;
  local_resc = param_4;
  (*(code *)PTR_memset_00423490)(puVar2,0,0x60);
  iVar1 = 0;
  local_78 = (undefined4 *)register0x00000074;
  while( true ) {
    local_78 = local_78 + 1;
    iVar1 = iVar1 + 1;
    if (*(char *)*local_78 == '\0') break;
    *puVar2 = (char *)*local_78;
    puVar2 = puVar2 + 1;
  }
  local_74[iVar1] = 0;
  DoCmd(local_74,param_1);
  return;
}


/* isFileExist @ 004075b0 */

uint isFileExist(undefined4 param_1)

{
  uint uVar1;
  undefined1 auStack_a0 [156];
  
  uVar1 = (*(code *)PTR_stat_00423424)(param_1,auStack_a0);
  return ~uVar1 >> 0x1f;
}


/* killDaemonByPidFile @ 004075e8 */

undefined4 killDaemonByPidFile(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_20 [16];
  undefined1 *local_10;
  
  if (param_1 == 0) {
    (*(code *)PTR_printf_004235c0)("%s : input file name is null!\n","killDaemonByPidFile");
    uVar2 = 0xffffffff;
  }
  else {
    iVar1 = isFileExist();
    uVar2 = 0xffffffff;
    if (iVar1 != 0) {
      iVar1 = getPid_fromFile(param_1);
      if (iVar1 != 0) {
        local_10 = auStack_20;
        (*(code *)PTR_sprintf_0042344c)(auStack_20,&DAT_004117f4,iVar1);
        RunSystemCmd(0,&DAT_004112c4,&DAT_004112cc,local_10,"");
      }
      (*(code *)PTR_unlink_004234d8)(param_1);
      uVar2 = 0;
    }
  }
  return uVar2;
}


/* WriteLog2File @ 004076c0 */

void WriteLog2File(undefined4 param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 local_3b8;
  undefined1 auStack_3b4 [128];
  undefined1 auStack_334 [132];
  undefined1 auStack_2b0 [52];
  int local_27c;
  undefined1 auStack_218 [516];
  
  (*(code *)PTR_memset_00423490)(auStack_3b4,0,0x80);
  (*(code *)PTR_memset_00423490)(auStack_334,0,0x80);
  (*(code *)PTR_memset_00423490)(auStack_218,0,0x200);
  local_3b8 = (*(code *)PTR_time_00423474)(0);
  uVar2 = (*(code *)PTR_localtime_00423494)(&local_3b8);
  (*(code *)PTR_strftime_0042342c)(auStack_3b4,0x80,"%b/%d/%Y %T",uVar2);
  (*(code *)PTR_sprintf_0042344c)(auStack_218,"%s--%s\n",auStack_3b4,param_1);
  if (*(int *)PTR_verbose_00423578 == 1) {
    (*(code *)PTR_fprintf_0042350c)
              (*(undefined4 *)PTR_stderr_00423444,"\nFILE %s FUNCTION %s LINE %d: %s\n","utility.c",
               "WriteLog2File",0x2ff,auStack_218);
  }
  else {
    iVar3 = (*(code *)PTR_stat_00423424)("/var/log/wfaudio.log",auStack_2b0);
    puVar1 = PTR_LogFile_004234c8;
    if (-1 < iVar3) {
      if (0xfffff < local_27c) {
        (*(code *)PTR_puts_00423564)("Logfile size too large, clean old log data");
        (*(code *)PTR_close_004233ac)(*(undefined4 *)puVar1);
        (*(code *)PTR_unlink_004234d8)("/var/log/wfaudio.log");
        *(undefined4 *)puVar1 = 0xffffffff;
        iVar3 = (*(code *)PTR_open_004233e0)("/var/log/wfaudio.log",0x302,0x3f);
        *(int *)puVar1 = iVar3;
        if (iVar3 < 1) {
          return;
        }
        (*(code *)PTR_strcpy_004235e0)(auStack_334,"Log Start:");
        uVar2 = (*(code *)PTR_strlen_004233e8)(auStack_334);
        (*(code *)PTR_write_00423510)(*(undefined4 *)puVar1,auStack_334,uVar2);
      }
      uVar2 = (*(code *)PTR_strlen_004233e8)(auStack_218);
      (*(code *)PTR_write_00423510)(*(undefined4 *)puVar1,auStack_218,uVar2);
    }
  }
  return;
}


/* FUN_00407938 @ 00407938 */

void FUN_00407938(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_80 [104];
  
  iVar1 = (*(code *)PTR_open_004233e0)(param_1,0x302,0x3f);
  if (iVar1 < 0) {
    (*(code *)PTR_fprintf_0042350c)
              (*(undefined4 *)PTR_stderr_00423444,
               "\nFILE %s FUNCTION %s LINE %d: Create %s file error!\n\n","utility.c",
               "WACCreate_bound_script",0x19c,param_1);
  }
  else {
    (*(code *)PTR_strcpy_004235e0)(auStack_80,"#!/bin/sh\n");
    uVar2 = (*(code *)PTR_strlen_004233e8)(auStack_80);
    (*(code *)PTR_write_00423510)(iVar1,auStack_80,uVar2);
    (*(code *)PTR_sprintf_0042344c)(auStack_80,"%s\n","if [ \"$router\" ];then");
    uVar2 = (*(code *)PTR_strlen_004233e8)(auStack_80);
    (*(code *)PTR_write_00423510)(iVar1,auStack_80,uVar2);
    (*(code *)PTR_sprintf_0042344c)
              (auStack_80,"%s\n","sysconf conn dhcp $interface wac a=$ip M=$subnet r=$router d=$dns"
              );
    uVar2 = (*(code *)PTR_strlen_004233e8)(auStack_80);
    (*(code *)PTR_write_00423510)(iVar1,auStack_80,uVar2);
    (*(code *)PTR_sprintf_0042344c)(auStack_80,"%s\n",&DAT_004113ec);
    uVar2 = (*(code *)PTR_strlen_004233e8)(auStack_80);
    (*(code *)PTR_write_00423510)(iVar1,auStack_80,uVar2);
    (*(code *)PTR_sprintf_0042344c)(auStack_80,"%s\n","if [ \"$serverid\" ];then");
    uVar2 = (*(code *)PTR_strlen_004233e8)(auStack_80);
    (*(code *)PTR_write_00423510)(iVar1,auStack_80,uVar2);
    (*(code *)PTR_sprintf_0042344c)
              (auStack_80,"%s\n",
               "sysconf conn dhcp $interface wac a=$ip M=$subnet s=$serverid d=$dns");
    uVar2 = (*(code *)PTR_strlen_004233e8)(auStack_80);
    (*(code *)PTR_write_00423510)(iVar1,auStack_80,uVar2);
    (*(code *)PTR_sprintf_0042344c)(auStack_80,"%s\n",&DAT_004113ec);
    uVar2 = (*(code *)PTR_strlen_004233e8)(auStack_80);
    (*(code *)PTR_write_00423510)(iVar1,auStack_80,uVar2);
    (*(code *)PTR_sprintf_0042344c)
              (auStack_80,"%s\n","sysconf conn dhcp wac $interface a=$ip M=$subnet d=$dns");
    uVar2 = (*(code *)PTR_strlen_004233e8)(auStack_80);
    (*(code *)PTR_write_00423510)(iVar1,auStack_80,uVar2);
    (*(code *)PTR_sprintf_0042344c)(auStack_80,"%s\n",&DAT_00411488);
    uVar2 = (*(code *)PTR_strlen_004233e8)(auStack_80);
    (*(code *)PTR_write_00423510)(iVar1,auStack_80,uVar2);
    (*(code *)PTR_sprintf_0042344c)(auStack_80,"%s\n",&DAT_00411488);
    uVar2 = (*(code *)PTR_strlen_004233e8)(auStack_80);
    (*(code *)PTR_write_00423510)(iVar1,auStack_80,uVar2);
    (*(code *)PTR_close_004233ac)(iVar1);
  }
  return;
}


/* FUN_00407d14 @ 00407d14 */

void FUN_00407d14(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_80 [104];
  
  iVar1 = (*(code *)PTR_open_004233e0)(param_1,0x302,0x3f);
  if (iVar1 < 0) {
    (*(code *)PTR_fprintf_0042350c)
              (*(undefined4 *)PTR_stderr_00423444,
               "\nFILE %s FUNCTION %s LINE %d: Create %s file error!\n\n","utility.c",
               "Create_bound_script",0x167,param_1);
  }
  else {
    (*(code *)PTR_strcpy_004235e0)(auStack_80,"#!/bin/sh\n");
    uVar2 = (*(code *)PTR_strlen_004233e8)(auStack_80);
    (*(code *)PTR_write_00423510)(iVar1,auStack_80,uVar2);
    (*(code *)PTR_sprintf_0042344c)(auStack_80,"%s\n","if [ \"$router\" ];then");
    uVar2 = (*(code *)PTR_strlen_004233e8)(auStack_80);
    (*(code *)PTR_write_00423510)(iVar1,auStack_80,uVar2);
    (*(code *)PTR_sprintf_0042344c)
              (auStack_80,"%s\n","sysconf conn dhcp $interface p2p a=$ip M=$subnet r=$router d=$dns"
              );
    uVar2 = (*(code *)PTR_strlen_004233e8)(auStack_80);
    (*(code *)PTR_write_00423510)(iVar1,auStack_80,uVar2);
    (*(code *)PTR_sprintf_0042344c)(auStack_80,"%s\n",&DAT_004113ec);
    uVar2 = (*(code *)PTR_strlen_004233e8)(auStack_80);
    (*(code *)PTR_write_00423510)(iVar1,auStack_80,uVar2);
    (*(code *)PTR_sprintf_0042344c)(auStack_80,"%s\n","if [ \"$serverid\" ];then");
    uVar2 = (*(code *)PTR_strlen_004233e8)(auStack_80);
    (*(code *)PTR_write_00423510)(iVar1,auStack_80,uVar2);
    (*(code *)PTR_sprintf_0042344c)
              (auStack_80,"%s\n",
               "sysconf conn dhcp $interface p2p a=$ip M=$subnet s=$serverid d=$dns");
    uVar2 = (*(code *)PTR_strlen_004233e8)(auStack_80);
    (*(code *)PTR_write_00423510)(iVar1,auStack_80,uVar2);
    (*(code *)PTR_sprintf_0042344c)(auStack_80,"%s\n",&DAT_004113ec);
    uVar2 = (*(code *)PTR_strlen_004233e8)(auStack_80);
    (*(code *)PTR_write_00423510)(iVar1,auStack_80,uVar2);
    (*(code *)PTR_sprintf_0042344c)
              (auStack_80,"%s\n","sysconf conn dhcp p2p $interface a=$ip M=$subnet d=$dns");
    uVar2 = (*(code *)PTR_strlen_004233e8)(auStack_80);
    (*(code *)PTR_write_00423510)(iVar1,auStack_80,uVar2);
    (*(code *)PTR_sprintf_0042344c)(auStack_80,"%s\n",&DAT_00411488);
    uVar2 = (*(code *)PTR_strlen_004233e8)(auStack_80);
    (*(code *)PTR_write_00423510)(iVar1,auStack_80,uVar2);
    (*(code *)PTR_sprintf_0042344c)(auStack_80,"%s\n",&DAT_00411488);
    uVar2 = (*(code *)PTR_strlen_004233e8)(auStack_80);
    (*(code *)PTR_write_00423510)(iVar1,auStack_80,uVar2);
    (*(code *)PTR_close_004233ac)(iVar1);
  }
  return;
}


/* write_line_to_file @ 004080f0 */

undefined4 write_line_to_file(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_210 [512];
  
  if (param_2 == 1) {
    uVar2 = 0x302;
  }
  else {
    iVar1 = 0;
    if (param_2 != 2) goto LAB_00408190;
    uVar2 = 10;
  }
  iVar1 = (*(code *)PTR_open_004233e0)(param_1,uVar2);
  if (iVar1 < 0) {
    (*(code *)PTR_fprintf_0042350c)
              (*(undefined4 *)PTR_stderr_00423444,
               "\nFILE %s FUNCTION %s LINE %d: Create %s error!\n\n","utility.c",
               "write_line_to_file",0xfe,param_1);
    return 0;
  }
LAB_00408190:
  (*(code *)PTR_strcpy_004235e0)(auStack_210,param_3);
  uVar2 = (*(code *)PTR_strlen_004233e8)(auStack_210);
  (*(code *)PTR_write_00423510)(iVar1,auStack_210,uVar2);
  (*(code *)PTR_close_004233ac)(iVar1);
  return 1;
}


/* FUN_0040820c @ 0040820c */

void FUN_0040820c(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_118 [260];
  
  iVar1 = (*(code *)PTR_open_004233e0)(param_1,0x302,0x3f);
  if (iVar1 < 0) {
    (*(code *)PTR_fprintf_0042350c)
              (*(undefined4 *)PTR_stderr_00423444,
               "\nFILE %s FUNCTION %s LINE %d: Create %s file error!\n\n","utility.c",
               "Create_script",0xb1,param_1);
  }
  else {
    if (param_3 == 0) {
      (*(code *)PTR_strcpy_004235e0)(auStack_118,"#!/bin/sh\n");
      uVar2 = (*(code *)PTR_strlen_004233e8)(auStack_118);
      (*(code *)PTR_write_00423510)(iVar1,auStack_118,uVar2);
      (*(code *)PTR_sprintf_0042344c)
                (auStack_118,"echo \"Enter Deconfig Script Since DONOT Get IP address for  %s\"\n",
                 param_2);
      uVar2 = (*(code *)PTR_strlen_004233e8)(auStack_118);
      (*(code *)PTR_write_00423510)(iVar1,auStack_118,uVar2);
    }
    (*(code *)PTR_close_004233ac)(iVar1);
  }
  return;
}


/* SetWlan_idx @ 00408368 */

undefined4 SetWlan_idx(int param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  char *pcVar7;
  int iVar8;
  
  iVar8 = param_1 + 4;
  iVar4 = (*(code *)PTR_atoi_004233f8)(iVar8);
  puVar3 = PTR_vwlan_idx_00423500;
  puVar2 = PTR_wlan_idx_004234ec;
  puVar1 = PTR_strlen_004233e8;
  if (0 < iVar4) {
    pcVar7 = "invalid wlan interface index number!";
LAB_00408440:
    (*(code *)PTR_puts_00423564)(pcVar7);
    return 0;
  }
  *(int *)PTR_wlan_idx_004234ec = iVar4;
  *(undefined4 *)puVar3 = 0;
  uVar5 = (*(code *)puVar1)(param_1);
  if ((((8 < uVar5) && (*(char *)(param_1 + 5) == '-')) && (*(char *)(param_1 + 6) == 'v')) &&
     (*(char *)(param_1 + 7) == 'a')) {
    iVar4 = (*(code *)PTR_atoi_004233f8)(param_1 + 8);
    puVar1 = PTR_atoi_004233f8;
    if (4 < iVar4) {
      pcVar7 = "invalid virtual wlan interface index number!";
      goto LAB_00408440;
    }
    *(int *)puVar3 = iVar4 + 1;
    uVar6 = (*(code *)puVar1)(iVar8);
    *(undefined4 *)puVar2 = uVar6;
  }
  uVar5 = (*(code *)PTR_strlen_004233e8)(param_1);
  if (8 < uVar5) {
    if (*(char *)(param_1 + 5) != '-') {
      return 1;
    }
    iVar4 = (*(code *)PTR_memcmp_004234c4)(param_1 + 6,&DAT_0041161c,3);
    puVar1 = PTR_atoi_004233f8;
    if (iVar4 == 0) {
      *(undefined4 *)PTR_vwlan_idx_00423500 = 5;
      uVar6 = (*(code *)puVar1)(iVar8);
      *(undefined4 *)PTR_wlan_idx_004234ec = uVar6;
      return 1;
    }
  }
  return 1;
}


/* set_lan_dhcpc @ 00408508 */

void set_lan_dhcpc(undefined4 param_1)

{
  undefined4 uVar1;
  undefined1 auStack_2c8 [32];
  undefined4 local_2a8 [8];
  undefined1 auStack_288 [32];
  undefined1 auStack_268 [32];
  undefined1 auStack_248 [32];
  undefined1 auStack_228 [100];
  undefined1 auStack_1c4 [100];
  undefined1 auStack_160 [100];
  undefined1 auStack_fc [204];
  undefined4 *local_30;
  
  (*(code *)PTR_memset_00423490)(auStack_2c8,0,0x1f);
  (*(code *)PTR_system_00423558)("killall -9 udhcpc 2> /dev/null");
  (*(code *)PTR_system_00423558)("rm -f /etc/udhcpc/udhcpc-br0.pid 2> /dev/null");
  FUN_00407938("/usr/share/udhcpc/br0.bound");
  (*(code *)PTR_sprintf_0042344c)(auStack_228,"/usr/share/udhcpc/%s.sh",param_1);
  (*(code *)PTR_sprintf_0042344c)(auStack_1c4,"/usr/share/udhcpc/%s.deconfig",param_1);
  (*(code *)PTR_sprintf_0042344c)(auStack_160,"/etc/udhcpc/udhcpc-%s.pid",param_1);
  local_30 = local_2a8;
  (*(code *)PTR_apmib_get_0042354c)(0xaa,local_30);
  uVar1 = (*(code *)PTR_inet_ntoa_00423478)(local_2a8[0]);
  (*(code *)PTR_strcpy_004235e0)(auStack_288,uVar1);
  (*(code *)PTR_apmib_get_0042354c)(0xab,local_30);
  uVar1 = (*(code *)PTR_inet_ntoa_00423478)(local_2a8[0]);
  (*(code *)PTR_strcpy_004235e0)(auStack_268,uVar1);
  (*(code *)PTR_apmib_get_0042354c)(0xac,local_30);
  uVar1 = (*(code *)PTR_inet_ntoa_00423478)(local_2a8[0]);
  (*(code *)PTR_strcpy_004235e0)(auStack_248,uVar1);
  (*(code *)PTR_sprintf_0042344c)(auStack_fc,"ifconfig %s 0.0.0.0",param_1);
  (*(code *)PTR_system_00423558)(auStack_fc);
  FUN_0040820c(auStack_1c4,param_1,0,auStack_288,auStack_268,auStack_248);
  (*(code *)PTR_apmib_get_0042354c)(0x2b1,auStack_2c8);
  (*(code *)PTR_sprintf_0042344c)
            (auStack_fc,"udhcpc -i %s -p %s -s %s -h  \'%s\' &",param_1,auStack_160,auStack_228,
             auStack_2c8);
  (*(code *)PTR_system_00423558)(auStack_fc);
  return;
}


/* pidfile_write_release @ 004087ac */

void pidfile_write_release(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (-1 < param_1) {
    iVar1 = (*(code *)PTR_fdopen_004234bc)(param_1,&DAT_00411144);
    if (iVar1 != 0) {
      uVar2 = (*(code *)PTR_getpid_00423594)();
      (*(code *)PTR_fprintf_0042350c)(iVar1,&DAT_00411140,uVar2);
      (*(code *)PTR_fclose_00423480)(iVar1);
    }
    (*(code *)PTR_lockf_00423488)(param_1,2,0);
                    /* WARNING: Could not recover jumptable at 0x00408864. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR_close_004233ac)(param_1);
    return;
  }
  return;
}


/* pidfile_acquire @ 00408880 */

int pidfile_acquire(int param_1)

{
  int iVar1;
  
  iVar1 = -1;
  if (param_1 != 0) {
    iVar1 = (*(code *)PTR_open_004233e0)(param_1,0x101,0x1a4);
    if (iVar1 < 0) {
      (*(code *)PTR_printf_004235c0)("Unable to open pidfile %s\n",param_1);
    }
    else {
      (*(code *)PTR_lockf_00423488)(iVar1,1,0);
    }
  }
  return iVar1;
}


/* FUN_0040890c @ 0040890c */

void FUN_0040890c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  (*(code *)PTR_strncpy_004234dc)(param_4,param_2,0x10);
                    /* WARNING: Could not recover jumptable at 0x00408968. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_ioctl_004235d0)(param_1,param_3,param_4);
  return;
}


/* FUN_00408970 @ 00408970 */

undefined4 FUN_00408970(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_38 [16];
  undefined4 local_28;
  undefined2 local_24;
  
  iVar1 = (*(code *)PTR_socket_00423548)(2,1,0);
  if (iVar1 != -1) {
    iVar2 = FUN_0040890c(iVar1,param_1,0x8b01,auStack_38);
    if (-1 < iVar2) {
      local_24 = 0x2c;
      local_28 = param_2;
      iVar2 = FUN_0040890c(iVar1,param_1,0x8b37,auStack_38);
      if (-1 < iVar2) {
        (*(code *)PTR_close_004233ac)(iVar1);
        return 0;
      }
    }
    (*(code *)PTR_close_004233ac)(iVar1);
  }
  return 0xffffffff;
}


/* Check_Wlan_isConnected @ 00408a58 */

bool Check_Wlan_isConnected(int param_1,undefined4 param_2,undefined4 param_3)

{
  char *pcVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  bool bVar6;
  char *pcVar7;
  bool bVar8;
  char local_148 [12];
  byte local_13c [44];
  char local_110 [100];
  undefined1 auStack_ac [132];
  
  if (param_1 == 1) {
    (*(code *)PTR_sprintf_0042344c)(auStack_ac,"/proc/%s/sta_info");
    iVar2 = (*(code *)PTR_fopen_00423498)(auStack_ac,&DAT_00411fe4);
    if (iVar2 == 0) {
      bVar6 = false;
    }
    else {
      bVar8 = false;
      bVar6 = false;
      do {
        iVar4 = (*(code *)PTR_fgets_00423588)(local_110,100,iVar2);
        pcVar1 = local_110;
        if (iVar4 == 0) goto LAB_00408c10;
        do {
          pcVar7 = pcVar1;
          pcVar1 = pcVar7 + 1;
        } while (*pcVar7 == ' ');
        iVar4 = (*(code *)PTR_strstr_004234f8)(pcVar7,"active");
        if (iVar4 != 0) {
          (*(code *)PTR_sscanf_004234b4)(pcVar7,"%*[^:]:%[^)]",local_148);
          pcVar1 = local_148;
          do {
            pcVar5 = pcVar1;
            pcVar1 = pcVar5 + 1;
          } while (*pcVar5 == ' ');
          iVar4 = (*(code *)PTR_strcmp_00423464)(pcVar5,&DAT_00411f80);
          bVar8 = iVar4 != 0;
          bVar6 = bVar8;
        }
        iVar4 = (*(code *)PTR_strstr_004234f8)(pcVar7,"hwaddr");
      } while (iVar4 == 0);
      uVar3 = (*(code *)PTR_strlen_004233e8)(local_110);
      iVar4 = (*(code *)PTR_memcmp_004234c4)(local_110,param_2,uVar3);
      if (iVar4 != 0) {
        (*(code *)PTR_memcpy_0042357c)(param_2,local_110,uVar3);
      }
LAB_00408c10:
      (*(code *)PTR_fclose_00423480)(iVar2);
      if ((bVar6 != false) && (bVar8 == bVar6)) {
        FUN_00408970(param_3,local_13c);
        if (local_13c[0] == 4) {
          *(undefined4 *)PTR_ClientBSSConnectionSTATE_004235e4 = 4;
        }
        else {
          if ((*(int *)PTR_LastClientBSSConnectionSTATE_004233b4 != 4) ||
             (*(uint *)PTR_ClientBSSConnectionSTATEChange_004233c8 < 0xb)) {
            *(int *)PTR_ClientBSSConnectionSTATEChange_004233c8 =
                 *(int *)PTR_ClientBSSConnectionSTATEChange_004233c8 + 1;
            return bVar6;
          }
          *(undefined4 *)PTR_ClientBSSConnectionSTATEChange_004233c8 = 0;
          bVar6 = false;
        }
        *(uint *)PTR_LastClientBSSConnectionSTATE_004233b4 = (uint)local_13c[0];
      }
    }
  }
  else {
    bVar6 = false;
  }
  return bVar6;
}


/* FUN_00408cf8 @ 00408cf8 */

undefined4 FUN_00408cf8(undefined4 param_1,undefined4 *param_2,int param_3)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  undefined4 local_40;
  undefined4 local_3c;
  undefined1 auStack_38 [16];
  undefined4 *local_28;
  undefined2 local_24;
  
  iVar2 = (*(code *)PTR_socket_00423548)(2,1,0);
  if (iVar2 != -1) {
    iVar3 = FUN_0040890c(iVar2,param_1,0x8b01,auStack_38);
    if (-1 < iVar3) {
      local_3c = 0xa5;
      if (param_3 != 1) {
        local_3c = 0;
      }
      local_40 = 0;
      local_28 = &local_40;
      local_24 = 8;
      iVar3 = FUN_0040890c(iVar2,param_1,0x8bc9,auStack_38);
      puVar1 = PTR_close_004233ac;
      if (-1 < iVar3) {
        param_2[1] = local_3c;
        *param_2 = local_40;
        (*(code *)puVar1)(iVar2);
        return 0;
      }
    }
    (*(code *)PTR_close_004233ac)(iVar2);
  }
  return 0xffffffff;
}


/* getWispRptIfaceName @ 00408e10 */

/* WARNING: Type propagation algorithm not settling */

undefined4 getWispRptIfaceName(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  int local_30;
  int local_2c;
  int local_28 [6];
  
  local_30 = 0;
  local_2c = 0;
  local_28[0] = 0;
  local_28[1] = 0;
  local_28[2] = 0;
  local_28[3] = 0;
  local_28[4] = 0;
  if (param_2 == 0) {
    uVar3 = 0xfa;
  }
  else {
    if (param_2 != 1) {
      return 0xffffffff;
    }
    uVar3 = 0xfc;
  }
  (*(code *)PTR_apmib_get_0042354c)(uVar3,&local_30);
  (*(code *)PTR_apmib_get_0042354c)(0xc0,local_28);
  uVar3 = 0xffffffff;
  if (local_28[0] == 2) {
    (*(code *)PTR_apmib_save_wlanIdx_004234cc)();
    (*(code *)PTR_sprintf_0042344c)(local_28 + 1,&DAT_004117f0,param_2);
    (*(code *)PTR_SetWlan_idx_00423580)(local_28 + 1);
    (*(code *)PTR_apmib_get_0042354c)(0x3b,&local_2c);
    if (((local_2c == 0) || (local_2c == 3)) && (local_30 != 0)) {
      iVar1 = (*(code *)PTR_strstr_004234f8)(param_1,&DAT_004117f8);
      if (iVar1 == 0) {
        (*(code *)PTR_strcat_00423508)(param_1,&DAT_004117f8);
      }
    }
    else {
      puVar2 = (undefined1 *)(*(code *)PTR_strstr_004234f8)(param_1,&DAT_004117f8);
      if (puVar2 != (undefined1 *)0x0) {
        puVar2[3] = 0;
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2[2] = 0;
      }
    }
    (*(code *)PTR_apmib_recov_wlanIdx_00423514)();
    uVar3 = 0;
  }
  return uVar3;
}


/* FUN_00408fc4 @ 00408fc4 */

void FUN_00408fc4(undefined4 param_1)

{
  int local_218;
  undefined1 auStack_214 [516];
  
  local_218 = -1;
  (*(code *)PTR_memset_00423490)(auStack_214,0,0x200);
  (*(code *)PTR_apmib_get_0042354c)(0xc0,&local_218);
  if (DAT_0042387c != '\0') {
    (*(code *)PTR_strcat_00423508)(auStack_214,&DAT_0042387c);
    (*(code *)PTR_strcat_00423508)(auStack_214," ");
  }
  if (DAT_00423af8._0_1_ != '\0') {
    (*(code *)PTR_strcat_00423508)(auStack_214,&DAT_00423af8);
    (*(code *)PTR_strcat_00423508)(auStack_214," ");
  }
  if (DAT_00423a9c != '\0') {
    (*(code *)PTR_strcat_00423508)(auStack_214,&DAT_00423a9c);
    (*(code *)PTR_strcat_00423508)(auStack_214," ");
  }
  if (DAT_00423b08 != '\0') {
    (*(code *)PTR_strcat_00423508)(auStack_214,&DAT_00423b08);
    (*(code *)PTR_strcat_00423508)(auStack_214," ");
  }
  (*(code *)PTR_strcat_00423508)(auStack_214,&DAT_0042383c);
  (*(code *)PTR_strcat_00423508)(auStack_214," ");
  (*(code *)PTR_strcat_00423508)(auStack_214,&DAT_0042384c);
  if (local_218 - 1U < 2) {
    (*(code *)PTR_strcat_00423508)(auStack_214," ");
    (*(code *)PTR_strcat_00423508)(auStack_214,&DAT_0042385c);
  }
  (*(code *)PTR_memcpy_0042357c)(param_1,auStack_214,0x200);
  return;
}


/* FUN_004091fc @ 004091fc */

undefined4 FUN_004091fc(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_120 [13];
  undefined1 auStack_113 [243];
  
  (*(code *)PTR_memcpy_0042357c)(auStack_120,"/etc/udhcpc/",0xd);
  (*(code *)PTR_memset_00423490)(auStack_113,0,0xf3);
  iVar1 = (*(code *)PTR_opendir_00423470)("/etc/udhcpc");
  if (iVar1 == 0) {
    (*(code *)PTR_printf_004235c0)("Cannot open /etc/udhcpc");
    uVar2 = 0xffffffff;
  }
  else {
    while( true ) {
      iVar4 = (*(code *)PTR_readdir_00423544)(iVar1);
      iVar5 = iVar4 + 0xb;
      if (iVar4 == 0) break;
      iVar3 = (*(code *)PTR_strncmp_004234e4)("udhcpc-",iVar5,7);
      if (iVar3 == 0) {
        iVar3 = (*(code *)PTR_strlen_004233e8)(iVar5);
        iVar4 = (*(code *)PTR_strncmp_004234e4)(".pid",iVar4 + iVar3 + 7,4);
        if (iVar4 == 0) {
          (*(code *)PTR_strcpy_004235e0)(auStack_120,"/etc/udhcpc/");
          (*(code *)PTR_strcat_00423508)(auStack_120,iVar5);
          (*(code *)PTR_killDaemonByPidFile_004234b0)(auStack_120);
        }
      }
    }
    uVar2 = 0;
  }
  return uVar2;
}


/* FUN_004093ac @ 004093ac */

void FUN_004093ac(int param_1)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  undefined1 auStack_f0 [12];
  undefined1 auStack_e4 [204];
  undefined1 *local_18;
  
  iVar1 = (*(code *)PTR_isFileExist_004233d8)("/proc/hw_nat");
  if (iVar1 == 0) {
    iVar1 = (*(code *)PTR_isFileExist_004233d8)("/proc/sw_nat");
    if (iVar1 == 0) goto LAB_0040953c;
    if (param_1 == 0) {
      pcVar2 = "/proc/sw_nat";
      pcVar3 = "0";
    }
    else {
      if (param_1 == 1) {
        pcVar2 = "/proc/sw_nat";
        goto LAB_004094b0;
      }
      if (param_1 == 2) {
        pcVar2 = "/proc/sw_nat";
        goto LAB_004094d4;
      }
      if (param_1 == 3) {
        pcVar2 = "/proc/sw_nat";
        goto LAB_004094f8;
      }
      if (param_1 != 4) goto LAB_0040953c;
      pcVar2 = "/proc/sw_nat";
      pcVar3 = "4";
    }
  }
  else if (param_1 == 0) {
    pcVar2 = "/proc/hw_nat";
LAB_004094b0:
    pcVar3 = "1";
  }
  else if (param_1 == 1) {
    pcVar2 = "/proc/hw_nat";
LAB_004094d4:
    pcVar3 = "2";
  }
  else if (param_1 == 2) {
    pcVar2 = "/proc/hw_nat";
LAB_004094f8:
    pcVar3 = "3";
  }
  else if (param_1 == 3) {
    pcVar2 = "/proc/hw_nat";
    pcVar3 = "4";
  }
  else {
    pcVar2 = "/proc/hw_nat";
    pcVar3 = "5";
  }
  (*(code *)PTR_RunSystemCmd_00423428)(pcVar2,&DAT_00411830,pcVar3,"");
LAB_0040953c:
  (*(code *)PTR_RunSystemCmd_00423428)(0,"killall",&DAT_0041185c,"miniigd","");
  iVar1 = (*(code *)PTR_isFileExist_004233d8)("/var/run/miniupnpd.pid");
  if (iVar1 != 0) {
    (*(code *)PTR_unlink_004234d8)("/var/run/miniupnpd.pid");
  }
  (*(code *)PTR_RunSystemCmd_00423428)(0,"killall",&DAT_0041185c,"routed","");
  iVar1 = (*(code *)PTR_isFileExist_004233d8)("/var/run/routed.pid");
  if (iVar1 != 0) {
    (*(code *)PTR_unlink_004234d8)("/var/run/routed.pid");
  }
  (*(code *)PTR_RunSystemCmd_00423428)(0,&DAT_0041189c,&DAT_004118a0,"/etc/ppp/first","");
  (*(code *)PTR_RunSystemCmd_00423428)(0,&DAT_0041189c,&DAT_004118a0,"/etc/ppp/firstpptp","");
  (*(code *)PTR_RunSystemCmd_00423428)(0,&DAT_0041189c,&DAT_004118a0,"/etc/ppp/firstl2tp","");
  (*(code *)PTR_RunSystemCmd_00423428)(0,&DAT_0041189c,&DAT_004118a0,"/etc/ppp/firstdemand","");
  (*(code *)PTR_RunSystemCmd_00423428)(0,"killall",&DAT_004112cc,"timelycheck","");
  (*(code *)PTR_RunSystemCmd_00423428)(0,"killall",&DAT_004112cc,&DAT_00411900,"");
  (*(code *)PTR_RunSystemCmd_00423428)(0,"killall",&DAT_004112cc,"ntp_inet","");
  (*(code *)PTR_RunSystemCmd_00423428)(0,"killall",&DAT_004112cc,"ddns.sh","");
  (*(code *)PTR_RunSystemCmd_00423428)(0,"killall",&DAT_004112cc,"syslogd","");
  (*(code *)PTR_RunSystemCmd_00423428)(0,"killall",&DAT_004112cc,"klogd","");
  (*(code *)PTR_RunSystemCmd_00423428)(0,"killall",&DAT_004112cc,"mini_upnpd","");
  (*(code *)PTR_RunSystemCmd_00423428)(0,"killall",&DAT_004112cc,"reload","");
  iVar1 = (*(code *)PTR_isFileExist_004233d8)("/var/run/l2tpd.pid");
  if (iVar1 != 0) {
    iVar1 = (*(code *)PTR_getPid_fromFile_004235b0)("/var/run/l2tpd.pid");
    if (iVar1 != 0) {
      local_18 = auStack_f0;
      (*(code *)PTR_sprintf_0042344c)(auStack_f0,&DAT_004117f4,iVar1);
      (*(code *)PTR_RunSystemCmd_00423428)(0,&DAT_004112c4,&DAT_004112cc,local_18,"");
    }
    (*(code *)PTR_unlink_004234d8)("/var/run/l2tpd.pid");
  }
  FUN_004091fc();
  (*(code *)PTR_sprintf_0042344c)(auStack_e4,"/etc/udhcpc/udhcpc-%s.pid",&DAT_00410768);
  iVar1 = (*(code *)PTR_isFileExist_004233d8)(auStack_e4);
  if (iVar1 != 0) {
    (*(code *)PTR_unlink_004234d8)(auStack_e4);
  }
  iVar1 = (*(code *)PTR_isFileExist_004233d8)("/var/run/dnrd.pid");
  if (iVar1 != 0) {
    iVar1 = (*(code *)PTR_getPid_fromFile_004235b0)("/var/run/dnrd.pid");
    if (iVar1 != 0) {
      local_18 = auStack_f0;
      (*(code *)PTR_sprintf_0042344c)(auStack_f0,&DAT_004117f4,iVar1);
      (*(code *)PTR_RunSystemCmd_00423428)(0,&DAT_004112c4,&DAT_004112cc,local_18,"");
    }
    (*(code *)PTR_unlink_004234d8)("/var/run/dnrd.pid");
  }
  iVar1 = (*(code *)PTR_isFileExist_004233d8)("/var/run/igmp_pid");
  if (iVar1 != 0) {
    iVar1 = (*(code *)PTR_getPid_fromFile_004235b0)("/var/run/igmp_pid");
    if (iVar1 != 0) {
      local_18 = auStack_f0;
      (*(code *)PTR_sprintf_0042344c)(local_18,&DAT_004117f4,iVar1);
      (*(code *)PTR_RunSystemCmd_00423428)(0,&DAT_004112c4,&DAT_004112cc,local_18,"");
    }
    (*(code *)PTR_unlink_004234d8)("/var/run/igmp_pid");
    (*(code *)PTR_RunSystemCmd_00423428)("/proc/br_mCastFastFwd",&DAT_00411830,&DAT_00411990,"");
  }
  iVar1 = (*(code *)PTR_isFileExist_004233d8)("/var/run/lld2d-br0.pid");
  if (iVar1 != 0) {
    iVar1 = (*(code *)PTR_getPid_fromFile_004235b0)("/var/run/lld2d-br0.pid");
    if (iVar1 != 0) {
      local_18 = auStack_f0;
      (*(code *)PTR_sprintf_0042344c)(auStack_f0,&DAT_004117f4,iVar1);
      (*(code *)PTR_RunSystemCmd_00423428)(0,&DAT_004112c4,&DAT_004112cc,local_18,"");
    }
    (*(code *)PTR_unlink_004234d8)("/var/run/lld2d-br0.pid");
  }
  iVar1 = (*(code *)PTR_isFileExist_004233d8)("/var/run/udhcpd.pid");
  if (iVar1 != 0) {
    iVar1 = (*(code *)PTR_getPid_fromFile_004235b0)("/var/run/udhcpd.pid");
    if (iVar1 != 0) {
      (*(code *)PTR_RunSystemCmd_00423428)(0,&DAT_004112c4,&DAT_004112cc,auStack_f0,"");
    }
    (*(code *)PTR_unlink_004234d8)("/var/run/udhcpd.pid");
  }
  return;
}


/* FUN_00409b7c @ 00409b7c */

void FUN_00409b7c(int param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int local_f8;
  int local_f4;
  int local_f0;
  undefined1 local_ec [20];
  uint local_d8;
  uint local_d4;
  undefined1 auStack_d0 [64];
  undefined1 auStack_90 [104];
  
  local_f8 = 0;
  local_f4 = 0;
  local_f0 = 0;
  (*(code *)PTR_memset_00423490)(auStack_d0,0,0x40);
  puVar2 = PTR_apmib_get_0042354c;
  puVar1 = PTR_vwlan_idx_00423500;
  *(int *)PTR_wlan_idx_004234ec = param_1;
  uVar6 = *(undefined4 *)puVar1;
  *(undefined4 *)puVar1 = 0;
  (*(code *)puVar2)(0x16,&local_f8);
  (*(code *)PTR_sprintf_0042344c)(auStack_d0,"/var/wlsch.conf%d",param_1);
  (*(code *)PTR_unlink_004234d8)(auStack_d0);
  if (local_f8 == 0) {
    (*(code *)PTR_apmib_get_0042354c)(0x1f7,&local_f4);
    (*(code *)PTR_apmib_get_0042354c)(0x1f8,&local_f0);
    if (local_f4 == 1) {
      iVar5 = 1;
      if (0 < local_f0) {
        for (iVar4 = 1; iVar4 <= local_f0; iVar4 = iVar4 + 1) {
          local_ec[0] = (undefined1)iVar4;
          (*(code *)PTR_apmib_get_0042354c)(0x81f9,local_ec);
          (*(code *)PTR_memset_00423490)(auStack_90,0,100);
          if (local_d8 >> 0x10 == 1) {
            if (((local_d8 & 0xffff) != 0) || (local_d4._0_2_ != 0)) {
              (*(code *)PTR_sprintf_0042344c)
                        (auStack_90,"%d,%d,%d,%d\n",iVar4,local_d4 & 0xffff,local_d8 & 0xffff,
                         local_d4 >> 0x10);
              (*(code *)PTR_sprintf_0042344c)(auStack_d0,"/var/wlsch.conf%d",param_1);
              uVar3 = 2;
              if (iVar5 == 1) {
                uVar3 = 1;
              }
              (*(code *)PTR_write_line_to_file_00423554)(auStack_d0,uVar3,auStack_90);
              iVar5 = 2;
            }
          }
        }
      }
    }
    if (param_1 != 0) goto LAB_00409e00;
    (*(code *)PTR_sprintf_0042344c)(auStack_d0,"reload -k %s &","/var/wlsch.conf");
  }
  else {
    if (param_1 != 0) goto LAB_00409e00;
    (*(code *)PTR_sprintf_0042344c)(auStack_d0,"reload -k %s &","/var/wlsch.conf");
  }
  (*(code *)PTR_system_00423558)(auStack_d0);
LAB_00409e00:
  *(undefined4 *)PTR_vwlan_idx_00423500 = 0;
  *(undefined4 *)PTR_wlan_idx_004234ec = uVar6;
  return;
}


/* FUN_00409e48 @ 00409e48 */

void FUN_00409e48(int param_1)

{
  char *pcVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  char local_90 [132];
  
  (*(code *)PTR_memset_00423490)(local_90,0,0x80);
  if (param_1 == 1) {
    if (DAT_00423af8._0_1_ == '\0') goto LAB_00409fe0;
    if (DAT_00423a9c == '\0') {
      if (DAT_00423b08 == '\0') goto joined_r0x00409fb4;
      if (DAT_0042383c == '\0') goto LAB_00409fe0;
      puVar3 = &DAT_0042383c;
      pcVar1 = "%s %s %s";
      puVar2 = &DAT_00423b08;
    }
    else {
      if (DAT_00423b08 == '\0') {
        if (DAT_0042383c == '\0') goto LAB_00409fe0;
        puVar3 = &DAT_0042383c;
        pcVar1 = "%s %s %s";
      }
      else {
        if (DAT_0042383c == '\0') goto LAB_00409fe0;
        puVar3 = &DAT_00423b08;
        pcVar1 = "%s %s %s %s";
      }
      puVar2 = &DAT_00423a9c;
    }
    (*(code *)PTR_sprintf_0042344c)(local_90,pcVar1,&DAT_00423af8,puVar2,puVar3);
  }
  else {
    if (DAT_00423af8._0_1_ == '\0') goto LAB_00409fe0;
joined_r0x00409fb4:
    if (DAT_0042383c != '\0') {
      (*(code *)PTR_sprintf_0042344c)(local_90,"%s %s",&DAT_00423af8,&DAT_0042383c);
    }
  }
LAB_00409fe0:
  (*(code *)PTR_RunSystemCmd_00423428)("/proc/gpio",&DAT_00411830,&DAT_00411a30,"");
  if (local_90[0] != '\0') {
    (*(code *)PTR_setWlan_Applications_004235c4)("start",local_90);
  }
  return;
}


/* FUN_0040a03c @ 0040a03c */

void FUN_0040a03c(void)

{
  int iVar1;
  undefined4 uVar2;
  int local_80;
  int local_7c;
  undefined4 local_78 [8];
  undefined1 auStack_58 [32];
  undefined1 auStack_38 [36];
  
  local_80 = 0;
  local_7c = 0;
  (*(code *)PTR_apmib_get_0042354c)(0xb8,&local_80);
  if (((((local_80 != 0) && (local_80 != 2)) && (local_80 != 4)) &&
      ((local_80 != 6 && (local_80 != 8)))) &&
     ((local_80 != 10 && ((local_80 != 0xc && (local_80 != 0xe)))))) {
    (*(code *)PTR_apmib_get_0042354c)(0xe3,&local_7c);
    if (local_7c == 0) {
      (*(code *)PTR_system_00423558)("rm /var/log/log_split >/dev/null 2>&1");
      (*(code *)PTR_sprintf_0042344c)(local_78,"echo %d > /var/log/log_split",7);
      (*(code *)PTR_system_00423558)(local_78);
      (*(code *)PTR_sprintf_0042344c)(local_78,&DAT_004117f4,8);
      (*(code *)PTR_sprintf_0042344c)(auStack_58,&DAT_004117f4,7);
      (*(code *)PTR_fprintf_0042350c)
                (*(undefined4 *)PTR_stderr_00423444,
                 "syslog will use %dKB for log(%d rotate, 1 original, %dKB for each)\n",0x40,7,8);
      (*(code *)PTR_RunSystemCmd_00423428)
                (0,"syslogd",&DAT_00411ac8,&DAT_00411ad0,local_78,&DAT_00411ad4,auStack_58,"");
    }
    else {
      (*(code *)PTR_apmib_get_0042354c)(0xe4,local_78);
      iVar1 = (*(code *)PTR_memcmp_004234c4)(local_78,&DAT_00411ee0,4);
      if (iVar1 != 0) {
        uVar2 = (*(code *)PTR_inet_ntoa_00423478)(local_78[0]);
        (*(code *)PTR_strcpy_004235e0)(auStack_38,uVar2);
        (*(code *)PTR_system_00423558)("rm /var/log/log_split >/dev/null 2>&1");
        (*(code *)PTR_sprintf_0042344c)(local_78,"echo %d > /var/log/log_split",7);
        (*(code *)PTR_system_00423558)(local_78);
        (*(code *)PTR_sprintf_0042344c)(local_78,&DAT_004117f4,8);
        (*(code *)PTR_sprintf_0042344c)(auStack_58,&DAT_004117f4,7);
        (*(code *)PTR_fprintf_0042350c)
                  (*(undefined4 *)PTR_stderr_00423444,
                   "syslog will use %dKB for log(%d rotate, 1 original, %dKB for each)\n",0x40,7,8);
        (*(code *)PTR_RunSystemCmd_00423428)
                  (0,"syslogd",&DAT_00411ac8,&DAT_00411acc,auStack_38,&DAT_00411ad0,local_78,
                   &DAT_00411ad4,auStack_58,"");
      }
    }
    (*(code *)PTR_RunSystemCmd_00423428)(0,"klogd","");
  }
  return;
}


/* setinit @ 0040a388 */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

undefined4 setinit(void)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  undefined4 *puVar5;
  char *pcVar6;
  undefined *puVar7;
  bool bVar8;
  code *pcVar9;
  int local_298;
  uint local_294;
  int local_290 [11];
  undefined1 *local_264;
  undefined4 local_260;
  undefined4 local_25c;
  undefined2 local_258;
  undefined4 auStack_254 [4];
  undefined4 local_244;
  undefined4 local_240;
  undefined4 local_23c;
  undefined4 local_238;
  undefined1 auStack_234 [516];
  char *local_30;
  
  local_298 = -1;
  local_294 = 0;
  local_290[0] = 0;
  local_290[1] = 0;
  local_290[2] = 0;
  local_290[3] = 0;
  local_290[4] = 0;
  local_290[5] = 0;
  local_290[6] = 0;
  local_290[7] = 0;
  local_290[8] = 0;
  iVar2 = (*(code *)PTR_isFileExist_004233d8)("/var/reinit");
  if (iVar2 == 0) {
    (*(code *)PTR_RunSystemCmd_00423428)("/var/reinit",&DAT_00411830,"1","");
  }
  iVar3 = (*(code *)PTR_isFileExist_004233d8)("/var/tmp_wan_check");
  if (iVar3 != 0) {
    (*(code *)PTR_unlink_004234d8)("/var/tmp_wan_check");
  }
  iVar3 = (*(code *)PTR_isFileExist_004233d8)("/var/tmp_wan_dhcp_info");
  if (iVar3 != 0) {
    (*(code *)PTR_unlink_004234d8)("/var/tmp_wan_dhcp_info");
  }
  iVar3 = (*(code *)PTR_isFileExist_004233d8)("/var/ppp/manual_connect_now");
  if (iVar3 != 0) {
    (*(code *)PTR_unlink_004234d8)("/var/ppp/manual_connect_now");
  }
  (*(code *)PTR_puts_00423564)("Init Start...");
  (*(code *)PTR_system_00423558)("echo 1 > /var/system/wfaudio_start_init");
  (*(code *)PTR_apmib_get_0042354c)(0xc0,&local_298);
  (*(code *)PTR_apmib_get_0042354c)(0xc1,local_290 + 3);
  (*(code *)PTR_apmib_get_0042354c)(0xad,local_290 + 4);
  (*(code *)PTR_apmib_get_0042354c)(0x68,local_290 + 5);
  DAT_00423868 = 0;
  DAT_0042385c = 0;
  DAT_00423860 = 0;
  DAT_00423864 = 0;
  (*(code *)PTR_memset_00423490)(&DAT_0042387c,0,0x20);
  if (local_298 == 0) {
    pcVar4 = "0";
LAB_0040a608:
    (*(code *)PTR_RunSystemCmd_00423428)("/var/sys_op",&DAT_00411830,pcVar4,"");
  }
  else {
    if (local_298 == 1) {
      pcVar4 = "1";
      goto LAB_0040a608;
    }
    if (local_298 == 2) {
      pcVar4 = "2";
      goto LAB_0040a608;
    }
  }
  (*(code *)PTR_strcpy_004235e0)(&DAT_0042383c,&DAT_00410768);
  (*(code *)PTR_strcpy_004235e0)(&DAT_0042384c,&DAT_00411b70);
  DAT_00423830 = 0;
  (*(code *)PTR_RunSystemCmd_00423428)("/proc/br_igmpProxy",&DAT_00411830,&DAT_00411f80,"");
  (*(code *)PTR_apmib_get_0042354c)(0x268,&local_294);
  if (local_294 == 0) {
    (*(code *)PTR_memset_00423490)(&DAT_0042387c,0,0x20);
  }
  else {
    (*(code *)PTR_sprintf_0042344c)
              (&DAT_0042387c,"%s %s %s",&DAT_00411b8c,&DAT_00411b94,&DAT_00411b9c);
  }
  DAT_00423af8 = 0;
  DAT_00423afc = 0;
  DAT_00423b00 = 0;
  DAT_00423b04 = 0;
  (*(code *)PTR_memset_00423490)(&DAT_00423a9c,0,0x50);
  (*(code *)PTR_memset_00423490)(&DAT_00423b08,0,0x20);
  (*(code *)PTR_memset_00423490)(&DAT_0042389c,0,0x200);
  if (DAT_00423af8._0_1_ == '\0') {
    (*(code *)PTR_sprintf_0042344c)(&DAT_00423af8,&DAT_004117f0,0);
  }
  else {
    (*(code *)PTR_sprintf_0042344c)(auStack_254," wlan%d",0);
    (*(code *)PTR_strcat_00423508)(&DAT_00423af8,auStack_254);
  }
  DAT_00423aec = 1;
  DAT_00423af0 = (*(code *)PTR_if_readlist_proc_004233bc)(&DAT_00423a9c,&DAT_00411bac,0);
  DAT_00423af4 = (*(code *)PTR_if_readlist_proc_004233bc)(&DAT_00423b08,&DAT_0041161c,0);
  iVar3 = (*(code *)PTR_if_readlist_proc_004233bc)(&DAT_0042389c,&DAT_00411bb0,0);
  if (iVar3 == 0) {
    DAT_00423b04 = 0;
    DAT_00423af8 = 0;
    DAT_00423afc = 0;
    DAT_00423b00 = 0;
  }
  if (iVar2 == 0) {
    iVar2 = (*(code *)PTR_isFileExist_004233d8)("/proc/hw_nat");
    if (iVar2 == 0) {
      iVar2 = (*(code *)PTR_isFileExist_004233d8)("/proc/sw_nat");
      if (iVar2 == 0) goto LAB_0040aa50;
      if (local_298 == 0) {
        if (local_290[5] == 0x10) {
          pcVar4 = "/proc/sw_nat";
          pcVar6 = "1";
        }
        else {
          pcVar4 = "/proc/sw_nat";
          pcVar6 = "0";
        }
      }
      else {
        if (local_298 == 1) {
          pcVar4 = "/proc/sw_nat";
          goto LAB_0040a9c8;
        }
        if (local_298 == 2) {
          pcVar4 = "/proc/sw_nat";
          goto LAB_0040a9e8;
        }
        if (local_298 == 3) {
          pcVar4 = "/proc/sw_nat";
          goto LAB_0040aa0c;
        }
        if (local_298 != 4) goto LAB_0040aa50;
        pcVar4 = "/proc/sw_nat";
        pcVar6 = "4";
      }
    }
    else {
      pcVar4 = "/proc/hw_nat";
      if (local_298 == 0) {
LAB_0040a9c8:
        pcVar6 = "1";
      }
      else if (local_298 == 1) {
        pcVar4 = "/proc/hw_nat";
LAB_0040a9e8:
        pcVar6 = "2";
      }
      else if (local_298 == 2) {
        pcVar4 = "/proc/hw_nat";
LAB_0040aa0c:
        pcVar6 = "3";
      }
      else if (local_298 == 3) {
        pcVar4 = "/proc/hw_nat";
        pcVar6 = "4";
      }
      else {
        pcVar4 = "/proc/hw_nat";
        pcVar6 = "5";
      }
    }
    (*(code *)PTR_RunSystemCmd_00423428)(pcVar4,&DAT_00411830,pcVar6,"");
  }
  else {
    FUN_004093ac(local_298,local_290[5],DAT_00423830,DAT_00423834,&DAT_0042383c,&DAT_00423af8,
                 &DAT_0042386c);
  }
LAB_0040aa50:
  (*(code *)PTR_sprintf_0042344c)(auStack_254,&DAT_004117f4,local_290[5]);
  (*(code *)PTR_RunSystemCmd_00423428)("/var/system/last_wan",&DAT_00411830,auStack_254,"");
  (*(code *)PTR_apmib_get_0042354c)(0xfa,local_290);
  (*(code *)PTR_apmib_get_0042354c)(0xfc,local_290 + 1);
  iVar2 = (*(code *)PTR_SetWlan_idx_00423580)("wlan0");
  if (iVar2 != 0) {
    (*(code *)PTR_apmib_get_0042354c)(0x3b,local_290 + 6);
    (*(code *)PTR_apmib_get_0042354c)(0x16,local_290 + 7);
  }
  bVar8 = true;
  if ((local_290[6] != 0) && (local_290[6] != 3)) {
    bVar8 = local_290[0] == 1;
  }
  (*(code *)PTR_memset_00423490)(&DAT_00423b08,0,0x20);
  if ((local_290[0] == 1) &&
     (iVar2 = (*(code *)PTR_strcmp_00423464)(&DAT_0042386c,"wlan0-vxd"), iVar2 != 0)) {
    if (DAT_00423b08 != '\0') {
      (*(code *)PTR_strcat_00423508)(&DAT_00423b08," ");
    }
    (*(code *)PTR_strcat_00423508)(&DAT_00423b08,"wlan0-vxd");
  }
  if (iVar3 != 0) {
    puVar5 = &local_260;
    DAT_00423af8 = 0;
    DAT_00423afc = 0;
    DAT_00423b00 = 0;
    DAT_00423b04 = 0;
    local_290[9] = 1;
    local_290[10] = 0;
    local_264 = (undefined1 *)0x0;
    local_260 = 0;
    local_25c = 0;
    local_258 = 0;
    (*(code *)PTR_sprintf_0042344c)(puVar5,&DAT_004117f0,0);
    (*(code *)PTR_apmib_save_wlanIdx_004234cc)();
    iVar2 = (*(code *)PTR_SetWlan_idx_00423580)(puVar5);
    if (iVar2 == 0) {
LAB_0040aeb0:
      bVar1 = false;
LAB_0040aeb4:
      (*(code *)PTR_apmib_recov_wlanIdx_00423514)();
      if (!bVar1) goto LAB_0040aeec;
      pcVar4 = "1";
    }
    else {
      (*(code *)PTR_apmib_get_0042354c)(0x16,local_290 + 9);
      if (local_290[9] == 1) {
        (*(code *)PTR_RunSystemCmd_00423428)(0,"ifconfig",puVar5,&DAT_00411bdc,"");
        pcVar4 = "";
        pcVar6 = "radio_off";
LAB_0040ae7c:
        (*(code *)PTR_RunSystemCmd_00423428)(0,"iwpriv",&local_260,pcVar6,pcVar4);
        bVar1 = true;
        (*(code *)PTR_apmib_get_0042354c)(0x4c,local_290 + 10);
        if (local_290[10] == 0) goto LAB_0040aeb0;
        goto LAB_0040aeb4;
      }
      pcVar9 = (code *)PTR_strcpy_004235e0;
      if (DAT_00423af8._0_1_ != '\0') {
        (*(code *)PTR_sprintf_0042344c)(auStack_254," %s",puVar5);
        puVar5 = auStack_254;
        pcVar9 = (code *)PTR_strcat_00423508;
      }
      (*pcVar9)(&DAT_00423af8,puVar5);
      local_244 = 0;
      local_240 = 0;
      local_23c = 0;
      local_238 = 0;
      (*(code *)PTR_sprintf_0042344c)(&local_244,"%s-vxd",&local_260);
      (*(code *)PTR_RunSystemCmd_00423428)(0,"ifconfig",&local_244,"0.0.0.0","");
      (*(code *)PTR_RunSystemCmd_00423428)(0,"ifconfig",&local_244,&DAT_00411bdc,"");
      (*(code *)PTR_RunSystemCmd_00423428)(0,"ifconfig",&local_260,&DAT_00411bdc,"");
      iVar2 = (*(code *)PTR_RunSystemCmd_00423428)(0,"flash","set_mib",&local_260,"");
      if (iVar2 == 0) {
        (*(code *)PTR_apmib_get_0042354c)(0x298,&local_264);
        if (local_264 == (undefined1 *)0x0) {
          pcVar4 = "mc2u_disable=0";
        }
        else {
          pcVar4 = "mc2u_disable=1";
        }
        pcVar6 = "set_mib";
        goto LAB_0040ae7c;
      }
      (*(code *)PTR_printf_004235c0)("[%s %d]init %s failed!\n","setinit",800,&local_260);
LAB_0040aeec:
      pcVar4 = "0";
    }
    (*(code *)PTR_RunSystemCmd_00423428)("/proc/br_wlanblock",&DAT_00411830,pcVar4,"");
  }
  if (DAT_00423af8._0_1_ != '\0') {
    if (DAT_00423b08 != '\0') {
      (*(code *)PTR_memcpy_0042357c)(auStack_234,&DAT_00423b08,0x20);
      local_264 = auStack_234;
      iVar2 = (*(code *)PTR_strsep_00423440)(&local_264," ");
      pcVar4 = "ifconfig";
      while (iVar2 != 0) {
        local_30 = pcVar4;
        (*(code *)PTR_RunSystemCmd_00423428)(0,pcVar4,iVar2,&DAT_00411bdc,"");
        (*(code *)PTR_RunSystemCmd_00423428)(0,"flash","set_mib",iVar2,"");
        iVar2 = (*(code *)PTR_strsep_00423440)(&local_264," ");
        pcVar4 = local_30;
      }
    }
    if (DAT_00423a9c != '\0') {
      local_290[2] = 0;
      (*(code *)PTR_strcpy_004235e0)(auStack_234,&DAT_00423a9c);
      iVar2 = (*(code *)PTR_strtok_r_004235c8)(auStack_234," ",local_290 + 2);
      if (iVar2 != 0) {
        local_30 = "ifconfig";
        do {
          (*(code *)PTR_RunSystemCmd_00423428)(0,local_30,iVar2,&DAT_00411bdc,"");
          (*(code *)PTR_RunSystemCmd_00423428)(0,"flash","set_mib",iVar2,"");
          iVar2 = (*(code *)PTR_strtok_r_004235c8)(0," ",local_290 + 2);
        } while (iVar2 != 0);
      }
    }
    iVar2 = (*(code *)PTR_strstr_004234f8)(&DAT_0042386c,&DAT_004117f8);
    if (iVar2 != 0) {
      (*(code *)PTR_RunSystemCmd_00423428)(0,"ifconfig",&DAT_0042386c,&DAT_00411bdc,"");
      (*(code *)PTR_RunSystemCmd_00423428)(0,"flash","set_mib",&DAT_0042386c,"");
    }
  }
  if (DAT_00423830 != 1) {
    FUN_00408fc4(auStack_234);
    (*(code *)PTR_setbridge_004233e4)(auStack_234);
    FUN_0040a03c();
    if (local_290[4] == 2) {
      (*(code *)PTR_system_00423558)("killall -9 udhcpc 2> /dev/null");
      (*(code *)PTR_system_00423558)("rm -f /etc/udhcpc/udhcpc-br0.pid 2> /dev/null");
      (*(code *)PTR_set_lan_dhcpd_00423458)(&DAT_0042383c,1);
    }
    if ((local_290[4] == 2) || (local_290[4] == 0)) {
      FUN_00409e48(bVar8);
    }
  }
  if (((DAT_00423830 == 1) && (local_298 != 1)) &&
     (iVar2 = (*(code *)PTR_isFileExist_004233d8)("/bin/lld2d"), iVar2 != 0)) {
    (*(code *)PTR_RunSystemCmd_00423428)(0,"lld2d",&DAT_0042383c,"");
  }
  FUN_00409b7c(0);
  if (local_298 == 0) {
    (*(code *)PTR_apmib_get_0042354c)(0x182,&local_294);
  }
  else {
    local_294 = 0;
  }
  if ((local_294 & 1) == 0) {
    pcVar4 = "0";
  }
  else {
    pcVar4 = "1";
  }
  (*(code *)PTR_RunSystemCmd_00423428)("/proc/custom_Passthru",&DAT_00411830,pcVar4,"");
  if (local_294 == 0) {
    (*(code *)PTR_RunSystemCmd_00423428)(0,"brctl","delif",&DAT_00410768,"peth0","");
    puVar7 = &DAT_00411bdc;
  }
  else {
    (*(code *)PTR_RunSystemCmd_00423428)(0,"brctl","addif",&DAT_00410768,"peth0","");
    puVar7 = &DAT_00411ca8;
  }
  (*(code *)PTR_RunSystemCmd_00423428)(0,"ifconfig","peth0",puVar7,"");
  if (local_298 == 2) {
    (*(code *)PTR_apmib_get_0042354c)(0xfa,local_290 + 8);
    (*(code *)PTR_apmib_get_0042354c)(0x182,&local_294);
    if (local_294 != 0) {
      if (local_290[8] == 1) {
        local_294 = local_294 | 8;
      }
      puVar5 = &local_244;
      local_244 = 0;
      local_240 = 0;
      local_23c = 0;
      local_238 = 0;
      (*(code *)PTR_sprintf_0042344c)(puVar5,&DAT_004117f4,local_294);
      goto LAB_0040b490;
    }
  }
  else {
    local_294 = 0;
  }
  puVar5 = (undefined4 *)&DAT_00411f80;
LAB_0040b490:
  (*(code *)PTR_RunSystemCmd_00423428)("/proc/custom_Passthru_wlan",&DAT_00411830,puVar5,"");
  if (local_294 == 0) {
    (*(code *)PTR_RunSystemCmd_00423428)(0,"brctl","delif",&DAT_00410768,"pwlan0","");
    puVar7 = &DAT_00411bdc;
  }
  else {
    (*(code *)PTR_RunSystemCmd_00423428)(0,"brctl","addif",&DAT_00410768,"pwlan0","");
    puVar7 = &DAT_00411ca8;
  }
  (*(code *)PTR_RunSystemCmd_00423428)(0,"ifconfig","pwlan0",puVar7,"");
  (*(code *)PTR_RunSystemCmd_00423428)("/proc/br_igmpVersion",&DAT_00411830,&DAT_00411f8c,"");
  (*(code *)PTR_RunSystemCmd_00423428)("/proc/br_igmpsnoop",&DAT_00411830,"1","");
  (*(code *)PTR_RunSystemCmd_00423428)("/proc/br_igmpquery",&DAT_00411830,"1","");
  (*(code *)PTR_RunSystemCmd_00423428)("/proc/br_mldsnoop",&DAT_00411830,"1","");
  (*(code *)PTR_RunSystemCmd_00423428)("/proc/br_mldquery",&DAT_00411830,"1","");
  (*(code *)PTR_system_00423558)("fwd &");
  (*(code *)PTR_RunSystemCmd_00423428)
            ("/proc/sys/net/ipv4/conf/eth1/arp_ignore",&DAT_00411830,"1","");
  (*(code *)PTR_RunSystemCmd_00423428)
            ("/proc/sys/net/ipv4/rt_cache_rebuild_count",&DAT_00411830,&DAT_00411d94,"");
  (*(code *)PTR_system_00423558)("timelycheck &");
  (*(code *)PTR_system_00423558)("rm -f  /var/system/wfaudio_start_init 2> /dev/null");
  return 0;
}


/* FUN_0040b6c0 @ 0040b6c0 */

void FUN_0040b6c0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
  undefined4 local_1e8;
  char acStack_1e4 [32];
  char acStack_1c4 [32];
  char acStack_1a4 [32];
  char local_184 [32];
  char local_164 [32];
  undefined1 auStack_144 [128];
  undefined1 auStack_c4 [132];
  int local_40;
  char *local_3c;
  char *local_38;
  char *local_34;
  int local_30;
  int local_2c;
  
  (*(code *)PTR_memset_00423490)(local_184,0,0x40);
  (*(code *)PTR_memset_00423490)(auStack_144,0,0x80);
  (*(code *)PTR_memset_00423490)(auStack_c4,0,0x80);
  (*(code *)PTR_memset_00423490)(acStack_1e4,0,0x20);
  (*(code *)PTR_memset_00423490)(acStack_1c4,0,0x20);
  (*(code *)PTR_memset_00423490)(acStack_1a4,0,0x20);
  local_1e8 = 0;
  iVar1 = (*(code *)PTR_strcmp_00423464)(param_1,&DAT_00410768);
  if (iVar1 == 0) {
    (*(code *)PTR_strcpy_004235e0)(auStack_144,param_2);
    iVar1 = (*(code *)PTR_strtok_r_004235c8)(auStack_144," ",&local_1e8);
    if (iVar1 != 0) {
      iVar5 = 1;
      local_3c = acStack_1a4;
      local_38 = acStack_1c4;
      local_34 = acStack_1e4;
      do {
        pcVar6 = local_34;
        if (((iVar5 == 2) || (pcVar6 = local_38, iVar5 == 3)) || (pcVar6 = local_3c, iVar5 == 4)) {
LAB_0040b914:
          (*(code *)PTR_strcpy_004235e0)(pcVar6,iVar1);
        }
        else if ((((4 < iVar5) &&
                  ((local_40 = (int)local_184[0], local_40 == 0 ||
                   (local_2c = iVar1, iVar2 = (*(code *)PTR_strcmp_00423464)(local_184,iVar1),
                   iVar1 = local_2c, iVar2 != 0)))) &&
                 ((iVar2 = (int)local_164[0], iVar2 == 0 ||
                  (local_30 = iVar2, local_2c = iVar1,
                  iVar3 = (*(code *)PTR_strcmp_00423464)(local_164,iVar1), iVar1 = local_2c,
                  iVar2 = local_30, iVar3 != 0)))) &&
                ((iVar3 = 0, local_40 == 0 || (iVar3 = 1, iVar2 == 0)))) {
          pcVar6 = local_184 + iVar3 * 0x20;
          goto LAB_0040b914;
        }
        iVar1 = (*(code *)PTR_strtok_r_004235c8)(0," ",&local_1e8);
        if (iVar1 == 0) break;
        iVar5 = iVar5 + 1;
      } while( true );
    }
    (*(code *)PTR_RunSystemCmd_00423428)(0,"ifconfig",param_1,acStack_1e4,"netmask",acStack_1c4,"");
    (*(code *)PTR_RunSystemCmd_00423428)
              (0,"route",&DAT_00411f00,&DAT_00411f04,"default",&DAT_00411f14,acStack_1a4,
               &DAT_00411f18,param_1,"");
    pcVar6 = local_184;
    iVar1 = 0;
    do {
      if (*pcVar6 != '\0') {
        (*(code *)PTR_sprintf_0042344c)(auStack_c4,"nameserver %s\n",pcVar6);
        uVar4 = 1;
        if (iVar1 != 0) {
          uVar4 = 2;
        }
        (*(code *)PTR_write_line_to_file_00423554)("/var/resolv.conf",uVar4,auStack_c4);
      }
      iVar1 = iVar1 + 1;
      pcVar6 = pcVar6 + 0x20;
    } while (iVar1 != 2);
  }
  return;
}


/* setbridge @ 0040ba94 */

undefined4 setbridge(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined *puVar6;
  uint uVar7;
  code *pcVar8;
  char *pcVar9;
  int local_388;
  undefined4 local_384;
  int local_380;
  int local_37c;
  int local_378;
  uint local_374;
  int local_370;
  int local_36c;
  int local_368;
  int local_364;
  int local_360;
  uint local_35c;
  uint local_358;
  int local_354;
  int local_350;
  undefined4 uStack_34c;
  char local_347;
  char local_346;
  char local_345;
  undefined1 auStack_33c [16];
  undefined4 local_32c;
  undefined4 local_328;
  undefined4 local_324;
  undefined4 local_320;
  undefined4 local_31c;
  undefined4 local_318;
  undefined4 local_314;
  undefined4 local_310;
  undefined1 local_30c;
  undefined1 auStack_30b [16];
  undefined1 local_2fb;
  undefined1 local_2fa;
  undefined1 local_2f9;
  uint local_2f8;
  undefined1 auStack_2f4 [32];
  undefined1 auStack_2d4 [32];
  undefined1 auStack_2b4 [32];
  undefined1 auStack_294 [100];
  undefined4 local_230;
  undefined1 local_22c;
  undefined1 local_22b;
  char local_168 [304];
  int local_38;
  undefined4 *local_34;
  undefined4 *local_30;
  
  local_388 = -1;
  local_384 = 0;
  local_380 = 0;
  local_37c = 0;
  local_378 = 0;
  local_374 = 0;
  local_370 = 0;
  local_36c = 0;
  local_368 = 0;
  local_364 = 0;
  local_360 = 0;
  local_354 = 0;
  local_350 = 0;
  local_32c = 0;
  local_328 = 0;
  local_324 = 0;
  local_320 = 0;
  (*(code *)PTR_puts_00423564)("Init bridge interface...");
  (*(code *)PTR_apmib_get_0042354c)(0xfa,&local_350);
  (*(code *)PTR_apmib_get_0042354c)(0xc0,&local_388);
  (*(code *)PTR_apmib_get_0042354c)(0xc1,&local_374);
  (*(code *)PTR_apmib_get_0042354c)(0xad,&local_360);
  iVar1 = (*(code *)PTR_isFileExist_004233d8)("/var/system/br_iface");
  if (iVar1 == 0) {
    iVar1 = (*(code *)PTR_setInAddr_004234e0)(&DAT_00410768,0,0,0,1);
    if (iVar1 == 0) {
      local_384 = 0;
      (*(code *)PTR_strcpy_004235e0)(local_168,param_1);
      iVar1 = (*(code *)PTR_strtok_r_004235c8)(local_168," ",&local_384);
      while (iVar1 != 0) {
        (*(code *)PTR_RunSystemCmd_00423428)(0,"ifconfig",iVar1,&DAT_00411bdc,"");
        iVar3 = (*(code *)PTR_memcmp_004234c4)(iVar1,&DAT_00410768,3);
        if (iVar3 != 0) {
          (*(code *)PTR_RunSystemCmd_00423428)(0,"brctl","delif",&DAT_00410768,iVar1,"");
        }
        iVar1 = (*(code *)PTR_strtok_r_004235c8)(0," ",&local_384);
      }
    }
  }
  else {
    (*(code *)PTR_memset_00423490)(local_168,0,300);
    iVar1 = (*(code *)PTR_fopen_00423498)("/var/system/br_iface",&DAT_00411fe4);
    if (iVar1 != 0) {
      (*(code *)PTR_fgets_00423588)(local_168,300,iVar1);
      uVar7 = 0;
      pcVar9 = local_168;
      while (uVar2 = (*(code *)PTR_strlen_004233e8)(local_168), uVar7 < uVar2) {
        uVar7 = uVar7 + 1;
        if (*pcVar9 == '\n') {
          *pcVar9 = '\0';
        }
        pcVar9 = pcVar9 + 1;
      }
      local_168[uVar2] = '\0';
      iVar3 = (*(code *)PTR_strtok_r_004235c8)(local_168,&DAT_00411f74,&local_384);
      if (iVar3 != 0) {
        do {
          puVar6 = &DAT_00410768;
          if (local_350 == 2) {
            iVar4 = (*(code *)PTR_strcmp_00423464)(iVar3,&DAT_00411f78);
            if ((iVar4 == 0) ||
               (iVar4 = (*(code *)PTR_strcmp_00423464)(iVar3,&DAT_00411f84), iVar4 == 0)) {
              puVar6 = &DAT_00411f90;
            }
            else {
              iVar4 = (*(code *)PTR_strcmp_00423464)(iVar3,"wlan0");
              if (iVar4 == 0) {
                (*(code *)PTR_RunSystemCmd_00423428)(0,"ifconfig",iVar3,&DAT_00411bdc,"");
              }
              else {
                iVar4 = (*(code *)PTR_strcmp_00423464)(iVar3,"wlan0-va1");
                if (iVar4 != 0) goto LAB_0040bdf8;
              }
            }
LAB_0040bde8:
            (*(code *)PTR_RunSystemCmd_00423428)(0,"brctl","delif",puVar6,iVar3,"");
          }
          else {
            (*(code *)PTR_RunSystemCmd_00423428)(0,"ifconfig",iVar3,&DAT_00411bdc,"");
            iVar4 = (*(code *)PTR_memcmp_004234c4)(iVar3,&DAT_00410768,3);
            if (iVar4 != 0) goto LAB_0040bde8;
          }
LAB_0040bdf8:
          iVar3 = (*(code *)PTR_strtok_r_004235c8)(0,&DAT_00411f74,&local_384);
        } while (iVar3 != 0);
      }
      (*(code *)PTR_fclose_00423480)(iVar1);
    }
  }
  iVar1 = (*(code *)PTR_isFileExist_004233d8)("/bin/pathsel");
  if (iVar1 != 0) {
    (*(code *)PTR_SetWlan_idx_00423580)("wlan0");
    (*(code *)PTR_apmib_get_0042354c)(0x3b,&local_378);
    (*(code *)PTR_apmib_get_0042354c)(0x284,&local_368);
    if (1 < local_378 - 4U) {
      local_368 = 0;
    }
    (*(code *)PTR_RunSystemCmd_00423428)(0,"ifconfig","wlan-msh",&DAT_00411bdc,"");
    (*(code *)PTR_RunSystemCmd_00423428)(0,"brctl","delif",&DAT_00410768,"wlan-msh","");
  }
  iVar1 = (*(code *)PTR_setInAddr_004234e0)(&DAT_00410768,0,0,0,1);
  if (iVar1 == 0) {
    (*(code *)PTR_RunSystemCmd_00423428)(0,"brctl","delif",&DAT_00410768,&DAT_00411fbc,"");
    (*(code *)PTR_RunSystemCmd_00423428)(0,"brctl","delif",&DAT_00410768,"wlan0","");
  }
  iVar1 = (*(code *)PTR_isFileExist_004233d8)("/tmp/bridge_init");
  if (iVar1 == 0) {
    (*(code *)PTR_RunSystemCmd_00423428)(0,"brctl","delbr",&DAT_00410768,"");
    (*(code *)PTR_RunSystemCmd_00423428)(0,"brctl",&DAT_00411fe0,&DAT_00410768,"");
  }
  if (local_350 == 2) {
    (*(code *)PTR_RunSystemCmd_00423428)(0,"brctl","delbr",&DAT_00411f90,"");
    (*(code *)PTR_RunSystemCmd_00423428)(0,"brctl",&DAT_00411fe0,&DAT_00411f90,"");
  }
  (*(code *)PTR_apmib_get_0042354c)(0xb3,&local_364);
  if (local_364 == 1) {
    (*(code *)PTR_RunSystemCmd_00423428)(0,"brctl","setfd",&DAT_00410768,&DAT_0041183c,"");
    pcVar9 = "1";
  }
  else {
    (*(code *)PTR_RunSystemCmd_00423428)(0,"brctl","setfd",&DAT_00410768,&DAT_00411f80,"");
    pcVar9 = "0";
  }
  (*(code *)PTR_RunSystemCmd_00423428)(0,"brctl",&DAT_00411ff0,&DAT_00410768,pcVar9,"");
  (*(code *)PTR_apmib_get_0042354c)(0x268,&local_37c);
  if (local_37c == 1) {
    pcVar9 = "1";
  }
  else {
    pcVar9 = "0";
  }
  (*(code *)PTR_RunSystemCmd_00423428)("/proc/rtk_vlan_support",&DAT_00411830,pcVar9,"");
  (*(code *)PTR_apmib_get_0042354c)(0x269,&local_354);
  for (iVar1 = 1; iVar1 <= local_354; iVar1 = iVar1 + 1) {
    local_30c = (undefined1)iVar1;
    (*(code *)PTR_apmib_get_0042354c)(0x826a,&local_30c);
    (*(code *)PTR_sprintf_0042344c)(&local_230,"/proc/%s/mib_vlan",auStack_30b);
    iVar3 = (*(code *)PTR_isFileExist_004233d8)(&local_230);
    if (iVar3 != 0) {
      iVar3 = (*(code *)PTR_strncmp_004234e4)(auStack_30b,&DAT_00411fbc,4);
      if (iVar3 == 0) {
        uVar5 = 1;
        if (1 < local_388 - 1U) {
LAB_0040c43c:
          uVar5 = 0;
        }
      }
      else {
        (*(code *)PTR_sprintf_0042344c)(&local_32c,&DAT_004117f0,local_374);
        (*(code *)PTR_getWispRptIfaceName_004235bc)(&local_32c,local_374);
        uVar5 = (*(code *)PTR_strlen_004233e8)(auStack_30b);
        iVar3 = (*(code *)PTR_strncmp_004234e4)(&local_32c,auStack_30b,uVar5);
        uVar5 = 1;
        if (((iVar3 == 0) && (local_388 == 2)) && (local_374 < 2)) goto LAB_0040c43c;
      }
      pcVar9 = "echo \"1 %d %d %d %d %d %d\" > %s";
      if (local_37c != 1) {
        pcVar9 = "echo \"0 %d %d %d %d %d %d\" > %s";
      }
      (*(code *)PTR_sprintf_0042344c)
                (auStack_294,pcVar9,uVar5,local_30c,local_2fb,local_2f8 >> 0x10,local_2fa,local_2f9,
                 &local_230);
      (*(code *)PTR_system_00423558)(auStack_294);
    }
  }
  iVar1 = (*(code *)PTR_isFileExist_004233d8)("/var/system/br_iface");
  if (iVar1 != 0) {
    (*(code *)PTR_unlink_004234d8)("/var/system/br_iface");
  }
  (*(code *)PTR_memset_00423490)(local_168,0,300);
  local_384 = 0;
  (*(code *)PTR_strcpy_004235e0)(&local_230,param_1);
  iVar1 = (*(code *)PTR_strtok_r_004235c8)(&local_230," ",&local_384);
  if (iVar1 != 0) {
    local_34 = &local_384;
    do {
      (*(code *)PTR_strcpy_004235e0)(&uStack_34c,iVar1);
      iVar1 = (*(code *)PTR_strncmp_004234e4)(&uStack_34c,&DAT_00412060,3);
      if (iVar1 == 0) {
        local_380 = 1;
        if ((local_37c == 0) && ((byte)((char)uStack_34c - 0x32U) < 3)) {
          local_380 = 0;
        }
        if (local_380 == 1) {
          (*(code *)PTR_RunSystemCmd_00423428)(0,"brctl","addif",&DAT_00410768,&uStack_34c,"");
          (*(code *)PTR_RunSystemCmd_00423428)(0,"ifconfig",&uStack_34c,"0.0.0.0","");
          pcVar8 = (code *)PTR_strcpy_004235e0;
          if (local_168[0] != '\0') {
            pcVar8 = (code *)PTR_strcat_00423508;
          }
          (*pcVar8)(local_168,&uStack_34c);
          (*(code *)PTR_strcat_00423508)(local_168,&DAT_00411f74);
        }
      }
      iVar1 = (*(code *)PTR_strtok_r_004235c8)(0," ",local_34);
    } while (iVar1 != 0);
  }
  local_384 = 0;
  (*(code *)PTR_strcpy_004235e0)(&local_230,param_1);
  iVar1 = (*(code *)PTR_strtok_r_004235c8)(&local_230," ",&local_384);
  if (iVar1 != 0) {
    local_38 = 0;
    do {
      (*(code *)PTR_strcpy_004235e0)(&uStack_34c,iVar1);
      iVar1 = (*(code *)PTR_strncmp_004234e4)(&uStack_34c,&DAT_00411bb0,4);
      if (iVar1 == 0) {
        uVar7 = (*(code *)PTR_strlen_004233e8)(&uStack_34c);
        if (((uVar7 < 9) || (local_347 != '-')) || ((local_346 != 'v' || (local_345 != 'a')))) {
          iVar1 = (*(code *)PTR_strstr_004234f8)(&uStack_34c,&DAT_00412064);
          if (iVar1 == 0) {
LAB_0040c8b8:
            iVar1 = (*(code *)PTR_SetWlan_idx_00423580)(&uStack_34c);
            if ((iVar1 != 0) && ((*(code *)PTR_apmib_get_0042354c)(0x16,&local_380), local_380 == 0)
               ) {
LAB_0040c8ec:
              (*(code *)PTR_sprintf_0042344c)(PTR_wlan_wan_iface_004235d8,&DAT_004117f0,local_374);
              (*(code *)PTR_getWispRptIfaceName_004235bc)(PTR_wlan_wan_iface_004235d8,local_374);
              uVar7 = (*(code *)PTR_strlen_004233e8)(&uStack_34c);
              if ((((uVar7 < 9) || (local_347 != '-')) || (local_346 != 'v')) || (local_345 != 'a'))
              {
                if (((local_38 != 0) || (local_388 != 2)) ||
                   (local_30 = &uStack_34c,
                   iVar1 = (*(code *)PTR_strcmp_00423464)(PTR_wlan_wan_iface_004235d8,&uStack_34c),
                   iVar1 != 0)) goto LAB_0040c9c0;
                (*(code *)PTR_RunSystemCmd_00423428)(0,"ifconfig",local_30,&DAT_00411ca8,"");
              }
              else {
                local_38 = 1;
LAB_0040c9c0:
                if (local_350 == 2) {
                  iVar1 = (*(code *)PTR_strcmp_00423464)(&uStack_34c,&DAT_00411f78);
                  if ((iVar1 != 0) &&
                     (iVar1 = (*(code *)PTR_strcmp_00423464)(&uStack_34c,&DAT_00411f84), iVar1 != 0)
                     ) goto LAB_0040ca34;
                  puVar6 = &DAT_00411f90;
                }
                else {
LAB_0040ca34:
                  puVar6 = &DAT_00410768;
                }
                (*(code *)PTR_RunSystemCmd_00423428)(0,"brctl","addif",puVar6,&uStack_34c,"");
                (*(code *)PTR_RunSystemCmd_00423428)(0,"ifconfig",&uStack_34c,"0.0.0.0","");
                pcVar8 = (code *)PTR_strcpy_004235e0;
                if (local_168[0] != '\0') {
                  pcVar8 = (code *)PTR_strcat_00423508;
                }
                (*pcVar8)(local_168,&uStack_34c);
                (*(code *)PTR_strcat_00423508)(local_168,&DAT_00411f74);
              }
              iVar1 = (*(code *)PTR_SetWlan_idx_00423580)(&uStack_34c);
              if (iVar1 != 0) {
                (*(code *)PTR_apmib_get_0042354c)(0x3f,&local_370);
                (*(code *)PTR_apmib_get_0042354c)(0x40,&local_36c);
                (*(code *)PTR_apmib_get_0042354c)(0x3b,&local_378);
                if (((local_370 != 0) && (local_36c != 0)) && (local_378 - 2U < 2)) {
                  local_34 = &uStack_34c;
                  for (iVar1 = 0; iVar1 < local_36c; iVar1 = iVar1 + 1) {
                    (*(code *)PTR_sprintf_0042344c)(auStack_33c,"%s-wds%d",local_34,iVar1);
                    (*(code *)PTR_RunSystemCmd_00423428)
                              (0,"brctl","addif",&DAT_00410768,auStack_33c,"");
                    (*(code *)PTR_RunSystemCmd_00423428)(0,"ifconfig",auStack_33c,"0.0.0.0","");
                    pcVar8 = (code *)PTR_strcpy_004235e0;
                    if (local_168[0] != '\0') {
                      pcVar8 = (code *)PTR_strcat_00423508;
                    }
                    (*pcVar8)(local_168,auStack_33c);
                    (*(code *)PTR_strcat_00423508)(local_168,&DAT_00411f74);
                  }
                }
              }
            }
          }
          else if (local_368 != 0) goto LAB_0040c8ec;
        }
        else {
          local_31c = 0;
          local_318 = 0;
          local_314 = 0;
          local_310 = 0;
          (*(code *)PTR_strncpy_004234dc)(&local_31c,&uStack_34c,5);
          iVar1 = (*(code *)PTR_SetWlan_idx_00423580)(&local_31c);
          if (iVar1 != 0) {
            (*(code *)PTR_apmib_get_0042354c)(0x16,&local_380);
            (*(code *)PTR_apmib_get_0042354c)(0x3b,&local_378);
            if ((local_380 == 0) && ((local_378 == 0 || (local_378 == 3)))) goto LAB_0040c8b8;
          }
        }
      }
      iVar1 = (*(code *)PTR_strtok_r_004235c8)(0," ",&local_384);
    } while (iVar1 != 0);
  }
  (*(code *)PTR_RunSystemCmd_00423428)("/var/system/br_iface",&DAT_00411830,local_168,"");
  if (local_364 == 0) {
    (*(code *)PTR_apmib_get_0042354c)(0xc9,&local_230);
    (*(code *)PTR_sprintf_0042344c)
              (auStack_294,"%02x%02x%02x%02x%02x%02x",local_230._0_1_,local_230._1_1_,
               local_230 >> 8 & 0xff,local_230 & 0xff,local_22c,local_22b);
    (*(code *)PTR_RunSystemCmd_00423428)
              (0,"ifconfig",&DAT_00410768,&DAT_00412090,"ether",auStack_294,"");
  }
  iVar1 = (*(code *)PTR_isFileExist_004233d8)("/tmp/bridge_init");
  if (iVar1 == 0) {
    (*(code *)PTR_RunSystemCmd_00423428)(0,"ifconfig",&DAT_00410768,"0.0.0.0","");
    (*(code *)PTR_RunSystemCmd_00423428)("/tmp/bridge_init",&DAT_00411830,"1","");
  }
  if ((local_360 == 0) || (local_360 == 2)) {
    (*(code *)PTR_apmib_get_0042354c)(0xaa,&local_230);
    uVar5 = (*(code *)PTR_inet_ntoa_00423478)(local_230);
    (*(code *)PTR_strcpy_004235e0)(auStack_2f4,uVar5);
    (*(code *)PTR_apmib_get_0042354c)(0xab,&local_230);
    uVar5 = (*(code *)PTR_inet_ntoa_00423478)(local_230);
    (*(code *)PTR_strcpy_004235e0)(auStack_2d4,uVar5);
    (*(code *)PTR_apmib_get_0042354c)(0xac,&local_230);
    uVar5 = (*(code *)PTR_inet_ntoa_00423478)(local_230);
    (*(code *)PTR_strcpy_004235e0)(auStack_2b4,uVar5);
    (*(code *)PTR_RunSystemCmd_00423428)
              (0,"ifconfig",&DAT_00410768,auStack_2f4,"netmask",auStack_2d4,"");
    (*(code *)PTR_apmib_get_0042354c)(0xaa,&local_35c);
    (*(code *)PTR_apmib_get_0042354c)(0xab,&local_358);
    local_35c = local_35c & local_358;
    uVar5 = (*(code *)PTR_inet_ntoa_00423478)(local_35c);
    (*(code *)PTR_strcpy_004235e0)(auStack_2f4,uVar5);
    (*(code *)PTR_RunSystemCmd_00423428)
              (0,"route",&DAT_0041209c,&DAT_00411f04,auStack_2f4,"netmask",auStack_2d4,"");
    (*(code *)PTR_RunSystemCmd_00423428)
              (0,"route",&DAT_00411f00,&DAT_00411f04,auStack_2f4,"netmask",auStack_2d4,&DAT_00411f18
               ,&DAT_00410768,"");
    iVar1 = (*(code *)PTR_strcmp_00423464)(auStack_2b4,"0.0.0.0");
    if (iVar1 != 0) {
      (*(code *)PTR_RunSystemCmd_00423428)
                (0,"route",&DAT_0041209c,"default",&DAT_00411f18,&DAT_00410768,"");
      (*(code *)PTR_RunSystemCmd_00423428)
                (0,"route",&DAT_00411f00,&DAT_00411f04,"default",&DAT_00411f14,auStack_2b4,
                 &DAT_00411f18,&DAT_00410768,"");
    }
  }
  else if (local_360 == 1) {
    (*(code *)PTR_puts_00423564)("wait for bridge initialization...");
    local_380 = 10;
    do {
      local_380 = local_380 + -1;
      (*(code *)PTR_sleep_00423550)(1);
    } while (local_380 != 0);
    (*(code *)PTR_set_lan_dhcpc_00423454)(&DAT_00410768);
  }
  if (local_350 == 2) {
    (*(code *)PTR_RunSystemCmd_00423428)(0,"ifconfig",&DAT_00411f90,&DAT_00411ca8,"");
  }
  return 0;
}


/* set_lan_dhcpd @ 0040d120 */

void set_lan_dhcpd(undefined4 param_1,int param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  int local_218;
  int local_214;
  int local_210;
  undefined4 local_20c [8];
  undefined4 local_1ec [8];
  undefined4 local_1cc [8];
  undefined4 local_1ac;
  byte local_1a8;
  byte local_1a7;
  byte local_1a6;
  byte local_1a5;
  undefined1 local_1a4;
  undefined1 local_1a3;
  undefined4 local_180 [16];
  undefined4 local_140 [16];
  undefined1 auStack_100 [100];
  undefined1 auStack_9c [100];
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  
  (*(code *)PTR_memset_00423490)(local_20c,0,0x20);
  (*(code *)PTR_memset_00423490)(local_1ec,0,0x20);
  local_218 = 0;
  local_214 = 0;
  (*(code *)PTR_memset_00423490)(auStack_100,0,100);
  (*(code *)PTR_memset_00423490)(local_180,0,0x40);
  (*(code *)PTR_memset_00423490)(local_140,0,0x40);
  local_210 = 0;
  (*(code *)PTR_memset_00423490)(local_1cc,0,0x20);
  (*(code *)PTR_sprintf_0042344c)(auStack_100,"interface %s\n",param_1);
  (*(code *)PTR_write_line_to_file_00423554)("/var/udhcpd.conf",1,auStack_100);
  (*(code *)PTR_apmib_get_0042354c)(0xae,local_180);
  uVar3 = (*(code *)PTR_inet_ntoa_00423478)(local_180[0]);
  (*(code *)PTR_sprintf_0042344c)(auStack_100,"start %s\n",uVar3);
  (*(code *)PTR_write_line_to_file_00423554)("/var/udhcpd.conf",2,auStack_100);
  (*(code *)PTR_apmib_get_0042354c)(0xaf,local_180);
  uVar3 = (*(code *)PTR_inet_ntoa_00423478)(local_180[0]);
  (*(code *)PTR_sprintf_0042344c)(auStack_100,"end %s\n",uVar3);
  (*(code *)PTR_write_line_to_file_00423554)("/var/udhcpd.conf",2,auStack_100);
  (*(code *)PTR_apmib_get_0042354c)(0xab,local_180);
  uVar3 = (*(code *)PTR_inet_ntoa_00423478)(local_180[0]);
  (*(code *)PTR_sprintf_0042344c)(auStack_100,"opt subnet %s\n",uVar3);
  (*(code *)PTR_write_line_to_file_00423554)("/var/udhcpd.conf",2,auStack_100);
  (*(code *)PTR_apmib_get_0042354c)(0x3b1,&local_218);
  if (0x275f < local_218 - 1U) {
    local_218 = 0x1e0;
    iVar4 = (*(code *)PTR_apmib_set_00423524)(0x3b1,&local_218);
    if (iVar4 == 0) {
      (*(code *)PTR_puts_00423564)("set MIB_DHCP_LEASE_TIME error");
    }
    (*(code *)PTR_apmib_update_0042352c)(4);
  }
  local_218 = local_218 * 0x3c;
  (*(code *)PTR_sprintf_0042344c)(auStack_100,"opt lease %d\n",local_218);
  (*(code *)PTR_write_line_to_file_00423554)("/var/udhcpd.conf",2,auStack_100);
  if (param_2 == 1) {
    (*(code *)PTR_apmib_get_0042354c)(0xac,local_140);
    iVar4 = (*(code *)PTR_memcmp_004234c4)(local_140,&DAT_004121a0,4);
    uVar3 = local_140[0];
    if (iVar4 == 0) {
      (*(code *)PTR_apmib_get_0042354c)(0xaa,local_180);
      uVar3 = local_180[0];
    }
    uVar3 = (*(code *)PTR_inet_ntoa_00423478)(uVar3);
    pcVar5 = "opt router %s\n";
LAB_0040d568:
    (*(code *)PTR_sprintf_0042344c)(auStack_100,pcVar5,uVar3);
    (*(code *)PTR_write_line_to_file_00423554)("/var/udhcpd.conf",2,auStack_100);
  }
  else {
    (*(code *)PTR_apmib_get_0042354c)(0xaa,local_180);
    uVar3 = (*(code *)PTR_inet_ntoa_00423478)(local_180[0]);
    (*(code *)PTR_sprintf_0042344c)(auStack_100,"opt router %s\n",uVar3);
    (*(code *)PTR_write_line_to_file_00423554)("/var/udhcpd.conf",2,auStack_100);
    (*(code *)PTR_apmib_get_0042354c)(0x69,&local_214);
    if (local_214 == 0) {
      pcVar5 = "opt dns %s\n";
      goto LAB_0040d568;
    }
  }
  local_218 = 0;
  if ((param_2 != 1) && ((param_2 != 2 || (local_214 != 1)))) goto LAB_0040d894;
  (*(code *)PTR_apmib_get_0042354c)(0xb0,local_20c);
  (*(code *)PTR_apmib_get_0042354c)(0xb1,local_1ec);
  (*(code *)PTR_apmib_get_0042354c)(0xb2,local_1cc);
  iVar4 = (*(code *)PTR_memcmp_004234c4)(local_20c,&DAT_004121a0,4);
  if (iVar4 != 0) {
    uVar3 = (*(code *)PTR_inet_ntoa_00423478)(local_20c[0]);
    (*(code *)PTR_sprintf_0042344c)(auStack_100,"opt dns %s\n",uVar3);
    (*(code *)PTR_write_line_to_file_00423554)("/var/udhcpd.conf",2,auStack_100);
    local_218 = local_218 + 1;
  }
  iVar4 = (*(code *)PTR_memcmp_004234c4)(local_1ec,&DAT_004121a0,4);
  if (iVar4 != 0) {
    uVar3 = (*(code *)PTR_inet_ntoa_00423478)(local_1ec[0]);
    (*(code *)PTR_sprintf_0042344c)(auStack_100,"opt dns %s\n",uVar3);
    (*(code *)PTR_write_line_to_file_00423554)("/var/udhcpd.conf",2,auStack_100);
    local_218 = local_218 + 1;
  }
  iVar4 = (*(code *)PTR_memcmp_004234c4)(local_1cc,&DAT_004121a0,4);
  if (iVar4 != 0) {
    uVar3 = (*(code *)PTR_inet_ntoa_00423478)(local_1cc[0]);
    (*(code *)PTR_sprintf_0042344c)(auStack_100,"opt dns %s\n",uVar3);
    (*(code *)PTR_write_line_to_file_00423554)("/var/udhcpd.conf",2,auStack_100);
    local_218 = local_218 + 1;
  }
  if (local_218 != 0) goto LAB_0040d894;
  if (param_2 == 1) {
    (*(code *)PTR_apmib_get_0042354c)(0xac,local_140);
    iVar4 = (*(code *)PTR_memcmp_004234c4)(local_140,&DAT_004121a0,4);
    if (iVar4 == 0) {
      (*(code *)PTR_apmib_get_0042354c)(0xaa,local_140);
      iVar4 = (*(code *)PTR_memcmp_004234c4)(local_140,&DAT_004121a0,4);
      goto joined_r0x0040d838;
    }
  }
  else {
    (*(code *)PTR_apmib_get_0042354c)(0xaa,local_140);
    iVar4 = (*(code *)PTR_memcmp_004234c4)(local_140,&DAT_004121a0,4);
joined_r0x0040d838:
    if (iVar4 == 0) goto LAB_0040d894;
  }
  uVar3 = (*(code *)PTR_inet_ntoa_00423478)(local_140[0]);
  (*(code *)PTR_sprintf_0042344c)(auStack_100,"opt dns %s\n",uVar3);
  (*(code *)PTR_write_line_to_file_00423554)("/var/udhcpd.conf",2,auStack_100);
LAB_0040d894:
  (*(code *)PTR_memset_00423490)(local_180,0,0x40);
  (*(code *)PTR_apmib_get_0042354c)(0xc6,local_180);
  if (local_180[0]._0_1_ != '\0') {
    (*(code *)PTR_sprintf_0042344c)(auStack_100,"opt domain %s\n",local_180);
    (*(code *)PTR_write_line_to_file_00423554)("/var/udhcpd.conf",2,auStack_100);
  }
  local_218 = 0;
  (*(code *)PTR_apmib_get_0042354c)(0x124,&local_218);
  if ((local_218 == 1) && ((*(code *)PTR_apmib_get_0042354c)(0x125,&local_210), 0 < local_210)) {
    for (iVar4 = 1; iVar4 <= local_210; iVar4 = iVar4 + 1) {
      local_1ac = CONCAT13((char)iVar4,local_1ac._1_3_);
      (*(code *)PTR_apmib_get_0042354c)(0x8126,&local_1ac);
      uVar2 = local_1a3;
      uVar1 = local_1a4;
      local_2c = (uint)local_1a8;
      local_30 = (uint)local_1a7;
      local_34 = (uint)local_1a6;
      local_38 = (uint)local_1a5;
      uVar3 = (*(code *)PTR_inet_ntoa_00423478)(local_1ac);
      (*(code *)PTR_sprintf_0042344c)
                (auStack_100,"static_lease %02x%02x%02x%02x%02x%02x %s\n",local_2c,local_30,local_34
                 ,local_38,uVar1,uVar2,uVar3);
      (*(code *)PTR_write_line_to_file_00423554)("/var/udhcpd.conf",2,auStack_100);
    }
  }
  (*(code *)PTR_apmib_get_0042354c)(0xaa,local_180);
  uVar3 = (*(code *)PTR_inet_ntoa_00423478)(local_180[0]);
  (*(code *)PTR_strcpy_004235e0)(local_20c,uVar3);
  (*(code *)PTR_apmib_get_0042354c)(0xab,local_140);
  uVar3 = (*(code *)PTR_inet_ntoa_00423478)(local_140[0]);
  (*(code *)PTR_strcpy_004235e0)(local_1ec,uVar3);
  (*(code *)PTR_RunSystemCmd_00423428)(0,"ifconfig",param_1,local_20c,"netmask",local_1ec,"");
  (*(code *)PTR_sprintf_0042344c)(auStack_9c,"udhcpd %s\n","/var/udhcpd.conf");
  (*(code *)PTR_system_00423558)(auStack_9c);
  return;
}


/* setWlan_Applications @ 0040db60 */

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
  
  (*(code *)PTR_memset_00423490)(local_2ac,0,200);
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
  (*(code *)PTR_memset_00423490)(acStack_54c,0,0x1e);
  (*(code *)PTR_memset_00423490)(auStack_52c,0,0x1e);
  (*(code *)PTR_memset_00423490)(local_50c,0,0x1e);
  (*(code *)PTR_memset_00423490)(local_1e4,0,200);
  (*(code *)PTR_memset_00423490)(local_11c,0,200);
  (*(code *)PTR_memset_00423490)(acStack_4ec,0,0x1e);
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
  (*(code *)PTR_memset_00423490)(local_47c,0,0x40);
  local_590 = 0;
  (*(code *)PTR_strcpy_004235e0)(auStack_374,param_2);
  iVar3 = (*(code *)PTR_strtok_r_004235c8)(auStack_374," ",&local_590);
  if (iVar3 != 0) {
    do {
      (*(code *)PTR_strcpy_004235e0)(acStack_57c,iVar3);
      iVar3 = (*(code *)PTR_strncmp_004234e4)(acStack_57c,&DAT_00411bb0,4);
      pcVar6 = acStack_4ec;
      pcVar8 = acStack_57c;
      pcVar14 = (code *)PTR_strcpy_004235e0;
      if ((iVar3 == 0) && (pcVar6 = local_11c, local_11c[0] != '\0')) {
        (*(code *)PTR_sprintf_0042344c)(acStack_54c," %s",acStack_57c);
        pcVar8 = acStack_54c;
        pcVar14 = (code *)PTR_strcat_00423508;
      }
      (*pcVar14)(pcVar6,pcVar8);
      iVar3 = (*(code *)PTR_strtok_r_004235c8)(0," ",&local_590);
    } while (iVar3 != 0);
  }
  iVar3 = (*(code *)PTR_isFileExist_004233d8)("/var/run/iwcontrol.pid");
  if (iVar3 != 0) {
    iVar3 = (*(code *)PTR_getPid_fromFile_004235b0)("/var/run/iwcontrol.pid");
    if (iVar3 != -1) {
      local_34 = acStack_588;
      (*(code *)PTR_sprintf_0042344c)(acStack_588,&DAT_004117f4,iVar3);
      (*(code *)PTR_RunSystemCmd_00423428)(0,&DAT_004112c4,&DAT_004112cc,local_34,"");
    }
    (*(code *)PTR_unlink_004234d8)("/var/run/iwcontrol.pid");
  }
  local_590 = 0;
  (*(code *)PTR_strcpy_004235e0)(auStack_374,local_11c);
  iVar3 = (*(code *)PTR_strtok_r_004235c8)(auStack_374," ",&local_590);
  if (iVar3 != 0) {
    do {
      (*(code *)PTR_strcpy_004235e0)(acStack_57c,iVar3);
      iVar3 = (*(code *)PTR_strncmp_004234e4)(acStack_57c,&DAT_00411bb0,4);
      if (iVar3 == 0) {
        (*(code *)PTR_sprintf_0042344c)(local_43c,"/var/run/auth-%s.pid",acStack_57c);
        iVar3 = (*(code *)PTR_isFileExist_004233d8)(local_43c);
        if (iVar3 != 0) {
          iVar3 = (*(code *)PTR_getPid_fromFile_004235b0)(local_43c);
          if (iVar3 != -1) {
            local_34 = acStack_588;
            (*(code *)PTR_sprintf_0042344c)(acStack_588,&DAT_004117f4,iVar3);
            (*(code *)PTR_RunSystemCmd_00423428)(0,&DAT_004112c4,&DAT_004112cc,local_34,"");
          }
          (*(code *)PTR_unlink_004234d8)(local_43c);
          (*(code *)PTR_sprintf_0042344c)(auStack_3d8,"/var/run/auth-%s-vxd.pid",acStack_57c);
          iVar3 = (*(code *)PTR_isFileExist_004233d8)(auStack_3d8);
          if (iVar3 != 0) {
            iVar3 = (*(code *)PTR_getPid_fromFile_004235b0)(auStack_3d8);
            if (iVar3 != -1) {
              local_34 = acStack_588;
              (*(code *)PTR_sprintf_0042344c)(acStack_588,&DAT_004117f4,iVar3);
              (*(code *)PTR_RunSystemCmd_00423428)(0,&DAT_004112c4,&DAT_004112cc,local_34,"");
            }
            (*(code *)PTR_unlink_004234d8)(auStack_3d8);
          }
        }
        (*(code *)PTR_sprintf_0042344c)(auStack_3d8,"/var/run/wscd-%s.pid",acStack_57c);
        iVar3 = (*(code *)PTR_isFileExist_004233d8)(auStack_3d8);
        if (iVar3 != 0) {
          iVar3 = (*(code *)PTR_getPid_fromFile_004235b0)(auStack_3d8);
          if (iVar3 != -1) {
            local_34 = acStack_588;
            (*(code *)PTR_sprintf_0042344c)(acStack_588,&DAT_004117f4,iVar3);
            (*(code *)PTR_RunSystemCmd_00423428)(0,&DAT_004112c4,&DAT_004112cc,local_34,"");
          }
          (*(code *)PTR_unlink_004234d8)(auStack_3d8);
        }
        (*(code *)PTR_RunSystemCmd_00423428)("/proc/gpio",&DAT_00411830,&DAT_00411f80,"");
      }
      do {
        iVar3 = (*(code *)PTR_isFileExist_004233d8)("/var/run/wscd-wlan0.pid");
        if (iVar3 == 0) {
          iVar3 = (*(code *)PTR_isFileExist_004233d8)("/var/run/wscd-wlan1.pid");
          if (iVar3 == 0) {
            iVar3 = (*(code *)PTR_isFileExist_004233d8)("/var/run/wscd-wlan0-wlan1.pid");
            if ((iVar3 == 0) ||
               (iVar3 = (*(code *)PTR_getPid_fromFile_004235b0)("/var/run/wscd-wlan0-wlan1.pid"),
               iVar3 == -1)) break;
            (*(code *)PTR_sprintf_0042344c)(acStack_588,&DAT_004117f4,iVar3);
            (*(code *)PTR_RunSystemCmd_00423428)(0,&DAT_004112c4,&DAT_004112cc,acStack_588,"");
            pcVar6 = "/var/run/wscd-wlan0-wlan1.pid";
          }
          else {
            iVar3 = (*(code *)PTR_getPid_fromFile_004235b0)("/var/run/wscd-wlan1.pid");
            if (iVar3 == -1) break;
            (*(code *)PTR_sprintf_0042344c)(acStack_588,&DAT_004117f4,iVar3);
            (*(code *)PTR_RunSystemCmd_00423428)(0,&DAT_004112c4,&DAT_004112cc,acStack_588,"");
            pcVar6 = "/var/run/wscd-wlan1.pid";
          }
        }
        else {
          iVar3 = (*(code *)PTR_getPid_fromFile_004235b0)("/var/run/wscd-wlan0.pid");
          if (iVar3 == -1) break;
          (*(code *)PTR_sprintf_0042344c)(acStack_588,&DAT_004117f4,iVar3);
          (*(code *)PTR_RunSystemCmd_00423428)(0,&DAT_004112c4,&DAT_004112cc,acStack_588,"");
          pcVar6 = "/var/run/wscd-wlan0.pid";
        }
        (*(code *)PTR_unlink_004234d8)(pcVar6);
        (*(code *)PTR_sleep_00423550)(1);
        iVar3 = (*(code *)PTR_find_pid_by_name_00423568)(&DAT_00412264);
      } while (0 < iVar3);
      iVar3 = (*(code *)PTR_strtok_r_004235c8)(0," ",&local_590);
    } while (iVar3 != 0);
  }
  iVar3 = (*(code *)PTR_isFileExist_004233d8)("/var/run/iapp.pid");
  if (iVar3 != 0) {
    iVar3 = (*(code *)PTR_getPid_fromFile_004235b0)("/var/run/iapp.pid");
    if (iVar3 != -1) {
      local_34 = acStack_588;
      (*(code *)PTR_sprintf_0042344c)(acStack_588,&DAT_004117f4,iVar3);
      (*(code *)PTR_RunSystemCmd_00423428)(0,&DAT_004112c4,&DAT_004112cc,local_34,"");
    }
    (*(code *)PTR_unlink_004234d8)("/var/run/iapp.pid");
  }
  (*(code *)PTR_system_00423558)("rm -f /var/*.fifo");
  iVar3 = (*(code *)PTR_strcmp_00423464)(param_1,&DAT_004112c4);
  if (iVar3 != 0) {
    (*(code *)PTR_puts_00423564)("Init Wlan application...");
    iVar3 = (*(code *)PTR_SetWlan_idx_00423580)("wlan0");
    if (iVar3 != 0) {
      (*(code *)PTR_apmib_get_0042354c)(0x16,&local_5e4);
      (*(code *)PTR_apmib_get_0042354c)(0x3b,&local_5e8);
      (*(code *)PTR_apmib_get_0042354c)(0x3e,&local_5dc);
      (*(code *)PTR_apmib_get_0042354c)(0x10e,&local_5d8);
      (*(code *)PTR_apmib_get_0042354c)(0x23,&local_5d0);
      (*(code *)PTR_apmib_get_0042354c)(0x19,&local_5cc);
      (*(code *)PTR_apmib_get_0042354c)(0x2d,&local_5c8);
      (*(code *)PTR_apmib_get_0042354c)(0x3c,&local_5d4);
      (*(code *)PTR_apmib_get_0042354c)(0x1c,&local_5e0);
      (*(code *)PTR_apmib_get_0042354c)(0x117,&local_58c);
    }
    local_590 = 0;
    (*(code *)PTR_strcpy_004235e0)(auStack_374,local_11c);
    bVar2 = false;
    iVar3 = (*(code *)PTR_strtok_r_004235c8)(auStack_374," ",&local_590);
    if (iVar3 != 0) {
      cVar10 = '\0';
      local_50 = (int *)0x0;
      local_44 = 0;
      bVar11 = false;
      local_40 = 0;
      local_38 = 0;
      local_3c = 0;
      do {
        (*(code *)PTR_strcpy_004235e0)(acStack_57c,iVar3);
        iVar3 = (*(code *)PTR_strncmp_004234e4)(acStack_57c,&DAT_00411bb0,4);
        if (iVar3 == 0) {
          uVar4 = (*(code *)PTR_strlen_004233e8)(acStack_57c);
          cVar13 = '\0';
          if (8 < uVar4) {
            cVar13 = local_576;
            cVar10 = local_575;
          }
          iVar3 = (*(code *)PTR_SetWlan_idx_00423580)(acStack_57c);
          if (iVar3 != 0) {
            (*(code *)PTR_apmib_get_0042354c)(0x16,&local_5c4);
            (*(code *)PTR_apmib_get_0042354c)(0x3b,&local_5c0);
            (*(code *)PTR_apmib_get_0042354c)(0x3f,&local_5bc);
            (*(code *)PTR_apmib_get_0042354c)(0x40,&local_5b8);
            (*(code *)PTR_apmib_get_0042354c)(0x19,&local_5b4);
            (*(code *)PTR_apmib_get_0042354c)(0x1c,&local_5ac);
            if ((local_5c4 == 0) && (3 < local_5c0)) {
              (*(code *)PTR_apmib_get_0042354c)(0x22f,&local_5a8);
            }
            if ((((local_5c4 == 0) && (local_5c0 - 2U < 2)) && (local_5bc != 0)) &&
               ((local_5b8 != 0 &&
                ((*(code *)PTR_apmib_get_0042354c)(0x45,&local_5b0), local_5b0 - 3U < 2)))) {
              (*(code *)PTR_sprintf_0042344c)(local_43c,"/var/wpa-wds-%s.conf",acStack_57c);
              (*(code *)PTR_RunSystemCmd_00423428)
                        (0,"flash",&DAT_004122c8,acStack_57c,local_43c,&DAT_004122cc,"");
              (*(code *)PTR_RunSystemCmd_00423428)
                        (0,&DAT_004122d0,acStack_57c,acStack_4ec,&DAT_004122cc,local_43c,"");
              local_4c = auStack_3d8;
              (*(code *)PTR_sprintf_0042344c)(local_4c,"/var/run/auth-%s.pid",acStack_57c);
              iVar3 = 0;
              do {
                iVar3 = iVar3 + 1;
                iVar5 = (*(code *)PTR_isFileExist_004233d8)(local_4c);
                if (iVar5 != 0) break;
                (*(code *)PTR_sleep_00423550)(1);
              } while (iVar3 != 10);
            }
            if (local_5b4 < 2) {
              (*(code *)PTR_apmib_get_0042354c)(0x23,&local_5a4);
              (*(code *)PTR_apmib_get_0042354c)(0x2d,&local_5a0);
              if ((local_5a4 == 0) && (local_5a0 == 0)) {
LAB_0040e95c:
                bVar1 = false;
                local_4c = (undefined1 *)0x0;
              }
              else {
LAB_0040e950:
                bVar1 = true;
                local_4c = (undefined1 *)0x1;
              }
            }
            else {
              if (local_5b4 == 7) goto LAB_0040e95c;
              if (local_5ac == 1) goto LAB_0040e950;
              bVar1 = false;
              local_4c = (undefined1 *)0x1;
            }
            if (((local_5c4 == 0) && (3 < local_5c0)) && (local_5a8 != 0)) {
              local_48 = local_43c;
              (*(code *)PTR_sprintf_0042344c)(local_43c,"/var/wpa-%s-msh0.conf",acStack_57c);
              (*(code *)PTR_RunSystemCmd_00423428)
                        (0,"flash",&DAT_004122c8,acStack_57c,local_48,&DAT_00412064,"");
              (*(code *)PTR_RunSystemCmd_00423428)
                        (0,&DAT_004122d0,acStack_57c,acStack_4ec,&DAT_00412064,local_48,"");
              local_48 = auStack_3d8;
              (*(code *)PTR_sprintf_0042344c)(local_48,"/var/run/auth-%s.pid",acStack_57c);
              iVar3 = 0;
              do {
                iVar3 = iVar3 + 1;
                iVar5 = (*(code *)PTR_isFileExist_004233d8)(local_48);
                if (iVar5 != 0) break;
                (*(code *)PTR_sleep_00423550)(1);
              } while (iVar3 != 10);
            }
            if ((local_4c == (undefined1 *)0x0) || (local_5c4 != 0)) {
LAB_0040ec18:
              if (cVar13 == 'v') {
LAB_0040ec20:
                if (cVar10 == 'x') {
                  if ((local_5c4 == 0) &&
                     ((iVar3 = (*(code *)PTR_strcmp_00423464)(auStack_52c,&DAT_004122d0), iVar3 != 0
                      || (bVar1)))) {
                    pcVar8 = local_50c;
                    (*(code *)PTR_strcat_00423508)(pcVar8," ");
                    pcVar6 = acStack_57c;
                    pcVar14 = (code *)PTR_strcat_00423508;
                    goto LAB_0040ecec;
                  }
                }
                else if (cVar10 == 'a') goto LAB_0040eca4;
              }
              else {
LAB_0040ec90:
                if (cVar10 != 'x') {
                  (*(code *)PTR_apmib_get_0042354c)(0x3e,&local_594);
                  (*(code *)PTR_apmib_get_0042354c)(0x10e,&local_598);
                  if (((local_3c != 0) || (local_594 == 0)) || (local_598 == 0)) {
                    pcVar6 = acStack_57c;
                    pcVar14 = (code *)PTR_strcpy_004235e0;
                    if (local_1e4[0] != '\0') {
                      (*(code *)PTR_sprintf_0042344c)(acStack_54c," %s",pcVar6);
                      pcVar6 = acStack_54c;
                      pcVar14 = (code *)PTR_strcat_00423508;
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
              (*(code *)PTR_sprintf_0042344c)(local_43c,"/var/wpa-%s.conf",local_34);
              (*(code *)PTR_RunSystemCmd_00423428)(0,"flash",&DAT_004122c8,local_34,local_43c,"");
              pcVar6 = "auth";
              if (local_5c0 == 1) {
                (*(code *)PTR_apmib_get_0042354c)(0x3c,&local_59c);
                if (local_59c == 0) {
                  pcVar6 = "client-infra";
                }
                else {
                  pcVar6 = "client-adhoc";
                }
              }
              (*(code *)PTR_strcpy_004235e0)(auStack_52c,pcVar6);
              if (((cVar13 == 'v') && (cVar10 == 'a')) && ((local_5e8 != 0 && (local_5e8 != 3)))) {
                local_40 = 1;
              }
              if (((local_5c0 == 2) || (local_40 != 0)) || ((local_5ac == 2 && (!bVar1))))
              goto LAB_0040ec18;
              (*(code *)PTR_RunSystemCmd_00423428)
                        (0,&DAT_004122d0,acStack_57c,acStack_4ec,auStack_52c,local_43c,"");
              bVar2 = true;
              if (cVar13 != 'v') {
                local_3c = 1;
                goto LAB_0040ec90;
              }
              if (cVar10 != 'a') {
                local_3c = 1;
                goto LAB_0040ec20;
              }
              local_38 = 1;
LAB_0040eca4:
              if ((local_5c4 == 0) && ((local_5dc == 0 || (local_38 != 0)))) {
                pcVar8 = local_1e4;
                pcVar6 = acStack_57c;
                pcVar14 = (code *)PTR_strcpy_004235e0;
                if (local_1e4[0] != '\0') {
                  (*(code *)PTR_sprintf_0042344c)(acStack_54c," %s",pcVar6);
                  pcVar6 = acStack_54c;
                  pcVar14 = (code *)PTR_strcat_00423508;
                }
LAB_0040ecec:
                (*pcVar14)(pcVar8,pcVar6);
              }
            }
          }
        }
        iVar3 = (*(code *)PTR_strtok_r_004235c8)(0," ",&local_590);
      } while (iVar3 != 0);
      if (((bVar11) && (local_44 == 1)) && (local_50 == (int *)0x1)) {
        local_590 = 0;
        (*(code *)PTR_strcpy_004235e0)(auStack_374,local_1e4);
        pcVar6 = (char *)(*(code *)PTR_strtok_r_004235c8)(auStack_374," ",&local_590);
        if (pcVar6 != (char *)0x0) {
          local_50 = &local_5e8;
          do {
            local_34 = pcVar6;
            iVar3 = (*(code *)PTR_strcmp_00423464)(pcVar6,"wlan0");
            if ((iVar3 == 0) ||
               (iVar3 = (*(code *)PTR_strcmp_00423464)(local_34,"wlan1"), iVar3 == 0)) {
              (*(code *)PTR_SetWlan_idx_00423580)(local_34);
              (*(code *)PTR_apmib_get_0042354c)(0x3b,local_50);
              (*(code *)PTR_apmib_get_0042354c)(0x3e,&local_5dc);
              if ((((local_5e8 == 0) || ((local_5e8 == 3 || (local_5e8 == 4)))) || (local_5e8 == 6))
                 && (local_5dc == 0)) goto LAB_0040efb0;
            }
            else {
LAB_0040efb0:
              pcVar6 = local_34;
              pcVar14 = (code *)PTR_strcpy_004235e0;
              if (local_2ac[0] != '\0') {
                (*(code *)PTR_sprintf_0042344c)(acStack_54c," %s");
                pcVar6 = acStack_54c;
                pcVar14 = (code *)PTR_strcat_00423508;
              }
              (*pcVar14)(local_2ac,pcVar6);
            }
            pcVar6 = (char *)(*(code *)PTR_strtok_r_004235c8)(0," ",&local_590);
          } while (pcVar6 != (char *)0x0);
        }
        (*(code *)PTR_sprintf_0042344c)(local_43c,"iapp %s %s",acStack_4ec,local_2ac);
        (*(code *)PTR_system_00423558)(local_43c);
        iVar3 = (*(code *)PTR_isFileExist_004233d8)("/var/restart_iapp");
        if (iVar3 != 0) {
          (*(code *)PTR_unlink_004234d8)("/var/restart_iapp");
        }
        (*(code *)PTR_RunSystemCmd_00423428)("/var/restart_iapp",&DAT_00411830,local_43c,"");
        bVar2 = true;
      }
    }
    iVar3 = (*(code *)PTR_isFileExist_004233d8)("/bin/wscd");
    if (iVar3 != 0) {
      (*(code *)PTR_memset_00423490)(local_43c,0,100);
      (*(code *)PTR_memset_00423490)(auStack_3d8,0,100);
      local_590 = 0;
      (*(code *)PTR_strcpy_004235e0)(auStack_374,local_1e4);
      pcVar6 = (char *)(*(code *)PTR_strtok_r_004235c8)(auStack_374," ",&local_590);
      while (pcVar6 != (char *)0x0) {
        (*(code *)PTR_memset_00423490)(acStack_4cc,0,0x28);
        (*(code *)PTR_memset_00423490)(acStack_4a4,0,0x28);
        iVar3 = (*(code *)PTR_strcmp_00423464)(pcVar6,"wlan0");
        if ((iVar3 == 0) || (iVar3 = (*(code *)PTR_strcmp_00423464)(pcVar6,"wlan1"), iVar3 == 0)) {
          (*(code *)PTR_SetWlan_idx_00423580)(pcVar6);
          (*(code *)PTR_apmib_get_0042354c)(0x3b,&local_5e8);
          (*(code *)PTR_apmib_get_0042354c)(0x23,&local_5d0);
          (*(code *)PTR_apmib_get_0042354c)(0x19,&local_5cc);
          (*(code *)PTR_apmib_get_0042354c)(0x2d,&local_5c8);
          (*(code *)PTR_apmib_get_0042354c)(0x1c,&local_5e0);
          (*(code *)PTR_apmib_get_0042354c)(0x117,&local_58c);
          uVar4 = local_5cc;
          local_5e4 = 0;
          local_5d4 = 0;
          uVar12 = local_5cc ^ 7;
          if ((1 < (int)local_5cc) || (bVar11 = true, uVar12 = local_5c8, local_5d0 == 0)) {
            bVar11 = uVar12 != 0;
          }
          iVar3 = (*(code *)PTR_strcmp_00423464)(pcVar6,"wlan0");
          if ((iVar3 == 0) && ((local_5d8 != 0 || (local_5e8 == 2)))) goto LAB_0040f808;
          if (local_5e8 == 0) {
            if ((int)uVar4 < 2) {
              if (!bVar11) goto LAB_0040f328;
            }
            else if ((uVar4 == 7) || (local_5e0 != 1)) goto LAB_0040f328;
          }
          else {
LAB_0040f328:
            local_47c[3] = (char *)0x0;
            local_47c[1] = (char *)0x0;
            local_47c[2] = (undefined *)0x0;
            local_47c[0] = "wscd";
            iVar3 = (*(code *)PTR_isFileExist_004233d8)("/var/wps/simplecfgservice.xml");
            if (iVar3 == 0) {
              iVar3 = (*(code *)PTR_isFileExist_004233d8)("/var/wps");
              if (iVar3 != 0) {
                (*(code *)PTR_RunSystemCmd_00423428)(0,&DAT_0041189c,"/var/wps",&DAT_00412384,"");
              }
              (*(code *)PTR_RunSystemCmd_00423428)(0,"mkdir","/var/wps","");
              (*(code *)PTR_system_00423558)("cp /etc/simplecfg*.xml /var/wps");
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
              (*(code *)PTR_RunSystemCmd_00423428)
                        (0,"route",&DAT_0041209c,&DAT_00411f04,"239.255.255.250","netmask",
                         "255.255.255.255",acStack_4ec,"");
              (*(code *)PTR_RunSystemCmd_00423428)
                        (0,"route",&DAT_00411f00,&DAT_00411f04,local_34,local_30,local_2c,
                         acStack_4ec,"");
            }
            (*(code *)PTR_sprintf_0042344c)(acStack_4cc,"/var/wsc-%s.conf",pcVar6);
            (*(code *)PTR_RunSystemCmd_00423428)
                      (0,"flash","upd-wsc-conf","/etc/wscd.conf",acStack_4cc,pcVar6,"");
            local_47c[iVar3] = "-c";
            local_47c[iVar3 + 1] = acStack_4cc;
            local_47c[iVar3 + 2] = "-w";
            local_47c[iVar3 + 3] = pcVar6;
            local_47c[iVar3 + 4] = "-fi";
            (*(code *)PTR_sprintf_0042344c)(acStack_4a4,"/var/wscd-%s.fifo",pcVar6);
            local_47c[iVar3 + 5] = acStack_4a4;
            iVar5 = (*(code *)PTR_isFileExist_004233d8)("/var/wps_start_pbc");
            iVar9 = iVar3 + 6;
            if (iVar5 != 0) {
              local_47c[iVar9] = "-start_pbc";
              (*(code *)PTR_unlink_004234d8)("/var/wps_start_pbc");
              iVar9 = iVar3 + 7;
            }
            iVar3 = (*(code *)PTR_isFileExist_004233d8)("/var/wps_start_pin");
            if (iVar3 != 0) {
              local_47c[iVar9] = "-start";
              (*(code *)PTR_unlink_004234d8)("/var/wps_start_pin");
              iVar9 = iVar9 + 1;
            }
            iVar3 = (*(code *)PTR_isFileExist_004233d8)("/var/wps_local_pin");
            if (iVar3 != 0) {
              iVar3 = (*(code *)PTR_fopen_00423498)("/var/wps_local_pin",&DAT_00411fe4);
              if (iVar3 != 0) {
                (*(code *)PTR_fscanf_0042358c)(iVar3,"%s",auStack_3d8);
                (*(code *)PTR_fclose_00423480)(iVar3);
              }
              (*(code *)PTR_strcpy_004235e0)(&local_56c,auStack_3d8);
              local_47c[iVar9] = "-local_pin";
              local_47c[iVar9 + 1] = (char *)&local_56c;
              (*(code *)PTR_unlink_004234d8)("/var/wps_local_pin");
              iVar9 = iVar9 + 2;
            }
            iVar5 = (*(code *)PTR_isFileExist_004233d8)("/var/wps_peer_pin");
            iVar7 = iVar9 + 1;
            iVar3 = iVar9;
            if (iVar5 != 0) {
              iVar3 = (*(code *)PTR_fopen_00423498)("/var/wps_peer_pin",&DAT_00411fe4);
              if (iVar3 != 0) {
                (*(code *)PTR_fscanf_0042358c)(iVar3,"%s",auStack_3d8);
                (*(code *)PTR_fclose_00423480)(iVar3);
              }
              (*(code *)PTR_strcpy_004235e0)(&local_55c,auStack_3d8);
              local_47c[iVar9] = "-peer_pin";
              local_47c[iVar9 + 1] = (char *)&local_55c;
              (*(code *)PTR_unlink_004234d8)("/var/wps_peer_pin");
              iVar3 = iVar9 + 2;
              iVar7 = iVar9 + 3;
            }
            local_47c[iVar3] = "-daemon";
            local_47c[iVar7] = (char *)0x0;
            (*(code *)PTR_DoCmd_00423410)(local_47c,0);
            bVar2 = true;
          }
LAB_0040f808:
          iVar3 = 5;
          do {
            iVar5 = (*(code *)PTR_isFileExist_004233d8)(acStack_4a4);
            if (iVar5 != 0) break;
            iVar3 = iVar3 + -1;
            (*(code *)PTR_sleep_00423550)(1);
          } while (iVar3 != 0);
        }
        pcVar6 = (char *)(*(code *)PTR_strtok_r_004235c8)(0," ",&local_590);
      }
    }
    if (bVar2) {
      if (local_50c[0] == '\0') {
        (*(code *)PTR_sprintf_0042344c)(local_43c,"iwcontrol %s",local_1e4);
      }
      else {
        (*(code *)PTR_sprintf_0042344c)(local_43c,"iwcontrol %s %s",local_1e4,local_50c);
      }
      (*(code *)PTR_system_00423558)(local_43c);
    }
  }
  return 0;
}


/* get_eaProtocol_name @ 0040f910 */

void get_eaProtocol_name(void)

{
  return;
}


/* get_ea_bundle_seed_id @ 0040f918 */

void get_ea_bundle_seed_id(int param_1)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0040f930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR_strcpy_004235e0)(param_1,"");
    return;
  }
  return;
}


/* get_ssid_name @ 0040f940 */

void get_ssid_name(int param_1)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0040f958. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR_strcpy_004235e0)(param_1,"Metering-Outlet");
    return;
  }
  return;
}


/* get_wac_name @ 0040f968 */

void get_wac_name(int param_1)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0040f980. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR_strcpy_004235e0)(param_1,"Metering-Outlet");
    return;
  }
  return;
}


/* FUN_0040f990 @ 0040f990 */

void FUN_0040f990(void)

{
  undefined4 *puVar1;
  code *pcVar2;
  
  puVar1 = (undefined4 *)(PTR_DAT_00423388 + 0x24e4);
  while( true ) {
    pcVar2 = (code *)*puVar1;
    puVar1 = puVar1 + -1;
    if (pcVar2 == (code *)0xffffffff) break;
    (*pcVar2)();
  }
  return;
}


/* _fini @ 0040fef0 */

void _fini(void)

{
  FUN_00401a30();
  return;
}


