/* FUN_004090fc @ 004090fc */

void FUN_004090fc(int param_1)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  undefined1 auStack_f0 [12];
  undefined1 auStack_e4 [204];
  undefined1 *local_18;
  
  iVar1 = (*(code *)PTR_isFileExist_004230f8)("/proc/hw_nat");
  if (iVar1 == 0) {
    iVar1 = (*(code *)PTR_isFileExist_004230f8)("/proc/sw_nat");
    if (iVar1 == 0) goto LAB_0040928c;
    if (param_1 == 0) {
      pcVar2 = "/proc/sw_nat";
      pcVar3 = "0";
    }
    else {
      if (param_1 == 1) {
        pcVar2 = "/proc/sw_nat";
        goto LAB_00409200;
      }
      if (param_1 == 2) {
        pcVar2 = "/proc/sw_nat";
        goto LAB_00409224;
      }
      if (param_1 == 3) {
        pcVar2 = "/proc/sw_nat";
        goto LAB_00409248;
      }
      if (param_1 != 4) goto LAB_0040928c;
      pcVar2 = "/proc/sw_nat";
      pcVar3 = "4";
    }
  }
  else if (param_1 == 0) {
    pcVar2 = "/proc/hw_nat";
LAB_00409200:
    pcVar3 = "1";
  }
  else if (param_1 == 1) {
    pcVar2 = "/proc/hw_nat";
LAB_00409224:
    pcVar3 = "2";
  }
  else if (param_1 == 2) {
    pcVar2 = "/proc/hw_nat";
LAB_00409248:
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
  (*(code *)PTR_RunSystemCmd_00423148)(pcVar2,&DAT_00411550,pcVar3,"");
LAB_0040928c:
  (*(code *)PTR_RunSystemCmd_00423148)(0,"killall",&DAT_0041157c,"miniigd","");
  iVar1 = (*(code *)PTR_isFileExist_004230f8)("/var/run/miniupnpd.pid");
  if (iVar1 != 0) {
    (*(code *)PTR_unlink_004231f0)("/var/run/miniupnpd.pid");
  }
  (*(code *)PTR_RunSystemCmd_00423148)(0,"killall",&DAT_0041157c,"routed","");
  iVar1 = (*(code *)PTR_isFileExist_004230f8)("/var/run/routed.pid");
  if (iVar1 != 0) {
    (*(code *)PTR_unlink_004231f0)("/var/run/routed.pid");
  }
  (*(code *)PTR_RunSystemCmd_00423148)(0,&DAT_004115bc,&DAT_004115c0,"/etc/ppp/first","");
  (*(code *)PTR_RunSystemCmd_00423148)(0,&DAT_004115bc,&DAT_004115c0,"/etc/ppp/firstpptp","");
  (*(code *)PTR_RunSystemCmd_00423148)(0,&DAT_004115bc,&DAT_004115c0,"/etc/ppp/firstl2tp","");
  (*(code *)PTR_RunSystemCmd_00423148)(0,&DAT_004115bc,&DAT_004115c0,"/etc/ppp/firstdemand","");
  (*(code *)PTR_RunSystemCmd_00423148)(0,"killall",&DAT_00410fec,"timelycheck","");
  (*(code *)PTR_RunSystemCmd_00423148)(0,"killall",&DAT_00410fec,&DAT_00411620,"");
  (*(code *)PTR_RunSystemCmd_00423148)(0,"killall",&DAT_00410fec,"ntp_inet","");
  (*(code *)PTR_RunSystemCmd_00423148)(0,"killall",&DAT_00410fec,"ddns.sh","");
  (*(code *)PTR_RunSystemCmd_00423148)(0,"killall",&DAT_00410fec,"syslogd","");
  (*(code *)PTR_RunSystemCmd_00423148)(0,"killall",&DAT_00410fec,"klogd","");
  (*(code *)PTR_RunSystemCmd_00423148)(0,"killall",&DAT_00410fec,"mini_upnpd","");
  (*(code *)PTR_RunSystemCmd_00423148)(0,"killall",&DAT_00410fec,"reload","");
  iVar1 = (*(code *)PTR_isFileExist_004230f8)("/var/run/l2tpd.pid");
  if (iVar1 != 0) {
    iVar1 = (*(code *)PTR_getPid_fromFile_004232c4)("/var/run/l2tpd.pid");
    if (iVar1 != 0) {
      local_18 = auStack_f0;
      (*(code *)PTR_sprintf_00423164)(auStack_f0,&DAT_00411514,iVar1);
      (*(code *)PTR_RunSystemCmd_00423148)(0,&DAT_00410fe4,&DAT_00410fec,local_18,"");
    }
    (*(code *)PTR_unlink_004231f0)("/var/run/l2tpd.pid");
  }
  FUN_00408f4c();
  (*(code *)PTR_sprintf_00423164)(auStack_e4,"/etc/udhcpc/udhcpc-%s.pid",&DAT_00410498);
  iVar1 = (*(code *)PTR_isFileExist_004230f8)(auStack_e4);
  if (iVar1 != 0) {
    (*(code *)PTR_unlink_004231f0)(auStack_e4);
  }
  iVar1 = (*(code *)PTR_isFileExist_004230f8)("/var/run/dnrd.pid");
  if (iVar1 != 0) {
    iVar1 = (*(code *)PTR_getPid_fromFile_004232c4)("/var/run/dnrd.pid");
    if (iVar1 != 0) {
      local_18 = auStack_f0;
      (*(code *)PTR_sprintf_00423164)(auStack_f0,&DAT_00411514,iVar1);
      (*(code *)PTR_RunSystemCmd_00423148)(0,&DAT_00410fe4,&DAT_00410fec,local_18,"");
    }
    (*(code *)PTR_unlink_004231f0)("/var/run/dnrd.pid");
  }
  iVar1 = (*(code *)PTR_isFileExist_004230f8)("/var/run/igmp_pid");
  if (iVar1 != 0) {
    iVar1 = (*(code *)PTR_getPid_fromFile_004232c4)("/var/run/igmp_pid");
    if (iVar1 != 0) {
      local_18 = auStack_f0;
      (*(code *)PTR_sprintf_00423164)(local_18,&DAT_00411514,iVar1);
      (*(code *)PTR_RunSystemCmd_00423148)(0,&DAT_00410fe4,&DAT_00410fec,local_18,"");
    }
    (*(code *)PTR_unlink_004231f0)("/var/run/igmp_pid");
    (*(code *)PTR_RunSystemCmd_00423148)("/proc/br_mCastFastFwd",&DAT_00411550,&DAT_004116b0,"");
  }
  iVar1 = (*(code *)PTR_isFileExist_004230f8)("/var/run/lld2d-br0.pid");
  if (iVar1 != 0) {
    iVar1 = (*(code *)PTR_getPid_fromFile_004232c4)("/var/run/lld2d-br0.pid");
    if (iVar1 != 0) {
      local_18 = auStack_f0;
      (*(code *)PTR_sprintf_00423164)(auStack_f0,&DAT_00411514,iVar1);
      (*(code *)PTR_RunSystemCmd_00423148)(0,&DAT_00410fe4,&DAT_00410fec,local_18,"");
    }
    (*(code *)PTR_unlink_004231f0)("/var/run/lld2d-br0.pid");
  }
  iVar1 = (*(code *)PTR_isFileExist_004230f8)("/var/run/udhcpd.pid");
  if (iVar1 != 0) {
    iVar1 = (*(code *)PTR_getPid_fromFile_004232c4)("/var/run/udhcpd.pid");
    if (iVar1 != 0) {
      (*(code *)PTR_RunSystemCmd_00423148)(0,&DAT_00410fe4,&DAT_00410fec,auStack_f0,"");
    }
    (*(code *)PTR_unlink_004231f0)("/var/run/udhcpd.pid");
  }
  return;
}

