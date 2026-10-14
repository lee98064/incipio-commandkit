/* setbridge @ 00407ad4 */

undefined4 setbridge(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined *puVar6;
  uint uVar7;
  code *pcVar8;
  char *pcVar9;
  int local_388;
  undefined4 local_384;
  int local_380;
  int local_37c;
  int local_378;
  uint local_374;
  int local_370;
  int local_36c;
  int local_368;
  int local_364;
  int local_360;
  uint local_35c;
  uint local_358;
  int local_354;
  int local_350;
  undefined4 uStack_34c;
  char local_347;
  char local_346;
  char local_345;
  undefined1 auStack_33c [16];
  undefined4 local_32c;
  undefined4 local_328;
  undefined4 local_324;
  undefined4 local_320;
  undefined4 local_31c;
  undefined4 local_318;
  undefined4 local_314;
  undefined4 local_310;
  undefined1 local_30c;
  undefined1 auStack_30b [16];
  undefined1 local_2fb;
  undefined1 local_2fa;
  undefined1 local_2f9;
  uint local_2f8;
  undefined1 auStack_2f4 [32];
  undefined1 auStack_2d4 [32];
  undefined1 auStack_2b4 [32];
  undefined1 auStack_294 [100];
  undefined4 local_230;
  undefined1 local_22c;
  undefined1 local_22b;
  char local_168 [304];
  int local_38;
  undefined4 *local_34;
  undefined4 *local_30;
  
  local_388 = -1;
  local_384 = 0;
  local_380 = 0;
  local_37c = 0;
  local_378 = 0;
  local_374 = 0;
  local_370 = 0;
  local_36c = 0;
  local_368 = 0;
  local_364 = 0;
  local_360 = 0;
  local_354 = 0;
  local_350 = 0;
  local_32c = 0;
  local_328 = 0;
  local_324 = 0;
  local_320 = 0;
  (*(code *)PTR_puts_0042b1b8)("Init bridge interface...");
  (*(code *)PTR_apmib_get_0042b1a0)(0xfa,&local_350);
  (*(code *)PTR_apmib_get_0042b1a0)(0xc0,&local_388);
  (*(code *)PTR_apmib_get_0042b1a0)(0xc1,&local_374);
  (*(code *)PTR_apmib_get_0042b1a0)(0xad,&local_360);
  iVar1 = (*(code *)PTR_isFileExist_0042b0ac)("/var/system/br_iface");
  if (iVar1 == 0) {
    iVar1 = (*(code *)PTR_setInAddr_0042b150)(&DAT_004179f0,0,0,0,1);
    if (iVar1 == 0) {
      local_384 = 0;
      (*(code *)PTR_strcpy_0042b208)(local_168,param_1);
      iVar1 = (*(code *)PTR_strtok_r_0042b1f8)(local_168,&DAT_00417a44,&local_384);
      while (iVar1 != 0) {
        (*(code *)PTR_RunSystemCmd_0042b0dc)(0,"ifconfig",iVar1,&DAT_00417d90,"");
        iVar3 = (*(code *)PTR_memcmp_0042b138)(iVar1,&DAT_004179f0,3);
        if (iVar3 != 0) {
          (*(code *)PTR_RunSystemCmd_0042b0dc)(0,"brctl","delif",&DAT_004179f0,iVar1,"");
        }
        iVar1 = (*(code *)PTR_strtok_r_0042b1f8)(0,&DAT_00417a44,&local_384);
      }
    }
  }
  else {
    (*(code *)PTR_memset_0042b114)(local_168,0,300);
    iVar1 = (*(code *)PTR_fopen_0042b118)("/var/system/br_iface",&DAT_00418704);
    if (iVar1 != 0) {
      (*(code *)PTR_fgets_0042b1d0)(local_168,300,iVar1);
      uVar7 = 0;
      pcVar9 = local_168;
      while (uVar2 = (*(code *)PTR_strlen_0042b0bc)(local_168), uVar7 < uVar2) {
        uVar7 = uVar7 + 1;
        if (*pcVar9 == '\n') {
          *pcVar9 = '\0';
        }
        pcVar9 = pcVar9 + 1;
      }
      local_168[uVar2] = '\0';
      iVar3 = (*(code *)PTR_strtok_r_0042b1f8)(local_168,&DAT_0041869c,&local_384);
      if (iVar3 != 0) {
        do {
          puVar6 = &DAT_004179f0;
          if (local_350 == 2) {
            iVar4 = (*(code *)PTR_strcmp_0042b0fc)(iVar3,"wlan0-va0");
            if ((iVar4 == 0) ||
               (iVar4 = (*(code *)PTR_strcmp_0042b0fc)(iVar3,"wlan0-va2"), iVar4 == 0)) {
              puVar6 = &DAT_004186b8;
            }
            else {
              iVar4 = (*(code *)PTR_strcmp_0042b0fc)(iVar3,"wlan0");
              if (iVar4 == 0) {
                (*(code *)PTR_RunSystemCmd_0042b0dc)(0,"ifconfig",iVar3,&DAT_00417d90,"");
              }
              else {
                iVar4 = (*(code *)PTR_strcmp_0042b0fc)(iVar3,"wlan0-va1");
                if (iVar4 != 0) goto LAB_00407e38;
              }
            }
LAB_00407e28:
            (*(code *)PTR_RunSystemCmd_0042b0dc)(0,"brctl","delif",puVar6,iVar3,"");
          }
          else {
            (*(code *)PTR_RunSystemCmd_0042b0dc)(0,"ifconfig",iVar3,&DAT_00417d90,"");
            iVar4 = (*(code *)PTR_memcmp_0042b138)(iVar3,&DAT_004179f0,3);
            if (iVar4 != 0) goto LAB_00407e28;
          }
LAB_00407e38:
          iVar3 = (*(code *)PTR_strtok_r_0042b1f8)(0,&DAT_0041869c,&local_384);
        } while (iVar3 != 0);
      }
      (*(code *)PTR_fclose_0042b10c)(iVar1);
    }
  }
  iVar1 = (*(code *)PTR_isFileExist_0042b0ac)("/bin/pathsel");
  if (iVar1 != 0) {
    SetWlan_idx("wlan0");
    (*(code *)PTR_apmib_get_0042b1a0)(0x3b,&local_378);
    (*(code *)PTR_apmib_get_0042b1a0)(0x284,&local_368);
    if (1 < local_378 - 4U) {
      local_368 = 0;
    }
    (*(code *)PTR_RunSystemCmd_0042b0dc)(0,"ifconfig","wlan-msh",&DAT_00417d90,"");
    (*(code *)PTR_RunSystemCmd_0042b0dc)(0,"brctl","delif",&DAT_004179f0,"wlan-msh","");
  }
  iVar1 = (*(code *)PTR_setInAddr_0042b150)(&DAT_004179f0,0,0,0,1);
  if (iVar1 == 0) {
    (*(code *)PTR_RunSystemCmd_0042b0dc)(0,"brctl","delif",&DAT_004179f0,&DAT_00417e5c,"");
    (*(code *)PTR_RunSystemCmd_0042b0dc)(0,"brctl","delif",&DAT_004179f0,"wlan0","");
  }
  iVar1 = (*(code *)PTR_isFileExist_0042b0ac)("/tmp/bridge_init");
  if (iVar1 == 0) {
    (*(code *)PTR_RunSystemCmd_0042b0dc)(0,"brctl","delbr",&DAT_004179f0,"");
    (*(code *)PTR_RunSystemCmd_0042b0dc)(0,"brctl",&DAT_00418700,&DAT_004179f0,"");
  }
  if (local_350 == 2) {
    (*(code *)PTR_RunSystemCmd_0042b0dc)(0,"brctl","delbr",&DAT_004186b8,"");
    (*(code *)PTR_RunSystemCmd_0042b0dc)(0,"brctl",&DAT_00418700,&DAT_004186b8,"");
  }
  (*(code *)PTR_apmib_get_0042b1a0)(0xb3,&local_364);
  if (local_364 == 1) {
    (*(code *)PTR_RunSystemCmd_0042b0dc)(0,"brctl","setfd",&DAT_004179f0,"4","");
    pcVar9 = "1";
  }
  else {
    (*(code *)PTR_RunSystemCmd_0042b0dc)(0,"brctl","setfd",&DAT_004179f0,&DAT_00418c68,"");
    pcVar9 = "0";
  }
  (*(code *)PTR_RunSystemCmd_0042b0dc)(0,"brctl",&DAT_00418710,&DAT_004179f0,pcVar9,"");
  (*(code *)PTR_apmib_get_0042b1a0)(0x268,&local_37c);
  if (local_37c == 1) {
    pcVar9 = "1";
  }
  else {
    pcVar9 = "0";
  }
  (*(code *)PTR_RunSystemCmd_0042b0dc)("/proc/rtk_vlan_support",&DAT_00417a78,pcVar9,"");
  (*(code *)PTR_apmib_get_0042b1a0)(0x269,&local_354);
  for (iVar1 = 1; iVar1 <= local_354; iVar1 = iVar1 + 1) {
    local_30c = (undefined1)iVar1;
    (*(code *)PTR_apmib_get_0042b1a0)(0x826a,&local_30c);
    (*(code *)PTR_sprintf_0042b0e8)(&local_230,"/proc/%s/mib_vlan",auStack_30b);
    iVar3 = (*(code *)PTR_isFileExist_0042b0ac)(&local_230);
    if (iVar3 != 0) {
      iVar3 = (*(code *)PTR_strncmp_0042b154)(auStack_30b,&DAT_00417e5c,4);
      if (iVar3 == 0) {
        uVar5 = 1;
        if (1 < local_388 - 1U) {
LAB_00408474:
          uVar5 = 0;
        }
      }
      else {
        (*(code *)PTR_sprintf_0042b0e8)(&local_32c,&DAT_004179c0,local_374);
        (*(code *)PTR_getWispRptIfaceName_0042b1e8)(&local_32c,local_374);
        uVar5 = (*(code *)PTR_strlen_0042b0bc)(auStack_30b);
        iVar3 = (*(code *)PTR_strncmp_0042b154)(&local_32c,auStack_30b,uVar5);
        uVar5 = 1;
        if (((iVar3 == 0) && (local_388 == 2)) && (local_374 < 2)) goto LAB_00408474;
      }
      pcVar9 = "echo \"1 %d %d %d %d %d %d\" > %s";
      if (local_37c != 1) {
        pcVar9 = "echo \"0 %d %d %d %d %d %d\" > %s";
      }
      (*(code *)PTR_sprintf_0042b0e8)
                (auStack_294,pcVar9,uVar5,local_30c,local_2fb,local_2f8 >> 0x10,local_2fa,local_2f9,
                 &local_230);
      (*(code *)PTR_system_0042b1ac)(auStack_294);
    }
  }
  iVar1 = (*(code *)PTR_isFileExist_0042b0ac)("/var/system/br_iface");
  if (iVar1 != 0) {
    (*(code *)PTR_unlink_0042b148)("/var/system/br_iface");
  }
  (*(code *)PTR_memset_0042b114)(local_168,0,300);
  local_384 = 0;
  (*(code *)PTR_strcpy_0042b208)(&local_230,param_1);
  iVar1 = (*(code *)PTR_strtok_r_0042b1f8)(&local_230,&DAT_00417a44,&local_384);
  if (iVar1 != 0) {
    local_34 = &local_384;
    do {
      (*(code *)PTR_strcpy_0042b208)(&uStack_34c,iVar1);
      iVar1 = (*(code *)PTR_strncmp_0042b154)(&uStack_34c,&DAT_00418780,3);
      if (iVar1 == 0) {
        local_380 = 1;
        if ((local_37c == 0) && ((byte)((char)uStack_34c - 0x32U) < 3)) {
          local_380 = 0;
        }
        if (local_380 == 1) {
          (*(code *)PTR_RunSystemCmd_0042b0dc)(0,"brctl","addif",&DAT_004179f0,&uStack_34c,"");
          (*(code *)PTR_RunSystemCmd_0042b0dc)(0,"ifconfig",&uStack_34c,"0.0.0.0","");
          pcVar8 = (code *)PTR_strcpy_0042b208;
          if (local_168[0] != '\0') {
            pcVar8 = (code *)PTR_strcat_0042b170;
          }
          (*pcVar8)(local_168,&uStack_34c);
          (*(code *)PTR_strcat_0042b170)(local_168,&DAT_0041869c);
        }
      }
      iVar1 = (*(code *)PTR_strtok_r_0042b1f8)(0,&DAT_00417a44,local_34);
    } while (iVar1 != 0);
  }
  local_384 = 0;
  (*(code *)PTR_strcpy_0042b208)(&local_230,param_1);
  iVar1 = (*(code *)PTR_strtok_r_0042b1f8)(&local_230,&DAT_00417a44,&local_384);
  if (iVar1 != 0) {
    local_38 = 0;
    do {
      (*(code *)PTR_strcpy_0042b208)(&uStack_34c,iVar1);
      iVar1 = (*(code *)PTR_strncmp_0042b154)(&uStack_34c,&DAT_00417ea0,4);
      if (iVar1 == 0) {
        uVar7 = (*(code *)PTR_strlen_0042b0bc)(&uStack_34c);
        if (((uVar7 < 9) || (local_347 != '-')) || ((local_346 != 'v' || (local_345 != 'a')))) {
          iVar1 = (*(code *)PTR_strstr_0042b160)(&uStack_34c,&DAT_00418784);
          if (iVar1 == 0) {
LAB_004088d0:
            iVar1 = SetWlan_idx(&uStack_34c);
            if ((iVar1 != 0) && ((*(code *)PTR_apmib_get_0042b1a0)(0x16,&local_380), local_380 == 0)
               ) {
LAB_00408904:
              (*(code *)PTR_sprintf_0042b0e8)(PTR_wlan_wan_iface_0042b204,&DAT_004179c0,local_374);
              (*(code *)PTR_getWispRptIfaceName_0042b1e8)(PTR_wlan_wan_iface_0042b204,local_374);
              uVar7 = (*(code *)PTR_strlen_0042b0bc)(&uStack_34c);
              if ((((uVar7 < 9) || (local_347 != '-')) || (local_346 != 'v')) || (local_345 != 'a'))
              {
                if (((local_38 != 0) || (local_388 != 2)) ||
                   (local_30 = &uStack_34c,
                   iVar1 = (*(code *)PTR_strcmp_0042b0fc)(PTR_wlan_wan_iface_0042b204,&uStack_34c),
                   iVar1 != 0)) goto LAB_004089d8;
                (*(code *)PTR_RunSystemCmd_0042b0dc)(0,"ifconfig",local_30,&DAT_00417fc0,"");
              }
              else {
                local_38 = 1;
LAB_004089d8:
                if (local_350 == 2) {
                  iVar1 = (*(code *)PTR_strcmp_0042b0fc)(&uStack_34c,"wlan0-va0");
                  if ((iVar1 != 0) &&
                     (iVar1 = (*(code *)PTR_strcmp_0042b0fc)(&uStack_34c,"wlan0-va2"), iVar1 != 0))
                  goto LAB_00408a4c;
                  puVar6 = &DAT_004186b8;
                }
                else {
LAB_00408a4c:
                  puVar6 = &DAT_004179f0;
                }
                (*(code *)PTR_RunSystemCmd_0042b0dc)(0,"brctl","addif",puVar6,&uStack_34c,"");
                (*(code *)PTR_RunSystemCmd_0042b0dc)(0,"ifconfig",&uStack_34c,"0.0.0.0","");
                pcVar8 = (code *)PTR_strcpy_0042b208;
                if (local_168[0] != '\0') {
                  pcVar8 = (code *)PTR_strcat_0042b170;
                }
                (*pcVar8)(local_168,&uStack_34c);
                (*(code *)PTR_strcat_0042b170)(local_168,&DAT_0041869c);
              }
              iVar1 = SetWlan_idx(&uStack_34c);
              if (iVar1 != 0) {
                (*(code *)PTR_apmib_get_0042b1a0)(0x3f,&local_370);
                (*(code *)PTR_apmib_get_0042b1a0)(0x40,&local_36c);
                (*(code *)PTR_apmib_get_0042b1a0)(0x3b,&local_378);
                if (((local_370 != 0) && (local_36c != 0)) && (local_378 - 2U < 2)) {
                  local_34 = &uStack_34c;
                  for (iVar1 = 0; iVar1 < local_36c; iVar1 = iVar1 + 1) {
                    (*(code *)PTR_sprintf_0042b0e8)(auStack_33c,"%s-wds%d",local_34,iVar1);
                    (*(code *)PTR_RunSystemCmd_0042b0dc)
                              (0,"brctl","addif",&DAT_004179f0,auStack_33c,"");
                    (*(code *)PTR_RunSystemCmd_0042b0dc)(0,"ifconfig",auStack_33c,"0.0.0.0","");
                    pcVar8 = (code *)PTR_strcpy_0042b208;
                    if (local_168[0] != '\0') {
                      pcVar8 = (code *)PTR_strcat_0042b170;
                    }
                    (*pcVar8)(local_168,auStack_33c);
                    (*(code *)PTR_strcat_0042b170)(local_168,&DAT_0041869c);
                  }
                }
              }
            }
          }
          else if (local_368 != 0) goto LAB_00408904;
        }
        else {
          local_31c = 0;
          local_318 = 0;
          local_314 = 0;
          local_310 = 0;
          (*(code *)PTR_strncpy_0042b14c)(&local_31c,&uStack_34c,5);
          iVar1 = SetWlan_idx(&local_31c);
          if (iVar1 != 0) {
            (*(code *)PTR_apmib_get_0042b1a0)(0x16,&local_380);
            (*(code *)PTR_apmib_get_0042b1a0)(0x3b,&local_378);
            if ((local_380 == 0) && ((local_378 == 0 || (local_378 == 3)))) goto LAB_004088d0;
          }
        }
      }
      iVar1 = (*(code *)PTR_strtok_r_0042b1f8)(0,&DAT_00417a44,&local_384);
    } while (iVar1 != 0);
  }
  (*(code *)PTR_RunSystemCmd_0042b0dc)("/var/system/br_iface",&DAT_00417a78,local_168,"");
  (*(code *)PTR_apmib_get_0042b1a0)(0xc9,&local_230);
  (*(code *)PTR_sprintf_0042b0e8)
            (auStack_294,"%02x%02x%02x%02x%02x%02x",local_230._0_1_,local_230._1_1_,
             local_230 >> 8 & 0xff,local_230 & 0xff,local_22c,local_22b);
  (*(code *)PTR_RunSystemCmd_0042b0dc)
            (0,"ifconfig",&DAT_004179f0,&DAT_00417ec0,"ether",auStack_294,"");
  iVar1 = (*(code *)PTR_isFileExist_0042b0ac)("/tmp/bridge_init");
  if (iVar1 == 0) {
    (*(code *)PTR_RunSystemCmd_0042b0dc)(0,"ifconfig",&DAT_004179f0,"0.0.0.0","");
    (*(code *)PTR_RunSystemCmd_0042b0dc)("/tmp/bridge_init",&DAT_00417a78,"1","");
  }
  if ((local_360 == 0) || (local_360 == 2)) {
    (*(code *)PTR_apmib_get_0042b1a0)(0xaa,&local_230);
    uVar5 = (*(code *)PTR_inet_ntoa_0042b108)(local_230);
    (*(code *)PTR_strcpy_0042b208)(auStack_2f4,uVar5);
    (*(code *)PTR_apmib_get_0042b1a0)(0xab,&local_230);
    uVar5 = (*(code *)PTR_inet_ntoa_0042b108)(local_230);
    (*(code *)PTR_strcpy_0042b208)(auStack_2d4,uVar5);
    (*(code *)PTR_apmib_get_0042b1a0)(0xac,&local_230);
    uVar5 = (*(code *)PTR_inet_ntoa_0042b108)(local_230);
    (*(code *)PTR_strcpy_0042b208)(auStack_2b4,uVar5);
    (*(code *)PTR_RunSystemCmd_0042b0dc)
              (0,"ifconfig",&DAT_004179f0,auStack_2f4,"netmask",auStack_2d4,"");
    (*(code *)PTR_apmib_get_0042b1a0)(0xaa,&local_35c);
    (*(code *)PTR_apmib_get_0042b1a0)(0xab,&local_358);
    local_35c = local_35c & local_358;
    uVar5 = (*(code *)PTR_inet_ntoa_0042b108)(local_35c);
    (*(code *)PTR_strcpy_0042b208)(auStack_2f4,uVar5);
    (*(code *)PTR_RunSystemCmd_0042b0dc)
              (0,"route",&DAT_00417f5c,&DAT_00417f64,auStack_2f4,"netmask",auStack_2d4,"");
    (*(code *)PTR_RunSystemCmd_0042b0dc)
              (0,"route",&DAT_00417f60,&DAT_00417f64,auStack_2f4,"netmask",auStack_2d4,&DAT_00417f6c
               ,&DAT_004179f0,"");
    iVar1 = (*(code *)PTR_strcmp_0042b0fc)(auStack_2b4,"0.0.0.0");
    if (iVar1 != 0) {
      (*(code *)PTR_RunSystemCmd_0042b0dc)
                (0,"route",&DAT_00417f5c,"default",&DAT_00417f6c,&DAT_004179f0,"");
      (*(code *)PTR_RunSystemCmd_0042b0dc)
                (0,"route",&DAT_00417f60,&DAT_00417f64,"default",&DAT_00417e58,auStack_2b4,
                 &DAT_00417f6c,&DAT_004179f0,"");
    }
  }
  else if (local_360 == 1) {
    (*(code *)PTR_puts_0042b1b8)("wait for bridge initialization...");
    local_380 = 10;
    do {
      local_380 = local_380 + -1;
      (*(code *)PTR_sleep_0042b1a4)(1);
    } while (local_380 != 0);
    FUN_00406cf4(&DAT_004179f0);
  }
  if (local_350 == 2) {
    (*(code *)PTR_RunSystemCmd_0042b0dc)(0,"ifconfig",&DAT_004186b8,&DAT_00417fc0,"");
  }
  return 0;
}

