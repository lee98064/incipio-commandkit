/* FUN_00413404 @ 00413404 */

void FUN_00413404(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  undefined4 local_198 [8];
  undefined4 local_178 [8];
  undefined4 local_158 [8];
  undefined1 auStack_138 [32];
  undefined1 auStack_118 [32];
  undefined1 auStack_f8 [32];
  undefined *local_d8;
  char *local_d4;
  undefined *local_d0;
  undefined1 *local_cc;
  undefined *local_c8;
  undefined1 *local_c4;
  undefined *local_c0;
  undefined1 *local_bc;
  undefined4 local_b8;
  undefined1 auStack_98 [104];
  undefined4 local_30;
  
  (*(code *)PTR_memset_0042b114)(local_198,0,0x20);
  (*(code *)PTR_memset_0042b114)(local_178,0,0x20);
  (*(code *)PTR_memset_0042b114)(local_158,0,0x20);
  (*(code *)PTR_memset_0042b114)(auStack_98,0,100);
  (*(code *)PTR_memset_0042b114)(auStack_138,0,0x20);
  (*(code *)PTR_memset_0042b114)(auStack_118,0,0x20);
  (*(code *)PTR_memset_0042b114)(auStack_f8,0,0x20);
  (*(code *)PTR_RunSystemCmd_0042b0dc)(0,"killall",&DAT_00417a78,&DAT_004196a4,"");
  (*(code *)PTR_apmib_get_0042b1a0)(0xb0,local_198);
  (*(code *)PTR_apmib_get_0042b1a0)(0xb1,local_178);
  (*(code *)PTR_apmib_get_0042b1a0)(0xb2,local_158);
  iVar1 = (*(code *)PTR_memcmp_0042b138)(local_198,&DAT_00419c30,4);
  iVar2 = (*(code *)PTR_memcmp_0042b138)(local_178,&DAT_00419c30,4);
  iVar3 = (*(code *)PTR_memcmp_0042b138)(local_158,&DAT_00419c30,4);
  cVar4 = (iVar1 != 0) + (iVar2 != 0) + (iVar3 != 0);
  local_d4 = "--cache=off";
  local_d8 = &DAT_004196a4;
  local_cc = auStack_138;
  if (cVar4 == '\x01') {
    local_30 = (*(code *)PTR_inet_ntoa_0042b108)(local_198[0]);
    (*(code *)PTR_strcpy_0042b208)(auStack_138,local_30);
    (*(code *)PTR_sprintf_0042b0e8)(auStack_98,"nameserver %s\n",local_30);
    local_d0 = &DAT_00417e28;
    (*(code *)PTR_write_line_to_file_0042b1a8)("/var/resolv.conf",1,auStack_98);
    local_c8 = (undefined *)0x0;
  }
  else {
    local_c4 = auStack_118;
    if (cVar4 == '\x02') {
      local_30 = (*(code *)PTR_inet_ntoa_0042b108)(local_198[0]);
      (*(code *)PTR_strcpy_0042b208)(auStack_138,local_30);
      (*(code *)PTR_sprintf_0042b0e8)(auStack_98,"nameserver %s\n",local_30);
      local_d0 = &DAT_00417e28;
      (*(code *)PTR_write_line_to_file_0042b1a8)("/var/resolv.conf",1,auStack_98);
      local_30 = (*(code *)PTR_inet_ntoa_0042b108)(local_178[0]);
      (*(code *)PTR_strcpy_0042b208)(auStack_118,local_30);
      (*(code *)PTR_sprintf_0042b0e8)(auStack_98,"nameserver %s\n",local_30);
      local_c8 = &DAT_00417e28;
      (*(code *)PTR_write_line_to_file_0042b1a8)("/var/resolv.conf",2,auStack_98);
      local_c0 = (undefined *)0x0;
    }
    else {
      if (cVar4 != '\x03') {
        (*(code *)PTR_puts_0042b1b8)("Invalid DNS server setting");
        return;
      }
      local_30 = (*(code *)PTR_inet_ntoa_0042b108)(local_198[0]);
      (*(code *)PTR_strcpy_0042b208)(auStack_138,local_30);
      (*(code *)PTR_sprintf_0042b0e8)(auStack_98,"nameserver %s\n",local_30);
      local_d0 = &DAT_00417e28;
      (*(code *)PTR_write_line_to_file_0042b1a8)("/var/resolv.conf",1,auStack_98);
      local_30 = (*(code *)PTR_inet_ntoa_0042b108)(local_178[0]);
      (*(code *)PTR_strcpy_0042b208)(auStack_118,local_30);
      (*(code *)PTR_sprintf_0042b0e8)(auStack_98,"nameserver %s\n",local_30);
      local_c8 = &DAT_00417e28;
      (*(code *)PTR_write_line_to_file_0042b1a8)("/var/resolv.conf",2,auStack_98);
      local_30 = (*(code *)PTR_inet_ntoa_0042b108)(local_158[0]);
      (*(code *)PTR_strcpy_0042b208)(auStack_f8,local_30);
      (*(code *)PTR_sprintf_0042b0e8)(auStack_98,"nameserver %s\n",local_30);
      local_c0 = &DAT_00417e28;
      local_bc = auStack_f8;
      (*(code *)PTR_write_line_to_file_0042b1a8)("/var/resolv.conf",2,auStack_98);
      local_b8 = 0;
    }
  }
  (*(code *)PTR_DoCmd_0042b0d4)(&local_d8,0);
  return;
}

