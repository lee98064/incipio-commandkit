/* FUN_0040b270 @ 0040b270 */

undefined4 FUN_0040b270(undefined4 param_1,undefined4 param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  int local_100;
  undefined1 auStack_fc [32];
  undefined1 auStack_dc [60];
  undefined4 local_a0;
  uint local_9c;
  char local_98;
  int local_60;
  undefined1 *local_5c;
  undefined1 *local_58;
  int local_54;
  int local_50;
  int local_4c;
  undefined *local_48;
  char *local_44;
  undefined1 *local_40;
  undefined *local_3c;
  undefined *local_38;
  undefined *local_34;
  char *local_30;
  
  local_100 = 0;
  (*(code *)PTR_apmib_get_0042b1a0)(0x6f,&local_100);
  local_54 = 0;
  local_50 = 0;
  local_4c = 0;
  for (local_60 = 1; local_60 <= local_100; local_60 = local_60 + 1) {
    local_30 = (char *)&local_a0;
    (*(code *)PTR_memset_0042b114)(local_30,0,0x3d);
    local_a0 = CONCAT13((char)local_60,local_a0._1_3_);
    (*(code *)PTR_apmib_get_0042b1a0)(0x8070,local_30);
    uVar2 = (*(code *)PTR_inet_ntoa_0042b108)(local_a0);
    (*(code *)PTR_strcpy_0042b208)(auStack_fc,uVar2);
    (*(code *)PTR_sprintf_0042b0e8)(auStack_dc,"%d:%d",local_9c >> 0x10,local_9c & 0xffff);
    if ((local_9c >> 0x10 < 0x50) && (0x50 < (local_9c & 0xffff))) {
      (*(code *)PTR_RunSystemCmd_0042b0dc)
                (0,s_iptables_0042ae70,&DAT_0042aef8,s_INPUT_0042ae88,&DAT_0042af28,&DAT_0042afcc,
                 s___dport_0042af6c,"80:80",&DAT_0042af18,param_1,&DAT_0042af14,param_2,
                 &DAT_0042af1c,&DAT_0042aec0,"");
    }
    if (local_98 == '\x01') {
      local_40 = auStack_dc;
      local_38 = auStack_fc;
      local_30 = &DAT_00430000;
      local_34 = &DAT_00430000;
      (*(code *)PTR_RunSystemCmd_0042b0dc)
                (0,s_iptables_0042ae70,&DAT_0042aef4,s_PREROUTING_0042aea0,&DAT_0042af30,
                 &DAT_0042af34,&DAT_0042af28,&DAT_0042afcc,s___dport_0042af6c,local_40,&DAT_0042af14
                 ,param_2,&DAT_0042af1c,&DAT_0042af88,&DAT_00418b18,local_38,"");
      (*(code *)PTR_RunSystemCmd_0042b0dc)
                (0,local_34 + -0x5190,(undefined4 *)((int)local_30 + -0x510c),s_FORWARD_0042ae98,
                 &DAT_0042af18,param_1,&DAT_0042af14,local_38,&DAT_0042af28,&DAT_0042afcc,
                 s___dport_0042af6c,local_40,&DAT_0042af1c,s_ACCEPT_0042aeb8,"");
    }
    if (local_98 == '\x02') {
      local_48 = auStack_dc;
      local_40 = auStack_fc;
      local_30 = &DAT_00430000;
      local_34 = &DAT_00430000;
      local_38 = &DAT_0042afc8;
      (*(code *)PTR_RunSystemCmd_0042b0dc)
                (0,s_iptables_0042ae70,&DAT_0042aef4,s_PREROUTING_0042aea0,&DAT_0042af30,
                 &DAT_0042af34,&DAT_0042af28,&DAT_0042afc8,s___dport_0042af6c,local_48,&DAT_0042af14
                 ,param_2,&DAT_0042af1c,&DAT_0042af88,&DAT_00418b18,local_40,"");
      (*(code *)PTR_RunSystemCmd_0042b0dc)
                (0,local_34 + -0x5190,(undefined4 *)((int)local_30 + -0x510c),s_FORWARD_0042ae98,
                 &DAT_0042af18,param_1,&DAT_0042af14,local_40,&DAT_0042af28,local_38,
                 s___dport_0042af6c,local_48,&DAT_0042af1c,s_ACCEPT_0042aeb8,"");
    }
    if (local_98 == '\x03') {
      local_58 = auStack_fc;
      local_30 = &DAT_0042af34;
      local_34 = &DAT_0042af88;
      local_38 = &DAT_00418b18;
      local_40 = &DAT_00430000;
      local_5c = auStack_dc;
      (*(code *)PTR_RunSystemCmd_0042b0dc)
                (0,s_iptables_0042ae70,&DAT_0042aef4,s_PREROUTING_0042aea0,&DAT_0042af30,
                 &DAT_0042af34,&DAT_0042af28,&DAT_0042afcc,s___dport_0042af6c,auStack_dc,
                 &DAT_0042af14,param_2,&DAT_0042af1c,&DAT_0042af88,&DAT_00418b18,local_58,"");
      local_44 = s_ACCEPT_0042aeb8;
      local_3c = &DAT_00430000;
      (*(code *)PTR_RunSystemCmd_0042b0dc)
                (0,s_iptables_0042ae70,&DAT_0042aef4,s_FORWARD_0042ae98,&DAT_0042af18,param_1,
                 &DAT_0042af14,local_58,&DAT_0042af28,&DAT_0042afcc,s___dport_0042af6c,local_5c,
                 &DAT_0042af1c,s_ACCEPT_0042aeb8,"");
      local_48 = &DAT_0042afc8;
      (*(code *)PTR_RunSystemCmd_0042b0dc)
                (0,s_iptables_0042ae70,&DAT_0042aef4,local_40 + -0x5160,&DAT_0042af30,local_30,
                 &DAT_0042af28,&DAT_0042afc8,s___dport_0042af6c,local_5c,&DAT_0042af14,param_2,
                 &DAT_0042af1c,local_34,local_38,local_58,"");
      (*(code *)PTR_RunSystemCmd_0042b0dc)
                (0,s_iptables_0042ae70,&DAT_0042aef4,local_3c + -0x5168,&DAT_0042af18,param_1,
                 &DAT_0042af14,local_58,&DAT_0042af28,local_48,s___dport_0042af6c,local_5c,
                 &DAT_0042af1c,local_44,"");
    }
    if ((((local_50 == 0) && (local_9c >> 0x10 < 0x6bc)) && (0x6ba < (local_9c & 0xffff))) &&
       ((local_98 == '\x03' || (local_98 == '\x01')))) {
      local_30 = &DAT_00430000;
      local_34 = &DAT_00430000;
      local_38 = &DAT_00418b20;
      (*(code *)PTR_RunSystemCmd_0042b0dc)
                (0,s_iptables_0042ae70,&DAT_0042aef4,s_PREROUTING_0042aea0,&DAT_0042af30,
                 &DAT_0042af34,&DAT_0042af18,param_1,&DAT_0042af28,&DAT_00418b20,&DAT_0042af14,
                 param_2,&DAT_0042af1c,&DAT_0042af88,&DAT_00418b18,auStack_fc,"");
      (*(code *)PTR_RunSystemCmd_0042b0dc)
                (0,local_34 + -0x5190,(undefined4 *)((int)local_30 + -0x510c),s_FORWARD_0042ae98,
                 &DAT_0042af28,local_38,&DAT_0042af18,param_1,&DAT_0042af1c,s_ACCEPT_0042aeb8,"");
    }
    if (((local_4c == 0) && (local_9c >> 0x10 < 0x6a6)) &&
       ((0x6a4 < (local_9c & 0xffff) && ((byte)(local_98 - 2U) < 2)))) {
      (*(code *)PTR_RunSystemCmd_0042b0dc)("/proc/nat_l2tp",&DAT_00417a78,&DAT_00418c68,"");
    }
    if ((((local_54 == 0) && (local_9c >> 0x10 < 0x1f5)) && (499 < (local_9c & 0xffff))) &&
       ((byte)(local_98 - 2U) < 2)) {
      local_48 = auStack_fc;
      local_3c = &DAT_00418b34;
      local_30 = &DAT_0042af34;
      local_34 = &DAT_0042af88;
      local_38 = &DAT_00418b18;
      local_40 = &DAT_00430000;
      (*(code *)PTR_RunSystemCmd_0042b0dc)
                (0,s_iptables_0042ae70,&DAT_0042aef4,s_PREROUTING_0042aea0,&DAT_0042af30,
                 &DAT_0042af34,&DAT_0042af28,&DAT_00418b34,&DAT_0042af14,param_2,&DAT_0042af1c,
                 &DAT_0042af88,&DAT_00418b18,local_48,"");
      puVar1 = local_48;
      local_48 = &DAT_0042afc8;
      local_44 = "4500";
      (*(code *)PTR_RunSystemCmd_0042b0dc)
                (0,s_iptables_0042ae70,&DAT_0042aef4,local_40 + -0x5160,&DAT_0042af30,local_30,
                 &DAT_0042af28,&DAT_0042afc8,s___dport_0042af6c,&DAT_00418b38,&DAT_0042af14,param_2,
                 &DAT_0042af1c,local_34,local_38,puVar1,"");
      local_30 = s_ACCEPT_0042aeb8;
      local_34 = &DAT_00430000;
      (*(code *)PTR_RunSystemCmd_0042b0dc)
                (0,s_iptables_0042ae70,&DAT_0042aef4,s_FORWARD_0042ae98,&DAT_0042af28,local_48,
                 s___dport_0042af6c,local_44,&DAT_0042af1c,s_ACCEPT_0042aeb8,"");
      (*(code *)PTR_RunSystemCmd_0042b0dc)
                (0,s_iptables_0042ae70,&DAT_0042aef4,local_34 + -0x5168,&DAT_0042af28,local_3c,
                 &DAT_0042af18,param_1,&DAT_0042af1c,local_30,"");
    }
    local_4c = 1;
    local_50 = 1;
    local_54 = 1;
  }
  return 0;
}

