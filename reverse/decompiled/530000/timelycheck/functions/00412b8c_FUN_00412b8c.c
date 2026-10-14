/* FUN_00412b8c @ 00412b8c */

void FUN_00412b8c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 int param_5)

{
  int iVar1;
  undefined4 local_100;
  int local_fc;
  undefined4 local_f8;
  undefined1 auStack_f4 [32];
  char local_d4 [64];
  undefined1 auStack_94 [100];
  char *local_30;
  
  local_100 = 0;
  (*(code *)PTR_memset_0042b114)(auStack_94,0,100);
  (*(code *)PTR_memset_0042b114)(local_d4,0,0x40);
  (*(code *)PTR_memset_0042b114)(auStack_f4,0,0x20);
  local_fc = 0;
  local_f8 = 0;
  (*(code *)PTR_RunSystemCmd_0042b0dc)(0,"ifconfig",param_2,"0.0.0.0","");
  iVar1 = (*(code *)PTR_RunSystemCmd_0042b0dc)
                    (0,"flash","gen-pppoe","/etc/ppp/options","/etc/ppp/pap-secrets",
                     "/etc/ppp/chap-secrets","");
  if (iVar1 == 0) {
    (*(code *)PTR_sprintf_0042b0e8)(auStack_94,"%s\n","noauth");
    (*(code *)PTR_write_line_to_file_0042b1a8)("/etc/ppp/options",2,auStack_94);
    (*(code *)PTR_sprintf_0042b0e8)(auStack_94,"%s\n","nomppc");
    (*(code *)PTR_write_line_to_file_0042b1a8)("/etc/ppp/options",2,auStack_94);
    (*(code *)PTR_sprintf_0042b0e8)(auStack_94,"%s\n","noipdefault");
    (*(code *)PTR_write_line_to_file_0042b1a8)("/etc/ppp/options",2,auStack_94);
    (*(code *)PTR_sprintf_0042b0e8)(auStack_94,"%s\n","hide-password");
    (*(code *)PTR_write_line_to_file_0042b1a8)("/etc/ppp/options",2,auStack_94);
    (*(code *)PTR_sprintf_0042b0e8)(auStack_94,"%s\n","defaultroute");
    (*(code *)PTR_write_line_to_file_0042b1a8)("/etc/ppp/options",2,auStack_94);
    (*(code *)PTR_sprintf_0042b0e8)(auStack_94,"%s\n","persist");
    (*(code *)PTR_write_line_to_file_0042b1a8)("/etc/ppp/options",2,auStack_94);
    (*(code *)PTR_sprintf_0042b0e8)(auStack_94,"%s\n","ipcp-accept-remote");
    (*(code *)PTR_write_line_to_file_0042b1a8)("/etc/ppp/options",2,auStack_94);
    (*(code *)PTR_sprintf_0042b0e8)(auStack_94,"%s\n","ipcp-accept-local");
    (*(code *)PTR_write_line_to_file_0042b1a8)("/etc/ppp/options",2,auStack_94);
    (*(code *)PTR_sprintf_0042b0e8)(auStack_94,"%s\n","nodetach");
    (*(code *)PTR_write_line_to_file_0042b1a8)("/etc/ppp/options",2,auStack_94);
    (*(code *)PTR_sprintf_0042b0e8)(auStack_94,"%s\n","usepeerdns");
    (*(code *)PTR_write_line_to_file_0042b1a8)("/etc/ppp/options",2,auStack_94);
    (*(code *)PTR_apmib_get_0042b1a0)(0x90,&local_100);
    (*(code *)PTR_sprintf_0042b0e8)(auStack_94,"mtu %d\n",local_100);
    (*(code *)PTR_write_line_to_file_0042b1a8)("/etc/ppp/options",2,auStack_94);
    (*(code *)PTR_sprintf_0042b0e8)(auStack_94,"mru %d\n",local_100);
    (*(code *)PTR_write_line_to_file_0042b1a8)("/etc/ppp/options",2,auStack_94);
    (*(code *)PTR_sprintf_0042b0e8)(auStack_94,"%s\n","lcp-echo-interval 20");
    (*(code *)PTR_write_line_to_file_0042b1a8)("/etc/ppp/options",2,auStack_94);
    (*(code *)PTR_sprintf_0042b0e8)(auStack_94,"%s\n","lcp-echo-failure 3");
    (*(code *)PTR_write_line_to_file_0042b1a8)("/etc/ppp/options",2,auStack_94);
    (*(code *)PTR_sprintf_0042b0e8)(auStack_94,"%s\n","wantype 3");
    (*(code *)PTR_write_line_to_file_0042b1a8)("/etc/ppp/options",2,auStack_94);
    (*(code *)PTR_sprintf_0042b0e8)(auStack_94,"%s\n","holdoff 10");
    (*(code *)PTR_write_line_to_file_0042b1a8)("/etc/ppp/options",2,auStack_94);
    (*(code *)PTR_apmib_get_0042b1a0)(0x105,local_d4);
    if (local_d4[0] == '\0') {
      (*(code *)PTR_sprintf_0042b0e8)(auStack_94,"plugin /etc/ppp/plubins/libplugin.a %s\n",param_2)
      ;
    }
    else {
      (*(code *)PTR_sprintf_0042b0e8)
                (auStack_94,"plugin /etc/ppp/plubins/libplugin.a rp_pppoe_service %s %s\n",local_d4,
                 param_2);
    }
    (*(code *)PTR_write_line_to_file_0042b1a8)("/etc/ppp/options",2,auStack_94);
    (*(code *)PTR_apmib_get_0042b1a0)(0x6d,&local_fc);
    if (local_fc == 1) {
      (*(code *)PTR_apmib_get_0042b1a0)(0x6c,&local_f8);
      (*(code *)PTR_sprintf_0042b0e8)(auStack_94,"%s\n","demand");
      (*(code *)PTR_write_line_to_file_0042b1a8)("/etc/ppp/options",2,auStack_94);
      (*(code *)PTR_sprintf_0042b0e8)(auStack_94,"idle %d\n",local_f8);
      (*(code *)PTR_write_line_to_file_0042b1a8)("/etc/ppp/options",2,auStack_94);
    }
    else if ((local_fc == 2) && (param_5 == 1)) {
      return;
    }
  }
  iVar1 = (*(code *)PTR_isFileExist_0042b0ac)("/var/ppp");
  if (iVar1 != 0) {
    (*(code *)PTR_unlink_0042b148)("/var/ppp");
  }
  local_30 = local_d4;
  (*(code *)PTR_strcpy_0042b208)(local_30,"3");
  (*(code *)PTR_sprintf_0042b0e8)(auStack_f4,&DAT_004179c4,local_fc);
  (*(code *)PTR_RunSystemCmd_0042b0dc)
            (0,"ppp_inet",&DAT_00417f80,local_30,&DAT_00418a54,auStack_f4,&DAT_00418ff8,"");
  FUN_004109d4(3,param_1,param_4,param_3);
  return;
}

