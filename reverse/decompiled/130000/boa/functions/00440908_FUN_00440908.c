/* FUN_00440908 @ 00440908 */

/* WARNING: Type propagation algorithm not settling */

void FUN_00440908(undefined4 param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  char *pcVar5;
  char *pcVar6;
  int iVar7;
  int iVar8;
  byte *pbVar9;
  uint uVar10;
  undefined4 uVar11;
  undefined1 *puVar12;
  undefined4 uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  uint unaff_s6;
  char local_228 [4];
  int local_224;
  undefined4 local_220;
  int local_21c [2];
  undefined1 auStack_214 [4];
  int local_210;
  int local_20c;
  undefined4 local_208;
  uint local_204;
  uint local_200;
  uint local_1fc;
  undefined1 auStack_1f8 [20];
  undefined1 auStack_1e4 [32];
  undefined1 auStack_1c4 [36];
  char local_1a0 [44];
  undefined1 auStack_174 [52];
  undefined1 auStack_140 [256];
  undefined4 *local_40;
  undefined1 *local_3c;
  int local_38;
  int local_34;
  int local_30;
  char *local_2c;
  
  (*(code *)PTR_memset_0046a87c)(auStack_140,0,0x100);
  pcVar5 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)(param_1,"submit-url",&DAT_0044b32c);
  pcVar6 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)(param_1,"refresh",&DAT_0044b32c);
  if (*pcVar6 != '\0') {
    iVar15 = 0;
    while( true ) {
      pcVar6 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)(param_1,"ifname",&DAT_0044b32c);
      if (*pcVar6 != '\0') {
        (*(code *)PTR_strcpy_0046ac60)(PTR_WLAN_IF_0046a890,pcVar6);
      }
      iVar7 = (*(code *)PTR_getWlSiteSurveyRequest_0046abd4)(PTR_WLAN_IF_0046a890,&local_224);
      if (iVar7 == -2) {
        (*(code *)PTR_puts_0046ab3c)(&DAT_00456134);
        pcVar5 = "Auto scan running!!please wait...";
        goto LAB_00440a7c;
      }
      if (iVar7 == -1) {
        (*(code *)PTR_puts_0046ab3c)(&DAT_00456134);
        pcVar5 = "Site-survey request failed!";
        goto LAB_00440a7c;
      }
      if (local_224 == 0) {
        iVar15 = 0;
        goto LAB_00440adc;
      }
      if (iVar15 == 6) break;
      iVar15 = iVar15 + 1;
      (*(code *)PTR_sleep_0046ab0c)(1);
    }
    pcVar5 = "scan request timeout!";
