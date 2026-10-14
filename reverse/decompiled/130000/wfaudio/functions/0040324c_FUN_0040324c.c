/* FUN_0040324c @ 0040324c */

void FUN_0040324c(void)

{
  bool bVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined2 uVar6;
  
  (*(code *)PTR_pthread_mutex_lock_0042312c)(PTR_WACWifiConnectingState_Lock_004232bc);
  iVar5 = NetWACFlag;
  (*(code *)PTR_pthread_mutex_unlock_00423178)(PTR_WACWifiConnectingState_Lock_004232bc);
  (*(code *)PTR_pthread_mutex_lock_0042312c)(PTR_WACGlobal_Lock_00423238);
  iVar4 = m_WACServerStart;
  iVar3 = m_WACMonitorThreadRunning;
  bVar1 = 0x708 < m_WACServerCounter;
  (*(code *)PTR_pthread_mutex_unlock_00423178)(PTR_WACGlobal_Lock_00423238);
  puVar2 = PTR_stderr_00423160;
  if (bVar1) {
    (*(code *)PTR_fprintf_00423224)
              (*(undefined4 *)PTR_stderr_00423160,
               "\nFILE %s FUNCTION %s LINE %d: : WAC Server timeout! should not start WACServer, just start SoftAP is oK! \n\n"
               ,"wfaudio.c","startWACServer",0x2e1);
    Reset_to_AP();
    (*(code *)PTR_pthread_mutex_lock_0042312c)(PTR_WACGlobal_Lock_00423238);
    if (Apple_vendor_IE != '\0') {
      (*(code *)PTR_fprintf_00423224)
                (*(undefined4 *)puVar2,"\nFILE %s FUNCTION %s LINE %d: DeleteWlanIE\n\n","wfaudio.c"
                 ,"startWACServer",0x2e7);
      uVar6 = (*(code *)PTR_strlen_00423108)(&Apple_vendor_IE);
      (*(code *)PTR_DeleteWlanIE_004232c0)("wlan0",&Apple_vendor_IE,uVar6);
      (*(code *)PTR_memset_004231a8)(&Apple_vendor_IE,0,0x100);
    }
    (*(code *)PTR_pthread_mutex_unlock_00423178)(PTR_WACGlobal_Lock_00423238);
                    /* WARNING: Could not recover jumptable at 0x004033f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR_setinit_004232e0)();
    return;
  }
  if (iVar5 == 1) {
    (*(code *)PTR_pthread_mutex_lock_0042312c)(PTR_WACWifiConnectingState_Lock_004232bc);
    (*(code *)PTR_strcpy_004232f4)(&dst_connect_ap_info,"wlan0");
    (*(code *)PTR_pthread_mutex_unlock_00423178)(PTR_WACWifiConnectingState_Lock_004232bc);
    (*(code *)PTR_pthread_mutex_lock_0042312c)(PTR_WACWifiConnecting_Lock_004232f0);
    m_WACWifiConnecting = iVar5;
                    /* WARNING: Could not recover jumptable at 0x00403484. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR_pthread_mutex_unlock_00423178)(PTR_WACWifiConnecting_Lock_004232f0);
    return;
  }
  if (iVar4 != 0) {
    FUN_0040288c();
  }
  (*(code *)PTR_unlink_004231f0)("/tmp/net/apple_ie.txt");
  (*(code *)PTR_unlink_004231f0)("/tmp/net/wac_state.txt");
  FUN_00402ae0();
  (*(code *)PTR_system_00423270)("WACServer &");
  (*(code *)PTR_pthread_mutex_lock_0042312c)(PTR_WACGlobal_Lock_00423238);
  m_WACServerCounter = 0;
  (*(code *)PTR_pthread_mutex_unlock_00423178)(PTR_WACGlobal_Lock_00423238);
  if (iVar3 == 0) {
    (*(code *)PTR_pthread_mutex_lock_0042312c)(PTR_WACGlobal_Lock_00423238);
    m_WACServerStart = 1;
    m_WACMonitorThreadRunning = 1;
    (*(code *)PTR_pthread_mutex_unlock_00423178)(PTR_WACGlobal_Lock_00423238);
    (*(code *)PTR_pthread_create_004232cc)
              (PTR_m_thread_RT_WACServer_monitor_004231d8,0,FUN_004038d8,0);
    (*(code *)PTR_pthread_detach_00423254)
              (*(undefined4 *)PTR_m_thread_RT_WACServer_monitor_004231d8);
                    /* WARNING: Could not recover jumptable at 0x004035b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR_ChangeLEDConfiguring_00423288)(1);
    return;
  }
  return;
}

