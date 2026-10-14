/* FUN_004045bc @ 004045bc */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

undefined4 FUN_004045bc(undefined4 param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  undefined4 *puVar7;
  char *pcVar8;
  undefined *puVar9;
  undefined *puVar10;
  bool bVar11;
  undefined4 uVar12;
  code *pcVar13;
  char *local_3f0;
  uint local_3ec;
  int local_3e8 [3];
  undefined *local_3dc;
  uint local_3d8;
  int local_3d4;
  int local_3d0 [6];
  undefined4 *local_3b8;
  undefined4 auStack_3b4 [4];
  undefined1 auStack_3a4 [32];
  undefined1 auStack_384 [32];
  char local_364 [32];
  char acStack_344 [32];
  undefined4 local_324;
  undefined4 local_320;
  undefined4 local_31c;
  undefined4 local_318;
  undefined4 local_2e4;
  undefined4 local_2e0;
  undefined2 local_2dc;
  char acStack_294 [100];
  undefined4 local_230;
  undefined1 local_22c;
  undefined1 local_22b;
  char *local_30;
  
  local_3f0 = (char *)0xffffffff;
  local_3ec = 0;
  local_3e8[0] = 0;
  local_3e8[1] = 0;
  local_3e8[2] = 0;
  local_3dc = (undefined *)0x0;
  local_3d8 = 0;
  local_3d4 = 0;
  local_3d0[0] = 0;
  local_3d0[1] = 0;
  local_3d0[3] = 0;
  iVar2 = (*(code *)PTR_strcmp_0042b0fc)(*(undefined4 *)(param_2 + 8),"ap");
  if ((iVar2 != 0) ||
     (iVar2 = (*(code *)PTR_strcmp_0042b0fc)(*(undefined4 *)(param_2 + 0xc),"wlan_app"), iVar2 != 0)
     ) {
    (*(code *)PTR_RunSystemCmd_0042b0dc)(0,"ifconfig",&DAT_00417d88,&DAT_00417d90,"");
  }
  iVar2 = (*(code *)PTR_isFileExist_0042b0ac)("/var/system/set_time");
  if (iVar2 == 0) {
    (*(code *)PTR_RunSystemCmd_0042b0dc)(0,"flash","settime","");
  }
  iVar2 = (*(code *)PTR_isFileExist_0042b0ac)("/var/reinit");
  if (iVar2 == 0) {
    FUN_0040441c();
    (*(code *)PTR_RunSystemCmd_0042b0dc)("/var/reinit",&DAT_00417a78,"1","");
  }
  (*(code *)PTR_system_0042b1ac)("echo 1 > /var/system/start_init");
  iVar3 = (*(code *)PTR_isFileExist_0042b0ac)("/var/tmp_wan_check");
  if (iVar3 != 0) {
    (*(code *)PTR_unlink_0042b148)("/var/tmp_wan_check");
  }
  iVar3 = (*(code *)PTR_isFileExist_0042b0ac)("/var/tmp_wan_dhcp_info");
  if (iVar3 != 0) {
    (*(code *)PTR_unlink_0042b148)("/var/tmp_wan_dhcp_info");
  }
  iVar3 = (*(code *)PTR_isFileExist_0042b0ac)("/var/ppp/manual_connect_now");
  if (iVar3 != 0) {
    (*(code *)PTR_unlink_0042b148)("/var/ppp/manual_connect_now");
  }
  (*(code *)PTR_puts_0042b1b8)("Init Start...");
  (*(code *)PTR_memset_0042b114)(&local_324,0,0x40);
  (*(code *)PTR_memset_0042b114)(&local_2e4,0,0x50);
  (*(code *)PTR_apmib_get_0042b1a0)(0x2b1,&local_324);
  if (local_324._0_1_ != '\0') {
    (*(code *)PTR_sprintf_0042b0e8)(&local_2e4,"hostname \'%s\'",&local_324);
    (*(code *)PTR_system_0042b1ac)(&local_2e4);
  }
  (*(code *)PTR_apmib_get_0042b1a0)(0xc0,&local_3f0);
  (*(code *)PTR_apmib_get_0042b1a0)(0xc1,&local_3dc);
  (*(code *)PTR_apmib_get_0042b1a0)(0xad,&local_3d8);
  (*(code *)PTR_apmib_get_0042b1a0)(0x68,&local_3d4);
  DAT_0042b288 = 0;
  _DAT_0042b27c = 0;
  DAT_0042b280 = 0;
  DAT_0042b284 = 0;
  (*(code *)PTR_memset_0042b114)(&DAT_0042b29c,0,0x20);
  if (local_3f0 == (char *)0x0) {
    pcVar5 = "0";
LAB_00404990:
    (*(code *)PTR_RunSystemCmd_0042b0dc)("/var/sys_op",&DAT_00417a78,pcVar5,"");
  }
  else {
    if (local_3f0 == (char *)0x1) {
      pcVar5 = "1";
      goto LAB_00404990;
    }
    if (local_3f0 == (char *)0x2) {
      pcVar5 = "2";
      goto LAB_00404990;
    }
  }
  (*(code *)PTR_strcpy_0042b208)(auStack_3b4,*(undefined4 *)(param_2 + 8));
  iVar3 = (*(code *)PTR_strcmp_0042b0fc)(auStack_3b4,"ap");
  if (iVar3 == 0) {
    (*(code *)PTR_strcpy_0042b208)(&DAT_0042b25c,&DAT_004179f0);
    (*(code *)PTR_strcpy_0042b208)(&DAT_0042b26c,&DAT_00417d88);
    DAT_0042b250 = 0;
  }
  iVar3 = (*(code *)PTR_strcmp_0042b0fc)(auStack_3b4,&DAT_00417e58);
  if (iVar3 == 0) {
    DAT_0042b250 = 1;
    if (local_3f0 == (char *)0x2) {
      (*(code *)PTR_sprintf_0042b0e8)(&DAT_0042b28c,&DAT_004179c0,local_3dc);
      getWispRptIfaceName(&DAT_0042b28c,local_3dc);
    }
    else {
      (*(code *)PTR_strcpy_0042b208)(&DAT_0042b28c,&DAT_00417e5c);
    }
    (*(code *)PTR_strcpy_0042b208)(&DAT_0042b25c,&DAT_004179f0);
    (*(code *)PTR_strcpy_0042b208)(&DAT_0042b26c,&DAT_00417d88);
    if (local_3f0 + -1 < (char *)0x2) {
      (*(code *)PTR_strcpy_0042b208)(&DAT_0042b27c,&DAT_00417e5c);
    }
  }
  (*(code *)PTR_RunSystemCmd_0042b0dc)("/proc/br_igmpProxy",&DAT_00417a78,&DAT_00418c68,"");
  (*(code *)PTR_apmib_get_0042b1a0)(0x268,&local_3ec);
  if (local_3ec == 0) {
    (*(code *)PTR_memset_0042b114)(&DAT_0042b29c,0,0x20);
  }
  else {
    (*(code *)PTR_sprintf_0042b0e8)
              (&DAT_0042b29c,"%s %s %s",&DAT_00417e78,&DAT_00417e80,&DAT_00417e88);
  }
  _DAT_0042b518 = 0;
  DAT_0042b51c = 0;
  DAT_0042b520 = 0;
  DAT_0042b524 = 0;
  (*(code *)PTR_memset_0042b114)(&DAT_0042b4bc,0,0x50);
  (*(code *)PTR_memset_0042b114)(&DAT_0042b528,0,0x20);
  (*(code *)PTR_memset_0042b114)(&DAT_0042b2bc,0,0x200);
  if (DAT_0042b518 == '\0') {
    (*(code *)PTR_sprintf_0042b0e8)(&DAT_0042b518,&DAT_004179c0,0);
  }
  else {
    (*(code *)PTR_sprintf_0042b0e8)(auStack_3b4," wlan%d",0);
    (*(code *)PTR_strcat_0042b170)(&DAT_0042b518,auStack_3b4);
  }
  DAT_0042b50c = 1;
  DAT_0042b510 = (*(code *)PTR_if_readlist_proc_0042b09c)(&DAT_0042b4bc,&DAT_00417e98,0);
  DAT_0042b514 = (*(code *)PTR_if_readlist_proc_0042b09c)(&DAT_0042b528,&DAT_00417e9c,0);
  iVar3 = (*(code *)PTR_if_readlist_proc_0042b09c)(&DAT_0042b2bc,&DAT_00417ea0,0);
  if (iVar3 == 0) {
    DAT_0042b524 = 0;
    _DAT_0042b518 = 0;
    DAT_0042b51c = 0;
    DAT_0042b520 = 0;
  }
  (*(code *)PTR_strcpy_0042b208)(auStack_3b4,*(undefined4 *)(param_2 + 0xc));
  iVar4 = (*(code *)PTR_strcmp_0042b0fc)(auStack_3b4,"all");
  if (((iVar4 == 0) ||
      (iVar4 = (*(code *)PTR_strcmp_0042b0fc)(auStack_3b4,&DAT_00417ea8), iVar4 == 0)) ||
     (iVar4 = (*(code *)PTR_strcmp_0042b0fc)(auStack_3b4,"bridge"), iVar4 == 0)) {
    DAT_0042b258 = 1;
    DAT_0042b254 = 1;
  }
  else {
    iVar4 = (*(code *)PTR_strcmp_0042b0fc)(auStack_3b4,"wlan_app");
    if (iVar4 == 0) {
      FUN_00403ec0(0);
      return 0;
    }
  }
  if (iVar2 == 0) {
    iVar2 = (*(code *)PTR_isFileExist_0042b0ac)("/proc/hw_nat");
    if (iVar2 == 0) {
      iVar2 = (*(code *)PTR_isFileExist_0042b0ac)("/proc/sw_nat");
      if (iVar2 == 0) goto LAB_00404fb8;
      if (local_3f0 == (char *)0x0) {
        if (local_3d4 == 0x10) {
          pcVar5 = "/proc/sw_nat";
          pcVar6 = "1";
        }
        else {
          pcVar5 = "/proc/sw_nat";
          pcVar6 = "0";
        }
      }
      else {
        if (local_3f0 == (char *)0x1) {
          pcVar5 = "/proc/sw_nat";
          goto LAB_00404f30;
        }
        if (local_3f0 == (char *)0x2) {
          pcVar5 = "/proc/sw_nat";
          goto LAB_00404f50;
        }
        if (local_3f0 == (char *)0x3) {
          pcVar5 = "/proc/sw_nat";
          goto LAB_00404f74;
        }
        if (local_3f0 != (char *)0x4) goto LAB_00404fb8;
        pcVar5 = "/proc/sw_nat";
        pcVar6 = "4";
      }
    }
    else {
      pcVar5 = "/proc/hw_nat";
      if (local_3f0 == (char *)0x0) {
LAB_00404f30:
        pcVar6 = "1";
      }
      else if (local_3f0 == (char *)0x1) {
        pcVar5 = "/proc/hw_nat";
LAB_00404f50:
        pcVar6 = "2";
      }
      else if (local_3f0 == (char *)0x2) {
        pcVar5 = "/proc/hw_nat";
LAB_00404f74:
        pcVar6 = "3";
      }
      else if (local_3f0 == (char *)0x3) {
        pcVar5 = "/proc/hw_nat";
        pcVar6 = "4";
      }
      else {
        pcVar5 = "/proc/hw_nat";
        pcVar6 = "5";
      }
    }
    (*(code *)PTR_RunSystemCmd_0042b0dc)(pcVar5,&DAT_00417a78,pcVar6,"");
  }
  else {
    FUN_0040338c(local_3f0,local_3d4,DAT_0042b250,DAT_0042b254,&DAT_0042b25c,&DAT_0042b518,
                 &DAT_0042b28c);
  }
LAB_00404fb8:
  (*(code *)PTR_sprintf_0042b0e8)(auStack_3b4,&DAT_004179c4,local_3d4);
  (*(code *)PTR_RunSystemCmd_0042b0dc)("/var/system/last_wan",&DAT_00417a78,auStack_3b4,"");
  (*(code *)PTR_apmib_get_0042b1a0)(0xfa,local_3e8);
  (*(code *)PTR_apmib_get_0042b1a0)(0xfc,local_3e8 + 1);
  iVar2 = (*(code *)PTR_SetWlan_idx_0042b1cc)("wlan0");
  if (iVar2 != 0) {
    (*(code *)PTR_apmib_get_0042b1a0)(0x3b,local_3d0);
    (*(code *)PTR_apmib_get_0042b1a0)(0x16,local_3d0 + 1);
  }
  bVar11 = true;
  if ((local_3d0[0] != 0) && (local_3d0[0] != 3)) {
    bVar11 = local_3e8[0] == 1;
  }
  (*(code *)PTR_memset_0042b114)(&DAT_0042b528,0,0x20);
  if ((local_3e8[0] == 1) &&
     (iVar2 = (*(code *)PTR_strcmp_0042b0fc)(&DAT_0042b28c,"wlan0-vxd"), iVar2 != 0)) {
    if (DAT_0042b528 != '\0') {
      (*(code *)PTR_strcat_0042b170)(&DAT_0042b528,&DAT_00417a44);
    }
    (*(code *)PTR_strcat_0042b170)(&DAT_0042b528,"wlan0-vxd");
  }
  (*(code *)PTR_apmib_get_0042b1a0)(0xc9,&local_230);
  pcVar5 = (char *)(local_230 & 0xff);
  pcVar6 = acStack_294;
  (*(code *)PTR_sprintf_0042b0e8)
            (pcVar6,"%02x%02x%02x%02x%02x%02x",local_230._0_1_,local_230._1_1_,local_230 >> 8 & 0xff
             ,pcVar5,local_22c,local_22b);
  if (DAT_0042b26c != '\0') {
    (*(code *)PTR_RunSystemCmd_0042b0dc)(0,"ifconfig",&DAT_0042b26c,&DAT_00417ec0,"ether",pcVar6,"")
    ;
    pcVar5 = pcVar6;
  }
  if (local_3f0 + -1 < (char *)0x2) {
    (*(code *)PTR_apmib_get_0042b1a0)(0x17,&local_230);
    iVar2 = (*(code *)PTR_memcmp_0042b138)(&local_230,&DAT_004184b8,6);
    if (iVar2 == 0) {
      (*(code *)PTR_apmib_get_0042b1a0)(0xca,&local_230);
    }
    pcVar5 = (char *)(local_230 & 0xff);
    pcVar6 = acStack_294;
    (*(code *)PTR_sprintf_0042b0e8)
              (pcVar6,"%02x%02x%02x%02x%02x%02x",local_230._0_1_,local_230._1_1_,
               local_230 >> 8 & 0xff,pcVar5,local_22c,local_22b);
    if (DAT_0042b27c != '\0') {
      (*(code *)PTR_RunSystemCmd_0042b0dc)
                (0,"ifconfig",&DAT_0042b27c,&DAT_00417ec0,"ether",pcVar6,"");
      pcVar5 = pcVar6;
    }
  }
  if ((DAT_0042b250 == 1) && (local_3f0 != (char *)0x1)) {
    (*(code *)PTR_apmib_get_0042b1a0)(100,&local_230);
    iVar2 = (*(code *)PTR_memcmp_0042b138)(&local_230,&DAT_004184b8,6);
    puVar10 = PTR_wlan_idx_0042b15c;
    if (iVar2 == 0) {
      if (local_3f0 == (char *)0x2) {
        (*(code *)PTR_apmib_get_0042b1a0)(0xc1,local_3d0 + 2);
        puVar9 = PTR_apmib_get_0042b1a0;
        uVar12 = *(undefined4 *)puVar10;
        *(int *)puVar10 = local_3d0[2];
        (*(code *)puVar9)(0xcb,&local_230);
        *(undefined4 *)puVar10 = uVar12;
      }
      else {
        (*(code *)PTR_apmib_get_0042b1a0)(0xca,&local_230);
      }
    }
    pcVar5 = (char *)(local_230 & 0xff);
    pcVar6 = acStack_294;
    (*(code *)PTR_sprintf_0042b0e8)
              (pcVar6,"%02x%02x%02x%02x%02x%02x",local_230._0_1_,local_230._1_1_,
               local_230 >> 8 & 0xff,pcVar5,local_22c,local_22b);
    if (DAT_0042b28c != '\0') {
      (*(code *)PTR_RunSystemCmd_0042b0dc)
                (0,"ifconfig",&DAT_0042b28c,&DAT_00417ec0,"ether",pcVar6,"");
      pcVar5 = pcVar6;
    }
    if (local_3f0 == (char *)0x2) {
      if (local_3d0[2] == 0) {
        pcVar6 = "wlan0";
      }
      else {
        if (local_3d0[2] != 1) goto LAB_004054c8;
        pcVar6 = "wlan1";
      }
      pcVar5 = acStack_294;
      (*(code *)PTR_RunSystemCmd_0042b0dc)(0,"ifconfig",pcVar6,&DAT_00417ec0,"ether",pcVar5,"");
    }
  }
LAB_004054c8:
  if (iVar3 != 0) {
    puVar7 = &local_2e4;
    _DAT_0042b518 = 0;
    DAT_0042b51c = 0;
    DAT_0042b520 = 0;
    DAT_0042b524 = 0;
    local_3d0[4] = 1;
    local_3d0[5] = 0;
    local_3b8 = (undefined4 *)0x0;
    local_2e4 = 0;
    local_2e0 = 0;
    local_2dc = 0;
    (*(code *)PTR_sprintf_0042b0e8)(puVar7,&DAT_004179c0,0);
    (*(code *)PTR_apmib_save_wlanIdx_0042b13c)();
    iVar2 = (*(code *)PTR_SetWlan_idx_0042b1cc)(puVar7);
    if (iVar2 == 0) {
LAB_004057a0:
      bVar1 = false;
LAB_004057a4:
      (*(code *)PTR_apmib_recov_wlanIdx_0042b17c)();
      if (!bVar1) goto LAB_004057dc;
      pcVar5 = "1";
    }
    else {
      (*(code *)PTR_apmib_get_0042b1a0)(0x16,local_3d0 + 4);
      if (local_3d0[4] == 1) {
        (*(code *)PTR_RunSystemCmd_0042b0dc)(0,"ifconfig",puVar7,&DAT_00417d90,"");
        pcVar6 = "";
        pcVar8 = "radio_off";
LAB_0040576c:
        (*(code *)PTR_RunSystemCmd_0042b0dc)(0,"iwpriv",&local_2e4,pcVar8,pcVar6,pcVar5);
        bVar1 = true;
        (*(code *)PTR_apmib_get_0042b1a0)(0x4c,local_3d0 + 5);
        if (local_3d0[5] == 0) goto LAB_004057a0;
        goto LAB_004057a4;
      }
      pcVar13 = (code *)PTR_strcpy_0042b208;
      if (DAT_0042b518 != '\0') {
        (*(code *)PTR_sprintf_0042b0e8)(auStack_3b4," %s",puVar7);
        puVar7 = auStack_3b4;
        pcVar13 = (code *)PTR_strcat_0042b170;
      }
      (*pcVar13)(&DAT_0042b518,puVar7);
      local_324 = 0;
      local_320 = 0;
      local_31c = 0;
      local_318 = 0;
      (*(code *)PTR_sprintf_0042b0e8)(&local_324,"%s-vxd",&local_2e4);
      (*(code *)PTR_RunSystemCmd_0042b0dc)(0,"ifconfig",&local_324,"0.0.0.0","");
      (*(code *)PTR_RunSystemCmd_0042b0dc)(0,"ifconfig",&local_324,&DAT_00417d90,"");
      (*(code *)PTR_RunSystemCmd_0042b0dc)(0,"ifconfig",&local_2e4,&DAT_00417d90,"");
      iVar2 = (*(code *)PTR_RunSystemCmd_0042b0dc)(0,"flash","set_mib",&local_2e4,"");
      if (iVar2 == 0) {
        (*(code *)PTR_apmib_get_0042b1a0)(0x298,&local_3b8);
        if (local_3b8 == (undefined4 *)0x0) {
          pcVar6 = "mc2u_disable=0";
        }
        else {
          pcVar6 = "mc2u_disable=1";
        }
        pcVar5 = "";
        pcVar8 = "set_mib";
        goto LAB_0040576c;
      }
      (*(code *)PTR_printf_0042b1f0)("[%s %d]init %s failed!\n","setinit",0x5dc,&local_2e4);
LAB_004057dc:
      pcVar5 = "0";
    }
    (*(code *)PTR_RunSystemCmd_0042b0dc)("/proc/br_wlanblock",&DAT_00417a78,pcVar5,"");
  }
  if (DAT_0042b518 != '\0') {
    if (DAT_0042b528 != '\0') {
      (*(code *)PTR_memcpy_0042b1c8)(&local_230,&DAT_0042b528,0x20);
      local_3b8 = &local_230;
      iVar2 = (*(code *)PTR_strsep_0042b0e0)(&local_3b8,&DAT_00417a44);
      pcVar5 = "ifconfig";
      while (iVar2 != 0) {
        local_30 = pcVar5;
        (*(code *)PTR_RunSystemCmd_0042b0dc)(0,pcVar5,iVar2,&DAT_00417d90,"");
        (*(code *)PTR_RunSystemCmd_0042b0dc)(0,"flash","set_mib",iVar2,"");
        iVar2 = (*(code *)PTR_strsep_0042b0e0)(&local_3b8,&DAT_00417a44);
        pcVar5 = local_30;
      }
    }
    if (DAT_0042b4bc != '\0') {
      local_3e8[2] = 0;
      (*(code *)PTR_strcpy_0042b208)(&local_230,&DAT_0042b4bc);
      iVar2 = (*(code *)PTR_strtok_r_0042b1f8)(&local_230,&DAT_00417a44,local_3e8 + 2);
      if (iVar2 != 0) {
        local_30 = "ifconfig";
        do {
          (*(code *)PTR_RunSystemCmd_0042b0dc)(0,local_30,iVar2,&DAT_00417d90,"");
          (*(code *)PTR_RunSystemCmd_0042b0dc)(0,"flash","set_mib",iVar2,"");
          iVar2 = (*(code *)PTR_strtok_r_0042b1f8)(0,&DAT_00417a44,local_3e8 + 2);
        } while (iVar2 != 0);
      }
    }
    iVar2 = (*(code *)PTR_strstr_0042b160)(&DAT_0042b28c,&DAT_004179c8);
    if (iVar2 != 0) {
      (*(code *)PTR_RunSystemCmd_0042b0dc)(0,"ifconfig",&DAT_0042b28c,&DAT_00417d90,"");
      (*(code *)PTR_RunSystemCmd_0042b0dc)(0,"flash","set_mib",&DAT_0042b28c,"");
    }
  }
  if (DAT_0042b250 == 1) {
    if (DAT_0042b258 == 1) {
      FUN_00402fa4(&local_230);
      (*(code *)PTR_setbridge_0042b0b8)(&local_230);
      FUN_004040d0();
      if (local_3d8 == 0) {
        (*(code *)PTR_apmib_get_0042b1a0)(0xaa,&local_230);
        uVar12 = (*(code *)PTR_inet_ntoa_0042b108)(local_230);
        (*(code *)PTR_strcpy_0042b208)(auStack_3a4,uVar12);
        (*(code *)PTR_apmib_get_0042b1a0)(0xab,&local_230);
        uVar12 = (*(code *)PTR_inet_ntoa_0042b108)(local_230);
        (*(code *)PTR_strcpy_0042b208)(auStack_384,uVar12);
        (*(code *)PTR_apmib_get_0042b1a0)(0xac,&local_230);
        iVar2 = (*(code *)PTR_memcmp_0042b138)(&local_230,&DAT_004184b0,4);
        if (iVar2 == 0) {
          (*(code *)PTR_memset_0042b114)(local_364,0,0x20);
        }
        else {
          uVar12 = (*(code *)PTR_inet_ntoa_0042b108)(local_230);
          (*(code *)PTR_strcpy_0042b208)(local_364,uVar12);
        }
        (*(code *)PTR_RunSystemCmd_0042b0dc)
                  (0,"ifconfig",&DAT_0042b25c,auStack_3a4,"netmask",auStack_384,"");
        if (local_364[0] != '\0') {
          (*(code *)PTR_RunSystemCmd_0042b0dc)(0,"route",&DAT_00417f5c,"default",&DAT_0042b25c,"");
          (*(code *)PTR_RunSystemCmd_0042b0dc)
                    (0,"route",&DAT_00417f60,&DAT_00417f64,"default",&DAT_00417e58,local_364,
                     &DAT_00417f6c,&DAT_0042b25c,"");
        }
      }
      else {
        if (local_3d8 != 2) goto LAB_00405d4c;
        (*(code *)PTR_sprintf_0042b0e8)(auStack_3b4," wlan%d",0);
        iVar2 = (*(code *)PTR_SetWlan_idx_0042b1cc)(auStack_3b4);
        uVar12 = 0;
        if (iVar2 != 0) {
          (*(code *)PTR_apmib_get_0042b1a0)(0x3f,&local_3ec);
          uVar12 = 5;
          if (local_3ec == 0) {
            uVar12 = 1;
          }
        }
        (*(code *)PTR_sleep_0042b1a4)(uVar12);
        (*(code *)PTR_set_lan_dhcpd_0042b0f4)(&DAT_0042b25c,2);
      }
      FUN_00403ec0(bVar11);
    }
LAB_00405d4c:
    (*(code *)PTR_RunSystemCmd_0042b0dc)(0,"iptables",&DAT_00417f7c,"");
    (*(code *)PTR_RunSystemCmd_0042b0dc)(0,"iptables",&DAT_00417f7c,&DAT_00417f80,&DAT_00417f84,"");
    (*(code *)PTR_RunSystemCmd_0042b0dc)
              (0,"iptables",&DAT_00417f88,"INPUT",&DAT_00417f94,"ACCEPT","");
    (*(code *)PTR_RunSystemCmd_0042b0dc)(0,&DAT_00417adc,&DAT_00417ae0,"/var/eth1_ip","");
    (*(code *)PTR_RunSystemCmd_0042b0dc)(0,&DAT_00417adc,&DAT_00417ae0,"/var/ntp_run","");
    if (DAT_0042b28c != '\0') {
      (*(code *)PTR_RunSystemCmd_0042b0dc)(0,"ifconfig",&DAT_0042b28c,&DAT_00417d90,"");
      (*(code *)PTR_RunSystemCmd_0042b0dc)(0,"ifconfig",&DAT_0042b28c,&DAT_00417fc0,"");
    }
    if (DAT_0042b254 == 1) {
      if (local_3f0 == (char *)0x0) {
LAB_00405f3c:
        (*(code *)PTR_RunSystemCmd_0042b0dc)("/proc/fast_nat",&DAT_00417a78,"1","");
        if (local_3d4 == 4) {
          (*(code *)PTR_RunSystemCmd_0042b0dc)("/proc/fast_pptp",&DAT_00417a78,"1","");
          (*(code *)PTR_apmib_get_0042b1a0)(0x1fd,&local_3ec);
          if (local_3ec != 1) {
            pcVar5 = "/proc/pptp_conn_ck";
            goto LAB_00405fe0;
          }
          pcVar5 = "/proc/pptp_conn_ck";
          pcVar6 = "3";
        }
        else {
          pcVar5 = "/proc/fast_pptp";
LAB_00405fe0:
          pcVar6 = "0";
        }
        (*(code *)PTR_RunSystemCmd_0042b0dc)(pcVar5,&DAT_00417a78,pcVar6,"");
        if (local_3d4 == 6) {
          pcVar5 = "1";
        }
        else {
          pcVar5 = "0";
        }
        (*(code *)PTR_RunSystemCmd_0042b0dc)("/proc/fast_l2tp",&DAT_00417a78,pcVar5,"");
        if ((local_3d4 == 2) || (((6 < local_3d4 && (local_3d4 != 0x10)) && (local_3d4 != 99)))) {
          (*(code *)PTR_printf_0042b1f0)("Invalid wan type:wan_dhcp_mode=%d\n");
          goto LAB_0040610c;
        }
        pcVar6 = (char *)0x1;
        puVar9 = &DAT_0042b25c;
        iVar2 = local_3d4;
        pcVar5 = local_3f0;
        pcVar13 = (code *)PTR_start_wan_0042b20c;
        puVar10 = local_3dc;
      }
      else {
        if (local_3f0 == (char *)0x2) {
          iVar2 = (*(code *)PTR_SetWlan_idx_0042b1cc)(&DAT_0042b28c);
          if ((iVar2 != 0) && ((*(code *)PTR_apmib_get_0042b1a0)(0x19,&local_3ec), local_3ec != 0))
          {
            (*(code *)PTR_RunSystemCmd_0042b0dc)
                      (0,"iwpriv",&DAT_0042b28c,"set_mib","keep_rsnie=1","");
          }
          goto LAB_00405f3c;
        }
        if ((local_3f0 != (char *)0x1) || (DAT_0042b28c == '\0')) goto LAB_0040610c;
        puVar10 = &DAT_00418030;
        pcVar6 = "";
        pcVar5 = "ifconfig";
        puVar9 = &DAT_0041802c;
        iVar2 = 0;
        pcVar13 = (code *)PTR_RunSystemCmd_0042b0dc;
      }
      (*pcVar13)(iVar2,pcVar5,&DAT_0042b28c,puVar9,puVar10,pcVar6);
    }
LAB_0040610c:
    (*(code *)PTR_RunSystemCmd_0042b0dc)(0,"renice -20 2","");
    (*(code *)PTR_RunSystemCmd_0042b0dc)(0,"renice -20 3","");
    iVar2 = (*(code *)PTR_isFileExist_0042b0ac)("/var/run/webs.pid");
    if (iVar2 != 0) {
      iVar2 = (*(code *)PTR_getPid_fromFile_0042b1e0)("/var/run/webs.pid");
      if (iVar2 != 0) {
        local_30 = acStack_344;
        (*(code *)PTR_sprintf_0042b0e8)(acStack_344,&DAT_004179c4,iVar2);
        (*(code *)PTR_RunSystemCmd_0042b0dc)(0,"renice",&DAT_00418060,local_30,"");
      }
    }
  }
  else {
    FUN_00402fa4(&local_230);
    (*(code *)PTR_setbridge_0042b0b8)(&local_230);
    FUN_004040d0();
    if (local_3d8 == 2) {
      (*(code *)PTR_sleep_0042b1a4)(1);
      (*(code *)PTR_set_lan_dhcpd_0042b0f4)(&DAT_0042b25c,1);
    }
    if ((local_3d8 == 2) || (local_3d8 == 0)) {
      FUN_00403ec0(bVar11);
    }
    if (local_3d8 < 2) {
      (*(code *)PTR_system_0042b1ac)("ifconfig br0 0.0.0.0");
    }
  }
  if (((DAT_0042b250 == 1) && (local_3f0 != (char *)0x1)) &&
     (iVar2 = (*(code *)PTR_isFileExist_0042b0ac)("/bin/lld2d"), iVar2 != 0)) {
    (*(code *)PTR_RunSystemCmd_0042b0dc)(0,"lld2d",&DAT_0042b25c,"");
  }
  iVar2 = (*(code *)PTR_isFileExist_0042b0ac)("/bin/snmpd");
  if (iVar2 != 0) {
    (*(code *)PTR_RunSystemCmd_0042b0dc)(0,"snmpd.sh","restart","");
  }
  iVar2 = (*(code *)PTR_isFileExist_0042b0ac)("/bin/nmsd");
  if (iVar2 != 0) {
    (*(code *)PTR_RunSystemCmd_0042b0dc)(0,&DAT_004180bc,"");
  }
  for (local_3d0[2] = 0; local_3d0[2] < 1; local_3d0[2] = local_3d0[2] + 1) {
    FUN_00403bf4(local_3d0[2]);
  }
  if (local_3f0 == (char *)0x0) {
    (*(code *)PTR_apmib_get_0042b1a0)(0x182,&local_3ec);
  }
  else {
    local_3ec = 0;
  }
  if ((local_3ec & 1) == 0) {
    pcVar5 = "0";
  }
  else {
    pcVar5 = "1";
  }
  (*(code *)PTR_RunSystemCmd_0042b0dc)("/proc/custom_Passthru",&DAT_00417a78,pcVar5,"");
  if (local_3ec == 0) {
    (*(code *)PTR_RunSystemCmd_0042b0dc)(0,"brctl","delif",&DAT_004179f0,"peth0","");
    puVar10 = &DAT_00417d90;
  }
  else {
    (*(code *)PTR_RunSystemCmd_0042b0dc)(0,"brctl","addif",&DAT_004179f0,"peth0","");
    puVar10 = &DAT_00417fc0;
  }
  (*(code *)PTR_RunSystemCmd_0042b0dc)(0,"ifconfig","peth0",puVar10,"");
  if (local_3f0 == (char *)0x2) {
    (*(code *)PTR_apmib_get_0042b1a0)(0xfa,local_3d0 + 3);
    (*(code *)PTR_apmib_get_0042b1a0)(0x182,&local_3ec);
    if (local_3ec != 0) {
      if (local_3d0[3] == 1) {
        local_3ec = local_3ec | 8;
      }
      puVar7 = &local_324;
      local_324 = 0;
      local_320 = 0;
      local_31c = 0;
      local_318 = 0;
      (*(code *)PTR_sprintf_0042b0e8)(puVar7,&DAT_004179c4,local_3ec);
      goto LAB_0040658c;
    }
  }
  else {
    local_3ec = 0;
  }
  puVar7 = (undefined4 *)&DAT_00418c68;
LAB_0040658c:
  (*(code *)PTR_RunSystemCmd_0042b0dc)("/proc/custom_Passthru_wlan",&DAT_00417a78,puVar7,"");
  if (local_3ec == 0) {
    (*(code *)PTR_RunSystemCmd_0042b0dc)(0,"brctl","delif",&DAT_004179f0,"pwlan0","");
    puVar10 = &DAT_00417d90;
  }
  else {
    (*(code *)PTR_RunSystemCmd_0042b0dc)(0,"brctl","addif",&DAT_004179f0,"pwlan0","");
    puVar10 = &DAT_00417fc0;
  }
  (*(code *)PTR_RunSystemCmd_0042b0dc)(0,"ifconfig","pwlan0",puVar10,"");
  (*(code *)PTR_RunSystemCmd_0042b0dc)("/proc/br_igmpVersion",&DAT_00417a78,"2","");
  (*(code *)PTR_RunSystemCmd_0042b0dc)("/proc/br_igmpsnoop",&DAT_00417a78,"1","");
  (*(code *)PTR_RunSystemCmd_0042b0dc)("/proc/br_igmpquery",&DAT_00417a78,"1","");
  (*(code *)PTR_RunSystemCmd_0042b0dc)("/proc/br_mldsnoop",&DAT_00417a78,"1","");
  (*(code *)PTR_RunSystemCmd_0042b0dc)("/proc/br_mldquery",&DAT_00417a78,"1","");
  (*(code *)PTR_apmib_get_0042b1a0)(0x68,&local_3ec);
  if ((local_3f0 == (char *)0x0) && (local_3ec == 0x10)) {
    (*(code *)PTR_system_0042b1ac)("echo \"/sbin/hotplug\" > /proc/sys/kernel/hotplug");
    (*(code *)PTR_system_0042b1ac)("mount -t sysfs none /sys           >/dev/null 2>&1");
    (*(code *)PTR_system_0042b1ac)("mount -t usbfs none /proc/bus/usb  >/dev/null 2>&1");
    (*(code *)PTR_system_0042b1ac)("mount -t tmpfs none /dev           >/dev/null 2>&1");
    (*(code *)PTR_system_0042b1ac)("mdev -s                            >/dev/null 2>&1");
    (*(code *)PTR_system_0042b1ac)("echo \"remove\" > /var/usb3g.stat");
    (*(code *)PTR_system_0042b1ac)("mnet -d &");
  }
  (*(code *)PTR_system_0042b1ac)("rm -f  /var/system/start_init 2> /dev/null");
  iVar2 = (*(code *)PTR_isFileExist_0042b0ac)("/var/system/mdnsd_started");
  if (iVar2 == 0) {
    (*(code *)PTR_system_0042b1ac)("mdnsd");
    (*(code *)PTR_system_0042b1ac)("echo 1 > /var/system/mdnsd_started");
  }
  (*(code *)PTR_system_0042b1ac)("fwd &");
  (*(code *)PTR_RunSystemCmd_0042b0dc)
            ("/proc/sys/net/ipv4/conf/eth1/arp_ignore",&DAT_00417a78,"1","");
  (*(code *)PTR_RunSystemCmd_0042b0dc)
            ("/proc/sys/net/ipv4/rt_cache_rebuild_count",&DAT_00417a78,&DAT_00418358,"");
  (*(code *)PTR_system_0042b1ac)("timelycheck &");
  iVar2 = (*(code *)PTR_isFileExist_0042b0ac)("/var/run/rtk_eventd.pid");
  if (iVar2 != 0) {
    (*(code *)PTR_system_0042b1ac)("killall rtk_eventd > /dev/null 2>&1");
  }
  return 0;
}

