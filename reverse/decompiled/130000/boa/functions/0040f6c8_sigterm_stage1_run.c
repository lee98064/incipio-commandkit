/* sigterm_stage1_run @ 0040f6c8 */

void sigterm_stage1_run(void)

{
  (*(code *)PTR_time_0046a84c)(PTR_current_time_0046ab68);
  (*(code *)PTR_fputs_0046a6e4)
            ("caught SIGTERM, starting shutdown\n",*(undefined4 *)PTR_stderr_0046a7f0);
  *(undefined4 *)PTR_sigterm_flag_0046a9ac = 2;
  return;
}

