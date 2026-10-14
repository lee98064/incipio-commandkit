/* FUN_00415828 @ 00415828 */

/* WARNING: Type propagation algorithm not settling */

void FUN_00415828(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  undefined *puVar8;
  char *pcVar9;
  int local_4d0;
  int local_4cc;
  int local_4c8 [3];
  undefined4 local_4bc;
  undefined4 local_4b8;
  int local_4b4;
  int local_4b0;
  int local_4ac;
  undefined4 local_4a8;
  uint local_4a4;
  undefined1 auStack_4a0 [4];
  int local_49c [5];
  char local_488 [32];
  char acStack_468 [32];
  char acStack_448 [32];
  char acStack_428 [32];
  undefined1 auStack_408 [32];
  undefined1 auStack_3e8 [32];
  undefined1 auStack_3c8 [32];
  undefined1 auStack_3a8 [32];
  undefined1 auStack_388 [32];
  char *local_368 [16];
  uint local_328 [16];
  undefined1 auStack_2e8 [100];
  undefined1 auStack_284 [100];
  undefined1 auStack_220 [128];
  char local_1a0 [160];
  char acStack_100 [200];
  undefined4 *local_38;
  int local_34;
  char *local_30;
  
  local_4d0 = 0;
  local_4cc = 0;
  local_4c8[0] = 0;
  local_4c8[1] = 0;
  (*(code *)PTR_memset_0042b114)(acStack_468,0,0x20);
  (*(code *)PTR_memset_0042b114)(acStack_448,0,0x20);
  (*(code *)PTR_memset_0042b114)(acStack_428,0,0x20);
  local_49c[1] = 0;
  local_49c[2] = 0;
  local_49c[3] = 0;
  local_49c[4] = 0;
  local_4b8 = 0;
  (*(code *)PTR_memset_0042b114)(local_488,0,0x1f);
  (*(code *)PTR_memset_0042b114)(auStack_2e8,0,100);
  (*(code *)PTR_memset_0042b114)(auStack_3c8,0,0x20);
  local_4b4 = 0;
  local_4b0 = 0;
  local_4ac = 0;
  local_4a8 = 0;
  (*(code *)PTR_memset_0042b114)(local_328,0,0x40);
  (*(code *)PTR_apmib_get_0042b1a0)(0x68,local_4c8);
  (*(code *)PTR_apmib_get_0042b1a0)(0x69,&local_4cc);
  (*(code *)PTR_apmib_get_0042b1a0)(0xad,&local_4b4);
  (*(code *)PTR_apmib_get_0042b1a0)(0xc0,&local_4b0);
  (*(code *)PTR_apmib_get_0042b1a0)(0xc0,&local_4ac);
  (*(code *)PTR_apmib_get_0042b1a0)(0xc1,&local_4a8);
  if ((local_4b4 == 1) &&
     (iVar3 = (*(code *)PTR_strcmp_0042b0fc)(param_1,&DAT_00417ad0), iVar3 != 0)) {
    return;
  }
  iVar3 = (*(code *)PTR_strcmp_0042b0fc)(param_1,&DAT_00418cf8);
  if (iVar3 != 0) {
    pcVar7 = local_1a0;
    do {
      pcVar9 = pcVar7 + 0x20;
      (*(code *)PTR_memset_0042b114)(pcVar7,0,0x20);
      pcVar7 = pcVar9;
    } while (pcVar9 != acStack_100);
    local_4b8 = 0;
    (*(code *)PTR_strcpy_0042b208)(acStack_100,param_2);
    iVar3 = (*(code *)PTR_strtok_r_0042b1f8)(acStack_100,&DAT_00417b24,&local_4b8);
    if (iVar3 != 0) {
      local_38 = &local_4b8;
      iVar5 = 1;
      do {
        pcVar7 = acStack_468;
        if (((iVar5 == 2) || (pcVar7 = acStack_448, iVar5 == 3)) ||
           (pcVar7 = acStack_428, iVar5 == 4)) {
LAB_00416450:
          (*(code *)PTR_strcpy_0042b208)(pcVar7,iVar3);
        }
        else {
          pcVar7 = local_1a0;
          if (4 < iVar5) {
            do {
              pcVar9 = pcVar7 + 0x20;
              if ((*pcVar7 != '\0') &&
                 (local_34 = iVar3, local_30 = pcVar7 + 0x20,
                 iVar6 = (*(code *)PTR_strcmp_0042b0fc)(pcVar7,iVar3), iVar3 = local_34,
                 pcVar9 = local_30, iVar6 == 0)) goto LAB_00416460;
              pcVar7 = pcVar9;
            } while (pcVar9 != acStack_100);
            iVar6 = 0;
            if (((local_1a0[0] == '\0') || (iVar6 = 1, local_1a0[0x20] == '\0')) ||
               ((iVar6 = 2, local_1a0[0x40] == '\0' ||
                ((iVar6 = 3, local_1a0[0x60] == '\0' || (iVar6 = 4, local_1a0[0x80] == '\0')))))) {
              pcVar7 = local_1a0 + iVar6 * 0x20;
              goto LAB_00416450;
            }
          }
        }
LAB_00416460:
        iVar3 = (*(code *)PTR_strtok_r_0042b1f8)(0,&DAT_00417b24,local_38);
        if (iVar3 == 0) break;
        iVar5 = iVar5 + 1;
      } while( true );
    }
    iVar3 = (*(code *)PTR_strcmp_0042b0fc)(param_1,&DAT_00417ad0);
    iVar5 = 0;
    if (iVar3 != 0) {
      iVar5 = FUN_004150f0(acStack_468,acStack_448);
    }
    (*(code *)PTR_RunSystemCmd_0042b0dc)(0,"ifconfig",param_1,acStack_468,"netmask",acStack_448,"");
    if ((local_4c8[0] != 4) && (local_4c8[0] != 6)) {
      (*(code *)PTR_RunSystemCmd_0042b0dc)(0,"route",&DAT_0041803c,"default","");
      (*(code *)PTR_RunSystemCmd_0042b0dc)
                (0,"route",&DAT_00418040,&DAT_00418044,"default",&DAT_00417f38,acStack_428,
                 &DAT_0041804c,param_1,"");
      if (local_4cc == 1) {
        FUN_00413404();
      }
      else {
        (*(code *)PTR_RunSystemCmd_0042b0dc)(0,"killall",&DAT_004196a4,"");
        iVar3 = (*(code *)PTR_isFileExist_0042b0ac)("/var/run/dnrd.pid");
        if (iVar3 != 0) {
          (*(code *)PTR_unlink_0042b148)("/var/run/dnrd.pid");
        }
        pcVar7 = local_488;
        (*(code *)PTR_apmib_get_0042b1a0)(0xc6,pcVar7);
        (*(code *)PTR_getInAddr_0042b1c4)(&DAT_00417ad0,2,&local_4bc);
        uVar4 = (*(code *)PTR_inet_ntoa_0042b108)(local_4bc);
        (*(code *)PTR_strcpy_0042b208)(auStack_3c8,uVar4);
        (*(code *)PTR_RunSystemCmd_0042b0dc)(0,&DAT_00417bbc,&DAT_00417bc0,"/etc/hosts","");
        (*(code *)PTR_memset_0042b114)(auStack_2e8,0,100);
        if (local_488[0] == '\0') {
          pcVar7 = "realtek";
        }
        (*(code *)PTR_sprintf_0042b0e8)
                  (auStack_2e8,"%s\\%s%s%s%s",auStack_3c8,pcVar7,"AP.com|",pcVar7,"AP.net");
        (*(code *)PTR_RunSystemCmd_0042b0dc)("/etc/hosts",&DAT_00417b58,auStack_2e8,"");
        local_368[0] = "dnrd";
        local_368[1] = "--cache=off";
        pcVar7 = local_1a0;
        iVar6 = 0;
        iVar3 = 2;
        do {
          if (*pcVar7 != '\0') {
            local_368[iVar3] = "-s";
            local_368[iVar3 + 1] = pcVar7;
            (*(code *)PTR_sprintf_0042b0e8)(auStack_220,"nameserver %s\n",pcVar7);
            uVar4 = 1;
            iVar3 = iVar3 + 2;
            if (iVar6 != 0) {
              uVar4 = 2;
            }
            (*(code *)PTR_write_line_to_file_0042b1a8)("/var/resolv.conf",uVar4,auStack_220);
          }
          iVar6 = iVar6 + 1;
          pcVar7 = pcVar7 + 0x20;
        } while (iVar6 != 5);
        local_368[iVar3] = (char *)0x0;
        iVar3 = (*(code *)PTR_strcmp_0042b0fc)(param_1,&DAT_00417ad0);
        if (iVar3 != 0) {
          (*(code *)PTR_DoCmd_0042b0d4)(local_368,0);
        }
      }
      iVar3 = (*(code *)PTR_strcmp_0042b0fc)(param_1,&DAT_00417ad0);
      if (iVar3 == 0) {
        (*(code *)PTR_memset_0042b114)(auStack_284,0,100);
        iVar3 = (*(code *)PTR_isFileExist_0042b0ac)("/var/restart_iapp");
        if (iVar3 != 0) {
          iVar3 = (*(code *)PTR_fopen_0042b118)("/var/restart_iapp",&DAT_004187f4);
          if (iVar3 == 0) {
            (*(code *)PTR_puts_0042b1b8)("can not open /var/restart_iapp");
            return;
          }
          (*(code *)PTR_fgets_0042b1d0)(auStack_284,100,iVar3);
          (*(code *)PTR_fclose_0042b10c)(iVar3);
          (*(code *)PTR_system_0042b1ac)(auStack_284);
        }
      }
      else {
        (*(code *)PTR_setFirewallIptablesRules_0042b0c0)(0,0);
      }
    }
    if ((local_4c8[0] != 4) && (local_4c8[0] != 6)) goto LAB_00416e38;
    pcVar7 = local_1a0;
    if (local_4cc == 1) {
      FUN_00413404();
    }
    else {
      iVar3 = 0;
      do {
        if (*pcVar7 != '\0') {
          (*(code *)PTR_sprintf_0042b0e8)(auStack_220,"nameserver %s\n",pcVar7);
          uVar4 = 1;
          if (iVar3 != 0) {
            uVar4 = 2;
          }
          (*(code *)PTR_write_line_to_file_0042b1a8)("/var/resolv.conf",uVar4,auStack_220);
        }
        iVar3 = iVar3 + 1;
        pcVar7 = pcVar7 + 0x20;
      } while (iVar3 != 5);
    }
    (*(code *)PTR_RunSystemCmd_0042b0dc)(0,"route",&DAT_0041803c,"default",&DAT_0041804c,param_1,"")
    ;
    (*(code *)PTR_strcpy_0042b208)(PTR_tmp_default_gw_0042b0f8,acStack_428);
    (*(code *)PTR_strcpy_0042b208)(PTR_tmp_wan_if_0042b1ec,param_1);
    (*(code *)PTR_RunSystemCmd_0042b0dc)
              (0,"route",&DAT_00418040,&DAT_00418044,"default",&DAT_00417f38,acStack_428,
               &DAT_0041804c,param_1,"");
    iVar3 = (*(code *)PTR_isFileExist_0042b0ac)("/var/tmp_wan_check");
    if ((iVar3 == 0) ||
       (iVar3 = (*(code *)PTR_isFileExist_0042b0ac)("/var/tmp_wan_dhcp_info"), iVar3 == 0))
    goto LAB_00416da8;
    if (local_4c8[0] == 4) {
      local_49c[0] = 0;
      (*(code *)PTR_apmib_get_0042b1a0)(0x157,local_49c);
      if (local_49c[0] != 0) {
        (*(code *)PTR_apmib_get_0042b1a0)(0x156,auStack_284);
        iVar3 = FUN_00414b38(auStack_284,auStack_4a0);
        if (iVar3 != 0) {
          pcVar7 = "can\'t get pptpServerDomain:%s \'s IP";
LAB_00416c38:
          (*(code *)PTR_printf_0042b1f0)(pcVar7,auStack_284);
          return;
        }
        (*(code *)PTR_apmib_set_0042b184)(0x93,auStack_4a0);
        (*(code *)PTR_apmib_update_0042b188)(4);
      }
      uVar4 = 0x93;
LAB_00416c54:
      (*(code *)PTR_apmib_get_0042b1a0)(uVar4,local_328);
      uVar4 = (*(code *)PTR_inet_ntoa_0042b108)(local_328[0]);
      (*(code *)PTR_strcpy_0042b208)(auStack_3a8,uVar4);
      uVar2 = local_328[0];
      (*(code *)PTR_inet_aton_0042b120)(acStack_468,&local_4a4);
      uVar1 = local_4a4;
      (*(code *)PTR_inet_aton_0042b120)(acStack_448,&local_4a4);
      (*(code *)PTR_inet_aton_0042b120)(acStack_428,&local_4a4);
      if (((uVar1 ^ uVar2) & local_4a4) != 0) {
        local_328[0] = local_4a4 & uVar2;
        uVar4 = (*(code *)PTR_inet_ntoa_0042b108)(local_328[0]);
        (*(code *)PTR_strcpy_0042b208)(auStack_388,uVar4);
        (*(code *)PTR_RunSystemCmd_0042b0dc)
                  (0,"route",&DAT_00418040,&DAT_00418044,auStack_388,"netmask",acStack_448,
                   &DAT_00417f38,acStack_428,"");
      }
    }
    else if (local_4c8[0] == 6) {
      local_49c[0] = 0;
      (*(code *)PTR_apmib_get_0042b1a0)(499,local_49c);
      if (local_49c[0] != 0) {
        (*(code *)PTR_apmib_get_0042b1a0)(500,auStack_284);
        iVar3 = FUN_00414b38(auStack_284,auStack_4a0);
        if (iVar3 != 0) {
          pcVar7 = "can\'t get l2tpServerDomain:%s \'s IP";
          goto LAB_00416c38;
        }
        (*(code *)PTR_apmib_set_0042b184)(0x14d,auStack_4a0);
        (*(code *)PTR_apmib_update_0042b188)(4);
      }
      uVar4 = 0x14d;
      goto LAB_00416c54;
    }
    (*(code *)PTR_unlink_0042b148)("/var/tmp_wan_check");
    (*(code *)PTR_unlink_0042b148)("/var/tmp_wan_dhcp_info");
LAB_00416da8:
    iVar3 = (*(code *)PTR_isFileExist_0042b0ac)("/etc/ppp/connectfile");
    if (iVar3 != 0) {
      (*(code *)PTR_unlink_0042b148)("/etc/ppp/connectfile");
    }
    if (local_4c8[0] == 4) {
      FUN_00411d44(local_4ac,param_1,&DAT_00417ad0,local_4a8,1);
    }
    if (local_4c8[0] != 6) {
      return;
    }
    FUN_00410cbc(local_4ac,param_1,&DAT_00417ad0,local_4a8,1);
    return;
  }
  (*(code *)PTR_getInAddr_0042b1c4)(&DAT_00418cf8,2,local_4c8 + 2);
  uVar4 = (*(code *)PTR_inet_ntoa_0042b108)(local_4c8[2]);
  (*(code *)PTR_strcpy_0042b208)(acStack_468,uVar4);
  (*(code *)PTR_getInAddr_0042b1c4)(&DAT_00418cf8,4,local_4c8 + 2);
  uVar4 = (*(code *)PTR_inet_ntoa_0042b108)(local_4c8[2]);
  (*(code *)PTR_strcpy_0042b208)(acStack_448,uVar4);
  iVar5 = FUN_004150f0(acStack_468,acStack_448);
  if ((local_4c8[0] == 4) || (local_4c8[0] == 6)) {
    if (local_4ac == 0) {
      (*(code *)PTR_RunSystemCmd_0042b0dc)
                (0,"route",&DAT_0041803c,"default",&DAT_0041804c,&DAT_00417f3c,"");
    }
    if (local_4ac == 2) {
      (*(code *)PTR_RunSystemCmd_0042b0dc)
                (0,"route",&DAT_0041803c,"default",&DAT_0041804c,"wlan0","");
    }
  }
  if (local_4c8[0] == 4) {
    (*(code *)PTR_apmib_get_0042b1a0)(0x1fd,local_4c8 + 1);
    if (local_4d0 == 1) {
      puVar8 = &DAT_00417b60;
    }
    else {
      puVar8 = &DAT_00418d58;
    }
    (*(code *)PTR_RunSystemCmd_0042b0dc)("/proc/pptp_conn_ck",&DAT_00417b58,puVar8,"");
  }
  if (((local_4c8[0] - 3U < 2) || (local_4c8[0] == 6)) &&
     (local_4d0 = (*(code *)PTR_getInAddr_0042b1c4)(&DAT_00418cf8,0,local_4c8 + 2), local_4d0 == 1))
  {
    uVar4 = (*(code *)PTR_inet_ntoa_0042b108)(local_4c8[2]);
    (*(code *)PTR_strcpy_0042b208)(acStack_428,uVar4);
    (*(code *)PTR_RunSystemCmd_0042b0dc)(0,"route",&DAT_0041803c,"default","");
    (*(code *)PTR_RunSystemCmd_0042b0dc)
              (0,"route",&DAT_00418040,&DAT_00418044,"default",&DAT_00417f38,acStack_428,
               &DAT_0041804c,&DAT_00418cf8,"");
  }
  if ((local_4c8[0] == 4) || (local_4c8[0] == 6)) {
    local_4b8 = 0;
    (*(code *)PTR_strcpy_0042b208)(acStack_100,param_2);
    iVar3 = (*(code *)PTR_strtok_r_0042b1f8)(acStack_100,&DAT_00417b24,&local_4b8);
    if (iVar3 == 0) {
      iVar3 = 0;
    }
    else {
      do {
        iVar6 = (*(code *)PTR_strcmp_0042b0fc)(iVar3,&DAT_0041810c);
        iVar3 = (*(code *)PTR_strtok_r_0042b1f8)(0,&DAT_00417b24,&local_4b8);
        if (iVar3 == 0) goto LAB_00415ddc;
      } while (iVar6 != 0);
      iVar3 = (*(code *)PTR_atoi_0042b0c4)(iVar3);
    }
  }
  else {
LAB_00415ddc:
    iVar3 = 0;
  }
  if (local_4c8[0] == 4) {
    uVar4 = 0x96;
LAB_00415e0c:
    (*(code *)PTR_apmib_get_0042b1a0)(uVar4,&local_4d0);
    if ((0 < iVar3) && (iVar3 < local_4d0)) {
      local_4d0 = iVar3;
    }
LAB_00415e70:
    (*(code *)PTR_sprintf_0042b0e8)(local_49c + 1,&DAT_00417aa4,local_4d0);
  }
  else {
    if (local_4c8[0] == 6) {
      uVar4 = 0x150;
      goto LAB_00415e0c;
    }
    if (local_4c8[0] == 3) {
      (*(code *)PTR_apmib_get_0042b1a0)(0x90,&local_4d0);
      goto LAB_00415e70;
    }
  }
  (*(code *)PTR_RunSystemCmd_0042b0dc)(0,"ifconfig",&DAT_00418cf8,"txqueuelen",&DAT_00419aa0,"");
  if (local_4cc == 1) {
    FUN_00413404();
  }
  else {
    iVar3 = (*(code *)PTR_fopen_0042b118)("/etc/ppp/resolv.conf",&DAT_004187f4);
    if (iVar3 == 0) {
      (*(code *)PTR_strcpy_0042b208)(local_1a0,"168.95.1.1");
    }
    else {
      pcVar7 = local_1a0;
      do {
        pcVar9 = pcVar7 + 0x20;
        (*(code *)PTR_memset_0042b114)(pcVar7,0,0x20);
        pcVar7 = pcVar9;
      } while (pcVar9 != acStack_100);
LAB_0041601c:
      iVar6 = (*(code *)PTR_fgets_0042b1d0)(auStack_220,0x80,iVar3);
      if (iVar6 != 0) {
        (*(code *)PTR_memset_0042b114)(auStack_3e8,0,0x20);
        (*(code *)PTR_sscanf_0042b130)(auStack_220,"%s %s",auStack_408,auStack_3e8);
        pcVar7 = local_1a0;
        do {
          pcVar9 = pcVar7 + 0x20;
          if ((*pcVar7 != '\0') &&
             (iVar6 = (*(code *)PTR_strcmp_0042b0fc)(pcVar7,auStack_3e8), iVar6 == 0))
          goto LAB_0041601c;
          pcVar7 = pcVar9;
        } while (pcVar9 != acStack_100);
        iVar6 = 0;
        if ((((local_1a0[0] == '\0') || (iVar6 = 1, local_1a0[0x20] == '\0')) ||
            (iVar6 = 2, local_1a0[0x40] == '\0')) ||
           ((iVar6 = 3, local_1a0[0x60] == '\0' || (iVar6 = 4, local_1a0[0x80] == '\0')))) {
          (*(code *)PTR_strcpy_0042b208)(local_1a0 + iVar6 * 0x20,auStack_3e8);
        }
        goto LAB_0041601c;
      }
      (*(code *)PTR_fclose_0042b10c)(iVar3);
    }
    (*(code *)PTR_RunSystemCmd_0042b0dc)(0,"killall",&DAT_004196a4,"");
    iVar3 = (*(code *)PTR_isFileExist_0042b0ac)("/var/run/dnrd.pid");
    if (iVar3 != 0) {
      (*(code *)PTR_unlink_0042b148)("/var/run/dnrd.pid");
    }
    pcVar7 = local_488;
    (*(code *)PTR_apmib_get_0042b1a0)(0xc6,pcVar7);
    (*(code *)PTR_getInAddr_0042b1c4)(&DAT_00417ad0,2,&local_4bc);
    uVar4 = (*(code *)PTR_inet_ntoa_0042b108)(local_4bc);
    (*(code *)PTR_strcpy_0042b208)(auStack_3c8,uVar4);
    (*(code *)PTR_RunSystemCmd_0042b0dc)(0,&DAT_00417bbc,&DAT_00417bc0,"/etc/hosts","");
    (*(code *)PTR_memset_0042b114)(auStack_2e8,0,100);
    if (local_488[0] == '\0') {
      pcVar7 = "realtek";
    }
    (*(code *)PTR_sprintf_0042b0e8)
              (auStack_2e8,"%s\\%s%s%s%s",auStack_3c8,pcVar7,"AP.com|",pcVar7,"AP.net");
    (*(code *)PTR_RunSystemCmd_0042b0dc)("/etc/hosts",&DAT_00417b58,auStack_2e8,"");
    local_368[0] = "dnrd";
    local_368[1] = "--cache=off";
    pcVar7 = local_1a0;
    iVar3 = 2;
    do {
      iVar6 = iVar3 + 1;
      if (*pcVar7 != '\0') {
        local_368[iVar3] = "-s";
        iVar3 = iVar3 + 2;
        local_368[iVar6] = pcVar7;
      }
      pcVar7 = pcVar7 + 0x20;
    } while (pcVar7 != acStack_100);
    local_368[iVar3] = (char *)0x0;
    (*(code *)PTR_RunSystemCmd_0042b0dc)
              (0,&DAT_00419af8,"/etc/ppp/resolv.conf","/var/resolv.conf","");
    (*(code *)PTR_DoCmd_0042b0d4)(local_368,0);
  }
LAB_00416e38:
  iVar3 = (*(code *)PTR_strcmp_0042b0fc)(param_1,&DAT_00417ad0);
  if (iVar3 != 0) {
    if (iVar5 == 1) {
      if (local_4b0 != 2) {
        (*(code *)PTR_system_0042b1ac)("ifconfig wlan0 down");
        (*(code *)PTR_apmib_get_0042b1a0)(0x517,&local_4d0);
        if (local_4d0 == 2) {
          (*(code *)PTR_system_0042b1ac)("ifconfig wlan1 down");
        }
      }
      (*(code *)PTR_system_0042b1ac)("ifconfig eth0 down");
      (*(code *)PTR_sleep_0042b1a4)(10);
      (*(code *)PTR_system_0042b1ac)("ifconfig eth0 up");
      if ((local_4b0 != 2) && ((*(code *)PTR_system_0042b1ac)("ifconfig wlan0 up"), local_4d0 == 2))
      {
        (*(code *)PTR_system_0042b1ac)("ifconfig wlan1 up");
      }
    }
    (*(code *)PTR_puts_0042b1b8)("WAN Connected");
    FUN_00410798();
    FUN_00410624();
    FUN_004104f0(param_1,&DAT_00417ad0);
  }
  return;
}

