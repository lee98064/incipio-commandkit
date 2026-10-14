/* FUN_004040d0 @ 004040d0 */

void FUN_004040d0(void)

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
  (*(code *)PTR_apmib_get_0042b1a0)(0xb8,&local_80);
  if (((((local_80 != 0) && (local_80 != 2)) && (local_80 != 4)) &&
      ((local_80 != 6 && (local_80 != 8)))) &&
     ((local_80 != 10 && ((local_80 != 0xc && (local_80 != 0xe)))))) {
    (*(code *)PTR_apmib_get_0042b1a0)(0xe3,&local_7c);
    if (local_7c == 0) {
      (*(code *)PTR_system_0042b1ac)("rm /var/log/log_split >/dev/null 2>&1");
      (*(code *)PTR_sprintf_0042b0e8)(local_78,"echo %d > /var/log/log_split",7);
      (*(code *)PTR_system_0042b1ac)(local_78);
      (*(code *)PTR_sprintf_0042b0e8)(local_78,&DAT_004179c4,8);
      (*(code *)PTR_sprintf_0042b0e8)(auStack_58,&DAT_004179c4,7);
      (*(code *)PTR_fprintf_0042b174)
                (*(undefined4 *)PTR_stderr_0042b0e4,
                 "syslog will use %dKB for log(%d rotate, 1 original, %dKB for each)\n",0x40,7,8);
      (*(code *)PTR_RunSystemCmd_0042b0dc)
                (0,"syslogd",&DAT_00417d40,&DAT_00417d48,local_78,&DAT_00417d4c,auStack_58,"");
    }
    else {
      (*(code *)PTR_apmib_get_0042b1a0)(0xe4,local_78);
      iVar1 = (*(code *)PTR_memcmp_0042b138)(local_78,&DAT_004184b0,4);
      if (iVar1 != 0) {
        uVar2 = (*(code *)PTR_inet_ntoa_0042b108)(local_78[0]);
        (*(code *)PTR_strcpy_0042b208)(auStack_38,uVar2);
        (*(code *)PTR_system_0042b1ac)("rm /var/log/log_split >/dev/null 2>&1");
        (*(code *)PTR_sprintf_0042b0e8)(local_78,"echo %d > /var/log/log_split",7);
        (*(code *)PTR_system_0042b1ac)(local_78);
        (*(code *)PTR_sprintf_0042b0e8)(local_78,&DAT_004179c4,8);
        (*(code *)PTR_sprintf_0042b0e8)(auStack_58,&DAT_004179c4,7);
        (*(code *)PTR_fprintf_0042b174)
                  (*(undefined4 *)PTR_stderr_0042b0e4,
                   "syslog will use %dKB for log(%d rotate, 1 original, %dKB for each)\n",0x40,7,8);
        (*(code *)PTR_RunSystemCmd_0042b0dc)
                  (0,"syslogd",&DAT_00417d40,&DAT_00417d44,auStack_38,&DAT_00417d48,local_78,
                   &DAT_00417d4c,auStack_58,"");
      }
    }
    (*(code *)PTR_RunSystemCmd_0042b0dc)(0,"klogd","");
  }
  return;
}

