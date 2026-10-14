/* FUN_00436978 @ 00436978 */

undefined4 FUN_00436978(undefined4 param_1,undefined4 param_2)

{
  char *pcVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_20;
  undefined4 local_1c;
  uint local_18 [2];
  
  (*(code *)PTR_memset_0046a87c)(&DAT_0046f374,0,0xd0);
  DAT_0046f374 = 4;
  (*(code *)PTR_apmib_get_0046aadc)(0x14,&DAT_0046f380);
  pcVar1 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)(param_1,"authType",&DAT_0044b32c);
  if (*pcVar1 != '\0') {
    iVar2 = (*(code *)PTR_strcmp_0046a824)(pcVar1,&DAT_00453708);
    if (iVar2 == 0) {
      local_20 = 0;
    }
    else {
      iVar2 = (*(code *)PTR_strcmp_0046a824)(pcVar1,"shared");
      if (iVar2 == 0) {
        local_20 = 1;
      }
      else {
        iVar2 = (*(code *)PTR_strcmp_0046a824)(pcVar1,&DAT_00454434);
        if (iVar2 != 0) {
          pcVar1 = "Error! Invalid authentication value.";
          goto LAB_00436ab4;
        }
        local_20 = 2;
      }
    }
    iVar2 = (*(code *)PTR_apmib_set_0046aa28)(0x14,&local_20);
    if (iVar2 == 0) {
      pcVar1 = "Set authentication failed!";
      goto LAB_00436ab4;
    }
  }
  pcVar1 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)
                             (param_1,"fragThreshold",&DAT_0044b32c);
  if (*pcVar1 != '\0') {
    iVar2 = FUN_00434640(pcVar1,local_18);
    if (((iVar2 == 0) || ((int)local_18[0] < 0x100)) || (0x92a < (int)local_18[0])) {
      pcVar1 = "Error! Invalid value of fragment threshold.";
      goto LAB_00436ab4;
    }
    iVar2 = (*(code *)PTR_apmib_set_0046aa28)(0xe,local_18);
    if (iVar2 == 0) {
      pcVar1 = "Set fragment threshold failed!";
      goto LAB_00436ab4;
    }
  }
  pcVar1 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)(param_1,"rtsThreshold",&DAT_0044b32c)
  ;
  if (*pcVar1 != '\0') {
    iVar2 = FUN_00434640(pcVar1,local_18);
    if (((iVar2 == 0) || ((int)local_18[0] < 0)) || (0x92b < (int)local_18[0])) {
      pcVar1 = "Error! Invalid value of RTS threshold.";
      goto LAB_00436ab4;
    }
    iVar2 = (*(code *)PTR_apmib_set_0046aa28)(0x13,local_18);
    if (iVar2 == 0) {
      pcVar1 = "Set RTS threshold failed!";
      goto LAB_00436ab4;
    }
  }
  pcVar1 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)
                             (param_1,"beaconInterval",&DAT_0044b32c);
  if (*pcVar1 != '\0') {
    iVar2 = FUN_00434640(pcVar1,local_18);
    if (((iVar2 == 0) || ((int)local_18[0] < 0x14)) || (0x400 < (int)local_18[0])) {
      pcVar1 = "Error! Invalid value of Beacon Interval.";
      goto LAB_00436ab4;
    }
    iVar2 = (*(code *)PTR_apmib_set_0046aa28)(0x10,local_18);
    if (iVar2 == 0) {
      pcVar1 = "Set Beacon interval failed!";
      goto LAB_00436ab4;
    }
  }
  pcVar1 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)(param_1,"ackTimeout",&DAT_0044b32c);
  if (*pcVar1 != '\0') {
    iVar2 = FUN_00434640(pcVar1,local_18);
    if (((iVar2 == 0) || ((int)local_18[0] < 0)) || (0xff < (int)local_18[0])) {
      pcVar1 = "Error! Invalid value of Ack timeout.";
      goto LAB_00436ab4;
    }
    iVar2 = (*(code *)PTR_apmib_set_0046aa28)(0x2ae,local_18);
    if (iVar2 == 0) {
      pcVar1 = "Set Ack timeout failed!";
      goto LAB_00436ab4;
    }
  }
  local_18[0] = 0;
  pcVar1 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)(param_1,"operRate1M",&DAT_0044b32c);
  if ((pcVar1 != (char *)0x0) && (*pcVar1 != '\0')) {
    iVar2 = (*(code *)PTR_strcmp_0046a824)(pcVar1,"1M");
    if (iVar2 == 0) {
      local_18[0] = local_18[0] | 1;
    }
    uVar3 = (*(code *)PTR_req_get_cstream_var_0046a674)(param_1,"operRate2M",&DAT_0044b32c);
    iVar2 = (*(code *)PTR_strcmp_0046a824)(uVar3,"2M");
    if (iVar2 == 0) {
      local_18[0] = local_18[0] | 2;
    }
    uVar3 = (*(code *)PTR_req_get_cstream_var_0046a674)(param_1,"operRate5M",&DAT_0044b32c);
    iVar2 = (*(code *)PTR_strcmp_0046a824)(uVar3,"5M");
    if (iVar2 == 0) {
      local_18[0] = local_18[0] | 4;
    }
    uVar3 = (*(code *)PTR_req_get_cstream_var_0046a674)(param_1,"operRate11M",&DAT_0044b32c);
    iVar2 = (*(code *)PTR_strcmp_0046a824)(uVar3,"11M");
    if (iVar2 == 0) {
      local_18[0] = local_18[0] | 8;
    }
    uVar3 = (*(code *)PTR_req_get_cstream_var_0046a674)(param_1,"operRate6M",&DAT_0044b32c);
    iVar2 = (*(code *)PTR_strcmp_0046a824)(uVar3,"6M");
    if (iVar2 == 0) {
      local_18[0] = local_18[0] | 0x10;
    }
    uVar3 = (*(code *)PTR_req_get_cstream_var_0046a674)(param_1,"operRate9M",&DAT_0044b32c);
    iVar2 = (*(code *)PTR_strcmp_0046a824)(uVar3,"9M");
    if (iVar2 == 0) {
      local_18[0] = local_18[0] | 0x20;
    }
    uVar3 = (*(code *)PTR_req_get_cstream_var_0046a674)(param_1,"operRate12M",&DAT_0044b32c);
    iVar2 = (*(code *)PTR_strcmp_0046a824)(uVar3,"12M");
    if (iVar2 == 0) {
      local_18[0] = local_18[0] | 0x40;
    }
    uVar3 = (*(code *)PTR_req_get_cstream_var_0046a674)(param_1,"operRate18M",&DAT_0044b32c);
    iVar2 = (*(code *)PTR_strcmp_0046a824)(uVar3,"18M");
    if (iVar2 == 0) {
      local_18[0] = local_18[0] | 0x80;
    }
    uVar3 = (*(code *)PTR_req_get_cstream_var_0046a674)(param_1,"operRate24M",&DAT_0044b32c);
    iVar2 = (*(code *)PTR_strcmp_0046a824)(uVar3,"24M");
    if (iVar2 == 0) {
      local_18[0] = local_18[0] | 0x100;
    }
    uVar3 = (*(code *)PTR_req_get_cstream_var_0046a674)(param_1,"operRate36M",&DAT_0044b32c);
    iVar2 = (*(code *)PTR_strcmp_0046a824)(uVar3,"36M");
    if (iVar2 == 0) {
      local_18[0] = local_18[0] | 0x200;
    }
    uVar3 = (*(code *)PTR_req_get_cstream_var_0046a674)(param_1,"operRate48M",&DAT_0044b32c);
    iVar2 = (*(code *)PTR_strcmp_0046a824)(uVar3,"48M");
    if (iVar2 == 0) {
      local_18[0] = local_18[0] | 0x400;
    }
    uVar3 = (*(code *)PTR_req_get_cstream_var_0046a674)(param_1,"operRate54M",&DAT_0044b32c);
    iVar2 = (*(code *)PTR_strcmp_0046a824)(uVar3,"54M");
    if (iVar2 == 0) {
      local_18[0] = local_18[0] | 0x800;
    }
    iVar2 = (*(code *)PTR_apmib_set_0046aa28)(0xf,local_18);
    if (iVar2 == 0) {
      pcVar1 = "Set Tx operation rate failed!";
      goto LAB_00436ab4;
    }
    local_18[0] = 0;
    pcVar1 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)
                               (param_1,"basicRate1M",&DAT_0044b32c);
    if ((pcVar1 != (char *)0x0) && (*pcVar1 != '\0')) {
      iVar2 = (*(code *)PTR_strcmp_0046a824)(pcVar1,"1M");
      if (iVar2 == 0) {
        local_18[0] = local_18[0] | 1;
      }
      uVar3 = (*(code *)PTR_req_get_cstream_var_0046a674)(param_1,"basicRate2M",&DAT_0044b32c);
      iVar2 = (*(code *)PTR_strcmp_0046a824)(uVar3,"2M");
      if (iVar2 == 0) {
        local_18[0] = local_18[0] | 2;
      }
      uVar3 = (*(code *)PTR_req_get_cstream_var_0046a674)(param_1,"basicRate5M",&DAT_0044b32c);
      iVar2 = (*(code *)PTR_strcmp_0046a824)(uVar3,"5M");
      if (iVar2 == 0) {
        local_18[0] = local_18[0] | 4;
      }
      uVar3 = (*(code *)PTR_req_get_cstream_var_0046a674)(param_1,"basicRate11M",&DAT_0044b32c);
      iVar2 = (*(code *)PTR_strcmp_0046a824)(uVar3,"11M");
      if (iVar2 == 0) {
        local_18[0] = local_18[0] | 8;
      }
      uVar3 = (*(code *)PTR_req_get_cstream_var_0046a674)(param_1,"basicRate6M",&DAT_0044b32c);
      iVar2 = (*(code *)PTR_strcmp_0046a824)(uVar3,"6M");
      if (iVar2 == 0) {
        local_18[0] = local_18[0] | 0x10;
      }
      uVar3 = (*(code *)PTR_req_get_cstream_var_0046a674)(param_1,"basicRate9M",&DAT_0044b32c);
      iVar2 = (*(code *)PTR_strcmp_0046a824)(uVar3,"9M");
      if (iVar2 == 0) {
        local_18[0] = local_18[0] | 0x20;
      }
      uVar3 = (*(code *)PTR_req_get_cstream_var_0046a674)(param_1,"basicRate12M",&DAT_0044b32c);
      iVar2 = (*(code *)PTR_strcmp_0046a824)(uVar3,"12M");
      if (iVar2 == 0) {
        local_18[0] = local_18[0] | 0x40;
      }
      uVar3 = (*(code *)PTR_req_get_cstream_var_0046a674)(param_1,"basicRate18M",&DAT_0044b32c);
      iVar2 = (*(code *)PTR_strcmp_0046a824)(uVar3,"18M");
      if (iVar2 == 0) {
        local_18[0] = local_18[0] | 0x80;
      }
      uVar3 = (*(code *)PTR_req_get_cstream_var_0046a674)(param_1,"basicRate24M",&DAT_0044b32c);
      iVar2 = (*(code *)PTR_strcmp_0046a824)(uVar3,"24M");
      if (iVar2 == 0) {
        local_18[0] = local_18[0] | 0x100;
      }
      uVar3 = (*(code *)PTR_req_get_cstream_var_0046a674)(param_1,"basicRate36M",&DAT_0044b32c);
      iVar2 = (*(code *)PTR_strcmp_0046a824)(uVar3,"36M");
      if (iVar2 == 0) {
        local_18[0] = local_18[0] | 0x200;
      }
      uVar3 = (*(code *)PTR_req_get_cstream_var_0046a674)(param_1,"basicRate48M",&DAT_0044b32c);
      iVar2 = (*(code *)PTR_strcmp_0046a824)(uVar3,"48M");
      if (iVar2 == 0) {
        local_18[0] = local_18[0] | 0x400;
      }
      uVar3 = (*(code *)PTR_req_get_cstream_var_0046a674)(param_1,"basicRate54M",&DAT_0044b32c);
      iVar2 = (*(code *)PTR_strcmp_0046a824)(uVar3,"54M");
      if (iVar2 == 0) {
        local_18[0] = local_18[0] | 0x800;
      }
      iVar2 = (*(code *)PTR_apmib_set_0046aa28)(0x12,local_18);
      if (iVar2 == 0) {
        pcVar1 = "Set Tx basic rate failed!";
        goto LAB_00436ab4;
      }
    }
  }
  pcVar1 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)(param_1,"preamble",&DAT_0044b32c);
  if (*pcVar1 != '\0') {
    iVar2 = (*(code *)PTR_strcmp_0046a824)(pcVar1,&DAT_00454710);
    if (iVar2 == 0) {
      local_1c = 0;
    }
    else {
      iVar2 = (*(code *)PTR_strcmp_0046a824)(pcVar1,"short");
      if (iVar2 != 0) {
        pcVar1 = "Error! Invalid Preamble value.";
        goto LAB_00436ab4;
      }
      local_1c = 1;
    }
    iVar2 = (*(code *)PTR_apmib_set_0046aa28)(0x11,&local_1c);
    if (iVar2 == 0) {
      pcVar1 = "Set Preamble failed!";
      goto LAB_00436ab4;
    }
  }
  pcVar1 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)(param_1,"dtimPeriod",&DAT_0044b32c);
  if (*pcVar1 != '\0') {
    iVar2 = FUN_00434640(pcVar1,local_18);
    if (((iVar2 == 0) || ((int)local_18[0] < 1)) || (0xff < (int)local_18[0])) {
      pcVar1 = "Error! Invalid value of DTIM period.";
      goto LAB_00436ab4;
    }
    iVar2 = (*(code *)PTR_apmib_set_0046aa28)(0x3a,local_18);
    if (iVar2 == 0) {
      pcVar1 = "Set DTIM period failed!";
      goto LAB_00436ab4;
    }
  }
  pcVar1 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)(param_1,&DAT_00454798,&DAT_0044b32c);
  if (*pcVar1 != '\0') {
    iVar2 = (*(code *)PTR_strcmp_0046a824)(pcVar1,&DAT_00453b1c);
    if (iVar2 == 0) {
      local_18[0] = 1;
    }
    else {
      iVar2 = (*(code *)PTR_strcmp_0046a824)(pcVar1,&DAT_00454284);
      if (iVar2 != 0) {
        pcVar1 = "Error! Invalid IAPP value.";
        goto LAB_00436ab4;
      }
      local_18[0] = 0;
    }
    iVar2 = (*(code *)PTR_apmib_set_0046aa28)(0x3e,local_18);
    if (iVar2 == 0) {
      pcVar1 = "Set MIB_WLAN_IAPP_DISABLED failed!";
      goto LAB_00436ab4;
    }
  }
  pcVar1 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)
                             (param_1,"11g_protection",&DAT_0044b32c);
  if (*pcVar1 != '\0') {
    iVar2 = (*(code *)PTR_strcmp_0046a824)(pcVar1,&DAT_00453b1c);
    if (iVar2 == 0) {
      local_18[0] = 1;
    }
    else {
      iVar2 = (*(code *)PTR_strcmp_0046a824)(pcVar1,&DAT_00454284);
      if (iVar2 != 0) {
        pcVar1 = "Error! Invalid 11g Protection value.";
        goto LAB_00436ab4;
      }
      local_18[0] = 0;
    }
    iVar2 = (*(code *)PTR_apmib_set_0046aa28)(0x4e,local_18);
    if (iVar2 == 0) {
      pcVar1 = "Set MIB_WLAN_PROTECTION_DISABLED failed!";
      goto LAB_00436ab4;
    }
  }
  pcVar1 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)(param_1,"turbo",&DAT_0044b32c);
  if (*pcVar1 != '\0') {
    iVar2 = (*(code *)PTR_strcmp_0046a824)(pcVar1,"off");
    if (iVar2 == 0) {
      local_18[0] = 2;
    }
    else {
      iVar2 = (*(code *)PTR_strcmp_0046a824)(pcVar1,"always");
      if (iVar2 == 0) {
        local_18[0] = 1;
      }
      else {
        iVar2 = (*(code *)PTR_strcmp_0046a824)(pcVar1,&DAT_00454854);
        if (iVar2 != 0) {
          pcVar1 = "Error! Invalid turbo mode value.";
          goto LAB_00436ab4;
        }
        local_18[0] = 0;
      }
    }
    iVar2 = (*(code *)PTR_apmib_set_0046aa28)(0x106,local_18);
    if (iVar2 == 0) {
      pcVar1 = "Set MIB_WLAN_TURBO_MODE failed!";
      goto LAB_00436ab4;
    }
  }
  pcVar1 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)(param_1,"RFPower",&DAT_0044b32c);
  if (*pcVar1 != '\0') {
    iVar2 = (*(code *)PTR_strcmp_0046a824)(pcVar1,&DAT_00450acc);
    if (iVar2 == 0) {
      local_18[0] = 0;
    }
    else {
      iVar2 = (*(code *)PTR_strcmp_0046a824)(pcVar1,"1");
      if (iVar2 == 0) {
        local_18[0] = 1;
      }
      else {
        iVar2 = (*(code *)PTR_strcmp_0046a824)(pcVar1,"2");
        if (iVar2 == 0) {
          local_18[0] = 2;
        }
        else {
          iVar2 = (*(code *)PTR_strcmp_0046a824)(pcVar1,"3");
          if (iVar2 == 0) {
            local_18[0] = 3;
          }
          else {
            iVar2 = (*(code *)PTR_strcmp_0046a824)(pcVar1,&DAT_00455344);
            if (iVar2 != 0) {
              pcVar1 = "Error! Invalid RF output power value.";
              goto LAB_00436ab4;
            }
            local_18[0] = 4;
          }
        }
      }
    }
    iVar2 = (*(code *)PTR_apmib_set_0046aa28)(0x107,local_18);
    if (iVar2 == 0) {
      pcVar1 = "Set MIB_WLAN_RFPOWER_SCALE failed!";
      goto LAB_00436ab4;
    }
  }
  pcVar1 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)(param_1,"aggregation",&DAT_0044b32c);
  if (*pcVar1 != '\0') {
    iVar2 = (*(code *)PTR_strcmp_0046a824)(pcVar1,"disable");
    if (iVar2 == 0) {
      local_18[0] = 0;
    }
    else {
      local_18[0] = 3;
    }
    iVar2 = (*(code *)PTR_apmib_set_0046aa28)(0x11e,local_18);
    if (iVar2 == 0) {
      pcVar1 = "Set MIB_WLAN_AGGREGATION failed!";
      goto LAB_00436ab4;
    }
  }
  pcVar1 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)(param_1,"block_relay",&DAT_0044b32c);
  if (*pcVar1 != '\0') {
    iVar2 = (*(code *)PTR_strcmp_0046a824)(pcVar1,"enable");
    local_18[0] = (uint)(iVar2 == 0);
    (*(code *)PTR_apmib_set_0046aa28)(0x4c,local_18);
  }
  pcVar1 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)(param_1,"shortGI0",&DAT_0044b32c);
  if (*pcVar1 != '\0') {
    iVar2 = (*(code *)PTR_strcmp_0046a824)(pcVar1,"on");
    if (iVar2 == 0) {
      local_18[0] = 1;
    }
    else {
      iVar2 = (*(code *)PTR_strcmp_0046a824)(pcVar1,"off");
      if (iVar2 != 0) {
        pcVar1 = "Error! Invalid short GI.";
        goto LAB_00436ab4;
      }
      local_18[0] = 0;
    }
    iVar2 = (*(code *)PTR_apmib_set_0046aa28)(0x11f,local_18);
    if (iVar2 == 0) {
      pcVar1 = "Set MIB_WLAN_SHORT_GI failed!";
LAB_00436ab4:
      (*(code *)PTR_strcpy_0046ac60)(param_2,pcVar1);
      return 0xffffffff;
    }
  }
  pcVar1 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)(param_1,"tx_stbc",&DAT_0044b32c);
  if (*pcVar1 == '\0') {
    iVar2 = (*(code *)PTR_getWLAN_ChipVersion_0046a688)();
    if (iVar2 == 1) {
      local_18[0] = 0;
      goto LAB_00437ca0;
    }
  }
  else {
    iVar2 = (*(code *)PTR_strcmp_0046a824)(pcVar1,"enable");
    local_18[0] = (uint)(iVar2 == 0);
LAB_00437ca0:
    (*(code *)PTR_apmib_set_0046aa28)(0x286,local_18);
  }
  pcVar1 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)(param_1,"tx_ldpc",&DAT_0044b32c);
  if (*pcVar1 == '\0') {
    iVar2 = (*(code *)PTR_getWLAN_ChipVersion_0046a688)();
    if (iVar2 != 1) goto LAB_00437d48;
    local_18[0] = 0;
  }
  else {
    iVar2 = (*(code *)PTR_strcmp_0046a824)(pcVar1,"enable");
    local_18[0] = (uint)(iVar2 == 0);
  }
  (*(code *)PTR_apmib_set_0046aa28)(0x288,local_18);
