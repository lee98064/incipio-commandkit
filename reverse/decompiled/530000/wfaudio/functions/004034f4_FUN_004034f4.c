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

