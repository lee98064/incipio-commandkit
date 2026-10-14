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

