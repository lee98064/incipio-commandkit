/* FUN_004093ac @ 004093ac */

void FUN_004093ac(int param_1)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  undefined1 auStack_f0 [12];
  undefined1 auStack_e4 [204];
  undefined1 *local_18;
  
  iVar1 = (*(code *)PTR_isFileExist_004233d8)("/proc/hw_nat");
  if (iVar1 == 0) {
    iVar1 = (*(code *)PTR_isFileExist_004233d8)("/proc/sw_nat");
    if (iVar1 == 0) goto LAB_0040953c;
    if (param_1 == 0) {
      pcVar2 = "/proc/sw_nat";
      pcVar3 = "0";
    }
    else {
      if (param_1 == 1) {
        pcVar2 = "/proc/sw_nat";
        goto LAB_004094b0;
      }
      if (param_1 == 2) {
        pcVar2 = "/proc/sw_nat";
        goto LAB_004094d4;
      }
      if (param_1 == 3) {
        pcVar2 = "/proc/sw_nat";
        goto LAB_004094f8;
      }
      if (param_1 != 4) goto LAB_0040953c;
      pcVar2 = "/proc/sw_nat";
      pcVar3 = "4";
    }
  }
  else if (param_1 == 0) {
    pcVar2 = "/proc/hw_nat";
LAB_004094b0:
    pcVar3 = "1";
  }
  else if (param_1 == 1) {
    pcVar2 = "/proc/hw_nat";
LAB_004094d4:
    pcVar3 = "2";
  }
  else if (param_1 == 2) {
    pcVar2 = "/proc/hw_nat";
LAB_004094f8:
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
  (*(code *)PTR_RunSystemCmd_00423428)(pcVar2,&DAT_00411830,pcVar3,"");
LAB_0040953c:
  (*(code *)PTR_RunSystemCmd_00423428)(0,"killall",&DAT_0041185c,"miniigd","");
  iVar1 = (*(code *)PTR_isFileExist_004233d8)("/var/run/miniupnpd.pid");
  if (iVar1 != 0) {
    (*(code *)PTR_unlink_004234d8)("/var/run/miniupnpd.pid");
  }
  (*(code *)PTR_RunSystemCmd_00423428)(0,"killall",&DAT_0041185c,"routed","");
  iVar1 = (*(code *)PTR_isFileExist_004233d8)("/var/run/routed.pid");
  if (iVar1 != 0) {
    (*(code *)PTR_unlink_004234d8)("/var/run/routed.pid");
  }
  (*(code *)PTR_RunSystemCmd_00423428)(0,&DAT_0041189c,&DAT_004118a0,"/etc/ppp/first","");
  (*(code *)PTR_RunSystemCmd_00423428)(0,&DAT_0041189c,&DAT_004118a0,"/etc/ppp/firstpptp","");
  (*(code *)PTR_RunSystemCmd_00423428)(0,&DAT_0041189c,&DAT_004118a0,"/etc/ppp/firstl2tp","");
  (*(code *)PTR_RunSystemCmd_00423428)(0,&DAT_0041189c,&DAT_004118a0,"/etc/ppp/firstdemand","");
  (*(code *)PTR_RunSystemCmd_00423428)(0,"killall",&DAT_004112cc,"timelycheck","");
  (*(code *)PTR_RunSystemCmd_00423428)(0,"killall",&DAT_004112cc,&DAT_00411900,"");
  (*(code *)PTR_RunSystemCmd_00423428)(0,"killall",&DAT_004112cc,"ntp_inet","");
  (*(code *)PTR_RunSystemCmd_00423428)(0,"killall",&DAT_004112cc,"ddns.sh","");
  (*(code *)PTR_RunSystemCmd_00423428)(0,"killall",&DAT_004112cc,"syslogd","");
  (*(code *)PTR_RunSystemCmd_00423428)(0,"killall",&DAT_004112cc,"klogd","");
  (*(code *)PTR_RunSystemCmd_00423428)(0,"killall",&DAT_004112cc,"mini_upnpd","");
  (*(code *)PTR_RunSystemCmd_00423428)(0,"killall",&DAT_004112cc,"reload","");
  iVar1 = (*(code *)PTR_isFileExist_004233d8)("/var/run/l2tpd.pid");
  if (iVar1 != 0) {
    iVar1 = (*(code *)PTR_getPid_fromFile_004235b0)("/var/run/l2tpd.pid");
    if (iVar1 != 0) {
      local_18 = auStack_f0;
      (*(code *)PTR_sprintf_0042344c)(auStack_f0,&DAT_004117f4,iVar1);
      (*(code *)PTR_RunSystemCmd_00423428)(0,&DAT_004112c4,&DAT_004112cc,local_18,"");
    }
    (*(code *)PTR_unlink_004234d8)("/var/run/l2tpd.pid");
  }
  FUN_004091fc();
  (*(code *)PTR_sprintf_0042344c)(auStack_e4,"/etc/udhcpc/udhcpc-%s.pid",&DAT_00410768);
  iVar1 = (*(code *)PTR_isFileExist_004233d8)(auStack_e4);
  if (iVar1 != 0) {
    (*(code *)PTR_unlink_004234d8)(auStack_e4);
  }
  iVar1 = (*(code *)PTR_isFileExist_004233d8)("/var/run/dnrd.pid");
  if (iVar1 != 0) {
    iVar1 = (*(code *)PTR_getPid_fromFile_004235b0)("/var/run/dnrd.pid");
    if (iVar1 != 0) {
      local_18 = auStack_f0;
      (*(code *)PTR_sprintf_0042344c)(auStack_f0,&DAT_004117f4,iVar1);
      (*(code *)PTR_RunSystemCmd_00423428)(0,&DAT_004112c4,&DAT_004112cc,local_18,"");
    }
    (*(code *)PTR_unlink_004234d8)("/var/run/dnrd.pid");
  }
  iVar1 = (*(code *)PTR_isFileExist_004233d8)("/var/run/igmp_pid");
  if (iVar1 != 0) {
    iVar1 = (*(code *)PTR_getPid_fromFile_004235b0)("/var/run/igmp_pid");
    if (iVar1 != 0) {
      local_18 = auStack_f0;
      (*(code *)PTR_sprintf_0042344c)(local_18,&DAT_004117f4,iVar1);
      (*(code *)PTR_RunSystemCmd_00423428)(0,&DAT_004112c4,&DAT_004112cc,local_18,"");
    }
    (*(code *)PTR_unlink_004234d8)("/var/run/igmp_pid");
    (*(code *)PTR_RunSystemCmd_00423428)("/proc/br_mCastFastFwd",&DAT_00411830,&DAT_00411990,"");
  }
  iVar1 = (*(code *)PTR_isFileExist_004233d8)("/var/run/lld2d-br0.pid");
  if (iVar1 != 0) {
    iVar1 = (*(code *)PTR_getPid_fromFile_004235b0)("/var/run/lld2d-br0.pid");
    if (iVar1 != 0) {
      local_18 = auStack_f0;
      (*(code *)PTR_sprintf_0042344c)(auStack_f0,&DAT_004117f4,iVar1);
      (*(code *)PTR_RunSystemCmd_00423428)(0,&DAT_004112c4,&DAT_004112cc,local_18,"");
    }
    (*(code *)PTR_unlink_004234d8)("/var/run/lld2d-br0.pid");
  }
  iVar1 = (*(code *)PTR_isFileExist_004233d8)("/var/run/udhcpd.pid");
  if (iVar1 != 0) {
    iVar1 = (*(code *)PTR_getPid_fromFile_004235b0)("/var/run/udhcpd.pid");
    if (iVar1 != 0) {
      (*(code *)PTR_RunSystemCmd_00423428)(0,&DAT_004112c4,&DAT_004112cc,auStack_f0,"");
    }
    (*(code *)PTR_unlink_004234d8)("/var/run/udhcpd.pid");
  }
  return;
}

