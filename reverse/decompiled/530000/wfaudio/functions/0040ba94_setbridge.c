/* setbridge @ 0040ba94 */

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
  (*(code *)PTR_puts_00423564)("Init bridge interface...");
  (*(code *)PTR_apmib_get_0042354c)(0xfa,&local_350);
  (*(code *)PTR_apmib_get_0042354c)(0xc0,&local_388);
  (*(code *)PTR_apmib_get_0042354c)(0xc1,&local_374);
  (*(code *)PTR_apmib_get_0042354c)(0xad,&local_360);
  iVar1 = (*(code *)PTR_isFileExist_004233d8)("/var/system/br_iface");
  if (iVar1 == 0) {
    iVar1 = (*(code *)PTR_setInAddr_004234e0)(&DAT_00410768,0,0,0,1);
    if (iVar1 == 0) {
      local_384 = 0;
      (*(code *)PTR_strcpy_004235e0)(local_168,param_1);
      iVar1 = (*(code *)PTR_strtok_r_004235c8)(local_168," ",&local_384);
      while (iVar1 != 0) {
        (*(code *)PTR_RunSystemCmd_00423428)(0,"ifconfig",iVar1,&DAT_00411bdc,"");
        iVar3 = (*(code *)PTR_memcmp_004234c4)(iVar1,&DAT_00410768,3);
        if (iVar3 != 0) {
          (*(code *)PTR_RunSystemCmd_00423428)(0,"brctl","delif",&DAT_00410768,iVar1,"");
        }
        iVar1 = (*(code *)PTR_strtok_r_004235c8)(0," ",&local_384);
      }
    }
  }
  else {
    (*(code *)PTR_memset_00423490)(local_168,0,300);
    iVar1 = (*(code *)PTR_fopen_00423498)("/var/system/br_iface",&DAT_00411fe4);
    if (iVar1 != 0) {
      (*(code *)PTR_fgets_00423588)(local_168,300,iVar1);
      uVar7 = 0;
      pcVar9 = local_168;
      while (uVar2 = (*(code *)PTR_strlen_004233e8)(local_168), uVar7 < uVar2) {
        uVar7 = uVar7 + 1;
        if (*pcVar9 == '\n') {
          *pcVar9 = '\0';
        }
        pcVar9 = pcVar9 + 1;
      }
      local_168[uVar2] = '\0';
      iVar3 = (*(code *)PTR_strtok_r_004235c8)(local_168,&DAT_00411f74,&local_384);
      if (iVar3 != 0) {
        do {
          puVar6 = &DAT_00410768;
          if (local_350 == 2) {
            iVar4 = (*(code *)PTR_strcmp_00423464)(iVar3,&DAT_00411f78);
            if ((iVar4 == 0) ||
               (iVar4 = (*(code *)PTR_strcmp_00423464)(iVar3,&DAT_00411f84), iVar4 == 0)) {
              puVar6 = &DAT_00411f90;
            }
            else {
              iVar4 = (*(code *)PTR_strcmp_00423464)(iVar3,"wlan0");
              if (iVar4 == 0) {
                (*(code *)PTR_RunSystemCmd_00423428)(0,"ifconfig",iVar3,&DAT_00411bdc,"");
              }
              else {
                iVar4 = (*(code *)PTR_strcmp_00423464)(iVar3,"wlan0-va1");
                if (iVar4 != 0) goto LAB_0040bdf8;
              }
            }
LAB_0040bde8:
            (*(code *)PTR_RunSystemCmd_00423428)(0,"brctl","delif",puVar6,iVar3,"");
          }
          else {
            (*(code *)PTR_RunSystemCmd_00423428)(0,"ifconfig",iVar3,&DAT_00411bdc,"");
            iVar4 = (*(code *)PTR_memcmp_004234c4)(iVar3,&DAT_00410768,3);
            if (iVar4 != 0) goto LAB_0040bde8;
          }
LAB_0040bdf8:
          iVar3 = (*(code *)PTR_strtok_r_004235c8)(0,&DAT_00411f74,&local_384);
        } while (iVar3 != 0);
      }
      (*(code *)PTR_fclose_00423480)(iVar1);
    }
  }
  iVar1 = (*(code *)PTR_isFileExist_004233d8)("/bin/pathsel");
  if (iVar1 != 0) {
    (*(code *)PTR_SetWlan_idx_00423580)("wlan0");
    (*(code *)PTR_apmib_get_0042354c)(0x3b,&local_378);
    (*(code *)PTR_apmib_get_0042354c)(0x284,&local_368);
    if (1 < local_378 - 4U) {
      local_368 = 0;
    }
    (*(code *)PTR_RunSystemCmd_00423428)(0,"ifconfig","wlan-msh",&DAT_00411bdc,"");
    (*(code *)PTR_RunSystemCmd_00423428)(0,"brctl","delif",&DAT_00410768,"wlan-msh","");
  }
  iVar1 = (*(code *)PTR_setInAddr_004234e0)(&DAT_00410768,0,0,0,1);
  if (iVar1 == 0) {
    (*(code *)PTR_RunSystemCmd_00423428)(0,"brctl","delif",&DAT_00410768,&DAT_00411fbc,"");
    (*(code *)PTR_RunSystemCmd_00423428)(0,"brctl","delif",&DAT_00410768,"wlan0","");
  }
  iVar1 = (*(code *)PTR_isFileExist_004233d8)("/tmp/bridge_init");
  if (iVar1 == 0) {
    (*(code *)PTR_RunSystemCmd_00423428)(0,"brctl","delbr",&DAT_00410768,"");
    (*(code *)PTR_RunSystemCmd_00423428)(0,"brctl",&DAT_00411fe0,&DAT_00410768,"");
  }
  if (local_350 == 2) {
    (*(code *)PTR_RunSystemCmd_00423428)(0,"brctl","delbr",&DAT_00411f90,"");
    (*(code *)PTR_RunSystemCmd_00423428)(0,"brctl",&DAT_00411fe0,&DAT_00411f90,"");
  }
  (*(code *)PTR_apmib_get_0042354c)(0xb3,&local_364);
  if (local_364 == 1) {
    (*(code *)PTR_RunSystemCmd_00423428)(0,"brctl","setfd",&DAT_00410768,&DAT_0041183c,"");
    pcVar9 = "1";
  }
  else {
    (*(code *)PTR_RunSystemCmd_00423428)(0,"brctl","setfd",&DAT_00410768,&DAT_00411f80,"");
    pcVar9 = "0";
  }
  (*(code *)PTR_RunSystemCmd_00423428)(0,"brctl",&DAT_00411ff0,&DAT_00410768,pcVar9,"");
  (*(code *)PTR_apmib_get_0042354c)(0x268,&local_37c);
  if (local_37c == 1) {
    pcVar9 = "1";
  }
  else {
    pcVar9 = "0";
  }
  (*(code *)PTR_RunSystemCmd_00423428)("/proc/rtk_vlan_support",&DAT_00411830,pcVar9,"");
  (*(code *)PTR_apmib_get_0042354c)(0x269,&local_354);
  for (iVar1 = 1; iVar1 <= local_354; iVar1 = iVar1 + 1) {
    local_30c = (undefined1)iVar1;
    (*(code *)PTR_apmib_get_0042354c)(0x826a,&local_30c);
    (*(code *)PTR_sprintf_0042344c)(&local_230,"/proc/%s/mib_vlan",auStack_30b);
    iVar3 = (*(code *)PTR_isFileExist_004233d8)(&local_230);
    if (iVar3 != 0) {
      iVar3 = (*(code *)PTR_strncmp_004234e4)(auStack_30b,&DAT_00411fbc,4);
      if (iVar3 == 0) {
        uVar5 = 1;
        if (1 < local_388 - 1U) {
LAB_0040c43c:
          uVar5 = 0;
        }
      }
      else {
        (*(code *)PTR_sprintf_0042344c)(&local_32c,&DAT_004117f0,local_374);
        (*(code *)PTR_getWispRptIfaceName_004235bc)(&local_32c,local_374);
        uVar5 = (*(code *)PTR_strlen_004233e8)(auStack_30b);
        iVar3 = (*(code *)PTR_strncmp_004234e4)(&local_32c,auStack_30b,uVar5);
        uVar5 = 1;
        if (((iVar3 == 0) && (local_388 == 2)) && (local_374 < 2)) goto LAB_0040c43c;
      }
      pcVar9 = "echo \"1 %d %d %d %d %d %d\" > %s";
      if (local_37c != 1) {
        pcVar9 = "echo \"0 %d %d %d %d %d %d\" > %s";
      }
      (*(code *)PTR_sprintf_0042344c)
                (auStack_294,pcVar9,uVar5,local_30c,local_2fb,local_2f8 >> 0x10,local_2fa,local_2f9,
                 &local_230);
      (*(code *)PTR_system_00423558)(auStack_294);
    }
  }
  iVar1 = (*(code *)PTR_isFileExist_004233d8)("/var/system/br_iface");
  if (iVar1 != 0) {
    (*(code *)PTR_unlink_004234d8)("/var/system/br_iface");
  }
  (*(code *)PTR_memset_00423490)(local_168,0,300);
  local_384 = 0;
  (*(code *)PTR_strcpy_004235e0)(&local_230,param_1);
  iVar1 = (*(code *)PTR_strtok_r_004235c8)(&local_230," ",&local_384);
  if (iVar1 != 0) {
    local_34 = &local_384;
    do {
      (*(code *)PTR_strcpy_004235e0)(&uStack_34c,iVar1);
      iVar1 = (*(code *)PTR_strncmp_004234e4)(&uStack_34c,&DAT_00412060,3);
      if (iVar1 == 0) {
        local_380 = 1;
        if ((local_37c == 0) && ((byte)((char)uStack_34c - 0x32U) < 3)) {
          local_380 = 0;
        }
        if (local_380 == 1) {
          (*(code *)PTR_RunSystemCmd_00423428)(0,"brctl","addif",&DAT_00410768,&uStack_34c,"");
          (*(code *)PTR_RunSystemCmd_00423428)(0,"ifconfig",&uStack_34c,"0.0.0.0","");
          pcVar8 = (code *)PTR_strcpy_004235e0;
          if (local_168[0] != '\0') {
            pcVar8 = (code *)PTR_strcat_00423508;
          }
          (*pcVar8)(local_168,&uStack_34c);
          (*(code *)PTR_strcat_00423508)(local_168,&DAT_00411f74);
        }
      }
      iVar1 = (*(code *)PTR_strtok_r_004235c8)(0," ",local_34);
    } while (iVar1 != 0);
  }
  local_384 = 0;
  (*(code *)PTR_strcpy_004235e0)(&local_230,param_1);
  iVar1 = (*(code *)PTR_strtok_r_004235c8)(&local_230," ",&local_384);
  if (iVar1 != 0) {
    local_38 = 0;
    do {
      (*(code *)PTR_strcpy_004235e0)(&uStack_34c,iVar1);
      iVar1 = (*(code *)PTR_strncmp_004234e4)(&uStack_34c,&DAT_00411bb0,4);
      if (iVar1 == 0) {
        uVar7 = (*(code *)PTR_strlen_004233e8)(&uStack_34c);
        if (((uVar7 < 9) || (local_347 != '-')) || ((local_346 != 'v' || (local_345 != 'a')))) {
          iVar1 = (*(code *)PTR_strstr_004234f8)(&uStack_34c,&DAT_00412064);
          if (iVar1 == 0) {
LAB_0040c8b8:
            iVar1 = (*(code *)PTR_SetWlan_idx_00423580)(&uStack_34c);
            if ((iVar1 != 0) && ((*(code *)PTR_apmib_get_0042354c)(0x16,&local_380), local_380 == 0)
               ) {
LAB_0040c8ec:
              (*(code *)PTR_sprintf_0042344c)(PTR_wlan_wan_iface_004235d8,&DAT_004117f0,local_374);
              (*(code *)PTR_getWispRptIfaceName_004235bc)(PTR_wlan_wan_iface_004235d8,local_374);
              uVar7 = (*(code *)PTR_strlen_004233e8)(&uStack_34c);
              if ((((uVar7 < 9) || (local_347 != '-')) || (local_346 != 'v')) || (local_345 != 'a'))
              {
                if (((local_38 != 0) || (local_388 != 2)) ||
                   (local_30 = &uStack_34c,
                   iVar1 = (*(code *)PTR_strcmp_00423464)(PTR_wlan_wan_iface_004235d8,&uStack_34c),
                   iVar1 != 0)) goto LAB_0040c9c0;
                (*(code *)PTR_RunSystemCmd_00423428)(0,"ifconfig",local_30,&DAT_00411ca8,"");
              }
              else {
                local_38 = 1;
LAB_0040c9c0:
                if (local_350 == 2) {
                  iVar1 = (*(code *)PTR_strcmp_00423464)(&uStack_34c,&DAT_00411f78);
                  if ((iVar1 != 0) &&
                     (iVar1 = (*(code *)PTR_strcmp_00423464)(&uStack_34c,&DAT_00411f84), iVar1 != 0)
                     ) goto LAB_0040ca34;
                  puVar6 = &DAT_00411f90;
                }
                else {
LAB_0040ca34:
                  puVar6 = &DAT_00410768;
                }
                (*(code *)PTR_RunSystemCmd_00423428)(0,"brctl","addif",puVar6,&uStack_34c,"");
                (*(code *)PTR_RunSystemCmd_00423428)(0,"ifconfig",&uStack_34c,"0.0.0.0","");
                pcVar8 = (code *)PTR_strcpy_004235e0;
                if (local_168[0] != '\0') {
                  pcVar8 = (code *)PTR_strcat_00423508;
                }
                (*pcVar8)(local_168,&uStack_34c);
                (*(code *)PTR_strcat_00423508)(local_168,&DAT_00411f74);
              }
              iVar1 = (*(code *)PTR_SetWlan_idx_00423580)(&uStack_34c);
              if (iVar1 != 0) {
                (*(code *)PTR_apmib_get_0042354c)(0x3f,&local_370);
                (*(code *)PTR_apmib_get_0042354c)(0x40,&local_36c);
                (*(code *)PTR_apmib_get_0042354c)(0x3b,&local_378);
                if (((local_370 != 0) && (local_36c != 0)) && (local_378 - 2U < 2)) {
                  local_34 = &uStack_34c;
                  for (iVar1 = 0; iVar1 < local_36c; iVar1 = iVar1 + 1) {
                    (*(code *)PTR_sprintf_0042344c)(auStack_33c,"%s-wds%d",local_34,iVar1);
                    (*(code *)PTR_RunSystemCmd_00423428)
                              (0,"brctl","addif",&DAT_00410768,auStack_33c,"");
                    (*(code *)PTR_RunSystemCmd_00423428)(0,"ifconfig",auStack_33c,"0.0.0.0","");
                    pcVar8 = (code *)PTR_strcpy_004235e0;
                    if (local_168[0] != '\0') {
                      pcVar8 = (code *)PTR_strcat_00423508;
                    }
                    (*pcVar8)(local_168,auStack_33c);
                    (*(code *)PTR_strcat_00423508)(local_168,&DAT_00411f74);
                  }
                }
              }
            }
          }
          else if (local_368 != 0) goto LAB_0040c8ec;
        }
        else {
          local_31c = 0;
          local_318 = 0;
          local_314 = 0;
          local_310 = 0;
          (*(code *)PTR_strncpy_004234dc)(&local_31c,&uStack_34c,5);
          iVar1 = (*(code *)PTR_SetWlan_idx_00423580)(&local_31c);
          if (iVar1 != 0) {
            (*(code *)PTR_apmib_get_0042354c)(0x16,&local_380);
            (*(code *)PTR_apmib_get_0042354c)(0x3b,&local_378);
            if ((local_380 == 0) && ((local_378 == 0 || (local_378 == 3)))) goto LAB_0040c8b8;
          }
        }
      }
      iVar1 = (*(code *)PTR_strtok_r_004235c8)(0," ",&local_384);
    } while (iVar1 != 0);
  }
  (*(code *)PTR_RunSystemCmd_00423428)("/var/system/br_iface",&DAT_00411830,local_168,"");
  if (local_364 == 0) {
    (*(code *)PTR_apmib_get_0042354c)(0xc9,&local_230);
    (*(code *)PTR_sprintf_0042344c)
              (auStack_294,"%02x%02x%02x%02x%02x%02x",local_230._0_1_,local_230._1_1_,
               local_230 >> 8 & 0xff,local_230 & 0xff,local_22c,local_22b);
    (*(code *)PTR_RunSystemCmd_00423428)
              (0,"ifconfig",&DAT_00410768,&DAT_00412090,"ether",auStack_294,"");
  }
  iVar1 = (*(code *)PTR_isFileExist_004233d8)("/tmp/bridge_init");
  if (iVar1 == 0) {
    (*(code *)PTR_RunSystemCmd_00423428)(0,"ifconfig",&DAT_00410768,"0.0.0.0","");
    (*(code *)PTR_RunSystemCmd_00423428)("/tmp/bridge_init",&DAT_00411830,"1","");
  }
  if ((local_360 == 0) || (local_360 == 2)) {
    (*(code *)PTR_apmib_get_0042354c)(0xaa,&local_230);
    uVar5 = (*(code *)PTR_inet_ntoa_00423478)(local_230);
    (*(code *)PTR_strcpy_004235e0)(auStack_2f4,uVar5);
    (*(code *)PTR_apmib_get_0042354c)(0xab,&local_230);
    uVar5 = (*(code *)PTR_inet_ntoa_00423478)(local_230);
    (*(code *)PTR_strcpy_004235e0)(auStack_2d4,uVar5);
    (*(code *)PTR_apmib_get_0042354c)(0xac,&local_230);
    uVar5 = (*(code *)PTR_inet_ntoa_00423478)(local_230);
    (*(code *)PTR_strcpy_004235e0)(auStack_2b4,uVar5);
    (*(code *)PTR_RunSystemCmd_00423428)
              (0,"ifconfig",&DAT_00410768,auStack_2f4,"netmask",auStack_2d4,"");
    (*(code *)PTR_apmib_get_0042354c)(0xaa,&local_35c);
    (*(code *)PTR_apmib_get_0042354c)(0xab,&local_358);
    local_35c = local_35c & local_358;
    uVar5 = (*(code *)PTR_inet_ntoa_00423478)(local_35c);
    (*(code *)PTR_strcpy_004235e0)(auStack_2f4,uVar5);
    (*(code *)PTR_RunSystemCmd_00423428)
              (0,"route",&DAT_0041209c,&DAT_00411f04,auStack_2f4,"netmask",auStack_2d4,"");
    (*(code *)PTR_RunSystemCmd_00423428)
              (0,"route",&DAT_00411f00,&DAT_00411f04,auStack_2f4,"netmask",auStack_2d4,&DAT_00411f18
               ,&DAT_00410768,"");
    iVar1 = (*(code *)PTR_strcmp_00423464)(auStack_2b4,"0.0.0.0");
    if (iVar1 != 0) {
      (*(code *)PTR_RunSystemCmd_00423428)
                (0,"route",&DAT_0041209c,"default",&DAT_00411f18,&DAT_00410768,"");
      (*(code *)PTR_RunSystemCmd_00423428)
                (0,"route",&DAT_00411f00,&DAT_00411f04,"default",&DAT_00411f14,auStack_2b4,
                 &DAT_00411f18,&DAT_00410768,"");
    }
  }
  else if (local_360 == 1) {
    (*(code *)PTR_puts_00423564)("wait for bridge initialization...");
    local_380 = 10;
    do {
      local_380 = local_380 + -1;
      (*(code *)PTR_sleep_00423550)(1);
    } while (local_380 != 0);
    (*(code *)PTR_set_lan_dhcpc_00423454)(&DAT_00410768);
  }
  if (local_350 == 2) {
    (*(code *)PTR_RunSystemCmd_00423428)(0,"ifconfig",&DAT_00411f90,&DAT_00411ca8,"");
  }
  return 0;
}

