/* WriteLog2File @ 00407410 */

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
  
  (*(code *)PTR_memset_004231a8)(auStack_3b4,0,0x80);
  (*(code *)PTR_memset_004231a8)(auStack_334,0,0x80);
  (*(code *)PTR_memset_004231a8)(auStack_218,0,0x200);
  local_3b8 = (*(code *)PTR_time_0042318c)(0);
  uVar2 = (*(code *)PTR_localtime_004231ac)(&local_3b8);
  (*(code *)PTR_strftime_0042314c)(auStack_3b4,0x80,"%b/%d/%Y %T",uVar2);
  (*(code *)PTR_sprintf_00423164)(auStack_218,"%s--%s\n",auStack_3b4,param_1);
  if (*(int *)PTR_verbose_00423290 == 1) {
    (*(code *)PTR_fprintf_00423224)
              (*(undefined4 *)PTR_stderr_00423160,"\nFILE %s FUNCTION %s LINE %d: %s\n","utility.c",
               "WriteLog2File",0x2ff,auStack_218);
  }
  else {
    iVar3 = (*(code *)PTR_stat_00423144)("/var/log/wfaudio.log",auStack_2b0);
    puVar1 = PTR_LogFile_004231e0;
    if (-1 < iVar3) {
      if (0xfffff < local_27c) {
        (*(code *)PTR_puts_0042327c)("Logfile size too large, clean old log data");
        (*(code *)PTR_close_004230cc)(*(undefined4 *)puVar1);
        (*(code *)PTR_unlink_004231f0)("/var/log/wfaudio.log");
        *(undefined4 *)puVar1 = 0xffffffff;
        iVar3 = (*(code *)PTR_open_00423100)("/var/log/wfaudio.log",0x302,0x3f);
        *(int *)puVar1 = iVar3;
        if (iVar3 < 1) {
          return;
        }
        (*(code *)PTR_strcpy_004232f4)(auStack_334,"Log Start:");
        uVar2 = (*(code *)PTR_strlen_00423108)(auStack_334);
        (*(code *)PTR_write_00423228)(*(undefined4 *)puVar1,auStack_334,uVar2);
      }
      uVar2 = (*(code *)PTR_strlen_00423108)(auStack_218);
      (*(code *)PTR_write_00423228)(*(undefined4 *)puVar1,auStack_218,uVar2);
    }
  }
  return;
}

