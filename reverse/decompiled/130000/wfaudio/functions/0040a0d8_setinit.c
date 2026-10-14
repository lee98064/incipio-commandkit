/* setinit @ 0040a0d8 */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

undefined4 setinit(void)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  undefined4 *puVar5;
  char *pcVar6;
  undefined *puVar7;
  bool bVar8;
  code *pcVar9;
  int local_298;
  uint local_294;
  int local_290 [11];
  undefined1 *local_264;
  undefined4 local_260;
  undefined4 local_25c;
  undefined2 local_258;
  undefined4 auStack_254 [4];
  undefined4 local_244;
  undefined4 local_240;
  undefined4 local_23c;
  undefined4 local_238;
  undefined1 auStack_234 [516];
  char *local_30;
  
  local_298 = -1;
  local_294 = 0;
  local_290[0] = 0;
  local_290[1] = 0;
  local_290[2] = 0;
  local_290[3] = 0;
  local_290[4] = 0;
  local_290[5] = 0;
  local_290[6] = 0;
  local_290[7] = 0;
  local_290[8] = 0;
  iVar2 = (*(code *)PTR_isFileExist_004230f8)("/var/reinit");
  if (iVar2 == 0) {
    (*(code *)PTR_RunSystemCmd_00423148)("/var/reinit",&DAT_00411550,"1","");
  }
  iVar3 = (*(code *)PTR_isFileExist_004230f8)("/var/tmp_wan_check");
  if (iVar3 != 0) {
    (*(code *)PTR_unlink_004231f0)("/var/tmp_wan_check");
  }
  iVar3 = (*(code *)PTR_isFileExist_004230f8)("/var/tmp_wan_dhcp_info");
  if (iVar3 != 0) {
    (*(code *)PTR_unlink_004231f0)("/var/tmp_wan_dhcp_info");
  }
  iVar3 = (*(code *)PTR_isFileExist_004230f8)("/var/ppp/manual_connect_now");
  if (iVar3 != 0) {
    (*(code *)PTR_unlink_004231f0)("/var/ppp/manual_connect_now");
  }
  (*(code *)PTR_puts_0042327c)("Init Start...");
  (*(code *)PTR_system_00423270)("echo 1 > /var/system/wfaudio_start_init");
  (*(code *)PTR_apmib_get_00423264)(0xc0,&local_298);
  (*(code *)PTR_apmib_get_00423264)(0xc1,local_290 + 3);
  (*(code *)PTR_apmib_get_00423264)(0xad,local_290 + 4);
  (*(code *)PTR_apmib_get_00423264)(0x68,local_290 + 5);
  DAT_00423588 = 0;
  DAT_0042357c = 0;
  DAT_00423580 = 0;
  DAT_00423584 = 0;
  (*(code *)PTR_memset_004231a8)(&DAT_0042359c,0,0x20);
  if (local_298 == 0) {
    pcVar4 = "0";
LAB_0040a358:
    (*(code *)PTR_RunSystemCmd_00423148)("/var/sys_op",&DAT_00411550,pcVar4,"");
  }
  else {
    if (local_298 == 1) {
      pcVar4 = "1";
      goto LAB_0040a358;
    }
    if (local_298 == 2) {
      pcVar4 = "2";
      goto LAB_0040a358;
    }
  }
  (*(code *)PTR_strcpy_004232f4)(&DAT_0042355c,&DAT_00410498);
  (*(code *)PTR_strcpy_004232f4)(&DAT_0042356c,&DAT_00411890);
  DAT_00423550 = 0;
  (*(code *)PTR_RunSystemCmd_00423148)("/proc/br_igmpProxy",&DAT_00411550,&DAT_00411ca0,"");
  (*(code *)PTR_apmib_get_00423264)(0x268,&local_294);
  if (local_294 == 0) {
    (*(code *)PTR_memset_004231a8)(&DAT_0042359c,0,0x20);
  }
  else {
    (*(code *)PTR_sprintf_00423164)
              (&DAT_0042359c,"%s %s %s",&DAT_004118ac,&DAT_004118b4,&DAT_004118bc);
  }
  DAT_00423818 = 0;
  DAT_0042381c = 0;
  DAT_00423820 = 0;
  DAT_00423824 = 0;
  (*(code *)PTR_memset_004231a8)(&DAT_004237bc,0,0x50);
  (*(code *)PTR_memset_004231a8)(&DAT_00423828,0,0x20);
  (*(code *)PTR_memset_004231a8)(&DAT_004235bc,0,0x200);
  if (DAT_00423818._0_1_ == '\0') {
    (*(code *)PTR_sprintf_00423164)(&DAT_00423818,&DAT_00411510,0);
  }
  else {
    (*(code *)PTR_sprintf_00423164)(auStack_254," wlan%d",0);
    (*(code *)PTR_strcat_00423220)(&DAT_00423818,auStack_254);
  }
  DAT_0042380c = 1;
  DAT_00423810 = (*(code *)PTR_if_readlist_proc_004230dc)(&DAT_004237bc,&DAT_004118cc,0);
  DAT_00423814 = (*(code *)PTR_if_readlist_proc_004230dc)(&DAT_00423828,&DAT_0041133c,0);
  iVar3 = (*(code *)PTR_if_readlist_proc_004230dc)(&DAT_004235bc,&DAT_004118d0,0);
  if (iVar3 == 0) {
    DAT_00423824 = 0;
    DAT_00423818 = 0;
    DAT_0042381c = 0;
    DAT_00423820 = 0;
  }
  if (iVar2 == 0) {
    iVar2 = (*(code *)PTR_isFileExist_004230f8)("/proc/hw_nat");
    if (iVar2 == 0) {
      iVar2 = (*(code *)PTR_isFileExist_004230f8)("/proc/sw_nat");
      if (iVar2 == 0) goto LAB_0040a7a0;
      if (local_298 == 0) {
        if (local_290[5] == 0x10) {
          pcVar4 = "/proc/sw_nat";
          pcVar6 = "1";
        }
        else {
          pcVar4 = "/proc/sw_nat";
          pcVar6 = "0";
        }
      }
      else {
        if (local_298 == 1) {
          pcVar4 = "/proc/sw_nat";
          goto LAB_0040a718;
        }
        if (local_298 == 2) {
          pcVar4 = "/proc/sw_nat";
          goto LAB_0040a738;
        }
        if (local_298 == 3) {
          pcVar4 = "/proc/sw_nat";
          goto LAB_0040a75c;
        }
        if (local_298 != 4) goto LAB_0040a7a0;
        pcVar4 = "/proc/sw_nat";
        pcVar6 = "4";
      }
    }
    else {
      pcVar4 = "/proc/hw_nat";
      if (local_298 == 0) {
LAB_0040a718:
        pcVar6 = "1";
      }
      else if (local_298 == 1) {
        pcVar4 = "/proc/hw_nat";
LAB_0040a738:
        pcVar6 = "2";
      }
      else if (local_298 == 2) {
        pcVar4 = "/proc/hw_nat";
LAB_0040a75c:
        pcVar6 = "3";
      }
      else if (local_298 == 3) {
        pcVar4 = "/proc/hw_nat";
        pcVar6 = "4";
      }
      else {
        pcVar4 = "/proc/hw_nat";
        pcVar6 = "5";
      }
    }
    (*(code *)PTR_RunSystemCmd_00423148)(pcVar4,&DAT_00411550,pcVar6,"");
  }
  else {
    FUN_004090fc(local_298,local_290[5],DAT_00423550,DAT_00423554,&DAT_0042355c,&DAT_00423818,
                 &DAT_0042358c);
  }
