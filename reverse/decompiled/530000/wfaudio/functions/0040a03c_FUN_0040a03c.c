/* FUN_0040a03c @ 0040a03c */

void FUN_0040a03c(void)

{
  int iVar1;
  undefined4 uVar2;
  int local_80;
  int local_7c;
  undefined4 local_78 [8];
  undefined1 auStack_58 [32];
  undefined1 auStack_38 [36];
  
  local_80 = 0;
  local_7c = 0;
  (*(code *)PTR_apmib_get_0042354c)(0xb8,&local_80);
  if (((((local_80 != 0) && (local_80 != 2)) && (local_80 != 4)) &&
      ((local_80 != 6 && (local_80 != 8)))) &&
     ((local_80 != 10 && ((local_80 != 0xc && (local_80 != 0xe)))))) {
    (*(code *)PTR_apmib_get_0042354c)(0xe3,&local_7c);
    if (local_7c == 0) {
      (*(code *)PTR_system_00423558)("rm /var/log/log_split >/dev/null 2>&1");
      (*(code *)PTR_sprintf_0042344c)(local_78,"echo %d > /var/log/log_split",7);
      (*(code *)PTR_system_00423558)(local_78);
      (*(code *)PTR_sprintf_0042344c)(local_78,&DAT_004117f4,8);
      (*(code *)PTR_sprintf_0042344c)(auStack_58,&DAT_004117f4,7);
      (*(code *)PTR_fprintf_0042350c)
                (*(undefined4 *)PTR_stderr_00423444,
                 "syslog will use %dKB for log(%d rotate, 1 original, %dKB for each)\n",0x40,7,8);
      (*(code *)PTR_RunSystemCmd_00423428)
                (0,"syslogd",&DAT_00411ac8,&DAT_00411ad0,local_78,&DAT_00411ad4,auStack_58,"");
    }
    else {
      (*(code *)PTR_apmib_get_0042354c)(0xe4,local_78);
      iVar1 = (*(code *)PTR_memcmp_004234c4)(local_78,&DAT_00411ee0,4);
      if (iVar1 != 0) {
        uVar2 = (*(code *)PTR_inet_ntoa_00423478)(local_78[0]);
        (*(code *)PTR_strcpy_004235e0)(auStack_38,uVar2);
        (*(code *)PTR_system_00423558)("rm /var/log/log_split >/dev/null 2>&1");
        (*(code *)PTR_sprintf_0042344c)(local_78,"echo %d > /var/log/log_split",7);
        (*(code *)PTR_system_00423558)(local_78);
        (*(code *)PTR_sprintf_0042344c)(local_78,&DAT_004117f4,8);
        (*(code *)PTR_sprintf_0042344c)(auStack_58,&DAT_004117f4,7);
        (*(code *)PTR_fprintf_0042350c)
                  (*(undefined4 *)PTR_stderr_00423444,
                   "syslog will use %dKB for log(%d rotate, 1 original, %dKB for each)\n",0x40,7,8);
        (*(code *)PTR_RunSystemCmd_00423428)
                  (0,"syslogd",&DAT_00411ac8,&DAT_00411acc,auStack_38,&DAT_00411ad0,local_78,
                   &DAT_00411ad4,auStack_58,"");
      }
    }
    (*(code *)PTR_RunSystemCmd_00423428)(0,"klogd","");
  }
  return;
}

