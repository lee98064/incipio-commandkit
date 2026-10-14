/* FUN_004035dc @ 004035dc */

void FUN_004035dc(void)

{
  int iVar1;
  undefined2 uVar2;
  undefined4 local_10 [2];
  
  local_10[0] = 0;
  iVar1 = (*(code *)PTR_SetWlan_idx_00423298)("wlan0");
  if (iVar1 != 0) {
    local_10[0] = 0;
    (*(code *)PTR_apmib_set_0042323c)(0x2b0,local_10);
  }
  Reset_to_AP();
  (*(code *)PTR_pthread_mutex_lock_0042312c)(PTR_WACGlobal_Lock_00423238);
  if (Apple_vendor_IE != '\0') {
    (*(code *)PTR_fprintf_00423224)
              (*(undefined4 *)PTR_stderr_00423160,"\nFILE %s FUNCTION %s LINE %d: DeleteWlanIE\n\n",
               "wfaudio.c","RestoreToUnConfigured",0x2a6);
    uVar2 = (*(code *)PTR_strlen_00423108)(&Apple_vendor_IE);
    (*(code *)PTR_DeleteWlanIE_004232c0)("wlan0",&Apple_vendor_IE,uVar2);
    (*(code *)PTR_memset_004231a8)(&Apple_vendor_IE,0,0x100);
  }
  m_WACMonitorThreadRunning = 0;
  m_WACServerStart = 0;
  m_WACServerCounter = 0;
  m_WACWifiInfoReady = 0;
  (*(code *)PTR_pthread_mutex_unlock_00423178)(PTR_WACGlobal_Lock_00423238);
  (*(code *)PTR_pthread_mutex_lock_0042312c)(PTR_WACWifiConnecting_Lock_004232f0);
  m_WACWifiConnecting = 0;
  (*(code *)PTR_pthread_mutex_unlock_00423178)(PTR_WACWifiConnecting_Lock_004232f0);
  (*(code *)PTR_pthread_mutex_lock_0042312c)(PTR_WACWifiConnectingState_Lock_004232bc);
  NetWACFlag = 0;
  (*(code *)PTR_strcpy_004232f4)(&dst_connect_ap_info,"wlan0-vxd");
  (*(code *)PTR_pthread_mutex_unlock_00423178)(PTR_WACWifiConnectingState_Lock_004232bc);
  (*(code *)PTR_system_00423270)("rm -f /tmp/net/airplay_name 2> /dev/null");
  (*(code *)PTR_system_00423270)("rm -f /tmp/net/airplay_password 2> /dev/null");
  (*(code *)PTR_system_00423270)("killall WACServer 2> /dev/null");
  (*(code *)PTR_unlink_004231f0)("/tmp/net/wac_state.txt");
  (*(code *)PTR_unlink_004231f0)("/tmp/net/wac_wifi_info_ready.txt");
  (*(code *)PTR_unlink_004231f0)("/tmp/net/wac_wifi_ssid_info.txt");
  (*(code *)PTR_unlink_004231f0)("/tmp/net/wac_wifi_pass_len_info.txt");
  (*(code *)PTR_unlink_004231f0)("/tmp/net/wac_wifi_pass_info.txt");
  (*(code *)PTR_unlink_004231f0)("/tmp/net/wac_applyName_info.txt");
  (*(code *)PTR_unlink_004231f0)("/tmp/net/wac_password_info.txt");
  (*(code *)PTR_unlink_004231f0)("/tmp/net/wac_notify_stop_swap.txt");
  (*(code *)PTR_unlink_004231f0)("/usr/local/etc/dvdplayer/wac_wifi_info.txt");
  (*(code *)PTR_setinit_004232e0)();
  FUN_0040324c();
  return;
}

