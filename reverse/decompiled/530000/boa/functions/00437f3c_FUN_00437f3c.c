/* FUN_00437f3c @ 00437f3c */

undefined4 FUN_00437f3c(undefined4 param_1,undefined4 param_2)

{
  undefined *puVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  int unaff_s2;
  uint uVar7;
  undefined4 uVar8;
  undefined1 auStack_2e0 [20];
  undefined1 auStack_2cc [32];
  char local_2ac [33];
  char local_28b;
  undefined1 local_28a;
  undefined1 local_289;
  undefined1 auStack_288 [66];
  undefined1 auStack_246 [27];
  undefined1 auStack_22b [27];
  undefined1 auStack_210 [27];
  undefined1 auStack_1f5 [27];
  char local_1da;
  undefined1 local_1d9;
  undefined1 auStack_1d8 [212];
  undefined1 auStack_104 [212];
  char *local_30;
  
  (*(code *)PTR_memset_0046a87c)(auStack_1d8,0,0x1a8);
  pcVar2 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)(param_1,"SSID_Setting",&DAT_0044b32c)
  ;
  if (*pcVar2 != '\0') {
    unaff_s2 = (*(code *)PTR_atoi_0046a73c)(pcVar2);
  }
  if (4 < unaff_s2 - 6U) {
    pcVar2 = "ssid_idx is invalid!!";
    goto LAB_0043882c;
  }
  if (*(int *)PTR_wlan_idx_0046a93c == 0) {
    uVar8 = 0x120838;
    uVar6 = 0x8836;
  }
  else {
    uVar8 = 0x12084a;
    uVar6 = 0x8848;
  }
  local_2ac[0] = (char)unaff_s2 + -5;
  iVar3 = (*(code *)PTR_apmib_get_0046aadc)(uVar6,local_2ac);
  puVar1 = PTR_wlan_idx_0046a93c;
  if (iVar3 == 0) {
    pcVar2 = "Get table entry error!";
    goto LAB_0043882c;
  }
  (*(code *)PTR_memcpy_0046ab5c)(auStack_1d8,local_2ac,0xd4);
  (*(code *)PTR_sprintf_0046a808)(auStack_2e0,"method%d",*(undefined4 *)puVar1);
  pcVar2 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)(param_1,auStack_2e0,&DAT_0044b32c);
  uVar7 = (int)*pcVar2 - 0x30;
  if (uVar7 == 1) {
    (*(code *)PTR_sprintf_0046a808)(auStack_2e0,"length%d",*(undefined4 *)puVar1);
    pcVar2 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)(param_1,auStack_2e0,&DAT_0044b32c);
    if (*pcVar2 != '\0') {
      local_28b = (*(code *)PTR_atoi_0046a73c)(pcVar2);
    }
    (*(code *)PTR_sprintf_0046a808)(auStack_2e0,"format%d",*(undefined4 *)PTR_wlan_idx_0046a93c);
    pcVar2 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)(param_1,auStack_2e0,&DAT_0044b32c);
    if (*pcVar2 != '\0') {
      local_1da = (*(code *)PTR_atoi_0046a73c)(pcVar2);
      local_1da = local_1da + -1;
    }
    pcVar2 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)(param_1,"authType",&DAT_0044b32c);
    if (*pcVar2 != '\0') {
      iVar3 = (*(code *)PTR_strcmp_0046a824)(pcVar2,&DAT_00453708);
      if (iVar3 == 0) {
        local_28a = 0;
      }
      else {
        iVar3 = (*(code *)PTR_strcmp_0046a824)(pcVar2,"shared");
        local_28a = 1;
        if (iVar3 != 0) {
          local_28a = 2;
        }
      }
    }
    (*(code *)PTR_sprintf_0046a808)(auStack_2e0,"key%d",*(undefined4 *)PTR_wlan_idx_0046a93c);
    pcVar2 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)(param_1,auStack_2e0,&DAT_0044b32c);
    if (*pcVar2 != '\0') {
      local_30 = pcVar2;
      uVar7 = (*(code *)PTR_strlen_0046a714)(pcVar2);
      uVar5 = 0;
      do {
        pcVar2 = local_30 + uVar5;
        if (uVar7 <= uVar5) goto LAB_004387e4;
        uVar5 = uVar5 + 1;
      } while (*pcVar2 == '*');
      uVar6 = 10;
      if (local_28b != '\x01') {
        uVar6 = 0x1a;
      }
      if (local_1da == '\0') {
        (*(code *)PTR_strcpy_0046ac60)(auStack_2cc);
      }
      else {
        iVar3 = FUN_00434520(local_30,auStack_2cc,uVar6);
        if (iVar3 == 0) {
          pcVar2 = "Invalid wep-key value!";
          goto LAB_0043882c;
        }
      }
      if (local_28b == '\x01') {
        (*(code *)PTR_strncpy_0046a904)(auStack_246,auStack_2cc,10);
        (*(code *)PTR_strncpy_0046a904)(auStack_22b,auStack_2cc,10);
        (*(code *)PTR_strncpy_0046a904)(auStack_210,auStack_2cc,10);
        uVar6 = 10;
      }
      else {
        (*(code *)PTR_strncpy_0046a904)(auStack_246,auStack_2cc,0x1a);
        (*(code *)PTR_strncpy_0046a904)(auStack_22b,auStack_2cc,0x1a);
        (*(code *)PTR_strncpy_0046a904)(auStack_210,auStack_2cc,0x1a);
        uVar6 = 0x1a;
      }
      (*(code *)PTR_strncpy_0046a904)(auStack_1f5,auStack_2cc,uVar6);
    }
  }
  else {
    if (1 < uVar7) {
      local_28b = '\x03';
      if (uVar7 != 2) {
        local_28b = '\x04';
      }
      (*(code *)PTR_sprintf_0046a808)(auStack_2e0,"wpaAuth%d",*(undefined4 *)PTR_wlan_idx_0046a93c);
      pcVar2 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)
                                 (param_1,auStack_2e0,&DAT_0044b32c);
      if (*pcVar2 != '\0') {
        iVar3 = (*(code *)PTR_strcmp_0046a824)(pcVar2,&DAT_004549d0);
        if (iVar3 == 0) {
          pcVar2 = "Invalid wpaAuth value!";
          goto LAB_0043882c;
        }
        iVar3 = (*(code *)PTR_strcmp_0046a824)(pcVar2,&DAT_004549ec);
        if (iVar3 != 0) {
          pcVar2 = "Error! Invalid wpa authentication value.";
          goto LAB_0043882c;
        }
      }
      puVar1 = PTR_wlan_idx_0046a93c;
      (*(code *)PTR_sprintf_0046a808)
                (auStack_2e0,"ciphersuite%d",*(undefined4 *)PTR_wlan_idx_0046a93c);
      pcVar2 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)
                                 (param_1,auStack_2e0,&DAT_0044b32c);
      if (uVar7 == 2) {
        if (*pcVar2 != '\0') {
          iVar3 = (*(code *)PTR_strstr_0046a940)(pcVar2,&DAT_00453b30);
          iVar4 = (*(code *)PTR_strstr_0046a940)(pcVar2,&DAT_00453b38);
          if (iVar4 == 0) {
            if (iVar3 == 0) goto LAB_00438614;
            local_289 = 2;
          }
          else {
            if (iVar3 != 0) {
LAB_00438614:
              pcVar2 = "Invalid value of cipher suite!";
              goto LAB_0043882c;
            }
LAB_0043862c:
            local_289 = 8;
          }
        }
      }
      else if (uVar7 == 4) {
        (*(code *)PTR_sprintf_0046a808)(auStack_2e0,"wpa2ciphersuite%d",*(undefined4 *)puVar1);
        pcVar2 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)
                                   (param_1,auStack_2e0,&DAT_0044b32c);
        if (*pcVar2 != '\0') {
          iVar3 = (*(code *)PTR_strstr_0046a940)(pcVar2,&DAT_00453b30);
          iVar4 = (*(code *)PTR_strstr_0046a940)(pcVar2,&DAT_00453b38);
          if (iVar4 == 0) {
            if (iVar3 != 0) {
              local_289 = 2;
              goto LAB_00438630;
            }
          }
          else if (iVar3 == 0) goto LAB_0043862c;
          goto LAB_00438614;
        }
      }
