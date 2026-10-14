/* sigterm_stage2_run @ 0040f8bc */

void sigterm_stage2_run(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  (*(code *)PTR_fprintf_0046a9ec)
            (*(undefined4 *)PTR_stderr_0046a7f0,"exiting Boa normally (uptime %d seconds)\n",
             *(int *)PTR_current_time_0046ab68 - *(int *)PTR_start_time_0046a984);
  puVar1 = PTR_server_root_0046a6b8;
  (*(code *)PTR_chdir_0046a9a0)(*(undefined4 *)PTR_tempdir_0046aa60);
  (*(code *)PTR_clear_common_env_0046a9f8)();
  (*(code *)PTR_dump_mime_0046ab84)();
  (*(code *)PTR_dump_passwd_0046a7d0)();
  (*(code *)PTR_dump_alias_0046aae4)();
  (*(code *)PTR_free_requests_0046a924)();
  (*(code *)PTR_range_pool_empty_0046a970)();
  (*(code *)PTR_free_0046a680)(*(undefined4 *)puVar1);
  (*(code *)PTR_free_0046a680)(*(undefined4 *)PTR_server_name_0046ab24);
  puVar2 = PTR_exit_0046a75c;
  *(undefined4 *)puVar1 = 0;
  (*(code *)puVar2)(0);
  return;
}

