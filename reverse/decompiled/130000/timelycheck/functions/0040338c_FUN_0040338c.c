/* FUN_0040338c @ 0040338c */

void FUN_0040338c(int param_1,int param_2)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  undefined1 auStack_f0 [12];
  undefined1 auStack_e4 [204];
  undefined1 *local_18;
  
  iVar1 = (*(code *)PTR_isFileExist_0042b0ac)("/proc/hw_nat");
  if (iVar1 == 0) {
    iVar1 = (*(code *)PTR_isFileExist_0042b0ac)("/proc/sw_nat");
    if (iVar1 == 0) goto LAB_00403540;
    if (param_1 == 0) {
      if (param_2 == 0x10) {
        pcVar2 = "/proc/sw_nat";
        pcVar3 = "1";
      }
      else {
        pcVar2 = "/proc/sw_nat";
        pcVar3 = "0";
      }
    }
    else {
      if (param_1 == 1) {
        pcVar2 = "/proc/sw_nat";
        goto LAB_004034b4;
      }
      if (param_1 == 2) {
        pcVar2 = "/proc/sw_nat";
        goto LAB_004034d8;
      }
      pcVar2 = "/proc/sw_nat";
      if (param_1 == 3) goto LAB_004034f8;
      if (param_1 != 4) goto LAB_00403540;
      pcVar2 = "/proc/sw_nat";
      pcVar3 = "4";
    }
  }
  else if (param_1 == 0) {
    pcVar2 = "/proc/hw_nat";
LAB_004034b4:
    pcVar3 = "1";
  }
  else if (param_1 == 1) {
    pcVar2 = "/proc/hw_nat";
LAB_004034d8:
    pcVar3 = "2";
  }
  else if (param_1 == 2) {
    pcVar2 = "/proc/hw_nat";
LAB_004034f8:
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
  (*(code *)PTR_RunSystemCmd_0042b0dc)(pcVar2,&DAT_00417b58,pcVar3,"");
LAB_00403540:
  (*(code *)PTR_RunSystemCmd_0042b0dc)(0,"killall",&DAT_00417b7c,"miniigd","");
  iVar1 = (*(code *)PTR_isFileExist_0042b0ac)("/var/run/miniupnpd.pid");
  if (iVar1 != 0) {
    (*(code *)PTR_unlink_0042b148)("/var/run/miniupnpd.pid");
  }
  (*(code *)PTR_RunSystemCmd_0042b0dc)(0,"killall",&DAT_00417b7c,"routed","");
  iVar1 = (*(code *)PTR_isFileExist_0042b0ac)("/var/run/routed.pid");
  if (iVar1 != 0) {
    (*(code *)PTR_unlink_0042b148)("/var/run/routed.pid");
  }
  (*(code *)PTR_RunSystemCmd_0042b0dc)(0,&DAT_00417bbc,&DAT_00417bc0,"/etc/ppp/first","");
  (*(code *)PTR_RunSystemCmd_0042b0dc)(0,&DAT_00417bbc,&DAT_00417bc0,"/etc/ppp/firstpptp","");
  (*(code *)PTR_RunSystemCmd_0042b0dc)(0,&DAT_00417bbc,&DAT_00417bc0,"/etc/ppp/firstl2tp","");
  (*(code *)PTR_RunSystemCmd_0042b0dc)(0,&DAT_00417bbc,&DAT_00417bc0,"/etc/ppp/firstdemand","");
  (*(code *)PTR_RunSystemCmd_0042b0dc)(0,"killall",&DAT_00417a78,"timelycheck","");
  (*(code *)PTR_RunSystemCmd_0042b0dc)(0,"killall",&DAT_00417a78,&DAT_00417c20,"");
  (*(code *)PTR_wan_disconnect_0042b11c)("all");
  (*(code *)PTR_RunSystemCmd_0042b0dc)(0,"killall",&DAT_00417a78,"ntp_inet","");
  (*(code *)PTR_RunSystemCmd_0042b0dc)(0,"killall",&DAT_00417a78,"ddns.sh","");
  (*(code *)PTR_RunSystemCmd_0042b0dc)(0,"killall",&DAT_00417a78,"syslogd","");
  (*(code *)PTR_RunSystemCmd_0042b0dc)(0,"killall",&DAT_00417a78,"klogd","");
  (*(code *)PTR_RunSystemCmd_0042b0dc)(0,"killall",&DAT_00417a78,"mini_upnpd","");
  (*(code *)PTR_RunSystemCmd_0042b0dc)(0,"killall",&DAT_00417a78,"reload","");
  iVar1 = (*(code *)PTR_isFileExist_0042b0ac)("/var/run/l2tpd.pid");
  if (iVar1 != 0) {
    iVar1 = (*(code *)PTR_getPid_fromFile_0042b1e0)("/var/run/l2tpd.pid");
    if (iVar1 != 0) {
      local_18 = auStack_f0;
      (*(code *)PTR_sprintf_0042b0e8)(auStack_f0,&DAT_00417aa4,iVar1);
      (*(code *)PTR_RunSystemCmd_0042b0dc)(0,&DAT_00417a70,&DAT_00417a78,local_18,"");
    }
    (*(code *)PTR_unlink_0042b148)("/var/run/l2tpd.pid");
  }
  FUN_004031dc();
  (*(code *)PTR_sprintf_0042b0e8)(auStack_e4,"/etc/udhcpc/udhcpc-%s.pid",&DAT_00417ad0);
  iVar1 = (*(code *)PTR_isFileExist_0042b0ac)(auStack_e4);
  if (iVar1 != 0) {
    (*(code *)PTR_unlink_0042b148)(auStack_e4);
  }
  iVar1 = (*(code *)PTR_isFileExist_0042b0ac)("/var/run/dnrd.pid");
  if (iVar1 != 0) {
    iVar1 = (*(code *)PTR_getPid_fromFile_0042b1e0)("/var/run/dnrd.pid");
    if (iVar1 != 0) {
      local_18 = auStack_f0;
      (*(code *)PTR_sprintf_0042b0e8)(auStack_f0,&DAT_00417aa4,iVar1);
      (*(code *)PTR_RunSystemCmd_0042b0dc)(0,&DAT_00417a70,&DAT_00417a78,local_18,"");
    }
    (*(code *)PTR_unlink_0042b148)("/var/run/dnrd.pid");
  }
  iVar1 = (*(code *)PTR_isFileExist_0042b0ac)("/var/run/igmp_pid");
  if (iVar1 != 0) {
    iVar1 = (*(code *)PTR_getPid_fromFile_0042b1e0)("/var/run/igmp_pid");
    if (iVar1 != 0) {
      local_18 = auStack_f0;
      (*(code *)PTR_sprintf_0042b0e8)(local_18,&DAT_00417aa4,iVar1);
      (*(code *)PTR_RunSystemCmd_0042b0dc)(0,&DAT_00417a70,&DAT_00417a78,local_18,"");
    }
    (*(code *)PTR_unlink_0042b148)("/var/run/igmp_pid");
    (*(code *)PTR_RunSystemCmd_0042b0dc)("/proc/br_mCastFastFwd",&DAT_00417b58,&DAT_00417cc0,"");
  }
  iVar1 = (*(code *)PTR_isFileExist_0042b0ac)("/var/run/lld2d-br0.pid");
  if (iVar1 != 0) {
    iVar1 = (*(code *)PTR_getPid_fromFile_0042b1e0)("/var/run/lld2d-br0.pid");
    if (iVar1 != 0) {
      local_18 = auStack_f0;
      (*(code *)PTR_sprintf_0042b0e8)(auStack_f0,&DAT_00417aa4,iVar1);
      (*(code *)PTR_RunSystemCmd_0042b0dc)(0,&DAT_00417a70,&DAT_00417a78,local_18,"");
    }
    (*(code *)PTR_unlink_0042b148)("/var/run/lld2d-br0.pid");
  }
  iVar1 = (*(code *)PTR_isFileExist_0042b0ac)("/var/run/udhcpd.pid");
  if (iVar1 != 0) {
    iVar1 = (*(code *)PTR_getPid_fromFile_0042b1e0)("/var/run/udhcpd.pid");
    if (iVar1 != 0) {
      (*(code *)PTR_sprintf_0042b0e8)(auStack_f0,&DAT_00417aa4,iVar1);
      (*(code *)PTR_RunSystemCmd_0042b0dc)(0,&DAT_00417a70,&DAT_00417cf0,auStack_f0,"");
      (*(code *)PTR_sleep_0042b1a4)(1);
      (*(code *)PTR_RunSystemCmd_0042b0dc)(0,&DAT_00417a70,&DAT_00417a78,auStack_f0,"");
    }
    (*(code *)PTR_unlink_0042b148)("/var/run/udhcpd.pid");
  }
  return;
}

