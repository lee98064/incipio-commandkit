/* tcpipLanHandler @ 00418884 */

undefined4 tcpipLanHandler(undefined4 param_1,int param_2)

{
  char cVar1;
  char cVar2;
  undefined *puVar3;
  undefined *puVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  uint *puVar9;
  uint uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  uint local_60;
  uint local_5c;
  undefined1 auStack_58 [4];
  uint local_54;
  uint local_50;
  uint local_4c;
  uint local_48;
  undefined1 auStack_44 [4];
  undefined1 auStack_40 [4];
  undefined1 auStack_3c [4];
  uint local_38;
  undefined4 local_34;
  uint *local_30;
  
  local_38 = 0;
  local_34 = 0;
  pcVar5 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)(param_1,&DAT_0044e034,&DAT_0044b32c);
  cVar1 = *pcVar5;
  pcVar5 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)(param_1,&DAT_0044e03c,&DAT_0044b32c);
  if (*pcVar5 != '\0') {
    local_50 = (uint)(*pcVar5 != '0');
    iVar6 = (*(code *)PTR_apmib_set_0046aa28)(0xb3,&local_50);
    if (iVar6 == 0) {
      pcVar5 = "Set STP mib error!";
      goto LAB_004189c8;
    }
  }
  pcVar5 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)(param_1,"lan_macAddr",&DAT_0044b32c);
  if (*pcVar5 != '\0') {
    iVar6 = (*(code *)PTR_strlen_0046a714)(pcVar5);
    if ((iVar6 != 0xc) || (iVar6 = FUN_00413e1c(pcVar5,param_2), iVar6 == 0)) {
      pcVar5 = "Error! Invalid MAC address.";
      goto LAB_004189c8;
    }
    iVar6 = (*(code *)PTR_apmib_set_0046aa28)(0x17,param_2);
    puVar4 = PTR_vwlan_idx_0046a9b0;
    puVar3 = PTR_wlan_idx_0046a93c;
    if (iVar6 == 0) {
      pcVar5 = "Set MIB_ELAN_MAC_ADDR mib error!";
      goto LAB_004189c8;
    }
    iVar6 = (*(code *)PTR_memcmp_0046a8d0)(pcVar5,"000000000000",0xc);
    uVar12 = *(undefined4 *)puVar3;
    uVar11 = *(undefined4 *)puVar4;
    pcVar5 = (char *)(param_2 + 5);
    if (iVar6 == 0) {
      *(undefined4 *)puVar3 = 0;
      iVar6 = 0;
      do {
        puVar3 = PTR_apmib_set_0046aa28;
        *(int *)puVar4 = iVar6;
        iVar7 = (*(code *)puVar3)(0x18,param_2);
        iVar6 = iVar6 + 1;
        if (iVar7 == 0) goto LAB_00418aa4;
      } while (iVar6 != 5);
    }
    else {
      *(undefined4 *)puVar3 = 0;
      iVar6 = 0;
      do {
        puVar3 = PTR_apmib_set_0046aa28;
        *(int *)puVar4 = iVar6;
        iVar7 = (*(code *)puVar3)(0x18,param_2);
        iVar6 = iVar6 + 1;
        if (iVar7 == 0) goto LAB_00418aa4;
        cVar2 = *pcVar5;
        *pcVar5 = cVar2 + '\x01';
      } while (iVar6 != 5);
      *pcVar5 = cVar2 + '\f';
    }
    *(undefined4 *)PTR_wlan_idx_0046a93c = uVar12;
    *(undefined4 *)PTR_vwlan_idx_0046a9b0 = uVar11;
  }
  iVar6 = (*(code *)PTR_apmib_get_0046aadc)(0xad,&local_54);
  if (iVar6 == 0) {
    pcVar5 = "Get DHCP MIB error!";
    goto LAB_004189c8;
  }
  pcVar5 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)(param_1,&DAT_0044e034,&DAT_0044b32c);
  uVar10 = local_54;
  if (*pcVar5 != '\0') {
    local_38 = (*(code *)PTR_atoi_0046a73c)(pcVar5);
    if (((2 < local_38) && (local_38 != 0xf)) && (local_38 != 0x13)) {
      pcVar5 = "Invalid DHCP value!";
      goto LAB_004189c8;
    }
    iVar6 = (*(code *)PTR_apmib_set_0046aa28)(0xad,&local_38);
    uVar10 = local_38;
    if (iVar6 == 0) {
      pcVar5 = "Set DHCP error!";
      goto LAB_004189c8;
    }
  }
  pcVar5 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)(param_1,"lan_ip",&DAT_0044b32c);
  if (*pcVar5 == '\0') {
    iVar6 = (*(code *)PTR_getInAddr_0046ab50)(*(undefined4 *)PTR_BRIDGE_IF_0046abe0,0);
    if (iVar6 == 0) {
      pcVar5 = "Get IP-address error!";
      goto LAB_004189c8;
    }
  }
  else {
    local_30 = &local_60;
    iVar6 = (*(code *)PTR_inet_aton_0046a89c)(pcVar5,&local_60);
    if (iVar6 == 0) {
      pcVar5 = "Invalid IP-address value!";
      goto LAB_004189c8;
    }
    iVar6 = (*(code *)PTR_apmib_set_0046aa28)(0xaa,local_30);
    if (iVar6 == 0) {
      pcVar5 = "Set IP-address error!";
      goto LAB_004189c8;
    }
  }
  pcVar5 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)(param_1,"lan_mask",&DAT_0044b32c);
  if (*pcVar5 == '\0') {
    iVar6 = (*(code *)PTR_getInAddr_0046ab50)(*(undefined4 *)PTR_BRIDGE_IF_0046abe0,2);
    if (iVar6 == 0) {
      pcVar5 = "Get subnet-mask error!";
      goto LAB_004189c8;
    }
  }
  else {
    local_30 = &local_5c;
    iVar6 = (*(code *)PTR_inet_aton_0046a89c)(pcVar5,&local_5c);
    if (iVar6 == 0) {
      pcVar5 = "Invalid subnet-mask value!";
      goto LAB_004189c8;
    }
    iVar6 = (*(code *)PTR_apmib_set_0046aa28)(0xab,local_30);
    if (iVar6 == 0) {
      pcVar5 = "Set subnet-mask error!";
      goto LAB_004189c8;
    }
  }
  pcVar5 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)(param_1,"lan_gateway",&DAT_0044b32c);
  if (((uVar10 == 0) || (uVar10 == 2)) && (*pcVar5 != '\0')) {
    iVar6 = (*(code *)PTR_inet_aton_0046a89c)(pcVar5,auStack_58);
    if (iVar6 == 0) {
      pcVar5 = "Invalid default-gateway value!";
      goto LAB_004189c8;
    }
    iVar6 = (*(code *)PTR_apmib_set_0046aa28)(0xac,auStack_58);
    if (iVar6 == 0) {
      pcVar5 = "Set default-gateway error!";
      goto LAB_004189c8;
    }
  }
  pcVar5 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)
                             (param_1,"dhcpRangeStart",&DAT_0044b32c);
  if (*pcVar5 != '\0') {
    iVar6 = (*(code *)PTR_inet_aton_0046a89c)(pcVar5,&local_4c);
    if (iVar6 == 0) {
      pcVar5 = "Invalid DHCP client start address!";
      goto LAB_004189c8;
    }
    iVar6 = (*(code *)PTR_apmib_set_0046aa28)(0xae,&local_4c);
    if (iVar6 == 0) {
      pcVar5 = "Set DHCP client start address error!";
      goto LAB_004189c8;
    }
  }
  pcVar8 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)(param_1,"dhcpRangeEnd",&DAT_0044b32c)
  ;
  if (*pcVar8 != '\0') {
    iVar6 = (*(code *)PTR_inet_aton_0046a89c)(pcVar8,&local_48);
    if (iVar6 == 0) {
      pcVar5 = "Invalid DHCP client end address!";
      goto LAB_004189c8;
    }
    iVar6 = (*(code *)PTR_apmib_set_0046aa28)(0xaf,&local_48);
    if (iVar6 == 0) {
      pcVar5 = "Set DHCP client end address error!";
      goto LAB_004189c8;
    }
  }
  if (((*pcVar5 != '\0') && (*pcVar8 != '\0')) &&
     ((0x2ff < (local_48 - 1) - local_4c ||
      (((local_60 ^ local_48 | local_60 ^ local_4c) & local_5c) != 0)))) {
    pcVar5 = "Invalid DHCP client range!";
    goto LAB_004189c8;
  }
  pcVar5 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)(param_1,"dns1",&DAT_0044b32c);
  if (*pcVar5 == '\0') {
LAB_00418fb8:
    pcVar5 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)(param_1,"dns2",&DAT_0044b32c);
    if (*pcVar5 != '\0') {
      iVar6 = (*(code *)PTR_inet_aton_0046a89c)(pcVar5,auStack_40);
      if (iVar6 == 0) goto LAB_00419064;
      iVar6 = (*(code *)PTR_apmib_set_0046aa28)(0xb1,auStack_40);
      if (iVar6 == 0) goto LAB_00419090;
    }
    pcVar5 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)(param_1,"dns3",&DAT_0044b32c);
    if (*pcVar5 != '\0') {
      iVar6 = (*(code *)PTR_inet_aton_0046a89c)(pcVar5,auStack_3c);
      if (iVar6 == 0) goto LAB_00419064;
      iVar6 = (*(code *)PTR_apmib_set_0046aa28)(0xb2,auStack_3c);
      if (iVar6 == 0) goto LAB_00419090;
    }
    if (cVar1 == '\0') {
      return 0;
    }
    iVar6 = (*(code *)PTR_req_get_cstream_var_0046a674)(param_1,"dhcpLeaseTime",&DAT_0044b32c);
    if (iVar6 != 0) {
      local_34 = (*(code *)PTR_atoi_0046a73c)(iVar6);
      iVar6 = (*(code *)PTR_apmib_set_0046aa28)(0x3b1,&local_34);
      if (iVar6 == 0) {
        pcVar5 = "Set MIB_DHCP_LEASE_TIME MIB error!";
        goto LAB_004189c8;
      }
    }
    puVar9 = (uint *)(*(code *)PTR_req_get_cstream_var_0046a674)(param_1,"domainName",&DAT_0044b32c)
    ;
    if (puVar9 == (uint *)0x0) {
      iVar6 = (*(code *)PTR_apmib_set_0046aa28)(0xc6,&DAT_0044b32c);
      if (iVar6 != 0) {
        return 0;
      }
      pcVar5 = "\"Set MIB_DOMAIN_NAME MIB error!\"";
    }
    else {
      local_30 = puVar9;
      iVar6 = FUN_004136b4(puVar9);
      if (iVar6 == 0) {
        pcVar5 = "Invalid Domain Name! Please enter characters in A(a)~Z(z) or 0-9 without spacing."
        ;
      }
      else {
        iVar6 = (*(code *)PTR_apmib_set_0046aa28)(0xc6,local_30);
        if (iVar6 != 0) {
          return 0;
        }
        pcVar5 = "Set MIB_DOMAIN_NAME MIB error!";
      }
    }
  }
  else {
    iVar6 = (*(code *)PTR_inet_aton_0046a89c)(pcVar5,auStack_44);
    if (iVar6 != 0) {
      iVar6 = (*(code *)PTR_apmib_set_0046aa28)(0xb0,auStack_44);
      if (iVar6 != 0) goto LAB_00418fb8;
LAB_00419090:
      pcVar5 = "Set DNS MIB error!";
      goto LAB_004189c8;
    }
LAB_00419064:
    pcVar5 = "Invalid DNS address value!";
  }
LAB_004189c8:
  (*(code *)PTR_strcpy_0046ac60)(param_2,pcVar5);
  return 0xffffffff;
LAB_00418aa4:
  pcVar5 = "Set MIB_WLAN_WLAN_MAC_ADDR mib error!";
  goto LAB_004189c8;
}

