/* main @ 00404fe0 */

undefined4 main(undefined4 param_1,undefined4 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  char *pcVar7;
  code *pcVar8;
  
  (*(code *)PTR_umask_0046a960)(0x3f);
  puVar3 = PTR_optarg_0046ab08;
  (*(code *)PTR_time_0046a84c)(PTR_current_time_0046ab68);
  (*(code *)PTR_tzset_0046a6c4)();
  uVar4 = (*(code *)PTR_open_0046a710)("/dev/null",0);
  (*(code *)PTR_dup2_0046ab34)(uVar4,0);
  puVar1 = PTR_server_root_0046a6b8;
  (*(code *)PTR_close_0046a694)(uVar4);
  do {
    iVar5 = (*(code *)PTR_getopt_0046a888)(param_1,param_2,"c:dl:f:r:");
    puVar2 = PTR_server_root_0046a6b8;
    if (iVar5 == -1) {
      if (*(int *)PTR_server_root_0046a6b8 == 0) {
        iVar5 = (*(code *)PTR_strdup_0046a8a4)("/etc/boa");
        *(int *)puVar2 = iVar5;
        if (iVar5 == 0) {
          pcVar7 = "strdup (SERVER_ROOT)";
          goto LAB_00405174;
        }
      }
      puVar1 = PTR_server_root_0046a6b8;
      iVar5 = (*(code *)PTR_chdir_0046a9a0)(*(undefined4 *)PTR_server_root_0046a6b8);
      if (iVar5 == -1) {
        (*(code *)PTR_fprintf_0046a9ec)
                  (*(undefined4 *)PTR_stderr_0046a7f0,"Could not chdir to \"%s\": aborting\n",
                   *(undefined4 *)puVar1);
        goto LAB_0040517c;
      }
      (*(code *)PTR_asp_init_0046a72c)(param_1,param_2);
      (*(code *)PTR_read_config_files_0046ac50)();
      (*(code *)PTR_create_common_env_0046aa5c)();
      uVar4 = (*(code *)PTR_socket_0046aad4)(10,2,6);
      (*(code *)PTR_fcntl_0046a6cc)(uVar4,4,0x80);
      (*(code *)PTR_fcntl_0046a6cc)(uVar4,2,1);
      (*(code *)PTR_setsockopt_0046a98c)(uVar4,0xffff,4,&DAT_00468038,4);
      (*(code *)PTR_bind_server_0046a708)
                (uVar4,*(undefined4 *)PTR_server_ip_0046aa94,*(undefined4 *)PTR_server_port_0046a7c0
                );
      (*(code *)PTR_listen_0046a8cc)(uVar4,DAT_00468030);
      (*(code *)PTR_build_needs_escape_0046ac64)();
      pcVar8 = (code *)PTR_getpid_0046ab88;
      if (DAT_00468034 != 0) {
        pcVar8 = (code *)PTR_fork_0046a8c8;
      }
      iVar5 = (*pcVar8)();
      if (iVar5 == -1) {
        pcVar7 = "fork/getpid";
        goto LAB_00405174;
      }
      if (iVar5 != 0) {
        if (*(int *)PTR_pid_file_0046a948 != 0) {
          iVar5 = (*(code *)PTR_fopen_0046a894)(*(int *)PTR_pid_file_0046a948,"w");
          if (iVar5 == 0) {
            (*(code *)PTR_perror_0046ab44)("fopen pid file");
          }
          else {
            (*(code *)PTR_fprintf_0046a9ec)(iVar5,"%d\n");
            (*(code *)PTR_fclose_0046a85c)(iVar5);
          }
        }
        if (DAT_00468034 != 0) {
          uVar4 = 0;
          goto LAB_0040518c;
        }
      }
      DAT_0046c5c8 = 1;
      (*(code *)PTR_init_signals_0046a6a0)();
      uVar6 = (*(code *)PTR_getgid_0046ac38)();
      puVar1 = PTR_getuid_0046ab2c;
      *(undefined4 *)PTR_server_gid_0046a6f4 = uVar6;
      uVar6 = (*(code *)puVar1)();
      puVar1 = PTR_timestamp_0046aba8;
      *(undefined4 *)PTR_server_uid_0046a97c = uVar6;
      (*(code *)puVar1)();
      puVar2 = PTR_alarm_0046aa54;
      puVar3 = PTR_start_time_0046a984;
      puVar1 = PTR_status_0046a6a8;
      uVar6 = *(undefined4 *)PTR_current_time_0046ab68;
      *(undefined4 *)(PTR_status_0046a6a8 + 4) = 0;
      *(undefined4 *)puVar1 = 0;
      *(undefined4 *)puVar3 = uVar6;
      (*(code *)puVar2)(1);
      (*(code *)PTR_loop_0046ab8c)(uVar4);
      return 0;
    }
    switch(iVar5) {
    case 99:
      if (*(int *)puVar1 != 0) {
        (*(code *)PTR_free_0046a680)();
      }
      iVar5 = (*(code *)PTR_strdup_0046a8a4)(*(undefined4 *)puVar3);
      *(int *)puVar1 = iVar5;
      if (iVar5 == 0) {
        pcVar7 = "strdup (for server_root)";
        goto LAB_00405174;
      }
      break;
    case 100:
      DAT_00468034 = 0;
      break;
    default:
      (*(code *)PTR_fprintf_0046a9ec)
                (*(undefined4 *)PTR_stderr_0046a7f0,
                 "Usage: %s [-c serverroot] [-d] [-f configfile] [-r chroot]%s\n",*param_2,
                 " [-l debug_level]");
      (*(code *)PTR_print_debug_usage_0046ab60)();
      goto LAB_0040517c;
    case 0x66:
      *(undefined4 *)PTR_config_file_name_0046abcc = *(undefined4 *)puVar3;
      break;
    case 0x6c:
      (*(code *)PTR_parse_debug_0046ac0c)(*(undefined4 *)puVar3);
      break;
    case 0x72:
      iVar5 = (*(code *)PTR_chdir_0046a9a0)(*(undefined4 *)puVar3);
      if (iVar5 == -1) {
        pcVar7 = "chdir (to chroot)";
        goto LAB_00405174;
      }
      iVar5 = (*(code *)PTR_chroot_0046ac5c)(*(undefined4 *)puVar3);
      if (iVar5 == -1) {
        pcVar7 = "chroot";
        goto LAB_00405174;
      }
      iVar5 = (*(code *)PTR_chdir_0046a9a0)(&DAT_00453564);
      if (iVar5 == -1) {
        pcVar7 = "chdir (after chroot)";
LAB_00405174:
        (*(code *)PTR_perror_0046ab44)(pcVar7);
LAB_0040517c:
        uVar4 = 1;
LAB_0040518c:
        uVar4 = (*(code *)PTR_exit_0046a75c)(uVar4);
        return uVar4;
      }
    }
  } while( true );
}