LAB_0040a7a0:
  (*(code *)PTR_sprintf_00423164)(auStack_254,&DAT_00411514,local_290[5]);
  (*(code *)PTR_RunSystemCmd_00423148)("/var/system/last_wan",&DAT_00411550,auStack_254,"");
  (*(code *)PTR_apmib_get_00423264)(0xfa,local_290);
  (*(code *)PTR_apmib_get_00423264)(0xfc,local_290 + 1);
  iVar2 = (*(code *)PTR_SetWlan_idx_00423298)("wlan0");
  if (iVar2 != 0) {
    (*(code *)PTR_apmib_get_00423264)(0x3b,local_290 + 6);
    (*(code *)PTR_apmib_get_00423264)(0x16,local_290 + 7);
  }
  bVar8 = true;
  if ((local_290[6] != 0) && (local_290[6] != 3)) {
    bVar8 = local_290[0] == 1;
  }
  (*(code *)PTR_memset_004231a8)(&DAT_00423828,0,0x20);
  if ((local_290[0] == 1) &&
     (iVar2 = (*(code *)PTR_strcmp_0042317c)(&DAT_0042358c,"wlan0-vxd"), iVar2 != 0)) {
    if (DAT_00423828 != '\0') {
      (*(code *)PTR_strcat_00423220)(&DAT_00423828," ");
    }
    (*(code *)PTR_strcat_00423220)(&DAT_00423828,"wlan0-vxd");
  }
  if (iVar3 != 0) {
    puVar5 = &local_260;
    DAT_00423818 = 0;
    DAT_0042381c = 0;
    DAT_00423820 = 0;
    DAT_00423824 = 0;
    local_290[9] = 1;
    local_290[10] = 0;
    local_264 = (undefined1 *)0x0;
    local_260 = 0;
    local_25c = 0;
    local_258 = 0;
    (*(code *)PTR_sprintf_00423164)(puVar5,&DAT_00411510,0);
    (*(code *)PTR_apmib_save_wlanIdx_004231e4)();
    iVar2 = (*(code *)PTR_SetWlan_idx_00423298)(puVar5);
    if (iVar2 == 0) {
LAB_0040ac00:
      bVar1 = false;
LAB_0040ac04:
      (*(code *)PTR_apmib_recov_wlanIdx_0042322c)();
      if (!bVar1) goto LAB_0040ac3c;
      pcVar4 = "1";
    }
    else {
      (*(code *)PTR_apmib_get_00423264)(0x16,local_290 + 9);
      if (local_290[9] == 1) {
        (*(code *)PTR_RunSystemCmd_00423148)(0,"ifconfig",puVar5,&DAT_004118fc,"");
        pcVar4 = "";
        pcVar6 = "radio_off";
LAB_0040abcc:
        (*(code *)PTR_RunSystemCmd_00423148)(0,"iwpriv",&local_260,pcVar6,pcVar4);
        bVar1 = true;
        (*(code *)PTR_apmib_get_00423264)(0x4c,local_290 + 10);
        if (local_290[10] == 0) goto LAB_0040ac00;
        goto LAB_0040ac04;
      }
      pcVar9 = (code *)PTR_strcpy_004232f4;
      if (DAT_00423818._0_1_ != '\0') {
        (*(code *)PTR_sprintf_00423164)(auStack_254," %s",puVar5);
        puVar5 = auStack_254;
        pcVar9 = (code *)PTR_strcat_00423220;
      }
      (*pcVar9)(&DAT_00423818,puVar5);
      local_244 = 0;
      local_240 = 0;
      local_23c = 0;
      local_238 = 0;
      (*(code *)PTR_sprintf_00423164)(&local_244,"%s-vxd",&local_260);
      (*(code *)PTR_RunSystemCmd_00423148)(0,"ifconfig",&local_244,"0.0.0.0","");
      (*(code *)PTR_RunSystemCmd_00423148)(0,"ifconfig",&local_244,&DAT_004118fc,"");
      (*(code *)PTR_RunSystemCmd_00423148)(0,"ifconfig",&local_260,&DAT_004118fc,"");
      iVar2 = (*(code *)PTR_RunSystemCmd_00423148)(0,"flash","set_mib",&local_260,"");
      if (iVar2 == 0) {
        (*(code *)PTR_apmib_get_00423264)(0x298,&local_264);
        if (local_264 == (undefined1 *)0x0) {
          pcVar4 = "mc2u_disable=0";
        }
        else {
          pcVar4 = "mc2u_disable=1";
        }
        pcVar6 = "set_mib";
        goto LAB_0040abcc;
      }
      (*(code *)PTR_printf_004232d4)("[%s %d]init %s failed!\n","setinit",800,&local_260);
LAB_0040ac3c:
      pcVar4 = "0";
    }
    (*(code *)PTR_RunSystemCmd_00423148)("/proc/br_wlanblock",&DAT_00411550,pcVar4,"");
  }
  if (DAT_00423818._0_1_ != '\0') {
    if (DAT_00423828 != '\0') {
      (*(code *)PTR_memcpy_00423294)(auStack_234,&DAT_00423828,0x20);
      local_264 = auStack_234;
      iVar2 = (*(code *)PTR_strsep_0042315c)(&local_264," ");
      pcVar4 = "ifconfig";
      while (iVar2 != 0) {
        local_30 = pcVar4;
        (*(code *)PTR_RunSystemCmd_00423148)(0,pcVar4,iVar2,&DAT_004118fc,"");
        (*(code *)PTR_RunSystemCmd_00423148)(0,"flash","set_mib",iVar2,"");
        iVar2 = (*(code *)PTR_strsep_0042315c)(&local_264," ");
        pcVar4 = local_30;
      }
    }
    if (DAT_004237bc != '\0') {
      local_290[2] = 0;
      (*(code *)PTR_strcpy_004232f4)(auStack_234,&DAT_004237bc);
      iVar2 = (*(code *)PTR_strtok_r_004232dc)(auStack_234," ",local_290 + 2);
      if (iVar2 != 0) {
        local_30 = "ifconfig";
        do {
          (*(code *)PTR_RunSystemCmd_00423148)(0,local_30,iVar2,&DAT_004118fc,"");
          (*(code *)PTR_RunSystemCmd_00423148)(0,"flash","set_mib",iVar2,"");
          iVar2 = (*(code *)PTR_strtok_r_004232dc)(0," ",local_290 + 2);
        } while (iVar2 != 0);
      }
    }
    iVar2 = (*(code *)PTR_strstr_00423210)(&DAT_0042358c,&DAT_00411518);
    if (iVar2 != 0) {
      (*(code *)PTR_RunSystemCmd_00423148)(0,"ifconfig",&DAT_0042358c,&DAT_004118fc,"");
      (*(code *)PTR_RunSystemCmd_00423148)(0,"flash","set_mib",&DAT_0042358c,"");
    }
  }
  if (DAT_00423550 != 1) {
    FUN_00408d14(auStack_234);
    (*(code *)PTR_setbridge_00423104)(auStack_234);
    FUN_00409d8c();
    if (local_290[4] == 2) {
      (*(code *)PTR_system_00423270)("killall -9 udhcpc 2> /dev/null");
      (*(code *)PTR_system_00423270)("rm -f /etc/udhcpc/udhcpc-br0.pid 2> /dev/null");
      (*(code *)PTR_set_lan_dhcpd_00423170)(&DAT_0042355c,1);
    }
    if ((local_290[4] == 2) || (local_290[4] == 0)) {
      FUN_00409b98(bVar8);
    }
  }
  if (((DAT_00423550 == 1) && (local_298 != 1)) &&
     (iVar2 = (*(code *)PTR_isFileExist_004230f8)("/bin/lld2d"), iVar2 != 0)) {
    (*(code *)PTR_RunSystemCmd_00423148)(0,"lld2d",&DAT_0042355c,"");
  }
  FUN_004098cc(0);
  if (local_298 == 0) {
    (*(code *)PTR_apmib_get_00423264)(0x182,&local_294);
  }
  else {
    local_294 = 0;
  }
  if ((local_294 & 1) == 0) {
    pcVar4 = "0";
  }
  else {
    pcVar4 = "1";
  }
  (*(code *)PTR_RunSystemCmd_00423148)("/proc/custom_Passthru",&DAT_00411550,pcVar4,"");
  if (local_294 == 0) {
    (*(code *)PTR_RunSystemCmd_00423148)(0,"brctl","delif",&DAT_00410498,"peth0","");
    puVar7 = &DAT_004118fc;
  }
  else {
    (*(code *)PTR_RunSystemCmd_00423148)(0,"brctl","addif",&DAT_00410498,"peth0","");
    puVar7 = &DAT_004119c8;
  }
  (*(code *)PTR_RunSystemCmd_00423148)(0,"ifconfig","peth0",puVar7,"");
  if (local_298 == 2) {
    (*(code *)PTR_apmib_get_00423264)(0xfa,local_290 + 8);
    (*(code *)PTR_apmib_get_00423264)(0x182,&local_294);
    if (local_294 != 0) {
      if (local_290[8] == 1) {
        local_294 = local_294 | 8;
      }
      puVar5 = &local_244;
      local_244 = 0;
      local_240 = 0;
      local_23c = 0;
      local_238 = 0;
      (*(code *)PTR_sprintf_00423164)(puVar5,&DAT_00411514,local_294);
      goto LAB_0040b1e0;
    }
  }
  else {
    local_294 = 0;
  }
  puVar5 = (undefined4 *)&DAT_00411ca0;