LAB_00440a7c:
    (*(code *)PTR_strcpy_0046ac60)(auStack_140,pcVar5);
    bVar1 = false;
    goto LAB_00441804;
  }
  pcVar6 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)(param_1,"connect",&DAT_0044b32c);
  puVar4 = PTR_wlan_idx_0046a93c;
  if (*pcVar6 == '\0') {
    return;
  }
  uVar11 = 0x844;
  if (*(int *)PTR_wlan_idx_0046a93c == 0) {
    uVar11 = 0x834;
  }
  local_210 = 0;
  local_20c = 0;
  local_21c[1] = 0;
  (*(code *)PTR_apmib_get_0046aadc)(uVar11,auStack_214);
  (*(code *)PTR_apmib_set_0046aa28)(uVar11,local_21c + 1);
  uVar11 = 0xfa;
  if (*(int *)puVar4 != 0) {
    uVar11 = 0xfc;
  }
  bVar1 = false;
  (*(code *)PTR_apmib_get_0046aadc)(uVar11,&local_210);
  local_208 = 0;
  (*(code *)PTR_apmib_get_0046aadc)(0x3b,&local_20c);
  (*(code *)PTR_apmib_get_0046aadc)(0xc0,&local_208);
  if (local_210 == 1) {
    if (((local_20c == 0) || (local_20c == 3)) || (local_20c == 4)) {
      bVar1 = true;
    }
    else {
      bVar1 = local_20c == 5;
    }
  }
  uVar11 = (*(code *)PTR_req_get_cstream_var_0046a674)(param_1,"wlanif",&DAT_0044b32c);
  if (bVar1) {
    local_3c = auStack_1e4;
    (*(code *)PTR_strcpy_0046ac60)(local_3c,uVar11);
    (*(code *)PTR_sprintf_0046a808)(uVar11,"%s-vxd",local_3c);
  }
  iVar16 = 0;
  (*(code *)PTR_SetWlan_idx_0046ab70)(uVar11);
  local_40 = (undefined4 *)
             (*(code *)PTR_req_get_cstream_var_0046a674)(param_1,"pocketAP_ssid",&DAT_0044b32c);
  puVar12 = inner_req + 0x54c;
  pcVar6 = "%02x:%02x:%02x:%02x:%02x:%02x";
  iVar15 = 0xac;
  iVar7 = 0x56;
  iVar14 = 0x2b;
  do {
    pbVar9 = *(byte **)(puVar12 + -0xc90);
    if (((int)(uint)*pbVar9 <= iVar16) || (iVar3 = iVar16 * iVar15, *pbVar9 == 0xff))
    goto LAB_00440e68;
    iVar8 = iVar16 * iVar7;
    iVar2 = iVar16 * iVar14;
    iVar16 = iVar16 + 1;
    local_3c = puVar12;
    local_38 = iVar15;
    local_34 = iVar7;
    local_30 = iVar14;
    local_2c = pcVar6;
    (*(code *)PTR_snprintf_0046abe4)
              (auStack_140,200,pcVar6,pbVar9[iVar3 + 4],pbVar9[iVar3 + 5],
               pbVar9[(iVar8 + 1) * 2 + 4],pbVar9[iVar3 + 7],pbVar9[(iVar2 + 1) * 4 + 4],
               pbVar9[iVar3 + 9]);
    iVar8 = (*(code *)PTR_strcmp_0046a824)(local_40,auStack_140);
    puVar12 = local_3c;
    pcVar6 = local_2c;
    iVar15 = local_38;
    iVar7 = local_34;
    iVar14 = local_30;
  } while (iVar8 != 0);
  (*(code *)PTR_memcpy_0046ab5c)
            (auStack_1c4,pbVar9 + iVar3 + 10,*(undefined2 *)(pbVar9 + iVar3 + 0x30));
  auStack_1c4[*(ushort *)(pbVar9 + iVar3 + 0x30)] = 0;
LAB_00440e68:
  (*(code *)PTR_apmib_set_0046aa28)(1,auStack_1c4);
  if (bVar1) {
    if (*(int *)PTR_wlan_idx_0046a93c == 0) {
      uVar13 = 0xfb;
    }
    else {
      uVar13 = 0xfd;
    }
    (*(code *)PTR_apmib_set_0046aa28)(uVar13,auStack_1c4);
  }
  (*(code *)PTR_apmib_update_0046aa2c)(4);
  pcVar6 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)(param_1,"select",&DAT_0044b32c);
  if (*pcVar6 == '\0') goto LAB_004417b8;
  if (DAT_0046f370 == (byte *)0x0) {
    pcVar5 = "Please refresh again!";
  }
  else {
    (*(code *)PTR_sscanf_0046a8c4)(pcVar6,"sel%d",&local_220);
    if (local_220 < (int)(uint)*DAT_0046f370) {
      uVar13 = (*(code *)PTR_req_get_cstream_var_0046a674)(param_1,"wlanif",&DAT_0044b32c);
      pcVar6 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)(param_1,"wlan_idx",&DAT_0044b32c)
      ;
      if (*pcVar6 != '\0') {
        uVar10 = (*(code *)PTR_atoi_0046a73c)(pcVar6);
        unaff_s6 = uVar10 & 0xff;
      }
      (*(code *)PTR_sprintf_0046a808)(auStack_1f8,"method%d",unaff_s6);
      pcVar6 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)
                                 (param_1,auStack_1f8,&DAT_0044b32c);
      if (*pcVar6 != '\0') {
        iVar15 = (*(code *)PTR_atoi_0046a73c)(pcVar6);
        if (iVar15 == 0) {
          local_1fc = 0;
          (*(code *)PTR_apmib_set_0046aa28)(0x19,&local_1fc);
        }
        else {
          if (iVar15 == 1) {
            iVar15 = wepHandler(param_1,auStack_140);
          }
          else {
            if (4 < iVar15 - 2U) goto LAB_0044107c;
            iVar15 = wpaHandler(param_1,auStack_140,unaff_s6);
          }
          if (iVar15 < 0) goto LAB_00441804;
        }
      }
