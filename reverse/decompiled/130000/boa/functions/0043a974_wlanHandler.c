/* wlanHandler @ 0043a974 */

undefined4 wlanHandler(undefined4 param_1,undefined4 param_2,uint *param_3,int param_4)

{
  char cVar1;
  undefined *puVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  uint uVar7;
  undefined4 uVar8;
  char *pcVar9;
  int iVar10;
  undefined4 local_d8;
  uint local_d4;
  uint local_d0;
  uint local_cc;
  int local_c8;
  uint local_c4;
  uint local_c0;
  uint local_bc;
  uint local_b8;
  uint local_b4;
  uint local_b0;
  uint local_ac;
  uint local_a8;
  undefined1 auStack_a4 [20];
  char local_90 [80];
  undefined4 local_40;
  uint *local_3c;
  uint *local_38;
  uint *local_34;
  char *local_30;
  
  local_c8 = 0;
  (*(code *)PTR_sprintf_0046a808)(auStack_a4,"wlanDisabled%d",param_4);
  uVar3 = (*(code *)PTR_req_get_cstream_var_0046a674)(param_1,auStack_a4,&DAT_0044b32c);
  iVar4 = (*(code *)PTR_strcmp_0046a824)(uVar3,"ON");
  local_d4 = (uint)(iVar4 == 0);
  iVar4 = (*(code *)PTR_apmib_set_0046aa28)(0x16,&local_d4);
  if (iVar4 == 0) {
    pcVar9 = "Set disabled flag error!";
    goto LAB_0043ab68;
  }
  if (local_d4 != 0) {
    return 0;
  }
  (*(code *)PTR_memset_0046a87c)(&DAT_0046f374,0,0xd0);
  DAT_0046f374 = 1;
  (*(code *)PTR_apmib_get_0046aadc)(1,&DAT_0046f390);
  (*(code *)PTR_apmib_get_0046aadc)(0x3b,&DAT_0046f378);
  (*(code *)PTR_sprintf_0046a808)(auStack_a4,"regdomain%d",param_4);
  pcVar9 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)(param_1,auStack_a4,&DAT_0044b32c);
  if (*pcVar9 != '\0') {
    (*(code *)PTR_apmib_get_0046aadc)(0xcc,&local_cc);
    uVar5 = (*(code *)PTR_atoi_0046a73c)(pcVar9);
    if (local_cc != uVar5) {
      local_cc = uVar5;
      iVar4 = (*(code *)PTR_apmib_set_0046aa28)(0xcc,&local_cc);
      if (iVar4 == 0) {
        pcVar9 = "Set wlan regdomain error!";
        goto LAB_0043ab68;
      }
      (*(code *)PTR_apmib_update_0046aa2c)(1);
    }
  }
  (*(code *)PTR_sprintf_0046a808)(auStack_a4,"countrystr%d",param_4);
  pcVar9 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)(param_1,auStack_a4,&DAT_0044b32c);
  if ((*pcVar9 != '\0') && (iVar4 = (*(code *)PTR_apmib_set_0046aa28)(0x1c3,pcVar9), iVar4 == 0)) {
    pcVar9 = "Set wlan countrystr error!";
    goto LAB_0043ab68;
  }
  (*(code *)PTR_sprintf_0046a808)(auStack_a4,"tx_restrict%d",param_4);
  pcVar9 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)(param_1,auStack_a4,&DAT_0044b32c);
  if (*pcVar9 != '\0') {
    local_cc = (*(code *)PTR_atoi_0046a73c)(pcVar9);
    iVar4 = (*(code *)PTR_apmib_set_0046aa28)(0x1c4,&local_cc);
    if (iVar4 == 0) {
      pcVar9 = "Set MIB_WLAN_TX_RESTRICT error!";
      goto LAB_0043ab68;
    }
  }
  (*(code *)PTR_sprintf_0046a808)(auStack_a4,"rx_restrict%d",param_4);
  pcVar9 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)(param_1,auStack_a4,&DAT_0044b32c);
  if (*pcVar9 != '\0') {
    local_cc = (*(code *)PTR_atoi_0046a73c)(pcVar9);
    iVar4 = (*(code *)PTR_apmib_set_0046aa28)(0x1c5,&local_cc);
    if (iVar4 == 0) {
      pcVar9 = "Set MIB_WLAN_RX_RESTRICT error!";
      goto LAB_0043ab68;
    }
  }
  (*(code *)PTR_sprintf_0046a808)(auStack_a4,"mode%d",param_4);
  pcVar9 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)(param_1,auStack_a4,&DAT_0044b32c);
  if (*pcVar9 == '\0') {
    (*(code *)PTR_apmib_get_0046aadc)(0x3b,&local_c0);
    pcVar9 = local_90;
    (*(code *)PTR_sprintf_0046a808)(pcVar9,"%d",local_c0);
  }
  uVar5 = (int)*pcVar9 - 0x30;
  if (*pcVar9 != 0) {
    if (3 < (uVar5 & 0xff)) {
      (*(code *)PTR_printf_0046ac28)("%s\n");
      pcVar9 = "Invalid mode value!";
      goto LAB_0043ab68;
    }
    *param_3 = uVar5;
    if (uVar5 == 1) {
      (*(code *)PTR_apmib_get_0046aadc)(0x19,&local_c0);
      if ((local_c0 & 6) == 0) {
        if ((local_c0 < 2) &&
           ((*(code *)PTR_apmib_get_0046aadc)(0x23,&local_c4), (local_c4 & 1) != 0)) {
          pcVar9 = 
          "You cannot set client mode with 802.1x enabled!<br><br>Please change the encryption method in security page first."
          ;
          goto LAB_0043ab68;
        }
      }
      else {
        (*(code *)PTR_apmib_get_0046aadc)(0x1c,&local_c4);
        if ((local_c4 & 1) != 0) {
          pcVar9 = 
          "You cannot set client mode with Enterprise (RADIUS) !<br><br>Please change the encryption method in security page first."
          ;
          goto LAB_0043ab68;
        }
      }
      (*(code *)PTR_sprintf_0046a808)(auStack_a4,"wlanMacClone%d",param_4);
      uVar3 = (*(code *)PTR_req_get_cstream_var_0046a674)(param_1,auStack_a4,&DAT_0044b32c);
      iVar4 = (*(code *)PTR_strcmp_0046a824)(uVar3,"ON");
      local_cc = (uint)(iVar4 == 0);
      iVar4 = (*(code *)PTR_apmib_set_0046aa28)(0x4d,&local_cc);
      if (iVar4 == 0) {
        pcVar9 = "Set wlan Mac clone error!";
        goto LAB_0043ab68;
      }
    }
    iVar4 = (*(code *)PTR_apmib_set_0046aa28)(0x3b,param_3);
    if (iVar4 == 0) {
      pcVar9 = "Set MIB_WLAN_MODE error!";
      goto LAB_0043ab68;
    }
  }
  (*(code *)PTR_sprintf_0046a808)(auStack_a4,"ssid%d",param_4);
  pcVar9 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)(param_1,auStack_a4,&DAT_0044b32c);
  if (((*pcVar9 != '\0') || (*param_3 == 1)) &&
     (iVar4 = (*(code *)PTR_apmib_set_0046aa28)(1,pcVar9), iVar4 == 0)) {
    pcVar9 = "Set SSID error!";
    goto LAB_0043ab68;
  }
  (*(code *)PTR_sprintf_0046a808)(auStack_a4,"chan%d",param_4);
  pcVar9 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)(param_1,auStack_a4,&DAT_0044b32c);
  if (*pcVar9 != '\0') {
    local_30 = pcVar9;
    piVar6 = (int *)(*(code *)PTR___errno_location_0046a764)();
    *piVar6 = 0;
    local_d8 = (*(code *)PTR_strtol_0046aa48)(local_30,0,10);
    if (*piVar6 != 0) {
      pcVar9 = "Invalid channel number!";
      goto LAB_0043ab68;
    }
    iVar4 = (*(code *)PTR_apmib_set_0046aa28)(2,&local_d8);
    if (iVar4 == 0) {
      pcVar9 = "Set channel number error!";
      goto LAB_0043ab68;
    }
  }
  (*(code *)PTR_sprintf_0046a808)(auStack_a4,"type%d",param_4);
  pcVar9 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)(param_1,auStack_a4,&DAT_0044b32c);
  iVar4 = (int)*pcVar9;
  if (iVar4 != 0) {
    if (1 < (iVar4 - 0x30U & 0xff)) {
      pcVar9 = "Invalid network type value!";
      goto LAB_0043ab68;
    }
    local_d0 = (uint)(iVar4 != 0x30);
    iVar4 = (*(code *)PTR_apmib_set_0046aa28)(0x3c,&local_d0);
    if (iVar4 == 0) {
      pcVar9 = "Set MIB_WLAN_NETWORK_TYPE failed!";
      goto LAB_0043ab68;
    }
  }
  (*(code *)PTR_sprintf_0046a808)(auStack_a4,"band%d",param_4);
  pcVar9 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)(param_1,auStack_a4,&DAT_0044b32c);
  if (*pcVar9 != '\0') {
    (*(code *)PTR_apmib_get_0046aadc)(0x294,&local_c4);
    uVar5 = (*(code *)PTR_strtol_0046aa48)(pcVar9,0,10);
    if (0x4e < uVar5) {
      pcVar9 = "Invalid band value!";
      goto LAB_0043ab68;
    }
    if (local_c4 == 0) {
      local_ac = 0;
      (*(code *)PTR_apmib_get_0046aadc)(0x19,&local_ac);
      (*(code *)PTR_apmib_get_0046aadc)(0x1d,&local_c0);
      (*(code *)PTR_apmib_get_0046aadc)(0x26,&local_bc);
      (*(code *)PTR_apmib_get_0046aadc)(0x45,&local_a8);
      if ((*param_3 != 1) &&
         (((((uVar5 == 7 || (uVar5 == 9)) || ((uVar5 == 10 || ((uVar5 == 0xb || (uVar5 == 0x3f))))))
           || (uVar5 == 0x47)) || (uVar5 == 0x4b)))) {
        if ((local_ac == 2) || (local_ac == 4)) {
          local_c0 = local_c0 & 0xfffffffe;
          if (local_c0 == 0) {
            local_c0 = 2;
          }
          local_bc = local_bc & 0xfffffffe;
          if (local_bc == 0) {
            local_bc = 2;
          }
          (*(code *)PTR_apmib_set_0046aa28)(0x26,&local_bc);
          local_b0 = 8;
          (*(code *)PTR_apmib_set_0046aa28)(0x113,&local_b0);
        }
        if (local_a8 == 3) {
          local_a8 = 0;
          (*(code *)PTR_apmib_set_0046aa28)(0x45,&local_a8);
        }
      }
    }
    local_cc = uVar5 + 1;
    iVar4 = (*(code *)PTR_apmib_set_0046aa28)(0x4a,&local_cc);
    iVar10 = 1;
    if (iVar4 == 0) {
      pcVar9 = "Set band error!";
      goto LAB_0043ab68;
    }
    local_40 = *(undefined4 *)PTR_vwlan_idx_0046a9b0;
    local_3c = &local_b8;
    local_34 = &local_b0;
    local_b8 = local_cc;
    local_38 = &local_a8;
    do {
      puVar2 = PTR_apmib_get_0046aadc;
      *(int *)PTR_vwlan_idx_0046a9b0 = iVar10;
      (*(code *)puVar2)(0x16,&local_b4);
      if ((local_b4 == 0) &&
         ((((((*(code *)PTR_apmib_get_0046aadc)(0x4a,&local_b4), (local_b4 & 1) != 0 &&
             ((local_b8 & 1) == 0)) || (((local_b4 & 2) != 0 && ((local_b8 & 2) == 0)))) ||
           ((((local_b4 & 8) != 0 && ((local_b8 & 8) == 0)) ||
            (((local_b4 & 4) != 0 && ((local_b8 & 4) == 0)))))) ||
          (((local_b4 & 0x40) != 0 && ((local_b8 & 0x40) == 0)))))) {
        (*(code *)PTR_apmib_set_0046aa28)(0x4a,local_3c);
        local_b4 = 0;
        (*(code *)PTR_apmib_set_0046aa28)(0x12,&local_b4);
        (*(code *)PTR_apmib_set_0046aa28)(0xf,&local_b4);
        if ((local_b8 & 8) != 0) {
          (*(code *)PTR_apmib_get_0046aadc)(0x19,local_38);
          (*(code *)PTR_apmib_get_0046aadc)(0x1d,local_34);
          (*(code *)PTR_apmib_get_0046aadc)(0x26,&local_ac);
          if (((local_a8 == 2) || (local_a8 == 4)) || (local_a8 == 6)) {
            uVar7 = local_b0 & 0xfffffffe;
            uVar5 = local_ac & 0xfffffffe;
            local_b0 = 2;
            if (uVar7 != 0) {
              local_b0 = uVar7;
            }
            local_ac = 2;
            if (uVar5 != 0) {
              local_ac = uVar5;
            }
            (*(code *)PTR_apmib_set_0046aa28)(0x26,&local_ac);
          }
        }
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 != 5);
    *(undefined4 *)PTR_vwlan_idx_0046a9b0 = local_40;
  }
  (*(code *)PTR_sprintf_0046a808)(auStack_a4,"txRate%d",param_4);
  pcVar9 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)(param_1,auStack_a4,&DAT_0044b32c);
  if (*pcVar9 != '\0') {
    if (*pcVar9 == '0') {
      local_cc = 1;
      iVar4 = (*(code *)PTR_apmib_set_0046aa28)(0x33);
      if (iVar4 != 0) goto LAB_0043b6b4;
    }
    else {
      local_cc = 0;
      iVar4 = (*(code *)PTR_apmib_set_0046aa28)(0x33,&local_cc);
      if (iVar4 != 0) {
        iVar4 = (*(code *)PTR_atoi_0046a73c)(pcVar9);
        if (iVar4 < 0x1e) {
          local_cc = 1 << (iVar4 - 1U & 0x1f);
        }
        else {
          local_cc = iVar4 + 0x7fffffe2;
        }
        iVar4 = (*(code *)PTR_apmib_set_0046aa28)(0x4b,&local_cc);
        if (iVar4 == 0) {
          pcVar9 = "Set fix rate failed!";
          goto LAB_0043ab68;
        }
        goto LAB_0043b6b4;
      }
    }
    pcVar9 = "Set rate adaptive failed!";
    goto LAB_0043ab68;
  }
