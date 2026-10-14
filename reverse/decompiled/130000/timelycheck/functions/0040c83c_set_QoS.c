/* set_QoS @ 0040c83c */

undefined4 set_QoS(int param_1,int param_2,undefined4 param_3)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  undefined1 *puVar8;
  undefined4 *puVar9;
  undefined *puVar10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  char *pcVar14;
  char *pcVar15;
  char *pcVar16;
  char *pcVar17;
  char *pcVar18;
  char *pcVar19;
  int local_3b8;
  int local_3b4;
  int local_3b0;
  int local_3ac;
  int local_3a8;
  int local_3a4;
  undefined1 auStack_3a0 [4];
  undefined4 auStack_39c [5];
  char acStack_388 [32];
  char acStack_368 [32];
  char acStack_348 [32];
  char acStack_328 [32];
  char acStack_308 [64];
  undefined1 auStack_2c8 [128];
  char acStack_248 [128];
  undefined1 local_1c8 [16];
  char local_1b8;
  undefined1 local_1b7;
  undefined1 local_1b6;
  undefined1 local_1b5;
  undefined1 local_1b4;
  undefined1 local_1b3;
  undefined1 local_1b2;
  byte local_1b1;
  undefined4 local_1b0;
  undefined4 local_1ac;
  int local_1a8;
  int local_1a4;
  char local_1a0 [108];
  undefined1 auStack_134 [204];
  char *local_68;
  int local_64;
  int local_60;
  int local_5c;
  char *local_58;
  int local_54;
  char *local_50;
  char *local_4c;
  undefined1 *local_48;
  char *local_44;
  char *local_40;
  char *local_3c;
  char *local_38;
  char *local_34;
  char *local_30;
  char *local_2c;
  
  (*(code *)PTR_memset_0042b114)(acStack_388,0,0x20);
  (*(code *)PTR_memset_0042b114)(acStack_368,0,0x20);
  (*(code *)PTR_memset_0042b114)(acStack_348,0,0x20);
  (*(code *)PTR_memset_0042b114)(acStack_308,0,0x40);
  (*(code *)PTR_memset_0042b114)(acStack_328,0,0x20);
  local_3b8 = 0;
  local_3b4 = 0;
  local_3b0 = 0;
  local_3ac = 0;
  local_3a8 = 0;
  local_3a4 = 0;
  (*(code *)PTR_memset_0042b114)(auStack_2c8,0,0x80);
  (*(code *)PTR_memset_0042b114)(acStack_248,0,0x80);
  (*(code *)PTR_RunSystemCmd_0042b0dc)
            (0,s_iptables_0042ae70,&DAT_0042aefc,&DAT_0042af30,s_mangle_0042af38,"");
  (*(code *)PTR_RunSystemCmd_0042b0dc)
            (0,s_iptables_0042ae70,&DAT_0042af0c,&DAT_0042af30,s_mangle_0042af38,"");
  (*(code *)PTR_RunSystemCmd_0042b0dc)
            (0,s_iptables_0042ae70,&DAT_0042af10,&DAT_0042af30,s_mangle_0042af38,"");
  puVar9 = auStack_39c;
  if (param_1 == 2) {
    (*(code *)PTR_sprintf_0042b0e8)(puVar9,&DAT_00417aa0,param_3);
    (*(code *)PTR_getWispRptIfaceName_0042b1e8)(puVar9,param_3);
    if (1 < param_2 - 3U) goto LAB_0040ca5c;
LAB_0040ca4c:
    puVar9 = (undefined4 *)&DAT_00418cf8;
  }
  else {
    if ((param_1 == 0) && ((param_2 - 3U < 2 || (param_2 == 0x10)))) goto LAB_0040ca4c;
    puVar9 = &DAT_00417f3c;
LAB_0040ca5c:
    if (param_2 == 6) {
      puVar10 = &DAT_00418cf8;
      goto LAB_0040ca70;
    }
  }
  puVar10 = (undefined *)0x0;
