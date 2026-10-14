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

