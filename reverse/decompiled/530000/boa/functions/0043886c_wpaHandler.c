/* wpaHandler @ 0043886c */

undefined4 wpaHandler(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  bool bVar1;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint local_60;
  int local_5c;
  uint local_58;
  int local_54;
  int local_50;
  uint local_4c;
  undefined1 auStack_48 [4];
  uint local_44;
  undefined1 auStack_40 [24];
  undefined4 local_28;
  
  local_5c = 0;
  (*(code *)PTR_sprintf_0046a808)(auStack_40,"method%d");
  pcVar2 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)(param_1,auStack_40,&DAT_0044b32c);
  uVar3 = (int)*pcVar2 - 0x30;
  if (*pcVar2 == 0) {
    pcVar2 = "Error! no encryption method.";
    goto LAB_0043a050;
  }
  local_60 = uVar3;
  if (((2 < uVar3) && (uVar3 != 4)) && (uVar3 != 6)) {
    pcVar2 = "Invalid encryption method!";
    goto LAB_0043a050;
  }
  if (*(int *)PTR_vwlan_idx_0046a9b0 == 0) {
    (*(code *)PTR_memset_0046a87c)(&DAT_0046f374,0,0xd0);
    DAT_0046f374 = 3;
    (*(code *)PTR_apmib_get_0046aadc)(0x19,&DAT_0046f37c);
    (*(code *)PTR_apmib_get_0046aadc)(0x1d,&DAT_0046f388);
    (*(code *)PTR_apmib_get_0046aadc)(0x26,&DAT_0046f38c);
    (*(code *)PTR_apmib_get_0046aadc)(0x1e,&DAT_0046f400);
  }
  iVar4 = (*(code *)PTR_apmib_set_0046aa28)(0x19,&local_60);
  if (iVar4 == 0) {
    pcVar2 = "Set MIB_WLAN_ENCRYPT mib error!";
    goto LAB_0043a050;
  }
  if (1 < local_60) {
    (*(code *)PTR_sprintf_0046a808)(auStack_40,"nonWpaSupp%d",param_3);
    pcVar2 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)(param_1,auStack_40,&DAT_0044b32c);
    (*(code *)PTR_apmib_get_0046aadc)(0x1a,&local_58);
    if (*pcVar2 != '\0') {
      iVar4 = (*(code *)PTR_strcmp_0046a824)(pcVar2,"ON");
      if (iVar4 == 0) {
        local_58 = 1;
      }
      else {
        local_58 = 0;
      }
    }
    iVar4 = (*(code *)PTR_apmib_set_0046aa28)(0x1a,&local_58);
    if (iVar4 == 0) {
      pcVar2 = "Set MIB_WLAN_ENABLE_SUPP_NONWPA mib error!";
      goto LAB_0043a050;
    }
    if (local_58 != 0) {
      local_4c = 0;
      (*(code *)PTR_sprintf_0046a808)(auStack_40,"nonWpaWep%d",param_3);
      uVar5 = (*(code *)PTR_req_get_cstream_var_0046a674)(param_1,auStack_40,&DAT_0044b32c);
      iVar4 = (*(code *)PTR_strcmp_0046a824)(uVar5,"ON");
      if (iVar4 == 0) {
        local_4c = local_4c | 1;
      }
      (*(code *)PTR_sprintf_0046a808)(auStack_40,"nonWpa1x%d",param_3);
      uVar5 = (*(code *)PTR_req_get_cstream_var_0046a674)(param_1,auStack_40,&DAT_0044b32c);
      iVar4 = (*(code *)PTR_strcmp_0046a824)(uVar5,"ON");
      if (iVar4 == 0) {
        local_5c = 1;
        local_4c = local_4c | 2;
      }
      iVar4 = (*(code *)PTR_apmib_set_0046aa28)(0x1b,&local_4c);
      if (iVar4 == 0) {
        pcVar2 = "Set MIB_WLAN_SUPP_NONWPA mib error!";
        goto LAB_0043a050;
      }
    }
    (*(code *)PTR_sprintf_0046a808)(auStack_40,"wpaAuth%d",param_3);
    pcVar2 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)(param_1,auStack_40,&DAT_0044b32c);
    if (*pcVar2 == '\0') {
      bVar1 = false;
    }
    else {
      iVar4 = (*(code *)PTR_strcmp_0046a824)(pcVar2,&DAT_004549d0);
      if (iVar4 == 0) {
        (*(code *)PTR_apmib_get_0046aadc)(0x3b,&local_58);
        if ((local_58 != 0) && (local_58 != 3)) {
          pcVar2 = "Error! WPA-RADIUS cannot be used when device is set to client mode.";
          goto LAB_0043a050;
        }
        local_5c = 1;
        local_58 = 1;
        bVar1 = false;
      }
      else {
        iVar4 = (*(code *)PTR_strcmp_0046a824)(pcVar2,&DAT_004549ec);
        bVar1 = true;
        if (iVar4 != 0) {
          pcVar2 = "Error! Invalid wpa authentication value.";
          goto LAB_0043a050;
        }
        local_58 = 2;
      }
      iVar4 = (*(code *)PTR_apmib_set_0046aa28)(0x1c,&local_58);
      if (iVar4 == 0) {
        pcVar2 = "Set MIB_WLAN_WPA_AUTH failed!";
        goto LAB_0043a050;
      }
    }
    (*(code *)PTR_sprintf_0046a808)(auStack_40,"ciphersuite%d",param_3);
    pcVar2 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)(param_1,auStack_40,&DAT_0044b32c);
    if (*pcVar2 == '\0') {
      local_58 = 1;
    }
    else {
      local_58 = 0;
      iVar4 = (*(code *)PTR_strstr_0046a940)(pcVar2,&DAT_00453b30);
      if (iVar4 != 0) {
        local_58 = 1;
      }
      iVar4 = (*(code *)PTR_strstr_0046a940)(pcVar2,&DAT_00453b38);
      if (iVar4 != 0) {
        local_58 = local_58 | 2;
      }
      if (local_58 == 0) {
        pcVar2 = "Invalid value of cipher suite!";
        goto LAB_0043a050;
      }
    }
    (*(code *)PTR_apmib_get_0046aadc)(0x3b,&local_54);
    if (((local_54 != 1) || ((*(code *)PTR_apmib_get_0046aadc)(0x3c,&local_54), local_54 != 0)) ||
       (local_58 != 3)) {
      iVar4 = (*(code *)PTR_apmib_set_0046aa28)(0x1d,&local_58);
      if (iVar4 == 0) {
LAB_00439230:
        pcVar2 = "Set MIB_WLAN_WPA_CIPHER_SUITE failed!";
        goto LAB_0043a050;
      }
      (*(code *)PTR_sprintf_0046a808)(auStack_40,"wpa2ciphersuite%d",param_3);
      pcVar2 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)(param_1,auStack_40,&DAT_0044b32c)
      ;
      if (*pcVar2 == '\0') {
        local_58 = 2;
      }
      else {
        local_58 = 0;
        iVar4 = (*(code *)PTR_strstr_0046a940)(pcVar2,&DAT_00453b30);
        if (iVar4 != 0) {
          local_58 = 1;
        }
        iVar4 = (*(code *)PTR_strstr_0046a940)(pcVar2,&DAT_00453b38);
        if (iVar4 != 0) {
          local_58 = local_58 | 2;
        }
        if (local_58 == 0) {
          pcVar2 = "Invalid value of wpa2 cipher suite!";
          goto LAB_0043a050;
        }
      }
      (*(code *)PTR_apmib_get_0046aadc)(0x3b,&local_54);
      if (((local_54 != 1) || ((*(code *)PTR_apmib_get_0046aadc)(0x3c,&local_54), local_54 != 0)) ||
         (local_58 != 3)) {
        iVar4 = (*(code *)PTR_apmib_set_0046aa28)(0x26,&local_58);
        if (iVar4 == 0) {
          pcVar2 = "Set MIB_WLAN_WPA2_CIPHER_SUITE failed!";
          goto LAB_0043a050;
        }
        if (((local_60 == 4) || (local_60 == 6)) && (local_5c == 1)) {
          (*(code *)PTR_sprintf_0046a808)(auStack_40,"preAuth%d",param_3);
          uVar5 = (*(code *)PTR_req_get_cstream_var_0046a674)(param_1,auStack_40,&DAT_0044b32c);
          iVar4 = (*(code *)PTR_strcmp_0046a824)(uVar5,"ON");
          local_58 = (uint)(iVar4 == 0);
          iVar4 = (*(code *)PTR_apmib_set_0046aa28)(0x25,&local_58);
          if (iVar4 == 0) goto LAB_00439230;
        }
        if (bVar1) {
          (*(code *)PTR_sprintf_0046a808)(auStack_40,"pskFormat%d",param_3);
          pcVar2 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)
                                     (param_1,auStack_40,&DAT_0044b32c);
          uVar3 = (int)*pcVar2 - 0x30;
          if (*pcVar2 == 0) {
            pcVar2 = "Error! no psk format.";
            goto LAB_0043a050;
          }
          local_58 = uVar3;
          if (1 < uVar3) {
            pcVar2 = "Error! invalid psk format.";
            goto LAB_0043a050;
          }
          (*(code *)PTR_apmib_get_0046aadc)(0x24,&local_44);
          (*(code *)PTR_apmib_get_0046aadc)(0x1e,param_2);
          iVar4 = (*(code *)PTR_strlen_0046a714)(param_2);
          (*(code *)PTR_sprintf_0046a808)(auStack_40,"pskValue%d",param_3);
          iVar6 = (*(code *)PTR_req_get_cstream_var_0046a674)(param_1,auStack_40,&DAT_0044b32c);
          iVar7 = (*(code *)PTR_strlen_0046a714)(iVar6);
          if ((local_44 == local_58) && (iVar8 = 0, iVar7 == iVar4)) {
            for (; (iVar8 < iVar7 && (*(char *)(iVar6 + iVar8) == '*')); iVar8 = iVar8 + 1) {
            }
            if (iVar8 == iVar7) goto LAB_0043946c;
          }
          iVar4 = (*(code *)PTR_apmib_set_0046aa28)(0x24,&local_58);
          if (iVar4 == 0) {
            pcVar2 = "Set MIB_WLAN_PSK_FORMAT failed!";
            goto LAB_0043a050;
          }
          if (local_58 == 1) {
            if ((iVar7 == 0x40) && (iVar4 = FUN_00434520(iVar6,param_2,0x40), iVar4 != 0)) {
LAB_00439440:
              iVar4 = (*(code *)PTR_apmib_set_0046aa28)(0x1e,iVar6);
              if (iVar4 == 0) {
                pcVar2 = "Set MIB_WLAN_WPA_PSK error!";
                goto LAB_0043a050;
              }
              goto LAB_0043946c;
            }
          }
          else if (((iVar7 != 0) && (iVar7 < 0x40)) && (7 < iVar7)) goto LAB_00439440;
          pcVar2 = "Error! invalid psk value.";
          goto LAB_0043a050;
        }
