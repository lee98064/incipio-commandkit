/* main @ 0041b3f8 */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

undefined4 main(undefined4 param_1,undefined4 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
  int local_110 [6];
  undefined1 auStack_f8 [8];
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined1 auStack_e0 [20];
  undefined2 local_cc;
  undefined2 uStack_ca;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined1 auStack_b0 [16];
  undefined2 local_a0;
  undefined1 local_9e;
  undefined1 local_9d;
  undefined1 local_9c;
  undefined1 local_9b;
  undefined1 local_9a;
  undefined1 local_99;
  undefined1 local_90;
  undefined1 local_8f;
  undefined1 local_8e;
  undefined1 local_8d;
  undefined1 local_8c;
  undefined1 local_8b;
  
  (*(code *)PTR_memset_006130cc)(&local_90,0,100);
  local_110[0] = 0;
  do {
    (*(code *)PTR_sleep_0061454c)(1);
    iVar3 = (*(code *)PTR_access_00613bac)("/tmp/net/wac_state.txt",4);
    if (iVar3 == 0) {
      (*(code *)PTR_printf_006126e8)("Check WAC is still processing?......");
      iVar3 = (*(code *)PTR_fopen_0061395c)("/tmp/net/wac_state.txt","r");
      if (iVar3 != 0) {
        uVar4 = (*(code *)PTR_fileno_00613768)(iVar3);
        iVar5 = (*(code *)PTR_flock_0061302c)(uVar4,2);
        if (iVar5 == 0) {
          iVar5 = (*(code *)PTR_fgets_006134d4)(auStack_f8,0x80,iVar3);
          if (iVar5 != 0) {
            (*(code *)PTR_sscanf_00613470)(auStack_f8,"%d",local_110);
          }
          uVar4 = (*(code *)PTR_fileno_00613768)(iVar3);
          (*(code *)PTR_flock_0061302c)(uVar4,8);
        }
        (*(code *)PTR_fclose_00613a3c)(iVar3);
      }
      pcVar6 = "WAC is processing, need to wait";
      if (local_110[0] < 2) {
        pcVar6 = "WAC is ready, but not processing";
      }
      (*(code *)PTR_puts_00612670)(pcVar6);
    }
    else {
      (*(code *)PTR_puts_00612670)("Check WAC is still processing?......No WAC alive");
      local_110[0] = 0;
    }
  } while (1 < local_110[0]);
  (*(code *)PTR_apmib_init_00613c14)();
  (*(code *)PTR_apmib_get_00613a74)(0x2b0,&g_isWACConfigured);
  if (g_isWACConfigured == 0) {
    pcVar6 = "WAC is not configured(%d)...\n";
    iVar3 = 0;
  }
  else {
    pcVar6 = "WAC is configured(%d)...\n";
    iVar3 = g_isWACConfigured;
  }
  (*(code *)PTR_printf_006126e8)(pcVar6,iVar3);
  (*(code *)PTR_apmib_get_00613a74)(0x17,&local_90);
  iVar3 = (*(code *)PTR_memcmp_00612e6c)(&local_90,&DAT_005ac180,6);
  if (iVar3 == 0) {
    uVar4 = (*(code *)PTR_socket_00612d38)(2,1,0);
    local_a0 = 2;
    (*(code *)PTR_strncpy_00613414)(auStack_b0,&DAT_005abf74,0xf);
    (*(code *)PTR_ioctl_00613f98)(uVar4,0x8927,auStack_b0);
    (*(code *)PTR_close_00613604)(uVar4);
    pcVar6 = "%.2x:%.2x:%.2x:%.2x:%.2x:%.2x";
    local_90 = local_9e;
    local_8f = local_9d;
    local_8e = local_9c;
    local_8d = local_9b;
    local_8c = local_9a;
    local_8b = local_99;
  }
  else {
    pcVar6 = "%02X:%02X:%02X:%02X:%02X:%02X";
  }
  (*(code *)PTR_sprintf_00612e20)
            (auStack_e0,pcVar6,local_90,local_8f,local_8e,local_8d,local_8c,local_8b);
  (*(code *)PTR_mdnsPhytrex_HomekitSetID_00613770)(auStack_e0);
  (*(code *)PTR_umask_00613488)(0x3f);
  (*(code *)PTR_time_00613804)(PTR_current_time_006146b0);
  (*(code *)PTR_tzset_006135bc)();
  iVar3 = (*(code *)PTR_open_0061479c)("/dev/null",0);
  if (iVar3 == -1) {
    (*(code *)PTR_fputs_006132bc)("can\'t open /dev/null",*(undefined4 *)PTR_stderr_006137c8);
  }
  iVar5 = (*(code *)PTR_dup2_00613dd8)(iVar3,0);
  if (iVar5 == -1) {
    (*(code *)PTR_fputs_006132bc)
              ("can\'t dup2 /dev/null to STDIN_FILENO",*(undefined4 *)PTR_stderr_006137c8);
  }
  (*(code *)PTR_close_00613604)(iVar3);
  (*(code *)PTR_HKSetupDNSServiceName_00613838)();
  puVar1 = PTR_optarg_006124d4;
  do {
    iVar3 = (*(code *)PTR_getopt_006129f4)(param_1,param_2,"f:cij");
    puVar2 = PTR_server_port_006134f0;
    if (iVar3 == -1) {
      (*(code *)PTR_Phytrex_HMSetAccessoryName_00612a54)(auStack_e0);
      puVar1 = PTR_build_needs_escape_006133d0;
      *(undefined4 *)puVar2 = 0xce03;
      (*(code *)puVar1)();
      iVar3 = (*(code *)PTR_fork_00612b8c)();
      (*(code *)PTR_puts_00612670)("Fork here ");
      if (iVar3 == -1) {
        (*(code *)PTR_perror_00613058)("fork/getpid");
        uVar4 = 1;
      }
      else {
        if (iVar3 == 0) {
          (*(code *)PTR_printf_006126e8)("child success %d. \n",0);
          (*(code *)PTR_printf_006126e8)("Homekit Server starting... %d, %d\n. ",0,DAT_00614b84);
          (*(code *)PTR_printf_006126e8)("Binary build date: %s @ %s\n","Sep 14 2016","16:21:06");
          if (g_isWACConfigured == 0) {
            DAT_00614b84 = 0;
            iVar3 = DAT_00614b84;
          }
          else {
            uStack_ca = 0;
            local_cc = 10;
            local_b4 = 0;
            local_c8 = 0;
            local_c4 = 0;
            local_c0 = 0;
            local_bc = 0;
            local_b8 = 0;
            (*(code *)PTR_memcpy_00614674)(&local_c4,PTR_in6addr_any_0061340c,0x10);
            _local_cc = CONCAT22(local_cc,(short)*(undefined4 *)puVar2);
            iVar3 = (*(code *)PTR_socket_00612d38)(local_cc,2,6);
            if (iVar3 == -1) {
              (*(code *)PTR_fputs_006132bc)
                        ("unable to create socket",*(undefined4 *)PTR_stderr_006137c8);
            }
            FUN_0041b220(iVar3,1);
            iVar5 = (*(code *)PTR_setsockopt_00613a04)(iVar3,0xffff,4,&DAT_006009f4,4);
            if (iVar5 == -1) {
              (*(code *)PTR_fputs_006132bc)("setsockopt",*(undefined4 *)PTR_stderr_006137c8);
            }
            local_f0 = 1;
            local_ec = 0;
            (*(code *)PTR_setsockopt_00613a04)(iVar3,0xffff,0x80,&local_f0,8);
            local_110[1] = 0x1000;
            (*(code *)PTR_setsockopt_00613a04)(iVar3,0xffff,0x1002,local_110 + 1,4);
            local_110[2] = 0x5ee;
            (*(code *)PTR_setsockopt_00613a04)(iVar3,0xffff,0x1001,local_110 + 2,4);
            local_e8 = 0x1e;
            local_e4 = 0;
            (*(code *)PTR_setsockopt_00613a04)(iVar3,0xffff,0x1005,&local_e8,8);
            (*(code *)PTR_setsockopt_00613a04)(iVar3,0xffff,0x1006,&local_e8,8);
            (*(code *)PTR_setsockopt_00613a04)(iVar3,0xffff,8,&DAT_006009f4,4);
            local_110[3] = 10;
            (*(code *)PTR_setsockopt_00613a04)(iVar3,6,4,local_110 + 3,4);
            local_110[4] = 0x14;
            (*(code *)PTR_setsockopt_00613a04)(iVar3,6,5,local_110 + 4,4);
            local_110[5] = 5;
            (*(code *)PTR_setsockopt_00613a04)(iVar3,6,6,local_110 + 5,4);
            iVar5 = (*(code *)PTR_bind_006149f0)(iVar3,&local_cc,0x1c);
            if (iVar5 == -1) {
              (*(code *)PTR_fputs_006132bc)("unable to bind",*(undefined4 *)PTR_stderr_006137c8);
            }
            iVar5 = (*(code *)PTR_listen_00612724)(iVar3,DAT_006009f0);
            if (iVar5 == -1) {
              (*(code *)PTR_fputs_006132bc)("unable to listen",*(undefined4 *)PTR_stderr_006137c8);
            }
          }
          DAT_00614b84 = iVar3;
          (*(code *)PTR_init_signals_0061325c)();
          (*(code *)PTR_mdnsPhytrex_HomekitRegist_00613ea8)(&DAT_00614b88);
          (*(code *)PTR_shared_ServerWriteInit_00613af4)();
          (*(code *)PTR_shared_ServerReadInit_00613878)();
          (*(code *)PTR_HomekitServer_init_00613aa8)();
          (*(code *)PTR_homeKitListener_loop_00612c4c)(DAT_00614b84);
          (*(code *)PTR_HomekitServer_Cleaner_006144f4)();
          (*(code *)PTR_shutdown_006123d8)(DAT_00614b84,1);
          (*(code *)PTR_shared_ServerReadDetach_00613684)();
          (*(code *)PTR_shared_ServerWriteDetach_00612988)();
          (*(code *)PTR_mdnsPhytrex_HomekitRemove_00613180)();
          (*(code *)PTR_printf_006126e8)("Homekit Server stop... \n. ");
          return 0;
        }
        (*(code *)PTR_memset_006130cc)(PTR_pid_file_00613430,0,0x20);
        (*(code *)PTR_memcpy_00614674)(PTR_pid_file_00613430,"/var/run/homekitserver.pid",0x1a);
        (*(code *)PTR_sprintf_00612e20)(&local_90,"%d\n",iVar3);
        FUN_0041b140(PTR_pid_file_00613430,1,&local_90);
        (*(code *)PTR_memset_006130cc)(PTR_pid_file_00613430,0,0x20);
        (*(code *)PTR_memcpy_00614674)(PTR_pid_file_00613430,"/tmp/homekit.script",0x13);
        (*(code *)PTR_strcpy_00612464)(&local_90,"#!/bin/sh\n");
        FUN_0041b140(PTR_pid_file_00613430,1,&local_90);
        (*(code *)PTR_sprintf_00612e20)(&local_90,"kill -2 %d\n",iVar3);
        FUN_0041b140(PTR_pid_file_00613430,2,&local_90);
        (*(code *)PTR_strcpy_00612464)(&local_90,"homekitserver -c\n");
        FUN_0041b140(PTR_pid_file_00613430,2,&local_90);
        (*(code *)PTR_strcpy_00612464)(&local_90,"reboot\n");
        FUN_0041b140(PTR_pid_file_00613430,2,&local_90);
        (*(code *)PTR_strcpy_00612464)(&local_90,&DAT_005add84);
        FUN_0041b140(PTR_pid_file_00613430,2,&local_90);
        (*(code *)PTR_memset_006130cc)(PTR_pid_file_00613430,0,0x20);
        (*(code *)PTR_memcpy_00614674)(PTR_pid_file_00613430,"/tmp/homekitclean.script",0x18);
        (*(code *)PTR_strcpy_00612464)(&local_90,"#!/bin/sh\n");
        FUN_0041b140(PTR_pid_file_00613430,1,&local_90);
        (*(code *)PTR_sprintf_00612e20)(&local_90,"kill -HUP %d\n",iVar3);
        FUN_0041b140(PTR_pid_file_00613430,2,&local_90);
        (*(code *)PTR_strcpy_00612464)(&local_90,&DAT_005add84);
        FUN_0041b140(PTR_pid_file_00613430,2,&local_90);
        (*(code *)PTR_printf_006126e8)("do_fork exit %d. \n ",iVar3);
LAB_0041bc88:
        uVar4 = 0;
      }
      uVar4 = (*(code *)PTR_exit_00612bd8)(uVar4);
      return uVar4;
    }
    if (iVar3 == 99) {
      (*(code *)PTR_Phytrex_HMInitFlash_006141f8)(1);
      goto LAB_0041bc88;
    }
    if (iVar3 == 0x66) {
      (*(code *)PTR_strcpy_00612464)(&DAT_00614b88,*(undefined4 *)puVar1);
    }
  } while( true );
}

