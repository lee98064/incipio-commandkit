/* main @ 0041b308 */

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
  undefined1 auStack_90 [104];
  
  (*(code *)PTR_memset_0061223c)(auStack_90,0,100);
  local_110[0] = 0;
  do {
    (*(code *)PTR_sleep_006136a8)(1);
    iVar3 = (*(code *)PTR_access_00612d14)("/tmp/net/wac_state.txt",4);
    if (iVar3 == 0) {
      (*(code *)PTR_printf_0061185c)("Check WAC is still processing?......");
      iVar3 = (*(code *)PTR_fopen_00612ac0)("/tmp/net/wac_state.txt","r");
      if (iVar3 != 0) {
        uVar4 = (*(code *)PTR_fileno_006128cc)(iVar3);
        iVar5 = (*(code *)PTR_flock_0061219c)(uVar4,2);
        if (iVar5 == 0) {
          iVar5 = (*(code *)PTR_fgets_00612640)(auStack_f8,0x80,iVar3);
          if (iVar5 != 0) {
            (*(code *)PTR_sscanf_006125dc)(auStack_f8,"%d",local_110);
          }
          uVar4 = (*(code *)PTR_fileno_006128cc)(iVar3);
          (*(code *)PTR_flock_0061219c)(uVar4,8);
        }
        (*(code *)PTR_fclose_00612ba0)(iVar3);
      }
      pcVar6 = "WAC is processing, need to wait";
      if (local_110[0] < 2) {
        pcVar6 = "WAC is ready, but not processing";
      }
      (*(code *)PTR_puts_006117e4)(pcVar6);
    }
    else {
      (*(code *)PTR_puts_006117e4)("Check WAC is still processing?......No WAC alive");
      local_110[0] = 0;
    }
  } while (1 < local_110[0]);
  (*(code *)PTR_apmib_init_00612d7c)();
  (*(code *)PTR_apmib_get_00612bd8)(0x2b0,&g_isWACConfigured);
  if (g_isWACConfigured == 0) {
    pcVar6 = "WAC is not configured(%d)...\n";
    iVar3 = 0;
  }
  else {
    pcVar6 = "WAC is configured(%d)...\n";
    iVar3 = g_isWACConfigured;
  }
  (*(code *)PTR_printf_0061185c)(pcVar6,iVar3);
  uVar4 = (*(code *)PTR_socket_00611ea8)(2,1,0);
  local_a0 = 2;
  (*(code *)PTR_strncpy_00612580)(auStack_b0,&DAT_005ab154,0xf);
  (*(code *)PTR_ioctl_00613100)(uVar4,0x8927,auStack_b0);
  (*(code *)PTR_close_0061276c)(uVar4);
  (*(code *)PTR_sprintf_00611f90)
            (auStack_e0,"%.2x:%.2x:%.2x:%.2x:%.2x:%.2x",local_9e,local_9d,local_9c,local_9b,local_9a
             ,local_99);
  (*(code *)PTR_umask_006125f4)(0x3f);
  (*(code *)PTR_time_00612968)(PTR_current_time_0061380c);
  (*(code *)PTR_tzset_00612724)();
  iVar3 = (*(code *)PTR_open_006138f8)("/dev/null",0);
  if (iVar3 == -1) {
    (*(code *)PTR_fputs_00612428)("can\'t open /dev/null",*(undefined4 *)PTR_stderr_0061292c);
  }
  iVar5 = (*(code *)PTR_dup2_00612f40)(iVar3,0);
  if (iVar5 == -1) {
    (*(code *)PTR_fputs_00612428)
              ("can\'t dup2 /dev/null to STDIN_FILENO",*(undefined4 *)PTR_stderr_0061292c);
  }
  (*(code *)PTR_close_0061276c)(iVar3);
  (*(code *)PTR_HKSetupDNSServiceName_0061299c)();
  puVar1 = PTR_optarg_00611640;
  do {
    iVar3 = (*(code *)PTR_getopt_00611b64)(param_1,param_2,"f:cij");
    puVar2 = PTR_server_port_0061265c;
    if (iVar3 == -1) {
      (*(code *)PTR_Phytrex_HMSetAccessoryName_00611bc4)(auStack_e0);
      puVar1 = PTR_build_needs_escape_0061253c;
      *(undefined4 *)puVar2 = 0xce03;
      (*(code *)puVar1)();
      iVar3 = (*(code *)PTR_fork_00611cfc)();
      (*(code *)PTR_puts_006117e4)("Fork here ");
      if (iVar3 == -1) {
        (*(code *)PTR_perror_006121c8)("fork/getpid");
        uVar4 = 1;
      }
      else {
        if (iVar3 == 0) {
          (*(code *)PTR_printf_0061185c)("child success %d. \n",0);
          (*(code *)PTR_printf_0061185c)("Homekit Server starting... %d, %d\n. ",0,DAT_00613ce4);
          (*(code *)PTR_printf_0061185c)("Binary build date: %s @ %s\n","Nov 18 2015","17:10:08");
          if (g_isWACConfigured == 0) {
            DAT_00613ce4 = 0;
            iVar3 = DAT_00613ce4;
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
            (*(code *)PTR_memcpy_006137d0)(&local_c4,PTR_in6addr_any_00612578,0x10);
            _local_cc = CONCAT22(local_cc,(short)*(undefined4 *)puVar2);
            iVar3 = (*(code *)PTR_socket_00611ea8)(local_cc,2,6);
            if (iVar3 == -1) {
              (*(code *)PTR_fputs_00612428)
                        ("unable to create socket",*(undefined4 *)PTR_stderr_0061292c);
            }
            FUN_0041b130(iVar3,1);
            iVar5 = (*(code *)PTR_setsockopt_00612b68)(iVar3,0xffff,4,&DAT_005ffb54,4);
            if (iVar5 == -1) {
              (*(code *)PTR_fputs_00612428)("setsockopt",*(undefined4 *)PTR_stderr_0061292c);
            }
            local_f0 = 1;
            local_ec = 0;
            (*(code *)PTR_setsockopt_00612b68)(iVar3,0xffff,0x80,&local_f0,8);
            local_110[1] = 0x1000;
            (*(code *)PTR_setsockopt_00612b68)(iVar3,0xffff,0x1002,local_110 + 1,4);
            local_110[2] = 0x5ee;
            (*(code *)PTR_setsockopt_00612b68)(iVar3,0xffff,0x1001,local_110 + 2,4);
            local_e8 = 0x1e;
            local_e4 = 0;
            (*(code *)PTR_setsockopt_00612b68)(iVar3,0xffff,0x1005,&local_e8,8);
            (*(code *)PTR_setsockopt_00612b68)(iVar3,0xffff,0x1006,&local_e8,8);
            (*(code *)PTR_setsockopt_00612b68)(iVar3,0xffff,8,&DAT_005ffb54,4);
            local_110[3] = 10;
            (*(code *)PTR_setsockopt_00612b68)(iVar3,6,4,local_110 + 3,4);
            local_110[4] = 0x14;
            (*(code *)PTR_setsockopt_00612b68)(iVar3,6,5,local_110 + 4,4);
            local_110[5] = 5;
            (*(code *)PTR_setsockopt_00612b68)(iVar3,6,6,local_110 + 5,4);
            iVar5 = (*(code *)PTR_bind_00613b48)(iVar3,&local_cc,0x1c);
            if (iVar5 == -1) {
              (*(code *)PTR_fputs_00612428)("unable to bind",*(undefined4 *)PTR_stderr_0061292c);
            }
            iVar5 = (*(code *)PTR_listen_00611894)(iVar3,DAT_005ffb50);
            if (iVar5 == -1) {
              (*(code *)PTR_fputs_00612428)("unable to listen",*(undefined4 *)PTR_stderr_0061292c);
            }
          }
          DAT_00613ce4 = iVar3;
          (*(code *)PTR_init_signals_006123c8)();
          (*(code *)PTR_mdnsPhytrex_HomekitRegist_00613010)(&DAT_00613ce8);
          (*(code *)PTR_shared_ServerWriteInit_00612c58)();
          (*(code *)PTR_shared_ServerReadInit_006129dc)();
          (*(code *)PTR_HomekitServer_init_00612c0c)();
          (*(code *)PTR_homeKitListener_loop_00611dbc)(DAT_00613ce4);
          (*(code *)PTR_HomekitServer_Cleaner_00613650)();
          (*(code *)PTR_shutdown_00611544)(DAT_00613ce4,1);
          (*(code *)PTR_shared_ServerReadDetach_006127ec)();
          (*(code *)PTR_shared_ServerWriteDetach_00611af8)();
          (*(code *)PTR_mdnsPhytrex_HomekitRemove_006122f0)();
          (*(code *)PTR_printf_0061185c)("Homekit Server stop... \n. ");
          return 0;
        }
        (*(code *)PTR_memset_0061223c)(PTR_pid_file_0061259c,0,0x20);
        (*(code *)PTR_memcpy_006137d0)(PTR_pid_file_0061259c,"/var/run/homekitserver.pid",0x1a);
        (*(code *)PTR_sprintf_00611f90)(auStack_90,"%d\n",iVar3);
        FUN_0041b050(PTR_pid_file_0061259c,1,auStack_90);
        (*(code *)PTR_memset_0061223c)(PTR_pid_file_0061259c,0,0x20);
        (*(code *)PTR_memcpy_006137d0)(PTR_pid_file_0061259c,"/tmp/homekit.script",0x13);
        (*(code *)PTR_strcpy_006115d0)(auStack_90,"#!/bin/sh\n");
        FUN_0041b050(PTR_pid_file_0061259c,1,auStack_90);
        (*(code *)PTR_sprintf_00611f90)(auStack_90,"kill -2 %d\n",iVar3);
        FUN_0041b050(PTR_pid_file_0061259c,2,auStack_90);
        (*(code *)PTR_strcpy_006115d0)(auStack_90,"homekitserver -c\n");
        FUN_0041b050(PTR_pid_file_0061259c,2,auStack_90);
        (*(code *)PTR_strcpy_006115d0)(auStack_90,"reboot\n");
        FUN_0041b050(PTR_pid_file_0061259c,2,auStack_90);
        (*(code *)PTR_strcpy_006115d0)(auStack_90,&DAT_005acec4);
        FUN_0041b050(PTR_pid_file_0061259c,2,auStack_90);
        (*(code *)PTR_memset_0061223c)(PTR_pid_file_0061259c,0,0x20);
        (*(code *)PTR_memcpy_006137d0)(PTR_pid_file_0061259c,"/tmp/homekitclean.script",0x18);
        (*(code *)PTR_strcpy_006115d0)(auStack_90,"#!/bin/sh\n");
        FUN_0041b050(PTR_pid_file_0061259c,1,auStack_90);
        (*(code *)PTR_sprintf_00611f90)(auStack_90,"kill -HUP %d\n",iVar3);
        FUN_0041b050(PTR_pid_file_0061259c,2,auStack_90);
        (*(code *)PTR_strcpy_006115d0)(auStack_90,&DAT_005acec4);
        FUN_0041b050(PTR_pid_file_0061259c,2,auStack_90);
        (*(code *)PTR_printf_0061185c)("do_fork exit %d. \n ",iVar3);
LAB_0041bb04:
        uVar4 = 0;
      }
      uVar4 = (*(code *)PTR_exit_00611d48)(uVar4);
      return uVar4;
    }
    if (iVar3 == 99) {
      (*(code *)PTR_Phytrex_HMInitFlash_00613354)();
      goto LAB_0041bb04;
    }
    if (iVar3 == 0x66) {
      (*(code *)PTR_strcpy_006115d0)(&DAT_00613ce8,*(undefined4 *)puVar1);
    }
  } while( true );
}