LAB_0040ca70:
  iVar2 = (*(code *)PTR_getInAddr_0042b1c4)(puVar9,2,auStack_3a0);
  if (iVar2 == 0) {
    (*(code *)PTR_puts_0042b1b8)("No wan ip currently!");
  }
  else {
    (*(code *)PTR_apmib_get_0042b1a0)(0x133,&local_3b8);
    (*(code *)PTR_apmib_get_0042b1a0)(0x134,&local_3b4);
    (*(code *)PTR_apmib_get_0042b1a0)(0x135,&local_3b0);
    (*(code *)PTR_apmib_get_0042b1a0)(0x28c,&local_3a8);
    (*(code *)PTR_apmib_get_0042b1a0)(0x28b,&local_3ac);
    (*(code *)PTR_apmib_get_0042b1a0)(0x136,&local_3a4);
    (*(code *)PTR_RunSystemCmd_0042b0dc)
              (0,&DAT_00418d18,"qdisc",&DAT_0041803c,&DAT_0041804c,&DAT_00417ad0,&DAT_00418d24,"");
    (*(code *)PTR_RunSystemCmd_0042b0dc)
              (0,&DAT_00418d18,"qdisc",&DAT_0041803c,&DAT_0041804c,puVar9,&DAT_00418d24,"");
    (*(code *)PTR_RunSystemCmd_0042b0dc)
              (0,&DAT_00418d18,"qdisc",&DAT_0041803c,&DAT_0041804c,&DAT_00418cf8,&DAT_00418d24,"");
    iVar2 = (*(code *)PTR_strcmp_0042b0fc)(puVar9,&DAT_00417f3c);
    if ((iVar2 != 0) && (iVar2 = (*(code *)PTR_strcmp_0042b0fc)(puVar9,&DAT_00418cf8), iVar2 != 0))
    {
      (*(code *)PTR_RunSystemCmd_0042b0dc)
                (0,&DAT_00418d18,"qdisc",&DAT_0041803c,&DAT_0041804c,puVar9,&DAT_00418d24,"");
    }
    (*(code *)PTR_strcpy_0042b208)(auStack_2c8,&DAT_00418d2c);
    if (local_3b8 == 1) {
      (*(code *)PTR_strcpy_0042b208)(auStack_2c8,&DAT_00418d30);
    }
    (*(code *)PTR_RunSystemCmd_0042b0dc)("/proc/qos",&DAT_00417b58,auStack_2c8,"");
    if (local_3b8 == 1) {
      if (local_3b4 == 0) {
        local_64 = local_3b0;
        if (local_3b0 < 100) {
          local_64 = 100;
        }
      }
      else {
        local_64 = 0x19000;
      }
      if (local_3ac == 0) {
        local_60 = local_3a8;
        if (local_3a8 < 100) {
          local_60 = 100;
        }
      }
      else {
        local_60 = 0x19000;
      }
      local_2c = "2:0";
      (*(code *)PTR_RunSystemCmd_0042b0dc)
                (0,&DAT_00419010,"qdisc",&DAT_0041901c,&DAT_00419020,puVar9,&DAT_00419024,"handle",
                 &DAT_00418d40,&DAT_00419034,"default","2",&DAT_00419040,&DAT_00418d44,"");
      (*(code *)PTR_sprintf_0042b0e8)(acStack_388,"%dkbit",local_64);
      local_30 = "2:1";
      (*(code *)PTR_RunSystemCmd_0042b0dc)
                (0,&DAT_00419010,"class",&DAT_0041901c,&DAT_00419020,puVar9,"parent",local_2c,
                 "classid",&DAT_00418d50,&DAT_00419034,&DAT_0041905c,acStack_388,&DAT_00419064,
                 acStack_388,"quantum",&DAT_00418d54,"");
      local_2c = "2:2";
      (*(code *)PTR_RunSystemCmd_0042b0dc)
                (0,&DAT_00419010,"class",&DAT_0041901c,&DAT_00419020,puVar9,"parent",local_30,
                 "classid",&DAT_00418d5c,&DAT_00419034,&DAT_0041905c,"1kbit",&DAT_00419064,
                 acStack_388,&DAT_00419074,&DAT_00418d68,"quantum",&DAT_00418d54,"");
      (*(code *)PTR_RunSystemCmd_0042b0dc)
                (0,&DAT_00419010,"qdisc",&DAT_0041901c,&DAT_00419020,puVar9,"parent",local_2c,
                 "handle",&DAT_00418d6c,&DAT_0041907c,"perturb","10","");
      if ((puVar10 != (undefined *)0x0) &&
         (iVar2 = (*(code *)PTR_strcmp_0042b0fc)(puVar10,&DAT_00418cf8), iVar2 == 0)) {
        local_2c = "3:0";
        (*(code *)PTR_RunSystemCmd_0042b0dc)
                  (0,&DAT_00419010,"qdisc",&DAT_0041901c,&DAT_00419020,puVar10,&DAT_00419024,
                   "handle",&DAT_00418d74,&DAT_00419034,"default","2",&DAT_00419040,&DAT_00418d44,""
                  );
        (*(code *)PTR_sprintf_0042b0e8)(acStack_388,"%dkbit",local_64);
        local_30 = "3:1";
        (*(code *)PTR_RunSystemCmd_0042b0dc)
                  (0,&DAT_00419010,"class",&DAT_0041901c,&DAT_00419020,puVar10,"parent",local_2c,
                   "classid",&DAT_00418d78,&DAT_00419034,&DAT_0041905c,acStack_388,&DAT_00419064,
                   acStack_388,"quantum",&DAT_00418d54,"");
        local_2c = "3:2";
        (*(code *)PTR_RunSystemCmd_0042b0dc)
                  (0,&DAT_00419010,"class",&DAT_0041901c,&DAT_00419020,puVar10,"parent",local_30,
                   "classid",&DAT_00418d7c,&DAT_00419034,&DAT_0041905c,"1kbit",&DAT_00419064,
                   acStack_388,&DAT_00419074,&DAT_00418d68,"quantum",&DAT_00418d54,"");
        (*(code *)PTR_RunSystemCmd_0042b0dc)
                  (0,&DAT_00419010,"qdisc",&DAT_0041901c,&DAT_00419020,puVar10,"parent",local_2c,
                   "handle",&DAT_00418d80,&DAT_0041907c,"perturb","10","");
      }
      local_40 = "handle";
      local_3c = &DAT_00420000;
      local_38 = "2";
      local_30 = "5:0";
      (*(code *)PTR_RunSystemCmd_0042b0dc)
                (0,&DAT_00419010,"qdisc",&DAT_0041901c,&DAT_00419020,&DAT_00417ad0,&DAT_00419024,
                 "handle",&DAT_00418d88,&DAT_00419034,"default","2",&DAT_00419040,&DAT_00418d44,"");
      local_2c = acStack_388;
      (*(code *)PTR_sprintf_0042b0e8)(local_2c,"%dkbit",local_60);
      local_34 = "ceil";
      local_44 = "quantum";
      local_50 = "5:1";
      local_4c = "30000";
      local_48 = &DAT_00420000;
      (*(code *)PTR_RunSystemCmd_0042b0dc)
                (0,&DAT_00419010,"class",&DAT_0041901c,&DAT_00419020,&DAT_00417ad0,"parent",local_30
                 ,"classid",&DAT_00418d8c,&DAT_00419034,&DAT_0041905c,local_2c,&DAT_00419064,
                 local_2c,"quantum",&DAT_00418d54,"");
      local_30 = "5:2";
      (*(code *)PTR_RunSystemCmd_0042b0dc)
                (0,&DAT_00419010,local_48 + -0x6fbc,&DAT_0041901c,&DAT_00419020,&DAT_00417ad0,
                 "parent",local_50,"classid",&DAT_00418d90,&DAT_00419034,&DAT_0041905c,"1kbit",
                 local_34,local_2c,&DAT_00419074,&DAT_00418d68,local_44,local_4c,"");
      (*(code *)PTR_RunSystemCmd_0042b0dc)
                (0,&DAT_00419010,local_3c + -0x6fec,&DAT_0041901c,&DAT_00419020,&DAT_00417ad0,
                 "parent",local_30,local_40,&DAT_00418d94,&DAT_0041907c,"perturb","10","");
      pcVar1 = local_34;
      if (0 < local_3a4) {
        local_5c = 0x35;
        iVar2 = 0xd;
        for (local_54 = 1; local_54 <= local_3a4; local_54 = local_54 + 1) {
          (*(code *)PTR_memset_0042b114)(auStack_134,0,200);
          local_1c8[0] = (undefined1)local_54;
          (*(code *)PTR_apmib_get_0042b1a0)(0x8137,local_1c8);
          if (local_1b8 != '\0') {
            if (local_1a8 != 0) {
              (*(code *)PTR_sprintf_0042b0e8)(acStack_388,&DAT_00417aa4,iVar2);
              if ((local_1a0[0] == '\0') ||
                 (local_4c = local_1a0, iVar3 = (*(code *)PTR_strcmp_0042b0fc)(local_1a0,"Disable"),
                 iVar3 == 0)) {
                (*(code *)PTR_strcpy_0042b208)(acStack_248,"");
              }
              else {
                (*(code *)PTR_sprintf_0042b0e8)(acStack_248,"%s %s","-m layer7 --l7proto ",local_4c)
                ;
              }
              if ((local_1b1 & 4) == 0) {
                local_68 = acStack_388;
                if ((local_1b1 & 8) != 0) {
                  local_38 = acStack_308;
                  local_2c = &DAT_0042af1c;
                  local_30 = s_mangle_0042af38;
                  local_34 = &DAT_0042af30;
                  local_44 = &DAT_0042aeec;
                  local_50 = s___set_mark_0042b048;
                  local_4c = &DAT_00430000;
                  local_48 = &DAT_00430000;
                  local_3c = s_PREROUTING_0042aea0;
                  local_40 = acStack_248;
                  (*(code *)PTR_sprintf_0042b0e8)
                            (local_38,"%02x:%02x:%02x:%02x:%02x:%02x",local_1b7,local_1b6,local_1b5,
                             local_1b4,local_1b3,local_1b2);
                  pcVar13 = &DAT_0042af44;
                  pcVar14 = s___mac_source_0042af48;
                  pcVar6 = local_4c + -0x5190;
                  puVar8 = local_48 + -0x510c;
                  pcVar5 = local_3c;
                  pcVar11 = local_34;
                  pcVar12 = local_30;
                  pcVar15 = local_38;
                  pcVar16 = local_40;
                  pcVar17 = local_2c;
                  pcVar18 = local_44;
                  pcVar19 = local_50;
                  pcVar7 = local_68;
                  goto LAB_0040d868;
                }
                (*(code *)PTR_sprintf_0042b0e8)
                          (auStack_134,"%s %s %s %s %s %s %s %s %s %s",s_iptables_0042ae70,
                           &DAT_0042aef4,s_PREROUTING_0042aea0,&DAT_0042af30,s_mangle_0042af38,
                           acStack_248,&DAT_0042af1c,&DAT_0042aeec,s___set_mark_0042b048,local_68,""
                          );
              }
              else {
                local_4c = acStack_348;
                local_50 = acStack_368;
                uVar4 = (*(code *)PTR_inet_ntoa_0042b108)(local_1b0);
                (*(code *)PTR_strcpy_0042b208)(local_50,uVar4);
                local_68 = acStack_308;
                uVar4 = (*(code *)PTR_inet_ntoa_0042b108)(local_1ac);
                (*(code *)PTR_strcpy_0042b208)(local_4c,uVar4);
                (*(code *)PTR_sprintf_0042b0e8)(local_68,"%s-%s",local_50,local_4c);
                pcVar13 = s_iprange_0042b028;
                pcVar14 = s___src_range_0042b030;
                pcVar6 = s_iptables_0042ae70;
                puVar8 = &DAT_0042aef4;
                pcVar5 = s_PREROUTING_0042aea0;
                pcVar11 = &DAT_0042af30;
                pcVar12 = s_mangle_0042af38;
                pcVar15 = local_68;
                pcVar16 = acStack_248;
                pcVar17 = &DAT_0042af1c;
                pcVar18 = &DAT_0042aeec;
                pcVar19 = s___set_mark_0042b048;
                pcVar7 = acStack_388;
LAB_0040d868:
                (*(code *)PTR_sprintf_0042b0e8)
                          (auStack_134,"%s %s %s %s %s %s %s %s %s %s %s %s %s %s",pcVar6,puVar8,
                           pcVar5,pcVar11,pcVar12,&DAT_0042af20,pcVar13,pcVar14,pcVar15,pcVar16,
                           pcVar17,pcVar18,pcVar19,pcVar7,"");
              }
              (*(code *)PTR_system_0042b1ac)(auStack_134);
              local_2c = acStack_368;
              (*(code *)PTR_sprintf_0042b0e8)(local_2c,&DAT_00418e10,iVar2);
              (*(code *)PTR_sprintf_0042b0e8)(acStack_348,"%ldkbit",local_1a8);
              local_30 = acStack_308;
              (*(code *)PTR_sprintf_0042b0e8)(local_30,"%dkbit",local_64);
              (*(code *)PTR_sprintf_0042b0e8)(acStack_328,&DAT_00418e20,iVar2);
              pcVar5 = acStack_348;
              pcVar11 = local_30;
              if ((local_1b1 & 1) == 0) {
                pcVar5 = "1kbit";
                pcVar11 = acStack_348;
              }
              (*(code *)PTR_RunSystemCmd_0042b0dc)
                        (0,&DAT_00419010,"class",&DAT_0041901c,&DAT_00419020,puVar9,"parent",
                         &DAT_00418d50,"classid",local_2c,&DAT_00419034,&DAT_0041905c,pcVar5,pcVar1,
                         pcVar11,&DAT_00419074,"2","quantum",&DAT_00418d54,"");
              local_34 = acStack_328;
              local_30 = "handle";
              (*(code *)PTR_RunSystemCmd_0042b0dc)
                        (0,&DAT_00419010,"qdisc",&DAT_0041901c,&DAT_00419020,puVar9,"parent",
                         acStack_368,"handle",local_34,&DAT_0041907c,"perturb","10","");
              local_2c = "prio";
              (*(code *)PTR_RunSystemCmd_0042b0dc)
                        (0,&DAT_00419010,"filter",&DAT_0041901c,&DAT_00419020,puVar9,"parent",
                         &DAT_00418d40,&DAT_00419074,&DAT_00418e28,local_30,acStack_388,
                         &DAT_00419090,"classid",acStack_368,"");
              (*(code *)PTR_sprintf_0042b0e8)(acStack_368,&DAT_00418e2c,iVar2);
              local_68 = acStack_348;
              (*(code *)PTR_sprintf_0042b0e8)(local_68,"%ldkbit",local_1a8);
              local_58 = acStack_308;
              (*(code *)PTR_sprintf_0042b0e8)(local_58,"%dkbit",local_64);
              (*(code *)PTR_sprintf_0042b0e8)(local_34,&DAT_00418e34,iVar2);
              if ((puVar10 != (undefined *)0x0) &&
                 (iVar3 = (*(code *)PTR_strcmp_0042b0fc)(puVar10,&DAT_00418cf8), iVar3 == 0)) {
                pcVar5 = local_58;
                pcVar11 = local_68;
                if ((local_1b1 & 1) == 0) {
                  pcVar5 = local_68;
                  pcVar11 = "1kbit";
                }
                (*(code *)PTR_RunSystemCmd_0042b0dc)
                          (0,&DAT_00419010,"class",&DAT_0041901c,&DAT_00419020,puVar10,"parent",
                           &DAT_00418d78,"classid",acStack_368,&DAT_00419034,&DAT_0041905c,pcVar11,
                           pcVar1,pcVar5,local_2c,"2","quantum",&DAT_00418d54,"");
                local_30 = acStack_368;
                local_2c = &DAT_00420000;
                local_34 = "handle";
                (*(code *)PTR_RunSystemCmd_0042b0dc)
                          (0,&DAT_00419010,"qdisc",&DAT_0041901c,&DAT_00419020,puVar10,"parent",
                           local_30,"handle",acStack_328,&DAT_0041907c,"perturb","10","");
                (*(code *)PTR_RunSystemCmd_0042b0dc)
                          (0,local_2c + -0x6ff0,"filter",&DAT_0041901c,&DAT_00419020,puVar10,
                           "parent",&DAT_00418d74,&DAT_00419074,&DAT_00418e28,local_34,acStack_388,
                           &DAT_00419090,"classid",local_30,"");
              }
              iVar2 = iVar2 + 1;
            }
            if (local_1a4 != 0) {
              local_68 = acStack_388;
              (*(code *)PTR_sprintf_0042b0e8)(acStack_388,&DAT_00417aa4,local_5c);
              if ((local_1b1 & 4) == 0) {
                if ((local_1b1 & 8) != 0) {
                  local_38 = acStack_308;
                  local_2c = &DAT_0042af1c;
                  local_30 = s_mangle_0042af38;
                  local_34 = &DAT_0042af30;
                  local_44 = &DAT_0042aeec;
                  local_50 = s___set_mark_0042b048;
                  local_4c = &DAT_00430000;
                  local_48 = &DAT_00430000;
                  local_3c = s_POSTROUTING_0042aeac;
                  local_40 = acStack_248;
                  (*(code *)PTR_sprintf_0042b0e8)
                            (local_38,"%02x:%02x:%02x:%02x:%02x:%02x",local_1b7,local_1b6,local_1b5,
                             local_1b4,local_1b3,local_1b2);
                  pcVar6 = &DAT_0042af44;
                  pcVar13 = s___mac_destination_0042af58;
                  pcVar7 = local_4c + -0x5190;
                  puVar8 = local_48 + -0x510c;
                  pcVar5 = local_3c;
                  pcVar11 = local_34;
                  pcVar12 = local_30;
                  pcVar15 = local_38;
                  pcVar16 = local_40;
                  pcVar17 = local_2c;
                  pcVar18 = local_44;
                  pcVar19 = local_50;
                  goto LAB_0040e0a4;
                }
                (*(code *)PTR_sprintf_0042b0e8)
                          (auStack_134,"%s %s %s %s %s %s %s %s %s %s",s_iptables_0042ae70,
                           &DAT_0042aef4,s_POSTROUTING_0042aeac,&DAT_0042af30,s_mangle_0042af38,
                           acStack_248,&DAT_0042af1c,&DAT_0042aeec,s___set_mark_0042b048,local_68,""
                          );
              }
              else {
                local_4c = acStack_348;
                local_50 = acStack_368;
                uVar4 = (*(code *)PTR_inet_ntoa_0042b108)(local_1b0);
                (*(code *)PTR_strcpy_0042b208)(local_50,uVar4);
                local_58 = acStack_308;
                uVar4 = (*(code *)PTR_inet_ntoa_0042b108)(local_1ac);
                (*(code *)PTR_strcpy_0042b208)(local_4c,uVar4);
                (*(code *)PTR_sprintf_0042b0e8)(local_58,"%s-%s",local_50,local_4c);
                pcVar6 = s_iprange_0042b028;
                pcVar13 = s___dst_range_0042b03c;
                pcVar7 = s_iptables_0042ae70;
                puVar8 = &DAT_0042aef4;
                pcVar5 = s_POSTROUTING_0042aeac;
                pcVar11 = &DAT_0042af30;
                pcVar12 = s_mangle_0042af38;
                pcVar15 = local_58;
                pcVar16 = acStack_248;
                pcVar17 = &DAT_0042af1c;
                pcVar18 = &DAT_0042aeec;
                pcVar19 = s___set_mark_0042b048;
LAB_0040e0a4:
                (*(code *)PTR_sprintf_0042b0e8)
                          (auStack_134,"%s %s %s %s %s %s %s %s %s %s %s %s %s %s",pcVar7,puVar8,
                           pcVar5,pcVar11,pcVar12,&DAT_0042af20,pcVar6,pcVar13,pcVar15,pcVar16,
                           pcVar17,pcVar18,pcVar19,local_68,"");
              }
              (*(code *)PTR_system_0042b1ac)(auStack_134);
              local_2c = acStack_368;
              (*(code *)PTR_sprintf_0042b0e8)(local_2c,&DAT_00418e3c,local_5c);
              (*(code *)PTR_sprintf_0042b0e8)(acStack_348,"%ldkbit",local_1a4);
              local_30 = acStack_308;
              (*(code *)PTR_sprintf_0042b0e8)(local_30,"%dkbit",local_60);
              (*(code *)PTR_sprintf_0042b0e8)(acStack_328,&DAT_00418e44,local_5c);
              pcVar5 = acStack_348;
              pcVar11 = local_30;
              if ((local_1b1 & 1) == 0) {
                pcVar5 = "1kbit";
                pcVar11 = acStack_348;
              }
              (*(code *)PTR_RunSystemCmd_0042b0dc)
                        (0,&DAT_00419010,"class",&DAT_0041901c,&DAT_00419020,&DAT_00417ad0,"parent",
                         &DAT_00418d8c,"classid",local_2c,&DAT_00419034,&DAT_0041905c,pcVar5,pcVar1,
                         pcVar11,&DAT_00419074,"2","quantum",&DAT_00418d54,"");
              local_30 = acStack_368;
              local_2c = &DAT_00420000;
              local_34 = "handle";
              (*(code *)PTR_RunSystemCmd_0042b0dc)
                        (0,&DAT_00419010,"qdisc",&DAT_0041901c,&DAT_00419020,&DAT_00417ad0,"parent",
                         local_30,"handle",acStack_328,&DAT_0041907c,"perturb","10","");
              local_5c = local_5c + 1;
              (*(code *)PTR_RunSystemCmd_0042b0dc)
                        (0,local_2c + -0x6ff0,"filter",&DAT_0041901c,&DAT_00419020,&DAT_00417ad0,
                         "parent",&DAT_00418d88,&DAT_00419074,&DAT_00418e28,local_34,acStack_388,
                         &DAT_00419090,"classid",local_30,"");
            }
          }
        }
      }
    }
  }
  return 0;
}