LAB_0043946c:
        local_50 = 0;
        (*(code *)PTR_sprintf_0046a808)(auStack_40,"groupKeyTimeDay%d",param_3);
        pcVar2 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)
                                   (param_1,auStack_40,&DAT_0044b32c);
        if (*pcVar2 != '\0') {
          iVar4 = FUN_00434640(pcVar2,&local_58);
          if (iVar4 == 0) {
            pcVar2 = "Error! Invalid value of rekey day.";
            goto LAB_0043a050;
          }
          local_50 = local_50 + local_58 * 0x15180;
        }
        (*(code *)PTR_sprintf_0046a808)(auStack_40,"groupKeyTimeHr%d",param_3);
        pcVar2 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)
                                   (param_1,auStack_40,&DAT_0044b32c);
        if (*pcVar2 != '\0') {
          iVar4 = FUN_00434640(pcVar2,&local_58);
          if (iVar4 == 0) {
            pcVar2 = "Error! Invalid value of rekey hr.";
            goto LAB_0043a050;
          }
          local_50 = local_50 + local_58 * 0xe10;
        }
        (*(code *)PTR_sprintf_0046a808)(auStack_40,"groupKeyTimeMin%d",param_3);
        pcVar2 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)
                                   (param_1,auStack_40,&DAT_0044b32c);
        if (*pcVar2 != '\0') {
          iVar4 = FUN_00434640(pcVar2,&local_58);
          if (iVar4 == 0) {
            pcVar2 = "Error! Invalid value of rekey min.";
            goto LAB_0043a050;
          }
          local_50 = local_50 + local_58 * 0x3c;
        }
        (*(code *)PTR_sprintf_0046a808)(auStack_40,"groupKeyTimeSec%d",param_3);
        pcVar2 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)
                                   (param_1,auStack_40,&DAT_0044b32c);
        if (*pcVar2 != '\0') {
          iVar4 = FUN_00434640(pcVar2,&local_58);
          if (iVar4 == 0) {
            pcVar2 = "Error! Invalid value of rekey sec.";
            goto LAB_0043a050;
          }
          local_50 = local_50 + local_58;
        }
        if ((local_50 != 0) &&
           (iVar4 = (*(code *)PTR_apmib_set_0046aa28)(0x1f,&local_50), iVar4 == 0)) {
          pcVar2 = "Set MIB_WLAN_WPA_GROUP_REKEY_TIME error!";
          goto LAB_0043a050;
        }
        goto LAB_004396d4;
      }
    }
    pcVar2 = "Error! Can\'t set cipher to TKIP + AES when device is set to client mode.";
    goto LAB_0043a050;
  }
  (*(code *)PTR_sprintf_0046a808)(auStack_40,"use1x%d",param_3);
  uVar5 = (*(code *)PTR_req_get_cstream_var_0046a674)(param_1,auStack_40,&DAT_0044b32c);
  iVar4 = (*(code *)PTR_strcmp_0046a824)(uVar5,"ON");
  if (iVar4 == 0) {
    (*(code *)PTR_apmib_get_0046aadc)(0x3b,&local_58);
    if ((local_58 != 0) && (local_58 != 3)) {
      pcVar2 = "Error! 802.1x authentication cannot be used when device is set to client mode.";
      goto LAB_0043a050;
    }
    local_5c = 1;
    local_58 = 1;
  }
  else {
    local_58 = 0;
  }
  iVar4 = (*(code *)PTR_apmib_set_0046aa28)(0x23,&local_58);
  uVar3 = local_60;
  if (iVar4 == 0) {
    pcVar2 = "Set 1x enable flag error!";
    goto LAB_0043a050;
  }
  if (local_60 == 1) {
    iVar4 = (*(code *)PTR_apmib_get_0046aadc)(3,&local_44);
    if (iVar4 == 0) {
      pcVar2 = "Get MIB_WLAN_WEP MIB error!";
      goto LAB_0043a050;
    }
    if (local_44 == 0) {
      local_44 = uVar3;
      iVar4 = (*(code *)PTR_apmib_set_0046aa28)(3,&local_44);
      if (iVar4 == 0) {
        pcVar2 = "Set WEP MIB error!";
        goto LAB_0043a050;
      }
    }
  }
  else {
    (*(code *)PTR_sprintf_0046a808)(auStack_40,"useMacAuth%d",param_3);
    uVar5 = (*(code *)PTR_req_get_cstream_var_0046a674)(param_1,auStack_40,&DAT_0044b32c);
    iVar4 = (*(code *)PTR_strcmp_0046a824)(uVar5,"ON");
    if (iVar4 == 0) {
      local_5c = 1;
    }
    local_58 = (uint)(iVar4 == 0);
    iVar4 = (*(code *)PTR_apmib_set_0046aa28)(0x2d,&local_58);
    if (iVar4 == 0) {
      pcVar2 = "Set MIB_WLAN_MAC_AUTH_ENABLED MIB error!";
      goto LAB_0043a050;
    }
  }
