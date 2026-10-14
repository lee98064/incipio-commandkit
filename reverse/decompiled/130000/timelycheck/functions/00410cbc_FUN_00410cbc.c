/* FUN_00410cbc @ 00410cbc */

void FUN_00410cbc(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 int param_5)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 local_298;
  int local_294;
  undefined4 local_290;
  int local_28c;
  int local_288;
  undefined4 local_284;
  uint local_280 [8];
  undefined1 auStack_260 [32];
  undefined1 auStack_240 [32];
  undefined1 auStack_220 [32];
  undefined1 auStack_200 [32];
  undefined1 auStack_1e0 [32];
  undefined1 auStack_1c0 [32];
  uint local_1a0 [16];
  undefined1 auStack_160 [100];
  undefined1 auStack_fc [100];
  undefined1 local_98;
  undefined1 local_97;
  undefined1 local_96;
  undefined1 local_95;
  undefined1 local_94;
  undefined1 local_93;
  undefined1 local_92;
  undefined1 local_91;
  undefined1 local_90;
  undefined1 local_8f;
  undefined1 local_8e;
  undefined1 local_8d;
  undefined1 local_8c;
  undefined1 local_8b;
  undefined1 local_8a;
  undefined1 local_89;
  undefined1 local_88;
  undefined1 local_87;
  undefined1 local_86;
  undefined1 local_85;
  undefined1 local_84;
  undefined1 local_83;
  undefined1 local_82;
  undefined1 local_81;
  undefined1 local_80;
  undefined1 local_7f;
  undefined1 local_7e;
  undefined1 local_7d;
  undefined1 local_7c;
  undefined1 local_7b;
  undefined1 local_7a;
  undefined1 local_79;
  undefined1 local_78;
  undefined1 local_77;
  undefined1 local_76;
  undefined1 local_75;
  undefined1 local_74;
  undefined1 local_73;
  uint *local_30;
  uint local_2c;
  
  local_298 = 0;
  (*(code *)PTR_memset_0042b114)(auStack_160,0,100);
  (*(code *)PTR_memset_0042b114)(local_1a0,0,0x40);
  (*(code *)PTR_memset_0042b114)(auStack_260,0,0x20);
  local_294 = 0;
  local_290 = 0;
  local_28c = 0;
  (*(code *)PTR_apmib_get_0042b1a0)(0x1f5,&local_28c);
  (*(code *)PTR_apmib_get_0042b1a0)(0x14d,local_1a0);
  uVar2 = (*(code *)PTR_inet_ntoa_0042b108)(local_1a0[0]);
  (*(code *)PTR_strcpy_0042b208)(auStack_200,uVar2);
  uVar1 = local_1a0[0];
  if (local_28c == 1) {
    (*(code *)PTR_apmib_get_0042b1a0)(0x153,local_1a0);
    uVar2 = (*(code *)PTR_inet_ntoa_0042b108)(local_1a0[0]);
    (*(code *)PTR_strcpy_0042b208)(auStack_1e0,uVar2);
    (*(code *)PTR_apmib_get_0042b1a0)(0x14b,local_1a0);
    uVar2 = (*(code *)PTR_inet_ntoa_0042b108)(local_1a0[0]);
    (*(code *)PTR_strcpy_0042b208)(auStack_240,uVar2);
    local_30 = (uint *)local_1a0[0];
    (*(code *)PTR_apmib_get_0042b1a0)(0x14c,local_1a0);
    uVar2 = (*(code *)PTR_inet_ntoa_0042b108)(local_1a0[0]);
    (*(code *)PTR_strcpy_0042b208)(auStack_220,uVar2);
    local_2c = local_1a0[0];
    (*(code *)PTR_RunSystemCmd_0042b0dc)(0,"ifconfig",param_2,auStack_240,"netmask",auStack_220,"");
    (*(code *)PTR_RunSystemCmd_0042b0dc)
              (0,"route",&DAT_0041803c,"default",&DAT_00417f38,"0.0.0.0","");
    if ((((uint)local_30 ^ uVar1) & local_2c) != 0) {
      local_1a0[0] = local_2c & uVar1;
      uVar2 = (*(code *)PTR_inet_ntoa_0042b108)();
      (*(code *)PTR_strcpy_0042b208)(auStack_1c0,uVar2);
      (*(code *)PTR_RunSystemCmd_0042b0dc)
                (0,"route",&DAT_00418040,&DAT_00418044,auStack_1c0,"netmask",auStack_220,
                 &DAT_00417f38,auStack_1e0,"");
    }
  }
  local_288 = 0;
  local_284 = 0;
  local_280[0] = 0;
  local_280[1] = 0;
  local_280[2] = 0;
  local_280[3] = 0;
  local_280[4] = 0;
  local_280[5] = 0;
  local_280[6] = 0;
  local_280[7] = 0;
  (*(code *)PTR_memset_0042b114)(&local_98,0,100);
  (*(code *)PTR_apmib_get_0042b1a0)(0x3af,&local_288);
  if (0 < local_288) {
    (*(code *)PTR_apmib_get_0042b1a0)(0x3b0,&local_284);
    (*(code *)PTR_apmib_get_0042b1a0)(0x14b,local_280);
    (*(code *)PTR_apmib_get_0042b1a0)(0x14d,local_280 + 4);
    (*(code *)PTR_apmib_get_0042b1a0)(0x3ae,&local_98);
    (*(code *)PTR_sprintf_0042b0e8)
              (auStack_fc,
               "flash clearl2tp %d %d %02x%02x%02x%02x %02x%02x%02x%02x %02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x"
               ,local_284,local_288,local_280[0] >> 0x18,local_280[0] >> 0x10 & 0xff,
               local_280[0] >> 8 & 0xff,local_280[0] & 0xff,local_280[4] >> 0x18,
               local_280[4] >> 0x10 & 0xff,local_280[4] >> 8 & 0xff,local_280[4] & 0xff,local_98,
               local_97,local_96,local_95,local_94,local_93,local_92,local_91,local_90,local_8f,
               local_8e,local_8d,local_8c,local_8b,local_8a,local_89,local_88,local_87,local_86,
               local_85,local_84,local_83,local_82,local_81,local_80,local_7f,local_7e,local_7d,
               local_7c,local_7b,local_7a,local_79,local_78,local_77,local_76,local_75,local_74,
               local_73);
    (*(code *)PTR_system_0042b1ac)(auStack_fc);
  }
  (*(code *)PTR_apmib_get_0042b1a0)(0x14e,local_1a0);
  (*(code *)PTR_apmib_get_0042b1a0)(0x14f,auStack_260);
  local_2c = (*(code *)PTR_strlen_0042b0bc)(auStack_260);
  (*(code *)PTR_sprintf_0042b0e8)(auStack_160,"user \"%s\"\n",local_1a0);
  (*(code *)PTR_write_line_to_file_0042b1a8)("/etc/ppp/options",1,auStack_160);
  (*(code *)PTR_sprintf_0042b0e8)
            (auStack_160,"%s\n","#################################################");
  (*(code *)PTR_write_line_to_file_0042b1a8)("/etc/ppp/pap-secrets",1,auStack_160);
  (*(code *)PTR_sprintf_0042b0e8)(auStack_160,"\"%s\"\t*\t\"%s\"\n",local_1a0,auStack_260);
  (*(code *)PTR_write_line_to_file_0042b1a8)("/etc/ppp/pap-secrets",2,auStack_160);
  (*(code *)PTR_sprintf_0042b0e8)
            (auStack_160,"%s\n","#################################################");
  (*(code *)PTR_write_line_to_file_0042b1a8)("/etc/ppp/chap-secrets",1,auStack_160);
  (*(code *)PTR_sprintf_0042b0e8)(auStack_160,"\"%s\"\t*\t\"%s\"\n",local_1a0,auStack_260);
  (*(code *)PTR_write_line_to_file_0042b1a8)("/etc/ppp/chap-secrets",2,auStack_160);
  (*(code *)PTR_sprintf_0042b0e8)(auStack_160,"%s\n",&DAT_004192e4);
  (*(code *)PTR_write_line_to_file_0042b1a8)("/etc/ppp/options",2,auStack_160);
  (*(code *)PTR_sprintf_0042b0e8)(auStack_160,"%s\n","noauth");
  (*(code *)PTR_write_line_to_file_0042b1a8)("/etc/ppp/options",2,auStack_160);
  (*(code *)PTR_sprintf_0042b0e8)(auStack_160,"%s\n","defaultroute");
  (*(code *)PTR_write_line_to_file_0042b1a8)("/etc/ppp/options",2,auStack_160);
  (*(code *)PTR_sprintf_0042b0e8)(auStack_160,"%s\n","usepeerdns");
  (*(code *)PTR_write_line_to_file_0042b1a8)("/etc/ppp/options",2,auStack_160);
  (*(code *)PTR_sprintf_0042b0e8)(auStack_160,"%s\n","lcp-echo-interval 0");
  (*(code *)PTR_write_line_to_file_0042b1a8)("/etc/ppp/options",2,auStack_160);
  (*(code *)PTR_sprintf_0042b0e8)(auStack_160,"%s\n","wantype 6");
  (*(code *)PTR_write_line_to_file_0042b1a8)("/etc/ppp/options",2,auStack_160);
  (*(code *)PTR_apmib_get_0042b1a0)(0x150,&local_298);
  (*(code *)PTR_sprintf_0042b0e8)(auStack_160,"mtu %d\n",local_298);
  (*(code *)PTR_write_line_to_file_0042b1a8)("/etc/ppp/options",2,auStack_160);
  (*(code *)PTR_apmib_get_0042b1a0)(0x14e,local_1a0);
  (*(code *)PTR_sprintf_0042b0e8)(auStack_160,"name %s\n",local_1a0);
  (*(code *)PTR_write_line_to_file_0042b1a8)("/etc/ppp/options",2,auStack_160);
  (*(code *)PTR_sprintf_0042b0e8)(auStack_160,"%s\n","nodeflate");
  (*(code *)PTR_write_line_to_file_0042b1a8)("/etc/ppp/options",2,auStack_160);
  (*(code *)PTR_sprintf_0042b0e8)(auStack_160,"%s\n","nobsdcomp");
  (*(code *)PTR_write_line_to_file_0042b1a8)("/etc/ppp/options",2,auStack_160);
  (*(code *)PTR_sprintf_0042b0e8)(auStack_160,"%s\n","nodetach");
  (*(code *)PTR_write_line_to_file_0042b1a8)("/etc/ppp/options",2,auStack_160);
  (*(code *)PTR_sprintf_0042b0e8)(auStack_160,"%s\n",&DAT_00419368);
  (*(code *)PTR_write_line_to_file_0042b1a8)("/etc/ppp/options",2,auStack_160);
  (*(code *)PTR_sprintf_0042b0e8)(auStack_160,"%s\n","default-asyncmap");
  (*(code *)PTR_write_line_to_file_0042b1a8)("/etc/ppp/options",2,auStack_160);
  (*(code *)PTR_sprintf_0042b0e8)(auStack_160,"%s\n","nopcomp");
  (*(code *)PTR_write_line_to_file_0042b1a8)("/etc/ppp/options",2,auStack_160);
  (*(code *)PTR_sprintf_0042b0e8)(auStack_160,"%s\n","noaccomp");
  (*(code *)PTR_write_line_to_file_0042b1a8)("/etc/ppp/options",2,auStack_160);
  (*(code *)PTR_sprintf_0042b0e8)(auStack_160,"%s\n","noccp");
  (*(code *)PTR_write_line_to_file_0042b1a8)("/etc/ppp/options",2,auStack_160);
  (*(code *)PTR_sprintf_0042b0e8)(auStack_160,"%s\n",&DAT_00419368);
  (*(code *)PTR_write_line_to_file_0042b1a8)("/etc/ppp/options",2,auStack_160);
  (*(code *)PTR_sprintf_0042b0e8)(auStack_160,"%s\n","refuse-eap");
  (*(code *)PTR_write_line_to_file_0042b1a8)("/etc/ppp/options",2,auStack_160);
  if (0x23 < (int)local_2c) {
    (*(code *)PTR_sprintf_0042b0e8)(auStack_160,"%s\n","-mschap");
    (*(code *)PTR_write_line_to_file_0042b1a8)("/etc/ppp/options",2,auStack_160);
    (*(code *)PTR_sprintf_0042b0e8)(auStack_160,"%s\n","-mschap-v2");
    (*(code *)PTR_write_line_to_file_0042b1a8)("/etc/ppp/options",2,auStack_160);
  }
  (*(code *)PTR_sprintf_0042b0e8)(auStack_160,"%s\n","[global]");
  (*(code *)PTR_write_line_to_file_0042b1a8)("/etc/ppp/l2tpd.conf",1,auStack_160);
  (*(code *)PTR_sprintf_0042b0e8)(auStack_160,"%s\n","port = 1701");
  (*(code *)PTR_write_line_to_file_0042b1a8)("/etc/ppp/l2tpd.conf",2,auStack_160);
  (*(code *)PTR_sprintf_0042b0e8)(auStack_160,"auth file = %s\n","/etc/ppp/chap-secrets");
  (*(code *)PTR_write_line_to_file_0042b1a8)("/etc/ppp/l2tpd.conf",2,auStack_160);
  (*(code *)PTR_sprintf_0042b0e8)(auStack_160,"%s\n","[lac client]");
  (*(code *)PTR_write_line_to_file_0042b1a8)("/etc/ppp/l2tpd.conf",2,auStack_160);
  (*(code *)PTR_sprintf_0042b0e8)(auStack_160,"lns=%s\n",auStack_200);
  (*(code *)PTR_write_line_to_file_0042b1a8)("/etc/ppp/l2tpd.conf",2,auStack_160);
  (*(code *)PTR_sprintf_0042b0e8)(auStack_160,"%s\n","require chap = yes");
  (*(code *)PTR_write_line_to_file_0042b1a8)("/etc/ppp/l2tpd.conf",2,auStack_160);
  local_30 = local_1a0;
  (*(code *)PTR_apmib_get_0042b1a0)(0x14e,local_30);
  (*(code *)PTR_sprintf_0042b0e8)(auStack_160,"name = %s\n",local_30);
  (*(code *)PTR_write_line_to_file_0042b1a8)("/etc/ppp/l2tpd.conf",2,auStack_160);
  (*(code *)PTR_sprintf_0042b0e8)(auStack_160,"%s\n","pppoptfile = /etc/ppp/options");
  (*(code *)PTR_write_line_to_file_0042b1a8)("/etc/ppp/l2tpd.conf",2,auStack_160);
  (*(code *)PTR_RunSystemCmd_0042b0dc)(0,"killall","l2tpd","");
  (*(code *)PTR_RunSystemCmd_0042b0dc)(0,"killall","ppp_inet","");
  (*(code *)PTR_sleep_0042b1a4)(1);
  (*(code *)PTR_system_0042b1ac)("l2tpd&");
  (*(code *)PTR_sleep_0042b1a4)(3);
  (*(code *)PTR_apmib_get_0042b1a0)(0x151,&local_294);
  if (local_294 == 1) {
    (*(code *)PTR_RunSystemCmd_0042b0dc)(0,"route",&DAT_0041803c,"default","");
    (*(code *)PTR_RunSystemCmd_0042b0dc)
              (0,"route",&DAT_00418040,"default",&DAT_00417f38,"10.112.112.112",param_2,"");
    (*(code *)PTR_sprintf_0042b0e8)(auStack_160,"%s\n","connect /etc/ppp/true");
    (*(code *)PTR_write_line_to_file_0042b1a8)("/etc/ppp/options",2,auStack_160);
    (*(code *)PTR_sprintf_0042b0e8)(auStack_160,"%s\n","demand");
    (*(code *)PTR_write_line_to_file_0042b1a8)("/etc/ppp/options",2,auStack_160);
    (*(code *)PTR_apmib_get_0042b1a0)(0x152,&local_290);
    (*(code *)PTR_sprintf_0042b0e8)(auStack_160,"idle %d\n",local_290);
    (*(code *)PTR_write_line_to_file_0042b1a8)("/etc/ppp/options",2,auStack_160);
  }
  else if (((local_294 == 2) && (param_5 == 1)) &&
          (iVar3 = (*(code *)PTR_isFileExist_0042b0ac)("/var/ppp/manual_connect_now"), iVar3 == 0))
  {
    return;
  }
  iVar3 = (*(code *)PTR_isFileExist_0042b0ac)("/var/ppp");
  if (iVar3 != 0) {
    (*(code *)PTR_unlink_0042b148)("/var/ppp");
  }
  local_30 = local_1a0;
  (*(code *)PTR_strcpy_0042b208)(local_30,"6");
  (*(code *)PTR_sprintf_0042b0e8)(auStack_260,&DAT_00417aa4,local_294);
  (*(code *)PTR_RunSystemCmd_0042b0dc)
            (0,"ppp_inet",&DAT_00418060,local_30,&DAT_00418b44,auStack_260,&DAT_004190e8,"");
  FUN_00410a74(6,param_1,param_4,param_3);
  return;
}

