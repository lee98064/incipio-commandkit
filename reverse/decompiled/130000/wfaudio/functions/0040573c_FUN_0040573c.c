/* FUN_0040573c @ 0040573c */

undefined4 FUN_0040573c(short *param_1)

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
    (*(code *)PTR_printf_004232d4)("WFAudio User: Rcv Unknown NL Msg(%d)\n");
    return 0;
  }
  (*(code *)PTR_printf_004232d4)("Gpio state=%d\n",*(undefined4 *)(param_1 + 2));
  if (*(int *)(param_1 + 2) != 0) {
    return 0;
  }
  (*(code *)PTR_system_00423270)("source ./tmp/homekitclean.script");
  (*(code *)PTR_system_00423270)("phytrex_tools -dpi  WDATA");
  (*(code *)PTR_puts_0042327c)("[METER] Reset WRITEABLE data");
  iVar3 = (*(code *)PTR_SetWlan_idx_00423298)("wlan0");
  if (iVar3 != 0) {
    (*(code *)PTR_apmib_get_00423264)(0x2b0,local_18);
  }
  iVar3 = (*(code *)PTR_getWACServerState_00423154)();
  if (local_18[0] == 0) {
    (*(code *)PTR_pthread_mutex_lock_0042312c)(PTR_WACGlobal_Lock_00423238);
    iVar7 = *(int *)PTR_m_WACMonitorThreadRunning_00423140;
    iVar6 = *(int *)PTR_m_WACServerStart_00423124;
    (*(code *)PTR_pthread_mutex_unlock_00423178)(PTR_WACGlobal_Lock_00423238);
    if ((iVar7 != 0) || (iVar6 != 0)) {
      if (iVar3 < 3) {
        (*(code *)PTR_pthread_mutex_lock_0042312c)(PTR_WACGlobal_Lock_00423238);
        puVar2 = PTR_WACGlobal_Lock_00423238;
        puVar1 = PTR_pthread_mutex_unlock_00423178;
        *(undefined4 *)PTR_m_WACServerCounter_00423248 = 0;
        (*(code *)puVar1)(puVar2);
        pcVar5 = "WACServer is running just clean m_WACServerCounter";
        pcVar8 = (code *)PTR_puts_0042327c;
      }
      else {
        pcVar5 = "WAC  is in progress, do nothing";
        pcVar8 = (code *)PTR_puts_0042327c;
      }
      goto LAB_00405ac4;
    }
  }
  else {
    iVar3 = (*(code *)PTR_SetWlan_idx_00423298)("wlan0");
    if (iVar3 != 0) {
      local_18[0] = 0;
      (*(code *)PTR_apmib_set_0042323c)(0x2b0,local_18);
    }
  }
  puVar1 = PTR_Apple_vendor_IE_004232ac;
  (*(code *)PTR_Reset_to_AP_00423194)();
  (*(code *)PTR_pthread_mutex_lock_0042312c)(PTR_WACGlobal_Lock_00423238);
  if (*puVar1 != '\0') {
    uVar4 = (*(code *)PTR_strlen_00423108)(puVar1);
    (*(code *)PTR_DeleteWlanIE_004232c0)("wlan0",puVar1,uVar4);
    (*(code *)PTR_memset_004231a8)(puVar1,0,0x100);
  }
  puVar2 = PTR_WACGlobal_Lock_00423238;
  puVar1 = PTR_pthread_mutex_unlock_00423178;
  *(undefined4 *)PTR_m_WACMonitorThreadRunning_00423140 = 0;
  *(undefined4 *)PTR_m_WACServerStart_00423124 = 0;
  *(undefined4 *)PTR_m_WACServerCounter_00423248 = 0;
  *(undefined4 *)PTR_m_WACWifiInfoReady_00423240 = 0;
  (*(code *)puVar1)(puVar2);
  (*(code *)PTR_pthread_mutex_lock_0042312c)(PTR_WACWifiConnecting_Lock_004232f0);
  puVar2 = PTR_WACWifiConnecting_Lock_004232f0;
  puVar1 = PTR_pthread_mutex_unlock_00423178;
  *(undefined4 *)PTR_m_WACWifiConnecting_004230e0 = 0;
  (*(code *)puVar1)(puVar2);
  (*(code *)PTR_pthread_mutex_lock_0042312c)(PTR_WACWifiConnectingState_Lock_004232bc);
  puVar2 = PTR_strcpy_004232f4;
  puVar1 = PTR_dst_connect_ap_info_00423180;
  *(undefined4 *)PTR_NetWACFlag_004230ec = 0;
  (*(code *)puVar2)(puVar1,"wlan0-vxd");
  (*(code *)PTR_pthread_mutex_unlock_00423178)(PTR_WACWifiConnectingState_Lock_004232bc);
  (*(code *)PTR_system_00423270)("rm -f /tmp/net/airplay_name 2> /dev/null");
  (*(code *)PTR_system_00423270)("rm -f /tmp/net/airplay_password 2> /dev/null");
  (*(code *)PTR_system_00423270)("flash default-sw");
  (*(code *)PTR_puts_0042327c)("Reset to default...");
  pcVar5 = "reboot";
  pcVar8 = (code *)PTR_system_00423270;
LAB_00405ac4:
  (*pcVar8)(pcVar5);
  return 0;
}

