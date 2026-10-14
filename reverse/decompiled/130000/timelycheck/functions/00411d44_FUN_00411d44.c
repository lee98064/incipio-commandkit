/* FUN_00411d44 @ 00411d44 */

void FUN_00411d44(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 int param_5)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  int local_1a8;
  int local_1a4;
  int local_1a0;
  undefined4 local_19c;
  int local_198;
  undefined1 auStack_194 [32];
  undefined1 auStack_174 [32];
  undefined1 auStack_154 [32];
  undefined1 auStack_134 [32];
  undefined1 auStack_114 [32];
  undefined1 auStack_f4 [32];
  uint local_d4 [16];
  undefined1 auStack_94 [100];
  uint local_30;
  uint local_2c;
  
  local_1a8 = 0;
  local_1a4 = 0;
  (*(code *)PTR_memset_0042b114)(auStack_94,0,100);
  (*(code *)PTR_memset_0042b114)(local_d4,0,0x40);
  (*(code *)PTR_memset_0042b114)(auStack_194,0,0x20);
  local_1a0 = 0;
  local_19c = 0;
  local_198 = 0;
  (*(code *)PTR_apmib_get_0042b1a0)(0x155,&local_198);
  (*(code *)PTR_apmib_get_0042b1a0)(0x93,local_d4);
  uVar2 = (*(code *)PTR_inet_ntoa_0042b108)(local_d4[0]);
  (*(code *)PTR_strcpy_0042b208)(auStack_134,uVar2);
  uVar1 = local_d4[0];
  if (local_198 == 1) {
    (*(code *)PTR_apmib_get_0042b1a0)(0x154,local_d4);
    uVar2 = (*(code *)PTR_inet_ntoa_0042b108)(local_d4[0]);
    (*(code *)PTR_strcpy_0042b208)(auStack_114,uVar2);
    (*(code *)PTR_apmib_get_0042b1a0)(0x91,local_d4);
    uVar2 = (*(code *)PTR_inet_ntoa_0042b108)(local_d4[0]);
    (*(code *)PTR_strcpy_0042b208)(auStack_174,uVar2);
    local_2c = local_d4[0];
    (*(code *)PTR_apmib_get_0042b1a0)(0x92,local_d4);
    uVar2 = (*(code *)PTR_inet_ntoa_0042b108)(local_d4[0]);
    (*(code *)PTR_strcpy_0042b208)(auStack_154,uVar2);
    local_30 = local_d4[0];
    (*(code *)PTR_RunSystemCmd_0042b0dc)(0,"ifconfig",param_2,auStack_174,"netmask",auStack_154,"");
    (*(code *)PTR_RunSystemCmd_0042b0dc)
              (0,"route",&DAT_0041803c,"default",&DAT_00417f38,"0.0.0.0","");
    if (((local_2c ^ uVar1) & local_30) != 0) {
      local_d4[0] = local_30 & uVar1;
      uVar2 = (*(code *)PTR_inet_ntoa_0042b108)();
      (*(code *)PTR_strcpy_0042b208)(auStack_f4,uVar2);
      (*(code *)PTR_RunSystemCmd_0042b0dc)
                (0,"route",&DAT_00418040,&DAT_00418044,auStack_f4,"netmask",auStack_154,
                 &DAT_00417f38,auStack_114,"");
    }
  }
  iVar3 = (*(code *)PTR_RunSystemCmd_0042b0dc)
                    (0,"flash",&DAT_004194b8,"/etc/ppp/options","/etc/ppp/pap-secrets",
                     "/etc/ppp/chap-secrets","");
  if (iVar3 == 0) {
    (*(code *)PTR_sprintf_0042b0e8)(auStack_94,"%s\n",&DAT_004192e4);
    (*(code *)PTR_write_line_to_file_0042b1a8)("/etc/ppp/options",2,auStack_94);
    (*(code *)PTR_sprintf_0042b0e8)(auStack_94,"%s\n","noauth");
    (*(code *)PTR_write_line_to_file_0042b1a8)("/etc/ppp/options",2,auStack_94);
    (*(code *)PTR_sprintf_0042b0e8)(auStack_94,"%s\n","nopcomp");
    (*(code *)PTR_write_line_to_file_0042b1a8)("/etc/ppp/options",2,auStack_94);
    (*(code *)PTR_sprintf_0042b0e8)(auStack_94,"%s\n","noaccomp");
    (*(code *)PTR_write_line_to_file_0042b1a8)("/etc/ppp/options",2,auStack_94);
    (*(code *)PTR_sprintf_0042b0e8)(auStack_94,"%s\n","nobsdcomp");
    (*(code *)PTR_write_line_to_file_0042b1a8)("/etc/ppp/options",2,auStack_94);
    (*(code *)PTR_sprintf_0042b0e8)(auStack_94,"%s\n","nodeflate");
    (*(code *)PTR_write_line_to_file_0042b1a8)("/etc/ppp/options",2,auStack_94);
    (*(code *)PTR_sprintf_0042b0e8)(auStack_94,"%s\n","usepeerdns");
    (*(code *)PTR_write_line_to_file_0042b1a8)("/etc/ppp/options",2,auStack_94);
    (*(code *)PTR_sprintf_0042b0e8)(auStack_94,"%s\n","lcp-echo-interval 20");
    (*(code *)PTR_write_line_to_file_0042b1a8)("/etc/ppp/options",2,auStack_94);
    (*(code *)PTR_sprintf_0042b0e8)(auStack_94,"%s\n","lcp-echo-failure 3");
    (*(code *)PTR_write_line_to_file_0042b1a8)("/etc/ppp/options",2,auStack_94);
    (*(code *)PTR_sprintf_0042b0e8)(auStack_94,"%s\n","wantype 4");
    (*(code *)PTR_write_line_to_file_0042b1a8)("/etc/ppp/options",2,auStack_94);
    (*(code *)PTR_apmib_get_0042b1a0)(0x96,&local_1a8);
    (*(code *)PTR_sprintf_0042b0e8)(auStack_94,"mtu %d\n",local_1a8);
    (*(code *)PTR_write_line_to_file_0042b1a8)("/etc/ppp/options",2,auStack_94);
    (*(code *)PTR_sprintf_0042b0e8)(auStack_94,"%s\n","holdoff 2");
    (*(code *)PTR_write_line_to_file_0042b1a8)("/etc/ppp/options",2,auStack_94);
    (*(code *)PTR_sprintf_0042b0e8)(auStack_94,"%s\n","refuse-eap");
    (*(code *)PTR_write_line_to_file_0042b1a8)("/etc/ppp/options",2,auStack_94);
    (*(code *)PTR_sprintf_0042b0e8)(auStack_94,"%s\n","remotename PPTP");
    (*(code *)PTR_write_line_to_file_0042b1a8)("/etc/ppp/peers/rpptp",1,auStack_94);
    (*(code *)PTR_sprintf_0042b0e8)(auStack_94,"%s\n","linkname PPTP");
    (*(code *)PTR_write_line_to_file_0042b1a8)("/etc/ppp/peers/rpptp",2,auStack_94);
    (*(code *)PTR_sprintf_0042b0e8)(auStack_94,"%s\n","ipparam PPTP");
    (*(code *)PTR_write_line_to_file_0042b1a8)("/etc/ppp/peers/rpptp",2,auStack_94);
    (*(code *)PTR_sprintf_0042b0e8)(local_d4,"pty \"pptp %s --nolaunchpppd\"",auStack_134);
    (*(code *)PTR_sprintf_0042b0e8)(auStack_94,"%s\n",local_d4);
    (*(code *)PTR_write_line_to_file_0042b1a8)("/etc/ppp/peers/rpptp",2,auStack_94);
    (*(code *)PTR_apmib_get_0042b1a0)(0x94,local_d4);
    (*(code *)PTR_sprintf_0042b0e8)(auStack_94,"name %s\n",local_d4);
    (*(code *)PTR_write_line_to_file_0042b1a8)("/etc/ppp/peers/rpptp",2,auStack_94);
    (*(code *)PTR_apmib_get_0042b1a0)(0x9c,&local_1a8);
    if (local_1a8 == 1) {
      (*(code *)PTR_sprintf_0042b0e8)(auStack_94,"%s\n","+mppe required,stateless");
      (*(code *)PTR_write_line_to_file_0042b1a8)("/etc/ppp/peers/rpptp",2,auStack_94);
    }
    (*(code *)PTR_apmib_get_0042b1a0)(0x9f,&local_1a4);
    if (local_1a4 == 1) {
      (*(code *)PTR_sprintf_0042b0e8)(auStack_94,"%s\n",&DAT_0041958c);
      (*(code *)PTR_write_line_to_file_0042b1a8)("/etc/ppp/peers/rpptp",2,auStack_94);
      pcVar4 = "stateless";
    }
    else {
      pcVar4 = "nomppc";
    }
    (*(code *)PTR_sprintf_0042b0e8)(auStack_94,"%s\n",pcVar4);
    (*(code *)PTR_write_line_to_file_0042b1a8)("/etc/ppp/peers/rpptp",2,auStack_94);
    if ((local_1a8 == 0) && (local_1a4 == 0)) {
      (*(code *)PTR_sprintf_0042b0e8)(auStack_94,"%s\n","noccp");
      (*(code *)PTR_write_line_to_file_0042b1a8)("/etc/ppp/peers/rpptp",2,auStack_94);
    }
    (*(code *)PTR_sprintf_0042b0e8)(auStack_94,"%s\n","persist");
    (*(code *)PTR_write_line_to_file_0042b1a8)("/etc/ppp/peers/rpptp",2,auStack_94);
    (*(code *)PTR_sprintf_0042b0e8)(auStack_94,"%s\n","noauth");
    (*(code *)PTR_write_line_to_file_0042b1a8)("/etc/ppp/peers/rpptp",2,auStack_94);
    (*(code *)PTR_sprintf_0042b0e8)(auStack_94,"%s\n","file /etc/ppp/options");
    (*(code *)PTR_write_line_to_file_0042b1a8)("/etc/ppp/peers/rpptp",2,auStack_94);
    (*(code *)PTR_sprintf_0042b0e8)(auStack_94,"%s\n","nobsdcomp");
    (*(code *)PTR_write_line_to_file_0042b1a8)("/etc/ppp/peers/rpptp",2,auStack_94);
    (*(code *)PTR_sprintf_0042b0e8)(auStack_94,"%s\n","nodetach");
    (*(code *)PTR_write_line_to_file_0042b1a8)("/etc/ppp/peers/rpptp",2,auStack_94);
    (*(code *)PTR_sprintf_0042b0e8)(auStack_94,"%s\n",&DAT_00419368);
    (*(code *)PTR_write_line_to_file_0042b1a8)("/etc/ppp/peers/rpptp",2,auStack_94);
    (*(code *)PTR_apmib_get_0042b1a0)(0x1fd,&local_1a0);
    if (local_1a0 == 1) {
      (*(code *)PTR_RunSystemCmd_0042b0dc)(0,"route",&DAT_0041803c,"default","");
      (*(code *)PTR_RunSystemCmd_0042b0dc)
                (0,"route",&DAT_00418040,"default",&DAT_00417f38,"10.112.112.112",param_2,"");
      (*(code *)PTR_sprintf_0042b0e8)(auStack_94,"%s\n","persist");
      (*(code *)PTR_write_line_to_file_0042b1a8)("/etc/ppp/options",2,auStack_94);
      (*(code *)PTR_sprintf_0042b0e8)(auStack_94,"%s\n","nodetach");
      (*(code *)PTR_write_line_to_file_0042b1a8)("/etc/ppp/options",2,auStack_94);
      (*(code *)PTR_sprintf_0042b0e8)(auStack_94,"%s\n","connect /etc/ppp/true");
      (*(code *)PTR_write_line_to_file_0042b1a8)("/etc/ppp/options",2,auStack_94);
      (*(code *)PTR_sprintf_0042b0e8)(auStack_94,"%s\n","demand");
      (*(code *)PTR_write_line_to_file_0042b1a8)("/etc/ppp/options",2,auStack_94);
      (*(code *)PTR_apmib_get_0042b1a0)(0x1fe,&local_19c);
      (*(code *)PTR_sprintf_0042b0e8)(auStack_94,"idle %d\n",local_19c);
      (*(code *)PTR_write_line_to_file_0042b1a8)("/etc/ppp/options",2,auStack_94);
      (*(code *)PTR_sprintf_0042b0e8)(auStack_94,"%s\n","ktune");
      (*(code *)PTR_write_line_to_file_0042b1a8)("/etc/ppp/options",2,auStack_94);
      (*(code *)PTR_sprintf_0042b0e8)(auStack_94,"%s\n","ipcp-accept-remote");
      (*(code *)PTR_write_line_to_file_0042b1a8)("/etc/ppp/options",2,auStack_94);
      (*(code *)PTR_sprintf_0042b0e8)(auStack_94,"%s\n","ipcp-accept-local");
      (*(code *)PTR_write_line_to_file_0042b1a8)("/etc/ppp/options",2,auStack_94);
      (*(code *)PTR_sprintf_0042b0e8)(auStack_94,"%s\n","noipdefault");
      (*(code *)PTR_write_line_to_file_0042b1a8)("/etc/ppp/options",2,auStack_94);
      (*(code *)PTR_sprintf_0042b0e8)(auStack_94,"%s\n","hide-password");
      (*(code *)PTR_write_line_to_file_0042b1a8)("/etc/ppp/options",2,auStack_94);
      (*(code *)PTR_sprintf_0042b0e8)(auStack_94,"%s\n","defaultroute");
      (*(code *)PTR_write_line_to_file_0042b1a8)("/etc/ppp/options",2,auStack_94);
    }
    else if (((local_1a0 == 2) && (param_5 == 1)) &&
            (iVar3 = (*(code *)PTR_isFileExist_0042b0ac)("/var/ppp/manual_connect_now"), iVar3 == 0)
            ) {
      return;
    }
    iVar3 = (*(code *)PTR_isFileExist_0042b0ac)("/var/ppp");
    if (iVar3 != 0) {
      (*(code *)PTR_unlink_0042b148)("/var/ppp");
    }
    (*(code *)PTR_RunSystemCmd_0042b0dc)(0,"killall",&DAT_004194bc,"");
    (*(code *)PTR_RunSystemCmd_0042b0dc)(0,"killall","ppp_inet","");
    (*(code *)PTR_sleep_0042b1a4)(2);
    (*(code *)PTR_strcpy_0042b208)(local_d4,"4");
    (*(code *)PTR_sprintf_0042b0e8)(auStack_194,&DAT_00417aa4,local_1a0);
    (*(code *)PTR_RunSystemCmd_0042b0dc)
              (0,"ppp_inet",&DAT_00418060,local_d4,&DAT_00418b44,auStack_194,&DAT_004190e8,"");
  }
  FUN_00410a74(4,param_1,param_4,param_3);
  return;
}

