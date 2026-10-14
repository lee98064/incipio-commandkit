/* FUN_0040919c @ 0040919c */

void FUN_0040919c(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  int local_148;
  undefined1 auStack_144 [32];
  undefined1 auStack_124 [32];
  undefined4 local_104 [16];
  undefined4 local_c4 [16];
  undefined1 auStack_84 [104];
  
  (*(code *)PTR_memset_0042b114)(auStack_144,0,0x20);
  (*(code *)PTR_memset_0042b114)(auStack_124,0,0x20);
  local_148 = 0;
  (*(code *)PTR_memset_0042b114)(auStack_84,0,100);
  (*(code *)PTR_memset_0042b114)(local_104,0,0x40);
  (*(code *)PTR_memset_0042b114)(local_c4,0,0x40);
  (*(code *)PTR_sprintf_0042b0e8)(auStack_84,"interface %s\n",param_1);
  (*(code *)PTR_write_line_to_file_0042b1a8)("/var/udhcpd.conf",1,auStack_84);
  (*(code *)PTR_apmib_get_0042b1a0)(0xae,local_104);
  uVar1 = (*(code *)PTR_inet_ntoa_0042b108)(local_104[0]);
  (*(code *)PTR_sprintf_0042b0e8)(auStack_84,"start %s\n",uVar1);
  (*(code *)PTR_write_line_to_file_0042b1a8)("/var/udhcpd.conf",2,auStack_84);
  (*(code *)PTR_apmib_get_0042b1a0)(0xaf,local_104);
  uVar1 = (*(code *)PTR_inet_ntoa_0042b108)(local_104[0]);
  (*(code *)PTR_sprintf_0042b0e8)(auStack_84,"end %s\n",uVar1);
  (*(code *)PTR_write_line_to_file_0042b1a8)("/var/udhcpd.conf",2,auStack_84);
  (*(code *)PTR_apmib_get_0042b1a0)(0xab,local_104);
  uVar1 = (*(code *)PTR_inet_ntoa_0042b108)(local_104[0]);
  (*(code *)PTR_sprintf_0042b0e8)(auStack_84,"opt subnet %s\n",uVar1);
  (*(code *)PTR_write_line_to_file_0042b1a8)("/var/udhcpd.conf",2,auStack_84);
  (*(code *)PTR_apmib_get_0042b1a0)(0x3b1,&local_148);
  if (0x275e < local_148 - 2U) {
    (*(code *)PTR_printf_0042b1f0)
              ("===%s(%d), read MIB_DHCP_LEASE_TIME is %d\n","start_lan_dhcpd",0x4a);
    iVar2 = (*(code *)PTR_apmib_set_0042b184)(0x3b1,&local_148);
    if (iVar2 == 0) {
      (*(code *)PTR_puts_0042b1b8)("set MIB_DHCP_LEASE_TIME error");
    }
    (*(code *)PTR_apmib_update_0042b188)(4);
  }
  local_148 = local_148 * 0x3c;
  (*(code *)PTR_sprintf_0042b0e8)(auStack_84,"opt lease %ld\n",local_148);
  (*(code *)PTR_write_line_to_file_0042b1a8)("/var/udhcpd.conf",2,auStack_84);
  (*(code *)PTR_apmib_get_0042b1a0)(0xaa,local_104);
  uVar1 = (*(code *)PTR_inet_ntoa_0042b108)(local_104[0]);
  (*(code *)PTR_sprintf_0042b0e8)(auStack_84,"opt router %s\n",uVar1);
  (*(code *)PTR_write_line_to_file_0042b1a8)("/var/udhcpd.conf",2,auStack_84);
  (*(code *)PTR_sprintf_0042b0e8)(auStack_84,"opt dns %s\n",uVar1);
  (*(code *)PTR_write_line_to_file_0042b1a8)("/var/udhcpd.conf",2,auStack_84);
  (*(code *)PTR_memset_0042b114)(local_104,0,0x40);
  (*(code *)PTR_apmib_get_0042b1a0)(0xc6,local_104);
  if (local_104[0]._0_1_ != '\0') {
    (*(code *)PTR_sprintf_0042b0e8)(auStack_84,"opt domain %s\n",local_104);
    (*(code *)PTR_write_line_to_file_0042b1a8)("/var/udhcpd.conf",2,auStack_84);
  }
  (*(code *)PTR_apmib_get_0042b1a0)(0xaa,local_104);
  uVar1 = (*(code *)PTR_inet_ntoa_0042b108)(local_104[0]);
  (*(code *)PTR_strcpy_0042b208)(auStack_144,uVar1);
  (*(code *)PTR_apmib_get_0042b1a0)(0xab,local_c4);
  uVar1 = (*(code *)PTR_inet_ntoa_0042b108)(local_c4[0]);
  (*(code *)PTR_strcpy_0042b208)(auStack_124,uVar1);
  (*(code *)PTR_RunSystemCmd_0042b0dc)(0,"ifconfig",param_1,auStack_144,"netmask",auStack_124,"");
  (*(code *)PTR_RunSystemCmd_0042b0dc)(0,"udhcpd","/var/udhcpd.conf","");
  return;
}

