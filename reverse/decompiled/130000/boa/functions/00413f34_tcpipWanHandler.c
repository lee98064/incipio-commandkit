/* tcpipWanHandler @ 00413f34 */

undefined4 tcpipWanHandler(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  char cVar1;
  bool bVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined *puVar8;
  int iVar9;
  uint local_90;
  undefined1 auStack_8c [4];
  undefined1 auStack_88 [4];
  int local_84;
  int local_80;
  int local_7c;
  undefined1 auStack_78 [4];
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  undefined1 auStack_64 [4];
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  undefined auStack_48 [16];
  int local_38 [4];
  int local_28;
  
  pcVar3 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)(param_1,"lan_ip",&DAT_0044b32c);
  cVar1 = *pcVar3;
  pcVar3 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)
                             (param_1,"isPocketWizard",&DAT_0044b32c);
  bVar2 = cVar1 != '\0';
  if ((*pcVar3 != '\0') && (iVar4 = (*(code *)PTR_atoi_0046a73c)(pcVar3), iVar4 == 1)) {
    bVar2 = true;
  }
  iVar4 = (*(code *)PTR_req_get_cstream_var_0046a674)(param_1,"submit-url",&DAT_0044b32c);
  pcVar3 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)(param_1,"pppConnect",&DAT_0044b32c);
  if ((pcVar3 == (char *)0x0) || (*pcVar3 == '\0')) {
    pcVar3 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)
                               (param_1,"pppDisconnect",&DAT_0044b32c);
    if ((pcVar3 != (char *)0x0) && (*pcVar3 != '\0')) {
      pcVar3 = "ppp";
LAB_00418658:
      iVar9 = 2;
      goto LAB_00414770;
    }
    pcVar3 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)
                               (param_1,"pptpConnect",&DAT_0044b32c);
    if ((pcVar3 != (char *)0x0) && (*pcVar3 != '\0')) {
      pcVar3 = "pptp";
      goto LAB_004141b4;
    }
    pcVar3 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)
                               (param_1,"pptpDisconnect",&DAT_0044b32c);
    if ((pcVar3 != (char *)0x0) && (*pcVar3 != '\0')) {
      pcVar3 = "pptp";
      goto LAB_00418658;
    }
    pcVar3 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)
                               (param_1,"l2tpConnect",&DAT_0044b32c);
    if ((pcVar3 != (char *)0x0) && (*pcVar3 != '\0')) {
      pcVar3 = "l2tp";
      goto LAB_004141b4;
    }
    pcVar3 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)
                               (param_1,"l2tpDisconnect",&DAT_0044b32c);
    if ((pcVar3 != (char *)0x0) && (*pcVar3 != '\0')) {
      pcVar3 = "l2tp";
      goto LAB_00418658;
    }
    pcVar3 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)
                               (param_1,"USB3GConnect",&DAT_0044b32c);
    if ((pcVar3 != (char *)0x0) && (*pcVar3 != '\0')) {
      pcVar3 = "USB3G";
      goto LAB_004141b4;
    }
    pcVar3 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)
                               (param_1,"USB3GDisconnect",&DAT_0044b32c);
    if ((pcVar3 != (char *)0x0) && (*pcVar3 != '\0')) {
      pcVar3 = "USB3G";
      goto LAB_00418658;
    }
    pcVar3 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)
                               (param_1,"wan_macAddr",&DAT_0044b32c);
    if (*pcVar3 != '\0') {
      iVar9 = (*(code *)PTR_strlen_0046a714)(pcVar3);
      if ((iVar9 != 0xc) || (iVar9 = FUN_00413e1c(pcVar3,param_2), iVar9 == 0)) {
        (*(code *)PTR_strcpy_0046ac60)(param_2,"Error! Invalid MAC address.");
        return 0xffffffff;
      }
      iVar9 = (*(code *)PTR_apmib_set_0046aa28)(100,param_2);
      if (iVar9 == 0) {
        (*(code *)PTR_strcpy_0046ac60)(param_2,"Set MIB_WAN_MAC_ADDR mib error!");
        return 0xffffffff;
      }
    }
    pcVar3 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)(param_1,"dnsMode",&DAT_0044b32c);
    if ((pcVar3 != (char *)0x0) && (*pcVar3 != '\0')) {
      iVar9 = (*(code *)PTR_strcmp_0046a824)(pcVar3,"dnsAuto");
      if (iVar9 == 0) {
        local_6c = 0;
      }
      else {
        iVar9 = (*(code *)PTR_strcmp_0046a824)(pcVar3,"dnsManual");
        if (iVar9 != 0) {
          (*(code *)PTR_strcpy_0046ac60)(param_2,"Invalid DNS mode value!");
          return 0xffffffff;
        }
        local_6c = 1;
      }
      iVar9 = (*(code *)PTR_apmib_get_0046aadc)(0x69,&local_68);
      if (iVar9 == 0) {
        (*(code *)PTR_strcpy_0046ac60)(param_2,"Get DNS MIB error!");
        return 0xffffffff;
      }
      if (local_6c != local_68) {
        *param_3 = 1;
      }
      iVar9 = (*(code *)PTR_apmib_set_0046aa28)(0x69,&local_6c);
      if (iVar9 == 0) {
        (*(code *)PTR_strcpy_0046ac60)(param_2,"Set DNS MIB error!");
        return 0xffffffff;
      }
      if (local_6c == 1) {
        iVar9 = (*(code *)PTR_apmib_get_0046aadc)(0xb0,&local_5c);
        if (iVar9 == 0) {
          (*(code *)PTR_strcpy_0046ac60)(param_2,"Get DNS1 MIB error!");
          return 0xffffffff;
        }
        iVar9 = (*(code *)PTR_apmib_get_0046aadc)(0xb1,&local_58);
        if (iVar9 == 0) {
          (*(code *)PTR_strcpy_0046ac60)(param_2,"Get DNS1 MIB error!");
          return 0xffffffff;
        }
        iVar9 = (*(code *)PTR_apmib_get_0046aadc)(0xb2,local_38);
        if (iVar9 == 0) {
          (*(code *)PTR_strcpy_0046ac60)(param_2,"Get DNS1 MIB error!");
          return 0xffffffff;
        }
        pcVar3 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)(param_1,"dns1",&DAT_0044b32c);
        if (*pcVar3 == '\0') {
          iVar9 = (*(code *)PTR_apmib_get_0046aadc)(0xb0,&local_84);
          if (iVar9 == 0) {
            (*(code *)PTR_strcpy_0046ac60)(param_2,"Get DNS1 MIB error!");
            return 0xffffffff;
          }
        }
        else {
          iVar9 = (*(code *)PTR_inet_aton_0046a89c)(pcVar3,&local_84);
          if (iVar9 == 0) {
            (*(code *)PTR_strcpy_0046ac60)(param_2,"Invalid DNS address value!");
            return 0xffffffff;
          }
          iVar9 = (*(code *)PTR_apmib_set_0046aa28)(0xb0,&local_84);
          if (iVar9 == 0) {
            (*(code *)PTR_strcpy_0046ac60)(param_2,"Set DNS MIB error!");
            return 0xffffffff;
          }
        }
        pcVar3 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)(param_1,"dns2",&DAT_0044b32c);
        if (*pcVar3 == '\0') {
          iVar9 = (*(code *)PTR_apmib_get_0046aadc)(0xb1,&local_80);
          if (iVar9 == 0) {
            (*(code *)PTR_strcpy_0046ac60)(param_2,"Get DNS2 MIB error!");
            return 0xffffffff;
          }
        }
        else {
          iVar9 = (*(code *)PTR_inet_aton_0046a89c)(pcVar3,&local_80);
          if (iVar9 == 0) {
            (*(code *)PTR_strcpy_0046ac60)(param_2,"Invalid DNS address value!");
            return 0xffffffff;
          }
          iVar9 = (*(code *)PTR_apmib_set_0046aa28)(0xb1,&local_80);
          if (iVar9 == 0) {
            (*(code *)PTR_strcpy_0046ac60)(param_2,"Set DNS MIB error!");
            return 0xffffffff;
          }
        }
        pcVar3 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)(param_1,"dns3",&DAT_0044b32c);
        if (*pcVar3 == '\0') {
          iVar9 = (*(code *)PTR_apmib_get_0046aadc)(0xb2,&local_7c);
          if (iVar9 == 0) {
            (*(code *)PTR_strcpy_0046ac60)(param_2,"Get DNS3 MIB error!");
            return 0xffffffff;
          }
        }
        else {
          iVar9 = (*(code *)PTR_inet_aton_0046a89c)(pcVar3,&local_7c);
          if (iVar9 == 0) {
            (*(code *)PTR_strcpy_0046ac60)(param_2,"Invalid DNS address value!");
            return 0xffffffff;
          }
          iVar9 = (*(code *)PTR_apmib_set_0046aa28)(0xb2,&local_7c);
          if (iVar9 == 0) {
            (*(code *)PTR_strcpy_0046ac60)(param_2,"Set DNS MIB error!");
            return 0xffffffff;
          }
        }
        if (((local_84 != local_5c) || (local_80 != local_58)) || (local_7c != local_38[0])) {
          *param_3 = 1;
        }
      }
    }
    iVar9 = (*(code *)PTR_apmib_get_0046aadc)(0x68,&local_70);
    if (iVar9 == 0) {
      (*(code *)PTR_strcpy_0046ac60)(param_2,"Get WAN DHCP MIB error!");
      return 0xffffffff;
    }
    pcVar3 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)(param_1,"wanType",&DAT_0044b32c);
    if (pcVar3 != (char *)0x0) {
      iVar9 = 0;
      goto LAB_00414770;
    }
  }
  else {
    pcVar3 = "ppp";
LAB_004141b4:
    iVar9 = 1;
LAB_00414770:
    if (*pcVar3 != '\0') {
      iVar5 = (*(code *)PTR_strcmp_0046a824)(pcVar3,"autoIp");
      if (iVar5 == 0) {
        local_74 = 1;
      }
      else {
        iVar5 = (*(code *)PTR_strcmp_0046a824)(pcVar3,"fixedIp");
        if (iVar5 == 0) {
          local_74 = 0;
        }
        else {
          iVar5 = (*(code *)PTR_strcmp_0046a824)(pcVar3,&DAT_0044ca34);
          if (iVar5 == 0) {
            local_74 = 3;
            pcVar3 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)
                                       (param_1,"pppoeNumber",&DAT_0044b32c);
            local_4c = (*(code *)PTR_strtol_0046aa48)(pcVar3,0,10);
            if ((*pcVar3 != '\0') &&
               (iVar5 = (*(code *)PTR_apmib_set_0046aa28)(0x5db,&local_4c), iVar5 == 0)) {
              (*(code *)PTR_strcpy_0046ac60)(param_2,"Set PPPoE Number MIB error!");
              return 0xffffffff;
            }
            pcVar3 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)
                                       (param_1,"pppSubNet_1",&DAT_0044b32c);
            if ((*pcVar3 != '\0') &&
               (iVar5 = (*(code *)PTR_apmib_set_0046aa28)(0x614,pcVar3), iVar5 == 0)) {
              (*(code *)PTR_strcpy_0046ac60)(param_2,"Set PPPoE Number MIB error!");
              return 0xffffffff;
            }
            pcVar3 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)
                                       (param_1,"pppSubNet_2",&DAT_0044b32c);
            if ((*pcVar3 != '\0') &&
               (iVar5 = (*(code *)PTR_apmib_set_0046aa28)(0x615,pcVar3), iVar5 == 0)) {
              (*(code *)PTR_strcpy_0046ac60)(param_2,"Set PPPoE Number MIB error!");
              return 0xffffffff;
            }
            pcVar3 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)
                                       (param_1,"pppSubNet_3",&DAT_0044b32c);
            if ((*pcVar3 != '\0') &&
               (iVar5 = (*(code *)PTR_apmib_set_0046aa28)(0x616,pcVar3), iVar5 == 0)) {
              (*(code *)PTR_strcpy_0046ac60)(param_2,"Set PPPoE Number MIB error!");
              return 0xffffffff;
            }
            pcVar3 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)
                                       (param_1,"pppSubNet_4",&DAT_0044b32c);
            if ((*pcVar3 != '\0') &&
               (iVar5 = (*(code *)PTR_apmib_set_0046aa28)(0x617,pcVar3), iVar5 == 0)) {
              (*(code *)PTR_strcpy_0046ac60)(param_2,"Set PPPoE Number MIB error!");
              return 0xffffffff;
            }
            pcVar3 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)
                                       (param_1,"pppSubNet1",&DAT_0044b32c);
            local_4c = (*(code *)PTR_strtol_0046aa48)(pcVar3,0,10);
            if ((*pcVar3 != '\0') &&
               (iVar5 = (*(code *)PTR_apmib_set_0046aa28)(0x5f8,&local_4c), iVar5 == 0)) {
              (*(code *)PTR_strcpy_0046ac60)(param_2,"Set PPPoE Number MIB error!");
              return 0xffffffff;
            }
            pcVar3 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)
                                       (param_1,"pppSubNet2",&DAT_0044b32c);
            local_4c = (*(code *)PTR_strtol_0046aa48)(pcVar3,0,10);
            if ((*pcVar3 != '\0') &&
               (iVar5 = (*(code *)PTR_apmib_set_0046aa28)(0x5ff,&local_4c), iVar5 == 0)) {
              (*(code *)PTR_strcpy_0046ac60)(param_2,"Set PPPoE Number MIB error!");
              return 0xffffffff;
            }
            pcVar3 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)
                                       (param_1,"pppSubNet3",&DAT_0044b32c);
            local_4c = (*(code *)PTR_strtol_0046aa48)(pcVar3,0,10);
            if ((*pcVar3 != '\0') &&
               (iVar5 = (*(code *)PTR_apmib_set_0046aa28)(0x606,&local_4c), iVar5 == 0)) {
              (*(code *)PTR_strcpy_0046ac60)(param_2,"Set PPPoE Number MIB error!");
              return 0xffffffff;
            }
            pcVar3 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)
                                       (param_1,"pppSubNet4",&DAT_0044b32c);
            local_4c = (*(code *)PTR_strtol_0046aa48)(pcVar3,0,10);
            if ((*pcVar3 != '\0') &&
               (iVar5 = (*(code *)PTR_apmib_set_0046aa28)(0x60d,&local_4c), iVar5 == 0)) {
              (*(code *)PTR_strcpy_0046ac60)(param_2,"Set PPPoE Number MIB error!");
              return 0xffffffff;
            }
            pcVar3 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)
                                       (param_1,"S1_F1_start",&DAT_0044b32c);
            if (*pcVar3 != '\0') {
              iVar5 = (*(code *)PTR_inet_aton_0046a89c)(pcVar3,local_38);
              if (iVar5 == 0) {
                (*(code *)PTR_strcpy_0046ac60)(param_2,"Invalid subnet-mask value!");
                return 0xffffffff;
              }
              iVar5 = (*(code *)PTR_apmib_set_0046aa28)(0x5f9,local_38);
              if (iVar5 == 0) {
                (*(code *)PTR_strcpy_0046ac60)(param_2,"Set subnet-mask error!");
                return 0xffffffff;
              }
            }
            pcVar3 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)
                                       (param_1,"S1_F1_end",&DAT_0044b32c);
            if (*pcVar3 != '\0') {
              iVar5 = (*(code *)PTR_inet_aton_0046a89c)(pcVar3,local_38);
              if (iVar5 == 0) {
                (*(code *)PTR_strcpy_0046ac60)(param_2,"Invalid subnet-mask value!");
                return 0xffffffff;
              }
              iVar5 = (*(code *)PTR_apmib_set_0046aa28)(0x5fa,local_38);
              if (iVar5 == 0) {
                (*(code *)PTR_strcpy_0046ac60)(param_2,"Set subnet-mask error!");
                return 0xffffffff;
              }
            }
            pcVar3 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)
                                       (param_1,"S1_F2_start",&DAT_0044b32c);
            if (*pcVar3 != '\0') {
              iVar5 = (*(code *)PTR_inet_aton_0046a89c)(pcVar3,local_38);
              if (iVar5 == 0) {
                (*(code *)PTR_strcpy_0046ac60)(param_2,"Invalid subnet-mask value!");
                return 0xffffffff;
              }
              iVar5 = (*(code *)PTR_apmib_set_0046aa28)(0x5fb,local_38);
              if (iVar5 == 0) {
                (*(code *)PTR_strcpy_0046ac60)(param_2,"Set subnet-mask error!");
                return 0xffffffff;
              }
            }
            pcVar3 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)
                                       (param_1,"S1_F2_end",&DAT_0044b32c);
            if (*pcVar3 != '\0') {
              iVar5 = (*(code *)PTR_inet_aton_0046a89c)(pcVar3,local_38);
              if (iVar5 == 0) {
                (*(code *)PTR_strcpy_0046ac60)(param_2,"Invalid subnet-mask value!");
                return 0xffffffff;
              }
              iVar5 = (*(code *)PTR_apmib_set_0046aa28)(0x5fc,local_38);
              if (iVar5 == 0) {
                (*(code *)PTR_strcpy_0046ac60)(param_2,"Set subnet-mask error!");
                return 0xffffffff;
              }
            }
            pcVar3 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)
                                       (param_1,"S1_F3_start",&DAT_0044b32c);
            if (*pcVar3 != '\0') {
              iVar5 = (*(code *)PTR_inet_aton_0046a89c)(pcVar3,local_38);
              if (iVar5 == 0) {
                (*(code *)PTR_strcpy_0046ac60)(param_2,"Invalid subnet-mask value!");
                return 0xffffffff;
              }
              iVar5 = (*(code *)PTR_apmib_set_0046aa28)(0x5fd,local_38);
              if (iVar5 == 0) {
                (*(code *)PTR_strcpy_0046ac60)(param_2,"Set subnet-mask error!");
                return 0xffffffff;
              }
            }
            pcVar3 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)
                                       (param_1,"S1_F3_end",&DAT_0044b32c);
            if (*pcVar3 != '\0') {
              iVar5 = (*(code *)PTR_inet_aton_0046a89c)(pcVar3,local_38);
              if (iVar5 == 0) {
                (*(code *)PTR_strcpy_0046ac60)(param_2,"Invalid subnet-mask value!");
                return 0xffffffff;
              }
              iVar5 = (*(code *)PTR_apmib_set_0046aa28)(0x5fe,local_38);
              if (iVar5 == 0) {
                (*(code *)PTR_strcpy_0046ac60)(param_2,"Set subnet-mask error!");
                return 0xffffffff;
              }
            }
            pcVar3 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)
                                       (param_1,"S2_F1_start",&DAT_0044b32c);
            if (*pcVar3 != '\0') {
              iVar5 = (*(code *)PTR_inet_aton_0046a89c)(pcVar3,local_38);
              if (iVar5 == 0) {
                (*(code *)PTR_strcpy_0046ac60)(param_2,"Invalid subnet-mask value!");
                return 0xffffffff;
              }
              iVar5 = (*(code *)PTR_apmib_set_0046aa28)(0x600,local_38);
              if (iVar5 == 0) {
                (*(code *)PTR_strcpy_0046ac60)(param_2,"Set subnet-mask error!");
                return 0xffffffff;
              }
            }
            pcVar3 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)
                                       (param_1,"S2_F1_end",&DAT_0044b32c);
            if (*pcVar3 != '\0') {
              iVar5 = (*(code *)PTR_inet_aton_0046a89c)(pcVar3,local_38);
              if (iVar5 == 0) {
                (*(code *)PTR_strcpy_0046ac60)(param_2,"Invalid subnet-mask value!");
                return 0xffffffff;
              }
              iVar5 = (*(code *)PTR_apmib_set_0046aa28)(0x601,local_38);
              if (iVar5 == 0) {
                (*(code *)PTR_strcpy_0046ac60)(param_2,"Set subnet-mask error!");
                return 0xffffffff;
              }
            }
            pcVar3 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)
                                       (param_1,"S2_F2_start",&DAT_0044b32c);
            if (*pcVar3 != '\0') {
              iVar5 = (*(code *)PTR_inet_aton_0046a89c)(pcVar3,local_38);
              if (iVar5 == 0) {
                (*(code *)PTR_strcpy_0046ac60)(param_2,"Invalid subnet-mask value!");
                return 0xffffffff;
              }
              iVar5 = (*(code *)PTR_apmib_set_0046aa28)(0x602,local_38);
              if (iVar5 == 0) {
                (*(code *)PTR_strcpy_0046ac60)(param_2,"Set subnet-mask error!");
                return 0xffffffff;
              }
            }
            pcVar3 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)
                                       (param_1,"S2_F2_end",&DAT_0044b32c);
            if (*pcVar3 != '\0') {
              iVar5 = (*(code *)PTR_inet_aton_0046a89c)(pcVar3,local_38);
              if (iVar5 == 0) {
                (*(code *)PTR_strcpy_0046ac60)(param_2,"Invalid subnet-mask value!");
                return 0xffffffff;
              }
              iVar5 = (*(code *)PTR_apmib_set_0046aa28)(0x603,local_38);
              if (iVar5 == 0) {
                (*(code *)PTR_strcpy_0046ac60)(param_2,"Set subnet-mask error!");
                return 0xffffffff;
              }
            }
            pcVar3 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)
                                       (param_1,"S2_F3_start",&DAT_0044b32c);
            if (*pcVar3 != '\0') {
              iVar5 = (*(code *)PTR_inet_aton_0046a89c)(pcVar3,local_38);
              if (iVar5 == 0) {
                (*(code *)PTR_strcpy_0046ac60)(param_2,"Invalid subnet-mask value!");
                return 0xffffffff;
              }
              iVar5 = (*(code *)PTR_apmib_set_0046aa28)(0x604,local_38);
              if (iVar5 == 0) {
                (*(code *)PTR_strcpy_0046ac60)(param_2,"Set subnet-mask error!");
                return 0xffffffff;
              }
            }
            pcVar3 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)
                                       (param_1,"S2_F3_end",&DAT_0044b32c);
            if (*pcVar3 != '\0') {
              iVar5 = (*(code *)PTR_inet_aton_0046a89c)(pcVar3,local_38);
              if (iVar5 == 0) {
                (*(code *)PTR_strcpy_0046ac60)(param_2,"Invalid subnet-mask value!");
                return 0xffffffff;
              }
              iVar5 = (*(code *)PTR_apmib_set_0046aa28)(0x605,local_38);
              if (iVar5 == 0) {
                (*(code *)PTR_strcpy_0046ac60)(param_2,"Set subnet-mask error!");
                return 0xffffffff;
              }
            }
            pcVar3 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)
                                       (param_1,"S3_F1_start",&DAT_0044b32c);
            if (*pcVar3 != '\0') {
              iVar5 = (*(code *)PTR_inet_aton_0046a89c)(pcVar3,local_38);
              if (iVar5 == 0) {
                (*(code *)PTR_strcpy_0046ac60)(param_2,"Invalid subnet-mask value!");
                return 0xffffffff;
              }
              iVar5 = (*(code *)PTR_apmib_set_0046aa28)(0x607,local_38);
              if (iVar5 == 0) {
                (*(code *)PTR_strcpy_0046ac60)(param_2,"Set subnet-mask error!");
                return 0xffffffff;
              }
            }
            pcVar3 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)
                                       (param_1,"S3_F1_end",&DAT_0044b32c);
            if (*pcVar3 != '\0') {
              iVar5 = (*(code *)PTR_inet_aton_0046a89c)(pcVar3,local_38);
              if (iVar5 == 0) {
                (*(code *)PTR_strcpy_0046ac60)(param_2,"Invalid subnet-mask value!");
                return 0xffffffff;
              }
              iVar5 = (*(code *)PTR_apmib_set_0046aa28)(0x608,local_38);
              if (iVar5 == 0) {
                (*(code *)PTR_strcpy_0046ac60)(param_2,"Set subnet-mask error!");
                return 0xffffffff;
              }
            }
            pcVar3 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)
                                       (param_1,"S3_F2_start",&DAT_0044b32c);
            if (*pcVar3 != '\0') {
              iVar5 = (*(code *)PTR_inet_aton_0046a89c)(pcVar3,local_38);
              if (iVar5 == 0) {
                (*(code *)PTR_strcpy_0046ac60)(param_2,"Invalid subnet-mask value!");
                return 0xffffffff;
              }
              iVar5 = (*(code *)PTR_apmib_set_0046aa28)(0x609,local_38);
              if (iVar5 == 0) {
                (*(code *)PTR_strcpy_0046ac60)(param_2,"Set subnet-mask error!");
                return 0xffffffff;
              }
            }
            pcVar3 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)
                                       (param_1,"S3_F2_end",&DAT_0044b32c);
            if (*pcVar3 != '\0') {
              iVar5 = (*(code *)PTR_inet_aton_0046a89c)(pcVar3,local_38);
              if (iVar5 == 0) {
                (*(code *)PTR_strcpy_0046ac60)(param_2,"Invalid subnet-mask value!");
                return 0xffffffff;
              }
              iVar5 = (*(code *)PTR_apmib_set_0046aa28)(0x60a,local_38);
              if (iVar5 == 0) {
                (*(code *)PTR_strcpy_0046ac60)(param_2,"Set subnet-mask error!");
                return 0xffffffff;
              }
            }
            pcVar3 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)
                                       (param_1,"S3_F3_start",&DAT_0044b32c);
            if (*pcVar3 != '\0') {
              iVar5 = (*(code *)PTR_inet_aton_0046a89c)(pcVar3,local_38);
              if (iVar5 == 0) {
                (*(code *)PTR_strcpy_0046ac60)(param_2,"Invalid subnet-mask value!");
                return 0xffffffff;
              }
              iVar5 = (*(code *)PTR_apmib_set_0046aa28)(0x60b,local_38);
              if (iVar5 == 0) {
                (*(code *)PTR_strcpy_0046ac60)(param_2,"Set subnet-mask error!");
                return 0xffffffff;
              }
            }
            pcVar3 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)
                                       (param_1,"S3_F3_end",&DAT_0044b32c);
            if (*pcVar3 != '\0') {
              iVar5 = (*(code *)PTR_inet_aton_0046a89c)(pcVar3,local_38);
              if (iVar5 == 0) {
                (*(code *)PTR_strcpy_0046ac60)(param_2,"Invalid subnet-mask value!");
                return 0xffffffff;
              }
              iVar5 = (*(code *)PTR_apmib_set_0046aa28)(0x60c,local_38);
              if (iVar5 == 0) {
                (*(code *)PTR_strcpy_0046ac60)(param_2,"Set subnet-mask error!");
                return 0xffffffff;
              }
            }
            pcVar3 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)
                                       (param_1,"S4_F1_start",&DAT_0044b32c);
            if (*pcVar3 != '\0') {
              iVar5 = (*(code *)PTR_inet_aton_0046a89c)(pcVar3,local_38);
              if (iVar5 == 0) {
                (*(code *)PTR_strcpy_0046ac60)(param_2,"Invalid subnet-mask value!");
                return 0xffffffff;
              }
              iVar5 = (*(code *)PTR_apmib_set_0046aa28)(0x60e,local_38);
              if (iVar5 == 0) {
                (*(code *)PTR_strcpy_0046ac60)(param_2,"Set subnet-mask error!");
                return 0xffffffff;
              }
            }
            pcVar3 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)
                                       (param_1,"S4_F1_end",&DAT_0044b32c);
            if (*pcVar3 != '\0') {
              iVar5 = (*(code *)PTR_inet_aton_0046a89c)(pcVar3,local_38);
              if (iVar5 == 0) {
                (*(code *)PTR_strcpy_0046ac60)(param_2,"Invalid subnet-mask value!");
                return 0xffffffff;
              }
              iVar5 = (*(code *)PTR_apmib_set_0046aa28)(0x60f,local_38);
              if (iVar5 == 0) {
                (*(code *)PTR_strcpy_0046ac60)(param_2,"Set subnet-mask error!");
                return 0xffffffff;
              }
            }
            pcVar3 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)
                                       (param_1,"S4_F2_start",&DAT_0044b32c);
            if (*pcVar3 != '\0') {
              iVar5 = (*(code *)PTR_inet_aton_0046a89c)(pcVar3,local_38);
              if (iVar5 == 0) {
                (*(code *)PTR_strcpy_0046ac60)(param_2,"Invalid subnet-mask value!");
                return 0xffffffff;
              }
              iVar5 = (*(code *)PTR_apmib_set_0046aa28)(0x610,local_38);
              if (iVar5 == 0) {
                (*(code *)PTR_strcpy_0046ac60)(param_2,"Set subnet-mask error!");
                return 0xffffffff;
              }
            }
            pcVar3 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)
                                       (param_1,"S4_F2_end",&DAT_0044b32c);
            if (*pcVar3 != '\0') {
              iVar5 = (*(code *)PTR_inet_aton_0046a89c)(pcVar3,local_38);
              if (iVar5 == 0) {
                (*(code *)PTR_strcpy_0046ac60)(param_2,"Invalid subnet-mask value!");
                return 0xffffffff;
              }
              iVar5 = (*(code *)PTR_apmib_set_0046aa28)(0x611,local_38);
              if (iVar5 == 0) {
                (*(code *)PTR_strcpy_0046ac60)(param_2,"Set subnet-mask error!");
                return 0xffffffff;
              }
            }
            pcVar3 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)
                                       (param_1,"S4_F3_start",&DAT_0044b32c);
            if (*pcVar3 != '\0') {
              iVar5 = (*(code *)PTR_inet_aton_0046a89c)(pcVar3,local_38);
              if (iVar5 == 0) {
                (*(code *)PTR_strcpy_0046ac60)(param_2,"Invalid subnet-mask value!");
                return 0xffffffff;
              }
              iVar5 = (*(code *)PTR_apmib_set_0046aa28)(0x612,local_38);
              if (iVar5 == 0) {
                (*(code *)PTR_strcpy_0046ac60)(param_2,"Set subnet-mask error!");
                return 0xffffffff;
              }
            }
            pcVar3 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)
                                       (param_1,"S4_F3_end",&DAT_0044b32c);
            if (*pcVar3 != '\0') {
              iVar5 = (*(code *)PTR_inet_aton_0046a89c)(pcVar3,local_38);
              if (iVar5 == 0) {
                (*(code *)PTR_strcpy_0046ac60)(param_2,"Invalid subnet-mask value!");
                return 0xffffffff;
              }
              iVar5 = (*(code *)PTR_apmib_set_0046aa28)(0x613,local_38);
              if (iVar5 == 0) {
                (*(code *)PTR_strcpy_0046ac60)(param_2,"Set subnet-mask error!");
                return 0xffffffff;
              }
            }
            pcVar3 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)
                                       (param_1,"pppUserName",&DAT_0044b32c);
            if ((*pcVar3 != '\0') &&
               (iVar5 = (*(code *)PTR_apmib_set_0046aa28)(0x6a,pcVar3), iVar5 == 0)) {
              (*(code *)PTR_strcpy_0046ac60)(param_2,"Set PPP user name MIB error!");
              return 0xffffffff;
            }
            pcVar3 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)
                                       (param_1,"pppPassword",&DAT_0044b32c);
            if ((*pcVar3 != '\0') &&
               (iVar5 = (*(code *)PTR_apmib_set_0046aa28)(0x6b,pcVar3), iVar5 == 0)) {
              (*(code *)PTR_strcpy_0046ac60)(param_2,"Set PPP user password MIB error!");
              return 0xffffffff;
            }
            pcVar3 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)
                                       (param_1,"pppUserName2",&DAT_0044b32c);
            if ((*pcVar3 != '\0') &&
               (iVar5 = (*(code *)PTR_apmib_set_0046aa28)(0x5dc,pcVar3), iVar5 == 0)) {
              (*(code *)PTR_strcpy_0046ac60)(param_2,"Set PPP user name MIB error!");
              return 0xffffffff;
            }
            pcVar3 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)
                                       (param_1,"pppPassword2",&DAT_0044b32c);
            if ((*pcVar3 != '\0') &&
               (iVar5 = (*(code *)PTR_apmib_set_0046aa28)(0x5dd,pcVar3), iVar5 == 0)) {
              (*(code *)PTR_strcpy_0046ac60)(param_2,"Set PPP user password MIB error!");
              return 0xffffffff;
            }
            pcVar3 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)
                                       (param_1,"pppUserName3",&DAT_0044b32c);
            if ((*pcVar3 != '\0') &&
               (iVar5 = (*(code *)PTR_apmib_set_0046aa28)(0x5de,pcVar3), iVar5 == 0)) {
              (*(code *)PTR_strcpy_0046ac60)(param_2,"Set PPP user name MIB error!");
              return 0xffffffff;
            }
            pcVar3 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)
                                       (param_1,"pppPassword3",&DAT_0044b32c);
            if ((*pcVar3 != '\0') &&
               (iVar5 = (*(code *)PTR_apmib_set_0046aa28)(0x5df,pcVar3), iVar5 == 0)) {
              (*(code *)PTR_strcpy_0046ac60)(param_2,"Set PPP user password MIB error!");
              return 0xffffffff;
            }
            pcVar3 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)
                                       (param_1,"pppUserName4",&DAT_0044b32c);
            if ((*pcVar3 != '\0') &&
               (iVar5 = (*(code *)PTR_apmib_set_0046aa28)(0x5e0,pcVar3), iVar5 == 0)) {
              (*(code *)PTR_strcpy_0046ac60)(param_2,"Set PPP user name MIB error!");
              return 0xffffffff;
            }
            pcVar3 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)
                                       (param_1,"pppPassword4",&DAT_0044b32c);
            if ((*pcVar3 != '\0') &&
               (iVar5 = (*(code *)PTR_apmib_set_0046aa28)(0x5e1,pcVar3), iVar5 == 0)) {
              (*(code *)PTR_strcpy_0046ac60)(param_2,"Set PPP user password MIB error!");
              return 0xffffffff;
            }
            pcVar3 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)
                                       (param_1,"pppServiceName",&DAT_0044b32c);
            if (*pcVar3 == '\0') {
              iVar5 = (*(code *)PTR_apmib_set_0046aa28)(0x105,&DAT_0044b32c);
              if (iVar5 == 0) {
                (*(code *)PTR_strcpy_0046ac60)(param_2,"Set PPP serice name MIB error!");
                return 0xffffffff;
              }
            }
            else {
              iVar5 = (*(code *)PTR_apmib_set_0046aa28)(0x105,pcVar3);
              if (iVar5 == 0) {
                (*(code *)PTR_strcpy_0046ac60)(param_2,"Set PPP serice name MIB error!");
                return 0xffffffff;
              }
            }
            pcVar3 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)
                                       (param_1,"pppServiceName2",&DAT_0044b32c);
            if (*pcVar3 == '\0') {
              iVar5 = (*(code *)PTR_apmib_set_0046aa28)(0x5e2,&DAT_0044b32c);
              if (iVar5 == 0) {
                (*(code *)PTR_strcpy_0046ac60)(param_2,"Set PPP serice name MIB error!");
                return 0xffffffff;
              }
            }
            else {
              iVar5 = (*(code *)PTR_apmib_set_0046aa28)(0x5e2,pcVar3);
              if (iVar5 == 0) {
                (*(code *)PTR_strcpy_0046ac60)(param_2,"Set PPP serice name MIB error!");
                return 0xffffffff;
              }
            }
            pcVar3 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)
                                       (param_1,"pppServiceName3",&DAT_0044b32c);
            if (*pcVar3 == '\0') {
              iVar5 = (*(code *)PTR_apmib_set_0046aa28)(0x5e3,&DAT_0044b32c);
              if (iVar5 == 0) {
                (*(code *)PTR_strcpy_0046ac60)(param_2,"Set PPP serice name MIB error!");
                return 0xffffffff;
              }
            }
            else {
              iVar5 = (*(code *)PTR_apmib_set_0046aa28)(0x5e3,pcVar3);
              if (iVar5 == 0) {
                (*(code *)PTR_strcpy_0046ac60)(param_2,"Set PPP serice name MIB error!");
                return 0xffffffff;
              }
            }
            pcVar3 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)
                                       (param_1,"pppServiceName4",&DAT_0044b32c);
            if (*pcVar3 == '\0') {
              iVar5 = (*(code *)PTR_apmib_set_0046aa28)(0x5e4,&DAT_0044b32c);
              if (iVar5 == 0) {
                (*(code *)PTR_strcpy_0046ac60)(param_2,"Set PPP serice name MIB error!");
                return 0xffffffff;
              }
            }
            else {
              iVar5 = (*(code *)PTR_apmib_set_0046aa28)(0x5e4,pcVar3);
              if (iVar5 == 0) {
                (*(code *)PTR_strcpy_0046ac60)(param_2,"Set PPP serice name MIB error!");
                return 0xffffffff;
              }
            }
            pcVar3 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)
                                       (param_1,"pppConnectType",&DAT_0044b32c);
            cVar1 = *pcVar3;
            if (cVar1 != '\0') {
              if (cVar1 == '0') {
                local_54 = 0;
              }
              else if (cVar1 == '1') {
                local_54 = 1;
              }
              else {
                if (cVar1 != '2') {
                  (*(code *)PTR_strcpy_0046ac60)(param_2,"Invalid PPP type value!");
                  return 0xffffffff;
                }
                local_54 = 2;
              }
              iVar5 = (*(code *)PTR_apmib_set_0046aa28)(0x6d,&local_54);
              if (iVar5 == 0) {
                (*(code *)PTR_strcpy_0046ac60)(param_2,"Set PPP type MIB error!");
                return 0xffffffff;
              }
              if ((local_54 != 0) &&
                 (pcVar3 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)
                                             (param_1,"pppIdleTime",&DAT_0044b32c), *pcVar3 != '\0')
                 ) {
                local_50 = (*(code *)PTR_strtol_0046aa48)(pcVar3,0,10);
                local_50 = local_50 * 0x3c;
                iVar5 = (*(code *)PTR_apmib_set_0046aa28)(0x6c,&local_50);
                if (iVar5 == 0) {
                  (*(code *)PTR_strcpy_0046ac60)(param_2,"Set PPP idle time MIB error!");
                  return 0xffffffff;
                }
              }
            }
            pcVar3 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)
                                       (param_1,"pppConnectType2",&DAT_0044b32c);
            cVar1 = *pcVar3;
            if (cVar1 != '\0') {
              if (cVar1 == '0') {
                local_50 = 0;
              }
              else if (cVar1 == '1') {
                local_50 = 1;
              }
              else {
                if (cVar1 != '2') {
                  (*(code *)PTR_strcpy_0046ac60)(param_2,"Invalid PPP type value!");
                  return 0xffffffff;
                }
                local_50 = 2;
              }
              iVar5 = (*(code *)PTR_apmib_set_0046aa28)(0x5e6,&local_50);
              if (iVar5 == 0) {
                (*(code *)PTR_strcpy_0046ac60)(param_2,"Set PPP type MIB error!");
                return 0xffffffff;
              }
              if ((local_50 != 0) &&
                 (pcVar3 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)
                                             (param_1,"pppIdleTime2",&DAT_0044b32c), *pcVar3 != '\0'
                 )) {
                local_54 = (*(code *)PTR_strtol_0046aa48)(pcVar3,0,10);
                local_54 = local_54 * 0x3c;
                iVar5 = (*(code *)PTR_apmib_set_0046aa28)(0x5e5,&local_54);
                if (iVar5 == 0) {
                  (*(code *)PTR_strcpy_0046ac60)(param_2,"Set PPP idle time MIB error!");
                  return 0xffffffff;
                }
              }
            }
            pcVar3 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)
                                       (param_1,"pppConnectType3",&DAT_0044b32c);
            cVar1 = *pcVar3;
            if (cVar1 != '\0') {
              if (cVar1 == '0') {
                local_54 = 0;
              }
              else if (cVar1 == '1') {
                local_54 = 1;
              }
              else {
                if (cVar1 != '2') {
                  (*(code *)PTR_strcpy_0046ac60)(param_2,"Invalid PPP type value!");
                  return 0xffffffff;
                }
                local_54 = 2;
              }
              iVar5 = (*(code *)PTR_apmib_set_0046aa28)(0x5e8,&local_54);
              if (iVar5 == 0) {
                (*(code *)PTR_strcpy_0046ac60)(param_2,"Set PPP type MIB error!");
                return 0xffffffff;
              }
              if ((local_54 != 0) &&
                 (pcVar3 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)
                                             (param_1,"pppIdleTime3",&DAT_0044b32c), *pcVar3 != '\0'
                 )) {
                local_50 = (*(code *)PTR_strtol_0046aa48)(pcVar3,0,10);
                local_50 = local_50 * 0x3c;
                iVar5 = (*(code *)PTR_apmib_set_0046aa28)(0x5e7,&local_50);
                if (iVar5 == 0) {
                  (*(code *)PTR_strcpy_0046ac60)(param_2,"Set PPP idle time MIB error!");
                  return 0xffffffff;
                }
              }
            }
            pcVar3 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)
                                       (param_1,"pppConnectType4",&DAT_0044b32c);
            cVar1 = *pcVar3;
            if (cVar1 != '\0') {
              if (cVar1 == '0') {
                local_50 = 0;
              }
              else if (cVar1 == '1') {
                local_50 = 1;
              }
              else {
                if (cVar1 != '2') {
                  (*(code *)PTR_strcpy_0046ac60)(param_2,"Invalid PPP type value!");
                  return 0xffffffff;
                }
                local_50 = 2;
              }
              iVar5 = (*(code *)PTR_apmib_set_0046aa28)(0x5ea,&local_50);
              if (iVar5 == 0) {
                (*(code *)PTR_strcpy_0046ac60)(param_2,"Set PPP type MIB error!");
                return 0xffffffff;
              }
              if ((local_50 != 0) &&
                 (pcVar3 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)
                                             (param_1,"pppIdleTime4",&DAT_0044b32c), *pcVar3 != '\0'
                 )) {
                local_54 = (*(code *)PTR_strtol_0046aa48)(pcVar3,0,10);
                local_54 = local_54 * 0x3c;
                iVar5 = (*(code *)PTR_apmib_set_0046aa28)(0x5e9,&local_54);
                if (iVar5 == 0) {
                  (*(code *)PTR_strcpy_0046ac60)(param_2,"Set PPP idle time MIB error!");
                  return 0xffffffff;
                }
              }
            }
            pcVar3 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)
                                       (param_1,"pppMtuSize",&DAT_0044b32c);
            if (*pcVar3 != '\0') {
              local_54 = (*(code *)PTR_strtol_0046aa48)(pcVar3,0,10);
              iVar5 = (*(code *)PTR_apmib_set_0046aa28)(0x90,&local_54);
              if (iVar5 == 0) {
                (*(code *)PTR_strcpy_0046ac60)(param_2,"Set PPP mtu size MIB error!");
                return 0xffffffff;
              }
            }
            pcVar3 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)
                                       (param_1,"pppMtuSize2",&DAT_0044b32c);
            if (*pcVar3 != '\0') {
              local_54 = (*(code *)PTR_strtol_0046aa48)(pcVar3,0,10);
              iVar5 = (*(code *)PTR_apmib_set_0046aa28)(0x5eb,&local_54);
              if (iVar5 == 0) {
                (*(code *)PTR_strcpy_0046ac60)(param_2,"Set PPP mtu size MIB error!");
                return 0xffffffff;
              }
            }
            pcVar3 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)
                                       (param_1,"pppMtuSize3",&DAT_0044b32c);
            if (*pcVar3 != '\0') {
              local_54 = (*(code *)PTR_strtol_0046aa48)(pcVar3,0,10);
              iVar5 = (*(code *)PTR_apmib_set_0046aa28)(0x5ec,&local_54);
              if (iVar5 == 0) {
                (*(code *)PTR_strcpy_0046ac60)(param_2,"Set PPP mtu size MIB error!");
                return 0xffffffff;
              }
            }
            pcVar3 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)
                                       (param_1,"pppMtuSize4",&DAT_0044b32c);
            if (*pcVar3 != '\0') {
              local_54 = (*(code *)PTR_strtol_0046aa48)(pcVar3,0,10);
              iVar5 = (*(code *)PTR_apmib_set_0046aa28)(0x5ed,&local_54);
              if (iVar5 == 0) {
                (*(code *)PTR_strcpy_0046ac60)(param_2,"Set PPP mtu size MIB error!");
                return 0xffffffff;
              }
            }
          }
          else {
            iVar5 = (*(code *)PTR_strcmp_0046a824)(pcVar3,&DAT_0044ca54);
            if (iVar5 == 0) {
              local_74 = 4;
              pcVar3 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)
                                         (param_1,"pptpUserName",&DAT_0044b32c);
              if ((*pcVar3 != '\0') &&
                 (iVar5 = (*(code *)PTR_apmib_set_0046aa28)(0x94,pcVar3), iVar5 == 0)) {
                (*(code *)PTR_strcpy_0046ac60)(param_2,"Set PPTP user name MIB error!");
                return 0xffffffff;
              }
              pcVar3 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)
                                         (param_1,"pptpPassword",&DAT_0044b32c);
              if ((*pcVar3 != '\0') &&
                 (iVar5 = (*(code *)PTR_apmib_set_0046aa28)(0x95,pcVar3), iVar5 == 0)) {
                (*(code *)PTR_strcpy_0046ac60)(param_2,"Set PPTP user password MIB error!");
                return 0xffffffff;
              }
              pcVar3 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)
                                         (param_1,"wan_pptp_use_dynamic_carrier_radio",&DAT_0044b32c
                                         );
              if (*pcVar3 != '\0') {
                iVar5 = (*(code *)PTR_strcmp_0046a824)(pcVar3,"dynamicIP");
                if (iVar5 == 0) {
                  local_60 = 0;
                }
                else {
                  iVar5 = (*(code *)PTR_strcmp_0046a824)(pcVar3,"staticIP");
                  if (iVar5 != 0) {
                    (*(code *)PTR_strcpy_0046ac60)(param_2,"Invalid PPTP wan IP type!");
                    return 0xffffffff;
                  }
                  local_60 = 1;
                }
                iVar5 = (*(code *)PTR_apmib_set_0046aa28)(0x155,&local_60);
                if (iVar5 == 0) {
                  (*(code *)PTR_strcpy_0046ac60)(param_2,"Set MIB_PPTP_WAN_IP_DYNAMIC error!");
                  return 0xffffffff;
                }
              }
              pcVar3 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)
                                         (param_1,"pptpDefGw",&DAT_0044b32c);
              if (*pcVar3 != '\0') {
                iVar5 = (*(code *)PTR_inet_aton_0046a89c)(pcVar3,auStack_64);
                if (iVar5 == 0) {
                  (*(code *)PTR_strcpy_0046ac60)(param_2,"Invalid pptp default gateway value!");
                  return 0xffffffff;
                }
                iVar5 = (*(code *)PTR_apmib_set_0046aa28)(0x154,auStack_64);
                if (iVar5 == 0) {
                  (*(code *)PTR_strcpy_0046ac60)(param_2,"Set pptp default gateway error!");
                  return 0xffffffff;
                }
              }
              if (local_60 == 1) {
                pcVar3 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)
                                           (param_1,"pptpIpAddr",&DAT_0044b32c);
                if (*pcVar3 != '\0') {
                  iVar5 = (*(code *)PTR_inet_aton_0046a89c)(pcVar3,auStack_8c);
                  if (iVar5 == 0) {
                    (*(code *)PTR_strcpy_0046ac60)(param_2,"Invalid IP-address value!");
                    return 0xffffffff;
                  }
                  iVar5 = (*(code *)PTR_apmib_set_0046aa28)(0x91,auStack_8c);
                  if (iVar5 == 0) {
                    (*(code *)PTR_strcpy_0046ac60)(param_2,"Set IP-address error!");
                    return 0xffffffff;
                  }
                }
                pcVar3 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)
                                           (param_1,"pptpSubnetMask",&DAT_0044b32c);
                if (*pcVar3 != '\0') {
                  iVar5 = (*(code *)PTR_inet_aton_0046a89c)(pcVar3,auStack_88);
                  if (iVar5 == 0) {
                    (*(code *)PTR_strcpy_0046ac60)(param_2,"Invalid subnet-mask value!");
                    return 0xffffffff;
                  }
                  iVar5 = (*(code *)PTR_apmib_set_0046aa28)(0x92,auStack_88);
                  if (iVar5 == 0) {
                    (*(code *)PTR_strcpy_0046ac60)(param_2,"Set subnet-mask error!");
                    return 0xffffffff;
                  }
                }
              }
              pcVar3 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)
                                         (param_1,"pptpServerIpAddr",&DAT_0044b32c);
              if (*pcVar3 != '\0') {
                iVar5 = (*(code *)PTR_inet_aton_0046a89c)(pcVar3,auStack_78);
                if (iVar5 == 0) {
                  (*(code *)PTR_strcpy_0046ac60)(param_2,"Invalid pptp server ip value!");
                  return 0xffffffff;
                }
                iVar5 = (*(code *)PTR_apmib_set_0046aa28)(0x93,auStack_78);
                if (iVar5 == 0) {
                  (*(code *)PTR_strcpy_0046ac60)(param_2,"Set pptp server ip error!");
                  return 0xffffffff;
                }
              }
              pcVar3 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)
                                         (param_1,"pptpGetServMode",&DAT_0044b32c);
              if (*pcVar3 != '\0') {
                iVar5 = (*(code *)PTR_strcmp_0046a824)(pcVar3,"pptpGetServByDomainName");
                if (iVar5 == 0) {
                  local_90 = 1;
                  iVar5 = (*(code *)PTR_apmib_set_0046aa28)(0x157);
                  if (iVar5 == 0) {
                    (*(code *)PTR_strcpy_0046ac60)(param_2,"Set pptp get server by domain error!");
                    return 0xffffffff;
                  }
                  pcVar3 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)
                                             (param_1,"pptpServerDomainName",&DAT_0044b32c);
                  if ((*pcVar3 != '\0') &&
                     (iVar5 = (*(code *)PTR_apmib_set_0046aa28)(0x156,pcVar3), iVar5 == 0)) {
                    (*(code *)PTR_strcpy_0046ac60)(param_2,"Set pptp server domain error!");
                    return 0xffffffff;
                  }
                }
                else {
                  local_90 = 0;
                  iVar5 = (*(code *)PTR_apmib_set_0046aa28)(0x157,&local_90);
                  if (iVar5 == 0) {
                    (*(code *)PTR_strcpy_0046ac60)(param_2,"Set pptp get server by domain error!");
                    return 0xffffffff;
                  }
                }
              }
              pcVar3 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)
                                         (param_1,"pptpConnectType",&DAT_0044b32c);
              cVar1 = *pcVar3;
              if (cVar1 != '\0') {
                if (cVar1 == '0') {
                  local_54 = 0;
                }
                else if (cVar1 == '1') {
                  local_54 = 1;
                }
                else {
                  if (cVar1 != '2') {
                    (*(code *)PTR_strcpy_0046ac60)(param_2,"Invalid PPTP type value!");
                    return 0xffffffff;
                  }
                  local_54 = 2;
                }
                iVar5 = (*(code *)PTR_apmib_set_0046aa28)(0x1fd,&local_54);
                if (iVar5 == 0) {
                  (*(code *)PTR_strcpy_0046ac60)(param_2,"Set PPTP type MIB error!");
                  return 0xffffffff;
                }
                if ((local_54 != 0) &&
                   (pcVar3 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)
                                               (param_1,"pptpIdleTime",&DAT_0044b32c),
                   *pcVar3 != '\0')) {
                  local_50 = (*(code *)PTR_strtol_0046aa48)(pcVar3,0,10);
                  local_50 = local_50 * 0x3c;
                  iVar5 = (*(code *)PTR_apmib_set_0046aa28)(0x1fe,&local_50);
                  if (iVar5 == 0) {
                    (*(code *)PTR_strcpy_0046ac60)(param_2,"Set PPTP idle time MIB error!");
                    return 0xffffffff;
                  }
                }
              }
              pcVar3 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)
                                         (param_1,"pptpMtuSize",&DAT_0044b32c);
              if (*pcVar3 != '\0') {
                local_50 = (*(code *)PTR_strtol_0046aa48)(pcVar3,0,10);
                iVar5 = (*(code *)PTR_apmib_set_0046aa28)(0x96,&local_50);
                if (iVar5 == 0) {
                  (*(code *)PTR_strcpy_0046ac60)(param_2,"Set PPTP mtu size MIB error!");
                  return 0xffffffff;
                }
              }
              if (!bVar2) {
                uVar7 = (*(code *)PTR_req_get_cstream_var_0046a674)
                                  (param_1,"pptpSecurity",&DAT_0044b32c);
                iVar5 = (*(code *)PTR_strcmp_0046a824)(uVar7,"ON");
                local_90 = (uint)(iVar5 == 0);
                (*(code *)PTR_apmib_set_0046aa28)(0x9c,&local_90);
                uVar7 = (*(code *)PTR_req_get_cstream_var_0046a674)
                                  (param_1,"pptpCompress",&DAT_0044b32c);
                iVar5 = (*(code *)PTR_strcmp_0046a824)(uVar7,"ON");
                local_90 = (uint)(iVar5 == 0);
                (*(code *)PTR_apmib_set_0046aa28)(0x9f,&local_90);
              }
            }
            else {
              iVar5 = (*(code *)PTR_strcmp_0046a824)(pcVar3,&DAT_0044ca78);
              if (iVar5 == 0) {
                local_74 = 6;
                pcVar3 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)
                                           (param_1,"l2tpUserName",&DAT_0044b32c);
                if ((*pcVar3 != '\0') &&
                   (iVar5 = (*(code *)PTR_apmib_set_0046aa28)(0x14e,pcVar3), iVar5 == 0)) {
                  (*(code *)PTR_strcpy_0046ac60)(param_2,"Set L2TP user name MIB error!");
                  return 0xffffffff;
                }
                pcVar3 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)
                                           (param_1,"l2tpPassword",&DAT_0044b32c);
                if ((*pcVar3 != '\0') &&
                   (iVar5 = (*(code *)PTR_apmib_set_0046aa28)(0x14f,pcVar3), iVar5 == 0)) {
                  (*(code *)PTR_strcpy_0046ac60)(param_2,"Set L2TP user password MIB error!");
                  return 0xffffffff;
                }
                pcVar3 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)
                                           (param_1,"wan_l2tp_use_dynamic_carrier_radio",
                                            &DAT_0044b32c);
                if (*pcVar3 != '\0') {
                  iVar5 = (*(code *)PTR_strcmp_0046a824)(pcVar3,"dynamicIP");
                  if (iVar5 == 0) {
                    local_60 = 0;
                  }
                  else {
                    iVar5 = (*(code *)PTR_strcmp_0046a824)(pcVar3,"staticIP");
                    if (iVar5 != 0) {
                      (*(code *)PTR_strcpy_0046ac60)(param_2,"Invalid L2TP wan IP type!");
                      return 0xffffffff;
                    }
                    local_60 = 1;
                  }
                  iVar5 = (*(code *)PTR_apmib_set_0046aa28)(0x1f5,&local_60);
                  if (iVar5 == 0) {
                    (*(code *)PTR_strcpy_0046ac60)(param_2,"Set MIB_L2TP_WAN_IP_DYNAMIC error!");
                    return 0xffffffff;
                  }
                }
                pcVar3 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)
                                           (param_1,"l2tpDefGw",&DAT_0044b32c);
                if (*pcVar3 != '\0') {
                  iVar5 = (*(code *)PTR_inet_aton_0046a89c)(pcVar3,auStack_64);
                  if (iVar5 == 0) {
                    (*(code *)PTR_strcpy_0046ac60)(param_2,"Invalid l2tp default gateway value!");
                    return 0xffffffff;
                  }
                  iVar5 = (*(code *)PTR_apmib_set_0046aa28)(0x153,auStack_64);
                  if (iVar5 == 0) {
                    (*(code *)PTR_strcpy_0046ac60)(param_2,"Set l2tp default gateway error!");
                    return 0xffffffff;
                  }
                }
                if (local_60 == 1) {
                  pcVar3 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)
                                             (param_1,"l2tpIpAddr",&DAT_0044b32c);
                  if (*pcVar3 != '\0') {
                    iVar5 = (*(code *)PTR_inet_aton_0046a89c)(pcVar3,auStack_8c);
                    if (iVar5 == 0) {
                      (*(code *)PTR_strcpy_0046ac60)(param_2,"Invalid IP-address value!");
                      return 0xffffffff;
                    }
                    iVar5 = (*(code *)PTR_apmib_set_0046aa28)(0x14b,auStack_8c);
                    if (iVar5 == 0) {
                      (*(code *)PTR_strcpy_0046ac60)(param_2,"Set IP-address error!");
                      return 0xffffffff;
                    }
                  }
                  pcVar3 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)
                                             (param_1,"l2tpSubnetMask",&DAT_0044b32c);
                  if (*pcVar3 != '\0') {
                    iVar5 = (*(code *)PTR_inet_aton_0046a89c)(pcVar3,auStack_88);
                    if (iVar5 == 0) {
                      (*(code *)PTR_strcpy_0046ac60)(param_2,"Invalid subnet-mask value!");
                      return 0xffffffff;
                    }
                    iVar5 = (*(code *)PTR_apmib_set_0046aa28)(0x14c,auStack_88);
                    if (iVar5 == 0) {
                      (*(code *)PTR_strcpy_0046ac60)(param_2,"Set subnet-mask error!");
                      return 0xffffffff;
                    }
                  }
                }
                pcVar3 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)
                                           (param_1,"l2tpServerIpAddr",&DAT_0044b32c);
                if (*pcVar3 != '\0') {
                  iVar5 = (*(code *)PTR_inet_aton_0046a89c)(pcVar3,auStack_78);
                  if (iVar5 == 0) {
                    (*(code *)PTR_strcpy_0046ac60)(param_2,"Invalid l2tp server ip value!");
                    return 0xffffffff;
                  }
                  iVar5 = (*(code *)PTR_apmib_set_0046aa28)(0x14d,auStack_78);
                  if (iVar5 == 0) {
                    (*(code *)PTR_strcpy_0046ac60)(param_2,"Set pptp server ip error!");
                    return 0xffffffff;
                  }
                }
                pcVar3 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)
                                           (param_1,"l2tpGetServMode",&DAT_0044b32c);
                if (*pcVar3 != '\0') {
                  iVar5 = (*(code *)PTR_strcmp_0046a824)(pcVar3,"l2tpGetServByDomainName");
                  if (iVar5 == 0) {
                    local_90 = 1;
                    iVar5 = (*(code *)PTR_apmib_set_0046aa28)(499);
                    if (iVar5 == 0) {
                      (*(code *)PTR_strcpy_0046ac60)(param_2,"Set l2tp get server by domain error!")
                      ;
                      return 0xffffffff;
                    }
                    pcVar3 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)
                                               (param_1,"l2tpServerDomainName",&DAT_0044b32c);
                    if ((*pcVar3 != '\0') &&
                       (iVar5 = (*(code *)PTR_apmib_set_0046aa28)(500,pcVar3), iVar5 == 0)) {
                      (*(code *)PTR_strcpy_0046ac60)(param_2,"Set l2tp server domain error!");
                      return 0xffffffff;
                    }
                  }
                  else {
                    local_90 = 0;
                    iVar5 = (*(code *)PTR_apmib_set_0046aa28)(499,&local_90);
                    if (iVar5 == 0) {
                      (*(code *)PTR_strcpy_0046ac60)(param_2,"Set l2tp get server by domain error!")
                      ;
                      return 0xffffffff;
                    }
                  }
                }
                pcVar3 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)
                                           (param_1,"l2tpConnectType",&DAT_0044b32c);
                cVar1 = *pcVar3;
                if (cVar1 != '\0') {
                  if (cVar1 == '0') {
                    local_50 = 0;
                  }
                  else if (cVar1 == '1') {
                    local_50 = 1;
                  }
                  else {
                    if (cVar1 != '2') {
                      (*(code *)PTR_strcpy_0046ac60)(param_2,"Invalid L2TP type value!");
                      return 0xffffffff;
                    }
                    local_50 = 2;
                  }
                  iVar5 = (*(code *)PTR_apmib_set_0046aa28)(0x151,&local_50);
                  if (iVar5 == 0) {
                    (*(code *)PTR_strcpy_0046ac60)(param_2,"Set L2TP type MIB error!");
                    return 0xffffffff;
                  }
                  if ((local_50 != 0) &&
                     (pcVar3 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)
                                                 (param_1,"l2tpIdleTime",&DAT_0044b32c),
                     *pcVar3 != '\0')) {
                    local_54 = (*(code *)PTR_strtol_0046aa48)(pcVar3,0,10);
                    local_54 = local_54 * 0x3c;
                    iVar5 = (*(code *)PTR_apmib_set_0046aa28)(0x152,&local_54);
                    if (iVar5 == 0) {
                      (*(code *)PTR_strcpy_0046ac60)(param_2,"Set L2TP idle time MIB error!");
                      return 0xffffffff;
                    }
                  }
                }
                pcVar3 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)
                                           (param_1,"l2tpMtuSize",&DAT_0044b32c);
                if (*pcVar3 != '\0') {
                  local_54 = (*(code *)PTR_strtol_0046aa48)(pcVar3,0,10);
                  iVar5 = (*(code *)PTR_apmib_set_0046aa28)(0x150,&local_54);
                  if (iVar5 == 0) {
                    (*(code *)PTR_strcpy_0046ac60)(param_2,"Set L2TP mtu size MIB error!");
                    return 0xffffffff;
                  }
                }
              }
              else {
                iVar5 = (*(code *)PTR_strcmp_0046a824)(pcVar3,"USB3G");
                if (iVar5 != 0) {
                  (*(code *)PTR_strcpy_0046ac60)(param_2,"Invalid IP mode value!");
                  return 0xffffffff;
                }
                local_74 = 0x10;
                uVar7 = (*(code *)PTR_req_get_cstream_var_0046a674)
                                  (param_1,"USB3G_USER",&DAT_0044b32c);
                iVar5 = (*(code *)PTR_apmib_set_0046aa28)(0x578,uVar7);
                if (iVar5 == 0) {
                  (*(code *)PTR_strcpy_0046ac60)(param_2,"Set USB3G user name MIB error!");
                  return 0xffffffff;
                }
                uVar7 = (*(code *)PTR_req_get_cstream_var_0046a674)
                                  (param_1,"USB3G_PASS",&DAT_0044b32c);
                iVar5 = (*(code *)PTR_apmib_set_0046aa28)(0x579,uVar7);
                if (iVar5 == 0) {
                  (*(code *)PTR_strcpy_0046ac60)(param_2,"Set USB3G user password MIB error!");
                  return 0xffffffff;
                }
                uVar7 = (*(code *)PTR_req_get_cstream_var_0046a674)
                                  (param_1,"USB3G_PIN",&DAT_0044b32c);
                iVar5 = (*(code *)PTR_apmib_set_0046aa28)(0x57a,uVar7);
                if (iVar5 == 0) {
                  (*(code *)PTR_strcpy_0046ac60)(param_2,"Set USB3G PIN MIB error!");
                  return 0xffffffff;
                }
                pcVar3 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)
                                           (param_1,"USB3G_APN",&DAT_0044b32c);
                if ((*pcVar3 != '\0') &&
                   (iVar5 = (*(code *)PTR_apmib_set_0046aa28)(0x57b,pcVar3), iVar5 == 0)) {
                  (*(code *)PTR_strcpy_0046ac60)(param_2,"Set USB3G APN MIB error!");
                  return 0xffffffff;
                }
                pcVar3 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)
                                           (param_1,"USB3G_DIALNUM",&DAT_0044b32c);
                if ((*pcVar3 != '\0') &&
                   (iVar5 = (*(code *)PTR_apmib_set_0046aa28)(0x57c,pcVar3), iVar5 == 0)) {
                  (*(code *)PTR_strcpy_0046ac60)(param_2,"Set USB3G Dial number MIB error!");
                  return 0xffffffff;
                }
                pcVar3 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)
                                           (param_1,"USB3GMtuSize",&DAT_0044b32c);
                if ((*pcVar3 != '\0') &&
                   (iVar5 = (*(code *)PTR_apmib_set_0046aa28)(0x57f,pcVar3), iVar5 == 0)) {
                  (*(code *)PTR_strcpy_0046ac60)(param_2,"Set USB3G mtu size MIB error!");
                  return 0xffffffff;
                }
                pcVar3 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)
                                           (param_1,"USB3GConnectType",&DAT_0044b32c);
                if (*pcVar3 != '\0') {
                  iVar5 = (*(code *)PTR_strcmp_0046a824)(pcVar3,&DAT_00450acc);
                  if (iVar5 == 0) {
                    iVar5 = 0;
                  }
                  else {
                    iVar6 = (*(code *)PTR_strcmp_0046a824)(pcVar3,"1");
                    iVar5 = 1;
                    if (iVar6 != 0) {
                      iVar6 = (*(code *)PTR_strcmp_0046a824)(pcVar3,"2");
                      iVar5 = 2;
                      if (iVar6 != 0) {
                        (*(code *)PTR_strcpy_0046ac60)(param_2,"Invalid USB3G type value!");
                        return 0xffffffff;
                      }
                    }
                  }
                  iVar6 = (*(code *)PTR_apmib_set_0046aa28)(0x57d,pcVar3);
                  if (iVar6 == 0) {
                    (*(code *)PTR_strcpy_0046ac60)(param_2,"Set USB3G type MIB error!");
                    return 0xffffffff;
                  }
                  if ((iVar5 != 0) &&
                     (pcVar3 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)
                                                 (param_1,"USB3GIdleTime",&DAT_0044b32c),
                     *pcVar3 != '\0')) {
                    iVar5 = (*(code *)PTR_atoi_0046a73c)(pcVar3);
                    (*(code *)PTR_sprintf_0046a808)(local_38,"%d",iVar5 * 0x3c);
                    iVar5 = (*(code *)PTR_apmib_set_0046aa28)(0x57e,local_38);
                    if (iVar5 == 0) {
                      (*(code *)PTR_strcpy_0046ac60)(param_2,"Set USB3G idle time MIB error!");
                      return 0xffffffff;
                    }
                  }
                }
              }
            }
          }
        }
      }
      iVar5 = (*(code *)PTR_apmib_set_0046aa28)(0x68,&local_74);
      if (iVar5 == 0) {
        (*(code *)PTR_strcpy_0046ac60)(param_2,"Set DHCP error!");
        return 0xffffffff;
      }
      if (iVar9 != 1) {
        if ((iVar9 != 2) || (((1 < local_74 - 3U && (local_74 != 6)) && (local_74 != 0x10))))
        goto LAB_00417e80;
        FUN_00413dc4();
        if (local_74 == 0x10) {
          FUN_004134ac();
LAB_00417d74:
          if (local_74 == 3) {
            (*(code *)PTR_strcpy_0046ac60)(param_2,"PPPoE disconnected.\n");
          }
          if (local_74 == 4) {
            (*(code *)PTR_strcpy_0046ac60)(param_2,"PPTP disconnected.\n");
          }
          if (local_74 == 6) {
            (*(code *)PTR_strcpy_0046ac60)(param_2,"L2TP disconnected.\n");
          }
          if (local_74 == 0x10) {
            (*(code *)PTR_strcpy_0046ac60)(param_2,"USB3G disconnected.\n");
          }
          (*(code *)PTR_req_format_write_0046a95c)
                    (param_1,"<html><body><blockquote><h4>%s</h4>\n",param_2);
          if (iVar4 != 0) {
            (*(code *)PTR_req_format_write_0046a95c)
                      (param_1,
                       "<form><input type=button value=\"  OK  \" OnClick=window.location.replace(\"%s\")></form></blockquote></body></html>"
                       ,iVar4);
            return 1;
          }
          (*(code *)PTR_req_format_write_0046a95c)
                    (param_1,
                     "<form><input type=button value=\"  OK  \" OnClick=window.close()></form></blockquote></body></html>"
                    );
          return 1;
        }
        if (local_74 == 4) {
          (*(code *)PTR_system_0046ab18)("killall -15 ppp_inet 2> /dev/null");
          (*(code *)PTR_system_0046ab18)("killall -15 pppd 2> /dev/null");
          goto LAB_00417d74;
        }
        iVar9 = (*(code *)PTR_fork_0046a8c8)();
        if (iVar9 != 0) {
          (*(code *)PTR_waitpid_0046ac48)(iVar9,0,0);
          goto LAB_00417d74;
        }
        (*(code *)PTR_snprintf_0046abe4)(param_2,100,"%s/%s",&DAT_0044d824,"disconnect.sh");
        (*(code *)PTR_execl_0046ab4c)(param_2,"disconnect.sh",&DAT_0044d9f4,0);
        goto LAB_00417d3c;
      }
      if (((1 < local_74 - 3U) && (local_74 != 6)) && (local_74 != 0x10)) goto LAB_00417e80;
      local_54 = 0;
      FUN_00413dc4();
      (*(code *)PTR_apmib_get_0046aadc)(0xc0,&local_54);
      if (local_54 == 2) {
        (*(code *)PTR_apmib_get_0046aadc)(0xc1,&local_50);
        pcVar3 = "wlan%d";
        (*(code *)PTR_sprintf_0046a808)(local_38,"wlan%d",local_50);
        iVar9 = (*(code *)PTR_SetWlan_idx_0046ab70)(local_38);
        puVar8 = auStack_48;
        if (iVar9 != 0) {
          (*(code *)PTR_apmib_get_0046aadc)(0x3b,&local_4c);
          if (local_4c != 1) {
            pcVar3 = "wlan%d-vxd";
          }
          (*(code *)PTR_sprintf_0046a808)(auStack_48,pcVar3,local_50);
          puVar8 = auStack_48;
        }
LAB_00417978:
        *(undefined **)PTR_WAN_IF_0046a74c = puVar8;
      }
      else if (local_54 == 0) {
        puVar8 = &DAT_0044bfdc;
        goto LAB_00417978;
      }
      (*(code *)PTR_system_0046ab18)("killall -9 igmpproxy 2> /dev/null");
      (*(code *)PTR_system_0046ab18)("echo 1,0 > /proc/br_mCastFastFwd");
      (*(code *)PTR_system_0046ab18)("killall -9 dnrd 2> /dev/null");
      if (local_74 - 3U < 2) {
        pcVar3 = "killall -15 pppd 2> /dev/null";
LAB_00417a0c:
        (*(code *)PTR_system_0046ab18)(pcVar3);
      }
      else {
        if (local_74 != 0x10) {
          pcVar3 = "killall -9 pppd 2> /dev/null";
          goto LAB_00417a0c;
        }
        FUN_004134ac();
      }
      (*(code *)PTR_system_0046ab18)("disconnect.sh option");
      if (local_74 == 0x10) {
        (*(code *)PTR_system_0046ab18)("ppp_inet -t 16 -c 0 -x");
LAB_00417a50:
        iVar9 = 0x2d;
        do {
          iVar9 = iVar9 + -1;
          if (iVar9 == -1) {
LAB_00417bb8:
            iVar9 = (*(code *)PTR_isConnectPPP_0046a7c8)();
            if (iVar9 == 0) {
              pcVar3 = "Connect to server failed!\n";
            }
            else {
              pcVar3 = "Connected to server successfully.\n";
            }
            (*(code *)PTR_strcpy_0046ac60)(param_2,pcVar3);
            (*(code *)PTR_req_format_write_0046a95c)
                      (param_1,"<html><body><blockquote><h4>%s</h4>\n",param_2);
            if (iVar4 != 0) {
              (*(code *)PTR_req_format_write_0046a95c)
                        (param_1,
                         "<form><input type=button value=\"  OK  \" OnClick=window.location.replace(\"%s\")></form></blockquote></body></html>"
                         ,iVar4);
              return 1;
            }
            (*(code *)PTR_req_format_write_0046a95c)
                      (param_1,
                       "<form><input type=button value=\"  OK  \" OnClick=window.close()></form></blockquote></body></html>"
                      );
            return 1;
          }
          iVar5 = (*(code *)PTR_isConnectPPP_0046a7c8)();
          if (iVar5 != 0) {
            (*(code *)PTR_puts_0046ab3c)("PPP is connected");
            goto LAB_00417bb8;
          }
          (*(code *)PTR_sleep_0046ab0c)(1);
        } while( true );
      }
      iVar9 = (*(code *)PTR_fork_0046a8c8)();
      if (iVar9 != 0) {
        (*(code *)PTR_waitpid_0046ac48)(iVar9,0,0);
        goto LAB_00417a50;
      }
      if (local_74 == 3) {
        pcVar3 = "pppoe.sh";
      }
      else if (local_74 == 4) {
        pcVar3 = "pptp.sh";
      }
      else {
        if (local_74 != 6) goto LAB_00417d3c;
        (*(code *)PTR_system_0046ab18)("killall -9 l2tpd 2> /dev/null");
        pcVar3 = "l2tp.sh";
        (*(code *)PTR_system_0046ab18)("rm -f /var/run/l2tpd.pid 2> /dev/null");
      }
      (*(code *)PTR_snprintf_0046abe4)(param_2,100,"%s/%s",&DAT_0044d824,pcVar3);
      (*(code *)PTR_execl_0046ab4c)(param_2,pcVar3,"connect",*(undefined4 *)PTR_WAN_IF_0046a74c,0);