LAB_0044107c:
      local_204 = (uint)((*(ushort *)(DAT_0046f370 + local_220 * 0xac + 0x6e) & 1) == 0);
      iVar15 = (*(code *)PTR_apmib_set_0046aa28)(0x3c,&local_204);
      if (iVar15 == 0) {
        pcVar5 = "Set MIB_WLAN_NETWORK_TYPE failed!";
      }
      else {
        if (local_204 == 1) {
          local_200 = (uint)DAT_0046f370[local_220 * 0xac + 0x70];
          iVar15 = (*(code *)PTR_apmib_set_0046aa28)(2,&local_200);
          if (iVar15 == 0) {
            pcVar5 = "Set channel number error!";
            goto LAB_00441538;
          }
          if ((*(uint *)(DAT_0046f370 + local_220 * 0xac + 0x68) & 0x40) == 0) {
            local_1fc = (uint)((*(uint *)(DAT_0046f370 + local_220 * 0xac + 0x68) & 2) != 0);
          }
          else {
            local_1fc = 2;
          }
          (*(code *)PTR_apmib_set_0046aa28)(0x11c,&local_1fc);
        }
        else if (bVar1) {
          (*(code *)PTR_SetWlan_idx_0046ab70)(uVar13);
          local_200 = (uint)DAT_0046f370[local_220 * 0xac + 0x70];
          iVar15 = (*(code *)PTR_apmib_set_0046aa28)(2,&local_200);
          if (iVar15 == 0) {
            (*(code *)PTR_strcpy_0046ac60)(auStack_140,"Set channel number error!");
            bVar1 = true;
            goto LAB_00441804;
          }
          local_1fc = (uint)((*(uint *)(DAT_0046f370 + local_220 * 0xac + 0x68) & 4) == 0);
          (*(code *)PTR_apmib_set_0046aa28)(0x11d,&local_1fc);
          if ((int)local_200 < 5) {
            if (local_1fc == 0) {
LAB_0044127c:
              local_1fc = local_1fc + 1 & 1;
              (*(code *)PTR_apmib_set_0046aa28)(0x11d,&local_1fc);
            }
          }
          else if ((9 < (int)local_200) && (local_1fc == 1)) goto LAB_0044127c;
          (*(code *)PTR_SetWlan_idx_0046ab70)(uVar11);
        }
        FUN_0043c750();
        if (bVar1) {
          (*(code *)PTR_sprintf_0046a808)(auStack_174,"ifconfig %s-vxd down",uVar13);
          (*(code *)PTR_system_0046ab18)(auStack_174);
        }
        (*(code *)PTR_sprintf_0046a808)(auStack_174,"ifconfig %s down",uVar13);
        (*(code *)PTR_system_0046ab18)(auStack_174);
        (*(code *)PTR_sprintf_0046a808)(auStack_174,"flash set_mib %s",uVar13);
        (*(code *)PTR_system_0046ab18)(auStack_174);
        (*(code *)PTR_sprintf_0046a808)(auStack_174,"ifconfig %s up",uVar13);
        (*(code *)PTR_system_0046ab18)(auStack_174);
        if (bVar1) {
          (*(code *)PTR_sprintf_0046a808)(auStack_174,"flash set_mib %s-vxd",uVar13);
          (*(code *)PTR_system_0046ab18)(auStack_174);
          (*(code *)PTR_sprintf_0046a808)(auStack_174,"ifconfig %s-vxd up",uVar13);
          (*(code *)PTR_system_0046ab18)(auStack_174);
        }
        (*(code *)PTR_sleep_0046ab0c)(3);
        iVar15 = 0;
        (*(code *)PTR_system_0046ab18)("sysconf wlanapp start wlan0 br0");
        local_40 = &local_208;
        (*(code *)PTR_sleep_0046ab0c)(1);
        (*(code *)PTR_system_0046ab18)("sysconf upnpd 1 1");
        (*(code *)PTR_sleep_0046ab0c)(1);
        local_208 = CONCAT13((undefined1)local_220,local_208._1_3_);
        while( true ) {
          if ((bVar1) &&
             (iVar7 = (*(code *)PTR_strstr_0046a940)(PTR_WLAN_IF_0046a890,"-vxd"), iVar7 == 0)) {
            (*(code *)PTR_strcat_0046a9c8)(PTR_WLAN_IF_0046a890,"-vxd");
          }
          iVar7 = (*(code *)PTR_getWlJoinResult_0046aa0c)(PTR_WLAN_IF_0046a890,local_40);
          if (iVar7 < 0) {
            pcVar5 = "Get Join result failed!";
            goto LAB_00441538;
          }
          if (((local_208._0_1_ == '\x02') || (local_208._0_1_ == '\x04')) ||
             (local_208._0_1_ == '\x03')) {
            local_224 = 0;
            (*(code *)PTR_apmib_get_0046aadc)(0x19,local_21c);
            if (((local_21c[0] != 2) && (local_21c[0] != 4)) && (local_21c[0] != 7))
            goto LAB_00441610;
            iVar15 = 1;
            goto LAB_004415f8;
          }
          if (iVar15 == 0xb) break;
          iVar15 = iVar15 + 1;
          (*(code *)PTR_sleep_0046ab0c)(1);
        }
        pcVar5 = "connect timeout!";
      }
    }
    else {
      pcVar5 = "Connect failed 1!";
    }
  }
