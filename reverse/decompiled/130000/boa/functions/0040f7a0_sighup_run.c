/* sighup_run @ 0040f7a0 */

void sighup_run(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar3 = PTR_current_time_0046ab68;
  puVar2 = PTR_time_0046a84c;
  puVar1 = PTR_stderr_0046a7f0;
  *(undefined4 *)PTR_sighup_flag_0046aad8 = 0;
  (*(code *)puVar2)(puVar3);
  (*(code *)PTR_fputs_0046a6e4)("caught SIGHUP, restarting\n",*(undefined4 *)puVar1);
  (*(code *)PTR_dump_mime_0046ab84)();
  (*(code *)PTR_dump_passwd_0046a7d0)();
  (*(code *)PTR_dump_alias_0046aae4)();
  (*(code *)PTR_free_requests_0046a924)();
  (*(code *)PTR_range_pool_empty_0046a970)();
  (*(code *)PTR_fputs_0046a6e4)("re-reading configuration files\n",*(undefined4 *)puVar1);
  (*(code *)PTR_read_config_files_0046ac50)();
  (*(code *)PTR_fputs_0046a6e4)("successful restart\n",*(undefined4 *)puVar1);
  return;
}