LAB_0043b6b4:
  (*(code *)PTR_sprintf_0046a808)(auStack_a4,"basicrates%d",param_4);
  pcVar9 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)(param_1,auStack_a4,&DAT_0044b32c);
  if (*pcVar9 != '\0') {
    local_cc = (*(code *)PTR_atoi_0046a73c)(pcVar9);
    iVar4 = (*(code *)PTR_apmib_set_0046aa28)(0x12,&local_cc);
    if (iVar4 != 0) goto LAB_0043b738;
LAB_0043bb0c:
    pcVar9 = "Set Tx basic rate failed!";
LAB_0043ab68:
    (*(code *)PTR_strcpy_0046ac60)(param_2,pcVar9);
    return 0xffffffff;
  }
LAB_0043b738:
  (*(code *)PTR_sprintf_0046a808)(auStack_a4,"operrates%d",param_4);
  pcVar9 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)(param_1,auStack_a4,&DAT_0044b32c);
  if (*pcVar9 != '\0') {
    local_cc = (*(code *)PTR_atoi_0046a73c)(pcVar9);
    iVar4 = (*(code *)PTR_apmib_set_0046aa28)(0xf,&local_cc);
    if (iVar4 != 0) goto LAB_0043b7bc;
LAB_0043bb98:
    pcVar9 = "Set Tx operation rate failed!";
    goto LAB_0043ab68;
  }
