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

