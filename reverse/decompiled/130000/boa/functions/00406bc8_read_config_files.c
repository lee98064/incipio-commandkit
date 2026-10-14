/* read_config_files @ 00406bc8 */

void read_config_files(void)

{
  undefined *puVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  undefined4 local_18 [2];
  int local_10;
  
  DAT_0046c5e4 = (*(code *)PTR_getuid_0046ab2c)();
  if (*(int *)PTR_config_file_name_0046abcc == 0) {
    *(char **)PTR_config_file_name_0046abcc = "boa.conf";
  }
  iVar2 = (*(code *)PTR_fopen_0046a894)(*(undefined4 *)PTR_config_file_name_0046abcc,"r");
  if (iVar2 == 0) {
    uVar4 = *(undefined4 *)PTR_stderr_0046a7f0;
    pcVar3 = "Could not open boa.conf for reading.\n";
  }
  else {
    local_10 = iVar2;
    FUN_0040689c(iVar2);
    puVar1 = PTR_server_name_0046ab24;
    (*(code *)PTR_fclose_0046a85c)(local_10);
    if (*(int *)puVar1 == 0) {
      iVar2 = (*(code *)PTR_getInAddr_0046ab50)(*(undefined4 *)PTR_BRIDGE_IF_0046abe0,0,local_18);
      if (iVar2 != 0) {
        uVar4 = (*(code *)PTR_inet_ntoa_0046a854)(local_18[0]);
        iVar2 = (*(code *)PTR_strdup_0046a8a4)(uVar4);
        *(int *)puVar1 = iVar2;
        if (iVar2 == 0) {
          (*(code *)PTR_perror_0046ab44)("strdup:");
          goto LAB_00406cf4;
        }
      }
    }
    iVar2 = (*(code *)PTR_getenv_0046abb8)(&DAT_00449c38);
    puVar1 = PTR_tempdir_0046aa60;
    *(int *)PTR_tempdir_0046aa60 = iVar2;
    if (iVar2 == 0) {
      *(undefined **)puVar1 = &DAT_00449c3c;
    }
    if (single_post_limit < 0) {
      (*(code *)PTR_fprintf_0046a9ec)
                (*(undefined4 *)PTR_stderr_0046a7f0,"Invalid value for single_post_limit: %d\n");
      goto LAB_00406cf4;
    }
    if (*(int *)PTR_vhost_root_0046ab98 == 0) {
LAB_00406de8:
      if (*(int *)PTR_default_vhost_0046a990 == 0) {
        *(char **)PTR_default_vhost_0046a990 = "default";
      }
      puVar1 = PTR_max_connections_0046aa30;
      if (*(int *)PTR_max_connections_0046aa30 == 0) {
        (*(code *)PTR_getrlimit_0046ac44)(5,local_18);
        *(undefined4 *)puVar1 = local_18[0];
      }
      if (0x3ec < *(uint *)PTR_max_connections_0046aa30) {
        *(undefined4 *)PTR_max_connections_0046aa30 = 0x3ec;
      }
      if (*(int *)PTR_ka_timeout_0046a9d0 < 0) {
        *(undefined4 *)PTR_ka_timeout_0046a9d0 = 0;
      }
      iVar2 = 0x3c;
      if (*(int *)PTR_ka_timeout_0046a9d0 != 0) {
        iVar2 = *(int *)PTR_ka_timeout_0046a9d0;
      }
      *(int *)PTR_default_timeout_0046a6ec = iVar2;
      return;
    }
    if (*(int *)PTR_virtualhost_0046abc4 == 0) {
      if (*(int *)PTR_document_root_0046ac24 == 0) goto LAB_00406de8;
      uVar4 = *(undefined4 *)PTR_stderr_0046a7f0;
      pcVar3 = "Both VHostRoot and DocumentRoot were enabled, and they are mutually exclusive.\n";
    }
    else {
      uVar4 = *(undefined4 *)PTR_stderr_0046a7f0;
      pcVar3 = "Both VHostRoot and VirtualHost were enabled, and they are mutually exclusive.\n";
    }
  }
  (*(code *)PTR_fputs_0046a6e4)(pcVar3,uVar4);
LAB_00406cf4:
  (*(code *)PTR_exit_0046a75c)(1);
  return;
}