LAB_004396d4:
  (*(code *)PTR_apmib_set_0046aa28)(0x23,&local_5c);
  if (local_5c == 1) {
    (*(code *)PTR_sprintf_0046a808)(auStack_40,"radiusPort%d",param_3);
    pcVar2 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)(param_1,auStack_40,&DAT_0044b32c);
    if (*pcVar2 == '\0') {
      pcVar2 = "No RS port number!";
    }
    else {
      iVar4 = FUN_00434640(pcVar2,&local_58);
      if (((iVar4 == 0) || ((int)local_58 < 1)) || (0xffff < (int)local_58)) {
        pcVar2 = "Error! Invalid value of RS port number.";
      }
      else {
        iVar4 = (*(code *)PTR_apmib_set_0046aa28)(0x21,&local_58);
        if (iVar4 == 0) {
          pcVar2 = "Set RS port error!";
        }
        else {
          (*(code *)PTR_sprintf_0046a808)(auStack_40,"radiusIP%d",param_3);
          pcVar2 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)
                                     (param_1,auStack_40,&DAT_0044b32c);
          if (*pcVar2 == '\0') {
            pcVar2 = "No RS IP address!";
          }
          else {
            iVar4 = (*(code *)PTR_inet_aton_0046a89c)(pcVar2,auStack_48);
            if (iVar4 == 0) {
              pcVar2 = "Invalid RS IP-address value!";
            }
            else {
              iVar4 = (*(code *)PTR_apmib_set_0046aa28)(0x20,auStack_48);
              if (iVar4 == 0) {
                pcVar2 = "Set RS IP-address error!";
              }
              else {
                (*(code *)PTR_sprintf_0046a808)(auStack_40,"radiusPass%d",param_3);
                local_28 = (*(code *)PTR_req_get_cstream_var_0046a674)
                                     (param_1,auStack_40,&DAT_0044b32c);
                uVar3 = (*(code *)PTR_strlen_0046a714)(local_28);
                if (uVar3 < 0x41) {
                  iVar4 = (*(code *)PTR_apmib_set_0046aa28)(0x22,local_28);
                  if (iVar4 == 0) {
                    pcVar2 = "Set RS password error!";
                  }
                  else {
                    (*(code *)PTR_sprintf_0046a808)(auStack_40,"radiusRetry%d",param_3);
                    pcVar2 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)
                                               (param_1,auStack_40,&DAT_0044b32c);
                    if (*pcVar2 != '\0') {
                      iVar4 = FUN_00434640(pcVar2,&local_58);
                      if (iVar4 == 0) {
                        pcVar2 = "Invalid RS retry value!";
                        goto LAB_0043a050;
                      }
                      iVar4 = (*(code *)PTR_apmib_set_0046aa28)(0x2e,&local_58);
                      if (iVar4 == 0) {
                        pcVar2 = "Set MIB_WLAN_RS_MAXRETRY error!";
                        goto LAB_0043a050;
                      }
                    }
                    (*(code *)PTR_sprintf_0046a808)(auStack_40,"radiusTime%d",param_3);
                    pcVar2 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)
                                               (param_1,auStack_40,&DAT_0044b32c);
                    if (*pcVar2 != '\0') {
                      iVar4 = FUN_00434640(pcVar2,&local_58);
                      if (iVar4 == 0) {
                        pcVar2 = "Invalid RS time value!";
                        goto LAB_0043a050;
                      }
                      iVar4 = (*(code *)PTR_apmib_set_0046aa28)(0x2f,&local_58);
                      if (iVar4 == 0) {
                        pcVar2 = "Set MIB_WLAN_RS_INTERVAL_TIME error!";
                        goto LAB_0043a050;
                      }
                    }
                    (*(code *)PTR_sprintf_0046a808)(auStack_40,"useAccount%d",param_3);
                    uVar5 = (*(code *)PTR_req_get_cstream_var_0046a674)
                                      (param_1,auStack_40,&DAT_0044b32c);
                    iVar4 = (*(code *)PTR_strcmp_0046a824)(uVar5,"ON");
                    local_58 = (uint)(iVar4 == 0);
                    iVar4 = (*(code *)PTR_apmib_set_0046aa28)(0x27,&local_58);
                    if (iVar4 == 0) {
                      pcVar2 = "Set MIB_WLAN_ACCOUNT_RS_ENABLED mib error!";
                    }
                    else {
                      if (local_58 != 0) {
                        (*(code *)PTR_sprintf_0046a808)(auStack_40,"accountPort%d",param_3);
                        pcVar2 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)
                                                   (param_1,auStack_40,&DAT_0044b32c);
                        if (*pcVar2 == '\0') {
                          pcVar2 = "No account RS port number!";
                          goto LAB_0043a050;
                        }
                        iVar4 = FUN_00434640(pcVar2,&local_58);
                        if (((iVar4 == 0) || ((int)local_58 < 1)) || (0xffff < (int)local_58)) {
                          pcVar2 = "Error! Invalid value of account RS port number.";
                          goto LAB_0043a050;
                        }
                        iVar4 = (*(code *)PTR_apmib_set_0046aa28)(0x29,&local_58);
                        if (iVar4 == 0) {
                          pcVar2 = "Set account RS port error!";
                          goto LAB_0043a050;
                        }
                        (*(code *)PTR_sprintf_0046a808)(auStack_40,"accountIP%d",param_3);
                        pcVar2 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)
                                                   (param_1,auStack_40,&DAT_0044b32c);
                        if (*pcVar2 == '\0') {
                          pcVar2 = "No account RS IP address!";
                          goto LAB_0043a050;
                        }
                        iVar4 = (*(code *)PTR_inet_aton_0046a89c)(pcVar2,auStack_48);
                        if (iVar4 == 0) {
                          pcVar2 = "Invalid account RS IP-address value!";
                          goto LAB_0043a050;
                        }
                        iVar4 = (*(code *)PTR_apmib_set_0046aa28)(0x28,auStack_48);
                        if (iVar4 == 0) {
                          pcVar2 = "Set account RS IP-address error!";
                          goto LAB_0043a050;
                        }
                        (*(code *)PTR_sprintf_0046a808)(auStack_40,"accountPass%d",param_3);
                        local_28 = (*(code *)PTR_req_get_cstream_var_0046a674)
                                             (param_1,auStack_40,&DAT_0044b32c);
                        uVar3 = (*(code *)PTR_strlen_0046a714)(local_28);
                        if (0x40 < uVar3) {
                          pcVar2 = "Account RS password length too long!";
                          goto LAB_0043a050;
                        }
                        iVar4 = (*(code *)PTR_apmib_set_0046aa28)(0x2a,local_28);
                        if (iVar4 == 0) {
                          pcVar2 = "Set account RS password error!";
                          goto LAB_0043a050;
                        }
                        (*(code *)PTR_sprintf_0046a808)(auStack_40,"accountRetry%d",param_3);
                        pcVar2 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)
                                                   (param_1,auStack_40,&DAT_0044b32c);
                        if (*pcVar2 != '\0') {
                          iVar4 = FUN_00434640(pcVar2,&local_58);
                          if (iVar4 == 0) {
                            pcVar2 = "Invalid account RS retry value!";
                            goto LAB_0043a050;
                          }
                          iVar4 = (*(code *)PTR_apmib_set_0046aa28)(0x30,&local_58);
                          if (iVar4 == 0) {
                            pcVar2 = "Set MIB_WLAN_ACCOUNT_RS_MAXRETRY error!";
                            goto LAB_0043a050;
                          }
                        }
                        (*(code *)PTR_sprintf_0046a808)(auStack_40,"accountTime%d",param_3);
                        pcVar2 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)
                                                   (param_1,auStack_40,&DAT_0044b32c);
                        if (*pcVar2 != '\0') {
                          iVar4 = FUN_00434640(pcVar2,&local_58);
                          if (iVar4 == 0) {
                            pcVar2 = "Invalid account RS time value!";
                            goto LAB_0043a050;
                          }
                          iVar4 = (*(code *)PTR_apmib_set_0046aa28)(0x31,&local_58);
                          if (iVar4 == 0) {
                            pcVar2 = "Set MIB_WLAN_ACCOUNT_RS_INTERVAL_TIME error!";
                            goto LAB_0043a050;
                          }
                        }
                        (*(code *)PTR_sprintf_0046a808)(auStack_40,"accountUpdateEnabled%d",param_3)
                        ;
                        uVar5 = (*(code *)PTR_req_get_cstream_var_0046a674)
                                          (param_1,auStack_40,&DAT_0044b32c);
                        iVar4 = (*(code *)PTR_strcmp_0046a824)(uVar5,"ON");
                        local_58 = (uint)(iVar4 == 0);
                        iVar4 = (*(code *)PTR_apmib_set_0046aa28)(0x2b,&local_58);
                        if (iVar4 == 0) {
                          pcVar2 = "Set MIB_WLAN_ACCOUNT_RS_UPDATE_ENABLED mib error!";
                          goto LAB_0043a050;
                        }
                        (*(code *)PTR_sprintf_0046a808)(auStack_40,"accountUpdateTime%d",param_3);
                        pcVar2 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)
                                                   (param_1,auStack_40,&DAT_0044b32c);
                        if (*pcVar2 != '\0') {
                          iVar4 = FUN_00434640(pcVar2,&local_58);
                          if (iVar4 == 0) {
                            pcVar2 = "Error! Invalid value of update time";
                            goto LAB_0043a050;
                          }
                          iVar4 = (*(code *)PTR_apmib_set_0046aa28)(0x2c,&local_58);
                          if (iVar4 == 0) {
                            pcVar2 = "Set MIB_WLAN_ACCOUNT_RS_UPDATE_DELAY mib error!";
                            goto LAB_0043a050;
                          }
                        }
                      }
                      (*(code *)PTR_sprintf_0046a808)(auStack_40,"wepKeyLen%d",param_3);
                      pcVar2 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)
                                                 (param_1,auStack_40,&DAT_0044b32c);
                      if (*pcVar2 == '\0') goto LAB_0043a060;
                      iVar4 = (*(code *)PTR_strcmp_0046a824)(pcVar2,&DAT_00455340);
                      if (iVar4 == 0) {
                        local_58 = 1;
                      }
                      else {
                        iVar4 = (*(code *)PTR_strcmp_0046a824)(pcVar2,"wep128");
                        if (iVar4 != 0) {
                          pcVar2 = "Error! Invalid wepkeylen value.";
                          goto LAB_0043a050;
                        }
                        local_58 = 2;
                      }
                      iVar4 = (*(code *)PTR_apmib_set_0046aa28)(3,&local_58);
                      if (iVar4 != 0) goto LAB_0043a060;
                      pcVar2 = "Set MIB_WLAN_WEP failed!";
                    }
                  }
                }
                else {
                  pcVar2 = "RS password length too long!";
                }
              }
            }
          }
        }
      }
    }
LAB_0043a050:
    (*(code *)PTR_strcpy_0046ac60)(param_2,pcVar2);
    return 0xffffffff;
  }
LAB_0043a060:
  if (*(int *)PTR_vwlan_idx_0046a9b0 != 0) {
    return 0;
  }
  (*(code *)PTR_sprintf_0046a808)(auStack_40,"wps_clear_configure_by_reg%d",param_3);
  pcVar2 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)(param_1,auStack_40,0);
  local_54 = 0;
  if (*pcVar2 != '\0') {
    local_54 = (*(code *)PTR_atoi_0046a73c)(pcVar2);
  }
  FUN_00434cb8(local_54);
  return 0;
}