LAB_0043b7bc:
  (*(code *)PTR_sprintf_0046a808)(auStack_a4,"hiddenSSID%d",param_4);
  pcVar9 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)(param_1,auStack_a4,&DAT_0044b32c);
  cVar1 = *pcVar9;
  if (cVar1 != '\0') {
    if (cVar1 == '0') {
      local_cc = 0;
LAB_0043b824:
      iVar4 = (*(code *)PTR_apmib_set_0046aa28)(0x15,&local_cc);
      if (iVar4 == 0) {
        pcVar9 = "Set hidden ssid failed!";
        goto LAB_0043ab68;
      }
      goto LAB_0043b850;
    }
    if (cVar1 == '1') {
      local_cc = 1;
      goto LAB_0043b824;
    }
LAB_0043b9ac:
    pcVar9 = "Error! Invalid Channel Bonding.";
    goto LAB_0043ab68;
  }
LAB_0043b850:
  (*(code *)PTR_sprintf_0046a808)(auStack_a4,"wlanwmm%d",param_4);
  pcVar9 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)(param_1,auStack_a4,&DAT_0044b32c);
  cVar1 = *pcVar9;
  if (cVar1 == '\0') {
    (*(code *)PTR_apmib_get_0046aadc)(0x4a,&local_c8);
    if (local_c8 - 10U < 2) {
      local_cc = 1;
      goto LAB_0043b90c;
    }
  }
  else {
    if (cVar1 == '0') {
      local_cc = 0;
    }
    else {
      if (cVar1 != '1') {
        pcVar9 = "Error! Invalid WMM value.";
        goto LAB_0043ab68;
      }
      local_cc = 1;
    }
LAB_0043b90c:
    iVar4 = (*(code *)PTR_apmib_set_0046aa28)(0x59,&local_cc);
    if (iVar4 == 0) {
      pcVar9 = "Set MIB_WLAN_WMM_ENABLED failed!";
      goto LAB_0043ab68;
    }
  }
  (*(code *)PTR_sprintf_0046a808)(auStack_a4,"channelbound%d",param_4);
  pcVar9 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)(param_1,auStack_a4,&DAT_0044b32c);
  cVar1 = *pcVar9;
  if (cVar1 != '\0') {
    if (cVar1 == '0') {
      local_cc = 0;
    }
    else if (cVar1 == '1') {
      local_cc = 1;
    }
    else {
      if (cVar1 != '2') goto LAB_0043b9ac;
      local_cc = 2;
    }
    iVar4 = (*(code *)PTR_apmib_set_0046aa28)(0x11c,&local_cc);
    if (iVar4 == 0) {
      pcVar9 = "Set MIB_WLAN_CHANNEL_BONDING failed!";
      goto LAB_0043ab68;
    }
  }
  (*(code *)PTR_sprintf_0046a808)(auStack_a4,"controlsideband%d",param_4);
  pcVar9 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)(param_1,auStack_a4,&DAT_0044b32c);
  cVar1 = *pcVar9;
  if (cVar1 != '\0') {
    if (cVar1 == '0') {
      local_cc = 0;
    }
    else {
      if (cVar1 != '1') {
        pcVar9 = "Error! Invalid Control SideBand.";
        goto LAB_0043ab68;
      }
      local_cc = 1;
    }
    iVar4 = (*(code *)PTR_apmib_set_0046aa28)(0x11d,&local_cc);
    if (iVar4 == 0) {
      pcVar9 = "Set MIB_WLAN_CONTROL_SIDEBAND failed!";
      goto LAB_0043ab68;
    }
  }
  (*(code *)PTR_sprintf_0046a808)(auStack_a4,"basicrates%d",param_4);
  pcVar9 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)(param_1,auStack_a4,&DAT_0044b32c);
  if (((*pcVar9 != '\0') && (local_cc = (*(code *)PTR_atoi_0046a73c)(pcVar9), local_cc != 0)) &&
     (iVar4 = (*(code *)PTR_apmib_set_0046aa28)(0x12,&local_cc), iVar4 == 0)) goto LAB_0043bb0c;
  (*(code *)PTR_sprintf_0046a808)(auStack_a4,"operrates%d",param_4);
  pcVar9 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)(param_1,auStack_a4,&DAT_0044b32c);
  if (((*pcVar9 != '\0') && (local_cc = (*(code *)PTR_atoi_0046a73c)(pcVar9), local_cc != 0)) &&
     (iVar4 = (*(code *)PTR_apmib_set_0046aa28)(0xf,&local_cc), iVar4 == 0)) goto LAB_0043bb98;
  (*(code *)PTR_sprintf_0046a808)(auStack_a4,"repeaterEnabled%d",param_4);
  pcVar9 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)(param_1,"lan_ip",&DAT_0044b32c);
  if ((pcVar9 != (char *)0x0) && (*pcVar9 != '\0')) {
    if (*param_3 - 1 < 2) {
      uVar3 = 0xfa;
      if (param_4 != 0) {
        uVar3 = 0xfc;
      }
      local_cc = 0;
      (*(code *)PTR_apmib_set_0046aa28)(uVar3,&local_cc);
    }
    goto LAB_0043bf3c;
  }
  iVar4 = (*(code *)PTR_req_get_cstream_var_0046a674)(param_1,auStack_a4,&DAT_0044b32c);
  iVar10 = (*(code *)PTR_strcmp_0046a824)(iVar4,"ON");
  local_cc = (uint)(iVar10 == 0);
  uVar3 = 0xfa;
  if (param_4 != 0) {
    uVar3 = 0xfc;
  }
  (*(code *)PTR_apmib_set_0046aa28)(uVar3,&local_cc);
  if (local_cc == 1) {
    (*(code *)PTR_sprintf_0046a808)(auStack_a4,"repeaterSSID%d",param_4);
    iVar4 = (*(code *)PTR_req_get_cstream_var_0046a674)(param_1,auStack_a4,0);
    if (iVar4 != 0) {
      uVar3 = 0xfb;
      if (param_4 != 0) {
        uVar3 = 0xfd;
      }
      FUN_0043a7c8(param_4,uVar3,iVar4);
    }
  }
  uVar3 = *(undefined4 *)PTR_vwlan_idx_0046a9b0;
  *(undefined4 *)PTR_vwlan_idx_0046a9b0 = 5;
  local_a8 = (uint)(local_cc == 0);
  (*(code *)PTR_apmib_set_0046aa28)(0x16,&local_a8);
  if (local_a8 == 0) {
    local_cc = (uint)(*param_3 != 1);
    (*(code *)PTR_apmib_set_0046aa28)(0x3b,&local_cc);
    (*(code *)PTR_apmib_set_0046aa28)(1,iVar4);
  }
  if (local_cc == 1) {
    (*(code *)PTR_apmib_get_0046aadc)(0x19,&local_cc);
    if ((int)local_cc < 2) {
      (*(code *)PTR_apmib_get_0046aadc)(0x23,&local_cc);
      if (local_cc != 0) {
        local_cc = 0;
        uVar8 = 0x23;
LAB_0043bee8:
        (*(code *)PTR_apmib_set_0046aa28)(uVar8,&local_cc);
      }
    }
    else {
      if (local_cc == 6) {
        local_cc = 0;
        uVar8 = 0x19;
        goto LAB_0043bee8;
      }
      if (local_cc == 2) {
        (*(code *)PTR_apmib_get_0046aadc)(0x1c,&local_cc);
        if ((local_cc == 0) || ((local_cc & 1) != 0)) {
          local_cc = 2;
          (*(code *)PTR_apmib_set_0046aa28)(0x1c,&local_cc);
        }
        (*(code *)PTR_apmib_get_0046aadc)(0x1d,&local_cc);
        if ((local_cc == 0) || (local_cc == 3)) {
          local_cc = 2;
        }
      }
      else if (local_cc == 4) {
        (*(code *)PTR_apmib_get_0046aadc)(0x1c,&local_cc);
        if ((local_cc == 0) || ((local_cc & 1) != 0)) {
          local_cc = 2;
          (*(code *)PTR_apmib_set_0046aa28)(0x1c,&local_cc);
        }
        (*(code *)PTR_apmib_get_0046aadc)(0x26,&local_cc);
        if ((local_cc == 0) || (local_cc == 3)) {
          local_cc = 2;
          uVar8 = 0x26;
          goto LAB_0043bee8;
        }
      }
    }
  }
  *(undefined4 *)PTR_vwlan_idx_0046a9b0 = uVar3;
LAB_0043bf3c:
  (*(code *)PTR_sprintf_0046a808)(auStack_a4,"wps_clear_configure_by_reg%d",param_4);
  pcVar9 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)(param_1,auStack_a4,0);
  local_cc = 0;
  if ((pcVar9 != (char *)0x0) && (*pcVar9 != '\0')) {
    local_cc = (*(code *)PTR_atoi_0046a73c)(pcVar9);
  }
  FUN_00434cb8(local_cc);
  return 0;
}