LAB_00417d3c:
      uVar7 = (*(code *)PTR_exit_0046a75c)(1);
      return uVar7;
    }
  }
  local_74 = local_70;
LAB_00417e80:
  if (local_74 == 0) {
    pcVar3 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)(param_1,"wan_ip",&DAT_0044b32c);
    if (*pcVar3 != '\0') {
      iVar4 = (*(code *)PTR_inet_aton_0046a89c)(pcVar3,auStack_8c);
      if (iVar4 == 0) {
        (*(code *)PTR_strcpy_0046ac60)(param_2,"Invalid IP-address value!");
        return 0xffffffff;
      }
      iVar4 = (*(code *)PTR_apmib_set_0046aa28)(0x65,auStack_8c);
      if (iVar4 == 0) {
        (*(code *)PTR_strcpy_0046ac60)(param_2,"Set IP-address error!");
        return 0xffffffff;
      }
    }
    pcVar3 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)(param_1,"wan_mask",&DAT_0044b32c);
    if (*pcVar3 != '\0') {
      iVar4 = (*(code *)PTR_inet_aton_0046a89c)(pcVar3,auStack_88);
      if (iVar4 == 0) {
        (*(code *)PTR_strcpy_0046ac60)(param_2,"Invalid subnet-mask value!");
        return 0xffffffff;
      }
      iVar4 = (*(code *)PTR_apmib_set_0046aa28)(0x66,auStack_88);
      if (iVar4 == 0) {
        (*(code *)PTR_strcpy_0046ac60)(param_2,"Set subnet-mask error!");
        return 0xffffffff;
      }
    }
    pcVar3 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)
                               (param_1,"wan_gateway",&DAT_0044b32c);
    if (*pcVar3 != '\0') {
      iVar4 = (*(code *)PTR_inet_aton_0046a89c)(pcVar3,auStack_78);
      if (iVar4 == 0) {
        (*(code *)PTR_strcpy_0046ac60)(param_2,"Invalid default-gateway value!");
        return 0xffffffff;
      }
      iVar4 = (*(code *)PTR_apmib_set_0046aa28)(0x67,auStack_78);
      if (iVar4 == 0) {
        (*(code *)PTR_strcpy_0046ac60)(param_2,"Set default-gateway error!");
        return 0xffffffff;
      }
    }
    pcVar3 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)
                               (param_1,"fixedIpMtuSize",&DAT_0044b32c);
    if (*pcVar3 != '\0') {
      local_4c = (*(code *)PTR_strtol_0046aa48)(pcVar3,0,10);
      iVar4 = (*(code *)PTR_apmib_set_0046aa28)(0x9d,&local_4c);
      if (iVar4 == 0) {
        (*(code *)PTR_strcpy_0046ac60)(param_2,"Set FIXED-IP mtu size MIB error!");
        return 0xffffffff;
      }
    }
  }
  if (!bVar2) {
    if (local_74 == 1) {
      iVar4 = (*(code *)PTR_req_get_cstream_var_0046a674)(param_1,"dhcpMtuSize",&DAT_0044b32c);
      if (iVar4 != 0) {
        local_4c = (*(code *)PTR_strtol_0046aa48)(iVar4,0,10);
        iVar4 = (*(code *)PTR_apmib_set_0046aa28)(0x9e,&local_4c);
        if (iVar4 == 0) {
          (*(code *)PTR_strcpy_0046ac60)(param_2,"Set DHCP mtu size MIB error!");
          return 0xffffffff;
        }
      }
      iVar4 = (*(code *)PTR_req_get_cstream_var_0046a674)(param_1,"hostName",&DAT_0044b32c);
      if (iVar4 == 0) {
        iVar4 = (*(code *)PTR_apmib_set_0046aa28)(0xc5,&DAT_0044b32c);
        if (iVar4 == 0) {
          (*(code *)PTR_strcpy_0046ac60)(param_2,"\"Set MIB_HOST_NAME MIB error!\"");
          return 0xffffffff;
        }
      }
      else {
        local_28 = iVar4;
        iVar4 = FUN_004136b4(iVar4);
        if (iVar4 == 0) {
          (*(code *)PTR_strcpy_0046ac60)
                    (param_2,
                     "Invalid Host Name! Please enter characters in A(a)~Z(z) or 0-9 without spacing."
                    );
          return 0xffffffff;
        }
        iVar4 = (*(code *)PTR_apmib_set_0046aa28)(0xc5,local_28);
        if (iVar4 == 0) {
          (*(code *)PTR_strcpy_0046ac60)(param_2,"Set MIB_HOST_NAME MIB error!");
          return 0xffffffff;
        }
      }
    }
    uVar7 = (*(code *)PTR_req_get_cstream_var_0046a674)(param_1,"upnpEnabled",&DAT_0044b32c);
    iVar4 = (*(code *)PTR_strcmp_0046a824)(uVar7,"ON");
    local_90 = (uint)(iVar4 == 0);
    iVar4 = (*(code *)PTR_apmib_set_0046aa28)(0x8e,&local_90);
    if (iVar4 == 0) {
      (*(code *)PTR_strcpy_0046ac60)(param_2,"Set MIB_UPNP_ENABLED error!");
      return 0xffffffff;
    }
    uVar7 = (*(code *)PTR_req_get_cstream_var_0046a674)(param_1,"igmpproxyEnabled",&DAT_0044b32c);
    iVar4 = (*(code *)PTR_strcmp_0046a824)(uVar7,"ON");
    local_90 = (uint)(iVar4 != 0);
    iVar4 = (*(code *)PTR_apmib_set_0046aa28)(0x11b,&local_90);
    if (iVar4 == 0) {
      (*(code *)PTR_strcpy_0046ac60)(param_2,"Set MIB_IGMP_PROXY_DISABLED error!");
      return 0xffffffff;
    }
    uVar7 = (*(code *)PTR_req_get_cstream_var_0046a674)(param_1,"webWanAccess",&DAT_0044b32c);
    iVar4 = (*(code *)PTR_strcmp_0046a824)(uVar7,"ON");
    local_90 = (uint)(iVar4 == 0);
    iVar4 = (*(code *)PTR_apmib_set_0046aa28)(0xc2,&local_90);
    if (iVar4 == 0) {
      (*(code *)PTR_strcpy_0046ac60)(param_2,"Set WEB_WAN_ACCESS_ENABLED error!");
      return 0xffffffff;
    }
    uVar7 = (*(code *)PTR_req_get_cstream_var_0046a674)(param_1,"pingWanAccess",&DAT_0044b32c);
    iVar4 = (*(code *)PTR_strcmp_0046a824)(uVar7,"ON");
    local_90 = (uint)(iVar4 == 0);
    iVar4 = (*(code *)PTR_apmib_set_0046aa28)(0xc3,&local_90);
    if (iVar4 == 0) {
      (*(code *)PTR_strcpy_0046ac60)(param_2,"Set PING_WAN_ACCESS_ENABLED error!");
      return 0xffffffff;
    }
    uVar7 = (*(code *)PTR_req_get_cstream_var_0046a674)(param_1,"WANPassThru1",&DAT_0044b32c);
    iVar4 = (*(code *)PTR_strcmp_0046a824)(uVar7,"ON");
    local_90 = (uint)(iVar4 == 0);
    iVar4 = (*(code *)PTR_apmib_set_0046aa28)(0xf5,&local_90);
    if (iVar4 == 0) {
      (*(code *)PTR_strcpy_0046ac60)(param_2,"Set VPN_PASSTHRU_IPSEC_ENABLED error!");
      return 0xffffffff;
    }
    uVar7 = (*(code *)PTR_req_get_cstream_var_0046a674)(param_1,"WANPassThru2",&DAT_0044b32c);
    iVar4 = (*(code *)PTR_strcmp_0046a824)(uVar7,"ON");
    local_90 = (uint)(iVar4 == 0);
    iVar4 = (*(code *)PTR_apmib_set_0046aa28)(0xf6,&local_90);
    if (iVar4 == 0) {
      (*(code *)PTR_strcpy_0046ac60)(param_2,"Set VPN_PASSTHRU_PPTP_ENABLED error!");
      return 0xffffffff;
    }
    uVar7 = (*(code *)PTR_req_get_cstream_var_0046a674)(param_1,"WANPassThru3",&DAT_0044b32c);
    iVar4 = (*(code *)PTR_strcmp_0046a824)(uVar7,"ON");
    local_90 = (uint)(iVar4 == 0);
    iVar4 = (*(code *)PTR_apmib_set_0046aa28)(0xf7,&local_90);
    if (iVar4 == 0) {
      (*(code *)PTR_strcpy_0046ac60)(param_2,"Set VPN_PASSTHRU_L2TP_ENABLED error!");
      return 0xffffffff;
    }
    uVar7 = (*(code *)PTR_req_get_cstream_var_0046a674)
                      (param_1,"ipv6_passthru_enabled",&DAT_0044b32c);
    iVar4 = (*(code *)PTR_strcmp_0046a824)(uVar7,"ON");
    local_90 = (uint)(iVar4 == 0);
    iVar4 = (*(code *)PTR_apmib_set_0046aa28)(0x182,&local_90);
    if (iVar4 == 0) {
      (*(code *)PTR_strcpy_0046ac60)(param_2,"Set custom passthru enabled error!");
      return 0xffffffff;
    }
  }
  return 0;
}