LAB_00437d48:
  pcVar1 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)(param_1,"coexist_",&DAT_0044b32c);
  if (*pcVar1 != '\0') {
    iVar2 = (*(code *)PTR_strcmp_0046a824)(pcVar1,"enable");
    local_18[0] = (uint)(iVar2 == 0);
    (*(code *)PTR_apmib_set_0046aa28)(0x287,local_18);
  }
  pcVar1 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)(param_1,"beamforming_",&DAT_0044b32c)
  ;
  if (*pcVar1 != '\0') {
    iVar2 = (*(code *)PTR_strcmp_0046a824)(pcVar1,"enable");
    local_18[0] = (uint)(iVar2 == 0);
    (*(code *)PTR_apmib_set_0046aa28)(0x1c2,local_18);
  }
  uVar3 = (*(code *)PTR_req_get_cstream_var_0046a674)(param_1,"mc2u_",&DAT_0044b32c);
  if (*pcVar1 != '\0') {
    iVar2 = (*(code *)PTR_strcmp_0046a824)(uVar3,"enable");
    local_18[0] = (uint)(iVar2 != 0);
    (*(code *)PTR_apmib_set_0046aa28)(0x298,local_18);
  }
  pcVar1 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)(param_1,"mlcstrate",&DAT_0044b32c);
  if (*pcVar1 != '\0') {
    if (*pcVar1 == '0') {
      local_18[0] = 0;
    }
    else {
      local_18[0] = 0;
      iVar2 = (*(code *)PTR_atoi_0046a73c)(pcVar1);
      if (iVar2 < 0x1e) {
        local_18[0] = 1 << (iVar2 - 1U & 0x1f);
      }
      else {
        local_18[0] = iVar2 + 0x7fffffe2;
      }
    }
    (*(code *)PTR_apmib_set_0046aa28)(0x297,local_18);
  }
  FUN_00434cb8(1);
  return 0;
}

