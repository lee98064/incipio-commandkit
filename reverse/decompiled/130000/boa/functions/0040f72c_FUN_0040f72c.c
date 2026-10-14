/* FUN_0040f72c @ 0040f72c */

void FUN_0040f72c(void)

{
  (*(code *)PTR_time_0046a84c)(PTR_current_time_0046ab68);
  (*(code *)PTR_fputs_0046a6e4)("caught SIGINT: shutting down\n",*(undefined4 *)PTR_stderr_0046a7f0)
  ;
  (*(code *)PTR_chdir_0046a9a0)(*(undefined4 *)PTR_tempdir_0046aa60);
  (*(code *)PTR_exit_0046a75c)(1);
  return;
}

