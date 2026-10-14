/* set_lan_dhcpd @ 0040d120 */

void set_lan_dhcpd(undefined4 param_1,int param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  int local_218;
  int local_214;
  int local_210;
  undefined4 local_20c [8];
  undefined4 local_1ec [8];
  undefined4 local_1cc [8];
  undefined4 local_1ac;
  byte local_1a8;
  byte local_1a7;
  byte local_1a6;
  byte local_1a5;
  undefined1 local_1a4;
  undefined1 local_1a3;
  undefined4 local_180 [16];
  undefined4 local_140 [16];
  undefined1 auStack_100 [100];
  undefined1 auStack_9c [100];
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  
  (*(code *)PTR_memset_00423490)(local_20c,0,0x20);
  (*(code *)PTR_memset_00423490)(local_1ec,0,0x20);
  local_218 = 0;
  local_214 = 0;
  (*(code *)PTR_memset_00423490)(auStack_100,0,100);
  (*(code *)PTR_memset_00423490)(local_180,0,0x40);
  (*(code *)PTR_memset_00423490)(local_140,0,0x40);
  local_210 = 0;
  (*(code *)PTR_memset_00423490)(local_1cc,0,0x20);
  (*(code *)PTR_sprintf_0042344c)(auStack_100,"interface %s\n",param_1);
  (*(code *)PTR_write_line_to_file_00423554)("/var/udhcpd.conf",1,auStack_100);
  (*(code *)PTR_apmib_get_0042354c)(0xae,local_180);
  uVar3 = (*(code *)PTR_inet_ntoa_00423478)(local_180[0]);
  (*(code *)PTR_sprintf_0042344c)(auStack_100,"start %s\n",uVar3);
  (*(code *)PTR_write_line_to_file_00423554)("/var/udhcpd.conf",2,auStack_100);
  (*(code *)PTR_apmib_get_0042354c)(0xaf,local_180);
  uVar3 = (*(code *)PTR_inet_ntoa_00423478)(local_180[0]);
  (*(code *)PTR_sprintf_0042344c)(auStack_100,"end %s\n",uVar3);
  (*(code *)PTR_write_line_to_file_00423554)("/var/udhcpd.conf",2,auStack_100);
  (*(code *)PTR_apmib_get_0042354c)(0xab,local_180);
  uVar3 = (*(code *)PTR_inet_ntoa_00423478)(local_180[0]);
  (*(code *)PTR_sprintf_0042344c)(auStack_100,"opt subnet %s\n",uVar3);
  (*(code *)PTR_write_line_to_file_00423554)("/var/udhcpd.conf",2,auStack_100);
  (*(code *)PTR_apmib_get_0042354c)(0x3b1,&local_218);
  if (0x275f < local_218 - 1U) {
    local_218 = 0x1e0;
    iVar4 = (*(code *)PTR_apmib_set_00423524)(0x3b1,&local_218);
    if (iVar4 == 0) {
      (*(code *)PTR_puts_00423564)("set MIB_DHCP_LEASE_TIME error");
    }
    (*(code *)PTR_apmib_update_0042352c)(4);
  }
  local_218 = local_218 * 0x3c;
  (*(code *)PTR_sprintf_0042344c)(auStack_100,"opt lease %d\n",local_218);
  (*(code *)PTR_write_line_to_file_00423554)("/var/udhcpd.conf",2,auStack_100);
  if (param_2 == 1) {
    (*(code *)PTR_apmib_get_0042354c)(0xac,local_140);
    iVar4 = (*(code *)PTR_memcmp_004234c4)(local_140,&DAT_004121a0,4);
    uVar3 = local_140[0];
    if (iVar4 == 0) {
      (*(code *)PTR_apmib_get_0042354c)(0xaa,local_180);
      uVar3 = local_180[0];
    }
    uVar3 = (*(code *)PTR_inet_ntoa_00423478)(uVar3);
    pcVar5 = "opt router %s\n";
LAB_0040d568:
    (*(code *)PTR_sprintf_0042344c)(auStack_100,pcVar5,uVar3);
    (*(code *)PTR_write_line_to_file_00423554)("/var/udhcpd.conf",2,auStack_100);
  }
  else {
    (*(code *)PTR_apmib_get_0042354c)(0xaa,local_180);
    uVar3 = (*(code *)PTR_inet_ntoa_00423478)(local_180[0]);
    (*(code *)PTR_sprintf_0042344c)(auStack_100,"opt router %s\n",uVar3);
    (*(code *)PTR_write_line_to_file_00423554)("/var/udhcpd.conf",2,auStack_100);
    (*(code *)PTR_apmib_get_0042354c)(0x69,&local_214);
    if (local_214 == 0) {
      pcVar5 = "opt dns %s\n";
      goto LAB_0040d568;
    }
  }
  local_218 = 0;
  if ((param_2 != 1) && ((param_2 != 2 || (local_214 != 1)))) goto LAB_0040d894;
  (*(code *)PTR_apmib_get_0042354c)(0xb0,local_20c);
  (*(code *)PTR_apmib_get_0042354c)(0xb1,local_1ec);
  (*(code *)PTR_apmib_get_0042354c)(0xb2,local_1cc);
  iVar4 = (*(code *)PTR_memcmp_004234c4)(local_20c,&DAT_004121a0,4);
  if (iVar4 != 0) {
    uVar3 = (*(code *)PTR_inet_ntoa_00423478)(local_20c[0]);
    (*(code *)PTR_sprintf_0042344c)(auStack_100,"opt dns %s\n",uVar3);
    (*(code *)PTR_write_line_to_file_00423554)("/var/udhcpd.conf",2,auStack_100);
    local_218 = local_218 + 1;
  }
  iVar4 = (*(code *)PTR_memcmp_004234c4)(local_1ec,&DAT_004121a0,4);
  if (iVar4 != 0) {
    uVar3 = (*(code *)PTR_inet_ntoa_00423478)(local_1ec[0]);
    (*(code *)PTR_sprintf_0042344c)(auStack_100,"opt dns %s\n",uVar3);
    (*(code *)PTR_write_line_to_file_00423554)("/var/udhcpd.conf",2,auStack_100);
    local_218 = local_218 + 1;
  }
  iVar4 = (*(code *)PTR_memcmp_004234c4)(local_1cc,&DAT_004121a0,4);
  if (iVar4 != 0) {
    uVar3 = (*(code *)PTR_inet_ntoa_00423478)(local_1cc[0]);
    (*(code *)PTR_sprintf_0042344c)(auStack_100,"opt dns %s\n",uVar3);
    (*(code *)PTR_write_line_to_file_00423554)("/var/udhcpd.conf",2,auStack_100);
    local_218 = local_218 + 1;
  }
  if (local_218 != 0) goto LAB_0040d894;
  if (param_2 == 1) {
    (*(code *)PTR_apmib_get_0042354c)(0xac,local_140);
    iVar4 = (*(code *)PTR_memcmp_004234c4)(local_140,&DAT_004121a0,4);
    if (iVar4 == 0) {
      (*(code *)PTR_apmib_get_0042354c)(0xaa,local_140);
      iVar4 = (*(code *)PTR_memcmp_004234c4)(local_140,&DAT_004121a0,4);
      goto joined_r0x0040d838;
    }
  }
  else {
    (*(code *)PTR_apmib_get_0042354c)(0xaa,local_140);
    iVar4 = (*(code *)PTR_memcmp_004234c4)(local_140,&DAT_004121a0,4);
joined_r0x0040d838:
    if (iVar4 == 0) goto LAB_0040d894;
  }
  uVar3 = (*(code *)PTR_inet_ntoa_00423478)(local_140[0]);
  (*(code *)PTR_sprintf_0042344c)(auStack_100,"opt dns %s\n",uVar3);
  (*(code *)PTR_write_line_to_file_00423554)("/var/udhcpd.conf",2,auStack_100);
LAB_0040d894:
  (*(code *)PTR_memset_00423490)(local_180,0,0x40);
  (*(code *)PTR_apmib_get_0042354c)(0xc6,local_180);
  if (local_180[0]._0_1_ != '\0') {
    (*(code *)PTR_sprintf_0042344c)(auStack_100,"opt domain %s\n",local_180);
    (*(code *)PTR_write_line_to_file_00423554)("/var/udhcpd.conf",2,auStack_100);
  }
  local_218 = 0;
  (*(code *)PTR_apmib_get_0042354c)(0x124,&local_218);
  if ((local_218 == 1) && ((*(code *)PTR_apmib_get_0042354c)(0x125,&local_210), 0 < local_210)) {
    for (iVar4 = 1; iVar4 <= local_210; iVar4 = iVar4 + 1) {
      local_1ac = CONCAT13((char)iVar4,local_1ac._1_3_);
      (*(code *)PTR_apmib_get_0042354c)(0x8126,&local_1ac);
      uVar2 = local_1a3;
      uVar1 = local_1a4;
      local_2c = (uint)local_1a8;
      local_30 = (uint)local_1a7;
      local_34 = (uint)local_1a6;
      local_38 = (uint)local_1a5;
      uVar3 = (*(code *)PTR_inet_ntoa_00423478)(local_1ac);
      (*(code *)PTR_sprintf_0042344c)
                (auStack_100,"static_lease %02x%02x%02x%02x%02x%02x %s\n",local_2c,local_30,local_34
                 ,local_38,uVar1,uVar2,uVar3);
      (*(code *)PTR_write_line_to_file_00423554)("/var/udhcpd.conf",2,auStack_100);
    }
  }
  (*(code *)PTR_apmib_get_0042354c)(0xaa,local_180);
  uVar3 = (*(code *)PTR_inet_ntoa_00423478)(local_180[0]);
  (*(code *)PTR_strcpy_004235e0)(local_20c,uVar3);
  (*(code *)PTR_apmib_get_0042354c)(0xab,local_140);
  uVar3 = (*(code *)PTR_inet_ntoa_00423478)(local_140[0]);
  (*(code *)PTR_strcpy_004235e0)(local_1ec,uVar3);
  (*(code *)PTR_RunSystemCmd_00423428)(0,"ifconfig",param_1,local_20c,"netmask",local_1ec,"");
  (*(code *)PTR_sprintf_0042344c)(auStack_9c,"udhcpd %s\n","/var/udhcpd.conf");
  (*(code *)PTR_system_00423558)(auStack_9c);
  return;
}