LAB_00441538:
  (*(code *)PTR_strcpy_0046ac60)(auStack_140,pcVar5);
LAB_00441804:
  uVar11 = 0x844;
  if (*(int *)PTR_wlan_idx_0046a93c == 0) {
    uVar11 = 0x834;
  }
  (*(code *)PTR_apmib_set_0046aa28)(uVar11,auStack_214);
  FUN_0043c750();
  if (bVar1) {
    (*(code *)PTR_SetWlan_idx_0046ab70)(auStack_1e4);
    puVar12 = (undefined1 *)(*(code *)PTR_strstr_0046a940)(PTR_WLAN_IF_0046a890,"-vxd");
    if (puVar12 != (undefined1 *)0x0) {
      puVar12[3] = 0;
      *puVar12 = 0;
      puVar12[1] = 0;
      puVar12[2] = 0;
    }
  }
  FUN_004340e4(param_1);
  (*(code *)PTR_req_format_write_0046a95c)
            (param_1,"<html><body><blockquote><h4>%s</h4>\n",auStack_140);
  (*(code *)PTR_req_format_write_0046a95c)
            (param_1,
             "<form><input type=\"button\" onclick=\"history.go (-1)\" value=\"&nbsp;&nbsp;OK&nbsp;&nbsp\" name=\"OK\"></form></blockquote></body></html>"
            );
  return;
LAB_004415f8:
  if (iVar15 == 0x10) goto code_r0x00441608;
  (*(code *)PTR_getWlBssInfo_0046a754)(PTR_WLAN_IF_0046a890,local_1a0);
  if (local_1a0[0] == '\x04') {
    if (0xf < iVar15) {
      local_224 = 1;
    }
    goto LAB_00441610;
  }
  iVar15 = iVar15 + 1;
  (*(code *)PTR_sleep_0046ab0c)(1);
  goto LAB_004415f8;
