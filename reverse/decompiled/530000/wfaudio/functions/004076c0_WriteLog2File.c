/* WriteLog2File @ 004076c0 */

void WriteLog2File(undefined4 param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 local_3b8;
  undefined1 auStack_3b4 [128];
  undefined1 auStack_334 [132];
  undefined1 auStack_2b0 [52];
  int local_27c;
  undefined1 auStack_218 [516];
  
  (*(code *)PTR_memset_00423490)(auStack_3b4,0,0x80);
  (*(code *)PTR_memset_00423490)(auStack_334,0,0x80);
  (*(code *)PTR_memset_00423490)(auStack_218,0,0x200);
  local_3b8 = (*(code *)PTR_time_00423474)(0);
  uVar2 = (*(code *)PTR_localtime_00423494)(&local_3b8);
  (*(code *)PTR_strftime_0042342c)(auStack_3b4,0x80,"%b/%d/%Y %T",uVar2);
  (*(code *)PTR_sprintf_0042344c)(auStack_218,"%s--%s\n",auStack_3b4,param_1);
  if (*(int *)PTR_verbose_00423578 == 1) {
    (*(code *)PTR_fprintf_0042350c)
              (*(undefined4 *)PTR_stderr_00423444,"\nFILE %s FUNCTION %s LINE %d: %s\n","utility.c",
               "WriteLog2File",0x2ff,auStack_218);
  }
  else {
    iVar3 = (*(code *)PTR_stat_00423424)("/var/log/wfaudio.log",auStack_2b0);
    puVar1 = PTR_LogFile_004234c8;
    if (-1 < iVar3) {
      if (0xfffff < local_27c) {
        (*(code *)PTR_puts_00423564)("Logfile size too large, clean old log data");
        (*(code *)PTR_close_004233ac)(*(undefined4 *)puVar1);
        (*(code *)PTR_unlink_004234d8)("/var/log/wfaudio.log");
        *(undefined4 *)puVar1 = 0xffffffff;
        iVar3 = (*(code *)PTR_open_004233e0)("/var/log/wfaudio.log",0x302,0x3f);
        *(int *)puVar1 = iVar3;
        if (iVar3 < 1) {
          return;
        }
        (*(code *)PTR_strcpy_004235e0)(auStack_334,"Log Start:");
        uVar2 = (*(code *)PTR_strlen_004233e8)(auStack_334);
        (*(code *)PTR_write_00423510)(*(undefined4 *)puVar1,auStack_334,uVar2);
      }
      uVar2 = (*(code *)PTR_strlen_004233e8)(auStack_218);
      (*(code *)PTR_write_00423510)(*(undefined4 *)puVar1,auStack_218,uVar2);
    }
  }
  return;
}

