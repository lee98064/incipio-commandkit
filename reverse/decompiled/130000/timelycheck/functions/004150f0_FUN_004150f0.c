/* FUN_004150f0 @ 004150f0 */

undefined4 FUN_004150f0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  int local_160;
  uint local_15c;
  uint local_158;
  uint local_154;
  uint local_150;
  uint local_14c;
  uint local_148;
  uint local_144;
  int local_140;
  uint local_13c [16];
  undefined1 auStack_fc [64];
  undefined1 auStack_bc [64];
  undefined1 auStack_7c [104];
  
  (*(code *)PTR_memset_0042b114)(auStack_7c,0,100);
  (*(code *)PTR_memset_0042b114)(local_13c,0,0x40);
  (*(code *)PTR_memset_0042b114)(auStack_fc,0,0x40);
  (*(code *)PTR_memset_0042b114)(auStack_bc,0,0x40);
  (*(code *)PTR_apmib_get_0042b1a0)(0xad,&local_140);
  iVar1 = (*(code *)PTR_isFileExist_0042b0ac)("/var/run/udhcpd.pid");
  if ((iVar1 == 0) || (local_140 == 2)) {
    iVar1 = (*(code *)PTR_inet_aton_0042b120)(param_1,&local_15c);
    if (iVar1 == 0) {
      uVar5 = 0xba;
    }
    else {
      iVar1 = (*(code *)PTR_inet_aton_0042b120)(param_2,&local_158);
      if (iVar1 != 0) {
        local_14c = local_158;
        (*(code *)PTR_getInAddr_0042b1c4)(&DAT_00417ad0,2,&local_154);
        (*(code *)PTR_getInAddr_0042b1c4)(&DAT_00417ad0,4,&local_150);
        local_144 = local_150;
        puVar2 = &local_144;
        if (local_14c < local_150) {
          puVar2 = &local_14c;
        }
        uVar3 = *puVar2;
        uVar4 = 0;
        if ((uVar3 & (local_154 ^ local_15c)) != 0) {
          return 0;
        }
        uVar6 = 1;
        do {
          if ((uVar6 & uVar3) != 0) break;
          uVar4 = uVar4 + 1;
          uVar6 = 1 << (uVar4 & 0x1f);
        } while (uVar4 != 0x20);
        uVar4 = 1 << (uVar4 & 0x1f);
        if ((uVar4 & local_154) != 0) {
          uVar4 = -uVar4;
        }
        local_154 = uVar4 + local_154;
        uVar4 = 0;
        do {
          if ((1 << (uVar4 & 0x1f) & uVar3) != 0) break;
          uVar4 = uVar4 + 1;
        } while (uVar4 != 0x20);
        local_148 = local_154;
        (*(code *)PTR_system_0042b1ac)("killall -9 udhcpd 2> /dev/null");
        (*(code *)PTR_system_0042b1ac)("rm -f /var/run/udhcpd.pid 2> /dev/null");
        (*(code *)PTR_system_0042b1ac)("rm -f /var/udhcpd.conf");
        (*(code *)PTR_sprintf_0042b0e8)(auStack_7c,"interface %s\n",&DAT_00417ad0);
        (*(code *)PTR_write_line_to_file_0042b1a8)("/var/udhcpd.conf",1,auStack_7c);
        (*(code *)PTR_apmib_get_0042b1a0)(0xae,local_13c);
        uVar3 = 1 << (uVar4 & 0x1f);
        local_13c[0] = local_13c[0] ^ uVar3;
        uVar5 = (*(code *)PTR_inet_ntoa_0042b108)(local_13c[0]);
        (*(code *)PTR_sprintf_0042b0e8)(auStack_7c,"start %s\n",uVar5);
        (*(code *)PTR_write_line_to_file_0042b1a8)("/var/udhcpd.conf",2,auStack_7c);
        (*(code *)PTR_apmib_get_0042b1a0)(0xaf,local_13c);
        local_13c[0] = local_13c[0] ^ uVar3;
        uVar5 = (*(code *)PTR_inet_ntoa_0042b108)(local_13c[0]);
        (*(code *)PTR_sprintf_0042b0e8)(auStack_7c,"end %s\n",uVar5);
        (*(code *)PTR_write_line_to_file_0042b1a8)("/var/udhcpd.conf",2,auStack_7c);
        uVar5 = (*(code *)PTR_inet_ntoa_0042b108)(local_150);
        (*(code *)PTR_sprintf_0042b0e8)(auStack_7c,"opt subnet %s\n",uVar5);
        (*(code *)PTR_write_line_to_file_0042b1a8)("/var/udhcpd.conf",2,auStack_7c);
        (*(code *)PTR_apmib_get_0042b1a0)(0x3b1,&local_160);
        if (0x275f < local_160 - 1U) {
          local_160 = 0x1e0;
          iVar1 = (*(code *)PTR_apmib_set_0042b184)(0x3b1,&local_160);
          if (iVar1 == 0) {
            (*(code *)PTR_puts_0042b1b8)("set MIB_DHCP_LEASE_TIME error");
          }
          (*(code *)PTR_apmib_update_0042b188)(4);
        }
        local_160 = local_160 * 0x3c;
        (*(code *)PTR_sprintf_0042b0e8)(auStack_7c,"opt lease %ld\n",local_160);
        (*(code *)PTR_write_line_to_file_0042b1a8)("/var/udhcpd.conf",2,auStack_7c);
        uVar5 = (*(code *)PTR_inet_ntoa_0042b108)(local_154);
        (*(code *)PTR_sprintf_0042b0e8)(auStack_7c,"opt router %s\n",uVar5);
        (*(code *)PTR_write_line_to_file_0042b1a8)("/var/udhcpd.conf",2,auStack_7c);
        uVar5 = (*(code *)PTR_inet_ntoa_0042b108)(local_154);
        (*(code *)PTR_sprintf_0042b0e8)(auStack_7c,"opt dns %s\n",uVar5);
        (*(code *)PTR_write_line_to_file_0042b1a8)("/var/udhcpd.conf",2,auStack_7c);
        (*(code *)PTR_memset_0042b114)(local_13c,0,0x40);
        (*(code *)PTR_apmib_get_0042b1a0)(0xc6,local_13c);
        if (local_13c[0]._0_1_ != '\0') {
          (*(code *)PTR_sprintf_0042b0e8)(auStack_7c,"opt domain %s\n",local_13c);
          (*(code *)PTR_write_line_to_file_0042b1a8)("/var/udhcpd.conf",2,auStack_7c);
        }
        (*(code *)PTR_memset_0042b114)(local_13c,0,0x40);
        local_13c[0] = local_148;
        uVar5 = (*(code *)PTR_inet_ntoa_0042b108)(local_148);
        (*(code *)PTR_strcpy_0042b208)(auStack_fc,uVar5);
        (*(code *)PTR_memset_0042b114)(local_13c,0,0x40);
        local_13c[0] = local_144;
        uVar5 = (*(code *)PTR_inet_ntoa_0042b108)(local_144);
        (*(code *)PTR_strcpy_0042b208)(auStack_bc,uVar5);
        (*(code *)PTR_memset_0042b114)(auStack_7c,0,100);
        (*(code *)PTR_sprintf_0042b0e8)
                  (auStack_7c,"ifconfig br0 %s netmask %s",auStack_fc,auStack_bc);
        (*(code *)PTR_system_0042b1ac)(auStack_7c);
        (*(code *)PTR_sprintf_0042b0e8)(auStack_7c,"udhcpd %s","/var/udhcpd.conf");
        (*(code *)PTR_system_0042b1ac)(auStack_7c);
        return 1;
      }
      uVar5 = 0xbf;
    }
    (*(code *)PTR_printf_0042b1f0)("\r\n Invalid IP-address value!__[%s-%u]\r\n","set_wan.c",uVar5);
  }
  return 0;
}

