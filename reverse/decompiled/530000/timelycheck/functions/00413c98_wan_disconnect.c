/* wan_disconnect @ 00413c98 */

void wan_disconnect(undefined4 param_1)

{
  int iVar1;
  undefined *puVar2;
  char *pcVar3;
  int local_28;
  int local_24;
  int local_20 [3];
  
  local_28 = 0;
  local_24 = 0;
  local_20[0] = 0;
  (*(code *)PTR_apmib_get_0042b1a0)(0x68,&local_24);
  iVar1 = (*(code *)PTR_isFileExist_0042b0ac)("/var/system/last_wan");
  if (iVar1 != 0) {
    iVar1 = (*(code *)PTR_fopen_0042b118)("/var/system/last_wan",&DAT_00418704);
    if (iVar1 == 0) {
      (*(code *)PTR_puts_0042b1b8)("can not /var/system/last_wan");
      return;
    }
    (*(code *)PTR_fscanf_0042b1d4)(iVar1,&DAT_004179c4,local_20);
    (*(code *)PTR_fclose_0042b10c)(iVar1);
  }
  (*(code *)PTR_RunSystemCmd_0042b0dc)("/var/disc",&DAT_00417a78,"enter","");
  (*(code *)PTR_RunSystemCmd_0042b0dc)(0,"killall",&DAT_00417a9c,"routed","");
  (*(code *)PTR_RunSystemCmd_0042b0dc)(0,"killall",&DAT_00417998,"ntp_inet","");
  iVar1 = (*(code *)PTR_isFileExist_0042b0ac)("/var/ntp_run");
  if (iVar1 != 0) {
    (*(code *)PTR_unlink_0042b148)("/var/ntp_run");
  }
  (*(code *)PTR_RunSystemCmd_0042b0dc)(0,"killall",&DAT_00417a9c,"ddns_inet","");
  (*(code *)PTR_RunSystemCmd_0042b0dc)(0,"killall",&DAT_00417998,"updatedd","");
  (*(code *)PTR_RunSystemCmd_0042b0dc)(0,"killall",&DAT_00417998,"ntpclient","");
  (*(code *)PTR_RunSystemCmd_0042b0dc)(0,"killall",&DAT_00417998,&DAT_004195b4,"");
  iVar1 = (*(code *)PTR_isFileExist_0042b0ac)("/var/run/dnrd.pid");
  if (iVar1 != 0) {
    (*(code *)PTR_unlink_0042b148)("/var/run/dnrd.pid");
  }
  (*(code *)PTR_RunSystemCmd_0042b0dc)(0,"killall",&DAT_00417998,"igmpproxy","");
  iVar1 = (*(code *)PTR_isFileExist_0042b0ac)("/var/run/igmp_pid");
  if (iVar1 != 0) {
    (*(code *)PTR_unlink_0042b148)("/var/run/igmp_pid");
  }
  (*(code *)PTR_RunSystemCmd_0042b0dc)("/proc/br_mCastFastFwd",&DAT_00417a78,&DAT_00417be0,"");
  iVar1 = (*(code *)PTR_strcmp_0042b0fc)(param_1,"all");
  if (iVar1 == 0) {
    (*(code *)PTR_RunSystemCmd_0042b0dc)(0,"killall",&DAT_00417998,"ppp_inet","");
  }
  if (local_20[0] == 3) {
    puVar2 = &DAT_00417a9c;
  }
  else {
    puVar2 = &DAT_00417998;
  }
  (*(code *)PTR_RunSystemCmd_0042b0dc)(0,"killall",puVar2,&DAT_0041965c,"");
  if (local_24 == 6) {
    (*(code *)PTR_system_0042b1ac)("echo 0 >/proc/fast_l2tp");
    (*(code *)PTR_system_0042b1ac)("echo 1 >/proc/fast_l2tp");
  }
  (*(code *)PTR_sleep_0042b1a4)(3);
  if ((local_24 != 6) && (local_20[0] == 6)) {
    (*(code *)PTR_RunSystemCmd_0042b0dc)(0,"killall",&DAT_00417998,"l2tpd","");
  }
  (*(code *)PTR_RunSystemCmd_0042b0dc)(0,"killall",&DAT_00417998,&DAT_004193cc,"");
  (*(code *)PTR_RunSystemCmd_0042b0dc)(0,"killall",&DAT_00417998,"pppoe","");
  iVar1 = (*(code *)PTR_isFileExist_0042b0ac)("/var/run/ppp0.pid");
  if (iVar1 != 0) {
    (*(code *)PTR_unlink_0042b148)("/var/run/ppp0.pid");
  }
  if ((((local_24 == 6) && (iVar1 = (*(code *)PTR_strcmp_0042b0fc)(param_1,"option"), iVar1 == 0))
      && (iVar1 = (*(code *)PTR_isFileExist_0042b0ac)("/etc/ppp/link"), iVar1 != 0)) &&
     (((*(code *)PTR_apmib_get_0042b1a0)(0x151,&local_28), local_28 == 1 &&
      (iVar1 = (*(code *)PTR_isFileExist_0042b0ac)("/var/disc_l2tp"), iVar1 != 0)))) {
    (*(code *)PTR_system_0042b1ac)("echo\"d client\" > /var/run/l2tp-control &");
    (*(code *)PTR_system_0042b1ac)("echo \"l2tpdisc\" > /var/disc_l2tp");
  }
  if (local_24 == 4) {
    (*(code *)PTR_system_0042b1ac)("echo 1 > /proc/fast_pptp");
  }
  iVar1 = (*(code *)PTR_isFileExist_0042b0ac)("/var/firstddns");
  if (iVar1 != 0) {
    (*(code *)PTR_unlink_0042b148)("/var/firstddns");
  }
  iVar1 = (*(code *)PTR_strcmp_0042b0fc)(param_1,"option");
  if ((iVar1 == 0) && (iVar1 = (*(code *)PTR_isFileExist_0042b0ac)("/etc/ppp/link"), iVar1 != 0)) {
    (*(code *)PTR_RunSystemCmd_0042b0dc)(0,&DAT_00417adc,&DAT_00417ae0,"/etc/ppp/first","");
    (*(code *)PTR_RunSystemCmd_0042b0dc)(0,&DAT_00417adc,&DAT_00417ae0,"/etc/ppp/firstpptp","");
    (*(code *)PTR_RunSystemCmd_0042b0dc)(0,&DAT_00417adc,&DAT_00417ae0,"/etc/ppp/firstl2tp","");
    (*(code *)PTR_RunSystemCmd_0042b0dc)(0,&DAT_00417adc,&DAT_00417ae0,"/etc/ppp/firstdemand","");
  }
  iVar1 = (*(code *)PTR_isFileExist_0042b0ac)("/etc/ppp/link");
  if (iVar1 != 0) {
    (*(code *)PTR_unlink_0042b148)("/etc/ppp/link");
  }
  if (((local_24 != 3) || (iVar1 = (*(code *)PTR_strcmp_0042b0fc)(param_1,"option"), iVar1 != 0)) &&
     (iVar1 = (*(code *)PTR_isFileExist_0042b0ac)("/etc/ppp/connectfile"), iVar1 != 0)) {
    (*(code *)PTR_unlink_0042b148)("/etc/ppp/connectfile");
  }
  if (local_24 == 4) {
    (*(code *)PTR_apmib_get_0042b1a0)(0x1fd,&local_28);
    if (local_28 == 1) {
      pcVar3 = "3";
    }
    else {
      pcVar3 = "0";
    }
    (*(code *)PTR_RunSystemCmd_0042b0dc)("/proc/pptp_conn_ck",&DAT_00417a78,pcVar3,"");
  }
  (*(code *)PTR_RunSystemCmd_0042b0dc)(0,&DAT_00417adc,&DAT_00417ae0,"/var/disc","");
  (*(code *)PTR_RunSystemCmd_0042b0dc)(0,&DAT_00417adc,&DAT_00417ae0,"/var/disc_l2tp","");
  return;
}

