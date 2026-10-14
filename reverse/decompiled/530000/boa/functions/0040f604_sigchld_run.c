/* sigchld_run @ 0040f604 */

void sigchld_run(void)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 local_28 [2];
  int local_20;
  
  *(undefined4 *)PTR_sigchld_flag_0046a9bc = 0;
  puVar2 = PTR_verbose_cgi_logs_0046a868;
  puVar1 = PTR_stderr_0046a7f0;
  while( true ) {
    iVar3 = (*(code *)PTR_waitpid_0046ac48)(0xffffffff,local_28,1);
    if (iVar3 < 1) break;
    if (*(int *)puVar2 != 0) {
      local_20 = iVar3;
      (*(code *)PTR_time_0046a84c)(PTR_current_time_0046ab68);
      (*(code *)PTR_fprintf_0046a9ec)
                (*(undefined4 *)puVar1,"reaping child %d: status %d\n",local_20,local_28[0]);
    }
  }
  return;
}

