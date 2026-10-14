/* FUN_00401bdc @ 00401bdc */

void FUN_00401bdc(int param_1)

{
  undefined *puVar1;
  undefined *UNRECOVERED_JUMPTABLE;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  
  puVar1 = PTR_stderr_00423444;
  uVar3 = *(undefined4 *)PTR_stderr_00423444;
  uVar2 = (*(code *)PTR_getpid_00423594)();
  (*(code *)PTR_fprintf_0042350c)
            (uVar3,"\nFILE %s FUNCTION %s LINE %d: wfaudio My pid=%d, sig=%d\n\n","wfaudio.c",
             "signal_handler",0x83,uVar2,param_1);
  if (param_1 == 2) {
    uVar2 = *(undefined4 *)puVar1;
    uVar3 = 0x85;
    pcVar4 = "\nFILE %s FUNCTION %s LINE %d: Aborted by signal SIGINT...\n\n";
  }
  else {
    if (param_1 == 0xf) {
      (*(code *)PTR_fprintf_0042350c)
                (*(undefined4 *)puVar1,
                 "\nFILE %s FUNCTION %s LINE %d: Aborted by signal SIGTERM...\n\n","wfaudio.c",
                 "signal_handler",0x87);
      (*(code *)PTR_pthread_mutex_lock_0042340c)(PTR_ProgramExit_004233f4);
      UNRECOVERED_JUMPTABLE = PTR_pthread_mutex_unlock_00423460;
      puVar1 = PTR_ProgramExit_004233f4;
      *(undefined4 *)PTR_program_terminate_0042346c = 1;
                    /* WARNING: Could not recover jumptable at 0x00401cec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)UNRECOVERED_JUMPTABLE)(puVar1);
      return;
    }
    if (param_1 != 6) {
      return;
    }
    uVar2 = *(undefined4 *)puVar1;
    pcVar4 = "\nFILE %s FUNCTION %s LINE %d: Aborted by signal SIGABRT...\n\n";
    uVar3 = 0x89;
  }
  (*(code *)PTR_fprintf_0042350c)(uVar2,pcVar4,"wfaudio.c","signal_handler",uVar3);
  return;
}