LAB_0040b1e0:
  (*(code *)PTR_RunSystemCmd_00423148)("/proc/custom_Passthru_wlan",&DAT_00411550,puVar5,"");
  if (local_294 == 0) {
    (*(code *)PTR_RunSystemCmd_00423148)(0,"brctl","delif",&DAT_00410498,"pwlan0","");
    puVar7 = &DAT_004118fc;
  }
  else {
    (*(code *)PTR_RunSystemCmd_00423148)(0,"brctl","addif",&DAT_00410498,"pwlan0","");
    puVar7 = &DAT_004119c8;
  }
  (*(code *)PTR_RunSystemCmd_00423148)(0,"ifconfig","pwlan0",puVar7,"");
  (*(code *)PTR_RunSystemCmd_00423148)("/proc/br_igmpVersion",&DAT_00411550,&DAT_00411cac,"");
  (*(code *)PTR_RunSystemCmd_00423148)("/proc/br_igmpsnoop",&DAT_00411550,"1","");
  (*(code *)PTR_RunSystemCmd_00423148)("/proc/br_igmpquery",&DAT_00411550,"1","");
  (*(code *)PTR_RunSystemCmd_00423148)("/proc/br_mldsnoop",&DAT_00411550,"1","");
  (*(code *)PTR_RunSystemCmd_00423148)("/proc/br_mldquery",&DAT_00411550,"1","");
  (*(code *)PTR_system_00423270)("fwd &");
  (*(code *)PTR_RunSystemCmd_00423148)
            ("/proc/sys/net/ipv4/conf/eth1/arp_ignore",&DAT_00411550,"1","");
  (*(code *)PTR_RunSystemCmd_00423148)
            ("/proc/sys/net/ipv4/rt_cache_rebuild_count",&DAT_00411550,&DAT_00411ab4,"");
  (*(code *)PTR_system_00423270)("timelycheck &");
  (*(code *)PTR_system_00423270)("rm -f  /var/system/wfaudio_start_init 2> /dev/null");
  return 0;
}