LAB_00440adc:
  local_228[0] = '\x01';
  iVar7 = (*(code *)PTR_getWlSiteSurveyResult_0046a928)(PTR_WLAN_IF_0046a890,local_228);
  if (iVar7 < 0) goto code_r0x00440b04;
  if (local_228[0] != -1) {
    if (*pcVar5 == '\0') {
      return;
    }
    (*(code *)PTR_send_redirect_perm_0046ac78)(param_1,pcVar5);
    return;
  }
  if (iVar15 == 0xb) {
    pcVar5 = "scan timeout!";
    goto LAB_00440b34;
  }
  iVar15 = iVar15 + 1;
  (*(code *)PTR_sleep_0046ab0c)(1);
  goto LAB_00440adc;
code_r0x00440b04:
  pcVar5 = "Read site-survey status failed!";
LAB_00440b34:
  (*(code *)PTR_strcpy_0046ac60)(auStack_140,pcVar5);
  bVar1 = false;
  (*(code *)PTR_free_0046a680)(DAT_0046f370);
  DAT_0046f370 = (byte *)0x0;
  goto LAB_00441804;
code_r0x00441608:
  local_224 = 1;
LAB_00441610:
  if (local_224 == 0) {
    pcVar6 = "Connect successfully!";
  }
  else {
    pcVar6 = "connect timeout!";
  }
  uVar11 = 0x844;
  if (*(int *)PTR_wlan_idx_0046a93c == 0) {
    uVar11 = 0x834;
  }
  (*(code *)PTR_apmib_set_0046aa28)(uVar11,auStack_214);
  FUN_0043c750();
  *(undefined4 *)PTR_needReboot_0046a9b4 = 1;
  if (*pcVar5 == '\0') {
    (*(code *)PTR_strcpy_0046ac60)(pcVar5,"/wizard.htm");
  }
  (*(code *)PTR_req_format_write_0046a95c)(param_1,"<html><body><blockquote><h4>%s</h4>",pcVar6);
  (*(code *)PTR_req_format_write_0046a95c)
            (param_1,
             "<form action=/boafrm/formSiteSurveyProfile method=POST name=\'rebootSiteSurveyProfileForm\'>"
            );
  (*(code *)PTR_req_format_write_0046a95c)
            (param_1,"<input type=\'hidden\' value=\'%s\' name=\'submit-url\'>",pcVar5);
  if (local_224 == 0) {
    (*(code *)PTR_req_format_write_0046a95c)
              (param_1,
               "<td><font size=2><b><input type=\"checkbox\" name=wizardAddProfile%d value=\"ON\">&nbsp;&nbsp;Add to Wireless Profile</b></td><br><br>"
               ,*(undefined4 *)PTR_wlan_idx_0046a93c);
  }
  if (local_224 != 0) {
    (*(code *)PTR_req_format_write_0046a95c)
              (param_1,
               "<input id=\'restartLater\' name=\'restartLater\' type=\'submit\' value=\'  OK  \' onclick=\"return true\" />&nbsp;&nbsp;"
              );
  }
  if (local_224 == 0) {
    (*(code *)PTR_req_format_write_0046a95c)
              (param_1,
               "<input id=\'restartNow\' name=\'restartNow\' type=\'submit\' value=\'Reboot Now\' onclick=\"return true\" />&nbsp;&nbsp;"
              );
  }
  if (local_224 == 0) {
    (*(code *)PTR_req_format_write_0046a95c)
              (param_1,
               "<input id=\'restartLater\' name=\'restartLater\' type=\'submit\' value=\'Reboot Later\' OnClick=window.location.replace(\"%s\");return true>"
               ,pcVar5);
  }
  (*(code *)PTR_req_format_write_0046a95c)(param_1,"</form></blockquote></body></html>");
  (*(code *)PTR_log_boaform_0046a9d8)("formSiteSurveyProfile");
LAB_004417b8:
  if (!bVar1) {
    return;
  }
  (*(code *)PTR_SetWlan_idx_0046ab70)(auStack_1e4);
  puVar12 = (undefined1 *)(*(code *)PTR_strstr_0046a940)(PTR_WLAN_IF_0046a890,"-vxd");
  if (puVar12 == (undefined1 *)0x0) {
    return;
  }
  puVar12[3] = 0;
  *puVar12 = 0;
  puVar12[1] = 0;
  puVar12[2] = 0;
  return;
}

