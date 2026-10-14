/* setFirewallIptablesRules @ 0040f2ec */

undefined4 setFirewallIptablesRules(void)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  code *pcVar7;
  undefined *puVar8;
  undefined *puVar9;
  int local_1f8;
  int local_1f4;
  undefined4 local_1f0;
  undefined4 local_1ec;
  int local_1e8;
  int local_1e4;
  int local_1e0;
  uint local_1dc;
  uint local_1d8;
  uint local_1d4;
  uint local_1d0;
  undefined1 auStack_1cc [12];
  undefined1 auStack_1c0 [16];
  undefined1 auStack_1b0 [16];
  undefined1 auStack_1a0 [16];
  undefined4 auStack_190 [5];
  undefined4 local_17c;
  undefined1 local_178;
  undefined1 auStack_177 [15];
  undefined1 auStack_168 [32];
  undefined1 auStack_148 [32];
  undefined1 auStack_128 [32];
  undefined4 local_108 [8];
  undefined1 auStack_e8 [32];
  undefined1 auStack_c8 [128];
  undefined1 *local_48;
  undefined *local_44;
  undefined *local_40;
  char *local_3c;
  undefined *local_38;
  char *local_34;
  char *local_30;
  
  puVar6 = &DAT_00417f3c;
  local_178 = DAT_00417f40;
  local_17c = DAT_00417f3c;
  local_1f4 = -1;
  local_1f8 = -1;
  (*(code *)PTR_memset_0042b114)(auStack_177,0,0xf);
  local_1f0 = 0;
  local_1e8 = 0;
  local_1e4 = 0;
  local_1e0 = 0;
  (*(code *)PTR_puts_0042b1b8)("Init Firewall Rules....");
  (*(code *)PTR_memset_0042b114)(auStack_128,0,0x1e);
  (*(code *)PTR_apmib_get_0042b1a0)(0xc0,&local_1f8);
  (*(code *)PTR_apmib_get_0042b1a0)(0x68,&local_1f4);
  if (local_1f8 == 2) {
    (*(code *)PTR_apmib_get_0042b1a0)(0xc1,&local_1f0);
    puVar6 = auStack_190;
    (*(code *)PTR_sprintf_0042b0e8)(puVar6,&DAT_00417aa0,local_1f0);
    (*(code *)PTR_getWispRptIfaceName_0042b1e8)(puVar6,local_1f0);
    if ((local_1f4 - 3U < 2) || (puVar5 = puVar6, local_1f4 == 6)) {
      puVar6 = auStack_190;
      puVar5 = (undefined4 *)&DAT_00418cf8;
    }
  }
  else {
    puVar5 = &DAT_00417f3c;
    if ((local_1f8 == 0) &&
       (((local_1f4 - 3U < 2 || (local_1f4 == 6)) || (puVar5 = puVar6, local_1f4 == 0x10)))) {
      puVar6 = &DAT_00417f3c;
      puVar5 = (undefined4 *)&DAT_00418cf8;
    }
  }
  iVar1 = (*(code *)PTR_getInAddr_0042b1c4)(puVar5,2,&local_1ec);
  if (iVar1 == 0) {
    pcVar3 = "No wan ip currently!";
    pcVar7 = (code *)PTR_puts_0042b1b8;
    goto LAB_00410484;
  }
  uVar2 = (*(code *)PTR_inet_ntoa_0042b108)(local_1ec);
  (*(code *)PTR_strcpy_0042b208)(auStack_148,uVar2);
  FUN_0040e64c(local_1f8,local_1f4,puVar6,&local_17c);
  local_1e8 = 0;
  (*(code *)PTR_apmib_get_0042b1a0)(0xc2,&local_1e8);
  if (local_1e8 == 1) {
    pcVar3 = s_ACCEPT_0042aeb8;
  }
  else {
    pcVar3 = &DAT_0042aec0;
  }
  (*(code *)PTR_RunSystemCmd_0042b0dc)
            (0,s_iptables_0042ae70,&DAT_0042aef4,s_INPUT_0042ae88,&DAT_0042af28,&DAT_0042afcc,
             s___dport_0042af6c,"80:80",&DAT_0042af18,puVar5,&DAT_0042af14,auStack_148,&DAT_0042af1c
             ,pcVar3,"");
  (*(code *)PTR_RunSystemCmd_0042b0dc)
            (0,s_iptables_0042ae70,&DAT_0042aef4,s_INPUT_0042ae88,&DAT_0042af28,&DAT_0042afc8,
             s___dport_0042af6c,"1900:1900",&DAT_0042af18,puVar5,&DAT_0042af14,auStack_148,
             &DAT_0042af1c,&DAT_0042aec0,"");
  (*(code *)PTR_apmib_get_0042b1a0)(0x6e,&local_1e8);
  (*(code *)PTR_apmib_get_0042b1a0)(0x6f,&local_1e4);
  if ((local_1e8 == 1) && (0 < local_1e4)) {
    FUN_0040b310(puVar5,auStack_148);
  }
  (*(code *)PTR_apmib_get_0042b1a0)(0x68,&local_1e0);
  if (local_1e0 == 4) {
    local_30 = &DAT_0042af28;
    (*(code *)PTR_RunSystemCmd_0042b0dc)
              (0,s_iptables_0042ae70,&DAT_0042aef4,s_INPUT_0042ae88,&DAT_0042af28,&DAT_00418ed8,
               &DAT_0042af18,puVar6,&DAT_0042af1c,s_ACCEPT_0042aeb8,"");
    puVar8 = &DAT_0042afcc;
    puVar9 = &DAT_00418ed0;
    pcVar3 = local_30;
LAB_0040f87c:
    (*(code *)PTR_RunSystemCmd_0042b0dc)
              (0,s_iptables_0042ae70,&DAT_0042aef4,s_INPUT_0042ae88,pcVar3,puVar8,s___sport_0042af74
               ,puVar9,&DAT_0042af18,puVar6,&DAT_0042af1c,s_ACCEPT_0042aeb8,"");
  }
  else if (local_1e0 == 6) {
    pcVar3 = &DAT_0042af28;
    puVar8 = &DAT_0042afc8;
    puVar9 = &DAT_00418ec8;
    goto LAB_0040f87c;
  }
  (*(code *)PTR_apmib_get_0042b1a0)(0xf5,&local_1e8);
  if (local_1e8 == 0) {
    (*(code *)PTR_RunSystemCmd_0042b0dc)
              (0,s_iptables_0042ae70,&DAT_0042aef4,s_FORWARD_0042ae98,&DAT_0042af28,&DAT_0042afc8,
               s___dport_0042af6c,&DAT_00418f30,&DAT_0042af1c,&DAT_0042aec0,"");
  }
  else {
    (*(code *)PTR_RunSystemCmd_0042b0dc)
              (0,s_iptables_0042ae70,&DAT_0042aef4,s_FORWARD_0042ae98,&DAT_0042af28,&DAT_0042afc8,
               s___dport_0042af6c,&DAT_00418f30,&DAT_0042af18,puVar5,&DAT_0042af24,&DAT_00417ad0,
               &DAT_0042af1c,s_ACCEPT_0042aeb8,"");
  }
  if (((local_1f4 == 1) || (local_1f4 == 4)) || (local_1f4 == 6)) {
    (*(code *)PTR_RunSystemCmd_0042b0dc)
              (0,s_iptables_0042ae70,&DAT_0042aef4,s_INPUT_0042ae88,&DAT_0042af28,&DAT_0042afc8,
               s___dport_0042af6c,&DAT_00418f34,&DAT_0042af18,puVar5,&DAT_0042af1c,s_ACCEPT_0042aeb8
               ,"");
  }
  iVar1 = (*(code *)PTR_getInAddr_0042b1c4)(&DAT_00417ad0,2,&local_1dc);
  if (iVar1 == 0) {
    pcVar3 = "No ip currently!";
    pcVar7 = (code *)PTR_puts_0042b1b8;
  }
  else {
    iVar1 = (*(code *)PTR_getInAddr_0042b1c4)(&DAT_00417ad0,4,&local_1d8);
    iVar4 = 0;
    if (iVar1 == 0) {
      pcVar3 = "No MASK currently!";
      pcVar7 = (code *)PTR_puts_0042b1b8;
    }
    else {
      local_1dc = local_1dc & local_1d8;
      for (; local_1d8 != 0; local_1d8 = local_1d8 & local_1d8 - 1) {
        iVar4 = iVar4 + 1;
      }
      local_1d8 = 0;
      (*(code *)PTR_sprintf_0042b0e8)(auStack_1cc,&DAT_00417aa4,iVar4);
      uVar2 = (*(code *)PTR_inet_ntoa_0042b108)(local_1dc);
      (*(code *)PTR_strcpy_0042b208)(auStack_e8,uVar2);
      (*(code *)PTR_strcat_0042b170)(auStack_e8,&DAT_00418f60);
      (*(code *)PTR_strcat_0042b170)(auStack_e8,auStack_1cc);
      (*(code *)PTR_apmib_get_0042b1a0)(0x8c,&local_1e8);
      if (local_1e8 == 1) {
        (*(code *)PTR_apmib_get_0042b1a0)(0x8d,local_108);
        uVar2 = (*(code *)PTR_inet_ntoa_0042b108)(local_108[0]);
        iVar1 = (*(code *)PTR_strcmp_0042b0fc)(uVar2,"0.0.0.0");
        if (iVar1 != 0) {
          (*(code *)PTR_strcpy_0042b208)(auStack_168,uVar2);
          local_48 = auStack_148;
          local_34 = &DAT_0042af30;
          local_40 = &DAT_0042af34;
          local_38 = &DAT_00418c08;
          local_3c = &DAT_0042af84;
          local_30 = &DAT_0042af28;
          (*(code *)PTR_RunSystemCmd_0042b0dc)
                    (0,s_iptables_0042ae70,&DAT_0042aef4,s_PREROUTING_0042aea0,&DAT_0042af30,
                     &DAT_0042af34,&DAT_0042af28,&DAT_0042af84,&DAT_0042af14,local_48,&DAT_0042af1c,
                     &DAT_0042af88,&DAT_00418c08,auStack_168,"");
          local_44 = &DAT_0042af18;
          (*(code *)PTR_RunSystemCmd_0042b0dc)
                    (0,s_iptables_0042ae70,&DAT_0042aef8,s_INPUT_0042ae88,local_30,&DAT_0042afcc,
                     s___dport_0042af6c,"80:80",&DAT_0042af18,puVar5,&DAT_0042af14,local_48,
                     &DAT_0042af1c,&DAT_0042aec0,"");
          (*(code *)PTR_RunSystemCmd_0042b0dc)
                    (0,s_iptables_0042ae70,&DAT_0042aef4,s_FORWARD_0042ae98,local_44,puVar5,
                     &DAT_0042af14,auStack_168,local_30,local_3c,&DAT_0042af1c,s_ACCEPT_0042aeb8,"")
          ;
          (*(code *)PTR_RunSystemCmd_0042b0dc)
                    (0,s_iptables_0042ae70,&DAT_0042aef4,s_POSTROUTING_0042aeac,local_34,local_40,
                     &DAT_0042af2c,auStack_e8,&DAT_0042af14,auStack_168,&DAT_0042af1c,&DAT_00418f64,
                     local_38,local_48,"");
        }
      }
      local_1e8 = 0;
      (*(code *)PTR_apmib_get_0042b1a0)(0xc3,&local_1e8);
      if (local_1e8 == 1) {
        pcVar3 = s_ACCEPT_0042aeb8;
      }
      else {
        pcVar3 = &DAT_0042aec0;
      }
      (*(code *)PTR_RunSystemCmd_0042b0dc)
                (0,s_iptables_0042ae70,&DAT_0042aef4,s_INPUT_0042ae88,&DAT_0042af28,&DAT_0042afd0,
                 s___icmp_type_0042af90,s_echo_request_0042af9c,&DAT_0042af18,puVar5,&DAT_0042af14,
                 auStack_148,&DAT_0042af1c,pcVar3,"");
      local_1e8 = 0;
      (*(code *)PTR_apmib_get_0042b1a0)(0x11b,&local_1e8);
      if (local_1e8 == 0) {
        local_30 = &DAT_0042af28;
        (*(code *)PTR_RunSystemCmd_0042b0dc)
                  (0,s_iptables_0042ae70,&DAT_0042aef4,s_INPUT_0042ae88,&DAT_0042af28,"2",
                   &DAT_0042af18,puVar5,&DAT_0042af1c,s_ACCEPT_0042aeb8,"");
        (*(code *)PTR_RunSystemCmd_0042b0dc)
                  (0,s_iptables_0042ae70,&DAT_0042aef4,s_FORWARD_0042ae98,local_30,&DAT_0042afc8,
                   &DAT_0042af20,&DAT_0042afc8,&DAT_0042af18,puVar5,"--destination","224.0.0.0/4",
                   &DAT_0042af1c,s_ACCEPT_0042aeb8,"");
        (*(code *)PTR_apmib_get_0042b1a0)(0x68,&local_1e8);
        if ((local_1e8 == 4) || (local_1e8 == 6)) {
          (*(code *)PTR_RunSystemCmd_0042b0dc)
                    (0,s_iptables_0042ae70,&DAT_0042aef4,s_FORWARD_0042ae98,&DAT_0042af28,
                     &DAT_0042afc8,&DAT_0042af20,&DAT_0042afc8,&DAT_0042af18,&local_17c,
                     "--destination","224.0.0.0/4",&DAT_0042af1c,s_ACCEPT_0042aeb8,"");
        }
      }
      local_30 = "br0";
      (*(code *)PTR_RunSystemCmd_0042b0dc)
                (0,s_iptables_0042ae70,&DAT_0042aef4,s_INPUT_0042ae88,&DAT_0042af18,&DAT_00417ad0,
                 &DAT_0042af1c,s_ACCEPT_0042aeb8,"");
      (*(code *)PTR_RunSystemCmd_0042b0dc)
                (0,s_iptables_0042ae70,&DAT_0042aef4,s_INPUT_0042ae88,&DAT_0042af18,&DAT_00418f6c,
                 &DAT_0042af1c,s_ACCEPT_0042aeb8,"");
      (*(code *)PTR_RunSystemCmd_0042b0dc)
                (0,s_iptables_0042ae70,&DAT_0042aef4,s_FORWARD_0042ae98,&DAT_0042af28,&DAT_00418f70,
                 &DAT_0042af18,puVar5,&DAT_0042af24,local_30,&DAT_0042af1c,s_ACCEPT_0042aeb8,"");
      local_30 = s___state_0042afc0;
      local_3c = s_state_0042afb8;
      local_44 = &DAT_0042af20;
      local_34 = s_RELATED_ESTABLISHED_0042afd8;
      (*(code *)PTR_RunSystemCmd_0042b0dc)
                (0,s_iptables_0042ae70,&DAT_0042aef4,s_FORWARD_0042ae98,&DAT_0042af18,puVar5,
                 &DAT_0042af20,s_state_0042afb8,s___state_0042afc0,s_RELATED_ESTABLISHED_0042afd8,
                 &DAT_0042af1c,s_ACCEPT_0042aeb8,"");
      if (local_1f4 == 6) {
        (*(code *)PTR_RunSystemCmd_0042b0dc)
                  (0,s_iptables_0042ae70,&DAT_0042aef4,s_FORWARD_0042ae98,&DAT_0042af18,puVar6,
                   local_44,local_3c,local_30,local_34,&DAT_0042af1c,s_ACCEPT_0042aeb8,"");
      }
      (*(code *)PTR_RunSystemCmd_0042b0dc)
                (0,s_iptables_0042ae70,&DAT_0042af30,&DAT_0042af34,&DAT_0042aef4,
                 s_POSTROUTING_0042aeac,&DAT_0042af24,puVar5,&DAT_0042af1c,s_MASQUERADE_0042aed4,"")
      ;
      if ((local_1f8 == 2) && (local_1f4 == 3)) {
        iVar1 = (*(code *)PTR_isFileExist_0042b0ac)("/etc/ppp/link");
        if (iVar1 != 0) {
          (*(code *)PTR_apmib_get_0042b1a0)(0xaa,&local_1d4);
          uVar2 = (*(code *)PTR_inet_ntoa_0042b108)(local_1d4);
          (*(code *)PTR_strcpy_0042b208)(auStack_1a0,uVar2);
          (*(code *)PTR_apmib_get_0042b1a0)(0xab,&local_1d0);
          uVar2 = (*(code *)PTR_inet_ntoa_0042b108)(local_1d0);
          (*(code *)PTR_strcpy_0042b208)(auStack_1b0,uVar2);
          uVar2 = (*(code *)PTR_inet_ntoa_0042b108)(local_1d0 & local_1d4);
          (*(code *)PTR_strcpy_0042b208)(auStack_1c0,uVar2);
          (*(code *)PTR_sprintf_0042b0e8)
                    (auStack_c8,"route del -net %s netmask %s dev br0 > /dev/null 2>&1",auStack_1c0,
                     auStack_1b0);
          (*(code *)PTR_system_0042b1ac)(auStack_c8);
          (*(code *)PTR_sprintf_0042b0e8)
                    (auStack_c8,"route add -net %s netmask %s dev br0",auStack_1c0,auStack_1b0);
          (*(code *)PTR_system_0042b1ac)(auStack_c8);
        }
      }
      set_QoS(local_1f8,local_1f4,local_1f0);
      pcVar3 = "echo 1 > /etc/ppp/firewall_lock";
      pcVar7 = (code *)PTR_system_0042b1ac;
    }
  }
LAB_00410484:
  (*pcVar7)(pcVar3);
  (*(code *)PTR_RunSystemCmd_0042b0dc)("/proc/sys/net/ipv4/ip_forward",&DAT_00417b58,"1","");
  return 0;
}

