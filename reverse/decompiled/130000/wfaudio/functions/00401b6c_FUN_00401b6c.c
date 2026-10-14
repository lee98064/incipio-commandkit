/* FUN_00401b6c @ 00401b6c */

void FUN_00401b6c(int param_1)

{
  undefined *puVar1;
  undefined *UNRECOVERED_JUMPTABLE;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  
  puVar1 = PTR_stderr_00423160;
  uVar3 = *(undefined4 *)PTR_stderr_00423160;
  uVar2 = (*(code *)PTR_getpid_004232a8)();
  (*(code *)PTR_fprintf_00423224)
            (uVar3,"\nFILE %s FUNCTION %s LINE %d: wfaudio My pid=%d, sig=%d\n\n","wfaudio.c",
             "signal_handler",0x83,uVar2,param_1);
  if (param_1 == 2) {
    uVar2 = *(undefined4 *)puVar1;
    uVar3 = 0x85;
    pcVar4 = "\nFILE %s FUNCTION %s LINE %d: Aborted by signal SIGINT...\n\n";
  }
  else {
    if (param_1 == 0xf) {
      (*(code *)PTR_fprintf_00423224)
                (*(undefined4 *)puVar1,
                 "\nFILE %s FUNCTION %s LINE %d: Aborted by signal SIGTERM...\n\n","wfaudio.c",
                 "signal_handler",0x87);
      (*(code *)PTR_pthread_mutex_lock_0042312c)(PTR_ProgramExit_00423114);
      UNRECOVERED_JUMPTABLE = PTR_pthread_mutex_unlock_00423178;
      puVar1 = PTR_ProgramExit_00423114;
      *(undefined4 *)PTR_program_terminate_00423184 = 1;
                    /* WARNING: Could not recover jumptable at 0x00401c7c. Too many branches */
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
  (*(code *)PTR_fprintf_00423224)(uVar2,pcVar4,"wfaudio.c","signal_handler",uVar3);
  return;
}

