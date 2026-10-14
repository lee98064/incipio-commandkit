/* FUN_0040e64c @ 0040e64c */

void FUN_0040e64c(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  undefined4 local_48 [2];
  undefined *local_40;
  char *local_3c;
  undefined *local_38;
  char *local_34;
  char *local_30;
  
  local_58 = 0;
  local_54 = 0;
  local_50 = 0;
  local_4c = 0;
  local_48[0] = 0;
  (*(code *)PTR_RunSystemCmd_0042b0dc)
            ("/proc/sys/net/ipv4/ip_forward",&DAT_00417b58,&DAT_00418d58,"");
  (*(code *)PTR_RunSystemCmd_0042b0dc)("/proc/fast_nat",&DAT_00417b58,"2","");
  (*(code *)PTR_RunSystemCmd_0042b0dc)(0,s_iptables_0042ae70,&DAT_0042aefc,"");
  (*(code *)PTR_RunSystemCmd_0042b0dc)
            (0,s_iptables_0042ae70,&DAT_0042af30,&DAT_0042af34,&DAT_0042aefc,s_POSTROUTING_0042aeac,
             "");
  (*(code *)PTR_RunSystemCmd_0042b0dc)
            (0,s_iptables_0042ae70,&DAT_0042af30,&DAT_0042af34,&DAT_0042aefc,s_PREROUTING_0042aea0,
             "");
  (*(code *)PTR_RunSystemCmd_0042b0dc)
            (0,s_iptables_0042ae70,&DAT_0042aefc,&DAT_0042af30,s_mangle_0042af38,"");
  (*(code *)PTR_RunSystemCmd_0042b0dc)(0,s_iptables_0042ae70,&DAT_0042aefc,s_INPUT_0042ae88,"");
  (*(code *)PTR_RunSystemCmd_0042b0dc)(0,s_iptables_0042ae70,&DAT_0042aefc,s_OUTPUT_0042ae90,"");
  (*(code *)PTR_RunSystemCmd_0042b0dc)(0,s_iptables_0042ae70,&DAT_0042aefc,s_FORWARD_0042ae98,"");
  (*(code *)PTR_RunSystemCmd_0042b0dc)
            (0,s_iptables_0042ae70,&DAT_0042af08,s_OUTPUT_0042ae90,s_ACCEPT_0042aeb8,"");
  if (param_1 == 1) {
    (*(code *)PTR_RunSystemCmd_0042b0dc)
              (0,s_iptables_0042ae70,&DAT_0042af08,s_INPUT_0042ae88,s_ACCEPT_0042aeb8,"");
LAB_0040e8c0:
    pcVar2 = &DAT_0042aec0;
  }
  else {
    (*(code *)PTR_RunSystemCmd_0042b0dc)
              (0,s_iptables_0042ae70,&DAT_0042af08,s_INPUT_0042ae88,&DAT_0042aec0,"");
    if (param_1 != 3) goto LAB_0040e8c0;
    pcVar2 = s_ACCEPT_0042aeb8;
  }
  (*(code *)PTR_RunSystemCmd_0042b0dc)
            (0,s_iptables_0042ae70,&DAT_0042af08,s_FORWARD_0042ae98,pcVar2,"");
  iVar1 = (*(code *)PTR_isFileExist_0042b0ac)("/bin/routed");
  (*(code *)PTR_isFileExist_0042b0ac)("/proc/hw_nat");
  if (iVar1 == 0) {
    if (param_1 == 1) {
      return;
    }
  }
  else {
    if (param_1 == 1) {
      return;
    }
    (*(code *)PTR_apmib_get_0042b1a0)(0x285,&local_54);
    if (local_54 == 0) {
      (*(code *)PTR_RunSystemCmd_0042b0dc)
                (0,s_iptables_0042ae70,&DAT_0042af08,s_INPUT_0042ae88,s_ACCEPT_0042aeb8,"");
      (*(code *)PTR_RunSystemCmd_0042b0dc)
                (0,s_iptables_0042ae70,&DAT_0042af08,s_FORWARD_0042ae98,s_ACCEPT_0042aeb8,"");
      (*(code *)PTR_RunSystemCmd_0042b0dc)("/proc/fast_nat",&DAT_00417b58,&DAT_00418d58,"");
      return;
    }
  }
  (*(code *)PTR_apmib_get_0042b1a0)(0xef,&local_58);
  (*(code *)PTR_apmib_get_0042b1a0)(0xf0,&local_4c);
  (*(code *)PTR_RunSystemCmd_0042b0dc)("/proc/filter_table",&DAT_00417b58,"flush","");
  (*(code *)PTR_RunSystemCmd_0042b0dc)("/proc/filter_table",&DAT_00417b58,"init","3","");
  if ((local_58 == 0) || (local_4c < 1)) {
    (*(code *)PTR_RunSystemCmd_0042b0dc)("/proc/filter_table",&DAT_00417b58,"flush","");
  }
  else {
    FUN_0040e43c();
  }
  (*(code *)PTR_RunSystemCmd_0042b0dc)("/proc/sw_nat",&DAT_00417b58,&DAT_00418ec4,"");
  local_58 = 0;
  (*(code *)PTR_apmib_get_0042b1a0)(0x74,&local_58);
  (*(code *)PTR_apmib_get_0042b1a0)(0x75,&local_4c);
  if ((local_58 == 1) && (0 < local_4c)) {
    FUN_0040c060();
  }
  local_58 = 0;
  (*(code *)PTR_apmib_get_0042b1a0)(0x7a,&local_58);
  (*(code *)PTR_apmib_get_0042b1a0)(0x7b,&local_4c);
  if ((local_58 == 1) && (0 < local_4c)) {
    FUN_0040c3a0();
  }
  local_58 = 0;
  (*(code *)PTR_apmib_get_0042b1a0)(0x80,&local_58);
  (*(code *)PTR_apmib_get_0042b1a0)(0x81,&local_4c);
  if ((local_58 == 1) && (0 < local_4c)) {
    FUN_0040bd04();
  }
  (*(code *)PTR_apmib_get_0042b1a0)(0xf7,&local_58);
  if (local_58 == 0) {
    pcVar4 = &DAT_0042aec0;
    pcVar2 = &DAT_0042af28;
    pcVar3 = &DAT_0042afc8;
  }
  else {
    if (local_58 != 1) goto LAB_0040eda0;
    local_30 = &DAT_0042afc8;
    local_34 = &DAT_0042af28;
    (*(code *)PTR_RunSystemCmd_0042b0dc)
              (0,s_iptables_0042ae70,&DAT_0042aef4,s_FORWARD_0042ae98,&DAT_0042af28,&DAT_0042afc8,
               s___sport_0042af74,&DAT_00418ec8,&DAT_0042af1c,s_ACCEPT_0042aeb8,"");
    pcVar4 = s_ACCEPT_0042aeb8;
    pcVar2 = local_34;
    pcVar3 = local_30;
  }
  (*(code *)PTR_RunSystemCmd_0042b0dc)
            (0,s_iptables_0042ae70,&DAT_0042aef4,s_FORWARD_0042ae98,pcVar2,pcVar3,s___dport_0042af6c
             ,&DAT_00418ec8,&DAT_0042af1c,pcVar4,"");
LAB_0040eda0:
  (*(code *)PTR_apmib_get_0042b1a0)(0xf6,&local_50);
  if (local_50 == 0) {
    (*(code *)PTR_RunSystemCmd_0042b0dc)
              (0,s_iptables_0042ae70,&DAT_0042aef4,s_FORWARD_0042ae98,&DAT_0042af28,&DAT_0042afcc,
               s___dport_0042af6c,&DAT_00418ed0,&DAT_0042af1c,&DAT_0042aec0,"");
  }
  else if (local_50 == 1) {
    local_30 = "1723";
    local_34 = &DAT_0042afcc;
    (*(code *)PTR_RunSystemCmd_0042b0dc)
              (0,s_iptables_0042ae70,&DAT_0042aef4,s_FORWARD_0042ae98,&DAT_0042af28,&DAT_0042afcc,
               s___dport_0042af6c,&DAT_00418ed0,&DAT_0042af1c,s_ACCEPT_0042aeb8,"");
    (*(code *)PTR_RunSystemCmd_0042b0dc)
              (0,s_iptables_0042ae70,&DAT_0042aef4,s_FORWARD_0042ae98,&DAT_0042af28,local_34,
               s___sport_0042af74,local_30,&DAT_0042af1c,s_ACCEPT_0042aeb8,"");
    (*(code *)PTR_RunSystemCmd_0042b0dc)
              (0,s_iptables_0042ae70,&DAT_0042aef4,s_FORWARD_0042ae98,&DAT_0042af28,&DAT_00418ed8,
               &DAT_0042af1c,s_ACCEPT_0042aeb8,"");
  }
  local_38 = &DAT_0042af18;
  local_40 = &DAT_0042af28;
  (*(code *)PTR_RunSystemCmd_0042b0dc)
            (0,s_iptables_0042ae70,&DAT_0042aef4,s_FORWARD_0042ae98,&DAT_0042af28,&DAT_0042afc8,
             &DAT_0042af20,&DAT_0042afc8,&DAT_0042af18,param_4,"--destination","224.0.0.0/4",
             &DAT_0042af1c,s_ACCEPT_0042aeb8,"");
  local_3c = s_RELATED_ESTABLISHED_0042afd8;
  local_30 = s___state_0042afc0;
  local_34 = s_state_0042afb8;
  (*(code *)PTR_RunSystemCmd_0042b0dc)
            (0,s_iptables_0042ae70,&DAT_0042aef4,s_INPUT_0042ae88,&DAT_0042af20,s_state_0042afb8,
             s___state_0042afc0,s_RELATED_ESTABLISHED_0042afd8,&DAT_0042af1c,s_ACCEPT_0042aeb8,"");
  (*(code *)PTR_RunSystemCmd_0042b0dc)
            (0,s_iptables_0042ae70,&DAT_0042af00,s_FORWARD_0042ae98,local_40,&DAT_0042afcc,
             s___tcp_flags_0042aff4,s_SYN_RST_0042b000,&DAT_0042b008,&DAT_0042af1c,s_TCPMSS_0042b020
             ,s___clamp_mss_to_pmtu_0042b00c,"");
  (*(code *)PTR_RunSystemCmd_0042b0dc)
            (0,s_iptables_0042ae70,&DAT_0042aef4,s_FORWARD_0042ae98,&DAT_0042af20,local_34,local_30,
             s_INVALID_0042afec,&DAT_0042af1c,&DAT_0042aec0,"");
  (*(code *)PTR_RunSystemCmd_0042b0dc)
            (0,s_iptables_0042ae70,&DAT_0042aef4,s_FORWARD_0042ae98,local_38,&DAT_00417ad0,
             &DAT_0042af1c,s_ACCEPT_0042aeb8,"");
  if (param_2 == 4) {
    (*(code *)PTR_RunSystemCmd_0042b0dc)
              (0,s_iptables_0042ae70,&DAT_0042aef4,s_FORWARD_0042ae98,local_38,param_3,&DAT_0042af20
               ,local_34,local_30,local_3c,&DAT_0042af1c,s_ACCEPT_0042aeb8,"");
  }
  (*(code *)PTR_RunSystemCmd_0042b0dc)("/tmp/firewall_igd",&DAT_00417b58,"1","");
  (*(code *)PTR_apmib_get_0042b1a0)(0xe5,local_48);
  FUN_0040c5f8(local_48[0],param_1);
  if ((param_2 == 4) || (param_2 == 6)) {
    (*(code *)PTR_RunSystemCmd_0042b0dc)
              (0,s_iptables_0042ae70,&DAT_0042af30,&DAT_0042af34,&DAT_0042aef4,
               s_POSTROUTING_0042aeac,&DAT_0042af24,param_3,&DAT_0042af1c,s_MASQUERADE_0042aed4,"");
  }
  return;
}

