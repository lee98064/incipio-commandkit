/* setinit @ 0040a388 */

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
  iVar2 = (*(code *)PTR_isFileExist_004233d8)("/var/reinit");
  if (iVar2 == 0) {
    (*(code *)PTR_RunSystemCmd_00423428)("/var/reinit",&DAT_00411830,"1","");
  }
  iVar3 = (*(code *)PTR_isFileExist_004233d8)("/var/tmp_wan_check");
  if (iVar3 != 0) {
    (*(code *)PTR_unlink_004234d8)("/var/tmp_wan_check");
  }
  iVar3 = (*(code *)PTR_isFileExist_004233d8)("/var/tmp_wan_dhcp_info");
  if (iVar3 != 0) {
    (*(code *)PTR_unlink_004234d8)("/var/tmp_wan_dhcp_info");
  }
  iVar3 = (*(code *)PTR_isFileExist_004233d8)("/var/ppp/manual_connect_now");
  if (iVar3 != 0) {
    (*(code *)PTR_unlink_004234d8)("/var/ppp/manual_connect_now");
  }
  (*(code *)PTR_puts_00423564)("Init Start...");
  (*(code *)PTR_system_00423558)("echo 1 > /var/system/wfaudio_start_init");
  (*(code *)PTR_apmib_get_0042354c)(0xc0,&local_298);
  (*(code *)PTR_apmib_get_0042354c)(0xc1,local_290 + 3);
  (*(code *)PTR_apmib_get_0042354c)(0xad,local_290 + 4);
  (*(code *)PTR_apmib_get_0042354c)(0x68,local_290 + 5);
  DAT_00423868 = 0;
  DAT_0042385c = 0;
  DAT_00423860 = 0;
  DAT_00423864 = 0;
  (*(code *)PTR_memset_00423490)(&DAT_0042387c,0,0x20);
  if (local_298 == 0) {
    pcVar4 = "0";
LAB_0040a608:
    (*(code *)PTR_RunSystemCmd_00423428)("/var/sys_op",&DAT_00411830,pcVar4,"");
  }
  else {
    if (local_298 == 1) {
      pcVar4 = "1";
      goto LAB_0040a608;
    }
    if (local_298 == 2) {
      pcVar4 = "2";
      goto LAB_0040a608;
    }
  }
  (*(code *)PTR_strcpy_004235e0)(&DAT_0042383c,&DAT_00410768);
  (*(code *)PTR_strcpy_004235e0)(&DAT_0042384c,&DAT_00411b70);
  DAT_00423830 = 0;
  (*(code *)PTR_RunSystemCmd_00423428)("/proc/br_igmpProxy",&DAT_00411830,&DAT_00411f80,"");
  (*(code *)PTR_apmib_get_0042354c)(0x268,&local_294);
  if (local_294 == 0) {
    (*(code *)PTR_memset_00423490)(&DAT_0042387c,0,0x20);
  }
  else {
    (*(code *)PTR_sprintf_0042344c)
              (&DAT_0042387c,"%s %s %s",&DAT_00411b8c,&DAT_00411b94,&DAT_00411b9c);
  }
  DAT_00423af8 = 0;
  DAT_00423afc = 0;
  DAT_00423b00 = 0;
  DAT_00423b04 = 0;
  (*(code *)PTR_memset_00423490)(&DAT_00423a9c,0,0x50);
  (*(code *)PTR_memset_00423490)(&DAT_00423b08,0,0x20);
  (*(code *)PTR_memset_00423490)(&DAT_0042389c,0,0x200);
  if (DAT_00423af8._0_1_ == '\0') {
    (*(code *)PTR_sprintf_0042344c)(&DAT_00423af8,&DAT_004117f0,0);
  }
  else {
    (*(code *)PTR_sprintf_0042344c)(auStack_254," wlan%d",0);
    (*(code *)PTR_strcat_00423508)(&DAT_00423af8,auStack_254);
  }
  DAT_00423aec = 1;
  DAT_00423af0 = (*(code *)PTR_if_readlist_proc_004233bc)(&DAT_00423a9c,&DAT_00411bac,0);
  DAT_00423af4 = (*(code *)PTR_if_readlist_proc_004233bc)(&DAT_00423b08,&DAT_0041161c,0);
  iVar3 = (*(code *)PTR_if_readlist_proc_004233bc)(&DAT_0042389c,&DAT_00411bb0,0);
  if (iVar3 == 0) {
    DAT_00423b04 = 0;
    DAT_00423af8 = 0;
    DAT_00423afc = 0;
    DAT_00423b00 = 0;
  }
  if (iVar2 == 0) {
    iVar2 = (*(code *)PTR_isFileExist_004233d8)("/proc/hw_nat");
    if (iVar2 == 0) {
      iVar2 = (*(code *)PTR_isFileExist_004233d8)("/proc/sw_nat");
      if (iVar2 == 0) goto LAB_0040aa50;
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
          goto LAB_0040a9c8;
        }
        if (local_298 == 2) {
          pcVar4 = "/proc/sw_nat";
          goto LAB_0040a9e8;
        }
        if (local_298 == 3) {
          pcVar4 = "/proc/sw_nat";
          goto LAB_0040aa0c;
        }
        if (local_298 != 4) goto LAB_0040aa50;
        pcVar4 = "/proc/sw_nat";
        pcVar6 = "4";
      }
    }
    else {
      pcVar4 = "/proc/hw_nat";
      if (local_298 == 0) {
LAB_0040a9c8:
        pcVar6 = "1";
      }
      else if (local_298 == 1) {
        pcVar4 = "/proc/hw_nat";
LAB_0040a9e8:
        pcVar6 = "2";
      }
      else if (local_298 == 2) {
        pcVar4 = "/proc/hw_nat";
LAB_0040aa0c:
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
    (*(code *)PTR_RunSystemCmd_00423428)(pcVar4,&DAT_00411830,pcVar6,"");
  }
  else {
    FUN_004093ac(local_298,local_290[5],DAT_00423830,DAT_00423834,&DAT_0042383c,&DAT_00423af8,
                 &DAT_0042386c);
  }
LAB_0040aa50:
  (*(code *)PTR_sprintf_0042344c)(auStack_254,&DAT_004117f4,local_290[5]);
  (*(code *)PTR_RunSystemCmd_00423428)("/var/system/last_wan",&DAT_00411830,auStack_254,"");
  (*(code *)PTR_apmib_get_0042354c)(0xfa,local_290);
  (*(code *)PTR_apmib_get_0042354c)(0xfc,local_290 + 1);
  iVar2 = (*(code *)PTR_SetWlan_idx_00423580)("wlan0");
  if (iVar2 != 0) {
    (*(code *)PTR_apmib_get_0042354c)(0x3b,local_290 + 6);
    (*(code *)PTR_apmib_get_0042354c)(0x16,local_290 + 7);
  }
  bVar8 = true;
  if ((local_290[6] != 0) && (local_290[6] != 3)) {
    bVar8 = local_290[0] == 1;
  }
  (*(code *)PTR_memset_00423490)(&DAT_00423b08,0,0x20);
  if ((local_290[0] == 1) &&
     (iVar2 = (*(code *)PTR_strcmp_00423464)(&DAT_0042386c,"wlan0-vxd"), iVar2 != 0)) {
    if (DAT_00423b08 != '\0') {
      (*(code *)PTR_strcat_00423508)(&DAT_00423b08," ");
    }
    (*(code *)PTR_strcat_00423508)(&DAT_00423b08,"wlan0-vxd");
  }
  if (iVar3 != 0) {
    puVar5 = &local_260;
    DAT_00423af8 = 0;
    DAT_00423afc = 0;
    DAT_00423b00 = 0;
    DAT_00423b04 = 0;
    local_290[9] = 1;
    local_290[10] = 0;
    local_264 = (undefined1 *)0x0;
    local_260 = 0;
    local_25c = 0;
    local_258 = 0;
    (*(code *)PTR_sprintf_0042344c)(puVar5,&DAT_004117f0,0);
    (*(code *)PTR_apmib_save_wlanIdx_004234cc)();
    iVar2 = (*(code *)PTR_SetWlan_idx_00423580)(puVar5);
    if (iVar2 == 0) {
LAB_0040aeb0:
      bVar1 = false;
LAB_0040aeb4:
      (*(code *)PTR_apmib_recov_wlanIdx_00423514)();
      if (!bVar1) goto LAB_0040aeec;
      pcVar4 = "1";
    }
    else {
      (*(code *)PTR_apmib_get_0042354c)(0x16,local_290 + 9);
      if (local_290[9] == 1) {
        (*(code *)PTR_RunSystemCmd_00423428)(0,"ifconfig",puVar5,&DAT_00411bdc,"");
        pcVar4 = "";
        pcVar6 = "radio_off";
LAB_0040ae7c:
        (*(code *)PTR_RunSystemCmd_00423428)(0,"iwpriv",&local_260,pcVar6,pcVar4);
        bVar1 = true;
        (*(code *)PTR_apmib_get_0042354c)(0x4c,local_290 + 10);
        if (local_290[10] == 0) goto LAB_0040aeb0;
        goto LAB_0040aeb4;
      }
      pcVar9 = (code *)PTR_strcpy_004235e0;
      if (DAT_00423af8._0_1_ != '\0') {
        (*(code *)PTR_sprintf_0042344c)(auStack_254," %s",puVar5);
        puVar5 = auStack_254;
        pcVar9 = (code *)PTR_strcat_00423508;
      }
      (*pcVar9)(&DAT_00423af8,puVar5);
      local_244 = 0;
      local_240 = 0;
      local_23c = 0;
      local_238 = 0;
      (*(code *)PTR_sprintf_0042344c)(&local_244,"%s-vxd",&local_260);
      (*(code *)PTR_RunSystemCmd_00423428)(0,"ifconfig",&local_244,"0.0.0.0","");
      (*(code *)PTR_RunSystemCmd_00423428)(0,"ifconfig",&local_244,&DAT_00411bdc,"");
      (*(code *)PTR_RunSystemCmd_00423428)(0,"ifconfig",&local_260,&DAT_00411bdc,"");
      iVar2 = (*(code *)PTR_RunSystemCmd_00423428)(0,"flash","set_mib",&local_260,"");
      if (iVar2 == 0) {
        (*(code *)PTR_apmib_get_0042354c)(0x298,&local_264);
        if (local_264 == (undefined1 *)0x0) {
          pcVar4 = "mc2u_disable=0";
        }
        else {
          pcVar4 = "mc2u_disable=1";
        }
        pcVar6 = "set_mib";
        goto LAB_0040ae7c;
      }
      (*(code *)PTR_printf_004235c0)("[%s %d]init %s failed!\n","setinit",800,&local_260);
LAB_0040aeec:
      pcVar4 = "0";
    }
    (*(code *)PTR_RunSystemCmd_00423428)("/proc/br_wlanblock",&DAT_00411830,pcVar4,"");
  }
  if (DAT_00423af8._0_1_ != '\0') {
    if (DAT_00423b08 != '\0') {
      (*(code *)PTR_memcpy_0042357c)(auStack_234,&DAT_00423b08,0x20);
      local_264 = auStack_234;
      iVar2 = (*(code *)PTR_strsep_00423440)(&local_264," ");
      pcVar4 = "ifconfig";
      while (iVar2 != 0) {
        local_30 = pcVar4;
        (*(code *)PTR_RunSystemCmd_00423428)(0,pcVar4,iVar2,&DAT_00411bdc,"");
        (*(code *)PTR_RunSystemCmd_00423428)(0,"flash","set_mib",iVar2,"");
        iVar2 = (*(code *)PTR_strsep_00423440)(&local_264," ");
        pcVar4 = local_30;
      }
    }
    if (DAT_00423a9c != '\0') {
      local_290[2] = 0;
      (*(code *)PTR_strcpy_004235e0)(auStack_234,&DAT_00423a9c);
      iVar2 = (*(code *)PTR_strtok_r_004235c8)(auStack_234," ",local_290 + 2);
      if (iVar2 != 0) {
        local_30 = "ifconfig";
        do {
          (*(code *)PTR_RunSystemCmd_00423428)(0,local_30,iVar2,&DAT_00411bdc,"");
          (*(code *)PTR_RunSystemCmd_00423428)(0,"flash","set_mib",iVar2,"");
          iVar2 = (*(code *)PTR_strtok_r_004235c8)(0," ",local_290 + 2);
        } while (iVar2 != 0);
      }
    }
    iVar2 = (*(code *)PTR_strstr_004234f8)(&DAT_0042386c,&DAT_004117f8);
    if (iVar2 != 0) {
      (*(code *)PTR_RunSystemCmd_00423428)(0,"ifconfig",&DAT_0042386c,&DAT_00411bdc,"");
      (*(code *)PTR_RunSystemCmd_00423428)(0,"flash","set_mib",&DAT_0042386c,"");
    }
  }
  if (DAT_00423830 != 1) {
    FUN_00408fc4(auStack_234);
    (*(code *)PTR_setbridge_004233e4)(auStack_234);
    FUN_0040a03c();
    if (local_290[4] == 2) {
      (*(code *)PTR_system_00423558)("killall -9 udhcpc 2> /dev/null");
      (*(code *)PTR_system_00423558)("rm -f /etc/udhcpc/udhcpc-br0.pid 2> /dev/null");
      (*(code *)PTR_set_lan_dhcpd_00423458)(&DAT_0042383c,1);
    }
    if ((local_290[4] == 2) || (local_290[4] == 0)) {
      FUN_00409e48(bVar8);
    }
  }
  if (((DAT_00423830 == 1) && (local_298 != 1)) &&
     (iVar2 = (*(code *)PTR_isFileExist_004233d8)("/bin/lld2d"), iVar2 != 0)) {
    (*(code *)PTR_RunSystemCmd_00423428)(0,"lld2d",&DAT_0042383c,"");
  }
  FUN_00409b7c(0);
  if (local_298 == 0) {
    (*(code *)PTR_apmib_get_0042354c)(0x182,&local_294);
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
  (*(code *)PTR_RunSystemCmd_00423428)("/proc/custom_Passthru",&DAT_00411830,pcVar4,"");
  if (local_294 == 0) {
    (*(code *)PTR_RunSystemCmd_00423428)(0,"brctl","delif",&DAT_00410768,"peth0","");
    puVar7 = &DAT_00411bdc;
  }
  else {
    (*(code *)PTR_RunSystemCmd_00423428)(0,"brctl","addif",&DAT_00410768,"peth0","");
    puVar7 = &DAT_00411ca8;
  }
  (*(code *)PTR_RunSystemCmd_00423428)(0,"ifconfig","peth0",puVar7,"");
  if (local_298 == 2) {
    (*(code *)PTR_apmib_get_0042354c)(0xfa,local_290 + 8);
    (*(code *)PTR_apmib_get_0042354c)(0x182,&local_294);
    if (local_294 != 0) {
      if (local_290[8] == 1) {
        local_294 = local_294 | 8;
      }
      puVar5 = &local_244;
      local_244 = 0;
      local_240 = 0;
      local_23c = 0;
      local_238 = 0;
      (*(code *)PTR_sprintf_0042344c)(puVar5,&DAT_004117f4,local_294);
      goto LAB_0040b490;
    }
  }
  else {
    local_294 = 0;
  }
  puVar5 = (undefined4 *)&DAT_00411f80;
LAB_0040b490:
  (*(code *)PTR_RunSystemCmd_00423428)("/proc/custom_Passthru_wlan",&DAT_00411830,puVar5,"");
  if (local_294 == 0) {
    (*(code *)PTR_RunSystemCmd_00423428)(0,"brctl","delif",&DAT_00410768,"pwlan0","");
    puVar7 = &DAT_00411bdc;
  }
  else {
    (*(code *)PTR_RunSystemCmd_00423428)(0,"brctl","addif",&DAT_00410768,"pwlan0","");
    puVar7 = &DAT_00411ca8;
  }
  (*(code *)PTR_RunSystemCmd_00423428)(0,"ifconfig","pwlan0",puVar7,"");
  (*(code *)PTR_RunSystemCmd_00423428)("/proc/br_igmpVersion",&DAT_00411830,&DAT_00411f8c,"");
  (*(code *)PTR_RunSystemCmd_00423428)("/proc/br_igmpsnoop",&DAT_00411830,"1","");
  (*(code *)PTR_RunSystemCmd_00423428)("/proc/br_igmpquery",&DAT_00411830,"1","");
  (*(code *)PTR_RunSystemCmd_00423428)("/proc/br_mldsnoop",&DAT_00411830,"1","");
  (*(code *)PTR_RunSystemCmd_00423428)("/proc/br_mldquery",&DAT_00411830,"1","");
  (*(code *)PTR_system_00423558)("fwd &");
  (*(code *)PTR_RunSystemCmd_00423428)
            ("/proc/sys/net/ipv4/conf/eth1/arp_ignore",&DAT_00411830,"1","");
  (*(code *)PTR_RunSystemCmd_00423428)
            ("/proc/sys/net/ipv4/rt_cache_rebuild_count",&DAT_00411830,&DAT_00411d94,"");
  (*(code *)PTR_system_00423558)("timelycheck &");
  (*(code *)PTR_system_00423558)("rm -f  /var/system/wfaudio_start_init 2> /dev/null");
  return 0;
}

