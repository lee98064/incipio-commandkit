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