LAB_00438630:
      puVar1 = PTR_wlan_idx_0046a93c;
      (*(code *)PTR_sprintf_0046a808)
                (auStack_2e0,"pskFormat%d",*(undefined4 *)PTR_wlan_idx_0046a93c);
      pcVar2 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)
                                 (param_1,auStack_2e0,&DAT_0044b32c);
      uVar7 = (int)*pcVar2 - 0x30;
      if (*pcVar2 == 0) {
        pcVar2 = "Error! no psk format.";
        goto LAB_0043882c;
      }
      if (1 < uVar7) {
        pcVar2 = "Error! invalid psk format.";
        goto LAB_0043882c;
      }
      (*(code *)PTR_sprintf_0046a808)(auStack_2e0,"pskValue%d",*(undefined4 *)puVar1);
      pcVar2 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)
                                 (param_1,auStack_2e0,&DAT_0044b32c);
      local_1d9 = (undefined1)uVar7;
      if (uVar7 == 1) {
        iVar3 = (*(code *)PTR_strlen_0046a714)(pcVar2);
        if (iVar3 == 0x40) {
          uVar7 = FUN_00434520(pcVar2,param_2,0x40);
LAB_00438758:
          if (uVar7 != 0) {
            (*(code *)PTR_strcpy_0046ac60)(auStack_288,pcVar2);
            goto LAB_004387e4;
          }
        }
      }
      else if (*pcVar2 != '\0') {
        uVar7 = (*(code *)PTR_strlen_0046a714)(pcVar2);
        uVar7 = (uint)(uVar7 < 0x40);
        goto LAB_00438758;
      }
      pcVar2 = "Error! invalid psk value.";
      goto LAB_0043882c;
    }
    (*(code *)PTR_strcpy_0046ac60)(auStack_2cc,local_2ac);
    (*(code *)PTR_memset_0046a87c)(local_2ac,0,0xd4);
    (*(code *)PTR_strcpy_0046ac60)(local_2ac,auStack_2cc);
    local_289 = 8;
  }
LAB_004387e4:
  (*(code *)PTR_memcpy_0046ab5c)(auStack_104,local_2ac,0xd4);
  iVar3 = (*(code *)PTR_apmib_set_0046aa28)(uVar8,auStack_1d8);
  if (iVar3 != 0) {
    return 0;
  }
  pcVar2 = "Modify table entry error!";
LAB_0043882c:
  (*(code *)PTR_strcpy_0046ac60)(param_2,pcVar2);
  return 0xffffffff;
}

