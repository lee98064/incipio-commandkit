/* Ghidra-generated pseudo-C; not original source or a buildable project. */
/* _init @ 0041adc4 */

int _init(EVP_PKEY_CTX *ctx)

{
  int iVar1;
  
  FUN_0041afb8();
  iVar1 = (*(code *)(PTR_PTR_006114b0 + -0x5c20))();
  return iVar1;
}


/* entry @ 0041ae50 */

void processEntry entry(undefined4 param_1,undefined4 param_2)

{
  undefined1 auStack_20 [16];
  undefined *local_10;
  undefined4 local_c;
  undefined1 *local_8;
  
  local_8 = auStack_20;
  local_10 = PTR__fini_00613514;
  local_c = param_1;
  (*(code *)PTR___uClibc_main_006131f4)
            (PTR_main_006115e8,param_2,&stack0x00000004,PTR__init_006115d4);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* FUN_0041aeb0 @ 0041aeb0 */

void FUN_0041aeb0(void)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  code *pcVar6;
  
  if (PTR_DAT_00611498[0x3cc0] == '\0') {
    if (PTR___cxa_finalize_00613384 != (undefined *)0x0) {
      (*(code *)PTR___cxa_finalize_00613384)(*(undefined4 *)PTR_LOOP_0061149c);
    }
    puVar1 = PTR_DAT_00611498;
    puVar4 = PTR_DAT_006114a4 + -0x2844;
    iVar5 = (int)PTR___DTOR_END___006114a0 - (int)puVar4;
    while( true ) {
      uVar2 = *(uint *)(puVar1 + 0x3cc4);
      iVar3 = uVar2 + 1;
      if ((iVar5 >> 2) - 1U <= uVar2) break;
      pcVar6 = *(code **)(puVar4 + iVar3 * 4);
      *(int *)(puVar1 + 0x3cc4) = iVar3;
      (*pcVar6)();
    }
    if (PTR___deregister_frame_info_00613b60 != (undefined *)0x0) {
      (*(code *)PTR___deregister_frame_info_00613b60)(PTR_DAT_006114a8 + -0x2850);
    }
    PTR_DAT_00611498[0x3cc0] = 1;
  }
  return;
}


/* FUN_0041afb8 @ 0041afb8 */

void FUN_0041afb8(void)

{
  if (PTR___register_frame_info_006133a0 != (undefined *)0x0) {
    (*(code *)PTR___register_frame_info_006133a0)
              (PTR_DAT_006114a8 + -0x2850,PTR_DAT_00611498 + 0x3cc8);
  }
  if (*(int *)(PTR_DAT_006114a4 + -0x283c) != 0) {
    if (PTR__Jv_RegisterClasses_006136f4 != (undefined *)0x0) {
      (*(code *)PTR__Jv_RegisterClasses_006136f4)(PTR_DAT_006114a4 + -0x283c);
      return;
    }
  }
  return;
}


/* FUN_0041b050 @ 0041b050 */

undefined4 FUN_0041b050(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_210 [512];
  
  if (param_2 == 1) {
    uVar2 = 0x302;
  }
  else {
    iVar1 = 0;
    if (param_2 != 2) goto LAB_0041b0b4;
    uVar2 = 10;
  }
  iVar1 = (*(code *)PTR_open_006138f8)(param_1,uVar2,0x1b0);
  if (iVar1 < 0) {
    return 0;
  }
LAB_0041b0b4:
  (*(code *)PTR_strcpy_006115d0)(auStack_210,param_3);
  uVar2 = (*(code *)PTR_strlen_006130b4)(auStack_210);
  (*(code *)PTR_write_00612898)(iVar1,auStack_210,uVar2);
  (*(code *)PTR_close_0061276c)(iVar1);
  return 1;
}


/* FUN_0041b130 @ 0041b130 */

bool FUN_0041b130(undefined4 param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  
  uVar1 = (*(code *)PTR_fcntl_00612fec)(param_1,3,0);
  bVar3 = false;
  if (uVar1 != 0xffffffff) {
    uVar4 = uVar1 | 0x80;
    if (param_2 != 0) {
      uVar4 = uVar1 & 0xffffff7f;
    }
    iVar2 = (*(code *)PTR_fcntl_00612fec)(param_1,4,uVar4);
    bVar3 = iVar2 != -1;
  }
  return bVar3;
}


/* FUN_0041b1b4 @ 0041b1b4 */

void FUN_0041b1b4(undefined4 param_1)

{
  uint uVar1;
  
  uVar1 = (*(code *)PTR_fcntl_00612fec)(param_1,3);
  if (uVar1 != 0xffffffff) {
                    /* WARNING: Could not recover jumptable at 0x0041b200. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR_fcntl_00612fec)(param_1,4,uVar1 | 0x80);
    return;
  }
  return;
}


/* FUN_0041b218 @ 0041b218 */

void FUN_0041b218(undefined4 param_1)

{
  uint uVar1;
  
  uVar1 = (*(code *)PTR_fcntl_00612fec)(param_1,3);
  if (uVar1 != 0xffffffff) {
                    /* WARNING: Could not recover jumptable at 0x0041b268. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR_fcntl_00612fec)(param_1,4,uVar1 & 0xffffff7f);
    return;
  }
  return;
}


/* FUN_0041b280 @ 0041b280 */

void FUN_0041b280(undefined4 param_1)

{
  undefined2 local_28;
  undefined2 uStack_26;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  uStack_26 = 0;
  local_28 = 10;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  (*(code *)PTR_memcpy_006137d0)(&local_20,PTR_in6addr_any_00612578,0x10);
  _local_28 = CONCAT22(local_28,(short)*(undefined4 *)PTR_server_port_0061265c);
  (*(code *)PTR_bind_00613b48)(param_1,&local_28,0x1c);
  return;
}


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


/* build_needs_escape @ 0041bf40 */

void build_needs_escape(void)

{
  bool bVar1;
  byte bVar2;
  undefined *puVar3;
  int iVar4;
  byte *pbVar5;
  byte abStack_60 [80];
  byte abStack_10 [12];
  
  (*(code *)PTR_memcpy_006137d0)
            (abStack_60,
             "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789-_.!~*\'():@&=+$,/?",
             0x51);
  iVar4 = 1;
  do {
    bVar1 = iVar4 != 0x20;
    iVar4 = iVar4 + 1;
  } while (bVar1);
  (*(code *)PTR_memset_0061223c)(PTR__needs_escape_006124cc,0xffffffff,0x10);
  puVar3 = PTR__needs_escape_006124cc;
  pbVar5 = abStack_60;
  do {
    bVar2 = *pbVar5;
    pbVar5 = pbVar5 + 1;
    if (bVar2 < 0x80) {
      *(uint *)(puVar3 + (uint)(bVar2 >> 5) * 4) =
           ~(1 << (bVar2 & 0x1f)) & *(uint *)(puVar3 + (uint)(bVar2 >> 5) * 4);
    }
  } while (pbVar5 != abStack_10);
  return;
}


/* init_signals @ 0041c010 */

void init_signals(void)

{
  undefined4 local_30;
  code *local_2c;
  undefined1 auStack_28 [24];
  
  local_30 = 0;
  (*(code *)PTR_sigemptyset_00611fa0)(auStack_28);
  (*(code *)PTR_sigaddset_006124d0)(auStack_28,0xb);
  (*(code *)PTR_sigaddset_006124d0)(auStack_28,10);
  (*(code *)PTR_sigaddset_006124d0)(auStack_28,0xf);
  (*(code *)PTR_sigaddset_006124d0)(auStack_28,1);
  (*(code *)PTR_sigaddset_006124d0)(auStack_28,2);
  (*(code *)PTR_sigaddset_006124d0)(auStack_28,0xd);
  (*(code *)PTR_sigaddset_006124d0)(auStack_28,0x12);
  (*(code *)PTR_sigaddset_006124d0)(auStack_28,0xe);
  local_2c = (code *)&UNK_0041c420;
  (*(code *)PTR_sigaction_00612630)(0xb,&local_30,0);
  local_2c = FUN_0041c3ac;
  (*(code *)PTR_sigaction_00612630)(10,&local_30,0);
  local_2c = (code *)&LAB_0041c000;
  (*(code *)PTR_sigaction_00612630)(0xf,&local_30,0);
  local_2c = (code *)&UNK_0041c338;
  (*(code *)PTR_sigaction_00612630)(1,&local_30,0);
  local_2c = FUN_0041c2c4;
  (*(code *)PTR_sigaction_00612630)(2,&local_30,0);
  local_2c = (code *)0x1;
  (*(code *)PTR_sigaction_00612630)(0xd,&local_30,0);
  local_2c = (code *)&LAB_0041c008;
  (*(code *)PTR_sigaction_00612630)(0x12,&local_30,0);
  local_2c = FUN_0041c270;
  (*(code *)PTR_sigaction_00612630)(0xe,&local_30,0);
  local_2c = (code *)0x1;
  (*(code *)PTR_sigaction_00612630)(0xd,&local_30,0);
  local_2c = FUN_0041c270;
  (*(code *)PTR_sigaction_00612630)(0xe,&local_30,0);
  return;
}


/* FUN_0041c270 @ 0041c270 */

void FUN_0041c270(void)

{
  (*(code *)PTR_fprintf_006120cc)
            (*(undefined4 *)PTR_stderr_0061292c,
             "\nFILE %s FUNCTION %s LINE %d: caught SIGALRM with pthread id\n",
             "/home/vendor/rtl819x_v3464_homekit/users/phytrex-homekit/lib_homekitserver/signals.c",
             "_handle_sigalrm",0x81);
  return;
}


/* FUN_0041c2c4 @ 0041c2c4 */

void FUN_0041c2c4(void)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_pthread_self_00612614)();
  (*(code *)PTR_fprintf_006120cc)
            (*(undefined4 *)PTR_stderr_0061292c,
             "\nFILE %s FUNCTION %s LINE %d: caught SIGINT with pthread id\n",
             "/home/vendor/rtl819x_v3464_homekit/users/phytrex-homekit/lib_homekitserver/signals.c",
             "_handle_sigint",0x77,uVar1);
  (*(code *)PTR_exit_00611d48)(1);
  return;
}


/* FUN_0041c3ac @ 0041c3ac */

void FUN_0041c3ac(void)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_pthread_self_00612614)();
  (*(code *)PTR_fprintf_006120cc)
            (*(undefined4 *)PTR_stderr_0061292c,
             "\nFILE %s FUNCTION %s LINE %d: caught SIGBUS with pthread id\n",
             "/home/vendor/rtl819x_v3464_homekit/users/phytrex-homekit/lib_homekitserver/signals.c",
             "_handle_sigbus",0x60,uVar1);
  (*(code *)PTR_pthread_exit_00611ed8)(0);
  return;
}


/* FUN_0041c4a0 @ 0041c4a0 */

void FUN_0041c4a0(void)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_calloc_00613a18)(1,0x18);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 4) = 1;
  }
  return;
}


/* FUN_0041c4e0 @ 0041c4e0 */

undefined4
FUN_0041c4e0(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5,
            int param_6)

{
  int iVar1;
  undefined4 unaff_s4;
  int local_20;
  int local_1c;
  
  local_20 = 0;
  local_1c = 0;
  if (param_2 == 0) {
    unaff_s4 = (*(code *)PTR_CreateEVENTRespondMessageNoCopy_006132d4)
                         (200,"application/hap+json",param_5,&local_20,&local_1c);
    if (local_20 != 0) {
      iVar1 = (*(code *)PTR_calloc_00613a18)(param_5 + local_1c,1);
      if (iVar1 != 0) {
        (*(code *)PTR_memcpy_006137d0)(iVar1,local_20,local_1c);
        if (param_5 != 0) {
          (*(code *)PTR_memcpy_006137d0)(iVar1 + local_1c,param_4,param_5);
        }
        unaff_s4 = (*(code *)PTR_HKSecureSocketSend_00611728)
                             (param_1,iVar1,param_5 + local_1c,*(undefined4 *)(param_6 + 0xc));
        (*(code *)PTR_free_006119dc)(iVar1);
      }
    }
  }
  if (local_20 != 0) {
    (*(code *)PTR_free_006119dc)();
  }
  return unaff_s4;
}


/* FUN_0041c630 @ 0041c630 */

void FUN_0041c630(int *param_1)

{
  if (*param_1 != 0) {
    if (*(int *)(*param_1 + 0xc) != 0) {
      (*(code *)PTR_free_006119dc)();
    }
    if (*(int *)(*param_1 + 0x10) != 0) {
      (*(code *)PTR_free_006119dc)();
    }
    (*(code *)PTR_free_006119dc)(*param_1);
    *param_1 = 0;
  }
  return;
}


/* FUN_0041c6d0 @ 0041c6d0 */

int FUN_0041c6d0(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5,
                int param_6)

{
  int iVar1;
  int unaff_s4;
  int local_20;
  int local_1c;
  
  local_20 = 0;
  local_1c = 0;
  if (param_2 == 0) {
    unaff_s4 = (*(code *)PTR_CreateHTTPRespondMessageNoCopy_00612cf0)
                         (200,"application/pairing+tlv8",param_5,&local_20,&local_1c);
    if ((unaff_s4 == 0) && (local_20 != 0)) {
      iVar1 = (*(code *)PTR_calloc_00613a18)(param_5 + local_1c,1);
      if (iVar1 != 0) {
        (*(code *)PTR_memcpy_006137d0)(iVar1,local_20,local_1c);
        if (param_5 != 0) {
          (*(code *)PTR_memcpy_006137d0)(iVar1 + local_1c,param_4,param_5);
        }
        unaff_s4 = (*(code *)PTR_HKSecureSocketSend_00611728)
                             (param_1,iVar1,param_5 + local_1c,*(undefined4 *)(param_6 + 0xc));
        (*(code *)PTR_free_006119dc)(iVar1);
      }
    }
  }
  if (local_20 != 0) {
    (*(code *)PTR_free_006119dc)();
  }
  return unaff_s4;
}


/* FUN_0041c828 @ 0041c828 */

undefined4
FUN_0041c828(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5
            ,int param_6)

{
  int iVar1;
  undefined4 unaff_s1;
  int local_20;
  int local_1c [2];
  
  local_20 = 0;
  local_1c[0] = 0;
  if (param_4 == 0) {
    unaff_s1 = (*(code *)PTR_CreateHTTPRespondMessageNoCopy_00612cf0)
                         (param_2,param_3,param_6,&local_20,local_1c);
    if (local_20 != 0) {
      iVar1 = (*(code *)PTR_calloc_00613a18)(param_6 + local_1c[0],1);
      if (iVar1 != 0) {
        (*(code *)PTR_memcpy_006137d0)(iVar1,local_20,local_1c[0]);
        if (param_6 != 0) {
          (*(code *)PTR_memcpy_006137d0)(iVar1 + local_1c[0],param_5,param_6);
        }
        unaff_s1 = (*(code *)PTR_SocketSend_00611f3c)(param_1,iVar1,param_6 + local_1c[0]);
        (*(code *)PTR_free_006119dc)(iVar1);
      }
    }
  }
  if (local_20 != 0) {
    (*(code *)PTR_free_006119dc)();
  }
  return unaff_s1;
}


/* FUN_0041c964 @ 0041c964 */

int FUN_0041c964(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5,
                int param_6)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int local_20;
  int local_1c;
  
  local_20 = 0;
  local_1c = 0;
  if (param_2 == 0) {
    iVar1 = (*(code *)PTR_CreateHTTPRespondMessageNoCopy_00612cf0)
                      (200,"application/hap+json",param_5,&local_20,&local_1c);
    iVar4 = 0;
LAB_0041cbb4:
    if (iVar1 == 0) goto LAB_0041cbbc;
  }
  else {
    if (param_2 != 0x10) {
      iVar4 = (*(code *)PTR_json_object_new_object_006118fc)();
      uVar2 = (*(code *)PTR_json_object_new_int_006125f0)(param_2);
      (*(code *)PTR_json_object_object_add_00612914)(iVar4,"status",uVar2);
      if (param_2 == -0x1130b) {
        param_4 = (*(code *)PTR_json_object_to_json_string_006115e0)(iVar4);
        param_5 = (*(code *)PTR_strlen_006130b4)(param_4);
        uVar2 = 0x193;
      }
      else if ((param_2 + 0x11305U < 2) || (param_2 == -0x11302)) {
        uVar2 = 0xcf;
      }
      else if ((param_2 == -0x1130d) || (param_2 == -0x11301)) {
        param_4 = (*(code *)PTR_json_object_to_json_string_006115e0)(iVar4);
        param_5 = (*(code *)PTR_strlen_006130b4)(param_4);
        uVar2 = 400;
      }
      else {
        param_4 = (*(code *)PTR_json_object_to_json_string_006115e0)(iVar4);
        param_5 = (*(code *)PTR_strlen_006130b4)(param_4);
        uVar2 = 500;
      }
      iVar1 = (*(code *)PTR_CreateHTTPRespondMessageNoCopy_00612cf0)
                        (uVar2,"application/hap+json",param_5,&local_20,&local_1c);
      goto LAB_0041cbb4;
    }
    iVar1 = (*(code *)PTR_CreateHTTPRespondMessageNoCopy_00612cf0)
                      (0xcc,"application/hap+json",0,&local_20,&local_1c);
    if (iVar1 != 0) goto LAB_0041cc88;
    param_5 = 0;
    iVar4 = 0;
LAB_0041cbbc:
    if (local_20 != 0) {
      iVar3 = (*(code *)PTR_calloc_00613a18)(param_5 + local_1c,1);
      if (iVar3 != 0) {
        (*(code *)PTR_memcpy_006137d0)(iVar3,local_20,local_1c);
        if (param_5 != 0) {
          (*(code *)PTR_memcpy_006137d0)(iVar3 + local_1c,param_4,param_5);
        }
        iVar1 = (*(code *)PTR_HKSecureSocketSend_00611728)
                          (param_1,iVar3,param_5 + local_1c,*(undefined4 *)(param_6 + 0xc));
        (*(code *)PTR_free_006119dc)(iVar3);
        goto LAB_0041cc6c;
      }
    }
    iVar1 = 0;
  }
LAB_0041cc6c:
  if (iVar4 != 0) {
    (*(code *)PTR_json_object_put_00611694)(iVar4);
  }
LAB_0041cc88:
  if (local_20 != 0) {
    (*(code *)PTR_free_006119dc)();
  }
  return iVar1;
}


/* homeKitListener_loop @ 0041cccc */

undefined4 homeKitListener_loop(uint param_1)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int *piVar6;
  char *pcVar7;
  uint uVar8;
  uint uVar9;
  undefined1 auStack_f0 [4];
  undefined4 local_ec;
  undefined4 local_e8;
  undefined *local_e4;
  undefined *local_e0;
  undefined *local_dc;
  undefined *local_d8;
  undefined1 auStack_d4 [36];
  uint local_b0 [34];
  
  (*(code *)PTR_HKCreateGlobalEventTable_00611cf4)();
  (*(code *)PTR_pthread_list_init_0061389c)();
  (*(code *)PTR_HomekitSerialThreadStart_00613638)();
  iVar3 = (*(code *)PTR_Phytrex_HMPairListIsEmpty_00613bf8)();
  if (iVar3 == 0) {
    pcVar7 = "1";
  }
  else {
    pcVar7 = "0";
  }
  uVar8 = param_1 >> 5;
  (*(code *)PTR_mdnsPhytrex_HomekitUpdate_006120d0)(&DAT_005ab5c4,pcVar7);
  uVar4 = (*(code *)PTR_calloc_00613a18)(100,1);
  (*(code *)PTR_HKSetupFirmwareVersion_00613c38)(uVar4);
  (*(code *)PTR_mdnsPhytrex_HomekitUpdate_006120d0)(&DAT_005ab5c8,uVar4);
  (*(code *)PTR_free_006119dc)(uVar4);
  uVar9 = 1 << (param_1 & 0x1f);
  uVar4 = (*(code *)PTR_calloc_00613a18)(10,1);
  (*(code *)PTR_HKSetupAccessoryType_00613080)(uVar4);
  (*(code *)PTR_mdnsPhytrex_HomekitUpdate_006120d0)(&DAT_005ab5cc,uVar4);
  (*(code *)PTR_free_006119dc)(uVar4);
  local_e4 = PTR_homekitUserSerialOpen_00613938;
  local_e0 = PTR_homekitUserSerialWrite_00612590;
  local_dc = PTR_homekitUserSerialRead_00612f38;
  local_d8 = PTR_homekitUserSerialClose_00613550;
  (*(code *)PTR_HomekitSerialFuncRegister_00613504)(&local_e4);
  (*(code *)PTR_HomekitSerialOpen_006116c0)(0);
  DAT_00613d50 = (*(code *)PTR_calloc_00613a18)(0x15c,1);
  (*(code *)PTR_Phytrex_HMGetAppConfig_00613c84)(DAT_00613d50 + 0xbc);
  local_b0[0x20] = param_1 + 1;
  (*(code *)PTR_HKCharacteristicInit_006133e4)(DAT_00613d50);
  (*(code *)PTR_HKSetPassword_006117bc)(*(undefined4 *)(DAT_00613d50 + 0x158));
  DAT_00613d4c = 0;
  do {
    uVar5 = 0;
    while( true ) {
      do {
        while( true ) {
          uVar2 = local_b0[0x20];
          if (0x1f < uVar5) break;
          local_b0[uVar5] = 0;
          uVar5 = uVar5 + 1;
        }
        local_ec = 2;
        local_b0[uVar8] = local_b0[uVar8] | uVar9;
        local_e8 = 0;
        iVar3 = (*(code *)PTR_select_00612e2c)(uVar2,local_b0,0,0,&local_ec);
        uVar5 = 0;
      } while (iVar3 + 1U < 2);
      if ((uVar9 & local_b0[uVar8]) == 0) break;
      piVar6 = (int *)(*(code *)PTR_calloc_00613a18)(0x24,1);
      iVar3 = (*(code *)PTR_accept_00611a00)(param_1,piVar6 + 1,piVar6 + 8);
      puVar1 = PTR_pthread_attr_init_00613510;
      *piVar6 = iVar3;
      if (iVar3 < 1) {
        (*(code *)PTR_free_006119dc)(piVar6);
      }
      else {
        (*(code *)puVar1)(auStack_d4);
        (*(code *)PTR_pthread_attr_setdetachstate_006138cc)(auStack_d4,1);
        iVar3 = (*(code *)PTR_pthread_create_006128a4)(auStack_f0,auStack_d4,&DAT_0041fb6c,piVar6);
        if (iVar3 < 0) {
          (*(code *)PTR_close_0061276c)(param_1);
          (*(code *)PTR_free_006119dc)(piVar6);
          return 1;
        }
        (*(code *)PTR_pthread_attr_destroy_00612994)(auStack_d4);
      }
      uVar5 = 0;
    }
  } while( true );
}


/* FUN_0041d114 @ 0041d114 */

void FUN_0041d114(undefined4 *param_1)

{
  undefined4 uVar1;
  
  (*(code *)PTR_close_0061276c)(*param_1);
  (*(code *)PTR_free_006119dc)(param_1);
  (*(code *)PTR_pthread_mutex_unlock_00611c8c)(&DAT_00613d10);
  (*(code *)PTR_pthread_mutex_unlock_00611c8c)(&DAT_00613d28);
  (*(code *)PTR_Phytrex_Cleanup_Handler_00613a3c)();
  (*(code *)PTR_pthread_list_cleanup_handler_0061172c)();
  uVar1 = (*(code *)PTR_pthread_self_00612614)();
                    /* WARNING: Could not recover jumptable at 0x0041d1e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_pthread_list_remove_byID_00612f9c)(uVar1);
  return;
}


/* HomekitServer_Cleaner @ 0041d1ec */

void HomekitServer_Cleaner(void)

{
  (*(code *)PTR_pthread_mutex_destroy_00612c4c)(&DAT_00613d10);
  (*(code *)PTR_pthread_mutex_destroy_00612c4c)(&DAT_00613d28);
                    /* WARNING: Could not recover jumptable at 0x0041d238. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_Phytrex_HMEnd_00613908)();
  return;
}


/* HomekitServer_init @ 0041d240 */

void HomekitServer_init(void)

{
  (*(code *)PTR_Phytrex_HMCreatPairList_00612650)();
  (*(code *)PTR_pthread_mutex_init_00613634)(&DAT_00613d10,0);
  (*(code *)PTR_pthread_mutex_init_00613634)(&DAT_00613d28,0);
  (*(code *)PTR_pthread_cond_init_006124c8)(&DAT_005ffb60,0);
                    /* WARNING: Could not recover jumptable at 0x0041d2c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_Phytrex_HMStart_00613878)();
  return;
}


/* FUN_0041d2d0 @ 0041d2d0 */

void FUN_0041d2d0(void)

{
  (*(code *)PTR_syscall_0061366c)(0x107e);
  return;
}


/* FUN_0041d2e8 @ 0041d2e8 */

/* WARNING: Restarted to delay deadcode elimination for space: ram */

undefined4 FUN_0041d2e8(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  char *pcVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  code *pcVar12;
  undefined8 uVar13;
  undefined4 local_c8;
  int local_c4;
  undefined4 local_c0;
  byte local_bc;
  byte local_bb;
  int local_b8;
  undefined4 local_b4;
  byte local_b0;
  byte local_af;
  byte local_ae;
  byte local_ad;
  undefined4 local_ac;
  byte local_a8;
  undefined4 local_a4;
  byte local_a0;
  undefined4 local_9c;
  byte local_98;
  undefined4 local_94;
  byte local_90;
  int local_8c;
  int local_88;
  int local_84;
  int local_80;
  uint local_78;
  uint local_74;
  undefined *local_70;
  int local_6c;
  int local_68;
  undefined4 local_64;
  uint local_60;
  uint local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  int local_30;
  
  local_54 = (*(code *)PTR_json_object_new_object_006118fc)();
  iVar10 = 0;
  uVar3 = (*(code *)PTR_json_object_new_array_006122f4)();
  (*(code *)PTR_json_object_object_add_00612914)(local_54,"accessories",uVar3);
  uVar4 = (*(code *)PTR_json_object_new_object_006118fc)();
  (*(code *)PTR_json_object_array_add_006123e4)(uVar3,uVar4);
  uVar3 = (*(code *)PTR_json_object_new_int_006125f0)(1);
  (*(code *)PTR_json_object_object_add_00612914)(uVar4,&DAT_005ab5dc,uVar3);
  local_50 = (*(code *)PTR_json_object_new_array_006122f4)();
  (*(code *)PTR_json_object_object_add_00612914)(uVar4,"services",local_50);
  piVar9 = (int *)(PTR_hapObjects_00613b3c + 4);
  do {
    if (*piVar9 == 0) {
      DAT_00613d44 = local_54;
      return 0;
    }
    iVar11 = 0;
    uVar3 = (*(code *)PTR_json_object_new_object_006118fc)();
    uVar4 = (*(code *)PTR_json_object_new_string_00613664)(*piVar9);
    (*(code *)PTR_json_object_object_add_00612914)(uVar3,"type",uVar4);
    uVar4 = (*(code *)PTR_json_object_new_int_006125f0)(piVar9[1]);
    (*(code *)PTR_json_object_object_add_00612914)(uVar3,&DAT_005ab5ec,uVar4);
    local_4c = (*(code *)PTR_json_object_new_array_006122f4)();
    (*(code *)PTR_json_object_object_add_00612914)(uVar3,"characteristics",local_4c);
    local_70 = PTR_hapObjects_00613b3c + (iVar10 * 0xb5 + 1) * 8 + 4;
    do {
      (*(code *)PTR_memcpy_006137d0)(&local_c4,local_70,0x48);
      iVar2 = local_80;
      iVar1 = local_84;
      iVar7 = local_b8;
      local_78 = (uint)local_bc;
      local_58 = local_c0;
      local_74 = (uint)local_bb;
      local_34 = (uint)local_b0;
      local_38 = (uint)local_af;
      local_3c = (uint)local_ae;
      local_40 = (uint)local_ad;
      local_5c = (uint)local_a8;
      local_60 = (uint)local_a0;
      local_64 = local_94;
      local_68 = local_8c;
      local_6c = local_88;
      local_44 = (uint)local_98;
      local_48 = (uint)local_90;
      if (local_c4 == 0) goto LAB_0041dcd4;
      local_30 = local_c4;
      uVar4 = (*(code *)PTR_json_object_new_object_006118fc)();
      uVar5 = (*(code *)PTR_json_object_new_string_00613664)(local_30);
      (*(code *)PTR_json_object_object_add_00612914)(uVar4,"type",uVar5);
      uVar5 = (*(code *)PTR_json_object_new_int_006125f0)(local_58);
      (*(code *)PTR_json_object_object_add_00612914)(uVar4,&DAT_005ab5ec,uVar5);
      if (local_78 == 0) {
        (*(code *)PTR_HKReadCharacteristicValue_00613afc)(0,local_58,&local_c8,param_1);
      }
      else {
        local_c8 = local_b4;
      }
      switch(iVar7) {
      case 0:
        pcVar8 = "bool";
        goto LAB_0041d698;
      case 1:
        pcVar8 = "int";
LAB_0041d698:
        uVar5 = (*(code *)PTR_json_object_new_string_00613664)(pcVar8);
        (*(code *)PTR_json_object_object_add_00612914)(uVar4,"format",uVar5);
        pcVar12 = (code *)PTR_json_object_new_int_006125f0;
        if (local_74 == 0) goto joined_r0x0041d7d0;
        goto LAB_0041d7e4;
      case 2:
        uVar5 = (*(code *)PTR_json_object_new_string_00613664)("float");
        (*(code *)PTR_json_object_object_add_00612914)(uVar4,"format",uVar5);
        if ((local_74 != 0) || (local_78 != 0)) {
          uVar13 = (*(code *)PTR___extendsfdf2_00611f30)(local_c8);
          uVar5 = (*(code *)PTR_json_object_new_double_00611e74)
                            ((int)((ulonglong)uVar13 >> 0x20),(int)uVar13);
          goto LAB_0041d7ec;
        }
        goto LAB_0041d868;
      case 3:
        pcVar8 = "string";
        break;
      case 4:
        pcVar8 = "tlv8";
        break;
      case 5:
        pcVar8 = "data";
        break;
      default:
        if (iVar7 != 8) goto LAB_0041d868;
        goto LAB_0041d950;
      case 8:
        if ((local_74 == 0) && (local_78 == 0)) goto LAB_0041d950;
        uVar6 = (*(code *)PTR_json_object_new_string_00613664)(local_c8);
        pcVar8 = "value";
        goto LAB_0041d944;
      }
      uVar5 = (*(code *)PTR_json_object_new_string_00613664)(pcVar8);
      (*(code *)PTR_json_object_object_add_00612914)(uVar4,"format",uVar5);
      pcVar12 = (code *)PTR_json_object_new_string_00613664;
      if (local_74 == 0) {
joined_r0x0041d7d0:
        if (local_78 != 0) goto LAB_0041d7e4;
      }
      else {
LAB_0041d7e4:
        uVar5 = (*pcVar12)(local_c8);
LAB_0041d7ec:
        (*(code *)PTR_json_object_object_add_00612914)(uVar4,"value",uVar5);
      }
LAB_0041d868:
      local_78 = (*(code *)PTR_json_object_new_array_006122f4)();
      if (local_34 != 0) {
        uVar5 = (*(code *)PTR_json_object_new_string_00613664)(&DAT_005ab610);
        (*(code *)PTR_json_object_array_add_006123e4)(local_78,uVar5);
      }
      if (local_38 != 0) {
        uVar5 = (*(code *)PTR_json_object_new_string_00613664)(&DAT_005ab614);
        (*(code *)PTR_json_object_array_add_006123e4)(local_78,uVar5);
      }
      if (local_3c != 0) {
        uVar5 = (*(code *)PTR_json_object_new_string_00613664)(&DAT_005ab618);
        (*(code *)PTR_json_object_array_add_006123e4)(local_78,uVar5);
      }
      pcVar8 = "perms";
      uVar6 = local_78;
LAB_0041d944:
      (*(code *)PTR_json_object_object_add_00612914)(uVar4,pcVar8,uVar6);
LAB_0041d950:
      if (local_40 == 0) {
        if (local_5c != 0) {
LAB_0041da64:
          if (iVar7 == 1) {
            uVar5 = (*(code *)PTR_json_object_new_int_006125f0)(local_a4);
          }
          else {
            if (iVar7 != 2) goto LAB_0041daec;
            uVar13 = (*(code *)PTR___extendsfdf2_00611f30)(local_a4);
            uVar5 = (*(code *)PTR_json_object_new_double_00611e74)
                              ((int)((ulonglong)uVar13 >> 0x20),(int)uVar13);
          }
          (*(code *)PTR_json_object_object_add_00612914)(uVar4,"maxValue",uVar5);
          goto LAB_0041daec;
        }
        if (local_60 != 0) goto LAB_0041daec;
        iVar7 = (*(code *)PTR___nesf2_00611970)(local_64,0);
        if ((iVar7 != 0) || (local_68 != 0)) goto LAB_0041db74;
      }
      else {
        if (iVar7 == 1) {
          uVar5 = (*(code *)PTR_json_object_new_int_006125f0)(local_ac);
LAB_0041da48:
          (*(code *)PTR_json_object_object_add_00612914)(uVar4,"minValue",uVar5);
        }
        else if (iVar7 == 2) {
          uVar13 = (*(code *)PTR___extendsfdf2_00611f30)(local_ac);
          uVar5 = (*(code *)PTR_json_object_new_double_00611e74)
                            ((int)((ulonglong)uVar13 >> 0x20),(int)uVar13);
          goto LAB_0041da48;
        }
        if (local_5c != 0) goto LAB_0041da64;
LAB_0041daec:
        if (local_60 != 0) {
          if (iVar7 == 1) {
            uVar5 = (*(code *)PTR_json_object_new_int_006125f0)(local_9c);
          }
          else {
            if (iVar7 != 2) goto LAB_0041db74;
            uVar13 = (*(code *)PTR___extendsfdf2_00611f30)(local_9c);
            uVar5 = (*(code *)PTR_json_object_new_double_00611e74)
                              ((int)((ulonglong)uVar13 >> 0x20),(int)uVar13);
          }
          (*(code *)PTR_json_object_object_add_00612914)(uVar4,"minStep",uVar5);
        }
LAB_0041db74:
        if (local_44 != 0) {
          uVar13 = (*(code *)PTR___extendsfdf2_00611f30)(local_64);
          uVar5 = (*(code *)PTR_json_object_new_double_00611e74)
                            ((int)((ulonglong)uVar13 >> 0x20),(int)uVar13);
          (*(code *)PTR_json_object_object_add_00612914)(uVar4,"precision",uVar5);
        }
        if (local_48 != 0) {
          uVar5 = (*(code *)PTR_json_object_new_int_006125f0)(local_68);
          (*(code *)PTR_json_object_object_add_00612914)(uVar4,"maxLen",uVar5);
        }
      }
      if (local_6c != 0) {
        uVar5 = (*(code *)PTR_json_object_new_string_00613664)(local_6c);
        (*(code *)PTR_json_object_object_add_00612914)(uVar4,"description",uVar5);
      }
      if (iVar1 != 0) {
        uVar5 = (*(code *)PTR_json_object_new_string_00613664)(iVar1);
        (*(code *)PTR_json_object_object_add_00612914)(uVar4,"format",uVar5);
      }
      if (iVar2 != 0) {
        uVar5 = (*(code *)PTR_json_object_new_string_00613664)(iVar2);
        (*(code *)PTR_json_object_object_add_00612914)(uVar4,&DAT_005ab664,uVar5);
      }
      (*(code *)PTR_json_object_array_add_006123e4)(local_4c,uVar4);
LAB_0041dcd4:
      iVar11 = iVar11 + 1;
      local_70 = local_70 + 0x48;
    } while (iVar11 != 0x14);
    iVar10 = iVar10 + 1;
    (*(code *)PTR_json_object_array_add_006123e4)(local_50,uVar3);
    piVar9 = piVar9 + 0x16a;
    if (iVar10 == 10) {
      DAT_00613d44 = local_54;
      return 0;
    }
  } while( true );
}


/* FUN_0041dd50 @ 0041dd50 */

/* WARNING: Restarted to delay deadcode elimination for space: ram */

uint FUN_0041dd50(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  int iVar5;
  uint uVar6;
  char *pcVar7;
  uint uVar8;
  int *piVar9;
  undefined *puVar10;
  uint unaff_s0;
  undefined4 *puVar11;
  int unaff_s3;
  int iVar12;
  int unaff_s6;
  code *pcVar13;
  undefined8 uVar14;
  int local_140;
  undefined4 local_13c;
  int local_138;
  int local_134;
  undefined1 auStack_f0 [4];
  int local_ec;
  undefined4 local_e4;
  int local_a8;
  undefined4 local_a4;
  undefined4 local_9c;
  byte local_93;
  byte local_92;
  int *local_60;
  undefined1 *local_5c;
  int local_58;
  int local_54;
  int local_50;
  uint local_4c;
  uint local_48;
  undefined4 local_44;
  int local_40;
  undefined *local_3c;
  undefined4 local_38;
  int *local_34;
  uint local_30;
  uint local_2c;
  
  DAT_00613d44 = (undefined *)0x0;
  iVar1 = (*(code *)PTR_json_object_get_object_00612cf8)();
  puVar11 = *(undefined4 **)(iVar1 + 0x20);
  iVar1 = 0;
  while (puVar11 != (undefined4 *)0x0) {
    iVar12 = puVar11[1];
    iVar2 = (*(code *)PTR_strcmp_00611bec)(*puVar11,"characteristics");
    puVar11 = (undefined4 *)puVar11[2];
    if (iVar2 == 0) {
      iVar1 = iVar12;
    }
  }
  if ((iVar1 == 0) || (iVar2 = (*(code *)PTR_json_object_get_type_006133dc)(iVar1), iVar2 != 5)) {
    uVar6 = 0xfffeecf5;
  }
  else {
    local_50 = 0;
    local_40 = (*(code *)PTR_json_object_array_length_006138ec)(iVar1);
    DAT_00613d44 = (undefined *)(*(code *)PTR_json_object_new_object_006118fc)();
    local_3c = DAT_00613d44;
    local_44 = (*(code *)PTR_json_object_new_array_006122f4)();
    (*(code *)PTR_json_object_object_add_00612914)(local_3c,"characteristics",local_44);
    uVar6 = 0;
    for (iVar2 = 0; iVar2 < local_40; iVar2 = iVar2 + 1) {
      uVar3 = (*(code *)PTR_json_object_array_get_idx_00613274)(iVar1,iVar2);
      local_54 = 0;
      iVar12 = (*(code *)PTR_json_object_get_object_00612cf8)(uVar3);
      local_60 = *(int **)(iVar12 + 0x20);
      puVar4 = (undefined1 *)0;
      while (local_60 != (int *)0x0) {
        local_58 = *local_60;
        iVar12 = (*(code *)PTR_strcmp_00611bec)(local_58,&DAT_005ab5ec);
        local_5c = (undefined1 *)local_60[1];
        local_60 = (int *)local_60[2];
        if (iVar12 == 0) {
          local_54 = (*(code *)PTR_json_object_get_int_006129e4)(local_5c);
        }
        else {
          iVar12 = (*(code *)PTR_strcmp_00611bec)(local_58,"value");
          if (iVar12 == 0) {
            unaff_s6 = 0;
            puVar4 = local_5c;
          }
          else {
            iVar12 = (*(code *)PTR_strcmp_00611bec)(local_58,&DAT_005ab5dc);
            if (iVar12 == 0) {
              (*(code *)PTR_json_object_get_int_006129e4)(local_5c);
            }
            else {
              iVar12 = (*(code *)PTR_strcmp_00611bec)(local_58,&DAT_005ab618);
              if (iVar12 == 0) {
                unaff_s6 = 1;
                puVar4 = local_5c;
              }
            }
          }
        }
      }
      local_60 = &local_138;
      local_5c = auStack_f0;
      uVar3 = 0;
      uVar6 = 0;
      piVar9 = (int *)(PTR_hapObjects_00613b3c + 4);
      do {
        if (*piVar9 == 0) break;
        uVar8 = 0;
        puVar10 = PTR_hapObjects_00613b3c + (uVar6 * 0xb5 + 1) * 8 + 4;
        local_2c = uVar6;
        local_38 = uVar3;
        local_34 = piVar9;
        do {
          local_3c = puVar10;
          local_30 = uVar8;
          (*(code *)PTR_memcpy_006137d0)(local_60,puVar10,0x48);
          if ((local_138 != 0) && (local_134 == local_54)) {
            local_48 = local_30;
            local_4c = local_2c;
            (*(code *)PTR_memcpy_006137d0)
                      (local_5c,PTR_hapObjects_00613b3c + local_30 * 0x48 + local_2c * 0x5a8 + 0xc,
                       0x48);
            uVar3 = local_e4;
            unaff_s3 = local_ec;
            break;
          }
          uVar8 = local_30 + 1;
          puVar10 = local_3c + 0x48;
          uVar3 = local_38;
        } while (uVar8 != 0x14);
        uVar6 = local_2c + 1;
        piVar9 = local_34 + 0x16a;
      } while (uVar6 != 10);
      if (unaff_s3 == 0) {
        (*(code *)PTR_json_object_put_00611694)(local_44);
        uVar6 = 0xfffeecf9;
        break;
      }
      if (unaff_s6 == 0) {
        switch(uVar3) {
        case 0:
        case 1:
          unaff_s0 = (*(code *)PTR_json_object_get_int_006129e4)(puVar4);
          break;
        case 2:
          uVar14 = (*(code *)PTR_json_object_get_double_00612d40)(puVar4);
          unaff_s0 = (*(code *)PTR___truncdfsf2_00613a98)
                               ((int)((ulonglong)uVar14 >> 0x20),(int)uVar14);
          break;
        case 3:
        case 4:
        case 5:
          unaff_s0 = (*(code *)PTR_json_object_get_string_00613160)(puVar4);
          (*(code *)PTR_json_object_get_string_len_006136f0)(puVar4);
        }
      }
      else if (unaff_s6 == 1) {
        iVar12 = (*(code *)PTR_json_object_get_boolean_006137c4)(puVar4);
        unaff_s0 = unaff_s0 & 0xffffff | (uint)(iVar12 != 0) << 0x18;
      }
      local_140 = 0;
      if ((PTR_hapObjects_00613b3c[local_48 * 0x48 + local_4c * 0x5a8 + 0x22] == '\0') ||
         (unaff_s6 != 1)) {
        if (PTR_hapObjects_00613b3c[local_48 * 0x48 + local_4c * 0x5a8 + 0x21] == '\0') {
          local_140 = -0x11304;
        }
        else {
          (*(code *)PTR_HKWriteCharacteristicValue_006123ec)(0,unaff_s3,unaff_s0,&local_140,param_2)
          ;
          if (local_140 == 0) {
            (*(code *)PTR_pthread_mutex_lock_0061308c)(&DAT_00613d28);
            (*(code *)PTR_HKUpdateValueToGlobalEventTable_00613b54)(unaff_s3,unaff_s0);
            (*(code *)PTR_pthread_mutex_unlock_00611c8c)(&DAT_00613d28);
            (*(code *)PTR_HKUpdateValueToPrivateEventTable_00612acc)(*param_3,unaff_s3,unaff_s0);
          }
        }
      }
      else {
        (*(code *)PTR_HKWriteCharacteristicEvent_006117dc)
                  (0,unaff_s3,unaff_s0,&local_140,param_2,*param_3);
      }
      local_58 = local_140;
      iVar12 = (*(code *)PTR_json_object_new_object_006118fc)();
      local_5c = (undefined1 *)(*(code *)PTR_json_object_new_object_006118fc)();
      (*(code *)PTR_memcpy_006137d0)
                (&local_a8,PTR_hapObjects_00613b3c + local_48 * 0x48 + local_4c * 0x5a8 + 0xc,0x48);
      local_60 = (int *)local_a4;
      local_54 = local_9c;
      if (local_a8 == 0) {
        uVar3 = (*(code *)PTR_json_object_new_int_006125f0)(1);
        (*(code *)PTR_json_object_object_add_00612914)(iVar12,&DAT_005ab5dc,uVar3);
        local_30 = 0xfffe0000;
        uVar3 = (*(code *)PTR_json_object_new_int_006125f0)(local_60);
        (*(code *)PTR_json_object_object_add_00612914)(iVar12,&DAT_005ab5ec,uVar3);
        local_2c = local_30 | 0xecf9;
        uVar3 = (*(code *)PTR_json_object_new_int_006125f0)(local_30 | 0xecfe);
        (*(code *)PTR_json_object_object_add_00612914)(iVar12,"status",uVar3);
        uVar3 = (*(code *)PTR_json_object_new_string_00613664)
                          ("Write a characteristic that is not existed");
        (*(code *)PTR_json_object_object_add_00612914)(local_5c,"developerMessage",uVar3);
        uVar3 = (*(code *)PTR_json_object_new_int_006125f0)(local_30 | 0xecf9);
        (*(code *)PTR_json_object_object_add_00612914)(local_5c,"errorCode",uVar3);
        pcVar7 = "response";
        puVar4 = local_5c;
LAB_0041e5f0:
        (*(code *)PTR_json_object_object_add_00612914)(iVar12,pcVar7,puVar4);
        uVar6 = local_2c;
LAB_0041e83c:
        local_50 = local_50 + 1;
      }
      else {
        local_30 = (uint)local_92;
        local_2c = (uint)local_93;
        uVar3 = (*(code *)PTR_json_object_new_int_006125f0)(1);
        (*(code *)PTR_json_object_object_add_00612914)(iVar12,&DAT_005ab5dc,uVar3);
        uVar3 = (*(code *)PTR_json_object_new_int_006125f0)(local_60);
        (*(code *)PTR_json_object_object_add_00612914)(iVar12,&DAT_005ab5ec,uVar3);
        if ((local_2c == 0) && (local_30 == 0)) {
          uVar3 = (*(code *)PTR_json_object_new_int_006125f0)(1);
          (*(code *)PTR_json_object_object_add_00612914)(iVar12,&DAT_005ab5dc,uVar3);
          local_2c = 0xfffeecfc;
          uVar3 = (*(code *)PTR_json_object_new_int_006125f0)(local_60);
          (*(code *)PTR_json_object_object_add_00612914)(iVar12,&DAT_005ab5ec,uVar3);
          puVar4 = (undefined1 *)(*(code *)PTR_json_object_new_int_006125f0)(0xfffeecfc);
          pcVar7 = "status";
          goto LAB_0041e5f0;
        }
        iVar5 = (*(code *)PTR_HKReadCharacteristicValue_00613afc)(0,unaff_s3,&local_13c,param_2);
        if ((iVar5 != 0) || (local_58 != 0)) {
          uVar3 = (*(code *)PTR_json_object_new_int_006125f0)(1);
          (*(code *)PTR_json_object_object_add_00612914)(iVar12,&DAT_005ab5dc,uVar3);
          uVar3 = (*(code *)PTR_json_object_new_int_006125f0)(local_60);
          (*(code *)PTR_json_object_object_add_00612914)(iVar12,&DAT_005ab5ec,uVar3);
          uVar3 = (*(code *)PTR_json_object_new_int_006125f0)(local_58);
          (*(code *)PTR_json_object_object_add_00612914)(iVar12,"status",uVar3);
          uVar6 = 0xfffeecfe;
          goto LAB_0041e83c;
        }
        switch(local_54) {
        case 0:
        case 1:
          pcVar13 = (code *)PTR_json_object_new_int_006125f0;
          break;
        case 2:
          uVar14 = (*(code *)PTR___extendsfdf2_00611f30)(local_13c);
          uVar3 = (*(code *)PTR_json_object_new_double_00611e74)
                            ((int)((ulonglong)uVar14 >> 0x20),(int)uVar14);
          goto LAB_0041e764;
        case 3:
        case 4:
        case 5:
          pcVar13 = (code *)PTR_json_object_new_string_00613664;
          break;
        default:
          goto switchD_0041e708_default;
        }
        uVar3 = (*pcVar13)(local_13c);
LAB_0041e764:
        (*(code *)PTR_json_object_object_add_00612914)(iVar12,"value",uVar3);
switchD_0041e708_default:
        uVar6 = 0;
      }
      if (iVar12 != 0) {
        local_2c = uVar6;
        (*(code *)PTR_json_object_array_add_006123e4)(local_44,iVar12);
        uVar6 = local_2c;
      }
    }
  }
  if (local_50 != 0) {
    uVar6 = 0xfffeecfe;
  }
  return uVar6;
}


/* FUN_0041e850 @ 0041e850 */

uint FUN_0041e850(undefined4 param_1,int param_2,int param_3,int param_4,int param_5)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined1 *puVar7;
  undefined4 *puVar8;
  int ***pppiVar9;
  undefined1 *puVar10;
  undefined1 uVar13;
  uint uVar11;
  int iVar12;
  int ****ppppiVar14;
  int ***pppiVar15;
  char *pcVar16;
  int unaff_s3;
  undefined1 *puVar17;
  int iVar18;
  int ****ppppiVar19;
  undefined4 ****ppppuVar20;
  byte *pbVar21;
  undefined4 ***pppuVar22;
  code *pcVar23;
  int *piVar24;
  undefined8 uVar25;
  char *pcVar26;
  undefined4 uVar27;
  undefined4 ***local_1c8;
  undefined4 local_1c4;
  int local_1c0;
  undefined4 local_1bc;
  int local_1b8;
  undefined4 **local_1b4 [2];
  int ***local_1ac;
  int ***local_1a8;
  int local_1a4;
  undefined4 **local_1a0;
  byte local_19c;
  undefined1 *local_198;
  undefined4 local_194;
  char local_190;
  undefined1 auStack_15c [100];
  undefined4 auStack_f8 [16];
  undefined1 auStack_b8 [32];
  undefined1 local_98;
  int *local_50;
  undefined4 *local_4c;
  undefined1 *local_48;
  undefined1 *local_44;
  undefined4 **local_40;
  int *local_3c;
  undefined4 *local_38;
  uint local_34;
  byte *local_30;
  
  uVar4 = (*(code *)PTR_HKSocketReadHTTPHeader_00613828)
                    (param_1,param_2,*(undefined4 *)(param_3 + 0xc));
  if (uVar4 == 0xffffe59f) {
    uVar6 = (*(code *)PTR_pthread_self_00612614)();
    (*(code *)PTR_pthread_kill_00612e8c)(uVar6,3);
    goto LAB_0041fae4;
  }
  if ((uVar4 != 0) ||
     (uVar4 = (*(code *)PTR_HKSocketReadHTTPBody_00612a20)
                        (param_1,param_2,*(undefined4 *)(param_3 + 0xc)), uVar4 != 0))
  goto LAB_0041fae4;
  iVar5 = (*(code *)PTR_HTTPHeaderMatchURL_006116e4)(param_2,"/pair-setup");
  if (iVar5 == 0) {
    uVar4 = (*(code *)PTR_HKPairSetupEngine_00612a7c)(param_1,param_2,param_3,param_4,param_5);
    if (uVar4 == 0) {
      uVar4 = 0xffffe59f;
      if (*(char *)(param_4 + 0x110) != '\0') {
        uVar4 = 0;
      }
    }
    else {
      FUN_0041c828(param_1,400,"application/pairing+tlv8",0xfffeecf3,0,0);
    }
    goto LAB_0041fae4;
  }
  iVar5 = (*(code *)PTR_HTTPHeaderMatchURL_006116e4)(param_2,"/pair-verify");
  if (iVar5 == 0) {
    if (*(int *)(param_3 + 4) == 0) {
      iVar5 = (*(code *)PTR_HKCreatePairVerifyInfo_00612500)();
      *(int *)(param_3 + 4) = iVar5;
      if (iVar5 == 0) {
LAB_0041fae0:
        uVar4 = 0xffffe5b8;
        goto LAB_0041fae4;
      }
    }
    uVar4 = (*(code *)PTR_HKPairVerifyEngine_00613af4)
                      (param_1,param_2,*(undefined4 *)(param_3 + 4),param_4,param_5);
    puVar3 = PTR_memcpy_006137d0;
    if (uVar4 == 0) {
      if (**(char **)(param_3 + 4) == '\0') goto LAB_0041fae4;
      **(undefined1 **)(param_3 + 0xc) = 1;
      (*(code *)puVar3)(*(int *)(param_3 + 0xc) + 0x21,*(undefined4 *)(*(int *)(param_3 + 4) + 0x24)
                        ,0x20);
      (*(code *)PTR_memcpy_006137d0)
                (*(int *)(param_3 + 0xc) + 1,*(undefined4 *)(*(int *)(param_3 + 4) + 0x20),0x20);
    }
    (*(code *)PTR_HKCleanPairVerifyInfo_00611f38)(param_3 + 4);
    goto LAB_0041fae4;
  }
  iVar5 = (*(code *)PTR_HTTPHeaderMatchURL_006116e4)(param_2,"/accessories");
  if (iVar5 == 0) {
    (*(code *)PTR_puts_006117e4)("[discovery]");
    uVar4 = FUN_0041d2e8(param_4);
    if (uVar4 != 0) goto LAB_0041fae4;
    local_34 = (*(code *)PTR_json_object_to_json_string_006115e0)(DAT_00613d44);
    uVar6 = (*(code *)PTR_strlen_006130b4)(local_34);
    pcVar16 = "Read Data base Error";
    pbVar21 = (byte *)0x0;
    uVar4 = local_34;
LAB_0041f180:
    uVar4 = FUN_0041c964(param_1,pbVar21,pcVar16,uVar4,uVar6,param_3);
    (*(code *)PTR_json_object_put_00611694)(DAT_00613d44);
    DAT_00613d44 = 0;
    goto LAB_0041fae4;
  }
  iVar5 = (*(code *)PTR_HTTPHeaderMatchPartialURL_00612fdc)(param_2,"/characteristics");
  if (iVar5 == 0) {
    iVar5 = (*(code *)PTR_HTTPHeaderMatchURL_006116e4)(param_2,"/pairings");
    if (iVar5 == 0) {
      (*(code *)PTR_puts_006117e4)("[HTTP Header] Get kPAIRINGS");
      if (**(char **)(param_3 + 0xc) != '\0') {
        if (*(int *)(param_3 + 8) != 0) {
LAB_0041f228:
          local_1c0 = *(int *)(param_2 + 0x104);
          local_50 = (int *)(local_1c0 + *(int *)(param_2 + 0x10c));
          local_4c = &local_1bc;
          iVar5 = *(int *)(param_3 + 8);
switchD_0041f2c0_caseD_2:
          iVar18 = (*(code *)PTR_TLVGetNext_00612f0c)
                             (local_1c0,local_50,&local_1c8,local_4c,&local_1b8,&local_1c0);
          if (iVar18 != 0) goto code_r0x0041f360;
          pbVar21 = (byte *)(*(code *)PTR_calloc_00613a18)(local_1b8 + 1,1);
          if (pbVar21 == (byte *)0x0) {
            uVar4 = 0xffffe5b8;
            goto LAB_0041f9b0;
          }
          local_30 = pbVar21;
          (*(code *)PTR_memcpy_006137d0)(pbVar21,local_1bc,local_1b8);
          puVar3 = PTR_free_006119dc;
          switch((uint)local_1c8 >> 0x18) {
          case 0:
            *(uint *)(iVar5 + 8) = (uint)*local_30;
            break;
          case 1:
            *(byte **)(iVar5 + 0xc) = local_30;
          default:
            goto switchD_0041f2c0_caseD_2;
          case 3:
            *(byte **)(iVar5 + 0x10) = local_30;
            goto switchD_0041f2c0_caseD_2;
          case 6:
            if (*(uint *)(iVar5 + 4) != (uint)*local_30) {
              uVar4 = 0xffffe5af;
              goto LAB_0041f9b0;
            }
            break;
          case 0xb:
            *(byte *)(iVar5 + 0x14) = *local_30;
          }
          (*(code *)puVar3)(local_30);
          goto switchD_0041f2c0_caseD_2;
        }
        iVar5 = FUN_0041c4a0();
        *(int *)(param_3 + 8) = iVar5;
        if (iVar5 != 0) goto LAB_0041f228;
        goto LAB_0041fae0;
      }
LAB_0041fa80:
      pbVar21 = (byte *)0xfffeecf3;
    }
    else {
      iVar5 = (*(code *)PTR_HTTPHeaderMatchURL_006116e4)(param_2,"/identify");
      if (iVar5 != 0) goto LAB_0041fa80;
      if (**(char **)(param_3 + 0xc) == '\0') {
        (*(code *)PTR_HKUserTriggerIdentify_00612dac)(param_1);
        iVar5 = (*(code *)PTR_Phytrex_HMPairListIsEmpty_00613bf8)();
        if (iVar5 == 0) {
          pcVar16 = "application/pairing+tlv8";
          uVar6 = 0xcc;
          pcVar26 = (char *)0x0;
          uVar27 = 0;
        }
        else {
          pcVar26 = "{\"status\":-70401}";
          pcVar16 = "application/hap+json";
          uVar6 = 400;
          uVar27 = 0x11;
        }
        uVar4 = FUN_0041c828(param_1,uVar6,pcVar16,0,pcVar26,uVar27);
        goto LAB_0041fae4;
      }
      pbVar21 = (byte *)0xfffeecff;
    }
    pcVar16 = "Unsupport HTTP method";
  }
  else {
    iVar5 = (*(code *)PTR_HTTPHeaderMatchMethod_00612bfc)(param_2,&DAT_005ab728);
    if (iVar5 != -0x1a47) {
      local_1ac = (int ***)&local_1ac;
      local_1a8 = (int ***)&local_1ac;
      iVar5 = (*(code *)PTR_HTTPHeaderMatchPartialURL_00612fdc)(param_2,"/characteristics");
      iVar18 = iVar5 + 0x14;
      if (iVar5 == 0) {
        iVar18 = 0;
      }
      puVar7 = (undefined1 *)(*(code *)PTR_strchr_00611958)(iVar18,0x20);
      if (puVar7 != (undefined1 *)0x0) {
        *puVar7 = 0;
      }
      iVar5 = (*(code *)PTR_strtok_006128fc)(iVar18,",");
      while (iVar5 != 0) {
        (*(code *)PTR_memset_0061223c)(auStack_15c,0,100);
        (*(code *)PTR_strcpy_006115d0)(auStack_15c,iVar5);
        local_30 = (byte *)(*(code *)PTR_strchr_00611958)(iVar5,0x2e);
        (*(code *)PTR_memset_0061223c)(auStack_15c,0,100);
        puVar8 = (undefined4 *)(*(code *)PTR_calloc_00613a18)(0x10,1);
        uVar6 = (*(code *)PTR_atoi_006119c0)(iVar5);
        *puVar8 = uVar6;
        uVar6 = (*(code *)PTR_atoi_006119c0)(local_30 + 1);
        puVar3 = PTR_strtok_006128fc;
        puVar8[1] = uVar6;
        local_1ac[1] = (int **)(puVar8 + 2);
        puVar8[2] = local_1ac;
        puVar8[3] = &local_1ac;
        local_1ac = (int ***)(puVar8 + 2);
        iVar5 = (*(code *)puVar3)(0,",");
      }
      local_1c8 = local_1b4;
      pbVar21 = (byte *)0x0;
      if ((undefined4 ****)local_1c8 != &local_1c8) {
        local_4c = (undefined4 *)0x0;
        DAT_00613d44 = (*(code *)PTR_json_object_new_object_006118fc)();
        local_44 = (undefined1 *)(*(code *)PTR_json_object_new_array_006122f4)();
        local_38 = &local_1c4;
        local_3c = &local_1a4;
        for (ppppuVar20 = (undefined4 ****)local_1c8[2];
            ppppuVar20 != (undefined4 ****)(local_1c8 + 2);
            ppppuVar20 = (undefined4 ****)*ppppuVar20) {
          local_40 = ppppuVar20[-2];
          iVar5 = 0;
          local_50 = (int *)(PTR_hapObjects_00613b3c + 4);
          pppuVar22 = ppppuVar20[-1];
          while (*local_50 != 0) {
            uVar4 = 0;
            pbVar21 = PTR_hapObjects_00613b3c + (iVar5 * 0xb5 + 1) * 8 + 4;
            do {
              local_34 = uVar4;
              local_30 = pbVar21;
              (*(code *)PTR_memcpy_006137d0)(local_3c,pbVar21,0x48);
              local_48 = local_198;
              if ((local_1a4 != 0) && ((undefined4 ***)local_1a0 == pppuVar22)) {
                if (local_190 == '\0') {
                  unaff_s3 = (*(code *)PTR_json_object_new_object_006118fc)();
                  uVar6 = (*(code *)PTR_json_object_new_int_006125f0)(1);
                  (*(code *)PTR_json_object_object_add_00612914)(unaff_s3,&DAT_005ab5dc,uVar6);
                  uVar6 = (*(code *)PTR_json_object_new_int_006125f0)(pppuVar22);
                  (*(code *)PTR_json_object_object_add_00612914)(unaff_s3,&DAT_005ab5ec,uVar6);
                  pbVar21 = (byte *)0xfffeecfb;
                  uVar6 = (*(code *)PTR_json_object_new_int_006125f0)();
                  (*(code *)PTR_json_object_object_add_00612914)(unaff_s3,"status",uVar6);
                  goto LAB_0041efb4;
                }
                local_34 = (uint)local_19c;
                unaff_s3 = (*(code *)PTR_json_object_new_object_006118fc)();
                uVar6 = (*(code *)PTR_json_object_new_int_006125f0)(1);
                (*(code *)PTR_json_object_object_add_00612914)(unaff_s3,&DAT_005ab5dc,uVar6);
                uVar6 = (*(code *)PTR_json_object_new_int_006125f0)(pppuVar22);
                (*(code *)PTR_json_object_object_add_00612914)(unaff_s3,&DAT_005ab5ec,uVar6);
                if (local_34 == 0) {
                  (*(code *)PTR_HKReadCharacteristicValue_00613afc)
                            (local_40,pppuVar22,local_38,param_4);
                }
                else {
                  local_1c4 = local_194;
                }
                switch(local_48) {
                case (undefined1 *)0x0:
                case (undefined1 *)0x1:
                  pcVar23 = (code *)PTR_json_object_new_int_006125f0;
                  break;
                case (undefined1 *)0x2:
                  uVar25 = (*(code *)PTR___extendsfdf2_00611f30)(local_1c4);
                  uVar6 = (*(code *)PTR_json_object_new_double_00611e74)
                                    ((int)((ulonglong)uVar25 >> 0x20),(int)uVar25);
                  goto LAB_0041ef60;
                case (undefined1 *)0x3:
                case (undefined1 *)0x4:
                case (undefined1 *)0x5:
                  pcVar23 = (code *)PTR_json_object_new_string_00613664;
                  break;
                default:
                  goto switchD_0041ef04_default;
                }
                uVar6 = (*pcVar23)(local_1c4);
LAB_0041ef60:
                (*(code *)PTR_json_object_object_add_00612914)(unaff_s3,"value",uVar6);
                break;
              }
              uVar4 = local_34 + 1;
              pbVar21 = local_30 + 0x48;
            } while (uVar4 != 0x14);
switchD_0041ef04_default:
            iVar5 = iVar5 + 1;
            local_50 = local_50 + 0x16a;
            if (iVar5 == 10) break;
          }
          pbVar21 = (byte *)0x0;
LAB_0041efb4:
          if (unaff_s3 == 0) goto LAB_0041f014;
          (*(code *)PTR_json_object_array_add_006123e4)(local_44,unaff_s3);
          local_4c = (undefined4 *)((int)local_4c + (uint)(pbVar21 != (byte *)0x0));
        }
        (*(code *)PTR_json_object_object_add_00612914)(DAT_00613d44,"characteristics",local_44);
LAB_0041f014:
        if (local_4c != (undefined4 *)0x0) {
          pbVar21 = (byte *)0xfffeecfe;
        }
      }
      uVar4 = (*(code *)PTR_json_object_to_json_string_006115e0)(DAT_00613d44);
      ppppiVar14 = (int ****)local_1ac;
      ppppiVar19 = (int ****)*local_1ac;
      while (puVar3 = PTR_free_006119dc, ppppiVar14 != &local_1ac) {
        pppiVar9 = ppppiVar14[1];
        pppiVar15 = *ppppiVar14;
        pppiVar15[1] = (int **)pppiVar9;
        *pppiVar9 = (int **)pppiVar15;
        *ppppiVar14 = (int ***)ppppiVar14;
        ppppiVar14[1] = (int ***)ppppiVar14;
        (*(code *)puVar3)(ppppiVar14 + -2);
        ppppiVar14 = ppppiVar19;
        ppppiVar19 = (int ****)*ppppiVar19;
      }
      uVar6 = (*(code *)PTR_strlen_006130b4)(uVar4);
      pcVar16 = "Read characteristic Error";
      goto LAB_0041f180;
    }
    iVar5 = (*(code *)PTR_HTTPHeaderMatchMethod_00612bfc)(param_2,&DAT_005ab748);
    if (iVar5 == -0x1a47) goto LAB_0041fa80;
    DAT_00613d40 = (*(code *)PTR_json_tokener_parse_00612c48)(*(undefined4 *)(param_2 + 0x104));
    if (DAT_00613d40 == 0) goto LAB_0041fae4;
    local_30 = (byte *)FUN_0041dd50(DAT_00613d40,param_4,param_5);
    (*(code *)PTR_json_object_put_00611694)(DAT_00613d40);
    if (DAT_00613d44 != 0) {
      local_34 = (*(code *)PTR_json_object_to_json_string_006115e0)();
      if (local_30 == (byte *)0x0) {
        local_30 = (byte *)0x10;
      }
      uVar6 = (*(code *)PTR_strlen_006130b4)(local_34);
      pcVar16 = "Write characteristic Error";
      pbVar21 = local_30;
      uVar4 = local_34;
      goto LAB_0041f180;
    }
    pcVar16 = "Write characteristic Error";
    pbVar21 = local_30;
  }
  uVar4 = FUN_0041c964(param_1,pbVar21,pcVar16,0,0,param_3);
  goto LAB_0041fae4;
code_r0x0041f360:
  if (*(int *)(iVar5 + 8) - 3U < 3) {
    puVar7 = *(undefined1 **)(param_3 + 8);
    iVar5 = *(int *)(puVar7 + 8);
    if (iVar5 == 3) {
      if (*(char *)(param_5 + 4) == '\x01') {
        (*(code *)PTR_memset_0061223c)(auStack_f8,0,0x40);
        (*(code *)PTR_strcpy_006115d0)(auStack_f8,*(undefined4 *)(puVar7 + 0xc));
        (*(code *)PTR_memcpy_006137d0)(auStack_b8,*(undefined4 *)(puVar7 + 0x10),0x20);
        local_98 = puVar7[0x14];
        iVar5 = (*(code *)PTR_Phytrex_HMAddPairKey_00611e44)(auStack_f8);
        if (iVar5 == -0x1a48) goto LAB_0041f418;
        uVar11 = (*(code *)PTR_Phytrex_HMSavePairList_00611e3c)();
        if (uVar11 == 0) {
          local_30 = (byte *)0x0;
          uVar6 = 3;
          iVar5 = 0;
          goto LAB_0041f448;
        }
      }
      else {
        *puVar7 = 2;
        iVar5 = 0;
LAB_0041f418:
        local_30 = (byte *)0x1;
        uVar6 = 6;
LAB_0041f448:
        puVar10 = (undefined1 *)(*(code *)PTR_calloc_00613a18)(uVar6,1);
        if (puVar10 == (undefined1 *)0x0) {
          uVar11 = 0xffffe5b8;
        }
        else {
          *puVar10 = 6;
          puVar10[1] = 1;
          puVar10[2] = 2;
          if (local_30 != (byte *)0x0) {
            cVar1 = *(char *)(param_5 + 4);
            puVar10[3] = 7;
            puVar10[4] = 1;
            if (cVar1 == '\x01') {
              uVar13 = 1;
              if (iVar5 == -0x1a48) {
                uVar13 = 4;
              }
              puVar10[5] = uVar13;
            }
            else {
              puVar10[5] = 2;
            }
          }
          *puVar7 = 1;
          uVar11 = FUN_0041c6d0(param_1,0,"Add Pairing Error",puVar10,uVar6,param_3);
          (*(code *)PTR_free_006119dc)(puVar10);
          if (uVar11 == 0) goto LAB_0041f998;
        }
      }
      FUN_0041c630(param_3 + 8);
      *(undefined4 *)(*(int *)(param_3 + 8) + 4) = 1;
      uVar4 = uVar11;
      goto LAB_0041fae4;
    }
    if (iVar5 == 4) {
      bVar2 = false;
      uVar6 = (*(code *)PTR_pthread_self_00612614)();
      iVar5 = (*(code *)PTR_pthread_list_GetControllerName_006125bc)(uVar6,auStack_f8);
      if (iVar5 == 0) {
        iVar5 = (*(code *)PTR_memcmp_00611fdc)(auStack_f8,*(undefined4 *)(puVar7 + 0xc),0x24);
        bVar2 = iVar5 == 0;
      }
      if ((*(char *)(param_5 + 4) == '\x01') || (bVar2)) {
        uVar6 = 3;
        iVar5 = (*(code *)PTR_Phytrex_HMRemovePairKey_00611acc)(*(undefined4 *)(puVar7 + 0xc));
        if (iVar5 != 0) {
          uVar6 = 6;
        }
        local_50 = (int *)(uint)(iVar5 != 0);
        local_34 = (*(code *)PTR_Phytrex_HMSavePairList_00611e3c)();
        if (local_34 == 0) {
          (*(code *)PTR_pthread_list_terminal_byControllerName_00612fc0)
                    (*(undefined4 *)(puVar7 + 0xc));
          iVar5 = (*(code *)PTR_Phytrex_HMPairListIsEmpty_00613bf8)();
          if (iVar5 == 0) {
            pcVar16 = "1";
          }
          else {
            pcVar16 = "0";
          }
          (*(code *)PTR_mdnsPhytrex_HomekitUpdate_006120d0)(&DAT_005ab5c4,pcVar16);
          goto LAB_0041f650;
        }
      }
      else {
        *puVar7 = 2;
        uVar6 = 6;
        local_50 = (int *)0x1;
LAB_0041f650:
        puVar10 = (undefined1 *)(*(code *)PTR_calloc_00613a18)(uVar6,1);
        if (puVar10 == (undefined1 *)0x0) {
          local_34 = 0xffffe5b8;
        }
        else {
          uVar13 = 2;
          *puVar10 = 6;
          puVar10[1] = 1;
          puVar10[2] = 2;
          if (local_50 != (int *)0x0) {
            cVar1 = *(char *)(param_5 + 4);
            puVar10[4] = 1;
            puVar10[3] = 7;
            if ((cVar1 == '\x01') || (bVar2)) {
              uVar13 = 1;
            }
            puVar10[5] = uVar13;
          }
          *puVar7 = 1;
          local_34 = FUN_0041c6d0(param_1,0,"Remove Pairing Error",puVar10,uVar6,param_3);
          (*(code *)PTR_free_006119dc)(puVar10);
          if (local_34 == 0) goto LAB_0041f998;
        }
      }
      FUN_0041c630(param_3 + 8);
      iVar5 = *(int *)(param_3 + 8);
      uVar11 = local_34;
    }
    else {
      if (iVar5 != 5) {
LAB_0041f998:
        if (**(char **)(param_3 + 8) == '\0') goto LAB_0041fae4;
        goto LAB_0041f9b0;
      }
      if (*(char *)(param_5 + 4) == '\x01') {
        piVar24 = (int *)(*(code *)PTR_Phytrex_HMGetNoOfPairList_00613af8)();
        if (piVar24 == (int *)0x0) goto LAB_0041f770;
        local_30 = (byte *)0x0;
        iVar5 = (int)piVar24 * 0x4d + 1;
      }
      else {
        *puVar7 = 2;
        piVar24 = (int *)0x0;
LAB_0041f770:
        local_30 = (byte *)0x1;
        iVar5 = 6;
      }
      local_34 = iVar5 + 1;
      puVar10 = (undefined1 *)(*(code *)PTR_calloc_00613a18)(local_34,1);
      uVar11 = 0xffffe5b8;
      if (puVar10 != (undefined1 *)0x0) {
        if (local_30 == (byte *)0x0) {
          local_48 = (undefined1 *)(*(code *)PTR_realloc_00613690)(puVar10,local_34);
          local_44 = auStack_b8;
          local_4c = auStack_f8;
          local_50 = (int *)0x0;
          for (iVar18 = 0; iVar12 = (*(code *)PTR_Phytrex_HMGetMaxPairList_0061224c)(),
              puVar17 = puVar10, iVar18 < iVar12; iVar18 = iVar18 + 1) {
            iVar12 = (*(code *)PTR_Phytrex_HMReadPairList_0061283c)(local_4c,iVar18);
            if (iVar12 == 0) {
              *puVar10 = 1;
              puVar10[1] = 0x24;
              (*(code *)PTR_memcpy_006137d0)(puVar10 + 2,local_4c,0x24);
              puVar10[0x27] = 0x20;
              puVar10[0x26] = 3;
              (*(code *)PTR_memcpy_006137d0)(puVar10 + 0x28,local_44,0x20);
              puVar10[0x48] = 0xb;
              puVar10[0x49] = 1;
              local_50 = (int *)((int)local_50 + 1);
              puVar10[0x4a] = local_98;
              puVar17 = puVar10 + 0x4b;
              if (local_50 == piVar24) break;
              *puVar17 = 0xff;
              puVar10[0x4c] = 0;
              puVar10 = puVar10 + 0x4d;
            }
          }
          puVar17[2] = 2;
          *puVar17 = 6;
          puVar17[1] = 1;
          puVar10 = local_48;
        }
        else {
          *puVar10 = 6;
          puVar10[3] = 7;
          puVar10[4] = 1;
          puVar10[1] = 1;
          puVar10[2] = 1;
          uVar13 = 1;
          if (*(char *)(param_5 + 4) != '\x01') {
            uVar13 = 2;
          }
          puVar10[5] = uVar13;
        }
        *puVar7 = 1;
        uVar11 = FUN_0041c6d0(param_1,0,"Remove Pairing Error",puVar10,iVar5,param_3);
        if (puVar10 != (undefined1 *)0x0) {
          local_34 = uVar11;
          (*(code *)PTR_free_006119dc)(puVar10);
          uVar11 = local_34;
        }
        if (uVar11 == 0) goto LAB_0041f998;
      }
      iVar5 = *(int *)(param_3 + 8);
    }
    *(undefined4 *)(iVar5 + 4) = 1;
    uVar4 = uVar11;
  }
  else {
    uVar4 = 0xffffe5c3;
LAB_0041f9b0:
    FUN_0041c630(param_3 + 8);
  }
LAB_0041fae4:
  (*(code *)PTR_HTTPHeaderClear_0061347c)(param_2);
  if (DAT_00613d44 != 0) {
    (*(code *)PTR_json_object_put_00611694)();
  }
  return uVar4;
}


/* HKSNewSecuritySession @ 00420610 */

void HKSNewSecuritySession(void)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)(*(code *)PTR_calloc_00613a18)(1,0x68);
  *puVar1 = 0;
  return;
}


/* FUN_00420648 @ 00420648 */

/* WARNING: Type propagation algorithm not settling */

uint FUN_00420648(char *param_1,uint param_2,undefined4 param_3,uint param_4)

{
  bool bVar1;
  uint uVar2;
  undefined1 **ppuVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined1 auStack_f8 [4];
  undefined4 local_f4;
  undefined4 local_f0;
  byte local_ec;
  byte local_eb;
  undefined4 local_e4;
  undefined4 local_e0;
  int local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined1 *local_d0 [32];
  undefined1 *local_50;
  undefined4 *local_4c;
  undefined4 *local_48;
  byte *local_44;
  undefined1 **local_40;
  undefined1 **local_3c;
  int local_38;
  undefined1 **local_34;
  undefined4 *local_30;
  uint local_2c;
  
  local_f4 = 0;
  local_f0 = 1;
  if (*param_1 == '\0') {
    ppuVar3 = local_d0;
    do {
      *ppuVar3 = (undefined1 *)0x0;
      ppuVar3 = ppuVar3 + 1;
      uVar2 = param_2 >> 5;
    } while (ppuVar3 != &local_50);
    local_d0[uVar2] = (undefined1 *)((uint)local_d0[uVar2] | 1 << (param_2 & 0x1f));
    local_e4 = 2;
    local_e0 = 0;
    iVar5 = (*(code *)PTR_select_00612e2c)(param_2 + 1,local_d0,0,0,&local_e4);
    if (0 < iVar5) {
      if (((int)local_d0[uVar2] >> (param_2 & 0x1f) & 1U) != 0) {
        (*(code *)PTR_getsockopt_00612874)(param_2,0xffff,0x1007,&local_f4,auStack_f8);
        (*(code *)PTR_memset_0061223c)(param_3,0,param_4);
        uVar2 = (*(code *)PTR_read_00612ef0)(param_2,param_3,param_4);
        return uVar2;
      }
      return 0xffffffff;
    }
  }
  else {
    iVar5 = *(int *)(param_1 + 0x48);
    uVar2 = *(uint *)(param_1 + 0x4c);
    uVar8 = param_2 >> 5;
    if (iVar5 != 0 || uVar2 != 0) {
LAB_00420ae4:
      if ((iVar5 == 0) && (uVar2 < param_4)) {
        param_4 = uVar2;
      }
      (*(code *)PTR_memcpy_006137d0)(param_3,*(undefined4 *)(param_1 + 0x50),param_4);
      uVar2 = *(uint *)(param_1 + 0x4c) - param_4;
      iVar5 = *(int *)(param_1 + 0x48) - (uint)(*(uint *)(param_1 + 0x4c) < uVar2);
      *(int *)(param_1 + 0x48) = iVar5;
      *(uint *)(param_1 + 0x4c) = uVar2;
      if (iVar5 == 0 && uVar2 == 0) {
        (*(code *)PTR_free_006119dc)();
        return param_4;
      }
      (*(code *)PTR_memmove_00612be0)(*(int *)(param_1 + 0x50),*(int *)(param_1 + 0x50) + param_4);
      return param_4;
    }
    local_50 = auStack_f8;
    local_40 = local_d0;
    local_3c = &local_50;
    local_38 = param_2 + 1;
    local_48 = &local_e4;
    uVar7 = 1 << (param_2 & 0x1f);
    uVar2 = 0;
    local_4c = &local_f4;
    local_44 = &local_ec;
    ppuVar3 = local_40;
    while( true ) {
      do {
        iVar5 = local_38;
        *ppuVar3 = (undefined1 *)0x0;
        ppuVar3 = ppuVar3 + 1;
      } while (ppuVar3 != local_3c);
      local_d0[uVar8] = (undefined1 *)((uint)local_d0[uVar8] | uVar7);
      local_e4 = 2;
      local_e0 = 0;
      iVar5 = (*(code *)PTR_select_00612e2c)(iVar5,local_40,0,0,local_48);
      if (iVar5 < 1) break;
      ppuVar3 = local_40;
      if ((uVar7 & (uint)local_d0[uVar8]) != 0) {
        (*(code *)PTR_getsockopt_00612874)(param_2,0xffff,0x1007,local_4c,local_50);
        local_2c = (*(code *)PTR_read_00612ef0)(param_2,local_44 + uVar2,2 - uVar2);
        local_2c = local_2c & 0xffff;
        (*(code *)PTR_setsockopt_00612b68)(param_2,6,1,&local_f0,4);
        (*(code *)PTR_setsockopt_00612b68)(param_2,6,0xc,&local_f0,4);
        ppuVar3 = local_40;
        if (local_2c == 0) {
          bVar1 = uVar2 == 0;
          uVar2 = 1;
          if (bVar1) {
            return 0;
          }
        }
        else {
          uVar2 = local_2c + uVar2 & 0xffff;
          if (1 < uVar2) {
            local_50 = (undefined1 *)((uint)local_eb * 0x100 + (uint)local_ec);
            uVar2 = (uint)(local_50 + 0x10) & 0xffff;
            iVar5 = (*(code *)PTR_calloc_00613a18)(uVar2,1);
            if (iVar5 == 0) {
              return 0;
            }
            local_48 = (undefined4 *)auStack_f8;
            local_44 = (byte *)&local_f0;
            local_34 = local_d0;
            uVar6 = 0;
            local_30 = &local_e4;
            while (ppuVar3 = local_40, uVar6 < uVar2) {
              do {
                do {
                  iVar4 = local_38;
                  *ppuVar3 = (undefined1 *)0x0;
                  ppuVar3 = ppuVar3 + 1;
                } while (local_3c != ppuVar3);
                local_d0[uVar8] = (undefined1 *)((uint)local_d0[uVar8] | uVar7);
                local_e4 = 2;
                local_e0 = 0;
                iVar4 = (*(code *)PTR_select_00612e2c)(iVar4,local_34,0,0,local_30);
                if (iVar4 < 1) {
                  return 0;
                }
                ppuVar3 = local_40;
              } while ((uVar7 & (uint)local_d0[uVar8]) == 0);
              (*(code *)PTR_getsockopt_00612874)(param_2,0xffff,0x1007,local_4c,local_48);
              local_2c = (*(code *)PTR_read_00612ef0)(param_2,iVar5 + uVar6 * 4,uVar2 - uVar6);
              local_2c = local_2c & 0xffff;
              (*(code *)PTR_setsockopt_00612b68)(param_2,6,1,local_44,4);
              (*(code *)PTR_setsockopt_00612b68)(param_2,6,0xc,local_44,4);
              if (local_2c == 0) {
                if (uVar6 == 0) {
                  return 0;
                }
              }
              else {
                uVar6 = local_2c + uVar6 & 0xffff;
              }
            }
            iVar4 = (*(code *)PTR_calloc_00613a18)(local_50,1);
            *(int *)(param_1 + 0x50) = iVar4;
            if (iVar4 == 0) {
              return 0;
            }
            local_d8 = 0;
            local_d4 = 0;
            local_dc = (uint)CONCAT11((char)*(undefined4 *)(param_1 + 100),
                                      (char)((uint)*(undefined4 *)(param_1 + 100) >> 8)) << 0x10;
            iVar4 = (*(code *)PTR_crypto_aead_chacha20poly1305_decrypt_00612b8c)
                              (iVar4,param_1 + 0x48,0,iVar5,0,uVar2,&local_ec);
            uVar8 = *(uint *)(param_1 + 100) + 1;
            *(uint *)(param_1 + 0x60) =
                 (uint)(uVar8 < *(uint *)(param_1 + 100)) + *(int *)(param_1 + 0x60);
            *(uint *)(param_1 + 100) = uVar8;
            if (iVar4 != 0) {
              (*(code *)PTR_free_006119dc)(iVar5);
              return 0;
            }
            if (*(int *)(param_1 + 0x48) != (uVar2 - 0x10 < uVar2) - 1) {
              return 0;
            }
            if (*(uint *)(param_1 + 0x4c) != uVar2 - 0x10) {
              return 0;
            }
            (*(code *)PTR_free_006119dc)(iVar5);
            iVar5 = *(int *)(param_1 + 0x48);
            uVar2 = *(uint *)(param_1 + 0x4c);
            goto LAB_00420ae4;
          }
        }
      }
    }
  }
  return 0;
}


/* HKSocketReadHTTPBody @ 00420c94 */

int HKSocketReadHTTPBody(uint param_1,int param_2,int param_3)

{
  undefined *puVar1;
  uint *puVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  uint local_c0 [32];
  uint local_40;
  uint *local_3c;
  int local_38;
  undefined4 *local_34;
  undefined4 *local_30;
  
  iVar6 = -0x1a31;
  if (param_2 != 0) {
    local_40 = 1 << (param_1 & 0x1f);
    local_3c = &local_40;
    local_38 = param_1 + 1;
    iVar7 = 0;
    iVar6 = -0x1a52;
    local_34 = &local_c8;
    local_30 = &local_cc;
    while( true ) {
      while( true ) {
        if ((*(int *)(param_2 + 0x178) == 0) &&
           (*(uint *)(param_2 + 0x17c) <= *(uint *)(param_2 + 0x10c))) {
          iVar6 = 0;
          goto LAB_00420f30;
        }
        puVar3 = local_c0;
        if (*(int *)(param_3 + 0x48) == 0 && *(int *)(param_3 + 0x4c) == 0) {
          do {
            puVar2 = local_3c;
            *puVar3 = 0;
            iVar4 = local_38;
            puVar3 = puVar3 + 1;
          } while (puVar3 != puVar2);
          local_c0[param_1 >> 5] = local_c0[param_1 >> 5] | local_40;
          local_c8 = 2;
          local_c4 = 0;
          iVar4 = (*(code *)PTR_select_00612e2c)(iVar4,local_c0,0,0,local_34);
          if (iVar4 < 1) goto LAB_00420f30;
        }
        iVar6 = (*(code *)PTR_HTTPGetHeaderField_00612dd8)
                          (param_2,*(undefined4 *)(param_2 + 0x100),"Content-Type",0,0,&local_d0,
                           local_30,0);
        if (iVar6 != 0) goto LAB_00420f30;
        iVar4 = (*(code *)PTR_strnicmpx_00613008)(local_d0,local_cc,"application/phytrex-ota");
        if (iVar4 != 0) break;
        iVar4 = (*(code *)PTR_calloc_00613a18)(0x400,1);
        *(int *)(param_2 + 0x108) = iVar4;
        if (iVar4 == 0) {
          iVar6 = -0x1a48;
          goto LAB_00420f30;
        }
        uVar5 = *(uint *)(param_2 + 0x17c) - *(int *)(param_2 + 0x10c);
        if ((*(uint *)(param_2 + 0x178) != (uint)(*(uint *)(param_2 + 0x17c) < uVar5)) ||
           (0x3ff < uVar5)) {
          uVar5 = 0x400;
        }
        iVar4 = FUN_00420648(param_3,param_1,iVar4,uVar5);
        puVar1 = PTR_free_006119dc;
        if (iVar4 < 1) {
          if (iVar7 == 0) {
            iVar6 = -0x1a61;
          }
          else {
            (*(code *)PTR_free_006119dc)(*(undefined4 *)(param_2 + 0x108));
            *(undefined4 *)(param_2 + 0x108) = 0;
          }
          goto LAB_00420f30;
        }
        *(int *)(param_2 + 0x10c) = *(int *)(param_2 + 0x10c) + iVar4;
        iVar7 = iVar7 + iVar4;
        (*(code *)puVar1)(*(undefined4 *)(param_2 + 0x108));
        *(undefined4 *)(param_2 + 0x108) = 0;
      }
      iVar4 = FUN_00420648(param_3,param_1,*(int *)(param_2 + 0x104) + *(int *)(param_2 + 0x10c),
                           *(int *)(param_2 + 0x17c) - *(int *)(param_2 + 0x10c));
      if (iVar4 < 1) break;
      iVar7 = iVar7 + iVar4;
      *(int *)(param_2 + 0x10c) = *(int *)(param_2 + 0x10c) + iVar4;
    }
    if (iVar7 == 0) {
      iVar6 = -0x1a61;
    }
  }
LAB_00420f30:
  if (*(int *)(param_2 + 0x108) != 0) {
    (*(code *)PTR_free_006119dc)();
    *(undefined4 *)(param_2 + 0x108) = 0;
  }
  return iVar6;
}


/* HKSocketReadHTTPHeader @ 00420f88 */

int HKSocketReadHTTPHeader(undefined4 param_1,int param_2,undefined4 param_3)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int local_38;
  undefined4 local_34;
  undefined4 local_30 [3];
  
  iVar5 = param_2 + *(int *)(param_2 + 0x100);
  iVar6 = 0;
  do {
    uVar4 = *(uint *)(param_2 + 0x10c);
    uVar2 = (param_2 + 0x100) - iVar5;
    if (uVar4 == 0) {
      uVar4 = FUN_00420648(param_3,param_1,iVar5,uVar2);
      if ((int)uVar4 < 1) {
        if (iVar6 == 0) {
          return -0x1a61;
        }
        break;
      }
      iVar6 = iVar6 + uVar4;
    }
    else {
      if (uVar2 < uVar4) {
        return -0x1a31;
      }
      (*(code *)PTR_memmove_00612be0)(iVar5,*(undefined4 *)(param_2 + 0x104),uVar4);
      *(undefined4 *)(param_2 + 0x10c) = 0;
    }
    puVar1 = PTR_findHeader_00612d08;
    *(uint *)(param_2 + 0x100) = *(int *)(param_2 + 0x100) + uVar4;
    iVar3 = (*(code *)puVar1)(param_2,&local_38);
    iVar6 = iVar6 + uVar4;
    iVar5 = iVar5 + uVar4;
  } while (iVar3 == 0);
  puVar1 = PTR_HTTPHeaderParse_00612e80;
  *(int *)(param_2 + 0x100) = local_38 - param_2;
  iVar6 = (*(code *)puVar1)(param_2);
  if (iVar6 == 0) {
    *(int *)(param_2 + 0x10c) = iVar5 - local_38;
    if (*(int *)(param_2 + 0x104) != 0) {
      (*(code *)PTR_free_006119dc)();
      *(undefined4 *)(param_2 + 0x104) = 0;
    }
    if (*(int *)(param_2 + 0x108) != 0) {
      (*(code *)PTR_free_006119dc)();
      *(undefined4 *)(param_2 + 0x108) = 0;
    }
    iVar5 = (*(code *)PTR_HTTPGetHeaderField_00612dd8)
                      (param_2,*(undefined4 *)(param_2 + 0x100),"Content-Type",0,0,&local_34,
                       local_30,0);
    if ((iVar5 == 0) &&
       (iVar5 = (*(code *)PTR_strnicmpx_00613008)(local_34,local_30[0],"application/phytrex-ota"),
       iVar5 == 0)) {
      return 0;
    }
    if (*(int *)(param_2 + 0x178) != 0 || *(int *)(param_2 + 0x17c) != 0) {
      iVar6 = -0x1a48;
      iVar5 = (*(code *)PTR_calloc_00613a18)(*(int *)(param_2 + 0x17c),1);
      *(int *)(param_2 + 0x104) = iVar5;
      if (iVar5 != 0) {
        (*(code *)PTR_memcpy_006137d0)(iVar5,local_38,*(undefined4 *)(param_2 + 0x10c));
        iVar6 = 0;
      }
    }
  }
  return iVar6;
}


/* HKSecureSocketSend @ 004211f0 */

undefined4 HKSecureSocketSend(undefined4 param_1,undefined4 param_2,uint param_3,int param_4)

{
  undefined *puVar1;
  undefined1 *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int local_38;
  uint local_34;
  undefined1 local_30;
  undefined1 local_2f;
  undefined1 local_2e;
  undefined1 local_2d;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_20;
  
  local_20 = param_2;
  puVar2 = (undefined1 *)(*(code *)PTR_calloc_00613a18)(param_3 + 0x1c,1);
  puVar1 = PTR_crypto_aead_chacha20poly1305_encrypt_006129a4;
  if (puVar2 != (undefined1 *)0x0) {
    iVar3 = *(int *)(param_4 + 0x5c);
    puVar2[1] = (char)(param_3 >> 8);
    local_2f = (undefined1)((uint)iVar3 >> 8);
    *puVar2 = (char)param_3;
    local_2d = (undefined1)((uint)iVar3 >> 0x18);
    local_2c = 0;
    local_28 = 0;
    local_2e = (undefined1)((uint)iVar3 >> 0x10);
    local_30 = (undefined1)iVar3;
    iVar3 = (*(code *)puVar1)(puVar2 + 2,&local_38,local_20,iVar3 >> 0x10,0,param_3,puVar2);
    uVar5 = *(uint *)(param_4 + 0x5c);
    uVar4 = uVar5 + 1;
    *(uint *)(param_4 + 0x5c) = uVar4;
    *(uint *)(param_4 + 0x58) = (uint)(uVar4 < uVar5) + *(int *)(param_4 + 0x58);
    if (iVar3 == 0) {
      if (((uint)(local_34 - 0x10 < local_34) + local_38 + -1 == 0) && (local_34 - 0x10 == param_3))
      {
        (*(code *)PTR_SocketSend_00611f3c)(param_1,puVar2,local_34 + 2);
      }
    }
    (*(code *)PTR_free_006119dc)(puVar2);
  }
  return 0;
}


/* findHeader @ 00421360 */

undefined4 findHeader(char *param_1,undefined4 *param_2)

{
  char *pcVar1;
  uint uVar2;
  char *pcVar3;
  char cVar4;
  
  pcVar1 = param_1 + *(int *)(param_1 + 0x100);
  if ((3 < *(int *)(param_1 + 0x100)) && (*param_1 == '$')) {
    param_1 = param_1 + 4;
LAB_00421420:
    *param_2 = param_1;
    return 1;
  }
  *param_2 = pcVar1;
  uVar2 = (int)pcVar1 - (int)param_1;
  pcVar3 = param_1;
  do {
    pcVar3 = pcVar3 + 1;
    if (pcVar1 <= param_1) {
      return 0;
    }
    if (*param_1 == '\n') {
      if (uVar2 < 3) {
        if (uVar2 != 2) {
          return 0;
        }
LAB_00421408:
        cVar4 = *pcVar3;
      }
      else {
        cVar4 = *pcVar3;
        if (cVar4 == '\r') {
          if (param_1[2] != '\n') goto LAB_00421408;
          param_1 = param_1 + 3;
          goto LAB_00421420;
        }
      }
      if (cVar4 == '\n') {
        param_1 = param_1 + 2;
        goto LAB_00421420;
      }
    }
    param_1 = param_1 + 1;
    uVar2 = uVar2 - 1;
  } while( true );
}


/* FUN_004214c4 @ 004214c4 */

void FUN_004214c4(void)

{
                    /* WARNING: Could not recover jumptable at 0x004214d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_calloc_00613a18)(1,0x188);
  return;
}


/* FUN_00421594 @ 00421594 */

undefined4
FUN_00421594(undefined4 param_1,undefined4 param_2,int param_3,int param_4,int param_5,int *param_6,
            int *param_7)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  if (param_3 == 0) {
    uVar1 = 0xffffe5cf;
  }
  else {
    uVar1 = 0xffffe5cf;
    if ((param_4 != 0) && (param_5 != 0)) {
      iVar2 = (*(code *)PTR_calloc_00613a18)(param_5 + 500,1);
      *param_6 = iVar2;
      uVar1 = 0xffffe5b8;
      if (iVar2 != 0) {
        (*(code *)PTR_sprintf_00611f90)
                  (iVar2,"%s %s? %s %s%s %s%s%s %d%s",param_1,param_2,"HTTP/1.1",&DAT_005ab974,
                   "Content-Type:",param_3,&DAT_005ab974,"Content-Length:",param_5,"\r\n\r\n");
        iVar2 = (*(code *)PTR_strlen_006130b4)(*param_6);
        *param_7 = iVar2 + param_5;
        iVar3 = *param_6;
        iVar2 = (*(code *)PTR_strlen_006130b4)(iVar3);
        (*(code *)PTR_memcpy_006137d0)(iVar3 + iVar2,param_4,param_5);
        uVar1 = 0;
      }
    }
  }
  return uVar1;
}


/* CreateEVENTRespondMessageNoCopy @ 004216f0 */

undefined4
CreateEVENTRespondMessageNoCopy
          (int param_1,int param_2,int param_3,int *param_4,undefined4 *param_5)

{
  undefined4 uVar1;
  int iVar2;
  char *pcVar3;
  undefined1 auStack_428 [4];
  undefined1 auStack_424 [1032];
  
  if (param_1 != 200) {
    if (param_1 == 400) {
      pcVar3 = "Bad Request";
      goto LAB_004217a4;
    }
    if (param_1 == 0x193) {
      pcVar3 = "Forbidden";
      goto LAB_004217a4;
    }
    if (param_1 == 500) {
      pcVar3 = "Internal Server Error";
      goto LAB_004217a4;
    }
    if (param_1 == 0xcf) {
      pcVar3 = "Multi-Status";
      goto LAB_004217a4;
    }
    if (param_1 == 0xcc) {
      pcVar3 = "No Content";
      goto LAB_004217a4;
    }
  }
  pcVar3 = "OK";
LAB_004217a4:
  (*(code *)PTR_time_00612968)(auStack_428);
  uVar1 = (*(code *)PTR_localtime_00612778)(auStack_428);
  (*(code *)PTR_strftime_00613a24)(auStack_424,0x100,"%a, %d %b %Y %H:%M:%S %Z",uVar1);
  if ((param_2 != 0) && (param_3 != 0)) {
    iVar2 = (*(code *)PTR_calloc_00613a18)(200,1);
    *param_4 = iVar2;
    if (iVar2 != 0) {
      (*(code *)PTR_snprintf_00612f8c)
                (iVar2,200,"%s %d %s%s%s %s%s%s %d%s","EVENT/1.0",param_1,pcVar3,&DAT_005ab974,
                 "Content-Type:",param_2,&DAT_005ab974,"Content-Length:",param_3,"\r\n\r\n");
      uVar1 = (*(code *)PTR_strlen_006130b4)(*param_4);
      *param_5 = uVar1;
    }
  }
  return 0;
}


/* CreateHTTPRespondMessageNoCopy @ 004218cc */

undefined4
CreateHTTPRespondMessageNoCopy(int param_1,int param_2,int param_3,int *param_4,undefined4 *param_5)

{
  undefined4 uVar1;
  int iVar2;
  char *pcVar3;
  undefined1 auStack_428 [4];
  undefined1 auStack_424 [1032];
  
  if (param_1 != 200) {
    if (param_1 == 400) {
      pcVar3 = "Bad Request";
      goto LAB_00421980;
    }
    if (param_1 == 0x193) {
      pcVar3 = "Forbidden";
      goto LAB_00421980;
    }
    if (param_1 == 500) {
      pcVar3 = "Internal Server Error";
      goto LAB_00421980;
    }
    if (param_1 == 0xcf) {
      pcVar3 = "Multi-Status";
      goto LAB_00421980;
    }
    if (param_1 == 0xcc) {
      pcVar3 = "No Content";
      goto LAB_00421980;
    }
  }
  pcVar3 = "OK";
LAB_00421980:
  (*(code *)PTR_time_00612968)(auStack_428);
  uVar1 = (*(code *)PTR_localtime_00612778)(auStack_428);
  (*(code *)PTR_strftime_00613a24)(auStack_424,0x100,"%a, %d %b %Y %H:%M:%S %Z",uVar1);
  if (param_1 == 0xcc) {
    iVar2 = (*(code *)PTR_calloc_00613a18)(200,1);
    *param_4 = iVar2;
    if (iVar2 == 0) {
      return 0xffffe5b8;
    }
    (*(code *)PTR_snprintf_00612f8c)
              (iVar2,200,"%s %3d %s%sDate: %s%s","HTTP/1.1",0xcc,pcVar3,&DAT_005ab974,auStack_424,
               "\r\n\r\n");
  }
  else {
    if (param_2 == 0) {
      return 0xffffe5cf;
    }
    if (param_3 == 0) {
      return 0xffffe5cf;
    }
    iVar2 = (*(code *)PTR_calloc_00613a18)(200,1);
    *param_4 = iVar2;
    if (iVar2 == 0) {
      return 0xffffe5b8;
    }
    (*(code *)PTR_snprintf_00612f8c)
              (iVar2,200,"%s %d %s%s%s %s%s%s %d%s","HTTP/1.1",param_1,pcVar3,&DAT_005ab974,
               "Content-Type:",param_2,&DAT_005ab974,"Content-Length:",param_3,"\r\n\r\n");
  }
  uVar1 = (*(code *)PTR_strlen_006130b4)(*param_4);
  *param_5 = uVar1;
  return 0;
}


/* CreateSimpleHTTPMessageNoCopy @ 00421b24 */

undefined4 CreateSimpleHTTPMessageNoCopy(int param_1,int param_2,int *param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((param_1 == 0) || (param_2 == 0)) {
    uVar2 = 0xffffe5cf;
  }
  else {
    iVar1 = (*(code *)PTR_calloc_00613a18)(200,1);
    *param_3 = iVar1;
    uVar2 = 0xffffe5b8;
    if (iVar1 != 0) {
      (*(code *)PTR_snprintf_00612f8c)
                (iVar1,200,"%s %s %s%s%s %s%s%s %d%s","HTTP/1.1",&DAT_005ab954,&DAT_005ab8f8,
                 &DAT_005ab974,"Content-Type:",param_1,&DAT_005ab974,"Content-Length:",param_2,
                 "\r\n\r\n");
      uVar2 = (*(code *)PTR_strlen_006130b4)(*param_3);
      *param_4 = uVar2;
      uVar2 = 0;
    }
  }
  return uVar2;
}


/* FUN_00421c3c @ 00421c3c */

undefined4 FUN_00421c3c(int param_1,int param_2,int param_3,int *param_4,int *param_5)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  if (param_1 == 0) {
    uVar1 = 0xffffe5cf;
  }
  else {
    uVar1 = 0xffffe5cf;
    if ((param_2 != 0) && (param_3 != 0)) {
      iVar2 = (*(code *)PTR_calloc_00613a18)(param_3 + 200,1);
      *param_4 = iVar2;
      uVar1 = 0xffffe5b8;
      if (iVar2 != 0) {
        (*(code *)PTR_snprintf_00612f8c)
                  (iVar2,200,"%s %d %s%s%s %s%s%s %d%s","HTTP/1.1",200,&DAT_005ab8f8,&DAT_005ab974,
                   "Content-Type:",param_1,&DAT_005ab974,"Content-Length:",param_3,"\r\n\r\n");
        iVar2 = (*(code *)PTR_strlen_006130b4)(*param_4);
        *param_5 = iVar2 + param_3;
        iVar3 = *param_4;
        iVar2 = (*(code *)PTR_strlen_006130b4)(iVar3);
        (*(code *)PTR_memcpy_006137d0)(iVar3 + iVar2,param_2,param_3);
        uVar1 = 0;
      }
    }
  }
  return uVar1;
}


/* HTTPHeaderClear @ 00421d94 */

void HTTPHeaderClear(int param_1)

{
  *(undefined4 *)(param_1 + 0x100) = 0;
  *(undefined4 *)(param_1 + 0x10c) = 0;
  if (*(int *)(param_1 + 0x104) != 0) {
    (*(code *)PTR_free_006119dc)();
    *(undefined4 *)(param_1 + 0x104) = 0;
  }
  if (*(int *)(param_1 + 0x108) != 0) {
    (*(code *)PTR_free_006119dc)();
    *(undefined4 *)(param_1 + 0x108) = 0;
  }
  return;
}


/* HTTPHeaderMatchPartialURL @ 00421e0c */

void HTTPHeaderMatchPartialURL(int param_1,undefined4 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00421e24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_strnstr_suffix_0061164c)
            (*(undefined4 *)(param_1 + 0x140),*(undefined4 *)(param_1 + 0x144),param_2);
  return;
}


/* HTTPHeaderMatchURL @ 00421e2c */

undefined4 HTTPHeaderMatchURL(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (*(code *)PTR_strnicmp_suffix_006135f4)
                    (*(undefined4 *)(param_1 + 0x140),*(undefined4 *)(param_1 + 0x144),param_2);
  uVar2 = 0xffffe5b9;
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  return uVar2;
}


/* HTTPHeaderMatchMethod @ 00421e70 */

undefined4 HTTPHeaderMatchMethod(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (*(code *)PTR_strnicmpx_00613008)
                    (*(undefined4 *)(param_1 + 0x110),*(undefined4 *)(param_1 + 0x114),param_2);
  uVar2 = 0xffffe5b9;
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  return uVar2;
}


/* HTTPGetHeaderField @ 00421eb4 */

undefined4
HTTPGetHeaderField(char *param_1,int param_2,int param_3,undefined4 *param_4,uint *param_5,
                  undefined4 *param_6,int *param_7,undefined4 *param_8)

{
  char cVar1;
  bool bVar2;
  char *pcVar3;
  char *pcVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  uint uVar9;
  char *pcVar10;
  
  if (param_2 == -1) {
    param_2 = (*(code *)PTR_strlen_006130b4)();
  }
  pcVar10 = param_1 + param_2;
  uVar9 = 0;
  pcVar3 = param_1;
  if (param_3 != 0) {
    uVar9 = (*(code *)PTR_strlen_006130b4)(param_3);
  }
  do {
    while( true ) {
      do {
        pcVar8 = pcVar3;
        pcVar7 = param_1;
        if (pcVar10 <= pcVar7) {
          return 0xffffe5b9;
        }
        cVar1 = *pcVar7;
      } while ((cVar1 != '\r') && (param_1 = pcVar7 + 1, pcVar3 = pcVar8, cVar1 != '\n'));
      param_1 = pcVar7 + 1;
      if (cVar1 != '\r') {
        param_1 = pcVar7;
      }
      if (param_1 < pcVar10) {
        param_1 = param_1 + (*param_1 == '\n');
      }
      pcVar6 = pcVar8;
      pcVar3 = param_1;
      if (param_3 != 0) break;
      while (pcVar4 = pcVar6, pcVar4 < pcVar7) {
        pcVar6 = pcVar4 + 1;
        if (*pcVar4 == ':') {
          uVar9 = (int)pcVar4 - (int)pcVar8;
          goto LAB_0042202c;
        }
      }
    }
  } while ((((uint)((int)pcVar7 - (int)pcVar8) <= uVar9) || (pcVar8[uVar9] != ':')) ||
          (iVar5 = (*(code *)PTR_strnicmp_00611cb8)(pcVar8,param_3,uVar9), iVar5 != 0));
LAB_0042202c:
  pcVar3 = pcVar8 + uVar9 + 1;
  do {
    while( true ) {
      pcVar6 = pcVar3;
      if (pcVar7 <= pcVar6) goto LAB_004220c8;
      if (*pcVar6 != ' ') break;
      pcVar3 = pcVar6 + 1;
    }
    pcVar3 = pcVar6 + 1;
  } while (*pcVar6 == '\t');
LAB_004220c8:
  do {
    bVar2 = param_1 < pcVar10;
    while( true ) {
      if ((!bVar2) || ((*param_1 != ' ' && (*param_1 != '\t')))) {
        if (param_4 != (undefined4 *)0x0) {
          *param_4 = pcVar8;
        }
        if (param_5 != (uint *)0x0) {
          *param_5 = uVar9;
        }
        if (param_6 != (undefined4 *)0x0) {
          *param_6 = pcVar6;
        }
        if (param_7 != (int *)0x0) {
          *param_7 = (int)pcVar7 - (int)pcVar6;
        }
        if (param_8 == (undefined4 *)0x0) {
          return 0;
        }
        *param_8 = param_1;
        return 0;
      }
      do {
        pcVar3 = param_1;
        pcVar7 = pcVar3 + 1;
        param_1 = pcVar7;
        if (pcVar10 <= pcVar7) goto LAB_004220c8;
        cVar1 = *pcVar7;
      } while ((cVar1 != '\r') && (cVar1 != '\n'));
      param_1 = pcVar3 + 2;
      if (cVar1 != '\r') {
        param_1 = pcVar7;
      }
      if (param_1 < pcVar10) break;
      bVar2 = false;
    }
    param_1 = param_1 + (*param_1 == '\n');
  } while( true );
}


/* FUN_004221ac @ 004221ac */

void FUN_004221ac(void)

{
  int iVar1;
  undefined4 in_a3;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 local_18;
  undefined4 local_14;
  undefined1 *local_10;
  
  puVar3 = &local_18;
  puVar4 = &local_14;
  uVar2 = 0;
  uVar5 = 0;
  iVar1 = HTTPGetHeaderField();
  local_10 = &stack0x00000010;
  if (iVar1 == 0) {
    (*(code *)PTR_VSNScanF_00611b00)(local_18,local_14,in_a3,local_10,uVar2,puVar3,puVar4,uVar5);
  }
  return;
}


/* HTTPHeaderParse @ 0042221c */

int HTTPHeaderParse(char *param_1)

{
  char cVar1;
  undefined *puVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  undefined4 local_20;
  undefined4 local_1c [2];
  
  puVar2 = PTR_memset_0061223c;
  if (0xff < *(uint *)(param_1 + 0x100)) {
    return -0x1a31;
  }
  *(char **)(param_1 + 0x110) = "";
  param_1[0x114] = '\0';
  param_1[0x115] = '\0';
  param_1[0x116] = '\0';
  param_1[0x117] = '\0';
  *(char **)(param_1 + 0x118) = "";
  param_1[0x11c] = '\0';
  param_1[0x11d] = '\0';
  param_1[0x11e] = '\0';
  param_1[0x11f] = '\0';
  (*(code *)puVar2)(param_1 + 0x120,0,0x40);
  param_1[0x168] = -1;
  param_1[0x169] = -1;
  param_1[0x16a] = -1;
  param_1[0x16b] = -1;
  param_1[0x178] = '\0';
  param_1[0x179] = '\0';
  param_1[0x17a] = '\0';
  param_1[0x17b] = '\0';
  *(char **)(param_1 + 0x16c) = "";
  *(char **)(param_1 + 0x160) = "";
  param_1[0x164] = '\0';
  param_1[0x165] = '\0';
  param_1[0x166] = '\0';
  param_1[0x167] = '\0';
  param_1[0x170] = '\0';
  param_1[0x171] = '\0';
  param_1[0x172] = '\0';
  param_1[0x173] = '\0';
  param_1[0x174] = '\0';
  param_1[0x17c] = '\0';
  param_1[0x17d] = '\0';
  param_1[0x17e] = '\0';
  param_1[0x17f] = '\0';
  param_1[0x180] = '\0';
  if ((*(int *)(param_1 + 0x100) == 4) && (*param_1 == '$')) {
    param_1[0x114] = '\0';
    param_1[0x115] = '\0';
    param_1[0x116] = '\0';
    param_1[0x117] = '\x01';
    param_1[0x174] = param_1[1];
    *(uint *)(param_1 + 0x17c) = (uint)*(ushort *)(param_1 + 2);
    param_1[0x178] = '\0';
    param_1[0x179] = '\0';
    param_1[0x17a] = '\0';
    param_1[0x17b] = '\0';
    *(char **)(param_1 + 0x110) = param_1;
    return 0;
  }
  pcVar7 = param_1 + *(int *)(param_1 + 0x100);
  pcVar6 = param_1;
  do {
    if (pcVar7 <= pcVar6) {
      return -0x1a56;
    }
    cVar1 = *pcVar6;
    pcVar3 = pcVar6 + 1;
    if (cVar1 == ' ') {
      pcVar3 = pcVar6 + 1;
      *(int *)(param_1 + 0x114) = (int)pcVar6 - (int)param_1;
      *(char **)(param_1 + 0x110) = param_1;
      *(char **)(param_1 + 0x118) = pcVar3;
      pcVar6 = pcVar3;
      goto LAB_00422348;
    }
    pcVar6 = pcVar3;
  } while (cVar1 != '/');
  *(char **)(param_1 + 0x160) = param_1;
  do {
    pcVar6 = pcVar3;
    if (pcVar7 <= pcVar6) break;
    pcVar3 = pcVar6 + 1;
  } while (*pcVar6 != ' ');
  *(int *)(param_1 + 0x164) = (int)pcVar6 - (int)param_1;
  if (pcVar7 <= pcVar6) {
    return -0x1a56;
  }
  iVar5 = 0;
  iVar4 = 0;
  while (pcVar3 = pcVar6 + 1, pcVar3 < pcVar7) {
    iVar4 = (int)*pcVar3;
    if ((iVar4 < 0x30) || (0x39 < iVar4)) break;
    iVar5 = iVar4 + -0x30 + iVar5 * 10;
    pcVar6 = pcVar3;
  }
  pcVar6 = pcVar6 + 2;
  if (iVar4 != 0x20) {
    pcVar6 = pcVar3;
  }
  *(int *)(param_1 + 0x168) = iVar5;
  *(char **)(param_1 + 0x16c) = pcVar6;
  pcVar8 = pcVar6;
  do {
    pcVar3 = pcVar8;
    if ((pcVar7 <= pcVar3) || (*pcVar3 == '\r')) break;
    pcVar8 = pcVar3 + 1;
  } while (*pcVar3 != '\n');
  *(int *)(param_1 + 0x170) = (int)pcVar3 - (int)pcVar6;
joined_r0x004223d8:
  if (pcVar7 <= pcVar3) {
    return -0x1a56;
  }
  if (pcVar3 + 1 < pcVar7) {
    iVar4 = HTTPGetHeaderField(param_1,*(undefined4 *)(param_1 + 0x100),"Connection",0,0,&local_20,
                               local_1c,0);
    if (iVar4 == 0) {
      pcVar6 = "close";
    }
    else {
      local_20 = *(undefined4 *)(param_1 + 0x160);
      local_1c[0] = *(undefined4 *)(param_1 + 0x164);
      pcVar6 = "HTTP/1.0";
    }
    iVar4 = (*(code *)PTR_strnicmpx_00613008)(local_20,local_1c[0],pcVar6);
    param_1[0x180] = iVar4 != 0;
    FUN_004221ac(param_1,*(undefined4 *)(param_1 + 0x100),"Content-Length",&DAT_005aba40,
                 param_1 + 0x178);
    return 0;
  }
  return -0x1a56;
  while (pcVar6 = pcVar8 + 1, *pcVar8 != ' ') {
LAB_00422348:
    pcVar8 = pcVar6;
    if (pcVar7 <= pcVar8) break;
  }
  *(int *)(param_1 + 0x11c) = (int)pcVar8 - (int)pcVar3;
  if (pcVar7 <= pcVar8) {
    return -0x1a56;
  }
  iVar4 = (*(code *)PTR_URLParseComponents_006127dc)
                    (pcVar3,pcVar3 + ((int)pcVar8 - (int)pcVar3),param_1 + 0x120,0);
  pcVar8 = pcVar8 + 1;
  if (iVar4 != 0) {
    return iVar4;
  }
  *(char **)(param_1 + 0x160) = pcVar8;
  pcVar6 = pcVar8;
  do {
    pcVar3 = pcVar6;
    if ((pcVar7 <= pcVar3) || (*pcVar3 == '\r')) break;
    pcVar6 = pcVar3 + 1;
  } while (*pcVar3 != '\n');
  *(int *)(param_1 + 0x164) = (int)pcVar3 - (int)pcVar8;
  goto joined_r0x004223d8;
}


/* FUN_004229ec @ 004229ec */

int FUN_004229ec(undefined4 param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined1 auStack_44 [4];
  undefined4 local_40;
  undefined4 local_3c;
  int local_38;
  undefined4 *local_34;
  undefined1 *local_30;
  int *local_2c;
  
  local_3c = 1;
  local_38 = param_2 + 0x100;
  local_34 = &local_40;
  local_30 = auStack_44;
  local_2c = &local_50;
  local_40 = 0;
  iVar4 = param_2 + *(int *)(param_2 + 0x100);
  iVar5 = 0;
  do {
    uVar3 = *(uint *)(param_2 + 0x10c);
    uVar6 = local_38 - iVar4;
    if (uVar3 == 0) {
      (*(code *)PTR_getsockopt_00612874)(param_1,0xffff,0x1007,local_34,local_30);
      uVar6 = (*(code *)PTR_read_00612ef0)(param_1,iVar4,uVar6);
      (*(code *)PTR_setsockopt_00612b68)(param_1,6,1,&local_3c,4);
      (*(code *)PTR_setsockopt_00612b68)(param_1,6,0xc,&local_3c,4);
      if ((int)uVar6 < 1) {
        if (uVar6 == 0) {
          piVar1 = (int *)(*(code *)PTR___errno_location_0061397c)();
          if ((*piVar1 == 4) || (*piVar1 == 0xb)) goto LAB_00422b84;
        }
        if (iVar5 == 0) {
          return -0x1a61;
        }
        break;
      }
      iVar5 = iVar5 + uVar6;
      uVar3 = uVar6;
    }
    else {
      if (uVar6 < uVar3) {
        return -0x1a31;
      }
      (*(code *)PTR_memmove_00612be0)(iVar4,*(undefined4 *)(param_2 + 0x104),uVar3);
      *(undefined4 *)(param_2 + 0x10c) = 0;
    }
LAB_00422b84:
    *(uint *)(param_2 + 0x100) = *(int *)(param_2 + 0x100) + uVar3;
    iVar2 = findHeader(param_2,local_2c);
    iVar4 = iVar4 + uVar3;
  } while (iVar2 == 0);
  *(int *)(param_2 + 0x100) = local_50 - param_2;
  iVar5 = HTTPHeaderParse(param_2);
  if (iVar5 == 0) {
    *(int *)(param_2 + 0x10c) = iVar4 - local_50;
    if (*(int *)(param_2 + 0x104) != 0) {
      (*(code *)PTR_free_006119dc)();
      *(undefined4 *)(param_2 + 0x104) = 0;
    }
    if (*(int *)(param_2 + 0x108) != 0) {
      (*(code *)PTR_free_006119dc)();
      *(undefined4 *)(param_2 + 0x108) = 0;
    }
    iVar4 = HTTPGetHeaderField(param_2,*(undefined4 *)(param_2 + 0x100),"Content-Type",0,0,&local_4c
                               ,&local_48,0);
    if ((iVar4 == 0) &&
       (iVar4 = (*(code *)PTR_strnicmpx_00613008)(local_4c,local_48,"application/phytrex-ota"),
       iVar4 == 0)) {
      return 0;
    }
    iVar5 = -0x1a48;
    iVar4 = (*(code *)PTR_calloc_00613a18)(*(undefined4 *)(param_2 + 0x17c),1);
    *(int *)(param_2 + 0x104) = iVar4;
    if (iVar4 != 0) {
      (*(code *)PTR_memcpy_006137d0)(iVar4,local_50,*(undefined4 *)(param_2 + 0x10c));
      iVar5 = 0;
    }
  }
  return iVar5;
}


/* URLParseComponents @ 00422cf8 */

undefined4 URLParseComponents(char *param_1,char *param_2,undefined4 *param_3,undefined4 *param_4)

{
  int iVar1;
  char cVar3;
  char *pcVar2;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  char *pcVar14;
  char *pcVar15;
  
  if (param_2 == (char *)0x0) {
    iVar1 = (*(code *)PTR_strlen_006130b4)();
    param_2 = param_1 + iVar1;
  }
  cVar3 = '\0';
  pcVar4 = param_1;
  while (pcVar4 < param_2) {
    cVar3 = *pcVar4;
    if (cVar3 == ':') goto LAB_00422d9c;
    pcVar13 = (char *)0x0;
    if (cVar3 == '/') goto LAB_00422dac;
    pcVar14 = (char *)0x0;
    if ((cVar3 == '?') || (pcVar4 = pcVar4 + 1, cVar3 == '#')) goto LAB_00422db4;
  }
  if (cVar3 == ':') {
LAB_00422d9c:
    pcVar13 = pcVar4;
    pcVar14 = param_1;
    param_1 = pcVar4 + 1;
  }
  else {
LAB_00422dac:
    pcVar13 = (char *)0x0;
    pcVar14 = (char *)0x0;
  }
LAB_00422db4:
  pcVar4 = (char *)0x0;
  if ((int)param_2 - (int)param_1 < 2) {
    pcVar11 = (char *)0x0;
LAB_00422eac:
    pcVar10 = (char *)0x0;
    pcVar9 = (char *)0x0;
    pcVar6 = (char *)0x0;
    pcVar7 = (char *)0x0;
  }
  else {
    pcVar11 = (char *)0x0;
    if ((*param_1 != '/') || (param_1[1] != '/')) goto LAB_00422eac;
    pcVar7 = param_1 + 2;
    pcVar4 = pcVar7;
    do {
      param_1 = pcVar4;
      pcVar11 = pcVar7;
      if (((param_2 <= param_1) || (cVar3 = *param_1, cVar3 == '/')) || (cVar3 == '?')) break;
      pcVar4 = param_1 + 1;
    } while (cVar3 != '#');
    do {
      pcVar8 = pcVar11;
      pcVar11 = pcVar7;
      pcVar4 = param_1;
      if (param_1 <= pcVar8) goto LAB_00422eac;
      pcVar11 = pcVar8 + 1;
      pcVar9 = pcVar7;
    } while (*pcVar8 != '@');
    do {
      pcVar6 = pcVar9;
      pcVar9 = (char *)0x0;
      if (pcVar8 <= pcVar6) {
        pcVar10 = (char *)0x0;
        break;
      }
      pcVar9 = pcVar6 + 1;
      pcVar10 = pcVar8;
    } while (*pcVar6 != ':');
    pcVar11 = pcVar8 + 1;
  }
  cVar3 = '\0';
  pcVar8 = param_1;
  do {
    pcVar2 = pcVar8;
    if (param_2 <= pcVar2) break;
    cVar3 = *pcVar2;
    if (cVar3 == '?') {
      pcVar12 = pcVar2 + 1;
      pcVar8 = pcVar12;
      goto LAB_00422f00;
    }
    pcVar8 = pcVar2 + 1;
  } while (cVar3 != '#');
  pcVar12 = (char *)0x0;
  pcVar5 = pcVar2;
  pcVar15 = (char *)0x0;
LAB_00422f2c:
  pcVar8 = (char *)0x0;
  if (cVar3 != '#') {
    param_2 = pcVar5;
    pcVar5 = (char *)0x0;
    goto LAB_00422f48;
  }
  goto LAB_00422f40;
  while( true ) {
    cVar3 = *pcVar5;
    pcVar8 = pcVar5 + 1;
    if (cVar3 == '#') break;
LAB_00422f00:
    pcVar5 = pcVar8;
    pcVar15 = pcVar5;
    if (param_2 <= pcVar5) goto LAB_00422f2c;
  }
LAB_00422f40:
  pcVar8 = pcVar5 + 1;
  pcVar5 = param_2;
LAB_00422f48:
  param_3[1] = (int)pcVar13 - (int)pcVar14;
  param_3[3] = (int)pcVar6 - (int)pcVar7;
  param_3[5] = (int)pcVar10 - (int)pcVar9;
  param_3[7] = (int)pcVar4 - (int)pcVar11;
  param_3[9] = (int)pcVar2 - (int)param_1;
  param_3[0xb] = (int)pcVar15 - (int)pcVar12;
  param_3[0xd] = (int)pcVar5 - (int)pcVar8;
  *param_3 = pcVar14;
  param_3[2] = pcVar7;
  param_3[4] = pcVar9;
  param_3[6] = pcVar11;
  param_3[8] = param_1;
  param_3[10] = pcVar12;
  param_3[0xc] = pcVar8;
  if ((pcVar2 <= param_1) || (pcVar4 = param_1 + 1, *param_1 != '/')) {
    pcVar4 = param_1;
  }
  param_3[0xe] = pcVar4;
  if ((pcVar2 <= param_1) || (pcVar4 = pcVar2 + -1, pcVar2[-1] != '/')) {
    pcVar4 = pcVar2;
  }
  param_3[0xf] = pcVar4;
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = param_2;
  }
  return 0;
}


/* strnicmp @ 00423050 */

undefined4 strnicmp(byte *param_1,byte *param_2,int param_3)

{
  byte bVar1;
  short sVar2;
  short sVar3;
  byte *pbVar4;
  
  pbVar4 = param_1 + param_3;
  do {
    if (pbVar4 <= param_1) {
      return 0;
    }
    bVar1 = *param_1;
    param_1 = param_1 + 1;
    sVar2 = *(short *)(*(int *)PTR___ctype_tolower_006124f4 + (uint)bVar1 * 2);
    sVar3 = *(short *)(*(int *)PTR___ctype_tolower_006124f4 + (uint)*param_2 * 2);
    param_2 = param_2 + 1;
    if (sVar2 < sVar3) {
      return 0xffffffff;
    }
    if (sVar3 < sVar2) {
      return 1;
    }
  } while (sVar2 != 0);
  return 0;
}


/* strnicmpx @ 004230d8 */

undefined4 strnicmpx(byte *param_1,int param_2,byte *param_3)

{
  short sVar1;
  short sVar2;
  
  do {
    if (param_2 == 0) {
      if (*param_3 == 0) {
        return 0;
      }
      return 0xffffffff;
    }
    sVar1 = *(short *)(*(int *)PTR___ctype_tolower_006124f4 + (uint)*param_3 * 2);
    sVar2 = *(short *)(*(int *)PTR___ctype_tolower_006124f4 + (uint)*param_1 * 2);
    param_2 = param_2 + -1;
    param_1 = param_1 + 1;
    if (sVar2 < sVar1) {
      return 0xffffffff;
    }
    if (sVar1 < sVar2) {
      return 1;
    }
    param_3 = param_3 + 1;
  } while (sVar1 != 0);
  return 0;
}


/* FUN_00423164 @ 00423164 */

void FUN_00423164(undefined4 param_1,char *param_2)

{
  int iVar1;
  
  iVar1 = *(int *)PTR___ctype_toupper_00612fa8;
  (*(code *)PTR_sprintf_00611f90)
            (param_1,"%c%c:%c%c:%c%c:%c%c:%c%c:%c%c",(int)*(short *)(iVar1 + *param_2 * 2),
             (int)*(short *)(iVar1 + param_2[1] * 2),(int)*(short *)(iVar1 + param_2[2] * 2),
             (int)*(short *)(iVar1 + param_2[3] * 2),(int)*(short *)(iVar1 + param_2[4] * 2),
             (int)*(short *)(iVar1 + param_2[5] * 2),(int)*(short *)(iVar1 + param_2[6] * 2),
             (int)*(short *)(iVar1 + param_2[7] * 2),(int)*(short *)(iVar1 + param_2[8] * 2),
             (int)*(short *)(iVar1 + param_2[9] * 2),(int)*(short *)(iVar1 + param_2[10] * 2),
             (int)*(short *)(iVar1 + param_2[0xb] * 2));
  return;
}


/* FUN_00423288 @ 00423288 */

void FUN_00423288(int param_1,undefined4 param_2,uint param_3)

{
  undefined1 *puVar1;
  uint uVar2;
  undefined1 auStack_28 [12];
  
  (*(code *)PTR_memset_0061223c)(param_2,0);
  uVar2 = 0;
  while( true ) {
    puVar1 = (undefined1 *)(param_1 + uVar2);
    if (param_3 <= uVar2) break;
    uVar2 = uVar2 + 1;
    (*(code *)PTR_sprintf_00611f90)(auStack_28,&DAT_005aba68,*puVar1);
    (*(code *)PTR_strcat_006134b0)(param_2,auStack_28);
  }
  return;
}


/* VSNScanF @ 0042334c */

int VSNScanF(byte *param_1,int param_2,byte *param_3,uint *param_4)

{
  ushort uVar1;
  bool bVar2;
  ulonglong uVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  byte *pbVar7;
  int iVar8;
  uint uVar9;
  byte *pbVar10;
  uint *puVar11;
  undefined4 *puVar12;
  byte *pbVar13;
  byte *pbVar14;
  uint uVar15;
  byte bVar16;
  byte bVar17;
  byte *pbVar18;
  byte *pbVar19;
  short sVar20;
  int iVar21;
  int iVar22;
  short sVar24;
  uint uVar23;
  byte bVar27;
  byte *pbVar25;
  uint uVar26;
  uint uVar28;
  
  if (param_2 == -1) {
    param_2 = (*(code *)PTR_strlen_006130b4)();
  }
  puVar6 = PTR___ctype_tolower_006124f4;
  puVar5 = PTR___ctype_b_006122a4;
  pbVar13 = param_1 + param_2;
  iVar8 = 0;
  pbVar14 = param_1;
LAB_004233e4:
  do {
    iVar21 = *(int *)puVar5;
    pbVar19 = pbVar14;
    if ((*(ushort *)(iVar21 + (uint)*param_3 * 2) & 0x20) != 0) {
      do {
        param_3 = param_3 + 1;
      } while ((*(ushort *)(iVar21 + (uint)*param_3 * 2) & 0x20) != 0);
      do {
        pbVar19 = pbVar14;
        if (pbVar13 <= pbVar19) break;
        pbVar14 = pbVar19 + 1;
      } while ((*(ushort *)(iVar21 + (uint)*pbVar19 * 2) & 0x20) != 0);
    }
    bVar27 = *param_3;
    if (bVar27 == 0) {
      return iVar8;
    }
    if (bVar27 == 0x25) {
      bVar2 = false;
      iVar22 = 0;
      bVar4 = false;
      while( true ) {
        while( true ) {
          while( true ) {
            pbVar14 = param_3 + 1;
            uVar15 = (uint)*pbVar14;
            if (uVar15 != 0x2a) break;
            bVar4 = true;
            param_3 = pbVar14;
          }
          if (uVar15 != 0x23) break;
          iVar22 = iVar22 + 1;
          param_3 = pbVar14;
        }
        if (uVar15 != 0x26) break;
        bVar2 = true;
        param_3 = pbVar14;
      }
      if ((*(ushort *)(iVar21 + uVar15 * 2) & 8) == 0) {
        uVar9 = 0x7fffffff;
        if (uVar15 == 0x2e) {
          uVar9 = *param_4;
          pbVar14 = param_3 + 2;
          if ((int)uVar9 < 0) {
            return iVar8;
          }
          param_4 = param_4 + 1;
        }
      }
      else {
        uVar9 = 0;
        do {
          bVar27 = *pbVar14;
          pbVar14 = pbVar14 + 1;
          uVar9 = (bVar27 - 0x30) + uVar9 * 10;
        } while ((*(ushort *)(iVar21 + (uint)*pbVar14 * 2) & 8) != 0);
      }
      bVar27 = *pbVar14;
      if (bVar27 == 0x6c) {
        bVar17 = 0x6c;
        pbVar10 = pbVar14 + 1;
        if (pbVar14[1] == 0x6c) {
          bVar17 = 0x4c;
          pbVar10 = pbVar14 + 2;
        }
LAB_004235f8:
        bVar27 = *pbVar10;
      }
      else {
        if (0x6c < bVar27) {
          bVar16 = 0x7a;
          if (bVar27 != 0x74) goto LAB_004235a0;
LAB_004235f0:
          pbVar10 = pbVar14 + 1;
          bVar17 = bVar27;
          goto LAB_004235f8;
        }
        bVar16 = 0x6a;
        if (bVar27 != 0x68) {
LAB_004235a0:
          bVar17 = 0;
          pbVar10 = pbVar14;
          if (bVar27 != bVar16) goto LAB_004235f8;
          goto LAB_004235f0;
        }
        pbVar10 = pbVar14 + 1;
        bVar27 = *pbVar10;
        bVar17 = 0x68;
        if (bVar27 == 0x68) {
          bVar17 = 0x48;
          pbVar10 = pbVar14 + 2;
          goto LAB_004235f8;
        }
      }
      if (bVar27 == 0) {
        return iVar8;
      }
      param_3 = pbVar10 + 1;
      if (bVar27 == 0x69) {
        uVar15 = 0;
      }
      else {
        pbVar14 = pbVar19;
        if (bVar27 < 0x6a) {
          if (bVar27 == 0x62) {
            uVar15 = 2;
            goto LAB_00423b60;
          }
          if (bVar27 < 99) {
            if (bVar27 == 0x58) goto LAB_004236e0;
            if (bVar27 == 0x5b) {
              if (bVar17 != 0) {
                return iVar8;
              }
              bVar27 = *param_3;
              pbVar18 = param_3;
              if (bVar27 == 0x5e) {
                pbVar18 = pbVar10 + 2;
              }
              param_3 = pbVar18 + 1;
              if (*pbVar18 != 0x5d) {
                param_3 = pbVar18;
              }
              do {
                pbVar10 = param_3;
                param_3 = pbVar10 + 1;
                if (*pbVar10 == 0) {
                  return iVar8;
                }
              } while (*pbVar10 != 0x5d);
              if (bVar27 == 0x5e) {
                while (((pbVar14 < pbVar13 && (*pbVar14 != 0)) && (pbVar7 = pbVar18, 0 < (int)uVar9)
                       )) {
                  do {
                    pbVar25 = pbVar7;
                    if (pbVar10 <= pbVar25) break;
                    pbVar7 = pbVar25 + 1;
                  } while (*pbVar25 != *pbVar14);
                  uVar9 = uVar9 - 1;
                  if (pbVar25 < pbVar10) break;
                  pbVar14 = pbVar14 + 1;
                }
              }
              else {
                while (((pbVar14 < pbVar13 && (*pbVar14 != 0)) && (pbVar7 = pbVar18, 0 < (int)uVar9)
                       )) {
                  do {
                    pbVar25 = pbVar7;
                    if (pbVar10 <= pbVar25) break;
                    pbVar7 = pbVar25 + 1;
                  } while (*pbVar25 != *pbVar14);
                  uVar9 = uVar9 - 1;
                  if (pbVar10 <= pbVar25) break;
                  pbVar14 = pbVar14 + 1;
                }
              }
              if ((pbVar19 == pbVar14) && (iVar22 == 0)) {
                return iVar8;
              }
              if (!bVar4) {
                pbVar10 = (byte *)*param_4;
                if (bVar2) {
                  puVar11 = param_4 + 1;
                  if (pbVar10 != (byte *)0x0) {
                    *(byte **)pbVar10 = pbVar19;
                  }
                  param_4 = param_4 + 2;
                  if ((int *)*puVar11 != (int *)0x0) {
                    *(int *)*puVar11 = (int)pbVar14 - (int)pbVar19;
                  }
                }
                else {
                  if (pbVar10 == (byte *)0x0) {
                    return iVar8;
                  }
                  for (; pbVar19 < pbVar14; pbVar19 = pbVar19 + 1) {
                    *pbVar10 = *pbVar19;
                    pbVar10 = pbVar10 + 1;
                  }
                  *pbVar10 = 0;
                  param_4 = param_4 + 1;
                }
                iVar8 = iVar8 + 1;
              }
            }
            else {
              if (bVar27 != 0x25) {
                return iVar8;
              }
              if (bVar17 != 0) {
                return iVar8;
              }
              if (uVar9 != 0x7fffffff) {
                return iVar8;
              }
              if (bVar4) {
                return iVar8;
              }
              if (pbVar13 <= pbVar19) {
                return iVar8;
              }
              pbVar14 = pbVar19 + 1;
              if (*pbVar19 != 0x25) {
                return iVar8;
              }
            }
          }
          else {
            if (bVar27 != 99) {
              uVar15 = 10;
              if (bVar27 != 100) {
                return iVar8;
              }
              bVar2 = pbVar19 < pbVar13;
              goto LAB_00423b64;
            }
            if (bVar17 != 0) {
              return iVar8;
            }
            if (!bVar2) {
              if (uVar9 == 0x7fffffff) {
                uVar9 = 1;
              }
              if ((int)pbVar13 - (int)pbVar19 < (int)uVar9) {
                return iVar8;
              }
              if (bVar4) goto LAB_00423768;
              pbVar14 = (byte *)*param_4;
              if (pbVar14 == (byte *)0x0) {
                return iVar8;
              }
              while (bVar2 = 0 < (int)uVar9, uVar9 = uVar9 - 1, bVar2) {
                bVar27 = *pbVar19;
                pbVar19 = pbVar19 + 1;
                *pbVar14 = bVar27;
                pbVar14 = pbVar14 + 1;
              }
              param_4 = param_4 + 1;
              goto LAB_00423f64;
            }
            if ((uint)((int)pbVar13 - (int)pbVar19) < uVar9) {
              uVar9 = (int)pbVar13 - (int)pbVar19;
            }
            if (!bVar4) {
              puVar12 = (undefined4 *)*param_4;
              param_4 = param_4 + 1;
              if (puVar12 != (undefined4 *)0x0) {
                *puVar12 = pbVar19;
              }
              if ((uint *)*param_4 != (uint *)0x0) {
                *(uint *)*param_4 = uVar9;
              }
              pbVar19 = pbVar19 + uVar9;
              goto LAB_00423f60;
            }
LAB_00423768:
            pbVar14 = pbVar19 + uVar9;
          }
          goto LAB_004233e4;
        }
        if (bVar27 == 0x70) {
          if (bVar17 == 0) {
            uVar15 = 0x10;
            bVar17 = 0x70;
          }
          else {
LAB_004236e0:
            uVar15 = 0x10;
          }
          goto LAB_00423b60;
        }
        if (bVar27 < 0x71) {
          if (bVar27 != 0x6e) {
            uVar15 = 8;
            if (bVar27 != 0x6f) {
              return iVar8;
            }
            bVar2 = pbVar19 < pbVar13;
            goto LAB_00423b64;
          }
          if (bVar17 != 0) {
            return iVar8;
          }
          if (uVar9 != 0x7fffffff) {
            return iVar8;
          }
          if (bVar4) {
            return iVar8;
          }
          if ((int *)*param_4 == (int *)0x0) {
            return iVar8;
          }
          *(int *)*param_4 = (int)pbVar19 - (int)param_1;
          param_4 = param_4 + 1;
          goto LAB_004233e4;
        }
        uVar15 = 10;
        if ((bVar27 != 0x75) && (uVar15 = 0x10, bVar27 != 0x78)) {
          if (bVar27 != 0x73) {
            return iVar8;
          }
          if (bVar17 != 0) {
            return iVar8;
          }
          do {
            pbVar14 = pbVar19;
            if (pbVar13 <= pbVar14) break;
            pbVar19 = pbVar14 + 1;
          } while ((*(ushort *)(iVar21 + (uint)*pbVar14 * 2) & 0x20) != 0);
          if (iVar22 == 0) {
            if (pbVar13 <= pbVar14) {
              return iVar8;
            }
            if (*pbVar14 == 0) {
              return iVar8;
            }
          }
          if (bVar4) {
            while ((((pbVar14 < pbVar13 && (*pbVar14 != 0)) &&
                    ((*(ushort *)(iVar21 + (uint)*pbVar14 * 2) & 0x20) == 0)) &&
                   (bVar2 = 0 < (int)uVar9, uVar9 = uVar9 - 1, bVar2))) {
              pbVar14 = pbVar14 + 1;
            }
          }
          else {
            pbVar19 = pbVar14;
            if (bVar2) {
              while (((pbVar19 < pbVar13 && (*pbVar19 != 0)) &&
                     (((*(ushort *)(iVar21 + (uint)*pbVar19 * 2) & 0x20) == 0 &&
                      (bVar2 = 0 < (int)uVar9, uVar9 = uVar9 - 1, bVar2))))) {
                pbVar19 = pbVar19 + 1;
              }
              puVar12 = (undefined4 *)*param_4;
              param_4 = param_4 + 1;
              if (puVar12 != (undefined4 *)0x0) {
                *puVar12 = pbVar14;
              }
              if ((int *)*param_4 != (int *)0x0) {
                *(int *)*param_4 = (int)pbVar19 - (int)pbVar14;
              }
            }
            else {
              pbVar19 = (byte *)*param_4;
              if (pbVar19 == (byte *)0x0) {
                return iVar8;
              }
              for (; pbVar14 < pbVar13; pbVar14 = pbVar14 + 1) {
                bVar27 = *pbVar14;
                if (((bVar27 == 0) || ((*(ushort *)(*(int *)puVar5 + (uint)bVar27 * 2) & 0x20) != 0)
                    ) || (bVar2 = (int)uVar9 < 1, uVar9 = uVar9 - 1, bVar2)) break;
                *pbVar19 = bVar27;
                pbVar19 = pbVar19 + 1;
              }
              *pbVar19 = 0;
              pbVar19 = pbVar14;
            }
            param_4 = param_4 + 1;
            iVar8 = iVar8 + 1;
            pbVar14 = pbVar19;
          }
          goto LAB_004233e4;
        }
      }
LAB_00423b60:
      do {
        bVar2 = pbVar19 < pbVar13;
        pbVar14 = pbVar19;
LAB_00423b64:
      } while ((bVar2) &&
              (pbVar19 = pbVar14 + 1, (*(ushort *)(iVar21 + (uint)*pbVar14 * 2) & 0x20) != 0));
      bVar2 = false;
      if ((1 < (int)pbVar13 - (int)pbVar14) && (0 < (int)uVar9)) {
        if (*pbVar14 == 0x2d) {
          pbVar14 = pbVar14 + 1;
          uVar9 = uVar9 - 1;
          bVar2 = true;
        }
        else {
          bVar2 = false;
          if (*pbVar14 == 0x2b) {
            pbVar14 = pbVar14 + 1;
            uVar9 = uVar9 - 1;
          }
        }
      }
      pbVar19 = pbVar14;
      if (uVar15 != 0) {
        if (uVar15 == 0x10) {
          if ((((int)pbVar13 - (int)pbVar14 < 2) || ((int)uVar9 < 2)) || (*pbVar14 != 0x30))
          goto LAB_00423dc4;
          sVar24 = *(short *)(*(int *)puVar6 + (uint)pbVar14[1] * 2);
          sVar20 = 0x78;
        }
        else {
          if ((((uVar15 != 2) || ((int)pbVar13 - (int)pbVar14 < 2)) || ((int)uVar9 < 2)) ||
             (*pbVar14 != 0x30)) goto LAB_00423dc4;
          sVar24 = *(short *)(*(int *)puVar6 + (uint)pbVar14[1] * 2);
          sVar20 = 0x62;
        }
        if (sVar24 == sVar20) {
          uVar9 = uVar9 - 2;
          pbVar19 = pbVar14 + 2;
        }
        goto LAB_00423dc4;
      }
      if ((int)pbVar13 - (int)pbVar14 < 3) {
        if ((int)pbVar13 - (int)pbVar14 == 2) goto LAB_00423cc0;
      }
      else {
        if ((int)uVar9 < 2) {
LAB_00423cc0:
          if ((int)uVar9 < 1) goto LAB_00423dc0;
        }
        else {
          if (((*pbVar14 == 0x30) && (*(short *)(*(int *)puVar6 + (uint)pbVar14[1] * 2) == 0x78)) &&
             ((*(ushort *)(iVar21 + (uint)pbVar14[2] * 2) & 0x10) != 0)) {
            uVar9 = uVar9 - 2;
            uVar15 = 0x10;
            pbVar19 = pbVar14 + 2;
            goto LAB_00423dc4;
          }
          if (((*pbVar14 == 0x30) && (*(short *)(*(int *)puVar6 + (uint)pbVar14[1] * 2) == 0x62)) &&
             ((byte)(pbVar14[2] - 0x30) < 2)) {
            uVar9 = uVar9 - 2;
            uVar15 = 2;
            pbVar19 = pbVar14 + 2;
            goto LAB_00423dc4;
          }
        }
        if (*pbVar14 == 0x30) {
          if ((0x2f < pbVar14[1]) && (pbVar14[1] < 0x38)) {
            uVar9 = uVar9 - 1;
            uVar15 = 8;
            pbVar19 = pbVar14 + 1;
            goto LAB_00423dc4;
          }
        }
      }
LAB_00423dc0:
      uVar15 = 10;
LAB_00423dc4:
      uVar28 = 0;
      uVar26 = 0;
      do {
        if ((pbVar13 <= pbVar19) || ((int)uVar9 < 1)) goto LAB_00423e78;
        uVar9 = uVar9 - 1;
        iVar22 = (uint)*pbVar19 * 2;
        uVar1 = *(ushort *)(iVar21 + iVar22);
        uVar23 = *pbVar19 - 0x30;
        if ((uVar1 & 8) == 0) {
          if ((uVar1 & 0x10) == 0) goto LAB_00423e78;
          uVar23 = (int)*(short *)(*(int *)puVar6 + iVar22) - 0x57;
        }
        if ((int)uVar15 <= (int)uVar23) goto LAB_00423e78;
        pbVar19 = pbVar19 + 1;
        uVar3 = (ulonglong)uVar28;
        uVar28 = uVar23 + (int)(uVar3 * uVar15);
        uVar26 = (uint)(uVar28 < uVar23) +
                 ((int)uVar23 >> 0x1f) + uVar15 * uVar26 + (int)(uVar3 * uVar15 >> 0x20);
      } while( true );
    }
    if (pbVar13 <= pbVar19) {
      return iVar8;
    }
    param_3 = param_3 + 1;
    if (*pbVar19 != bVar27) {
      return iVar8;
    }
    pbVar14 = pbVar19 + 1;
  } while( true );
LAB_00423e78:
  if (pbVar19 == pbVar14) {
    return iVar8;
  }
  pbVar14 = pbVar19;
  if (bVar4) goto LAB_004233e4;
  if (bVar2) {
    uVar28 = -uVar28;
    uVar26 = -(uint)(uVar28 != 0) - uVar26;
  }
  puVar11 = (uint *)*param_4;
  if (puVar11 == (uint *)0x0) {
    return iVar8;
  }
  if (bVar17 == 0x6a) {
LAB_00423f50:
    puVar11[1] = uVar28;
    *puVar11 = uVar26;
  }
  else {
    if (bVar17 < 0x6b) {
      if (bVar17 == 0x4c) goto LAB_00423f50;
      if (0x4c < bVar17) {
        if (bVar17 != 0x68) {
          return iVar8;
        }
        *(short *)puVar11 = (short)uVar28;
        param_4 = param_4 + 1;
        goto LAB_00423f64;
      }
      if (bVar17 != 0) {
        if (bVar17 != 0x48) {
          return iVar8;
        }
        *(char *)puVar11 = (char)uVar28;
        param_4 = param_4 + 1;
        goto LAB_00423f64;
      }
    }
    else if (bVar17 != 0x70) {
      if (bVar17 < 0x71) {
        if (bVar17 != 0x6c) {
          return iVar8;
        }
        *puVar11 = uVar28;
      }
      else {
        if (bVar17 == 0x74) goto LAB_00423f5c;
        if (bVar17 != 0x7a) {
          return iVar8;
        }
        *puVar11 = uVar28;
      }
      goto LAB_00423f60;
    }
LAB_00423f5c:
    *puVar11 = uVar28;
  }
LAB_00423f60:
  param_4 = param_4 + 1;
LAB_00423f64:
  iVar8 = iVar8 + 1;
  pbVar14 = pbVar19;
  goto LAB_004233e4;
}


/* FUN_00423fa0 @ 00423fa0 */

undefined4 FUN_00423fa0(byte *param_1,int param_2,int param_3,undefined1 *param_4)

{
  byte bVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined *puVar4;
  byte *pbVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  
  if (param_2 == -1) {
    param_2 = (*(code *)PTR_strlen_006130b4)();
  }
  puVar4 = PTR___ctype_tolower_006124f4;
  puVar3 = PTR___ctype_b_006122a4;
  pbVar5 = param_1 + param_2;
  do {
    uVar7 = 0;
    if (param_3 == 0) {
      return 0;
    }
    iVar6 = 0;
LAB_0042409c:
    do {
      if (pbVar5 <= param_1) {
        if (iVar6 == 0) {
          return 0xffffe5aa;
        }
        break;
      }
      bVar1 = *param_1;
      iVar8 = (int)(char)bVar1;
      param_1 = param_1 + 1;
      iVar9 = (uint)bVar1 * 2;
      uVar2 = *(ushort *)(*(int *)puVar3 + iVar9);
      if ((uVar2 & 8) == 0) {
        if ((uVar2 & 0x10) == 0) {
          if (iVar6 != 0) break;
          if (((iVar8 != 0x3a) && (iVar8 != 0x2d)) && (iVar8 != 0x20)) {
            return 0xffffe5aa;
          }
          goto LAB_0042409c;
        }
        uVar7 = *(short *)(*(int *)puVar4 + iVar9) + -0x57 + uVar7 * 0x10;
      }
      else {
        uVar7 = iVar8 + -0x30 + uVar7 * 0x10;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 == 1);
    if (0xff < uVar7) {
      return 0xffffe5ca;
    }
    if (param_4 != (undefined1 *)0x0) {
      *param_4 = (char)uVar7;
      param_4 = param_4 + 1;
    }
    param_3 = param_3 + -1;
  } while( true );
}


/* strnicmp_suffix @ 00424114 */

undefined4 strnicmp_suffix(int param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  
  uVar1 = (*(code *)PTR_strnlen_00611ec4)();
  uVar2 = (*(code *)PTR_strlen_006130b4)(param_3);
  if (uVar1 < uVar2) {
    return 0xffffffff;
  }
  uVar3 = strnicmpx(param_1 + (uVar1 - uVar2),uVar2,param_3);
  return uVar3;
}


/* strnstr_suffix @ 004241a4 */

int strnstr_suffix(int param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  undefined1 *puVar10;
  char *pcVar11;
  
  uVar3 = (*(code *)PTR_strlen_006130b4)(param_3);
  uVar4 = (*(code *)PTR_strnlen_00611ec4)(param_1,param_2);
  iVar5 = (*(code *)PTR_calloc_00613a18)(uVar4 + 1,1);
  iVar6 = (*(code *)PTR_calloc_00613a18)(uVar3 + 1,1);
  puVar1 = PTR___ctype_tolower_006124f4;
  uVar7 = 0;
  while( true ) {
    puVar2 = PTR___ctype_tolower_006124f4;
    pcVar11 = (char *)(param_1 + uVar7);
    puVar10 = (undefined1 *)(iVar5 + uVar7);
    if (uVar4 <= uVar7) break;
    uVar7 = uVar7 + 1;
    *puVar10 = (char)*(undefined2 *)(*(int *)puVar1 + *pcVar11 * 2);
  }
  uVar7 = 0;
  while( true ) {
    pcVar11 = (char *)(param_3 + uVar7);
    puVar10 = (undefined1 *)(iVar6 + uVar7);
    if (uVar3 <= uVar7) break;
    uVar7 = uVar7 + 1;
    *puVar10 = (char)*(undefined2 *)(*(int *)puVar2 + *pcVar11 * 2);
  }
  iVar8 = 0;
  if (uVar3 <= uVar4) {
    iVar9 = (*(code *)PTR_strstr_00611c14)(iVar5,iVar6);
    iVar8 = 0;
    if (iVar9 != 0) {
      iVar8 = param_1 + (iVar9 - iVar5);
    }
  }
  (*(code *)PTR_free_006119dc)(iVar5);
  (*(code *)PTR_free_006119dc)(iVar6);
  return iVar8;
}


/* FUN_00424338 @ 00424338 */

int FUN_00424338(undefined1 *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  uint uVar5;
  
  if ((param_1 == (undefined1 *)0x0) || (param_2 == 0)) {
    iVar1 = 0;
  }
  else {
    iVar1 = (*(code *)PTR_malloc_006132d8)(param_2 * 3 + 1);
    if (iVar1 != 0) {
      iVar4 = iVar1;
      for (uVar5 = 0; uVar5 < param_2; uVar5 = uVar5 + 1) {
        pcVar3 = "%02X:";
        if (uVar5 == param_2 - 1) {
          pcVar3 = "%02X";
        }
        iVar2 = (*(code *)PTR_sprintf_00611f90)(iVar4,pcVar3,*param_1);
        iVar4 = iVar4 + iVar2;
        param_1 = param_1 + 1;
      }
      *(undefined1 *)(iVar4 + 1) = 0;
    }
  }
  return iVar1;
}


/* FUN_00424438 @ 00424438 */

int FUN_00424438(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  int iVar4;
  uint uVar5;
  
  if ((param_1 == 0) || (param_2 == 0)) {
    iVar1 = 0;
  }
  else {
    iVar1 = (*(code *)PTR_malloc_006132d8)(param_2 * 3 + 1);
    if (iVar1 != 0) {
      uVar5 = 0;
      iVar4 = iVar1;
      while( true ) {
        puVar3 = (undefined1 *)(param_1 + uVar5);
        if (param_2 <= uVar5) break;
        uVar5 = uVar5 + 1;
        iVar2 = (*(code *)PTR_sprintf_00611f90)(iVar4,"%02X ",*puVar3);
        iVar4 = iVar4 + iVar2;
      }
      *(undefined1 *)(iVar4 + 1) = 0;
    }
  }
  return iVar1;
}


/* FUN_0042450c @ 0042450c */

int FUN_0042450c(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  int iVar4;
  uint uVar5;
  
  if ((param_1 == 0) || (param_2 == 0)) {
    iVar1 = 0;
  }
  else {
    iVar1 = (*(code *)PTR_malloc_006132d8)(param_2 * 2 + 1);
    if (iVar1 != 0) {
      uVar5 = 0;
      iVar4 = iVar1;
      while( true ) {
        puVar3 = (undefined1 *)(param_1 + uVar5);
        if (param_2 <= uVar5) break;
        uVar5 = uVar5 + 1;
        iVar2 = (*(code *)PTR_sprintf_00611f90)(iVar4,&DAT_005caca0,*puVar3);
        iVar4 = iVar4 + iVar2;
      }
      *(undefined1 *)(iVar4 + 1) = 0;
    }
  }
  return iVar1;
}


/* FUN_004245dc @ 004245dc */

void FUN_004245dc(char *param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  
  iVar2 = (*(code *)PTR_strlen_006130b4)();
  iVar2 = iVar2 + 1;
  pcVar3 = param_1;
  while( true ) {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
    if (cVar1 == '\0') break;
    iVar2 = iVar2 + (uint)(cVar1 == '.');
  }
  pcVar3 = (char *)(*(code *)PTR_malloc_006132d8)(iVar2);
  while( true ) {
    cVar1 = *param_1;
    if (cVar1 == '\0') break;
    if (cVar1 == '.') {
      *pcVar3 = '/';
      pcVar3[1] = '.';
      pcVar3 = pcVar3 + 2;
      param_1 = param_1 + 1;
    }
    else {
      *pcVar3 = cVar1;
      pcVar3 = pcVar3 + 1;
      param_1 = param_1 + 1;
    }
  }
  *pcVar3 = '\0';
  return;
}


/* FUN_00424694 @ 00424694 */

int FUN_00424694(int param_1,int param_2)

{
  int iVar1;
  
  if (param_1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = 0;
    if (param_2 != 0) {
      iVar1 = (*(code *)PTR_malloc_006132d8)(param_2 + 1);
      if (iVar1 != 0) {
        (*(code *)PTR_memcpy_006137d0)(iVar1,param_1,param_2);
        *(undefined1 *)(iVar1 + param_2) = 0;
      }
    }
  }
  return iVar1;
}


/* FUN_00424724 @ 00424724 */

int FUN_00424724(char *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if ((param_1 != (char *)0x0) && (*param_1 != '\0')) {
    iVar1 = (*(code *)PTR_strlen_006130b4)();
    iVar2 = (*(code *)PTR_malloc_006132d8)(iVar1 + 1);
    if (iVar2 != 0) {
      (*(code *)PTR_memcpy_006137d0)(iVar2,param_1,iVar1 + 1);
    }
  }
  return iVar2;
}


/* FUN_004247c0 @ 004247c0 */

bool FUN_004247c0(int param_1)

{
  bool bVar1;
  undefined4 local_78;
  char local_74 [112];
  
  bVar1 = false;
  if (0 < param_1) {
    local_78 = 0x68;
    (*(code *)PTR_getsockopt_00612874)(param_1,6,0xb,local_74,&local_78);
    bVar1 = local_74[0] == '\x01';
  }
  return bVar1;
}


/* FUN_00424820 @ 00424820 */

void FUN_00424820(undefined4 *param_1)

{
  undefined *UNRECOVERED_JUMPTABLE;
  undefined4 uVar1;
  
  UNRECOVERED_JUMPTABLE = PTR_close_0061276c;
  uVar1 = *param_1;
  *param_1 = 0xffffffff;
                    /* WARNING: Could not recover jumptable at 0x0042483c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)(uVar1);
  return;
}


/* SocketSend @ 004248d8 */

undefined4 SocketSend(uint param_1,int param_2,uint param_3)

{
  undefined4 uVar1;
  undefined4 **ppuVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 *local_b0 [32];
  undefined4 *local_30;
  int local_2c;
  
  if ((int)param_1 < 0) {
    uVar1 = 0xffffe5cf;
  }
  else {
    uVar1 = 0xffffe5cf;
    if ((param_2 != 0) && (param_3 != 0)) {
      ppuVar2 = local_b0;
      do {
        *ppuVar2 = (undefined4 *)0x0;
        ppuVar2 = ppuVar2 + 1;
        uVar5 = param_1 >> 5;
      } while (ppuVar2 != &local_30);
      uVar6 = 1 << (param_1 & 0x1f);
      local_30 = &local_b8;
      local_b0[uVar5] = (undefined4 *)((uint)local_b0[uVar5] | uVar6);
      uVar4 = 0;
      local_2c = param_1 + 1;
      ppuVar2 = local_b0;
      do {
        do {
          iVar3 = local_2c;
          *ppuVar2 = (undefined4 *)0x0;
          ppuVar2 = ppuVar2 + 1;
        } while (ppuVar2 != &local_30);
        local_b0[uVar5] = (undefined4 *)((uint)local_b0[uVar5] | uVar6);
        local_b8 = 2;
        local_b4 = 0;
        iVar3 = (*(code *)PTR_select_00612e2c)(iVar3,0,local_b0,0,local_30);
        if (iVar3 < 1) {
          return 0xffffe5ad;
        }
        if ((uVar6 & (uint)local_b0[uVar5]) != 0) {
          iVar3 = (*(code *)PTR_write_00612898)(param_1,param_2 + uVar4,param_3 - uVar4);
          uVar4 = uVar4 + iVar3;
          if (iVar3 < 1) {
            return 0xffffe5ad;
          }
        }
        uVar1 = 0xffffe5a2;
        ppuVar2 = local_b0;
      } while (uVar4 < param_3);
      if (uVar4 == param_3) {
        uVar1 = 0;
      }
    }
  }
  return uVar1;
}


/* Phytrex_HMGetMaxPairList @ 00424aac */

undefined4 Phytrex_HMGetMaxPairList(void)

{
  return 0x10;
}


/* Phytrex_HMGetAccessoryName @ 00424ab4 */

undefined * Phytrex_HMGetAccessoryName(void)

{
  return &DAT_00614788;
}


/* Phytrex_HMSetAccessoryName @ 00424ac0 */

void Phytrex_HMSetAccessoryName(undefined4 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00424ad8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_strcpy_006115d0)(&DAT_00614788,param_1);
  return;
}


/* Phytrex_HMGetPairListPermission @ 00424ae0 */

undefined4 Phytrex_HMGetPairListPermission(int param_1,undefined1 *param_2)

{
  undefined4 uVar1;
  
  (*(code *)PTR_pthread_mutex_lock_0061308c)(&DAT_00613d60);
  uVar1 = 0xffffe5b7;
  if (param_1 < 0x10) {
    uVar1 = 0;
    *param_2 = (&DAT_00613dd8)[param_1 * 0xa1];
  }
  (*(code *)PTR_pthread_mutex_unlock_00611c8c)(&DAT_00613d60);
  return uVar1;
}


/* Phytrex_HMGetNoOfPairList @ 00424b78 */

int Phytrex_HMGetNoOfPairList(void)

{
  char *pcVar1;
  int iVar2;
  
  (*(code *)PTR_pthread_mutex_lock_0061308c)(&DAT_00613d60);
  pcVar1 = &DAT_00613d78;
  iVar2 = 0;
  do {
    if (*pcVar1 != '\0') {
      iVar2 = iVar2 + (uint)(pcVar1[0x40] != '\0');
    }
    pcVar1 = pcVar1 + 0xa1;
  } while (pcVar1 != &DAT_00614788);
  (*(code *)PTR_pthread_mutex_unlock_00611c8c)(&DAT_00613d60);
  return iVar2;
}


/* Phytrex_HMPairListIsEmpty @ 00424c08 */

undefined4 Phytrex_HMPairListIsEmpty(void)

{
  char cVar1;
  char *pcVar2;
  short sVar3;
  undefined4 uVar4;
  
  (*(code *)PTR_pthread_mutex_lock_0061308c)(&DAT_00613d60);
  pcVar2 = &DAT_00613db8;
  sVar3 = 0;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 0xa1;
    if (cVar1 != '\0') {
      sVar3 = sVar3 + 1;
    }
    uVar4 = 0xffffe5b7;
  } while (pcVar2 != (char *)&DAT_006147c8);
  if (sVar3 == 0) {
    uVar4 = 0;
  }
  (*(code *)PTR_pthread_mutex_unlock_00611c8c)(&DAT_00613d60);
  return uVar4;
}


/* Phytrex_Cleanup_Handler @ 00424c8c */

void Phytrex_Cleanup_Handler(void)

{
                    /* WARNING: Could not recover jumptable at 0x00424ca0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_pthread_mutex_unlock_00611c8c)(&DAT_00613d60);
  return;
}


/* Phytrex_HMUpdatePairList @ 00424ca8 */

undefined4 Phytrex_HMUpdatePairList(int param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    (*(code *)PTR_pthread_mutex_lock_0061308c)(&DAT_00613d60);
    uVar1 = 0xffffe5b8;
    if (param_2 < 0x10) {
      param_2 = param_2 * 0xa1;
      uVar1 = 0;
      (*(code *)PTR_memcpy_006137d0)(&DAT_00613d78 + param_2,param_1,0x24);
      (*(code *)PTR_memcpy_006137d0)(&DAT_00613db8 + param_2,param_1 + 0x40,0x20);
      (&DAT_00613dd8)[param_2] = *(undefined1 *)(param_1 + 0x60);
    }
  }
  (*(code *)PTR_pthread_mutex_unlock_00611c8c)(&DAT_00613d60);
  return uVar1;
}


/* Phytrex_HMReadPairList @ 00424d80 */

undefined4 Phytrex_HMReadPairList(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  (*(code *)PTR_pthread_mutex_lock_0061308c)(&DAT_00613d60);
  if (param_1 != 0) {
    iVar1 = (*(code *)PTR_open_006138f8)("/dev/mtdblock2",0);
    uVar2 = 0xffffe5c2;
    if (iVar1 != -1) {
      (*(code *)PTR_close_0061276c)(iVar1);
      uVar2 = 0xffffe5b8;
      if (param_2 < 0x10) {
        param_2 = param_2 * 0xa1;
        if ((&DAT_00613d78)[param_2] != '\0') {
          (*(code *)PTR_memcpy_006137d0)(param_1,&DAT_00613d78 + param_2,0x24);
          uVar2 = 0;
          (*(code *)PTR_memcpy_006137d0)(param_1 + 0x40,&DAT_00613db8 + param_2,0x20);
          *(undefined1 *)(param_1 + 0x60) = (&DAT_00613dd8)[param_2];
        }
      }
    }
  }
  (*(code *)PTR_pthread_mutex_unlock_00611c8c)(&DAT_00613d60);
  return uVar2;
}


/* Phytrex_HMSearchLTPK @ 00424e98 */

undefined4 Phytrex_HMSearchLTPK(undefined4 param_1,undefined4 param_2,int *param_3)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  
  puVar1 = PTR_pthread_mutex_lock_0061308c;
  *param_3 = -1;
  (*(code *)puVar1)(&DAT_00613d60);
  iVar6 = 0;
  iVar3 = 0;
  do {
    iVar2 = (*(code *)PTR_strncmp_0061322c)(&DAT_00613d78 + iVar6,param_1,0x40);
    iVar4 = iVar3 + 1;
    if (iVar2 == 0) {
      (*(code *)PTR_memcpy_006137d0)(param_2,&DAT_00613db8 + iVar6,0x20);
      *param_3 = iVar3;
      uVar5 = 0;
      goto LAB_00424f68;
    }
    iVar6 = iVar4 * 0xa1;
    iVar3 = iVar4;
  } while (iVar4 != 0x10);
  uVar5 = 0xffffe5b9;
LAB_00424f68:
  (*(code *)PTR_pthread_mutex_unlock_00611c8c)(&DAT_00613d60);
  return uVar5;
}


/* Phytrex_HMRemovePairKey @ 00424fa8 */

undefined4 Phytrex_HMRemovePairKey(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  (*(code *)PTR_pthread_mutex_lock_0061308c)(&DAT_00613d60);
  iVar2 = 0;
  iVar4 = 0;
  do {
    iVar2 = iVar2 + 1;
    iVar1 = (*(code *)PTR_strncmp_0061322c)(&DAT_00613d78 + iVar4,param_1,0x40);
    if (iVar1 == 0) {
      (*(code *)PTR_memset_0061223c)(&DAT_00613d78 + iVar4,0,0xa1);
      uVar3 = 0;
      goto LAB_00425058;
    }
    iVar4 = iVar2 * 0xa1;
  } while (iVar2 != 0x10);
  uVar3 = 0xffffe5b9;
LAB_00425058:
  (*(code *)PTR_pthread_mutex_unlock_00611c8c)(&DAT_00613d60);
  return uVar3;
}


/* Phytrex_HMAddPairKey @ 00425090 */

undefined4 Phytrex_HMAddPairKey(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  
  (*(code *)PTR_printf_0061185c)("[Add Pair] ControllerName=[%s]\n",param_1);
  pcVar4 = &DAT_00613d78;
  (*(code *)PTR_pthread_mutex_lock_0061308c)(&DAT_00613d60);
  iVar5 = 0;
  iVar6 = 0;
  while( true ) {
    iVar5 = iVar5 + 1;
    iVar2 = (*(code *)PTR_strncmp_0061322c)(&DAT_00613d78 + iVar6,param_1,0x40);
    if (iVar2 == 0) {
      uVar3 = 0xffffe5ae;
      goto LAB_004251a0;
    }
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 0xa1;
    if (cVar1 == '\0') break;
    iVar6 = iVar5 * 0xa1;
    if (iVar5 == 0x10) {
      uVar3 = 0xffffe5b8;
LAB_004251a0:
      (*(code *)PTR_pthread_mutex_unlock_00611c8c)(&DAT_00613d60);
      return uVar3;
    }
  }
  (*(code *)PTR_memcpy_006137d0)(&DAT_00613db8 + iVar6,param_1 + 0x40,0x20);
  (*(code *)PTR_memcpy_006137d0)(&DAT_00613d78 + iVar6,param_1,0x24);
  uVar3 = 0;
  (&DAT_00613dd8)[iVar6] = *(undefined1 *)(param_1 + 0x60);
  goto LAB_004251a0;
}


/* Phytrex_HMInitFlash @ 004251dc */

void Phytrex_HMInitFlash(void)

{
  undefined4 uVar1;
  undefined1 local_60;
  undefined1 local_5f;
  undefined1 local_5e;
  undefined1 local_5d;
  undefined4 local_5c;
  undefined4 local_58;
  undefined1 auStack_54 [72];
  
  uVar1 = (*(code *)PTR_open_006138f8)("/dev/mtdblock2",0x101,0x1b0);
  local_60 = 0x50;
  local_5f = 0x48;
  local_5e = 0x52;
  local_5d = 0x58;
  local_5c = 0;
  local_58 = 0;
  (*(code *)PTR_lseek_00612fd4)(uVar1,0,0);
  (*(code *)PTR_write_00612898)(uVar1,&local_60,0xc);
  (*(code *)PTR_memset_0061223c)(auStack_54,0,0x41);
  (*(code *)PTR_lseek_00612fd4)(uVar1,0,0xc);
  (*(code *)PTR_write_00612898)(uVar1,auStack_54,0x41);
  (*(code *)PTR_memset_0061223c)(&DAT_00613d78,0,0xa10);
  (*(code *)PTR_lseek_00612fd4)(uVar1,0,0x4d);
  (*(code *)PTR_write_00612898)(uVar1,&DAT_00613d78,0xa10);
  (*(code *)PTR_close_0061276c)(uVar1);
  return;
}


/* Phytrex_HMSavePairList @ 00425344 */

undefined4 Phytrex_HMSavePairList(void)

{
  int iVar1;
  undefined4 uVar2;
  
  (*(code *)PTR_pthread_mutex_lock_0061308c)(&DAT_00613d60);
  iVar1 = (*(code *)PTR_open_006138f8)("/dev/mtdblock2",2);
  if (iVar1 == -1) {
    uVar2 = 0xffffe5c2;
    Phytrex_HMInitFlash();
  }
  else {
    (*(code *)PTR_lseek_00612fd4)(iVar1,0x4d,0);
    (*(code *)PTR_write_00612898)(iVar1,&DAT_00613d78,0xa10);
    uVar2 = 0;
    (*(code *)PTR_close_0061276c)(iVar1);
  }
  (*(code *)PTR_pthread_mutex_unlock_00611c8c)(&DAT_00613d60);
  return uVar2;
}


/* Phytrex_HMSaveAppConfig @ 00425420 */

undefined4 Phytrex_HMSaveAppConfig(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  (*(code *)PTR_pthread_mutex_lock_0061308c)(&DAT_00613d60);
  iVar1 = (*(code *)PTR_open_006138f8)("/dev/mtdblock2",2);
  if (iVar1 == -1) {
    uVar2 = 0xffffe5c2;
    Phytrex_HMInitFlash();
  }
  else {
    (*(code *)PTR_lseek_00612fd4)(iVar1,0xc,0);
    (*(code *)PTR_write_00612898)(iVar1,param_1,0x41);
    uVar2 = 0;
    (*(code *)PTR_close_0061276c)(iVar1);
  }
  (*(code *)PTR_pthread_mutex_unlock_00611c8c)(&DAT_00613d60);
  return uVar2;
}


/* Phytrex_HMGetAppConfig @ 00425508 */

undefined4 Phytrex_HMGetAppConfig(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if (param_1 != 0) {
    (*(code *)PTR_pthread_mutex_lock_0061308c)(&DAT_00613d60);
    uVar2 = 0xffffe5c2;
    iVar1 = (*(code *)PTR_open_006138f8)("/dev/mtdblock2",0);
    if (iVar1 != -1) {
      (*(code *)PTR_lseek_00612fd4)(iVar1,0xc,0);
      uVar2 = 0;
      (*(code *)PTR_read_00612ef0)(iVar1,param_1,0x41);
      (*(code *)PTR_close_0061276c)(iVar1);
    }
    (*(code *)PTR_pthread_mutex_unlock_00611c8c)(&DAT_00613d60);
  }
  return uVar2;
}


/* FUN_004255ec @ 004255ec */

undefined4 FUN_004255ec(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if (param_1 != 0) {
    (*(code *)PTR_pthread_mutex_lock_0061308c)(&DAT_00613d60);
    uVar2 = 0xffffe5c2;
    iVar1 = (*(code *)PTR_open_006138f8)("/dev/mtdblock2",0);
    if (iVar1 != -1) {
      (*(code *)PTR_lseek_00612fd4)(iVar1,0,0);
      uVar2 = 0;
      (*(code *)PTR_read_00612ef0)(iVar1,param_1,0xc);
      (*(code *)PTR_close_0061276c)(iVar1);
    }
  }
  (*(code *)PTR_pthread_mutex_unlock_00611c8c)(&DAT_00613d60);
  return uVar2;
}


/* Phytrex_HMCreatPairList @ 004256d0 */

undefined4 Phytrex_HMCreatPairList(void)

{
  int iVar1;
  code *pcVar2;
  char local_60;
  char local_5f;
  char local_5e;
  char local_5d;
  undefined4 local_5c;
  undefined4 local_58;
  undefined1 auStack_54 [72];
  
  (*(code *)PTR_pthread_mutex_lock_0061308c)(&DAT_00613d60);
  iVar1 = (*(code *)PTR_open_006138f8)("/dev/mtdblock2",0);
  if (iVar1 == -1) {
    Phytrex_HMInitFlash();
  }
  else {
    (*(code *)PTR_lseek_00612fd4)(iVar1,0,0);
    (*(code *)PTR_read_00612ef0)(iVar1,&local_60,0xc);
    if ((((local_60 == 'P') && (local_5f == 'H')) && (local_5e == 'R')) && (local_5d == 'X')) {
      (*(code *)PTR_lseek_00612fd4)(iVar1,0x4d,0);
      pcVar2 = (code *)PTR_read_00612ef0;
    }
    else {
      (*(code *)PTR_close_0061276c)(iVar1);
      iVar1 = (*(code *)PTR_open_006138f8)("/dev/mtdblock2",0x101,0x1b0);
      local_60 = 'P';
      local_5f = 'H';
      local_5e = 'R';
      local_5d = 'X';
      local_5c = 0;
      local_58 = 0;
      (*(code *)PTR_lseek_00612fd4)(iVar1,0,0);
      (*(code *)PTR_write_00612898)(iVar1,&local_60,0xc);
      (*(code *)PTR_memset_0061223c)(auStack_54,0,0x41);
      (*(code *)PTR_lseek_00612fd4)(iVar1,0,0xc);
      (*(code *)PTR_write_00612898)(iVar1,auStack_54,0x41);
      (*(code *)PTR_memset_0061223c)(&DAT_00613d78,0,0xa10);
      (*(code *)PTR_lseek_00612fd4)(iVar1,0,0x4d);
      pcVar2 = (code *)PTR_write_00612898;
    }
    (*pcVar2)(iVar1,&DAT_00613d78,0xa10);
    (*(code *)PTR_close_0061276c)(iVar1);
  }
  (*(code *)PTR_pthread_mutex_unlock_00611c8c)(&DAT_00613d60);
  return 0;
}


/* Phytrex_HMEnd @ 00425950 */

void Phytrex_HMEnd(void)

{
                    /* WARNING: Could not recover jumptable at 0x00425964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_pthread_mutex_destroy_00612c4c)(&DAT_00613d60);
  return;
}


/* Phytrex_HMStart @ 0042596c */

void Phytrex_HMStart(void)

{
                    /* WARNING: Could not recover jumptable at 0x00425984. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_pthread_mutex_init_00613634)(&DAT_00613d60,0);
  return;
}


/* HKSetPassword @ 00425990 */

void HKSetPassword(undefined4 param_1)

{
  DAT_006147b4 = param_1;
  return;
}


/* HKCreatePairVerifyInfo @ 004259a4 */

void HKCreatePairVerifyInfo(void)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_calloc_00613a18)(1,0x28);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 4) = 1;
  }
  return;
}


/* HKCleanPairVerifyInfo @ 004259e4 */

void HKCleanPairVerifyInfo(int *param_1)

{
  int iVar1;
  
  if (*param_1 != 0) {
    if (*(int *)(*param_1 + 0xc) != 0) {
      (*(code *)PTR_free_006119dc)();
    }
    iVar1 = *param_1;
    if (*(int *)(iVar1 + 0x10) != 0) {
      (*(code *)PTR_free_006119dc)();
      iVar1 = *param_1;
    }
    if (*(int *)(iVar1 + 0x14) != 0) {
      (*(code *)PTR_free_006119dc)();
    }
    iVar1 = *param_1;
    if (*(int *)(iVar1 + 0x18) != 0) {
      (*(code *)PTR_free_006119dc)();
      iVar1 = *param_1;
    }
    if (*(int *)(iVar1 + 0x1c) != 0) {
      (*(code *)PTR_free_006119dc)();
    }
    iVar1 = *param_1;
    if (*(int *)(iVar1 + 0x20) != 0) {
      (*(code *)PTR_free_006119dc)();
      iVar1 = *param_1;
    }
    if (*(int *)(iVar1 + 0x24) != 0) {
      (*(code *)PTR_free_006119dc)();
    }
    (*(code *)PTR_free_006119dc)(*param_1);
    *param_1 = 0;
  }
  return;
}


/* HKCleanPairSetupInfo @ 00425b60 */

void HKCleanPairSetupInfo(int *param_1,int param_2)

{
  int iVar1;
  
  if ((*param_1 != 0) && (*(char *)(param_2 + 0x110) != '\0')) {
    DAT_005ffbb0 = 1;
    *(undefined1 *)(param_2 + 0x110) = 0;
    if (*(int *)*param_1 != 0) {
      (*(code *)PTR_free_006119dc)();
    }
    iVar1 = *param_1;
    if (*(int *)(iVar1 + 8) != 0) {
      (*(code *)PTR_free_006119dc)();
      iVar1 = *param_1;
    }
    if (*(int *)(iVar1 + 0x10) != 0) {
      (*(code *)PTR_free_006119dc)();
    }
    iVar1 = *param_1;
    if (*(int *)(iVar1 + 0x18) != 0) {
      (*(code *)PTR_free_006119dc)();
      iVar1 = *param_1;
    }
    if (*(int *)(*(int *)(iVar1 + 4) + 0x30) != 0) {
      (*(code *)PTR_free_006119dc)();
    }
    if (*(int *)(*(int *)(*param_1 + 4) + 0x28) != 0) {
      (*(code *)PTR_free_006119dc)();
    }
    if (*(int *)(*(int *)(*param_1 + 4) + 0x24) != 0) {
      (*(code *)PTR_free_006119dc)();
    }
    if (*(int *)(*(int *)(*param_1 + 4) + 0x48) != 0) {
      (*(code *)PTR_free_006119dc)();
    }
    if (*(int *)(*param_1 + 4) != 0) {
      (*(code *)PTR_free_006119dc)();
    }
    (*(code *)PTR_free_006119dc)(*param_1);
    *param_1 = 0;
  }
  return;
}


/* FUN_00425d78 @ 00425d78 */

int FUN_00425d78(undefined4 param_1,int param_2,int param_3)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined1 uVar7;
  undefined1 *puVar6;
  undefined1 *puVar8;
  int iVar9;
  int unaff_s3;
  int local_3c0;
  int local_3bc;
  undefined1 auStack_3b8 [4];
  int local_3b4;
  undefined1 auStack_3b0 [4];
  int local_3ac;
  undefined1 auStack_3a8 [64];
  undefined1 auStack_368 [256];
  undefined1 auStack_268 [32];
  undefined1 auStack_248 [224];
  undefined1 auStack_168 [304];
  int local_38;
  undefined1 *local_34;
  undefined *local_30;
  
  local_3c0 = 0;
  local_3bc = 0;
  iVar2 = (*(code *)PTR_calloc_00613a18)(0x20,1);
  *(int *)(param_2 + 0x10) = iVar2;
  if (iVar2 != 0) {
    iVar2 = (*(code *)PTR_calloc_00613a18)(0x20,1);
    *(int *)(param_2 + 0x14) = iVar2;
    if (iVar2 != 0) {
      iVar2 = (*(code *)PTR_calloc_00613a18)(0x20,1);
      *(int *)(param_2 + 0x18) = iVar2;
      if (iVar2 != 0) {
        iVar2 = (*(code *)PTR_calloc_00613a18)(0x20,1);
        *(int *)(param_2 + 0x1c) = iVar2;
        if (iVar2 != 0) {
          iVar2 = (*(code *)PTR_calloc_00613a18)(0x90,1);
          if (iVar2 != 0) {
            if (*(int *)(param_2 + 0x14) == 0) {
              uVar3 = (*(code *)PTR_calloc_00613a18)(0x20,1);
              *(undefined4 *)(param_2 + 0x14) = uVar3;
            }
            (*(code *)PTR_t_random_0061166c)(*(undefined4 *)(param_2 + 0x14),0x20);
            (*(code *)PTR_memset_0061223c)(&DAT_005ffb90,0,0x20);
            DAT_005ffb90 = 9;
            (*(code *)PTR_curve25519_donna_0061190c)
                      (*(undefined4 *)(param_2 + 0x10),*(undefined4 *)(param_2 + 0x14),&DAT_005ffb90
                      );
            (*(code *)PTR_curve25519_donna_0061190c)
                      (*(undefined4 *)(param_2 + 0x18),*(undefined4 *)(param_2 + 0x14),
                       *(undefined4 *)(param_2 + 0xc));
            uVar3 = (*(code *)PTR_Phytrex_HMGetAccessoryName_0061288c)();
            (*(code *)PTR_memcpy_006137d0)(auStack_268,*(undefined4 *)(param_2 + 0x10),0x20);
            uVar4 = (*(code *)PTR_strlen_006130b4)(uVar3);
            (*(code *)PTR_memcpy_006137d0)(auStack_248,uVar3,uVar4);
            local_34 = (undefined1 *)(*(code *)PTR_strlen_006130b4)(uVar3);
            (*(code *)PTR_memcpy_006137d0)
                      (auStack_268 + (int)local_34 + 0x20,*(undefined4 *)(param_2 + 0xc),0x20);
            (*(code *)PTR_memcpy_006137d0)(auStack_3a8,param_3 + 0xbd,0x40);
            iVar5 = (*(code *)PTR_crypto_sign_detached_006119a0)
                              (auStack_368,auStack_3b8,auStack_268);
            puVar8 = (undefined1 *)0x0;
            if (iVar5 == 0) {
              local_30 = PTR_s_Pair_Verify_Encrypt_Salt_005ffbcc;
              local_34 = (undefined1 *)
                         (*(code *)PTR_strlen_006130b4)(PTR_s_Pair_Verify_Encrypt_Salt_005ffbcc);
              puVar1 = PTR_s_Pair_Verify_Encrypt_Info_005ffbe8;
              uVar4 = (*(code *)PTR_strlen_006130b4)(PTR_s_Pair_Verify_Encrypt_Info_005ffbe8);
              iVar5 = (*(code *)PTR_hkdf_006121b4)
                                (4,local_30,local_34,*(undefined4 *)(param_2 + 0x18),0x20,puVar1,
                                 uVar4,*(undefined4 *)(param_2 + 0x1c),0x20);
              puVar8 = (undefined1 *)0x0;
              if (iVar5 == 0) {
                local_38 = (*(code *)PTR_strlen_006130b4)(uVar3);
                local_38 = local_3b4 + 4 + local_38;
                puVar8 = (undefined1 *)(*(code *)PTR_calloc_00613a18)(local_38,1);
                puVar1 = PTR_strlen_006130b4;
                if (puVar8 == (undefined1 *)0x0) {
LAB_00426364:
                  iVar5 = -0x1a48;
                }
                else {
                  *puVar8 = 1;
                  uVar7 = (*(code *)puVar1)(uVar3);
                  puVar8[1] = uVar7;
                  uVar4 = (*(code *)PTR_strlen_006130b4)(uVar3);
                  local_34 = puVar8 + 2;
                  (*(code *)PTR_memcpy_006137d0)(local_34,uVar3,uVar4);
                  iVar5 = (*(code *)PTR_strlen_006130b4)(uVar3);
                  puVar6 = local_34 + iVar5;
                  *puVar6 = 10;
                  puVar1 = PTR_memcpy_006137d0;
                  puVar6[1] = (char)local_3b4;
                  (*(code *)puVar1)(puVar6 + 2,auStack_368,local_3b4);
                  iVar5 = (*(code *)PTR_crypto_aead_chacha20poly1305_encrypt_006129a4)
                                    (auStack_168,auStack_3b0,puVar8);
                  if (iVar5 == 0) {
                    (*(code *)PTR_free_006119dc)(puVar8);
                    iVar9 = local_3ac + 0x27;
                    puVar8 = (undefined1 *)(*(code *)PTR_calloc_00613a18)(iVar9,1);
                    if (puVar8 == (undefined1 *)0x0) goto LAB_00426364;
                    *puVar8 = 6;
                    puVar8[2] = 2;
                    puVar8[1] = 1;
                    puVar8[3] = 3;
                    puVar8[4] = 0x20;
                    (*(code *)PTR_memcpy_006137d0)(puVar8 + 5,*(undefined4 *)(param_2 + 0x10),0x20);
                    puVar8[0x25] = 5;
                    puVar1 = PTR_memcpy_006137d0;
                    puVar8[0x26] = (char)local_3ac;
                    (*(code *)puVar1)(puVar8 + 0x27,auStack_168,local_3ac);
                    iVar5 = (*(code *)PTR_CreateSimpleHTTPMessageNoCopy_00612314)
                                      ("application/pairing+tlv8",iVar9,&local_3c0,&local_3bc);
                    if (iVar5 == 0) {
                      unaff_s3 = (*(code *)PTR_calloc_00613a18)(iVar9 + local_3bc,1);
                      (*(code *)PTR_memcpy_006137d0)(unaff_s3,local_3c0,local_3bc);
                      (*(code *)PTR_memcpy_006137d0)(unaff_s3 + local_3bc,puVar8,iVar9);
                      iVar5 = (*(code *)PTR_SocketSend_00611f3c)(param_1,unaff_s3,iVar9 + local_3bc)
                      ;
                      if (iVar5 == 0) {
                        *(undefined4 *)(param_2 + 4) = 3;
                      }
                    }
                  }
                }
              }
            }
            local_34 = (undefined1 *)iVar5;
            (*(code *)PTR_free_006119dc)(iVar2);
            goto LAB_004262d0;
          }
        }
      }
    }
  }
  puVar8 = (undefined1 *)0x0;
  local_34 = (undefined1 *)0xffffe5b8;
LAB_004262d0:
  if (unaff_s3 != 0) {
    (*(code *)PTR_free_006119dc)(unaff_s3);
  }
  if (puVar8 != (undefined1 *)0x0) {
    (*(code *)PTR_free_006119dc)(puVar8);
  }
  if (local_3c0 != 0) {
    (*(code *)PTR_free_006119dc)();
  }
  return (int)local_34;
}


/* FUN_00426388 @ 00426388 */

int FUN_00426388(int param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint unaff_s1;
  uint uVar3;
  char local_5a0;
  undefined1 local_59f [3];
  undefined1 *local_59c;
  undefined4 local_598;
  uint local_594;
  undefined4 local_590 [2];
  undefined1 auStack_588 [4];
  int local_584;
  undefined1 auStack_580 [32];
  undefined1 auStack_560 [100];
  undefined1 auStack_4fc [100];
  undefined1 auStack_498 [300];
  undefined1 auStack_36c [300];
  undefined1 auStack_240 [32];
  undefined1 auStack_220 [480];
  undefined1 *local_40;
  uint *local_3c;
  undefined1 **local_38;
  undefined1 **local_34;
  char *local_30;
  byte *local_2c;
  
  local_59c = *(undefined1 **)(param_1 + 0x104);
  local_40 = local_59c + *(int *)(param_1 + 0x10c);
  local_3c = &local_594;
  local_38 = &local_59c;
  local_34 = (undefined1 **)auStack_498;
  uVar3 = 0;
  while( true ) {
    iVar1 = (*(code *)PTR_TLVGetNext_00612f0c)
                      (local_59c,local_40,&local_5a0,&local_598,local_3c,local_38);
    if (iVar1 != 0) {
      iVar1 = (*(code *)PTR_crypto_aead_chacha20poly1305_decrypt_00612b8c)
                        (auStack_36c,auStack_588,0,auStack_498,0,uVar3,0);
      if (iVar1 != 0) {
        return iVar1;
      }
      local_38 = (undefined1 **)&local_594;
      local_40 = auStack_36c + local_584;
      local_34 = &local_59c;
      local_59c = auStack_36c;
      local_3c = &local_598;
      local_30 = &local_5a0;
      while( true ) {
        do {
          while( true ) {
            iVar1 = (*(code *)PTR_TLVGetNext_00612f0c)
                              (local_59c,local_40,local_30,local_3c,local_38,local_34);
            if (iVar1 != 0) {
              (*(code *)PTR_memcpy_006137d0)(auStack_240,*(undefined4 *)(param_2 + 0xc),0x20);
              (*(code *)PTR_memcpy_006137d0)(auStack_220,auStack_560,unaff_s1);
              uVar3 = unaff_s1 + 0x20 & 0xff;
              (*(code *)PTR_memcpy_006137d0)
                        (auStack_240 + uVar3,*(undefined4 *)(param_2 + 0x10),0x20);
              iVar1 = (*(code *)PTR_Phytrex_HMSearchLTPK_00611ba4)
                                (auStack_560,auStack_580,local_590);
              if (iVar1 == 0) {
                iVar1 = (*(code *)PTR_Phytrex_HMGetPairListPermission_00611bd8)
                                  (local_590[0],local_59f);
                if (iVar1 == 0) {
                  *(undefined1 *)(param_4 + 4) = local_59f[0];
                }
                iVar1 = (*(code *)PTR_crypto_sign_ed25519_verify_detached_00612ce0)
                                  (auStack_4fc,auStack_240,0,uVar3 + 0x20 & 0xff,auStack_580);
                if (iVar1 == 0) {
                  uVar2 = (*(code *)PTR_pthread_self_00612614)();
                  (*(code *)PTR_pthread_list_updateControllerName_006117a4)(uVar2,auStack_560);
                }
              }
              return iVar1;
            }
            if (local_5a0 != '\x01') break;
            (*(code *)PTR_memset_0061223c)(auStack_560,0,100);
            (*(code *)PTR_memcpy_006137d0)(auStack_560,local_598,local_594);
            unaff_s1 = local_594 & 0xff;
          }
        } while (local_5a0 != '\n');
        if (local_594 != 0x40) break;
        (*(code *)PTR_memset_0061223c)(auStack_4fc,0,100);
        (*(code *)PTR_memcpy_006137d0)(auStack_4fc,local_598,local_594);
      }
      return 0;
    }
    local_2c = (byte *)(*(code *)PTR_calloc_00613a18)(local_594 + 1,1);
    if (local_2c == (byte *)0x0) break;
    (*(code *)PTR_memcpy_006137d0)(local_2c,local_598,local_594);
    if (local_5a0 == '\x05') {
      (*(code *)PTR_memcpy_006137d0)(local_34,local_598,local_594);
      uVar3 = local_594;
      if (local_594 == 0) {
        return -0x1a51;
      }
    }
    else if (local_5a0 == '\x06') {
      if (*(uint *)(param_2 + 4) != (uint)*local_2c) {
        return -0x1a51;
      }
      (*(code *)PTR_free_006119dc)(local_2c);
    }
  }
  return -0x1a48;
}


/* HKPairVerifyEngine @ 00426790 */

int HKPairVerifyEngine(undefined4 param_1,int param_2,undefined1 *param_3,undefined4 param_4,
                      undefined4 param_5)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined4 uVar7;
  undefined1 *puVar8;
  char local_48 [4];
  int local_44;
  int local_40;
  int local_3c;
  int *local_38;
  byte *local_34;
  undefined *local_30;
  
  if (param_3 == (undefined1 *)0x0) {
    return -0x1a59;
  }
  if (*(int *)(param_3 + 4) == 1) {
    local_44 = *(int *)(param_2 + 0x104);
    local_38 = &local_3c;
    iVar5 = local_44 + *(int *)(param_2 + 0x10c);
    while (iVar4 = (*(code *)PTR_TLVGetNext_00612f0c)
                             (local_44,iVar5,local_48,local_38,&local_40,&local_44), iVar4 == 0) {
      local_34 = (byte *)(*(code *)PTR_calloc_00613a18)(local_40 + 1,1);
      if (local_34 == (byte *)0x0) {
        local_34 = (byte *)0xffffe5b8;
        goto LAB_00426b84;
      }
      (*(code *)PTR_memcpy_006137d0)(local_34,local_3c,local_40);
      if (local_48[0] == '\x03') {
        *(byte **)(param_3 + 0xc) = local_34;
      }
      else if (local_48[0] == '\x06') {
        if (*(uint *)(param_3 + 4) != (uint)*local_34) {
          local_34 = (byte *)0xffffe5af;
          goto LAB_00426b84;
        }
        (*(code *)PTR_free_006119dc)(local_34);
      }
    }
    *(undefined4 *)(param_3 + 4) = 2;
    local_34 = (byte *)FUN_00425d78(param_1,param_3,param_4);
    goto LAB_00426b7c;
  }
  if (*(int *)(param_3 + 4) != 3) {
    return -0x1a35;
  }
  iVar5 = FUN_00426388(param_2,param_3,param_4,param_5);
  if (iVar5 != 0) {
    *(undefined4 *)(param_3 + 4) = 1;
    return iVar5;
  }
  local_40 = 0;
  local_3c = 0;
  puVar6 = (undefined1 *)(*(code *)PTR_calloc_00613a18)(3,1);
  puVar3 = PTR_calloc_00613a18;
  if (puVar6 == (undefined1 *)0x0) {
LAB_00426bbc:
    iVar5 = -0x1a48;
LAB_00426bc0:
    local_34 = (byte *)iVar5;
    if (puVar6 != (undefined1 *)0x0) goto LAB_00426b3c;
  }
  else {
    *puVar6 = 6;
    puVar6[2] = 4;
    *param_3 = 1;
    puVar6[1] = 1;
    iVar5 = (*(code *)puVar3)(0x20,1);
    *(int *)(param_3 + 0x20) = iVar5;
    if (iVar5 == 0) goto LAB_00426bbc;
    local_30 = PTR_s_Control_Salt_005ffbdc;
    local_34 = (byte *)(*(code *)PTR_strlen_006130b4)(PTR_s_Control_Salt_005ffbdc);
    puVar3 = PTR_s_Control_Read_Encryption_Key_005ffbf8;
    uVar7 = (*(code *)PTR_strlen_006130b4)(PTR_s_Control_Read_Encryption_Key_005ffbf8);
    iVar5 = (*(code *)PTR_hkdf_006121b4)
                      (4,local_30,local_34,*(undefined4 *)(param_3 + 0x18),0x20,puVar3,uVar7,iVar5,
                       0x20);
    if (iVar5 != 0) goto LAB_00426bc0;
    iVar5 = (*(code *)PTR_calloc_00613a18)(0x20,1);
    *(int *)(param_3 + 0x24) = iVar5;
    if (iVar5 == 0) goto LAB_00426bbc;
    local_30 = PTR_s_Control_Salt_005ffbd8;
    local_34 = (byte *)(*(code *)PTR_strlen_006130b4)(PTR_s_Control_Salt_005ffbd8);
    puVar3 = PTR_s_Control_Write_Encryption_Key_005ffbf4;
    uVar7 = (*(code *)PTR_strlen_006130b4)(PTR_s_Control_Write_Encryption_Key_005ffbf4);
    iVar5 = (*(code *)PTR_hkdf_006121b4)
                      (4,local_30,local_34,*(undefined4 *)(param_3 + 0x18),0x20,puVar3,uVar7,iVar5,
                       0x20);
    if ((iVar5 != 0) ||
       (iVar5 = (*(code *)PTR_CreateSimpleHTTPMessageNoCopy_00612314)
                          ("application/pairing+tlv8",3,&local_40,&local_3c), iVar5 != 0))
    goto LAB_00426bc0;
    iVar5 = (*(code *)PTR_calloc_00613a18)(local_3c + 3,1);
    (*(code *)PTR_memcpy_006137d0)(iVar5,local_40,local_3c);
    puVar3 = PTR_SocketSend_00611f3c;
    uVar1 = *puVar6;
    uVar2 = puVar6[1];
    puVar8 = (undefined1 *)(iVar5 + local_3c);
    puVar8[2] = puVar6[2];
    *puVar8 = uVar1;
    puVar8[1] = uVar2;
    local_34 = (byte *)(*(code *)puVar3)(param_1,iVar5,local_3c + 3);
    if (iVar5 != 0) {
      (*(code *)PTR_free_006119dc)(iVar5);
    }
LAB_00426b3c:
    (*(code *)PTR_free_006119dc)(puVar6);
  }
  if (local_40 != 0) {
    (*(code *)PTR_free_006119dc)();
  }
LAB_00426b7c:
  if (local_34 != (byte *)0x0) {
LAB_00426b84:
    *(undefined4 *)(param_3 + 4) = 1;
  }
  return (int)local_34;
}


/* FUN_00426bd0 @ 00426bd0 */

/* WARNING: Removing unreachable block (ram,0x00426d38) */
/* WARNING: Removing unreachable block (ram,0x00426f88) */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

int FUN_00426bd0(undefined4 param_1,int param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  byte bVar5;
  undefined1 *puVar4;
  undefined *puVar6;
  int extraout_v1;
  int iVar7;
  int extraout_v1_00;
  uint uVar8;
  int unaff_s1;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  uint uVar14;
  longlong lVar15;
  int local_6d8;
  int local_6d4;
  int local_6d0;
  int local_6cc;
  int local_6c8;
  undefined *local_6c4;
  uint local_6c0;
  uint local_6bc;
  undefined1 auStack_6b8 [20];
  undefined1 auStack_6a4 [36];
  undefined1 auStack_680 [96];
  undefined1 auStack_620 [1520];
  undefined4 local_30;
  undefined *local_2c;
  
  local_6d8 = 0;
  local_6d4 = 0;
  local_6d0 = 0;
  local_6c8 = 0;
  *(undefined4 *)(param_2 + 0x28) = 0;
  if (*(int *)(param_2 + 0x18) == 0) {
    iVar2 = (*(code *)PTR_calloc_00613a18)(0x40,1);
    puVar9 = (undefined1 *)0x0;
    *(int *)(param_2 + 0x18) = iVar2;
    if (iVar2 != 0) goto LAB_00426c4c;
  }
  else {
LAB_00426c4c:
    puVar6 = PTR_SRP_compute_key_0061364c;
    puVar9 = *(undefined1 **)(param_2 + 0x18);
    puVar9[3] = 0;
    *puVar9 = 0;
    puVar9[1] = 0;
    puVar9[2] = 0;
    (*(code *)puVar6)(*(undefined4 *)(param_2 + 0x20),param_2 + 0x28,*(undefined4 *)(param_2 + 8),
                      *(undefined4 *)(param_2 + 0xc));
    puVar6 = PTR_calloc_00613a18;
    *(undefined4 *)(*(int *)(param_2 + 4) + 0x4c) = *(undefined4 *)(*(int *)(param_2 + 0x28) + 4);
    iVar2 = *(int *)(param_2 + 4);
    uVar3 = (*(code *)puVar6)(*(undefined4 *)(iVar2 + 0x4c),1);
    *(undefined4 *)(iVar2 + 0x48) = uVar3;
    (*(code *)PTR_memcpy_006137d0)
              (*(undefined4 *)(*(int *)(param_2 + 4) + 0x48),**(undefined4 **)(param_2 + 0x28),
               *(undefined4 *)(*(int *)(param_2 + 4) + 0x4c));
    iVar2 = (*(code *)PTR_SRP_verify_006130bc)
                      (*(undefined4 *)(param_2 + 0x20),*(undefined4 *)(param_2 + 0x10),
                       *(undefined4 *)(param_2 + 0x14));
    puVar6 = PTR_strlen_006130b4;
    if ((iVar2 == 0) && (DAT_006147b0 < 100)) {
      puVar9 = *(undefined1 **)(param_2 + 0x18);
      puVar9[3] = 0;
      *puVar9 = 0;
      puVar9[1] = 0;
      puVar9[2] = 0;
      local_2c = PTR_s_Pair_Setup_Encrypt_Salt_005ffbc4;
      local_30 = (*(code *)puVar6)(PTR_s_Pair_Setup_Encrypt_Salt_005ffbc4);
      puVar6 = PTR_s_Pair_Setup_Encrypt_Info_005ffbe0;
      iVar2 = *(int *)(param_2 + 4);
      uVar3 = (*(code *)PTR_strlen_006130b4)(PTR_s_Pair_Setup_Encrypt_Info_005ffbe0);
      (*(code *)PTR_hkdf_006121b4)
                (4,local_2c,local_30,*(undefined4 *)(iVar2 + 0x48),*(undefined4 *)(iVar2 + 0x4c),
                 puVar6,uVar3,*(undefined4 *)(param_2 + 0x18),0x20);
      local_2c = PTR_s_MFi_Pair_Setup_Salt_005ffbc8;
      local_30 = (*(code *)PTR_strlen_006130b4)(PTR_s_MFi_Pair_Setup_Salt_005ffbc8);
      puVar6 = PTR_s_MFi_Pair_Setup_Info_005ffbe4;
      iVar2 = *(int *)(param_2 + 4);
      uVar3 = (*(code *)PTR_strlen_006130b4)(PTR_s_MFi_Pair_Setup_Info_005ffbe4);
      puVar10 = auStack_6a4;
      iVar2 = (*(code *)PTR_hkdf_006121b4)
                        (4,local_2c,local_30,*(undefined4 *)(iVar2 + 0x48),
                         *(undefined4 *)(iVar2 + 0x4c),puVar6,uVar3,auStack_6a4,0x20);
      if (iVar2 == 0) {
        (*(code *)PTR_SHA1_Init_compat_00613adc)(auStack_680);
        (*(code *)PTR_SHA1_Update_compat_006126c4)(auStack_680,auStack_6a4,0x20);
        (*(code *)PTR_SHA1_Final_compat_006128c8)(auStack_6b8,auStack_680);
        iVar2 = (*(code *)PTR_MFiAuthCreateSignature_006119b0)
                          (auStack_6b8,0x14,&local_6d0,&local_6cc);
        if ((iVar2 == 0) &&
           (iVar2 = (*(code *)PTR_MFiAuthCopyCertificate_00613804)(&local_6c8,&local_6c4),
           iVar2 == 0)) {
          (*(code *)PTR_SRP_respond_00613ab0)(*(undefined4 *)(param_2 + 0x20),param_2 + 0x28);
          *(undefined4 *)(*(int *)(param_2 + 4) + 0x5c) =
               *(undefined4 *)(*(int *)(param_2 + 0x28) + 4);
          uVar14 = (uint)local_6c4 / 0xff;
          if ((uint)local_6c4 % 0xff != 0) {
            uVar14 = uVar14 + 1;
          }
          puVar13 = local_6c4 + uVar14 * 2 + local_6cc + 2;
          puVar9 = (undefined1 *)(*(code *)PTR_calloc_00613a18)(puVar13,1);
          puVar6 = PTR_memcpy_006137d0;
          if (puVar9 != (undefined1 *)0x0) {
            *puVar9 = 10;
            puVar9[1] = (char)local_6cc;
            (*(code *)puVar6)(puVar9 + 2,local_6d0);
            puVar12 = (undefined *)0x0;
            puVar4 = puVar9 + 2 + local_6cc;
            puVar6 = (undefined *)0xff;
            uVar3 = 9;
            while( true ) {
              puVar1 = PTR_memcpy_006137d0;
              if (local_6c4 <= puVar12) break;
              *puVar4 = (char)uVar3;
              puVar11 = local_6c4 + -(int)puVar12;
              if ((undefined *)0xff < local_6c4 + -(int)puVar12) {
                puVar11 = puVar6;
              }
              puVar4[1] = (char)puVar11;
              local_30 = uVar3;
              local_2c = puVar6;
              (*(code *)puVar1)(puVar4 + 2,puVar12 + local_6c8,puVar11);
              puVar12 = puVar12 + (int)puVar11;
              puVar4 = puVar4 + 2 + (int)puVar11;
              puVar6 = local_2c;
              uVar3 = local_30;
            }
            iVar2 = (*(code *)PTR_crypto_aead_chacha20poly1305_encrypt_006129a4)
                              (auStack_620,&local_6c0,puVar9,uVar3,0,puVar13,0,puVar10,0,0,0,
                               PTR_s_PS_Msg04_005ffbfc,*(undefined4 *)(param_2 + 0x18));
            if (iVar2 != 0) goto LAB_00427304;
            (*(code *)PTR_free_006119dc)(puVar9);
            uVar8 = local_6bc;
            uVar14 = local_6c0;
            iVar2 = *(int *)(*(int *)(param_2 + 4) + 0x5c);
            lVar15 = (*(code *)PTR___umoddi3_00612b48)(local_6c0,local_6bc,0,0xff);
            if (lVar15 == 0) {
              (*(code *)PTR___udivdi3_00611abc)(uVar14,uVar8,0,0xff);
              iVar7 = extraout_v1_00;
            }
            else {
              (*(code *)PTR___udivdi3_00611abc)(uVar14,uVar8,0,0xff);
              iVar7 = extraout_v1 + 1;
            }
            iVar2 = iVar2 + 5 + uVar8 + iVar7 * 2;
            puVar9 = (undefined1 *)(*(code *)PTR_calloc_00613a18)(iVar2,1);
            if (puVar9 != (undefined1 *)0x0) {
              *puVar9 = 6;
              puVar9[1] = 1;
              puVar9[3] = 4;
              puVar9[2] = 4;
              puVar6 = PTR_memcpy_006137d0;
              iVar7 = *(int *)(param_2 + 4);
              uVar14 = 0;
              puVar9[4] = (char)*(undefined4 *)(iVar7 + 0x5c);
              (*(code *)puVar6)(puVar9 + 5,**(undefined4 **)(param_2 + 0x28),
                                *(undefined4 *)(iVar7 + 0x5c));
              puVar10 = puVar9 + 5 + *(int *)(*(int *)(param_2 + 4) + 0x5c);
              while( true ) {
                puVar6 = PTR_memcpy_006137d0;
                if ((local_6c0 == 0) && (local_6bc <= uVar14)) break;
                *puVar10 = 5;
                uVar8 = local_6bc - uVar14;
                if ((local_6c0 != local_6bc < uVar8) || (0xff < uVar8)) {
                  uVar8 = 0xff;
                }
                puVar10[1] = (char)uVar8;
                (*(code *)puVar6)(puVar10 + 2,auStack_620 + uVar14,uVar8);
                uVar14 = uVar14 + uVar8;
                puVar10 = puVar10 + 2 + uVar8;
              }
              DAT_005ffbb0 = 5;
              goto LAB_00427260;
            }
          }
          goto LAB_004272f8;
        }
      }
      puVar9 = (undefined1 *)0x0;
      goto LAB_00427304;
    }
    bVar5 = DAT_006147b0 + 1;
    if ((DAT_006147b0 < 100) && (DAT_006147b0 = bVar5, (uint)bVar5 % 3 == 0)) {
      (*(code *)PTR_sleep_006136a8)(3);
    }
    puVar9 = (undefined1 *)(*(code *)PTR_calloc_00613a18)(6,1);
    if (puVar9 != (undefined1 *)0x0) {
      *puVar9 = 6;
      puVar9[2] = 4;
      puVar9[3] = 7;
      puVar9[4] = 1;
      puVar9[5] = 2;
      puVar9[1] = 1;
      DAT_005ffbb0 = 1;
      iVar2 = 6;
LAB_00427260:
      (*(code *)PTR_CreateSimpleHTTPMessageNoCopy_00612314)
                ("application/pairing+tlv8",iVar2,&local_6d8,&local_6d4);
      unaff_s1 = (*(code *)PTR_calloc_00613a18)(iVar2 + local_6d4,1);
      (*(code *)PTR_memcpy_006137d0)(unaff_s1,local_6d8,local_6d4);
      (*(code *)PTR_memcpy_006137d0)(unaff_s1 + local_6d4,puVar9,iVar2);
      iVar2 = (*(code *)PTR_SocketSend_00611f3c)(param_1,unaff_s1,iVar2 + local_6d4);
      goto LAB_00427304;
    }
  }
LAB_004272f8:
  iVar2 = -0x1a48;
LAB_00427304:
  (*(code *)PTR_SRP_free_00611f54)(*(undefined4 *)(param_2 + 0x20));
  (*(code *)PTR_cstr_free_006125b4)(*(undefined4 *)(param_2 + 0x28));
  if (local_6c8 != 0) {
    (*(code *)PTR_free_006119dc)();
  }
  if (local_6d0 != 0) {
    (*(code *)PTR_free_006119dc)();
  }
  if (unaff_s1 != 0) {
    (*(code *)PTR_free_006119dc)(unaff_s1);
  }
  if (puVar9 != (undefined1 *)0x0) {
    (*(code *)PTR_free_006119dc)(puVar9);
  }
  if (local_6d8 != 0) {
    (*(code *)PTR_free_006119dc)();
  }
  return iVar2;
}


/* FUN_00427400 @ 00427400 */

int FUN_00427400(int param_1,int param_2,undefined4 param_3,int param_4)

{
  undefined *puVar1;
  byte *pbVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined1 *puVar8;
  int unaff_s0;
  int iVar9;
  char local_3c8 [4];
  int *local_3c4;
  undefined4 local_3c0;
  int local_3bc;
  undefined1 auStack_3b8 [4];
  int local_3b4;
  undefined1 auStack_3b0 [100];
  undefined1 auStack_34c [32];
  undefined1 auStack_32c [224];
  int aiStack_24c [129];
  undefined1 *local_48;
  int *local_44;
  undefined4 *local_40;
  int *local_3c;
  int **local_38;
  char *local_34;
  byte *local_30;
  undefined *local_2c;
  
  local_3c4 = *(int **)(param_1 + 0x104);
  local_48 = (undefined1 *)((int)local_3c4 + *(int *)(param_1 + 0x10c));
  local_44 = &local_3bc;
  iVar9 = 0;
  while (iVar3 = (*(code *)PTR_TLVGetNext_00612f0c)
                           (local_3c4,local_48,local_3c8,&local_3c0,local_44,&local_3c4),
        puVar1 = PTR_strlen_006130b4, iVar3 == 0) {
    if (local_3c8[0] == '\x05') {
      iVar9 = (*(code *)PTR_calloc_00613a18)(local_3bc,1);
      if (iVar9 == 0) {
        return -0x1a48;
      }
      (*(code *)PTR_memcpy_006137d0)(iVar9,local_3c0,local_3bc);
      unaff_s0 = local_3bc;
    }
    else if (local_3c8[0] == '\x06') {
      pbVar2 = (byte *)(*(code *)PTR_calloc_00613a18)(local_3bc,1);
      if (pbVar2 == (byte *)0x0) {
        puVar4 = (undefined1 *)0x0;
        iVar3 = -0x1a48;
        goto LAB_00427930;
      }
      local_30 = pbVar2;
      (*(code *)PTR_memcpy_006137d0)(pbVar2,local_3c0,local_3bc);
      if (DAT_005ffbb0 != *local_30) {
        puVar4 = (undefined1 *)0x0;
        iVar3 = -0x1a51;
        goto LAB_00427930;
      }
      (*(code *)PTR_free_006119dc)(local_30);
    }
  }
  puVar4 = *(undefined1 **)(param_2 + 0x18);
  puVar4[3] = 0;
  *puVar4 = 0;
  puVar4[1] = 0;
  puVar4[2] = 0;
  puVar4 = (undefined1 *)0x0;
  local_2c = PTR_s_Pair_Setup_Encrypt_Salt_005ffbc4;
  local_30 = (byte *)(*(code *)puVar1)(PTR_s_Pair_Setup_Encrypt_Salt_005ffbc4);
  puVar1 = PTR_s_Pair_Setup_Encrypt_Info_005ffbe0;
  iVar3 = *(int *)(param_2 + 4);
  uVar5 = (*(code *)PTR_strlen_006130b4)(PTR_s_Pair_Setup_Encrypt_Info_005ffbe0);
  uVar7 = *(undefined4 *)(param_2 + 0x18);
  (*(code *)PTR_hkdf_006121b4)
            (4,local_2c,local_30,*(undefined4 *)(iVar3 + 0x48),*(undefined4 *)(iVar3 + 0x4c),puVar1,
             uVar5,uVar7,0x20);
  iVar3 = (*(code *)PTR_crypto_aead_chacha20poly1305_decrypt_00612b8c)
                    (aiStack_24c,auStack_3b8,0,iVar9,0,unaff_s0,0,uVar7,0,0,PTR_s_PS_Msg05_005ffc00,
                     *(undefined4 *)(param_2 + 0x18));
  if (iVar3 == 0) {
    puVar4 = (undefined1 *)(*(code *)PTR_calloc_00613a18)(1,0xa1);
    iVar3 = -0x1a48;
    if (puVar4 != (undefined1 *)0x0) {
      iVar3 = (*(code *)PTR_Phytrex_HMReadPairList_0061283c)(puVar4,0);
      if (iVar3 == -0x1a48) {
        local_44 = (int *)((int)aiStack_24c + local_3b4);
        local_48 = auStack_3b0;
        local_38 = &local_3c4;
        local_3c4 = aiStack_24c;
        local_40 = &local_3c0;
        local_3c = &local_3bc;
        local_34 = local_3c8;
LAB_0042779c:
        iVar6 = (*(code *)PTR_TLVGetNext_00612f0c)
                          (local_3c4,local_44,local_34,local_40,local_3c,local_38);
        if (iVar6 == 0) {
          if (local_3c8[0] == '\x03') {
            iVar6 = 0x20;
            puVar8 = puVar4 + 0x40;
            if (local_3bc == 0x20) goto LAB_00427790;
          }
          else {
            if (local_3c8[0] != '\n') goto code_r0x0042770c;
            if (local_3bc == 0x40) {
              (*(code *)PTR_memset_0061223c)(local_48,0,100);
              puVar8 = local_48;
              iVar6 = local_3bc;
              goto LAB_00427790;
            }
          }
        }
        else {
          local_2c = PTR_s_Pair_Setup_Controller_Sign_Salt_005ffbd0;
          local_30 = (byte *)(*(code *)PTR_strlen_006130b4)
                                       (PTR_s_Pair_Setup_Controller_Sign_Salt_005ffbd0);
          puVar1 = PTR_s_Pair_Setup_Controller_Sign_Info_005ffbec;
          iVar3 = *(int *)(param_2 + 4);
          uVar5 = (*(code *)PTR_strlen_006130b4)(PTR_s_Pair_Setup_Controller_Sign_Info_005ffbec);
          (*(code *)PTR_hkdf_006121b4)
                    (4,local_2c,local_30,*(undefined4 *)(iVar3 + 0x48),*(undefined4 *)(iVar3 + 0x4c)
                     ,puVar1,uVar5,*(undefined4 *)(param_2 + 0x18),0x20);
          (*(code *)PTR_memcpy_006137d0)(auStack_34c,*(undefined4 *)(param_2 + 0x18),0x20);
          uVar5 = (*(code *)PTR_strlen_006130b4)(puVar4);
          (*(code *)PTR_memcpy_006137d0)(auStack_32c,puVar4,uVar5);
          iVar3 = (*(code *)PTR_strlen_006130b4)(puVar4);
          (*(code *)PTR_memcpy_006137d0)(auStack_34c + iVar3 + 0x20,puVar4 + 0x40,0x20);
          iVar3 = (*(code *)PTR_crypto_sign_ed25519_verify_detached_00612ce0)
                            (auStack_3b0,auStack_34c,0,iVar3 + 0x40,puVar4 + 0x40);
          puVar1 = PTR_Phytrex_HMUpdatePairList_0061247c;
          if (iVar3 == 0) {
            puVar4[0x60] = 1;
            iVar3 = (*(code *)puVar1)(puVar4,0);
            *(undefined1 *)(param_4 + 4) = 1;
            DAT_005ffbb0 = 6;
          }
        }
      }
    }
  }
LAB_00427930:
  if (iVar9 != 0) {
    (*(code *)PTR_free_006119dc)(iVar9);
  }
  if (puVar4 != (undefined1 *)0x0) {
    (*(code *)PTR_free_006119dc)(puVar4);
  }
  return iVar3;
code_r0x0042770c:
  if (local_3c8[0] == '\x01') {
    (*(code *)PTR_memset_0061223c)(puVar4,0,0x50);
    puVar8 = puVar4;
    iVar6 = local_3bc;
LAB_00427790:
    (*(code *)PTR_memcpy_006137d0)(puVar8,local_3c0,iVar6);
  }
  goto LAB_0042779c;
}


/* FUN_00427998 @ 00427998 */

int FUN_00427998(undefined4 param_1,int *param_2,int param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 uVar6;
  int iVar5;
  int iVar7;
  undefined1 *puVar8;
  int unaff_s5;
  int local_4b0;
  int local_4ac;
  undefined1 auStack_4a8 [4];
  int local_4a4;
  int local_4a0;
  int local_49c;
  undefined1 auStack_498 [32];
  undefined1 auStack_478 [32];
  undefined1 auStack_458 [224];
  undefined1 auStack_378 [300];
  undefined1 auStack_24c [516];
  undefined1 *local_48;
  undefined1 *local_44;
  int local_40;
  int local_3c;
  undefined4 local_38;
  undefined1 *local_34;
  undefined *local_30;
  
  local_4b0 = 0;
  local_4ac = 0;
  (*(code *)PTR_memset_0061223c)(auStack_24c,0,100);
  if (*(char *)(*param_2 + 0x1c) == '\0') {
    if (*(char *)(param_3 + 0xbc) == '\0') {
      iVar5 = (*(code *)PTR_crypto_sign_keypair_0061195c)(auStack_498,param_3 + 0xbd);
      if (iVar5 == 0) goto LAB_00427aa4;
    }
    else {
      (*(code *)PTR_memcpy_006137d0)(auStack_498,param_3 + 0xdd,0x20);
LAB_00427aa4:
      uVar3 = (*(code *)PTR_Phytrex_HMGetAccessoryName_0061288c)();
      local_30 = PTR_s_Pair_Setup_Accessory_Sign_Salt_005ffbd4;
      local_38 = (*(code *)PTR_strlen_006130b4)(PTR_s_Pair_Setup_Accessory_Sign_Salt_005ffbd4);
      puVar1 = PTR_s_Pair_Setup_Accessory_Sign_Info_005ffbf0;
      iVar5 = *param_2;
      iVar7 = *(int *)(iVar5 + 4);
      uVar4 = (*(code *)PTR_strlen_006130b4)(PTR_s_Pair_Setup_Accessory_Sign_Info_005ffbf0);
      iVar5 = (*(code *)PTR_hkdf_006121b4)
                        (4,local_30,local_38,*(undefined4 *)(iVar7 + 0x48),
                         *(undefined4 *)(iVar7 + 0x4c),puVar1,uVar4,*(undefined4 *)(iVar5 + 0x18),
                         0x20);
      if (iVar5 == 0) {
        (*(code *)PTR_memcpy_006137d0)(auStack_478,*(undefined4 *)(*param_2 + 0x18),0x20);
        local_48 = auStack_498;
        uVar4 = (*(code *)PTR_strlen_006130b4)(uVar3);
        (*(code *)PTR_memcpy_006137d0)(auStack_458,uVar3,uVar4);
        local_44 = auStack_378;
        iVar5 = (*(code *)PTR_strlen_006130b4)(uVar3);
        (*(code *)PTR_memcpy_006137d0)(auStack_478 + iVar5 + 0x20,local_48,0x20);
        iVar5 = (*(code *)PTR_crypto_sign_detached_006119a0)(local_44,&local_4a0,auStack_478);
        if ((iVar5 == 0) && (local_4a0 == 0)) {
          local_40 = local_49c;
          puVar2 = (undefined1 *)0x0;
          if (local_49c == 0x40) {
            iVar5 = (*(code *)PTR_strlen_006130b4)(uVar3);
            puVar2 = (undefined1 *)(*(code *)PTR_calloc_00613a18)(iVar5 + 0x66,1);
            puVar1 = PTR_strlen_006130b4;
            if (puVar2 != (undefined1 *)0x0) {
              *puVar2 = 1;
              uVar6 = (*(code *)puVar1)(uVar3);
              puVar2[1] = uVar6;
              iVar5 = -0x1a31;
              uVar4 = (*(code *)PTR_strlen_006130b4)(uVar3);
              local_34 = puVar2 + 2;
              (*(code *)PTR_memcpy_006137d0)(local_34,uVar3,uVar4);
              iVar7 = (*(code *)PTR_strlen_006130b4)(uVar3);
              puVar8 = local_34 + iVar7;
              *puVar8 = 3;
              puVar1 = PTR_memcpy_006137d0;
              puVar8[1] = 0x20;
              (*(code *)puVar1)(puVar8 + 2,local_48,0x20);
              puVar8[0x22] = 10;
              puVar1 = PTR_memcpy_006137d0;
              puVar8[0x23] = (char)local_40;
              (*(code *)puVar1)(puVar8 + 0x24,local_44,local_49c);
              local_30 = PTR_s_Pair_Setup_Encrypt_Salt_005ffbc4;
              local_38 = (*(code *)PTR_strlen_006130b4)(PTR_s_Pair_Setup_Encrypt_Salt_005ffbc4);
              iVar7 = *param_2;
              local_3c = *(int *)(iVar7 + 4);
              local_34 = PTR_s_Pair_Setup_Encrypt_Info_005ffbe0;
              uVar3 = (*(code *)PTR_strlen_006130b4)(PTR_s_Pair_Setup_Encrypt_Info_005ffbe0);
              (*(code *)PTR_hkdf_006121b4)
                        (4,local_30,local_38,*(undefined4 *)(local_3c + 0x48),
                         *(undefined4 *)(local_3c + 0x4c),local_34,uVar3,
                         *(undefined4 *)(iVar7 + 0x18),0x20);
              if (*(int *)(*param_2 + 0x18) == 0) goto LAB_00427ff8;
              iVar5 = (*(code *)PTR_crypto_aead_chacha20poly1305_encrypt_006129a4)
                                (auStack_24c,auStack_4a8,puVar2);
              if (iVar5 != 0) goto LAB_00427ff8;
              (*(code *)PTR_free_006119dc)(puVar2);
              iVar7 = local_4a4 + 5;
              puVar2 = (undefined1 *)(*(code *)PTR_calloc_00613a18)(iVar7,1);
              if (puVar2 != (undefined1 *)0x0) {
                puVar2[1] = 1;
                puVar2[2] = 6;
                puVar2[3] = 5;
                *puVar2 = 6;
                puVar1 = PTR_memcpy_006137d0;
                puVar2[4] = (char)local_4a4;
                (*(code *)puVar1)(puVar2 + 5,auStack_24c);
                goto LAB_00427e84;
              }
            }
          }
        }
        else {
          puVar2 = (undefined1 *)0x0;
        }
        goto LAB_00427ff4;
      }
    }
    puVar2 = (undefined1 *)0x0;
  }
  else {
    puVar2 = (undefined1 *)(*(code *)PTR_calloc_00613a18)(6,1);
    if (puVar2 != (undefined1 *)0x0) {
      puVar2[3] = 7;
      puVar2[2] = 6;
      puVar2[4] = 1;
      puVar2[5] = 4;
      *puVar2 = 6;
      puVar2[1] = 1;
      iVar7 = 6;
LAB_00427e84:
      DAT_005ffbb0 = 1;
      iVar5 = (*(code *)PTR_CreateSimpleHTTPMessageNoCopy_00612314)
                        ("application/pairing+tlv8",iVar7,&local_4b0,&local_4ac);
      if (iVar5 == 0) {
        unaff_s5 = (*(code *)PTR_calloc_00613a18)(iVar7 + local_4ac,1);
        (*(code *)PTR_memcpy_006137d0)(unaff_s5,local_4b0,local_4ac);
        (*(code *)PTR_memcpy_006137d0)(unaff_s5 + local_4ac,puVar2,iVar7);
        iVar5 = (*(code *)PTR_SocketSend_00611f3c)(param_1,unaff_s5,iVar7 + local_4ac);
        puVar1 = PTR_Phytrex_HMSaveAppConfig_00612da4;
        if (iVar5 == 0) {
          if (*(char *)(*param_2 + 0x1c) == '\0') {
            *(undefined1 *)(param_3 + 0xbc) = 1;
            (*(code *)puVar1)(param_3 + 0xbc);
            (*(code *)PTR_Phytrex_HMSavePairList_00611e3c)();
            iVar7 = (*(code *)PTR_Phytrex_HMPairListIsEmpty_00613bf8)();
            if (iVar7 == 0) {
              (*(code *)PTR_mdnsPhytrex_HomekitUpdate_006120d0)(&DAT_005ab5c4,"1");
            }
            else {
              (*(code *)PTR_mdnsPhytrex_HomekitUpdate_006120d0)(&DAT_005ab5c4,"0");
              DAT_006147b0 = 0;
            }
          }
          DAT_005ffbb0 = 1;
          HKCleanPairSetupInfo(param_2,param_3);
          *(undefined1 *)(param_3 + 0x110) = 0;
        }
      }
      goto LAB_00427ff8;
    }
LAB_00427ff4:
    iVar5 = -0x1a48;
  }
LAB_00427ff8:
  if (unaff_s5 != 0) {
    (*(code *)PTR_free_006119dc)(unaff_s5);
  }
  if (puVar2 != (undefined1 *)0x0) {
    (*(code *)PTR_free_006119dc)(puVar2);
  }
  if (local_4b0 != 0) {
    (*(code *)PTR_free_006119dc)();
  }
  return iVar5;
}


/* HKPairSetupEngine @ 00428084 */

/* WARNING: Removing unreachable block (ram,0x00428694) */
/* WARNING: Removing unreachable block (ram,0x00428570) */
/* WARNING: Removing unreachable block (ram,0x00428548) */
/* WARNING: Removing unreachable block (ram,0x0042860c) */
/* WARNING: Removing unreachable block (ram,0x004286bc) */

int HKPairSetupEngine(undefined4 param_1,int param_2,int *param_3,int param_4,undefined4 param_5)

{
  bool bVar1;
  undefined *puVar2;
  int iVar3;
  byte *pbVar4;
  undefined4 uVar5;
  int iVar6;
  undefined1 *puVar7;
  int iVar8;
  undefined1 uVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  int iVar12;
  char local_48 [4];
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int *local_34;
  char *local_30;
  byte *local_2c;
  
  if (DAT_005ffbb0 == 3) {
    local_44 = *(int *)(param_2 + 0x104);
    iVar3 = *param_3;
    local_30 = local_48;
    local_38 = local_44 + *(int *)(param_2 + 0x10c);
    local_34 = &local_40;
    while (iVar6 = (*(code *)PTR_TLVGetNext_00612f0c)
                             (local_44,local_38,local_30,local_34,&local_3c,&local_44), iVar6 == 0)
    {
      if (local_48[0] == '\x04') {
        if (*(int *)(iVar3 + 0x10) == 0) {
          iVar6 = (*(code *)PTR_calloc_00613a18)(local_3c,1);
          *(int *)(iVar3 + 0x10) = iVar6;
          if (iVar6 == 0) goto LAB_00428af4;
          (*(code *)PTR_memcpy_006137d0)(iVar6,local_40,local_3c);
          *(int *)(iVar3 + 0x14) = local_3c;
        }
        else {
          iVar6 = (*(code *)PTR_realloc_00613690)
                            (*(int *)(iVar3 + 0x10),*(int *)(iVar3 + 0x14) + local_3c);
          *(int *)(iVar3 + 0x10) = iVar6;
          if (iVar6 == 0) goto LAB_00428af4;
          (*(code *)PTR_memcpy_006137d0)(iVar6 + *(int *)(iVar3 + 0x14),local_40,local_3c);
          *(int *)(iVar3 + 0x14) = *(int *)(iVar3 + 0x14) + local_3c;
        }
      }
      else if (local_48[0] == '\x06') {
        local_2c = (byte *)(*(code *)PTR_calloc_00613a18)(local_3c,1);
        if (local_2c == (byte *)0x0) goto LAB_00428af4;
        (*(code *)PTR_memcpy_006137d0)(local_2c,local_40,local_3c);
        pbVar4 = (byte *)0xffffe5af;
        if (DAT_005ffbb0 != *local_2c) goto LAB_00428ab0;
        (*(code *)PTR_free_006119dc)(local_2c);
      }
      else if (local_48[0] == '\x03') {
        if (*(int *)(iVar3 + 8) == 0) {
          iVar6 = (*(code *)PTR_calloc_00613a18)(local_3c,1);
          *(int *)(iVar3 + 8) = iVar6;
          if (iVar6 == 0) goto LAB_00428af4;
          (*(code *)PTR_memcpy_006137d0)(iVar6,local_40,local_3c);
          *(int *)(iVar3 + 0xc) = local_3c;
        }
        else {
          iVar6 = (*(code *)PTR_realloc_00613690)
                            (*(int *)(iVar3 + 8),*(int *)(iVar3 + 0xc) + local_3c);
          *(int *)(iVar3 + 8) = iVar6;
          if (iVar6 == 0) goto LAB_00428af4;
          (*(code *)PTR_memcpy_006137d0)(iVar6 + *(int *)(iVar3 + 0xc),local_40,local_3c);
          *(int *)(iVar3 + 0xc) = *(int *)(iVar3 + 0xc) + local_3c;
        }
      }
    }
    DAT_005ffbb0 = 4;
    pbVar4 = (byte *)FUN_00426bd0(param_1,*param_3,param_4);
  }
  else if (DAT_005ffbb0 == 5) {
    pbVar4 = (byte *)FUN_00427400(param_2,*param_3,param_4,param_5);
    if (pbVar4 != (byte *)0x0) goto LAB_00428ab0;
    pbVar4 = (byte *)FUN_00427998(param_1,param_3,param_4);
  }
  else {
    if (DAT_005ffbb0 != 1) {
      return 0;
    }
    local_3c = *(int *)(param_2 + 0x104);
    local_38 = local_3c + *(int *)(param_2 + 0x10c);
    HKCleanPairSetupInfo(param_3,param_4);
    if (*param_3 == 0) {
      iVar3 = (*(code *)PTR_calloc_00613a18)(1,0x2c);
      *param_3 = iVar3;
      if (iVar3 == 0) {
LAB_00428af4:
        pbVar4 = (byte *)0xffffe5b8;
        goto LAB_00428ab0;
      }
    }
    *(undefined1 *)(param_4 + 0x110) = 1;
    while (iVar3 = (*(code *)PTR_TLVGetNext_00612f0c)
                             (local_3c,local_38,local_48,&local_44,&local_40,&local_3c), iVar3 == 0)
    {
      local_2c = (byte *)(*(code *)PTR_calloc_00613a18)(local_40 + 1,1);
      if (local_2c == (byte *)0x0) goto LAB_00428af4;
      (*(code *)PTR_memcpy_006137d0)(local_2c,local_44,local_40);
      if (((local_48[0] != '\0') && (local_48[0] == '\x06')) &&
         (pbVar4 = (byte *)0xffffe5af, DAT_005ffbb0 != *local_2c)) goto LAB_00428ab0;
      (*(code *)PTR_free_006119dc)(local_2c);
    }
    DAT_005ffbb0 = 2;
    iVar3 = *param_3;
    local_40 = 0;
    local_44 = 0;
    if (*(int *)(iVar3 + 4) == 0) {
      uVar5 = (*(code *)PTR_calloc_00613a18)(1,0x60);
      *(undefined4 *)(iVar3 + 4) = uVar5;
    }
    iVar6 = (*(code *)PTR_Phytrex_HMPairListIsEmpty_00613bf8)();
    if (iVar6 == 0) {
      if (DAT_006147b0 < 100) {
        **(undefined4 **)(iVar3 + 4) = 4;
        iVar8 = *(int *)(iVar3 + 4);
        iVar6 = (*(code *)PTR_strlen_006130b4)(PTR_s_Pair_Setup_005ffbc0);
        uVar5 = (*(code *)PTR_calloc_00613a18)(iVar6 + 2,1);
        *(undefined4 *)(iVar8 + 0x24) = uVar5;
        iVar6 = (*(code *)PTR_strlen_006130b4)(PTR_s_Pair_Setup_005ffbc0);
        (*(code *)PTR_memset_0061223c)(*(undefined4 *)(*(int *)(iVar3 + 4) + 0x24),0,iVar6 + 2);
        (*(code *)PTR_strcpy_006115d0)
                  (*(undefined4 *)(*(int *)(iVar3 + 4) + 0x24),PTR_s_Pair_Setup_005ffbc0);
        *(undefined4 *)(*(int *)(iVar3 + 4) + 0x2c) = 0x10;
        iVar6 = *(int *)(iVar3 + 4);
        uVar5 = (*(code *)PTR_calloc_00613a18)(*(undefined4 *)(iVar6 + 0x2c),1);
        *(undefined4 *)(iVar6 + 0x28) = uVar5;
        (*(code *)PTR_t_random_0061166c)
                  (*(undefined4 *)(*(int *)(iVar3 + 4) + 0x28),
                   *(undefined4 *)(*(int *)(iVar3 + 4) + 0x2c));
        (*(code *)PTR_SRP_initialize_library_00611b60)();
        *(undefined4 *)(*(int *)(iVar3 + 4) + 0x18) = 0x180;
        *(undefined **)(*(int *)(iVar3 + 4) + 0x14) = &DAT_005ac060;
        puVar2 = PTR_SRP6a_server_method_006126a8;
        *(undefined4 *)(*(int *)(iVar3 + 4) + 0x20) = 1;
        *(undefined **)(*(int *)(iVar3 + 4) + 0x1c) = &DAT_005ac1e0;
        uVar5 = (*(code *)puVar2)();
        uVar5 = (*(code *)PTR_SRP_new_00611ddc)(uVar5);
        *(undefined4 *)(iVar3 + 0x20) = uVar5;
        (*(code *)PTR_SRP_set_username_006120d8)(uVar5,*(undefined4 *)(*(int *)(iVar3 + 4) + 0x24));
        iVar6 = *(int *)(iVar3 + 4);
        (*(code *)PTR_SRP_set_params_00612e18)
                  (*(undefined4 *)(iVar3 + 0x20),*(undefined4 *)(iVar6 + 0x14),
                   *(undefined4 *)(iVar6 + 0x18),*(undefined4 *)(iVar6 + 0x1c),
                   *(undefined4 *)(iVar6 + 0x20),*(undefined4 *)(iVar6 + 0x28),
                   *(undefined4 *)(iVar6 + 0x2c));
        (*(code *)PTR_SRP_set_auth_password_00611ff0)(*(undefined4 *)(iVar3 + 0x20),DAT_006147b4);
        (*(code *)PTR_SRP_gen_pub_00612f58)(*(undefined4 *)(iVar3 + 0x20),iVar3 + 0x24);
        puVar2 = PTR_calloc_00613a18;
        *(undefined4 *)(*(int *)(iVar3 + 4) + 0x34) = *(undefined4 *)(*(int *)(iVar3 + 0x24) + 4);
        iVar6 = *(int *)(iVar3 + 4);
        uVar5 = (*(code *)puVar2)(*(undefined4 *)(iVar6 + 0x34),1);
        *(undefined4 *)(iVar6 + 0x30) = uVar5;
        (*(code *)PTR_memcpy_006137d0)
                  (*(undefined4 *)(*(int *)(iVar3 + 4) + 0x30),**(undefined4 **)(iVar3 + 0x24),
                   *(undefined4 *)(*(int *)(iVar3 + 4) + 0x34));
        iVar8 = *(int *)(*(int *)(iVar3 + 4) + 0x34);
        iVar6 = 3;
        iVar12 = iVar8 / 0xff;
        while (bVar1 = 0 < iVar12, iVar12 = iVar12 + -1, bVar1) {
          iVar6 = iVar6 + 0x101;
        }
        iVar6 = *(int *)(*(int *)(iVar3 + 4) + 0x2c) + 4 + iVar8 % 0xff + iVar6;
        puVar7 = (undefined1 *)(*(code *)PTR_calloc_00613a18)(iVar6,1);
        if (puVar7 != (undefined1 *)0x0) {
          *puVar7 = 6;
          puVar7[1] = 1;
          puVar7[3] = 2;
          puVar7[2] = 2;
          puVar2 = PTR_memcpy_006137d0;
          puVar7[4] = (char)*(undefined4 *)(*(int *)(iVar3 + 4) + 0x2c);
          (*(code *)puVar2)(puVar7 + 5,*(undefined4 *)(*(int *)(iVar3 + 4) + 0x28),
                            *(undefined4 *)(*(int *)(iVar3 + 4) + 0x2c));
          iVar12 = *(int *)(*(int *)(iVar3 + 4) + 0x34) / 0xff;
          puVar11 = puVar7 + 5 + *(int *)(*(int *)(iVar3 + 4) + 0x2c);
          for (iVar8 = 0; puVar2 = PTR_memcpy_006137d0, puVar10 = puVar11 + 2, iVar8 < iVar12;
              iVar8 = iVar8 + 1) {
            *puVar11 = 3;
            puVar11[1] = 0xff;
            puVar11 = puVar11 + 0x101;
            (*(code *)puVar2)(puVar10,*(int *)(*(int *)(iVar3 + 4) + 0x30) + iVar8 * 0xff,0xff);
          }
          *puVar11 = 3;
          puVar11[1] = (char)(*(int *)(*(int *)(iVar3 + 4) + 0x34) % 0xff);
          (*(code *)puVar2)(puVar10,*(int *)(*(int *)(iVar3 + 4) + 0x30) + iVar12 * 0xff,
                            *(int *)(*(int *)(iVar3 + 4) + 0x34) % 0xff);
          goto LAB_004286d4;
        }
      }
      else {
        puVar7 = (undefined1 *)(*(code *)PTR_calloc_00613a18)(6,1);
        if (puVar7 != (undefined1 *)0x0) {
          *puVar7 = 6;
          puVar7[2] = 2;
          puVar7[3] = 7;
          puVar7[4] = 1;
          uVar9 = 5;
          goto LAB_004282f4;
        }
      }
LAB_0042877c:
      iVar12 = 0;
      iVar8 = -0x1a48;
    }
    else {
      puVar7 = (undefined1 *)(*(code *)PTR_calloc_00613a18)(6,1);
      if (puVar7 == (undefined1 *)0x0) goto LAB_0042877c;
      *puVar7 = 6;
      puVar7[2] = 2;
      puVar7[3] = 7;
      puVar7[4] = 1;
      uVar9 = 4;
LAB_004282f4:
      puVar7[5] = uVar9;
      puVar7[1] = 1;
      iVar6 = 6;
LAB_004286d4:
      iVar8 = (*(code *)PTR_CreateSimpleHTTPMessageNoCopy_00612314)
                        ("application/pairing+tlv8",iVar6,&local_40,&local_44);
      iVar12 = 0;
      if (iVar8 == 0) {
        iVar12 = (*(code *)PTR_calloc_00613a18)(iVar6 + local_44,1);
        (*(code *)PTR_memcpy_006137d0)(iVar12,local_40,local_44);
        (*(code *)PTR_memcpy_006137d0)(iVar12 + local_44,puVar7,iVar6);
        iVar8 = (*(code *)PTR_SocketSend_00611f3c)(param_1,iVar12,iVar6 + local_44);
        if (iVar8 == 0) {
          DAT_005ffbb0 = 3;
        }
      }
    }
    local_2c = (byte *)iVar8;
    if (*(int *)(iVar3 + 0x24) != 0) {
      (*(code *)PTR_cstr_free_006125b4)();
    }
    if (puVar7 != (undefined1 *)0x0) {
      (*(code *)PTR_free_006119dc)(puVar7);
    }
    if (local_40 != 0) {
      (*(code *)PTR_free_006119dc)();
    }
    pbVar4 = local_2c;
    if (iVar12 != 0) {
      (*(code *)PTR_free_006119dc)(iVar12);
      pbVar4 = local_2c;
    }
  }
  if (pbVar4 == (byte *)0x0) {
    return 0;
  }
LAB_00428ab0:
  DAT_005ffbb0 = 1;
  local_2c = pbVar4;
  HKCleanPairSetupInfo(param_3,param_4);
  return (int)local_2c;
}


/* TLVGetNext @ 00428b10 */

undefined4
TLVGetNext(undefined1 *param_1,undefined1 *param_2,undefined1 *param_3,undefined4 *param_4,
          uint *param_5,undefined4 *param_6)

{
  byte bVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  
  uVar2 = 0xffffe5b9;
  if (1 < (uint)((int)param_2 - (int)param_1)) {
    bVar1 = param_1[1];
    puVar3 = param_1 + 2 + bVar1;
    uVar2 = 0xffffe5a2;
    if ((param_1 <= puVar3) && (puVar3 <= param_2)) {
      uVar2 = 0;
      *param_3 = *param_1;
      *param_4 = param_1 + 2;
      *param_5 = (uint)bVar1;
      if (param_6 != (undefined4 *)0x0) {
        *param_6 = puVar3;
      }
    }
  }
  return uVar2;
}


/* FUN_00428b70 @ 00428b70 */

void FUN_00428b70(void)

{
  if (DAT_006147c0 != 0) {
    (*(code *)PTR_free_006119dc)();
    DAT_006147c0 = 0;
  }
  DAT_006147c4 = 0;
  return;
}


/* FUN_00428bc8 @ 00428bc8 */

undefined4 FUN_00428bc8(void)

{
  longlong lVar1;
  int local_10;
  int local_c;
  
  (*(code *)PTR_clock_gettime_006138fc)(0,&local_10);
  lVar1 = (*(code *)PTR___udivdi3_00611abc)(local_c >> 0x1f,local_c,0,10000000);
  return (int)((ulonglong)((longlong)local_10 * 100 + lVar1) >> 0x20);
}


/* FUN_00428c44 @ 00428c44 */

undefined4
FUN_00428c44(undefined4 param_1,undefined1 param_2,undefined4 param_3,int param_4,int param_5,
            int param_6)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined1 local_res4 [12];
  
  iVar1 = -(param_4 + 0xfU & 0xfffffff8);
  local_res4[0] = param_2;
  lVar7 = FUN_00428bc8();
  if (DAT_006147c8 == 0 && DAT_006147cc == 0) {
    DAT_006147cc = 100;
    DAT_006147c8 = 0;
  }
  lVar7 = lVar7 + CONCAT44(DAT_006147c8,DAT_006147cc);
  uVar6 = (uint)lVar7;
  uVar5 = (uint)((ulonglong)lVar7 >> 0x20);
  if (param_5 == 0) {
    (&stack0xffffffc8)[iVar1] = local_res4[0];
    (*(code *)PTR_memcpy_006137d0)(&stack0xffffffc9 + iVar1,param_3,param_4);
    iVar4 = 1;
    while (iVar2 = (*(code *)PTR_write_00612898)(param_1,&stack0xffffffc8 + iVar1,param_4 + 1),
          iVar2 != param_4 + 1) {
      (*(code *)PTR_usleep_006137e0)(5000);
      uVar8 = FUN_00428bc8();
      uVar3 = (uint)((ulonglong)uVar8 >> 0x20);
      if ((uVar5 <= uVar3) && ((uVar5 != uVar3 || (uVar6 <= (uint)uVar8)))) goto LAB_00428e50;
      iVar4 = iVar4 + 1;
    }
  }
  else {
    iVar4 = 1;
    while (iVar1 = (*(code *)PTR_write_00612898)(param_1,local_res4,1), iVar1 != 1) {
      (*(code *)PTR_usleep_006137e0)(5000);
      uVar8 = FUN_00428bc8();
      uVar3 = (uint)((ulonglong)uVar8 >> 0x20);
      if ((uVar5 <= uVar3) && ((uVar5 != uVar3 || (uVar6 <= (uint)uVar8)))) goto LAB_00428e50;
      iVar4 = iVar4 + 1;
    }
    iVar4 = 1;
    while (iVar1 = (*(code *)PTR_read_00612ef0)(param_1,param_5,param_6), iVar1 != param_6) {
      (*(code *)PTR_usleep_006137e0)(5000);
      uVar8 = FUN_00428bc8();
      uVar3 = (uint)((ulonglong)uVar8 >> 0x20);
      if ((uVar5 <= uVar3) && ((uVar5 != uVar3 || (uVar6 <= (uint)uVar8)))) {
LAB_00428e50:
        (*(code *)PTR_printf_0061185c)
                  ("### MFi auth register 0x%02X failed after %d tries: %d\n",local_res4[0],iVar4,
                   0xffffe5d4);
        return 0xffffe5d4;
      }
      iVar4 = iVar4 + 1;
    }
  }
  return 0;
}


/* MFiAuthCopyCertificate @ 00428eac */

int MFiAuthCopyCertificate(int *param_1,uint *param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  ushort local_28 [6];
  
  if (DAT_006147c4 == 0) {
    iVar1 = (*(code *)PTR_open_006138f8)("/dev/mfi_cp",2);
    if (iVar1 < 0) {
      piVar2 = (int *)(*(code *)PTR___errno_location_0061397c)();
      iVar5 = *piVar2;
      if (iVar5 == 0) {
        iVar5 = -0x1a2c;
      }
    }
    else {
      iVar5 = FUN_00428c44(iVar1,0x30,0,0,local_28,2);
      if (iVar5 == 0) {
        uVar4 = (uint)local_28[0];
        iVar5 = -0x1a57;
        if (uVar4 != 0) {
          iVar5 = -0x1a48;
          iVar3 = (*(code *)PTR_malloc_006132d8)(uVar4);
          if (iVar3 != 0) {
            iVar5 = FUN_00428c44(iVar1,0x31,0,0,iVar3,uVar4);
            if (iVar5 == 0) {
              (*(code *)PTR_printf_0061185c)("MFi auth copy certificate done: %d bytes\n",uVar4);
              *param_1 = iVar3;
              *param_2 = uVar4;
            }
            else {
              (*(code *)PTR_free_006119dc)(iVar3);
            }
          }
        }
      }
      (*(code *)PTR_close_0061276c)(iVar1);
      if (iVar5 == 0) {
        return 0;
      }
    }
  }
  else {
    iVar1 = (*(code *)PTR_malloc_006132d8)(DAT_006147c4);
    if (iVar1 != 0) {
      (*(code *)PTR_memcpy_006137d0)(iVar1,DAT_006147c0,DAT_006147c4);
      *param_1 = iVar1;
      *param_2 = DAT_006147c4;
      return 0;
    }
    iVar5 = -0x1a48;
  }
  (*(code *)PTR_printf_0061185c)("### MFi auth copy certificate failed: %d\n",iVar5);
  return iVar5;
}


/* MFiAuthCreateSignature @ 004290d4 */

int MFiAuthCreateSignature(undefined4 param_1,int param_2,int *param_3,uint *param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  ushort local_40;
  undefined1 auStack_3e [34];
  
  iVar1 = (*(code *)PTR_open_006138f8)("/dev/mfi_cp",2);
  if (iVar1 < 0) {
    piVar2 = (int *)(*(code *)PTR___errno_location_0061397c)();
    iVar5 = *piVar2;
    if (iVar5 == 0) {
      iVar5 = -0x1a2c;
    }
  }
  else {
    if (param_2 == 0x14) {
      local_40 = 0x14;
      (*(code *)PTR_memcpy_006137d0)(auStack_3e,param_1,0x14);
      iVar5 = FUN_00428c44(iVar1,0x20,&local_40,0x16,0,0);
      if (iVar5 == 0) {
        local_40 = CONCAT11(1,(undefined1)local_40);
        iVar5 = FUN_00428c44(iVar1,0x10,&local_40,1,0,0);
        if ((((iVar5 == 0) && (iVar5 = FUN_00428c44(iVar1,0x10,0,0,&local_40,1), iVar5 == 0)) &&
            (iVar5 = -0x1a2c, -1 < (short)local_40)) &&
           (iVar5 = FUN_00428c44(iVar1,0x11,0,0,&local_40,2), iVar5 == 0)) {
          uVar4 = (uint)local_40;
          iVar5 = -0x1a57;
          if (uVar4 != 0) {
            iVar5 = -0x1a48;
            iVar3 = (*(code *)PTR_malloc_006132d8)(uVar4);
            if (iVar3 != 0) {
              iVar5 = FUN_00428c44(iVar1,0x12,0,0,iVar3,uVar4);
              if (iVar5 == 0) {
                (*(code *)PTR_printf_0061185c)
                          ("MFi auth created signature:%p, len=%d\n",iVar3,uVar4);
                *param_3 = iVar3;
                *param_4 = uVar4;
              }
              else {
                (*(code *)PTR_free_006119dc)(iVar3);
              }
            }
          }
        }
      }
    }
    else {
      iVar5 = -0x1a57;
    }
    (*(code *)PTR_close_0061276c)(iVar1);
    if (iVar5 == 0) {
      return 0;
    }
  }
  (*(code *)PTR_printf_0061185c)("### MFi auth create signature failed: %d\n",iVar5);
  return iVar5;
}


/* FUN_004293c4 @ 004293c4 */

uint FUN_004293c4(undefined4 param_1)

{
  uint uVar1;
  undefined1 auStack_a0 [156];
  
  uVar1 = (*(code *)PTR_stat_00613028)(param_1,auStack_a0);
  return ~uVar1 >> 0x1f;
}


/* SHA1_Init_compat @ 00429400 */

void SHA1_Init_compat(undefined4 *param_1)

{
  param_1[2] = 0x67452301;
  param_1[3] = 0xefcdab89;
  param_1[4] = 0x98badcfe;
  param_1[5] = 0x10325476;
  param_1[6] = 0xc3d2e1f0;
  *param_1 = 0;
  param_1[7] = 0;
  param_1[1] = 0;
  return;
}


/* FUN_00429454 @ 00429454 */

void FUN_00429454(int param_1,byte *param_2)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint local_150 [80];
  
  puVar1 = local_150;
  puVar2 = puVar1;
  do {
    *puVar2 = (uint)*param_2 << 0x18 | (uint)param_2[1] << 0x10 | (uint)param_2[3] |
              (uint)param_2[2] << 8;
    puVar2 = puVar2 + 1;
    param_2 = param_2 + 4;
  } while (puVar2 != local_150 + 0x10);
  uVar11 = *(uint *)(param_1 + 8);
  uVar6 = *(uint *)(param_1 + 0xc);
  uVar5 = *(uint *)(param_1 + 0x10);
  uVar4 = *(uint *)(param_1 + 0x14);
  uVar3 = *(uint *)(param_1 + 0x18);
  puVar2 = local_150 + 0xd;
  do {
    uVar7 = puVar2[-5] ^ *puVar2 ^ puVar2[-0xb] ^ puVar2[-0xd];
    puVar2[3] = uVar7 >> 0x1f | uVar7 << 1;
    puVar2 = puVar2 + 1;
  } while (puVar2 != local_150 + 0x4d);
  uVar7 = uVar11;
  do {
    uVar9 = uVar6 << 0x1e | uVar6 >> 2;
    uVar6 = *puVar1 + 0x5a827999 + uVar3 + (uVar7 >> 0x1b | uVar7 << 5) +
            ((uVar4 ^ uVar5) & uVar6 ^ uVar4);
    uVar8 = uVar7 << 0x1e | uVar7 >> 2;
    uVar7 = puVar1[1] + 0x5a827999 + uVar4 + ((uVar9 ^ uVar5) & uVar7 ^ uVar5) +
            (uVar6 >> 0x1b | uVar6 * 0x20);
    uVar3 = uVar6 * 0x40000000 | uVar6 >> 2;
    uVar5 = puVar1[2] + 0x5a827999 + uVar5 + (uVar6 & (uVar8 ^ uVar9) ^ uVar9) +
            (uVar7 >> 0x1b | uVar7 * 0x20);
    puVar2 = puVar1 + 4;
    uVar4 = uVar7 * 0x40000000 | uVar7 >> 2;
    uVar6 = puVar1[3] + 0x5a827999 + uVar9 + ((uVar3 ^ uVar8) & uVar7 ^ uVar8) +
            (uVar5 >> 0x1b | uVar5 * 0x20);
    puVar1 = puVar1 + 5;
    uVar7 = *puVar2 + 0x5a827999 + uVar8 + ((uVar4 ^ uVar3) & uVar5 ^ uVar3) +
            (uVar6 >> 0x1b | uVar6 * 0x20);
    uVar5 = uVar5 * 0x40000000 | uVar5 >> 2;
  } while (puVar1 != local_150 + 0x14);
  puVar2 = local_150 + 0x14;
  do {
    uVar10 = *puVar2 + 0x6ed9eba1 + uVar3 + (uVar7 >> 0x1b | uVar7 << 5) + (uVar5 ^ uVar6 ^ uVar4);
    uVar9 = uVar6 << 0x1e | uVar6 >> 2;
    uVar8 = uVar7 << 0x1e | uVar7 >> 2;
    uVar6 = puVar2[1] + 0x6ed9eba1 + uVar4 + (uVar5 ^ uVar7 ^ uVar9) +
            (uVar10 >> 0x1b | uVar10 * 0x20);
    uVar3 = uVar10 * 0x40000000 | uVar10 >> 2;
    uVar5 = puVar2[2] + 0x6ed9eba1 + uVar5 + (uVar8 ^ uVar9 ^ uVar10) +
            (uVar6 >> 0x1b | uVar6 * 0x20);
    puVar1 = puVar2 + 4;
    uVar4 = uVar6 * 0x40000000 | uVar6 >> 2;
    uVar6 = puVar2[3] + 0x6ed9eba1 + uVar9 + (uVar3 ^ uVar8 ^ uVar6) +
            (uVar5 >> 0x1b | uVar5 * 0x20);
    puVar2 = puVar2 + 5;
    uVar7 = *puVar1 + 0x6ed9eba1 + uVar8 + (uVar4 ^ uVar3 ^ uVar5) + (uVar6 >> 0x1b | uVar6 * 0x20);
    uVar5 = uVar5 * 0x40000000 | uVar5 >> 2;
  } while (puVar2 != local_150 + 0x28);
  puVar2 = local_150 + 0x28;
  while( true ) {
    uVar9 = uVar6 << 0x1e | uVar6 >> 2;
    uVar8 = uVar7 << 0x1e | uVar7 >> 2;
    if (puVar2 == local_150 + 0x3c) break;
    uVar10 = *puVar2 + 0x8f1bbcdc + uVar3 + (uVar7 >> 0x1b | uVar7 << 5) +
             ((uVar5 | uVar6) & uVar4 | uVar5 & uVar6);
    uVar6 = puVar2[1] + 0x8f1bbcdc + uVar4 + ((uVar9 | uVar7) & uVar5 | uVar9 & uVar7) +
            (uVar10 >> 0x1b | uVar10 * 0x20);
    uVar3 = uVar10 * 0x40000000 | uVar10 >> 2;
    uVar5 = puVar2[2] + 0x8f1bbcdc + uVar5 + (uVar6 >> 0x1b | uVar6 * 0x20) +
            ((uVar10 | uVar8) & uVar9 | uVar10 & uVar8);
    uVar4 = uVar6 * 0x40000000 | uVar6 >> 2;
    uVar6 = puVar2[3] + 0x8f1bbcdc + uVar9 + ((uVar6 | uVar3) & uVar8 | uVar6 & uVar3) +
            (uVar5 >> 0x1b | uVar5 * 0x20);
    uVar7 = puVar2[4] + 0x8f1bbcdc + uVar8 + (uVar6 >> 0x1b | uVar6 * 0x20) +
            ((uVar5 | uVar4) & uVar3 | uVar5 & uVar4);
    uVar5 = uVar5 * 0x40000000 | uVar5 >> 2;
    puVar2 = puVar2 + 5;
  }
  puVar2 = local_150 + 0x3c;
  while( true ) {
    uVar8 = uVar6 << 0x1e | uVar6 >> 2;
    uVar9 = uVar7 << 0x1e | uVar7 >> 2;
    if (puVar2 == (uint *)&stack0xfffffff0) break;
    uVar6 = *puVar2 + 0xca62c1d6 + uVar3 + (uVar7 >> 0x1b | uVar7 << 5) + (uVar5 ^ uVar6 ^ uVar4);
    uVar7 = puVar2[1] + 0xca62c1d6 + uVar4 + (uVar5 ^ uVar7 ^ uVar8) +
            (uVar6 >> 0x1b | uVar6 * 0x20);
    uVar3 = uVar6 * 0x40000000 | uVar6 >> 2;
    uVar5 = puVar2[2] + 0xca62c1d6 + uVar5 + (uVar9 ^ uVar8 ^ uVar6) +
            (uVar7 >> 0x1b | uVar7 * 0x20);
    uVar4 = uVar7 * 0x40000000 | uVar7 >> 2;
    uVar6 = puVar2[3] + 0xca62c1d6 + uVar8 + (uVar3 ^ uVar9 ^ uVar7) +
            (uVar5 >> 0x1b | uVar5 * 0x20);
    uVar7 = puVar2[4] + 0xca62c1d6 + uVar9 + (uVar4 ^ uVar3 ^ uVar5) +
            (uVar6 >> 0x1b | uVar6 * 0x20);
    uVar5 = uVar5 * 0x40000000 | uVar5 >> 2;
    puVar2 = puVar2 + 5;
  }
  *(uint *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + uVar3;
  *(uint *)(param_1 + 8) = uVar7 + uVar11;
  *(uint *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + uVar6;
  *(uint *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + uVar5;
  *(uint *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + uVar4;
  return;
}


/* FUN_00429a04 @ 00429a04 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00429a04(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = DAT_005ac624;
  uVar1 = DAT_005ac620;
  param_1[0x12] = 0;
  param_1[3] = uVar2;
  param_1[2] = uVar1;
  uVar1 = DAT_005ac628;
  param_1[5] = DAT_005ac62c;
  param_1[4] = uVar1;
  uVar1 = DAT_005ac630;
  param_1[7] = DAT_005ac634;
  param_1[6] = uVar1;
  uVar1 = DAT_005ac638;
  param_1[9] = DAT_005ac63c;
  param_1[8] = uVar1;
  uVar1 = DAT_005ac640;
  param_1[0xb] = DAT_005ac644;
  param_1[10] = uVar1;
  uVar1 = DAT_005ac648;
  param_1[0xd] = DAT_005ac64c;
  param_1[0xc] = uVar1;
  uVar1 = DAT_005ac650;
  param_1[0xf] = DAT_005ac654;
  param_1[0xe] = uVar1;
  uVar1 = DAT_005ac658;
  param_1[0x11] = _DAT_005ac65c;
  param_1[0x10] = uVar1;
  param_1[1] = 0;
  *param_1 = 0;
  return;
}


/* FUN_00429abc @ 00429abc */

void FUN_00429abc(int param_1,byte *param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  uint *puVar6;
  int *piVar7;
  uint *puVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  undefined4 uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  int iVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint local_328 [177];
  uint local_64;
  uint local_60;
  uint local_5c;
  uint local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  
  iVar23 = 0;
  do {
    uVar13 = *(undefined4 *)(param_1 + iVar23 + 8);
    iVar5 = iVar23 + 8;
    *(undefined4 *)((int)local_328 + iVar23 + 4) = *(undefined4 *)(param_1 + iVar23 + 0xc);
    *(undefined4 *)((int)local_328 + iVar23) = uVar13;
    iVar23 = iVar5;
  } while (iVar5 != 0x40);
  puVar6 = local_328 + 0x10;
  puVar8 = puVar6;
  do {
    bVar1 = param_2[4];
    bVar2 = param_2[7];
    bVar3 = param_2[5];
    bVar4 = param_2[6];
    *puVar8 = (uint)*param_2 << 0x18 | (uint)param_2[1] << 0x10 | (uint)param_2[2] << 8 |
              (uint)param_2[3];
    puVar8[1] = (uint)bVar2 | (uint)bVar1 << 0x18 | (uint)bVar3 << 0x10 | (uint)bVar4 << 8;
    puVar8 = puVar8 + 2;
    param_2 = param_2 + 8;
  } while (puVar8 != local_328 + 0x30);
  puVar8 = local_328 + 0x2c;
  do {
    uVar10 = *puVar8;
    uVar12 = puVar8[1];
    uVar9 = puVar8[-0x1a];
    uVar11 = puVar8[-0x19];
    uVar15 = puVar8[-0x1b] + puVar8[-9];
    uVar14 = uVar15 + ((uVar10 >> 0x1d | uVar12 << 3) ^ (uVar10 << 0xd | uVar12 >> 0x13) ^
                      (uVar10 << 0x1a | uVar12 >> 6));
    uVar16 = uVar14 + ((uVar9 << 0x18 | uVar11 >> 8) ^ (uVar9 << 0x1f | uVar11 >> 1) ^
                      (uVar9 << 0x19 | uVar11 >> 7));
    puVar8[4] = (uint)(uVar16 < uVar14) +
                (uint)(uVar14 < uVar15) +
                (uint)(uVar15 < puVar8[-0x1b]) + puVar8[-0x1c] + puVar8[-10] +
                ((uVar12 >> 0x1d | uVar10 << 3) ^ (uVar12 << 0xd | uVar10 >> 0x13) ^ uVar10 >> 6) +
                ((uVar11 << 0x18 | uVar9 >> 8) ^ (uVar11 << 0x1f | uVar9 >> 1) ^ uVar9 >> 7);
    puVar8[5] = uVar16;
    puVar8 = puVar8 + 2;
  } while (puVar8 != local_328 + 0xac);
  piVar7 = &DAT_005ac3a0;
  do {
    local_328[0xb0] = local_328[9] >> 0x12;
    uVar10 = puVar6[1] + piVar7[1];
    uVar9 = uVar10 + local_328[0xf];
    local_40 = local_328[0] << 4 | local_328[1] >> 0x1c;
    local_4c = local_328[3] | local_328[1];
    local_48 = local_328[0] >> 7 | local_328[1] << 0x19;
    uVar11 = (local_328[3] | local_328[1]) & local_328[5] | local_328[3] & local_328[1];
    local_5c = local_328[1] >> 2 | local_328[0] << 0x1e;
    local_44 = local_328[1] << 4 | local_328[0] >> 0x1c;
    local_54 = (uint)(uVar9 < uVar10) +
               (uint)(uVar10 < puVar6[1]) + *puVar6 + *piVar7 + local_328[0xe] +
               ((local_328[9] << 0xe | local_328[8] >> 0x12) ^
                (local_328[9] << 0x12 | local_328[8] >> 0xe) ^
               (local_328[9] >> 9 | local_328[8] << 0x17));
    local_58 = (local_328[0] >> 2 | local_328[1] << 0x1e) ^ local_40;
    local_50 = (local_328[0xd] ^ local_328[0xb]) & local_328[9];
    local_64 = local_5c ^ local_44;
    uVar14 = uVar9 + ((local_328[8] << 0xe | local_328[9] >> 0x12) ^
                      (local_328[8] << 0x12 | local_328[9] >> 0xe) ^
                     (local_328[8] >> 9 | local_328[9] << 0x17));
    uVar10 = uVar14 + (local_50 ^ local_328[0xd]);
    local_328[0xb0] = (uVar14 < uVar9) + local_54;
    local_60 = (uint)(uVar10 < uVar14);
    uVar12 = uVar11 + (local_58 ^ local_48);
    iVar23 = (uint)(uVar10 < uVar14) +
             local_328[0xb0] + ((local_328[0xc] ^ local_328[10]) & local_328[8] ^ local_328[0xc]);
    uVar19 = uVar12 + uVar10;
    uVar9 = uVar10 + local_328[7];
    local_60 = (uint)(uVar19 < uVar12) +
               (uint)(uVar12 < uVar11) +
               ((local_328[2] | local_328[0]) & local_328[4] | local_328[2] & local_328[0]) +
               (local_64 ^ (local_328[1] >> 7 | local_328[0] << 0x19)) + iVar23;
    uVar10 = (uint)(uVar9 < uVar10) + iVar23 + local_328[6];
    uVar12 = puVar6[3] + piVar7[3];
    uVar11 = uVar12 + local_328[0xd];
    local_40 = uVar9 & (local_328[0xb] ^ local_328[9]) ^ local_328[0xb];
    local_44 = uVar10 & (local_328[10] ^ local_328[8]);
    local_3c = uVar19 | local_328[1];
    local_38 = uVar19 >> 2 | local_60 * 0x40000000;
    local_34 = uVar19 * 0x10 | local_60 >> 0x1c;
    local_4c = uVar10 >> 9 | uVar9 * 0x800000;
    local_58 = uVar9 * 0x40000 | uVar10 >> 0xe;
    local_30 = local_60 >> 7 | uVar19 * 0x2000000;
    local_50 = (uVar10 * 0x4000 | uVar9 >> 0x12) ^ (uVar10 * 0x40000 | uVar9 >> 0xe);
    uVar15 = (uVar19 | local_328[1]) & local_328[3] | uVar19 & local_328[1];
    local_48 = (local_60 >> 2 | uVar19 * 0x40000000) ^ (local_60 * 0x10 | uVar19 >> 0x1c);
    local_328[0xb0] =
         (uint)(uVar11 < uVar12) +
         (uint)(uVar12 < puVar6[3]) + puVar6[2] + piVar7[2] + local_328[0xc] +
         (local_44 ^ local_328[10]);
    local_40 = uVar11 + local_40;
    local_5c = (uVar9 * 0x4000 | uVar10 >> 0x12) ^ local_58;
    local_54 = local_60 | local_328[0];
    local_64 = local_50 ^ local_4c;
    uVar12 = uVar15 + (local_48 ^ local_30);
    local_64 = local_40 + local_64;
    iVar23 = (uint)(local_64 < local_40) +
             (local_40 < uVar11) + local_328[0xb0] + (local_5c ^ (uVar9 >> 9 | uVar10 * 0x800000));
    uVar17 = uVar12 + local_64;
    uVar14 = puVar6[5] + piVar7[5];
    uVar11 = local_64 + local_328[5];
    uVar24 = (uint)(uVar17 < uVar12) +
             (uint)(uVar12 < uVar15) +
             ((local_60 | local_328[0]) & local_328[2] | local_60 & local_328[0]) +
             (local_38 ^ local_34 ^ (uVar19 >> 7 | local_60 * 0x2000000)) + iVar23;
    uVar12 = (uint)(uVar11 < local_64) + iVar23 + local_328[4];
    uVar15 = uVar14 + local_328[0xb];
    local_40 = uVar11 & (uVar9 ^ local_328[9]) ^ local_328[9];
    local_44 = uVar12 & (uVar10 ^ local_328[8]);
    local_58 = uVar11 * 0x40000 | uVar12 >> 0xe;
    local_50 = (uVar12 * 0x4000 | uVar11 >> 0x12) ^ (uVar12 * 0x40000 | uVar11 >> 0xe);
    local_48 = (uVar24 >> 2 | uVar17 * 0x40000000) ^ (uVar24 * 0x10 | uVar17 >> 0x1c);
    local_3c = uVar17 | uVar19;
    local_4c = uVar12 >> 9 | uVar11 * 0x800000;
    local_34 = uVar17 * 0x10 | uVar24 >> 0x1c;
    local_38 = uVar17 >> 2 | uVar24 * 0x40000000;
    local_30 = uVar24 >> 7 | uVar17 * 0x2000000;
    local_54 = uVar24 | local_60;
    uVar25 = (uVar17 | uVar19) & local_328[1] | uVar17 & uVar19;
    local_328[0xb0] =
         (uint)(uVar15 < uVar14) +
         (uint)(uVar14 < puVar6[5]) + puVar6[4] + piVar7[4] + local_328[10] +
         (local_44 ^ local_328[8]);
    local_5c = (uVar11 * 0x4000 | uVar12 >> 0x12) ^ local_58;
    local_40 = uVar15 + local_40;
    local_64 = local_50 ^ local_4c;
    uVar21 = uVar25 + (local_48 ^ local_30);
    local_64 = local_40 + local_64;
    uVar14 = local_64 + local_328[3];
    iVar23 = (uint)(local_64 < local_40) +
             (local_40 < uVar15) + local_328[0xb0] + (local_5c ^ (uVar11 >> 9 | uVar12 * 0x800000));
    uVar16 = puVar6[7] + piVar7[7];
    uVar15 = (uint)(uVar14 < local_64) + iVar23 + local_328[2];
    uVar18 = uVar21 + local_64;
    uVar22 = (uint)(uVar18 < uVar21) +
             (uint)(uVar21 < uVar25) +
             ((uVar24 | local_60) & local_328[0] | uVar24 & local_60) +
             (local_38 ^ local_34 ^ (uVar17 >> 7 | uVar24 * 0x2000000)) + iVar23;
    uVar21 = uVar16 + local_328[9];
    local_44 = uVar15 & (uVar12 ^ uVar10);
    local_40 = uVar14 & (uVar11 ^ uVar9) ^ uVar9;
    local_3c = uVar18 | uVar17;
    local_38 = uVar18 >> 2 | uVar22 * 0x40000000;
    local_58 = uVar14 * 0x40000 | uVar15 >> 0xe;
    local_4c = uVar15 >> 9 | uVar14 * 0x800000;
    local_48 = (uVar22 >> 2 | uVar18 * 0x40000000) ^ (uVar22 * 0x10 | uVar18 >> 0x1c);
    local_34 = uVar18 * 0x10 | uVar22 >> 0x1c;
    local_54 = uVar22 | uVar24;
    uVar26 = (uVar18 | uVar17) & uVar19 | uVar18 & uVar17;
    local_50 = (uVar15 * 0x4000 | uVar14 >> 0x12) ^ (uVar15 * 0x40000 | uVar14 >> 0xe);
    local_328[0xb0] =
         (uint)(uVar21 < uVar16) + (uint)(uVar16 < puVar6[7]) + puVar6[6] + piVar7[6] + local_328[8]
         + (local_44 ^ uVar10);
    local_30 = uVar22 >> 7 | uVar18 * 0x2000000;
    local_5c = (uVar14 * 0x4000 | uVar15 >> 0x12) ^ local_58;
    local_40 = uVar21 + local_40;
    local_64 = local_50 ^ local_4c;
    local_64 = local_40 + local_64;
    uVar20 = uVar26 + (local_48 ^ local_30);
    uVar16 = local_64 + local_328[1];
    iVar23 = (uint)(local_64 < local_40) +
             (local_40 < uVar21) + local_328[0xb0] + (local_5c ^ (uVar14 >> 9 | uVar15 * 0x800000));
    uVar25 = puVar6[9] + piVar7[9];
    uVar21 = (uint)(uVar16 < local_64) + iVar23 + local_328[0];
    uVar27 = uVar20 + local_64;
    uVar20 = (uint)(uVar27 < uVar20) +
             (uint)(uVar20 < uVar26) +
             ((uVar22 | uVar24) & local_60 | uVar22 & uVar24) +
             (local_38 ^ local_34 ^ (uVar18 >> 7 | uVar22 * 0x2000000)) + iVar23;
    uVar9 = uVar25 + uVar9;
    local_44 = uVar21 & (uVar15 ^ uVar12);
    local_40 = uVar16 & (uVar14 ^ uVar11) ^ uVar11;
    local_58 = uVar16 * 0x40000 | uVar21 >> 0xe;
    local_3c = uVar27 | uVar18;
    local_4c = uVar21 >> 9 | uVar16 * 0x800000;
    local_38 = uVar27 >> 2 | uVar20 * 0x40000000;
    local_50 = (uVar21 * 0x4000 | uVar16 >> 0x12) ^ (uVar21 * 0x40000 | uVar16 >> 0xe);
    local_34 = uVar27 * 0x10 | uVar20 >> 0x1c;
    local_48 = (uVar20 >> 2 | uVar27 * 0x40000000) ^ (uVar20 * 0x10 | uVar27 >> 0x1c);
    local_30 = uVar20 >> 7 | uVar27 * 0x2000000;
    local_328[0xb0] =
         (uint)(uVar9 < uVar25) + (uint)(uVar25 < puVar6[9]) + puVar6[8] + piVar7[8] + uVar10 +
         (local_44 ^ uVar12);
    local_54 = uVar20 | uVar22;
    uVar26 = (uVar27 | uVar18) & uVar17 | uVar27 & uVar18;
    local_5c = (uVar16 * 0x4000 | uVar21 >> 0x12) ^ local_58;
    local_64 = local_50 ^ local_4c;
    local_40 = uVar9 + local_40;
    uVar25 = uVar26 + (local_48 ^ local_30);
    local_64 = local_40 + local_64;
    uVar10 = puVar6[0xb] + piVar7[0xb];
    local_328[0xf] = local_64 + uVar19;
    iVar23 = (uint)(local_64 < local_40) +
             (local_40 < uVar9) + local_328[0xb0] + (local_5c ^ (uVar16 >> 9 | uVar21 * 0x800000));
    local_328[7] = uVar25 + local_64;
    local_328[0xe] = (uint)(local_328[0xf] < local_64) + iVar23 + local_60;
    local_328[6] = (uint)(local_328[7] < uVar25) +
                   (uint)(uVar25 < uVar26) +
                   ((uVar20 | uVar22) & uVar24 | uVar20 & uVar22) +
                   (local_38 ^ local_34 ^ (uVar27 >> 7 | uVar20 * 0x2000000)) + iVar23;
    local_30 = local_328[6] * 0x10 | local_328[7] >> 0x1c;
    uVar11 = uVar10 + uVar11;
    local_44 = local_328[0xe] & (uVar21 ^ uVar15);
    local_40 = local_328[0xf] & (uVar16 ^ uVar14) ^ uVar14;
    local_3c = local_328[7] | uVar27;
    local_38 = local_328[7] >> 2 | local_328[6] * 0x40000000;
    local_4c = local_328[0xe] >> 9 | local_328[0xf] * 0x800000;
    local_34 = local_328[7] * 0x10 | local_328[6] >> 0x1c;
    local_50 = (local_328[0xe] * 0x4000 | local_328[0xf] >> 0x12) ^
               (local_328[0xe] * 0x40000 | local_328[0xf] >> 0xe);
    local_48 = (local_328[6] >> 2 | local_328[7] * 0x40000000) ^ local_30;
    local_40 = uVar11 + local_40;
    uVar9 = (local_328[7] | uVar27) & uVar18 | local_328[7] & uVar27;
    local_58 = (local_328[0xf] * 0x4000 | local_328[0xe] >> 0x12) ^
               (local_328[0xf] * 0x40000 | local_328[0xe] >> 0xe);
    local_328[0xb0] = local_50 ^ local_4c;
    local_54 = local_328[6] | uVar20;
    local_64 = local_48 ^ (local_328[6] >> 7 | local_328[7] * 0x2000000);
    local_60 = (uint)(local_40 < uVar11) +
               (uint)(uVar11 < uVar10) +
               (uint)(uVar10 < puVar6[0xb]) + puVar6[10] + piVar7[10] + uVar12 + (local_44 ^ uVar15)
    ;
    local_5c = local_58 ^ (local_328[0xf] >> 9 | local_328[0xe] * 0x800000);
    local_328[0xb0] = local_40 + local_328[0xb0];
    local_64 = uVar9 + local_64;
    local_328[0xd] = local_328[0xb0] + uVar17;
    iVar23 = (uint)(local_328[0xb0] < local_40) + local_60 + local_5c;
    local_328[5] = local_64 + local_328[0xb0];
    local_328[0xc] = (uint)(local_328[0xd] < local_328[0xb0]) + iVar23 + uVar24;
    uVar10 = puVar6[0xd] + piVar7[0xd];
    local_328[4] = (uint)(local_328[5] < local_64) +
                   (uint)(local_64 < uVar9) +
                   ((local_328[6] | uVar20) & uVar22 | local_328[6] & uVar20) +
                   (local_38 ^ local_34 ^ (local_328[7] >> 7 | local_328[6] * 0x2000000)) + iVar23;
    uVar14 = uVar10 + uVar14;
    local_30 = local_328[4] * 0x10 | local_328[5] >> 0x1c;
    local_44 = local_328[0xc] & (local_328[0xe] ^ uVar21);
    local_40 = local_328[0xd] & (local_328[0xf] ^ uVar16) ^ uVar16;
    local_3c = local_328[5] | local_328[7];
    local_50 = (local_328[0xc] * 0x4000 | local_328[0xd] >> 0x12) ^
               (local_328[0xc] * 0x40000 | local_328[0xd] >> 0xe);
    local_4c = local_328[0xc] >> 9 | local_328[0xd] * 0x800000;
    local_38 = local_328[5] >> 2 | local_328[4] * 0x40000000;
    local_34 = local_328[5] * 0x10 | local_328[4] >> 0x1c;
    local_40 = uVar14 + local_40;
    uVar9 = (local_328[5] | local_328[7]) & uVar27 | local_328[5] & local_328[7];
    local_48 = (local_328[4] >> 2 | local_328[5] * 0x40000000) ^ local_30;
    local_58 = (local_328[0xd] * 0x4000 | local_328[0xc] >> 0x12) ^
               (local_328[0xd] * 0x40000 | local_328[0xc] >> 0xe);
    local_328[0xb0] = local_50 ^ local_4c;
    local_54 = local_328[4] | local_328[6];
    local_64 = local_48 ^ (local_328[4] >> 7 | local_328[5] * 0x2000000);
    local_60 = (uint)(local_40 < uVar14) +
               (uint)(uVar14 < uVar10) +
               (uint)(uVar10 < puVar6[0xd]) + puVar6[0xc] + piVar7[0xc] + uVar15 +
               (local_44 ^ uVar21);
    local_5c = local_58 ^ (local_328[0xd] >> 9 | local_328[0xc] * 0x800000);
    local_328[0xb0] = local_40 + local_328[0xb0];
    local_64 = uVar9 + local_64;
    local_328[0xb] = local_328[0xb0] + uVar18;
    iVar23 = (uint)(local_328[0xb0] < local_40) + local_60 + local_5c;
    local_328[3] = local_64 + local_328[0xb0];
    local_328[10] = (uint)(local_328[0xb] < local_328[0xb0]) + iVar23 + uVar22;
    uVar10 = puVar6[0xf] + piVar7[0xf];
    local_328[2] = (uint)(local_328[3] < local_64) +
                   (uint)(local_64 < uVar9) +
                   ((local_328[4] | local_328[6]) & uVar20 | local_328[4] & local_328[6]) +
                   (local_38 ^ local_34 ^ (local_328[5] >> 7 | local_328[4] * 0x2000000)) + iVar23;
    uVar16 = uVar10 + uVar16;
    local_30 = local_328[2] * 0x10 | local_328[3] >> 0x1c;
    local_44 = local_328[10] & (local_328[0xc] ^ local_328[0xe]);
    local_50 = (local_328[10] * 0x4000 | local_328[0xb] >> 0x12) ^
               (local_328[10] * 0x40000 | local_328[0xb] >> 0xe);
    local_40 = local_328[0xb] & (local_328[0xd] ^ local_328[0xf]) ^ local_328[0xf];
    local_3c = local_328[3] | local_328[5];
    local_4c = local_328[10] >> 9 | local_328[0xb] * 0x800000;
    local_34 = local_328[3] * 0x10 | local_328[2] >> 0x1c;
    local_38 = local_328[3] >> 2 | local_328[2] * 0x40000000;
    local_40 = uVar16 + local_40;
    local_5c = local_328[2] >> 7 | local_328[3] * 0x2000000;
    uVar9 = (local_328[3] | local_328[5]) & local_328[7] | local_328[3] & local_328[5];
    local_48 = (local_328[2] >> 2 | local_328[3] * 0x40000000) ^ local_30;
    local_60 = (uint)(uVar16 < uVar10) +
               (uint)(uVar10 < puVar6[0xf]) + puVar6[0xe] + piVar7[0xe] + uVar21 +
               (local_44 ^ local_328[0xe]);
    local_58 = (local_328[0xb] * 0x4000 | local_328[10] >> 0x12) ^
               (local_328[0xb] * 0x40000 | local_328[10] >> 0xe);
    local_328[0xb0] = local_50 ^ local_4c;
    local_54 = local_328[2] | local_328[4];
    local_64 = local_48 ^ local_5c;
    local_328[0xb0] = local_40 + local_328[0xb0];
    local_64 = uVar9 + local_64;
    local_328[9] = local_328[0xb0] + uVar27;
    iVar23 = (uint)(local_328[0xb0] < local_40) +
             (local_40 < uVar16) + local_60 +
             (local_58 ^ (local_328[0xb] >> 9 | local_328[10] * 0x800000));
    local_328[1] = local_64 + local_328[0xb0];
    piVar7 = piVar7 + 0x10;
    local_328[8] = (uint)(local_328[9] < local_328[0xb0]) + iVar23 + uVar20;
    local_328[0] = (uint)(local_328[1] < local_64) +
                   (uint)(local_64 < uVar9) +
                   ((local_328[2] | local_328[4]) & local_328[6] | local_328[2] & local_328[4]) +
                   (local_38 ^ local_34 ^ (local_328[3] >> 7 | local_328[2] * 0x2000000)) + iVar23;
    puVar6 = puVar6 + 0x10;
  } while (piVar7 != &DAT_005ac620);
  puVar8 = local_328;
  do {
    uVar10 = *puVar8;
    uVar9 = *(uint *)(param_1 + 0xc) + puVar8[1];
    puVar8 = puVar8 + 2;
    *(uint *)(param_1 + 8) =
         (uint)(uVar9 < *(uint *)(param_1 + 0xc)) + *(int *)(param_1 + 8) + uVar10;
    *(uint *)(param_1 + 0xc) = uVar9;
    param_1 = param_1 + 8;
  } while (puVar8 != local_328 + 0x10);
  return;
}


/* FUN_0042b1b4 @ 0042b1b4 */

void FUN_0042b1b4(uint *param_1,byte *param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  uint uVar40;
  uint uVar41;
  uint uVar42;
  uint uVar43;
  uint uVar44;
  uint uVar45;
  uint uVar46;
  uint uVar47;
  uint uVar48;
  uint local_1a8;
  uint local_1a4;
  uint local_1a0;
  uint local_19c;
  uint local_198;
  uint local_194;
  uint local_190;
  uint local_184;
  uint local_180;
  uint local_17c;
  uint local_178;
  uint local_174;
  uint local_170;
  uint local_16c;
  uint local_168;
  uint local_164;
  uint local_160;
  uint local_144;
  uint local_140;
  uint local_13c;
  uint local_138;
  uint local_134;
  uint local_130;
  uint local_12c;
  uint local_128;
  uint local_124;
  uint local_120;
  uint local_11c;
  uint local_118;
  uint local_114;
  uint local_108;
  uint local_104;
  uint local_100;
  uint local_fc;
  uint local_f8;
  uint local_e8;
  
  local_e8 = *param_1 ^ CONCAT13(param_2[7],CONCAT12(param_2[6],CONCAT11(param_2[5],param_2[4])));
  local_160 = param_1[1] ^
              ((uint)param_2[1] << 8 | (uint)param_2[2] << 0x10 | (uint)*param_2 |
              (uint)param_2[3] << 0x18);
  local_138 = param_1[2] ^
              CONCAT13(param_2[0xf],CONCAT12(param_2[0xe],CONCAT11(param_2[0xd],param_2[0xc])));
  local_118 = param_1[4] ^
              CONCAT13(param_2[0x17],CONCAT12(param_2[0x16],CONCAT11(param_2[0x15],param_2[0x14])));
  uVar16 = param_1[3] ^
           ((uint)param_2[9] << 8 | (uint)param_2[10] << 0x10 | (uint)param_2[8] |
           (uint)param_2[0xb] << 0x18);
  local_114 = param_1[5] ^
              ((uint)param_2[0x11] << 8 | (uint)param_2[0x12] << 0x10 | (uint)param_2[0x10] |
              (uint)param_2[0x13] << 0x18);
  local_fc = param_1[6] ^
             CONCAT13(param_2[0x1f],CONCAT12(param_2[0x1e],CONCAT11(param_2[0x1d],param_2[0x1c])));
  local_f8 = param_1[7] ^
             ((uint)param_2[0x19] << 8 | (uint)param_2[0x1a] << 0x10 | (uint)param_2[0x18] |
             (uint)param_2[0x1b] << 0x18);
  local_104 = param_1[8] ^
              CONCAT13(param_2[0x27],CONCAT12(param_2[0x26],CONCAT11(param_2[0x25],param_2[0x24])));
  local_100 = param_1[9] ^
              ((uint)param_2[0x21] << 8 | (uint)param_2[0x22] << 0x10 | (uint)param_2[0x20] |
              (uint)param_2[0x23] << 0x18);
  local_11c = param_1[10] ^
              CONCAT13(param_2[0x2f],CONCAT12(param_2[0x2e],CONCAT11(param_2[0x2d],param_2[0x2c])));
  local_164 = param_1[0xb] ^
              ((uint)param_2[0x29] << 8 | (uint)param_2[0x2a] << 0x10 | (uint)param_2[0x28] |
              (uint)param_2[0x2b] << 0x18);
  local_178 = param_1[0xe] ^
              CONCAT13(param_2[0x3f],CONCAT12(param_2[0x3e],CONCAT11(param_2[0x3d],param_2[0x3c])));
  uVar18 = param_1[0xc] ^
           CONCAT13(param_2[0x37],CONCAT12(param_2[0x36],CONCAT11(param_2[0x35],param_2[0x34])));
  uVar42 = param_1[0xd] ^
           ((uint)param_2[0x31] << 8 | (uint)param_2[0x32] << 0x10 | (uint)param_2[0x30] |
           (uint)param_2[0x33] << 0x18);
  local_13c = param_1[0xf] ^
              ((uint)param_2[0x39] << 8 | (uint)param_2[0x3a] << 0x10 | (uint)param_2[0x38] |
              (uint)param_2[0x3b] << 0x18);
  local_124 = param_1[0x10] ^
              CONCAT13(param_2[0x47],CONCAT12(param_2[0x46],CONCAT11(param_2[0x45],param_2[0x44])));
  local_120 = param_1[0x11] ^
              ((uint)param_2[0x41] << 8 | (uint)param_2[0x42] << 0x10 | (uint)param_2[0x40] |
              (uint)param_2[0x43] << 0x18);
  local_144 = param_1[0x12];
  local_140 = param_1[0x13];
  local_190 = param_1[0x16];
  uVar20 = param_1[0x14];
  uVar22 = param_1[0x15];
  local_168 = param_1[0x17];
  local_108 = param_1[0x18];
  local_128 = param_1[0x19];
  local_16c = param_1[0x1a];
  local_12c = param_1[0x1b];
  local_198 = param_1[0x1c];
  local_194 = param_1[0x1d];
  local_134 = param_1[0x20];
  uVar46 = param_1[0x1e];
  uVar30 = param_1[0x1f];
  local_130 = param_1[0x21];
  local_174 = param_1[0x22];
  local_170 = param_1[0x23];
  local_19c = param_1[0x24];
  local_180 = param_1[0x26];
  uVar5 = param_1[0x25];
  local_17c = param_1[0x27];
  local_1a4 = param_1[0x2c];
  uVar24 = param_1[0x28];
  uVar13 = param_1[0x29];
  uVar28 = param_1[0x2a];
  uVar44 = param_1[0x2b];
  local_1a0 = param_1[0x2d];
  local_1a8 = param_1[0x2e];
  local_184 = param_1[0x2f];
  uVar7 = param_1[0x30];
  uVar14 = param_1[0x31];
  for (puVar1 = &DAT_005ac2e0; puVar1 != &DAT_005ac3a0; puVar1 = puVar1 + 2) {
    uVar2 = local_11c ^ local_e8 ^ uVar20 ^ uVar46 ^ uVar24;
    uVar11 = uVar18 ^ local_138 ^ local_190 ^ local_134 ^ uVar28;
    uVar9 = uVar42 ^ uVar16 ^ local_168 ^ local_130 ^ uVar44;
    uVar26 = local_144 ^ local_104 ^ local_198 ^ local_180 ^ uVar7;
    uVar40 = local_178 ^ local_118 ^ local_108 ^ local_174 ^ local_1a4;
    uVar3 = local_164 ^ local_160 ^ uVar22 ^ uVar30 ^ uVar13;
    uVar37 = local_13c ^ local_114 ^ local_128 ^ local_170 ^ local_1a0;
    uVar34 = local_120 ^ local_f8 ^ local_12c ^ uVar5 ^ local_184;
    uVar4 = local_140 ^ local_100 ^ local_194 ^ local_17c ^ uVar14;
    uVar36 = local_124 ^ local_fc ^ local_16c ^ local_19c ^ local_1a8;
    uVar12 = (uVar34 >> 0x1f | uVar36 << 1) ^ uVar11;
    uVar10 = (uVar36 >> 0x1f | uVar34 << 1) ^ uVar9;
    uVar41 = (uVar4 >> 0x1f | uVar26 << 1) ^ uVar40;
    uVar38 = (uVar26 >> 0x1f | uVar4 << 1) ^ uVar37;
    uVar36 = (uVar3 >> 0x1f | uVar2 << 1) ^ uVar36;
    uVar34 = (uVar2 >> 0x1f | uVar3 << 1) ^ uVar34;
    uVar26 = (uVar9 >> 0x1f | uVar11 << 1) ^ uVar26;
    uVar4 = (uVar11 >> 0x1f | uVar9 << 1) ^ uVar4;
    uVar2 = (uVar37 >> 0x1f | uVar40 << 1) ^ uVar2;
    uVar3 = (uVar40 >> 0x1f | uVar37 << 1) ^ uVar3;
    uVar45 = (uVar2 ^ uVar18) << 0xc | (uVar3 ^ uVar42) >> 0x14;
    uVar11 = (uVar3 ^ uVar42) << 0xc | (uVar2 ^ uVar18) >> 0x14;
    uVar42 = (uVar36 ^ local_144) >> 0xc | (uVar34 ^ local_140) << 0x14;
    uVar43 = (uVar12 ^ local_1a4) << 0x1d | (uVar10 ^ local_1a0) >> 3;
    uVar18 = (uVar34 ^ local_140) >> 0xc | (uVar36 ^ local_144) << 0x14;
    uVar15 = (uVar36 ^ local_198) << 7 | (uVar34 ^ local_194) >> 0x19;
    uVar37 = (uVar34 ^ local_194) << 7 | (uVar36 ^ local_198) >> 0x19;
    local_144 = (uVar10 ^ local_1a0) << 0x1d | (uVar12 ^ local_1a4) >> 3;
    local_194 = (uVar26 ^ uVar24) >> 0xe | (uVar4 ^ uVar13) << 0x12;
    uVar6 = (uVar12 ^ local_118) << 0x1e | (uVar10 ^ local_114) >> 2;
    local_198 = (uVar4 ^ uVar13) >> 0xe | (uVar26 ^ uVar24) << 0x12;
    uVar24 = (uVar10 ^ local_114) << 0x1e | (uVar12 ^ local_118) >> 2;
    local_114 = (uVar12 ^ local_108) << 0xb | (uVar10 ^ local_128) >> 0x15;
    local_118 = (uVar10 ^ local_128) << 0xb | (uVar12 ^ local_108) >> 0x15;
    uVar19 = (uVar34 ^ local_17c) >> 0x18 | (uVar36 ^ local_180) << 8;
    uVar21 = (uVar41 ^ local_16c) >> 7 | (uVar38 ^ local_12c) << 0x19;
    uVar23 = (uVar38 ^ local_12c) >> 7 | (uVar41 ^ local_16c) << 0x19;
    uVar17 = (uVar36 ^ local_180) >> 0x18 | (uVar34 ^ local_17c) << 8;
    uVar31 = (uVar26 ^ uVar46) << 9 | (uVar4 ^ uVar30) >> 0x17;
    uVar13 = (uVar41 ^ local_1a8) << 0x18 | (uVar38 ^ local_184) >> 8;
    uVar40 = (uVar38 ^ local_184) << 0x18 | (uVar41 ^ local_1a8) >> 8;
    uVar8 = (uVar34 ^ local_100) >> 5 | (uVar36 ^ local_104) << 0x1b;
    uVar32 = (uVar4 ^ uVar30) << 9 | (uVar26 ^ uVar46) >> 0x17;
    uVar30 = (uVar36 ^ local_104) >> 5 | (uVar34 ^ local_100) << 0x1b;
    uVar35 = (uVar36 ^ uVar7) >> 0x12 | (uVar34 ^ uVar14) << 0xe;
    uVar29 = (uVar2 ^ uVar28) >> 0x1e | (uVar3 ^ uVar44) << 2;
    uVar14 = (uVar34 ^ uVar14) >> 0x12 | (uVar36 ^ uVar7) << 0xe;
    uVar9 = (uVar38 ^ local_120) << 0x17 | (uVar41 ^ local_124) >> 9;
    uVar7 = (uVar3 ^ uVar44) >> 0x1e | (uVar2 ^ uVar28) << 2;
    uVar44 = (uVar41 ^ local_124) << 0x17 | (uVar38 ^ local_120) >> 9;
    uVar33 = (uVar26 ^ local_11c) << 4 | (uVar4 ^ local_164) >> 0x1c;
    uVar25 = (uVar2 ^ local_134) << 0xd | (uVar3 ^ local_130) >> 0x13;
    uVar27 = (uVar3 ^ local_130) << 0xd | (uVar2 ^ local_134) >> 0x13;
    uVar28 = (uVar4 ^ local_164) << 4 | (uVar26 ^ local_11c) >> 0x1c;
    local_11c = (uVar38 ^ local_f8) >> 4 | (uVar41 ^ local_fc) << 0x1c;
    local_164 = (uVar41 ^ local_fc) >> 4 | (uVar38 ^ local_f8) << 0x1c;
    uVar39 = (uVar41 ^ local_19c) >> 0xb | (uVar38 ^ uVar5) << 0x15;
    uVar41 = (uVar38 ^ uVar5) >> 0xb | (uVar41 ^ local_19c) << 0x15;
    uVar46 = (uVar10 ^ local_170) >> 0x11 | (uVar12 ^ local_174) << 0xf;
    uVar47 = (uVar12 ^ local_178) >> 0x1a | (uVar10 ^ local_13c) << 6;
    uVar34 = (uVar12 ^ local_174) >> 0x11 | (uVar10 ^ local_170) << 0xf;
    uVar36 = (uVar2 ^ local_190) >> 0x16 | (uVar3 ^ local_168) << 10;
    uVar48 = (uVar10 ^ local_13c) >> 0x1a | (uVar12 ^ local_178) << 6;
    uVar10 = (uVar3 ^ local_168) >> 0x16 | (uVar2 ^ local_190) << 10;
    uVar12 = (uVar26 ^ uVar20) >> 0x1d | (uVar4 ^ uVar22) << 3;
    uVar38 = (uVar4 ^ uVar22) >> 0x1d | (uVar26 ^ uVar20) << 3;
    uVar22 = (uVar2 ^ local_138) >> 0x1f | (uVar3 ^ uVar16) << 1;
    uVar20 = (uVar3 ^ uVar16) >> 0x1f | (uVar2 ^ local_138) << 1;
    uVar26 = uVar26 ^ local_e8;
    uVar4 = uVar4 ^ local_160;
    local_100 = ~uVar4 & uVar45 ^ uVar35;
    local_124 = ~local_144 & local_11c ^ uVar27;
    local_fc = ~uVar14 & uVar26 ^ uVar41;
    local_f8 = ~uVar35 & uVar4 ^ uVar39;
    local_104 = ~uVar26 & uVar11 ^ uVar14;
    local_13c = ~uVar25 & uVar43 ^ uVar12;
    local_178 = ~uVar27 & local_144 ^ uVar38;
    local_144 = ~local_11c & uVar18 ^ local_144;
    local_120 = ~uVar43 & local_164 ^ uVar25;
    local_140 = ~local_164 & uVar42 ^ uVar43;
    local_108 = ~uVar19 & local_198 ^ uVar23;
    local_128 = ~uVar17 & local_194 ^ uVar21;
    local_16c = ~local_198 & uVar20 ^ uVar19;
    local_12c = ~local_194 & uVar22 ^ uVar17;
    local_198 = ~uVar20 & uVar48 ^ local_198;
    local_194 = ~uVar22 & uVar47 ^ local_194;
    local_17c = ~uVar30 & uVar33 ^ uVar13;
    local_1a4 = ~uVar32 & uVar7 ^ uVar37;
    local_19c = ~uVar40 & uVar8 ^ uVar46;
    local_180 = ~uVar8 & uVar28 ^ uVar40;
    uVar5 = ~uVar13 & uVar30 ^ uVar34;
    local_170 = ~uVar34 & uVar13 ^ uVar36;
    local_174 = ~uVar46 & uVar40 ^ uVar10;
    local_1a0 = ~uVar31 & uVar29 ^ uVar15;
    local_1a8 = ~uVar7 & uVar24 ^ uVar32;
    local_184 = ~uVar29 & uVar6 ^ uVar31;
    local_e8 = *puVar1 ^ uVar26 ^ ~uVar11 & local_118;
    local_160 = puVar1[1] ^ uVar4 ^ ~uVar45 & local_114;
    local_138 = ~local_118 & uVar41 ^ uVar11;
    uVar7 = ~uVar24 & uVar9 ^ uVar7;
    uVar16 = ~local_114 & uVar39 ^ uVar45;
    local_114 = ~uVar39 & uVar35 ^ local_114;
    local_11c = ~uVar18 & uVar38 ^ local_11c;
    local_118 = ~uVar41 & uVar14 ^ local_118;
    uVar14 = ~uVar6 & uVar44 ^ uVar29;
    uVar20 = ~uVar48 & uVar23 ^ uVar20;
    local_164 = ~uVar42 & uVar12 ^ local_164;
    local_190 = ~uVar23 & uVar19 ^ uVar48;
    local_168 = ~uVar21 & uVar17 ^ uVar47;
    local_134 = ~uVar10 & uVar46 ^ uVar28;
    uVar18 = ~uVar38 & uVar27 ^ uVar18;
    uVar42 = ~uVar12 & uVar25 ^ uVar42;
    uVar22 = ~uVar47 & uVar21 ^ uVar22;
    uVar46 = ~uVar28 & uVar10 ^ uVar8;
    uVar30 = ~uVar33 & uVar36 ^ uVar30;
    local_130 = ~uVar36 & uVar34 ^ uVar33;
    uVar24 = ~uVar9 & uVar37 ^ uVar24;
    uVar13 = ~uVar44 & uVar15 ^ uVar6;
    uVar28 = ~uVar37 & uVar32 ^ uVar9;
    uVar44 = ~uVar15 & uVar31 ^ uVar44;
  }
  *param_1 = local_e8;
  param_1[1] = local_160;
  param_1[3] = uVar16;
  param_1[2] = local_138;
  param_1[4] = local_118;
  param_1[5] = local_114;
  param_1[6] = local_fc;
  param_1[7] = local_f8;
  param_1[8] = local_104;
  param_1[9] = local_100;
  param_1[10] = local_11c;
  param_1[0xc] = uVar18;
  param_1[0xd] = uVar42;
  param_1[0xb] = local_164;
  param_1[0xe] = local_178;
  param_1[0xf] = local_13c;
  param_1[0x10] = local_124;
  param_1[0x11] = local_120;
  param_1[0x12] = local_144;
  param_1[0x14] = uVar20;
  param_1[0x15] = uVar22;
  param_1[0x13] = local_140;
  param_1[0x16] = local_190;
  param_1[0x17] = local_168;
  param_1[0x18] = local_108;
  param_1[0x19] = local_128;
  param_1[0x1a] = local_16c;
  param_1[0x1b] = local_12c;
  param_1[0x1c] = local_198;
  param_1[0x1e] = uVar46;
  param_1[0x1f] = uVar30;
  param_1[0x1d] = local_194;
  param_1[0x20] = local_134;
  param_1[0x31] = uVar14;
  param_1[0x21] = local_130;
  param_1[0x22] = local_174;
  param_1[0x23] = local_170;
  param_1[0x24] = local_19c;
  param_1[0x25] = uVar5;
  param_1[0x26] = local_180;
  param_1[0x28] = uVar24;
  param_1[0x29] = uVar13;
  param_1[0x27] = local_17c;
  param_1[0x2a] = uVar28;
  param_1[0x2b] = uVar44;
  param_1[0x2c] = local_1a4;
  param_1[0x2d] = local_1a0;
  param_1[0x2e] = local_1a8;
  param_1[0x30] = uVar7;
  param_1[0x2f] = local_184;
  return;
}


/* FUN_0042cee8 @ 0042cee8 */

undefined4 FUN_0042cee8(undefined1 *param_1,int param_2)

{
  undefined *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  puVar1 = PTR_memset_0061223c;
  *(undefined1 *)(param_2 + *(int *)(param_2 + 200) + 0xcc) = 1;
  (*(code *)puVar1)(param_2 + 0xcc + *(uint *)(param_2 + 200) + 1,0,~*(uint *)(param_2 + 200) + 0x48
                   );
  *(byte *)(param_2 + 0x113) = *(byte *)(param_2 + 0x113) | 0x80;
  FUN_0042b1b4(param_2,param_2 + 0xcc);
  iVar3 = 0;
  do {
    puVar2 = (undefined4 *)(param_2 + iVar3);
    iVar3 = iVar3 + 8;
    *param_1 = (char)puVar2[1];
    param_1[1] = (char)((uint)puVar2[1] >> 8);
    param_1[2] = (char)*(undefined2 *)(puVar2 + 1);
    param_1[3] = *(undefined1 *)(puVar2 + 1);
    param_1[4] = (char)*puVar2;
    param_1[5] = (char)((uint)*puVar2 >> 8);
    param_1[6] = (char)*(undefined2 *)puVar2;
    param_1[7] = *(undefined1 *)puVar2;
    param_1 = param_1 + 8;
  } while (iVar3 != 0x40);
  return 0;
}


/* FUN_0042d000 @ 0042d000 */

undefined4 FUN_0042d000(undefined4 param_1)

{
  (*(code *)PTR_memset_0061223c)(param_1,0,0x118);
  return 0;
}


/* FUN_0042d034 @ 0042d034 */

undefined4 FUN_0042d034(undefined1 *param_1,longlong *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  
  uVar2 = *(uint *)(param_2 + 9);
  *param_2 = (ulonglong)uVar2 * 8 + *param_2;
  *(undefined1 *)((int)param_2 + uVar2 + 0x4c) = 0x80;
  *(uint *)(param_2 + 9) = uVar2 + 1;
  if (0x70 < uVar2 + 1) {
    while( true ) {
      uVar2 = *(uint *)(param_2 + 9);
      if (0x7f < uVar2) break;
      *(undefined1 *)((int)param_2 + uVar2 + 0x4c) = 0;
      *(uint *)(param_2 + 9) = uVar2 + 1;
    }
    FUN_00429abc(param_2,(int)param_2 + 0x4c);
    *(undefined4 *)(param_2 + 9) = 0;
  }
  while( true ) {
    uVar2 = *(uint *)(param_2 + 9);
    if (0x77 < uVar2) break;
    *(undefined1 *)((int)param_2 + uVar2 + 0x4c) = 0;
    *(uint *)(param_2 + 9) = uVar2 + 1;
  }
  uVar5 = *(undefined4 *)param_2;
  uVar3 = (undefined4)*param_2;
  *(char *)((int)param_2 + 199) = (char)uVar5;
  *(char *)((int)param_2 + 0xca) = (char)((uint)uVar3 >> 8);
  *(char *)((int)param_2 + 0xcb) = (char)uVar3;
  *(char *)((int)param_2 + 0xc4) = (char)((uint)uVar5 >> 0x18);
  *(char *)((int)param_2 + 0xc5) = (char)((uint)uVar5 >> 0x10);
  *(char *)((int)param_2 + 0xc6) = (char)((uint)uVar5 >> 8);
  *(char *)(param_2 + 0x19) = (char)((uint)uVar3 >> 0x18);
  *(char *)((int)param_2 + 0xc9) = (char)((uint)uVar3 >> 0x10);
  FUN_00429abc(param_2,(int)param_2 + 0x4c);
  iVar6 = 0;
  plVar4 = param_2;
  do {
    iVar6 = iVar6 + 1;
    *param_1 = *(undefined1 *)(plVar4 + 1);
    param_1[1] = (char)*(undefined2 *)(plVar4 + 1);
    param_1[2] = (char)((uint)*(undefined4 *)(plVar4 + 1) >> 8);
    param_1[3] = (char)*(undefined4 *)(plVar4 + 1);
    param_1[4] = *(undefined1 *)((int)plVar4 + 0xc);
    param_1[5] = (char)*(undefined2 *)((int)plVar4 + 0xc);
    param_1[6] = (char)((uint)*(undefined4 *)((int)plVar4 + 0xc) >> 8);
    puVar1 = (undefined4 *)((int)plVar4 + 0xc);
    plVar4 = plVar4 + 1;
    param_1[7] = (char)*puVar1;
    param_1 = param_1 + 8;
  } while (iVar6 != 8);
  (*(code *)PTR_memset_0061223c)(param_2,0,0xd0);
  return 0;
}


/* SHA1_Final_compat @ 0042d1fc */

undefined4 SHA1_Final_compat(undefined1 *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  iVar2 = param_2[7];
  uVar6 = param_2[1];
  uVar5 = uVar6 + iVar2 * 8;
  param_2[1] = uVar5;
  *param_2 = (uint)(uVar5 < uVar6) + *param_2;
  *(undefined1 *)((int)param_2 + iVar2 + 0x20) = 0x80;
  param_2[7] = iVar2 + 1U;
  if (0x38 < iVar2 + 1U) {
    while( true ) {
      uVar5 = param_2[7];
      if (0x3f < uVar5) break;
      *(undefined1 *)((int)param_2 + uVar5 + 0x20) = 0;
      param_2[7] = uVar5 + 1;
    }
    FUN_00429454(param_2,param_2 + 8);
    param_2[7] = 0;
  }
  while( true ) {
    uVar5 = param_2[7];
    if (0x37 < uVar5) break;
    *(undefined1 *)((int)param_2 + uVar5 + 0x20) = 0;
    param_2[7] = uVar5 + 1;
  }
  iVar4 = *param_2;
  iVar2 = param_2[1];
  *(char *)((int)param_2 + 0x5b) = (char)iVar4;
  *(char *)((int)param_2 + 0x5e) = (char)((uint)iVar2 >> 8);
  *(char *)((int)param_2 + 0x5f) = (char)iVar2;
  *(char *)(param_2 + 0x16) = (char)((uint)iVar4 >> 0x18);
  *(char *)((int)param_2 + 0x59) = (char)((uint)iVar4 >> 0x10);
  *(char *)((int)param_2 + 0x5a) = (char)((uint)iVar4 >> 8);
  *(char *)(param_2 + 0x17) = (char)((uint)iVar2 >> 0x18);
  *(char *)((int)param_2 + 0x5d) = (char)((uint)iVar2 >> 0x10);
  FUN_00429454(param_2,param_2 + 8);
  iVar2 = 0;
  piVar3 = param_2;
  do {
    iVar2 = iVar2 + 1;
    *param_1 = *(undefined1 *)(piVar3 + 2);
    param_1[1] = (char)*(undefined2 *)(piVar3 + 2);
    param_1[2] = (char)((uint)piVar3[2] >> 8);
    piVar1 = piVar3 + 2;
    piVar3 = piVar3 + 1;
    param_1[3] = (char)*piVar1;
    param_1 = param_1 + 4;
  } while (iVar2 != 5);
  (*(code *)PTR_memset_0061223c)(param_2,0,0x60);
  return 0;
}


/* FUN_0042d380 @ 0042d380 */

undefined4 FUN_0042d380(int param_1,int param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = *(int *)(param_1 + 200);
  if (iVar2 != 0) {
    uVar3 = 0x48U - iVar2;
    if (param_3 <= 0x48U - iVar2) {
      uVar3 = param_3;
    }
    (*(code *)PTR_memcpy_006137d0)(param_1 + 0xcc + iVar2,param_2,uVar3);
    uVar1 = uVar3 + *(int *)(param_1 + 200);
    *(uint *)(param_1 + 200) = uVar1;
    if (uVar1 < 0x48) {
      return 0;
    }
    FUN_0042b1b4(param_1,param_1 + 0xcc);
    param_3 = param_3 - uVar3;
    param_2 = param_2 + uVar3;
  }
  for (; 0x47 < param_3; param_3 = param_3 - 0x48) {
    FUN_0042b1b4(param_1,param_2);
    param_2 = param_2 + 0x48;
  }
  *(uint *)(param_1 + 200) = param_3;
  if (param_3 != 0) {
    (*(code *)PTR_memcpy_006137d0)(param_1 + 0xcc,param_2,param_3);
  }
  return 0;
}


/* FUN_0042d474 @ 0042d474 */

undefined4 FUN_0042d474(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 auStack_130 [280];
  undefined4 local_18;
  
  local_18 = param_1;
  FUN_0042d000(auStack_130);
  FUN_0042d380(auStack_130,local_18,param_2);
  FUN_0042cee8(param_3,auStack_130);
  return param_3;
}


/* FUN_0042d4dc @ 0042d4dc */

undefined4 FUN_0042d4dc(int *param_1,int param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  
  while( true ) {
    if (param_3 == 0) break;
    iVar2 = param_1[0x12];
    uVar1 = 0x80U - iVar2;
    if (param_3 <= 0x80U - iVar2) {
      uVar1 = param_3;
    }
    if ((iVar2 == 0) && (0x7f < param_3)) {
      FUN_00429abc(param_1,param_2);
      uVar1 = param_1[1] + 0x400;
      param_2 = param_2 + 0x80;
      *param_1 = (uint)(uVar1 < (uint)param_1[1]) + *param_1;
      param_1[1] = uVar1;
      param_3 = param_3 - 0x80;
    }
    else {
      param_3 = param_3 - uVar1;
      (*(code *)PTR_memcpy_006137d0)((int)(param_1 + 0x13) + iVar2,param_2,uVar1);
      iVar2 = param_1[0x12];
      param_2 = param_2 + uVar1;
      param_1[0x12] = uVar1 + iVar2;
      if (uVar1 + iVar2 == 0x80) {
        FUN_00429abc(param_1,param_1 + 0x13);
        uVar1 = param_1[1] + 0x400;
        param_1[0x12] = 0;
        *param_1 = (uint)(uVar1 < (uint)param_1[1]) + *param_1;
        param_1[1] = uVar1;
      }
    }
  }
  return 0;
}


/* FUN_0042d60c @ 0042d60c */

undefined4 FUN_0042d60c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 auStack_e8 [208];
  undefined4 local_18;
  
  local_18 = param_1;
  FUN_00429a04(auStack_e8);
  FUN_0042d4dc(auStack_e8,local_18,param_2);
  FUN_0042d034(param_3,auStack_e8);
  return param_3;
}


/* SHA1_Update_compat @ 0042d674 */

undefined4 SHA1_Update_compat(int *param_1,int param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  
  while( true ) {
    if (param_3 == 0) break;
    iVar2 = param_1[7];
    uVar1 = 0x40U - iVar2;
    if (param_3 <= 0x40U - iVar2) {
      uVar1 = param_3;
    }
    if ((iVar2 == 0) && (0x3f < param_3)) {
      FUN_00429454(param_1,param_2);
      uVar1 = param_1[1] + 0x200;
      param_2 = param_2 + 0x40;
      *param_1 = (uint)(uVar1 < (uint)param_1[1]) + *param_1;
      param_1[1] = uVar1;
      param_3 = param_3 - 0x40;
    }
    else {
      param_3 = param_3 - uVar1;
      (*(code *)PTR_memcpy_006137d0)((int)(param_1 + 8) + iVar2,param_2,uVar1);
      iVar2 = param_1[7];
      param_2 = param_2 + uVar1;
      param_1[7] = uVar1 + iVar2;
      if (uVar1 + iVar2 == 0x40) {
        FUN_00429454(param_1,param_1 + 8);
        uVar1 = param_1[1] + 0x200;
        param_1[7] = 0;
        *param_1 = (uint)(uVar1 < (uint)param_1[1]) + *param_1;
        param_1[1] = uVar1;
      }
    }
  }
  return 0;
}


/* FUN_0042d7a4 @ 0042d7a4 */

undefined4 FUN_0042d7a4(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  
  local_68 = 0x67452301;
  local_64 = 0xefcdab89;
  local_60 = 0x98badcfe;
  local_5c = 0x10325476;
  local_58 = 0xc3d2e1f0;
  local_6c = 0;
  local_70 = 0;
  local_54 = 0;
  SHA1_Update_compat(&local_70,param_1,param_2);
  SHA1_Final_compat(param_3,&local_70);
  return param_3;
}


/* pthread_list_terminal_byControllerName @ 0042d850 */

undefined4 pthread_list_terminal_byControllerName(int param_1)

{
  undefined *puVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  undefined4 uVar5;
  
  uVar5 = 0xffffffff;
  if (param_1 != 0) {
    (*(code *)PTR_pthread_mutex_lock_0061308c)(&DAT_006147d0);
    if ((undefined4 **)DAT_006147e8 != &DAT_006147e8) {
      piVar4 = DAT_00614810;
      piVar3 = (int *)*DAT_00614810;
      while( true ) {
        if ((int **)piVar4 == &DAT_00614810) break;
        iVar2 = (*(code *)PTR_memcmp_00611fdc)(param_1,piVar4 + -9,0x24);
        if (iVar2 == 0) {
          iVar2 = (*(code *)PTR_pthread_kill_00612e8c)(piVar4[-10],0);
          if ((iVar2 != 3) && (iVar2 != 0x16)) {
            uVar5 = 0;
            (*(code *)PTR_pthread_kill_00612e8c)(piVar4[-10],3);
            puVar1 = PTR_free_006119dc;
            piVar3 = (int *)piVar4[1];
            iVar2 = *piVar4;
            *(int **)(iVar2 + 4) = piVar3;
            *piVar3 = iVar2;
            piVar4[1] = (int)piVar4;
            *piVar4 = (int)piVar4;
            (*(code *)puVar1)(piVar4 + -10);
            goto LAB_0042d968;
          }
        }
        piVar4 = piVar3;
        piVar3 = (int *)*piVar3;
      }
    }
    uVar5 = 0xffffffff;
LAB_0042d968:
    (*(code *)PTR_pthread_mutex_unlock_00611c8c)(&DAT_006147d0);
  }
  return uVar5;
}


/* pthread_list_remove_byID @ 0042d9a4 */

undefined4 pthread_list_remove_byID(int param_1)

{
  undefined *puVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  
  (*(code *)PTR_pthread_mutex_lock_0061308c)(&DAT_006147d0);
  puVar1 = PTR_free_006119dc;
  if ((undefined4 **)DAT_006147e8 != &DAT_006147e8) {
    piVar2 = DAT_00614810;
    piVar3 = (int *)*DAT_00614810;
    while ((int **)piVar2 != &DAT_00614810) {
      if (piVar2[-10] == param_1) {
        piVar3 = (int *)piVar2[1];
        iVar4 = *piVar2;
        uVar5 = 0;
        *(int **)(iVar4 + 4) = piVar3;
        *piVar3 = iVar4;
        piVar2[1] = (int)piVar2;
        *piVar2 = (int)piVar2;
        (*(code *)puVar1)(piVar2 + -10);
        goto LAB_0042da50;
      }
      piVar2 = piVar3;
      piVar3 = (int *)*piVar3;
    }
  }
  uVar5 = 0xffffffff;
LAB_0042da50:
  (*(code *)PTR_pthread_mutex_unlock_00611c8c)(&DAT_006147d0);
  return uVar5;
}


/* pthread_list_cleanup_handler @ 0042da74 */

void pthread_list_cleanup_handler(void)

{
                    /* WARNING: Could not recover jumptable at 0x0042da88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_pthread_mutex_unlock_00611c8c)(&DAT_006147d0);
  return;
}


/* pthread_list_terminal_AllThread @ 0042da90 */

void pthread_list_terminal_AllThread(void)

{
  undefined *puVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  
  (*(code *)PTR_pthread_mutex_lock_0061308c)(&DAT_006147d0);
  if ((undefined4 **)DAT_006147e8 != &DAT_006147e8) {
    piVar4 = DAT_00614810;
    piVar5 = (int *)*DAT_00614810;
    while ((int **)piVar4 != &DAT_00614810) {
      iVar2 = (*(code *)PTR_pthread_kill_00612e8c)(piVar4[-10],0);
      if ((iVar2 != 3) && (iVar2 != 0x16)) {
        (*(code *)PTR_pthread_cancel_00611e60)(piVar4[-10]);
        puVar1 = PTR_free_006119dc;
        piVar3 = (int *)piVar4[1];
        iVar2 = *piVar4;
        *(int **)(iVar2 + 4) = piVar3;
        *piVar3 = iVar2;
        piVar4[1] = (int)piVar4;
        *piVar4 = (int)piVar4;
        (*(code *)puVar1)(piVar4 + -10);
      }
      piVar4 = piVar5;
      piVar5 = (int *)*piVar5;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0042db94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_pthread_mutex_unlock_00611c8c)(&DAT_006147d0);
  return;
}


/* FUN_0042db9c @ 0042db9c */

undefined4 FUN_0042db9c(void)

{
  undefined *puVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  
  (*(code *)PTR_pthread_mutex_lock_0061308c)(&DAT_006147d0);
  if ((undefined4 **)DAT_006147e8 != &DAT_006147e8) {
    piVar2 = DAT_00614810;
    piVar5 = (int *)*DAT_00614810;
    while( true ) {
      puVar1 = PTR_free_006119dc;
      if ((int **)piVar2 == &DAT_00614810) break;
      piVar3 = (int *)piVar2[1];
      iVar4 = *piVar2;
      *(int **)(iVar4 + 4) = piVar3;
      *piVar3 = iVar4;
      *piVar2 = (int)piVar2;
      piVar2[1] = (int)piVar2;
      (*(code *)puVar1)(piVar2 + -10);
      piVar2 = piVar5;
      piVar5 = (int *)*piVar5;
    }
  }
  (*(code *)PTR_pthread_mutex_unlock_00611c8c)(&DAT_006147d0);
  (*(code *)PTR_pthread_mutex_destroy_00612c4c)(&DAT_006147d0);
  return 0;
}


/* pthread_list_GetControllerName @ 0042dc6c */

undefined4 pthread_list_GetControllerName(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  uVar3 = 0xffffffff;
  if (param_2 != 0) {
    (*(code *)PTR_pthread_mutex_lock_0061308c)(&DAT_006147d0);
    if ((undefined4 **)DAT_006147e8 != &DAT_006147e8) {
      puVar1 = DAT_00614810;
      puVar2 = (undefined4 *)*DAT_00614810;
      while ((undefined4 **)puVar1 != &DAT_00614810) {
        if (puVar1[-10] == param_1) {
          (*(code *)PTR_memcpy_006137d0)(param_2,puVar1 + -9,0x24);
          uVar3 = 0;
          goto LAB_0042dd18;
        }
        puVar1 = puVar2;
        puVar2 = (undefined4 *)*puVar2;
      }
    }
    uVar3 = 0xffffffff;
LAB_0042dd18:
    (*(code *)PTR_pthread_mutex_unlock_00611c8c)(&DAT_006147d0);
  }
  return uVar3;
}


/* pthread_list_updateControllerName @ 0042dd40 */

undefined4 pthread_list_updateControllerName(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  
  (*(code *)PTR_pthread_mutex_lock_0061308c)(&DAT_006147d0);
  if ((undefined4 **)DAT_006147e8 != &DAT_006147e8) {
    puVar1 = (undefined4 *)*DAT_00614810;
    puVar3 = DAT_00614810;
    while (puVar2 = puVar1, (undefined4 **)puVar3 != &DAT_00614810) {
      if (puVar3[-10] == param_1) {
        (*(code *)PTR_memcpy_006137d0)(puVar3 + -9,param_2,0x24);
        uVar4 = 0;
        goto LAB_0042dde0;
      }
      puVar1 = (undefined4 *)*puVar2;
      puVar3 = puVar2;
    }
  }
  uVar4 = 0xffffffff;
LAB_0042dde0:
  (*(code *)PTR_pthread_mutex_unlock_00611c8c)(&DAT_006147d0);
  return uVar4;
}


/* pthread_list_add @ 0042de04 */

undefined4 pthread_list_add(undefined4 param_1)

{
  undefined *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  
  (*(code *)PTR_pthread_mutex_lock_0061308c)(&DAT_006147d0);
  uVar4 = 0xffffffff;
  puVar3 = (undefined4 *)(*(code *)PTR_calloc_00613a18)(0x30,1);
  puVar1 = PTR_memset_0061223c;
  if (puVar3 != (undefined4 *)0x0) {
    *puVar3 = param_1;
    (*(code *)puVar1)(puVar3 + 1,0,0x24);
    uVar4 = 0;
    DAT_00614810[1] = puVar3 + 10;
    puVar3[0xb] = &DAT_00614810;
    puVar2 = puVar3 + 10;
    puVar3[10] = DAT_00614810;
    DAT_00614810 = puVar2;
  }
  (*(code *)PTR_pthread_mutex_unlock_00611c8c)(&DAT_006147d0);
  return uVar4;
}


/* pthread_list_init @ 0042ded4 */

undefined4 pthread_list_init(void)

{
  DAT_00614814 = &DAT_00614810;
  DAT_00614810 = &DAT_00614810;
  (*(code *)PTR_pthread_mutex_init_00613634)(&DAT_006147d0,0);
  return 0;
}


/* mdnsPhytrex_HomekitRemove @ 0042df30 */

void mdnsPhytrex_HomekitRemove(void)

{
  int iVar1;
  code *pcVar2;
  
  if (*(int *)PTR_g_isWACConfigured_00611698 != 0) {
    iVar1 = (*(code *)PTR_dlopen_006117c4)("libdns_sd.so",1);
    if (iVar1 == 0) {
      (*(code *)PTR_fputs_00612428)("Load libdns_so error.\n",*(undefined4 *)PTR_stderr_0061292c);
    }
    (*(code *)PTR_dlerror_00612cd0)();
    pcVar2 = (code *)(*(code *)PTR_dlsym_00613170)(iVar1,"TXTRecordDeallocate");
    (*(code *)PTR_dlerror_00612cd0)();
    (*pcVar2)(&DAT_00614824);
    (*(code *)PTR_dlerror_00612cd0)();
    if (DAT_00614820 != 0) {
      pcVar2 = (code *)(*(code *)PTR_dlsym_00613170)(iVar1,"DNSServiceRefDeallocate");
      (*pcVar2)(DAT_00614820);
      DAT_00614820 = 0;
    }
                    /* WARNING: Could not recover jumptable at 0x0042e060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR_dlclose_006115d8)(iVar1);
    return;
  }
  return;
}


/* mdnsPhytrex_HomekitUpdate @ 0042e080 */

void mdnsPhytrex_HomekitUpdate(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  code *pcVar3;
  undefined1 uVar9;
  code *pcVar4;
  int iVar5;
  code *pcVar6;
  undefined2 uVar8;
  undefined4 uVar7;
  
  if (*(int *)PTR_g_isWACConfigured_00611698 != 0) {
    iVar2 = (*(code *)PTR_dlopen_006117c4)("libdns_sd.so",1);
    if (iVar2 == 0) {
      (*(code *)PTR_fputs_00612428)("Load libdns_so error.\n",*(undefined4 *)PTR_stderr_0061292c);
    }
    (*(code *)PTR_dlerror_00612cd0)();
    pcVar3 = (code *)(*(code *)PTR_dlsym_00613170)(iVar2,"TXTRecordSetValue");
    (*(code *)PTR_dlerror_00612cd0)();
    uVar9 = (*(code *)PTR_strlen_006130b4)(param_2);
    (*pcVar3)(&DAT_00614824,param_1,uVar9,param_2);
    (*(code *)PTR_dlerror_00612cd0)();
    pcVar3 = (code *)(*(code *)PTR_dlsym_00613170)(iVar2,"DNSServiceUpdateRecord");
    (*(code *)PTR_dlerror_00612cd0)();
    pcVar4 = (code *)(*(code *)PTR_dlsym_00613170)(iVar2,"TXTRecordGetLength");
    iVar5 = (*(code *)PTR_dlerror_00612cd0)();
    if (iVar5 != 0) {
      (*(code *)PTR_fprintf_006120cc)(*(undefined4 *)PTR_stderr_0061292c,"dlsym error: %s\n",iVar5);
    }
    (*(code *)PTR_dlerror_00612cd0)();
    pcVar6 = (code *)(*(code *)PTR_dlsym_00613170)(iVar2,"TXTRecordGetBytesPtr");
    (*(code *)PTR_dlerror_00612cd0)();
    iVar5 = (*(code *)PTR_dlerror_00612cd0)();
    if (iVar5 != 0) {
      (*(code *)PTR_fprintf_006120cc)(*(undefined4 *)PTR_stderr_0061292c,"dlsym error: %s\n",iVar5);
    }
    uVar1 = DAT_00614820;
    uVar8 = (*pcVar4)(&DAT_00614824);
    uVar7 = (*pcVar6)(&DAT_00614824);
    (*pcVar3)(uVar1,0,0,uVar8,uVar7,0);
                    /* WARNING: Could not recover jumptable at 0x0042e318. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR_dlclose_006115d8)(iVar2);
    return;
  }
  return;
}


/* mdnsPhytrex_HomekitRegist @ 0042e344 */

void mdnsPhytrex_HomekitRegist(undefined4 param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  code *pcVar4;
  int iVar5;
  code *pcVar6;
  undefined1 uVar9;
  code *pcVar7;
  undefined2 uVar8;
  undefined1 auStack_60 [20];
  undefined1 auStack_4c [16];
  undefined2 local_3c;
  undefined1 local_3a;
  undefined1 local_39;
  undefined1 local_38;
  undefined1 local_37;
  undefined1 local_36;
  undefined1 local_35;
  undefined1 *local_28;
  
  if (*(int *)PTR_g_isWACConfigured_00611698 != 0) {
    uVar2 = (*(code *)PTR_socket_00611ea8)(2,1,0);
    local_3c = 2;
    (*(code *)PTR_strncpy_00612580)(auStack_4c,&DAT_005ab154,0xf);
    (*(code *)PTR_ioctl_00613100)(uVar2,0x8927,auStack_4c);
    puVar1 = PTR_stderr_0061292c;
    (*(code *)PTR_close_0061276c)(uVar2);
    (*(code *)PTR_sprintf_00611f90)
              (auStack_60,"%.2x:%.2x:%.2x:%.2x:%.2x:%.2x",local_3a,local_39,local_38,local_37,
               local_36,local_35);
    (*(code *)PTR_fprintf_006120cc)(*(undefined4 *)puVar1,"Get MAC Address: %s\n",auStack_60);
    iVar3 = (*(code *)PTR_dlopen_006117c4)("libdns_sd.so",1);
    if (iVar3 == 0) {
      (*(code *)PTR_fputs_00612428)("Load libdns_so error.\n",*(undefined4 *)puVar1);
    }
    (*(code *)PTR_dlerror_00612cd0)();
    pcVar4 = (code *)(*(code *)PTR_dlsym_00613170)(iVar3,"DNSServiceRegister");
    iVar5 = (*(code *)PTR_dlerror_00612cd0)();
    if (iVar5 != 0) {
      (*(code *)PTR_fprintf_006120cc)(*(undefined4 *)PTR_stderr_0061292c,"dlsym error: %s\n",iVar5);
    }
    (*(code *)PTR_dlerror_00612cd0)();
    pcVar6 = (code *)(*(code *)PTR_dlsym_00613170)(iVar3,"TXTRecordCreate");
    iVar5 = (*(code *)PTR_dlerror_00612cd0)();
    if (iVar5 != 0) {
      (*(code *)PTR_fprintf_006120cc)(*(undefined4 *)PTR_stderr_0061292c,"dlsym error: %s\n",iVar5);
    }
    (*pcVar6)(&DAT_00614824,0,0);
    pcVar6 = (code *)(*(code *)PTR_dlsym_00613170)(iVar3,"TXTRecordSetValue");
    (*pcVar6)(&DAT_00614824,&UNK_005ac75c,1,"1");
    (*pcVar6)(&DAT_00614824,&DAT_005ac760,1,"1");
    local_28 = auStack_60;
    uVar9 = (*(code *)PTR_strlen_006130b4)(local_28);
    (*pcVar6)(&DAT_00614824,"id",uVar9,local_28);
    (*pcVar6)(&DAT_00614824,"md",10,&UNK_005ac764);
    (*pcVar6)(&DAT_00614824,&UNK_005ac770,3,&UNK_005ac774);
    (*pcVar6)(&DAT_00614824,&UNK_005ac778,1,"1");
    (*pcVar6)(&DAT_00614824,&DAT_005ab5c4,1,"1");
    (*pcVar6)(&DAT_00614824,&DAT_005ab5c8,5,&UNK_005ac77c);
    (*pcVar6)(&DAT_00614824,&DAT_005ab5cc,1,&DAT_005b6e24);
    (*(code *)PTR_dlerror_00612cd0)();
    pcVar6 = (code *)(*(code *)PTR_dlsym_00613170)(iVar3,"TXTRecordGetLength");
    iVar5 = (*(code *)PTR_dlerror_00612cd0)();
    if (iVar5 != 0) {
      (*(code *)PTR_fprintf_006120cc)(*(undefined4 *)PTR_stderr_0061292c,"dlsym error: %s\n",iVar5);
    }
    (*(code *)PTR_dlerror_00612cd0)();
    pcVar7 = (code *)(*(code *)PTR_dlsym_00613170)(iVar3,"TXTRecordGetBytesPtr");
    iVar5 = (*(code *)PTR_dlerror_00612cd0)();
    if (iVar5 != 0) {
      (*(code *)PTR_fprintf_006120cc)(*(undefined4 *)PTR_stderr_0061292c,"dlsym error: %s\n",iVar5);
    }
    uVar8 = (*pcVar6)(&DAT_00614824);
    uVar2 = (*pcVar7)(&DAT_00614824);
    iVar5 = (*pcVar4)(&DAT_00614820,0,0,param_1,"_hap._tcp","local","",0xce03,uVar8,uVar2,0,"");
    if (iVar5 != 0) {
      (*(code *)PTR_fprintf_006120cc)
                (*(undefined4 *)PTR_stderr_0061292c,"Error: %s,%s,%d,%d\n",
                 "/home/vendor/rtl819x_v3464_homekit/users/phytrex-homekit/lib_homekitserver/mdns_phytrexHomekit.c"
                 ,"mdnsPhytrex_HomekitRegist",0x16a,iVar5);
    }
    (*(code *)PTR_dlclose_006115d8)(iVar3);
  }
  return;
}


/* FUN_0042e8ac @ 0042e8ac */

undefined4 FUN_0042e8ac(undefined4 param_1)

{
  int iVar1;
  char local_78 [104];
  
  (*(code *)PTR_system_00613870)("hostname > /tmp/net/jc_hostname.txt");
  iVar1 = (*(code *)PTR_fopen_00612ac0)("/tmp/net/jc_hostname.txt","r");
  if (iVar1 != 0) {
    (*(code *)PTR_fseek_00611e8c)(iVar1,0,0);
    (*(code *)PTR_fgets_00612640)(local_78,100,iVar1);
    (*(code *)PTR_fclose_00612ba0)(iVar1);
    if (local_78[0] != '\0') {
      (*(code *)PTR_fprintf_006120cc)(*(undefined4 *)PTR_stderr_0061292c,"JHOSTNAME=%s",local_78);
      (*(code *)PTR_strcpy_006115d0)(param_1,local_78);
      return 0;
    }
  }
  return 1;
}


/* HKGetValueFromGlobalEventTable @ 0042e9c0 */

undefined4 HKGetValueFromGlobalEventTable(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  if ((undefined4 **)DAT_00614840 != &DAT_00614840) {
    puVar1 = (undefined4 *)*DAT_0061484c;
    puVar3 = DAT_0061484c;
    while (puVar2 = puVar1, (undefined4 **)puVar3 != &DAT_0061484c) {
      if (puVar3[-3] == param_1) {
        switch(puVar3[-1]) {
        case 0:
        case 1:
        case 3:
        case 4:
          *param_2 = puVar3[-2];
          return 0;
        case 2:
          *param_2 = puVar3[-2];
          return 0;
        default:
          return 0;
        }
      }
      puVar1 = (undefined4 *)*puVar2;
      puVar3 = puVar2;
    }
  }
  return 0xffffe5b7;
}


/* HKUpdateEnableToPrivateEventTable @ 0042ea68 */

undefined4 HKUpdateEnableToPrivateEventTable(int *param_1,int param_2,undefined1 param_3)

{
  int *piVar1;
  int *piVar2;
  
  if ((int *)*param_1 != param_1) {
    piVar1 = (int *)param_1[5];
    piVar2 = *(int **)param_1[5];
    while (piVar1 != param_1 + 5) {
      if (piVar1[-4] == param_2) {
        *(undefined1 *)(piVar1 + -5) = param_3;
        return 0;
      }
      piVar1 = piVar2;
      piVar2 = (int *)*piVar2;
    }
  }
  return 0;
}


/* HKDestroyPrivateEventTable @ 0042ec14 */

undefined4 HKDestroyPrivateEventTable(int *param_1)

{
  undefined *puVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  
  if ((int *)*param_1 != param_1) {
    piVar4 = (int *)param_1[5];
    piVar5 = *(int **)param_1[5];
    while (piVar4 != param_1 + 5) {
      iVar2 = piVar4[-2];
      if ((((iVar2 == 4) || (iVar2 == 5)) || (iVar2 == 3)) && (piVar4[-3] != 0)) {
        (*(code *)PTR_free_006119dc)();
      }
      puVar1 = PTR_free_006119dc;
      piVar3 = (int *)piVar4[1];
      iVar2 = *piVar4;
      *(int **)(iVar2 + 4) = piVar3;
      *piVar3 = iVar2;
      piVar4[1] = (int)piVar4;
      *piVar4 = (int)piVar4;
      (*(code *)puVar1)(piVar4 + -5);
      piVar4 = piVar5;
      piVar5 = (int *)*piVar5;
    }
  }
  return 0;
}


/* FUN_0042ed14 @ 0042ed14 */

undefined4 FUN_0042ed14(void)

{
  undefined *puVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  
  if ((undefined4 **)DAT_00614840 != &DAT_00614840) {
    piVar4 = DAT_0061484c;
    piVar5 = (int *)*DAT_0061484c;
    while ((int **)piVar4 != &DAT_0061484c) {
      iVar2 = piVar4[-1];
      if ((((iVar2 == 4) || (iVar2 == 5)) || (iVar2 == 3)) && (piVar4[-2] != 0)) {
        (*(code *)PTR_free_006119dc)();
      }
      puVar1 = PTR_free_006119dc;
      piVar3 = (int *)piVar4[1];
      iVar2 = *piVar4;
      *(int **)(iVar2 + 4) = piVar3;
      *piVar3 = iVar2;
      piVar4[1] = (int)piVar4;
      *piVar4 = (int)piVar4;
      (*(code *)puVar1)(piVar4 + -3);
      piVar4 = piVar5;
      piVar5 = (int *)*piVar5;
    }
  }
  return 0;
}


/* HKCreatePrivateEventTable @ 0042ee1c */

undefined4 HKCreatePrivateEventTable(int param_1)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined *puVar6;
  int iVar7;
  undefined4 uVar8;
  undefined1 auStack_80 [4];
  undefined4 local_7c;
  undefined4 local_74;
  char local_6a;
  undefined1 *local_38;
  undefined4 local_34;
  undefined4 local_30;
  
  puVar6 = PTR_hapObjects_00613b3c;
  iVar5 = param_1 + 0x14;
  local_38 = auStack_80;
  *(int *)(param_1 + 0x14) = iVar5;
  *(int *)(param_1 + 0x18) = iVar5;
  piVar4 = (int *)(puVar6 + 4);
  iVar3 = 0;
  uVar8 = 0;
  do {
    if (*piVar4 == 0) {
      return uVar8;
    }
    iVar7 = 0;
    puVar6 = PTR_hapObjects_00613b3c + (iVar3 * 0xb5 + 1) * 8 + 4;
    do {
      (*(code *)PTR_memcpy_006137d0)(local_38,puVar6,0x48);
      iVar7 = iVar7 + 1;
      puVar6 = puVar6 + 0x48;
      if (local_6a != '\0') {
        local_34 = local_74;
        local_30 = local_7c;
        puVar1 = (undefined1 *)(*(code *)PTR_calloc_00613a18)(0x1c,1);
        if (puVar1 == (undefined1 *)0x0) {
          uVar8 = 0xffffe5b8;
          break;
        }
        iVar2 = *(int *)(param_1 + 0x14);
        *(undefined4 *)(puVar1 + 4) = local_30;
        *(undefined4 *)(puVar1 + 0xc) = local_34;
        *(undefined4 *)(puVar1 + 8) = 0;
        *puVar1 = 0;
        puVar1[0x10] = 0;
        *(undefined1 **)(iVar2 + 4) = puVar1 + 0x14;
        *(int *)(puVar1 + 0x14) = iVar2;
        *(int *)(puVar1 + 0x18) = iVar5;
        *(undefined1 **)(param_1 + 0x14) = puVar1 + 0x14;
      }
    } while (iVar7 != 0x14);
    iVar3 = iVar3 + 1;
    piVar4 = piVar4 + 0x16a;
    if (iVar3 == 10) {
      return uVar8;
    }
  } while( true );
}


/* HKCreateGlobalEventTable @ 0042ef88 */

/* WARNING: Restarted to delay deadcode elimination for space: ram */

undefined4 HKCreateGlobalEventTable(void)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  undefined *puVar4;
  int iVar5;
  undefined4 uVar6;
  undefined1 auStack_78 [4];
  undefined4 local_74;
  undefined4 local_6c;
  char local_62;
  undefined4 local_30;
  undefined4 local_2c;
  
  DAT_0061484c = &DAT_0061484c;
  DAT_00614850 = &DAT_0061484c;
  piVar3 = (int *)(PTR_hapObjects_00613b3c + 4);
  iVar2 = 0;
  uVar6 = 0;
  do {
    if (*piVar3 == 0) {
      return uVar6;
    }
    iVar5 = 0;
    puVar4 = PTR_hapObjects_00613b3c + (iVar2 * 0xb5 + 1) * 8 + 4;
    do {
      (*(code *)PTR_memcpy_006137d0)(auStack_78,puVar4,0x48);
      iVar5 = iVar5 + 1;
      puVar4 = puVar4 + 0x48;
      if (local_62 != '\0') {
        local_30 = local_6c;
        local_2c = local_74;
        puVar1 = (undefined4 *)(*(code *)PTR_calloc_00613a18)(0x14,1);
        if (puVar1 == (undefined4 *)0x0) {
          uVar6 = 0xffffe5b8;
          break;
        }
        puVar1[2] = local_30;
        *puVar1 = local_2c;
        puVar1[1] = 0;
        DAT_0061484c[1] = puVar1 + 3;
        puVar1[3] = DAT_0061484c;
        puVar1[4] = &DAT_0061484c;
        DAT_0061484c = puVar1 + 3;
      }
    } while (iVar5 != 0x14);
    iVar2 = iVar2 + 1;
    piVar3 = piVar3 + 0x16a;
    if (iVar2 == 10) {
      return uVar6;
    }
  } while( true );
}


/* HKUpdateValueToPrivateEventTable @ 0042f0f8 */

undefined4 HKUpdateValueToPrivateEventTable(int *param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  
  if ((int *)*param_1 != param_1) {
    piVar1 = *(int **)param_1[5];
    piVar4 = (int *)param_1[5];
    while (piVar3 = piVar1, piVar4 != param_1 + 5) {
      if (piVar4[-4] == param_2) {
        switch(piVar4[-2]) {
        case 0:
        case 1:
          piVar4[-3] = param_3;
          break;
        case 2:
          piVar4[-3] = param_3;
          break;
        case 3:
        case 4:
        case 5:
          iVar5 = piVar4[-3];
          if (iVar5 != 0) {
            iVar2 = (*(code *)PTR_strcmp_00611bec)(iVar5,param_3);
            if (iVar2 == 0) {
              return 0;
            }
            (*(code *)PTR_free_006119dc)(iVar5);
          }
          iVar5 = (*(code *)PTR_strlen_006130b4)(param_3);
          iVar5 = (*(code *)PTR_calloc_00613a18)(1,iVar5 + 1);
          piVar4[-3] = iVar5;
          (*(code *)PTR_strcpy_006115d0)(iVar5,param_3);
          return 0;
        }
        return 0;
      }
      piVar1 = (int *)*piVar3;
      piVar4 = piVar3;
    }
  }
  return 0xffffe595;
}


/* HKUpdateValueToGlobalEventTable @ 0042f250 */

undefined4 HKUpdateValueToGlobalEventTable(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  
  if ((undefined4 **)DAT_00614840 != &DAT_00614840) {
    puVar1 = (undefined4 *)*DAT_0061484c;
    puVar5 = DAT_0061484c;
    while (puVar4 = puVar1, (undefined4 **)puVar5 != &DAT_0061484c) {
      if (puVar5[-3] == param_1) {
        switch(puVar5[-1]) {
        case 0:
        case 1:
          goto switchD_0042f2d0_caseD_0;
        case 2:
          iVar6 = (*(code *)PTR___nesf2_00611970)(puVar5[-2],param_2);
          if (iVar6 != 0) {
            puVar5[-2] = param_2;
            return 0;
          }
          return 0;
        case 3:
        case 4:
        case 5:
          iVar6 = puVar5[-2];
          if (iVar6 != 0) {
            iVar2 = (*(code *)PTR_strcmp_00611bec)(iVar6,param_2);
            if (iVar2 == 0) {
              return 0;
            }
            (*(code *)PTR_free_006119dc)(iVar6);
          }
          iVar6 = (*(code *)PTR_strlen_006130b4)(param_2);
          uVar3 = (*(code *)PTR_calloc_00613a18)(1,iVar6 + 1);
          puVar5[-2] = uVar3;
          (*(code *)PTR_strcpy_006115d0)(uVar3,param_2);
          return 0;
        default:
          return 0;
        }
      }
      puVar1 = (undefined4 *)*puVar4;
      puVar5 = puVar4;
    }
  }
  return 0xffffe5b7;
switchD_0042f2d0_caseD_0:
  if (puVar5[-2] != param_2) {
    puVar5[-2] = param_2;
    return 0;
  }
  return 0;
}


/* FUN_0042f424 @ 0042f424 */

undefined4 FUN_0042f424(char *param_1)

{
  undefined4 uVar1;
  
  if ((((((9 < (byte)(*param_1 - 0x30U)) || (9 < (byte)(param_1[1] - 0x30U))) ||
        (9 < (byte)(param_1[2] - 0x30U))) ||
       ((param_1[3] != '-' || (9 < (byte)(param_1[4] - 0x30U))))) ||
      ((9 < (byte)(param_1[5] - 0x30U) || ((param_1[6] != '-' || (9 < (byte)(param_1[7] - 0x30U)))))
      )) || ((9 < (byte)(param_1[8] - 0x30U) || (uVar1 = 1, 9 < (byte)(param_1[9] - 0x30U))))) {
    (*(code *)PTR_fprintf_006120cc)
              (*(undefined4 *)PTR_stderr_0061292c,
               "\nFILE %s FUNCTION %s LINE %d: Setup code is illegal %2x%2x%2x%2x%2x%2x%2x%2x%2x%2x\n"
               ,"/home/vendor/rtl819x_v3464_homekit/users/phytrex-homekit/homekitsetupcode.c",
               "checkSetupCodeisLegal",0x76,*param_1,param_1[1],param_1[2],param_1[3],param_1[4],
               param_1[5],param_1[6],param_1[7],param_1[8],param_1[9]);
    uVar1 = 0;
  }
  return uVar1;
}


/* FUN_0042f5c8 @ 0042f5c8 */

byte * FUN_0042f5c8(char *param_1,int param_2)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  byte *pbVar5;
  uint uVar6;
  int *piVar7;
  char *pcVar8;
  char *pcVar9;
  uint uVar10;
  int local_28 [4];
  int local_18 [2];
  
  if (param_2 < 0) {
    param_2 = param_2 + 3;
  }
  uVar10 = param_2 >> 2;
  local_18[0] = uVar10 * 3 + 1;
  pbVar1 = (byte *)(*(code *)PTR_malloc_006132d8)(local_18[0]);
  (*(code *)PTR_memset_0061223c)(pbVar1,0,local_18[0]);
  uVar6 = 0;
  pbVar5 = pbVar1;
  do {
    piVar7 = local_28;
    pcVar8 = param_1;
    if (uVar10 <= uVar6) {
      return pbVar1;
    }
    do {
      pcVar9 = &DAT_005ffc10;
      iVar3 = 0;
      do {
        if (*pcVar9 == *pcVar8) goto LAB_0042f694;
        iVar2 = iVar3 + 1;
        pcVar9 = s_BCDEFGHIJKLMNOPQRSTUVWXYZabcdefg_005ffc11 + iVar3;
        iVar3 = iVar2;
      } while (iVar2 != 0x41);
      iVar3 = -1;
LAB_0042f694:
      *piVar7 = iVar3;
      piVar7 = piVar7 + 1;
      pcVar8 = pcVar8 + 1;
    } while (piVar7 != local_18);
    cVar4 = '\0';
    if (uVar6 == uVar10 - 1) {
      cVar4 = (local_28[0] == 0x40) + (local_28[1] == 0x40U) + (local_28[2] == 0x40U) +
              (local_28[3] == 0x40);
    }
    *pbVar5 = (byte)((int)(local_28[1] & 0x30U) >> 4) | (byte)(local_28[0] << 2);
    if (cVar4 == '\x02') {
      return pbVar1;
    }
    param_1 = param_1 + 4;
    pbVar5[1] = (byte)((int)(local_28[2] & 0x3cU) >> 2) | (byte)(local_28[1] << 4);
    if (cVar4 == '\x01') {
      return pbVar1;
    }
    uVar6 = uVar6 + 1;
    pbVar5[2] = (byte)local_28[3] & 0x3f | (byte)(local_28[2] << 6);
    pbVar5 = pbVar5 + 3;
  } while( true );
}


/* FUN_0042f76c @ 0042f76c */

undefined4 FUN_0042f76c(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_30 [4];
  undefined1 auStack_2c [17];
  undefined1 local_1b;
  
  iVar1 = (*(code *)PTR_open_006138f8)("/dev/mtdblock2",2);
  if (iVar1 < 1) {
    (*(code *)PTR_printf_0061185c)("open MTD device %s fail...\n","/dev/mtdblock2");
  }
  else {
    iVar2 = (*(code *)PTR_lseek_00612fd4)(iVar1,0x10000,0);
    if ((iVar2 != -1) && (iVar2 = (*(code *)PTR_read_00612ef0)(iVar1,auStack_30,0x18), iVar2 != -1))
    {
      iVar2 = (*(code *)PTR_memcmp_00611fdc)(auStack_30,&DAT_005ac98c,4);
      if (iVar2 == 0) {
        local_1b = 0;
        uVar3 = (*(code *)PTR_strlen_006130b4)(auStack_2c);
        uVar3 = FUN_0042f5c8(auStack_2c,uVar3);
        (*(code *)PTR_memcpy_006137d0)(param_1,uVar3,10);
        iVar2 = FUN_0042f424(param_1);
        if (iVar2 != 0) {
          (*(code *)PTR_close_0061276c)(iVar1);
          return 1;
        }
      }
    }
    (*(code *)PTR_close_0061276c)(iVar1);
  }
  return 0;
}


/* HKsetupCodeInit @ 0042f8d0 */

bool HKsetupCodeInit(void)

{
  int iVar1;
  
  iVar1 = FUN_0042f76c();
  return iVar1 != 0;
}


/* Get_product_info @ 0042f8f0 */

undefined4 Get_product_info(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined1 auStack_40 [14];
  char acStack_32 [30];
  
  (*(code *)PTR_memset_0061223c)(auStack_40,0,0x22);
  iVar1 = (*(code *)PTR_open_006138f8)("/dev/mtdblock5",2);
  if (iVar1 < 1) {
    (*(code *)PTR_fprintf_006120cc)
              (*(undefined4 *)PTR_stderr_0061292c,
               "\nFILE %s FUNCTION %s LINE %d: read production from flash open fail......\n\n",
               "/home/vendor/rtl819x_v3464_homekit/users/phytrex-homekit/customize/Incipio_Socket_Meter/homekitdatasave.c"
               ,"Get_product_info",0x8d);
  }
  else {
    iVar2 = (*(code *)PTR_lseek_00612fd4)(iVar1,0x18000,0);
    if (iVar2 == -1) {
      (*(code *)PTR_fprintf_006120cc)
                (*(undefined4 *)PTR_stderr_0061292c,
                 "\nFILE %s FUNCTION %s LINE %d: locate production to flash by lseek fail......\n\n"
                 ,
                 "/home/vendor/rtl819x_v3464_homekit/users/phytrex-homekit/customize/Incipio_Socket_Meter/homekitdatasave.c"
                 ,"Get_product_info",0x6d);
    }
    iVar2 = (*(code *)PTR_read_00612ef0)(iVar1,auStack_40,0x22);
    if (iVar2 == -1) {
      (*(code *)PTR_fprintf_006120cc)
                (*(undefined4 *)PTR_stderr_0061292c,
                 "\nFILE %s FUNCTION %s LINE %d: read production from flash fail.......\n\n",
                 "/home/vendor/rtl819x_v3464_homekit/users/phytrex-homekit/customize/Incipio_Socket_Meter/homekitdatasave.c"
                 ,"Get_product_info",0x73);
    }
    (*(code *)PTR_puts_006117e4)("[METER DEBUG] Read Product Info :");
    pcVar3 = acStack_32;
    (*(code *)PTR_printf_0061185c)("              Serial NUM : [%s] \n",pcVar3);
    iVar2 = (*(code *)PTR_memcmp_00611fdc)(auStack_40,"AccessoryInfo",0xe);
    if (iVar2 != 0) {
      (*(code *)PTR_puts_006117e4)("signature fail");
      pcVar3 = "HKMO-0000001";
    }
    (*(code *)PTR_strcpy_006115d0)(&DAT_00614860,pcVar3);
  }
  (*(code *)PTR_close_0061276c)(iVar1);
  (*(code *)PTR_memcpy_006137d0)(param_1,auStack_40,0x22);
  return param_1;
}


/* FUN_0042fb24 @ 0042fb24 */

undefined4 * FUN_0042fb24(undefined4 *param_1)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  undefined4 uVar6;
  undefined4 local_20 [2];
  
  iVar2 = (*(code *)PTR_open_006138f8)("/dev/mtdblock5",2);
  if (iVar2 < 1) {
    uVar4 = *(undefined4 *)PTR_stderr_0061292c;
    uVar6 = 0x55;
    pcVar5 = "\nFILE %s FUNCTION %s LINE %d: read hksettinginfo from flash open fail......\n\n";
  }
  else {
    iVar3 = (*(code *)PTR_lseek_00612fd4)(iVar2,0x10000,0);
    if (iVar3 == -1) {
      (*(code *)PTR_fprintf_006120cc)
                (*(undefined4 *)PTR_stderr_0061292c,
                 "\nFILE %s FUNCTION %s LINE %d: locate hksettinginfo to flash by lseek fail......\n\n"
                 ,
                 "/home/vendor/rtl819x_v3464_homekit/users/phytrex-homekit/customize/Incipio_Socket_Meter/homekitdatasave.c"
                 ,"Get_hksettinginfo",0x44);
    }
    iVar3 = (*(code *)PTR_read_00612ef0)(iVar2,local_20,4);
    if (iVar3 == -1) {
      (*(code *)PTR_fprintf_006120cc)
                (*(undefined4 *)PTR_stderr_0061292c,
                 "\nFILE %s FUNCTION %s LINE %d: read hksettinginfo from flash fail.......\n\n",
                 "/home/vendor/rtl819x_v3464_homekit/users/phytrex-homekit/customize/Incipio_Socket_Meter/homekitdatasave.c"
                 ,"Get_hksettinginfo",0x4a);
    }
    puVar1 = PTR_stderr_0061292c;
    (*(code *)PTR_fprintf_006120cc)
              (*(undefined4 *)PTR_stderr_0061292c,
               "\nFILE %s FUNCTION %s LINE %d: \n Get hksetting info :\n",
               "/home/vendor/rtl819x_v3464_homekit/users/phytrex-homekit/customize/Incipio_Socket_Meter/homekitdatasave.c"
               ,"Get_hksettinginfo",0x4e);
    uVar4 = *(undefined4 *)puVar1;
    uVar6 = 0x4f;
    pcVar5 = "\nFILE %s FUNCTION %s LINE %d: \n brightness value : %d\n";
  }
  (*(code *)PTR_fprintf_006120cc)
            (uVar4,pcVar5,
             "/home/vendor/rtl819x_v3464_homekit/users/phytrex-homekit/customize/Incipio_Socket_Meter/homekitdatasave.c"
             ,"Get_hksettinginfo",uVar6);
  (*(code *)PTR_close_0061276c)(iVar2);
  *param_1 = local_20[0];
  return param_1;
}


/* FUN_0042fcfc @ 0042fcfc */

void FUN_0042fcfc(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined4 local_res0 [4];
  undefined4 uVar5;
  
  local_res0[0] = param_1;
  iVar1 = (*(code *)PTR_open_006138f8)("/dev/mtdblock5",2);
  if (iVar1 < 1) {
    uVar3 = *(undefined4 *)PTR_stderr_0061292c;
    uVar5 = 0x33;
    pcVar4 = "\nFILE %s FUNCTION %s LINE %d: write hksettinginfo to flash open fail......\n\n";
  }
  else {
    iVar2 = (*(code *)PTR_lseek_00612fd4)(iVar1,0x10000,0);
    if (iVar2 == -1) {
      (*(code *)PTR_fprintf_006120cc)
                (*(undefined4 *)PTR_stderr_0061292c,
                 "\nFILE %s FUNCTION %s LINE %d: locate hksettinginfo to flash by lseek fail......\n\n"
                 ,
                 "/home/vendor/rtl819x_v3464_homekit/users/phytrex-homekit/customize/Incipio_Socket_Meter/homekitdatasave.c"
                 ,"Store_hksettinginfo",0x2a);
    }
    iVar2 = (*(code *)PTR_write_00612898)(iVar1,local_res0,4);
    if (iVar2 != -1) goto LAB_0042fe08;
    uVar3 = *(undefined4 *)PTR_stderr_0061292c;
    uVar5 = 0x2e;
    pcVar4 = "\nFILE %s FUNCTION %s LINE %d: write hksettinginfo to flash fail.......\n\n";
  }
  (*(code *)PTR_fprintf_006120cc)
            (uVar3,pcVar4,
             "/home/vendor/rtl819x_v3464_homekit/users/phytrex-homekit/customize/Incipio_Socket_Meter/homekitdatasave.c"
             ,"Store_hksettinginfo",uVar5);
LAB_0042fe08:
  (*(code *)PTR_close_0061276c)(iVar1);
  return;
}


/* FUN_0042fe30 @ 0042fe30 */

undefined4 FUN_0042fe30(void)

{
  undefined *puVar1;
  int iVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined1 *puVar6;
  int iVar7;
  int iVar8;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined1 auStack_2c [16];
  
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  (*(code *)PTR_strcpy_006115d0)(auStack_2c,"10206");
  iVar8 = 0;
  (*(code *)PTR_printf_0061185c)("***orifwVer:[%s]\n",auStack_2c);
  for (iVar2 = (*(code *)PTR_atol_006132f0)(auStack_2c); 9999 < iVar2; iVar2 = iVar2 + -10000) {
    iVar8 = (iVar8 + 1) * 0x1000000 >> 0x18;
  }
  (*(code *)PTR_printf_0061185c)("ver_x = %d, ver_rem = %d\n",iVar8,iVar2);
  iVar7 = 0;
  for (; 99 < iVar2; iVar2 = iVar2 + -100) {
    iVar7 = (iVar7 + 1) * 0x1000000 >> 0x18;
  }
  (*(code *)PTR_printf_0061185c)("ver_y = %d, ver_rem = %d\n",iVar7,iVar2);
  (*(code *)PTR_printf_0061185c)("ver_z = %d, ver_rem = %d\n",(int)(char)iVar2,iVar2);
  puVar3 = (undefined1 *)(*(code *)PTR_strchr_00611958)(&DAT_00614a80,0x2e);
  puVar1 = PTR_sprintf_00611f90;
  *puVar3 = 0;
  (*(code *)puVar1)(&local_38,&DAT_00614a80);
  iVar4 = (*(code *)PTR_atoi_006119c0)(&local_38);
  puVar1 = PTR_strchr_00611958;
  uVar5 = 1;
  if (iVar4 <= iVar8) {
    *puVar3 = 0x2e;
    puVar6 = (undefined1 *)(*(code *)puVar1)(puVar3 + 1,0x2e);
    puVar1 = PTR_sprintf_00611f90;
    *puVar6 = 0;
    (*(code *)puVar1)(&local_34,puVar3 + 1);
    iVar8 = (*(code *)PTR_atoi_006119c0)(&local_34);
    puVar1 = PTR_sprintf_00611f90;
    uVar5 = 1;
    if (iVar8 <= iVar7) {
      *puVar6 = 0x2e;
      (*(code *)puVar1)(&local_30,puVar6 + 1);
      iVar8 = (*(code *)PTR_atoi_006119c0)(&local_30);
      if ((char)iVar2 < iVar8) {
        uVar5 = 1;
      }
      else {
        (*(code *)PTR_HKUpdateValueToGlobalEventTable_00613b54)(0x14,1);
        uVar5 = 0xffffffff;
      }
    }
  }
  return uVar5;
}


/* FUN_00430094 @ 00430094 */

void FUN_00430094(void)

{
  if (DAT_00614a88 != 0) {
    (*(code *)PTR_SSL_shutdown_00611cb0)();
  }
  if (0 < DAT_00614a8c) {
    (*(code *)PTR_close_0061276c)();
    DAT_00614a8c = -1;
  }
  if (DAT_00614a88 != 0) {
    (*(code *)PTR_SSL_free_00613020)();
    DAT_00614a88 = 0;
  }
  if (DAT_00614a90 != 0) {
    (*(code *)PTR_SSL_CTX_free_006116a4)();
    DAT_00614a90 = 0;
  }
  return;
}


/* FUN_00430164 @ 00430164 */

void FUN_00430164(char *param_1,undefined1 *param_2,undefined1 *param_3,undefined4 *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  param_3[3] = 0;
  *param_4 = 0;
  if (*param_1 != '\0') {
    iVar1 = (*(code *)PTR_strncmp_0061322c)(param_1,"http://",7);
    if (iVar1 == 0) {
      *param_4 = 0x50;
      param_1 = param_1 + 7;
    }
    else {
      iVar1 = (*(code *)PTR_strncmp_0061322c)(param_1,"https://",8);
      if (iVar1 == 0) {
        *param_4 = 0x1bb;
        param_1 = param_1 + 8;
      }
    }
    iVar1 = (*(code *)PTR_strchr_00611958)(param_1,0x2f);
    if (iVar1 == 0) {
      uVar4 = (*(code *)PTR_strlen_006130b4)(param_1);
      (*(code *)PTR_memcpy_006137d0)(param_2,param_1,uVar4);
      iVar1 = (*(code *)PTR_strlen_006130b4)(param_1);
      param_2[iVar1] = 0;
    }
    else {
      iVar2 = (*(code *)PTR_strlen_006130b4)(param_1);
      iVar3 = (*(code *)PTR_strlen_006130b4)(iVar1);
      (*(code *)PTR_memcpy_006137d0)(param_2,param_1,iVar2 - iVar3);
      if (iVar1 + 1 != 0) {
        iVar2 = (*(code *)PTR_strlen_006130b4)(iVar1);
        (*(code *)PTR_memcpy_006137d0)(param_3,iVar1 + 1,iVar2 + -1);
        iVar2 = (*(code *)PTR_strlen_006130b4)(iVar1);
        param_3[iVar2 + -1] = 0;
      }
      iVar2 = (*(code *)PTR_strlen_006130b4)(param_1);
      iVar1 = (*(code *)PTR_strlen_006130b4)(iVar1);
      param_2[iVar2 - iVar1] = 0;
    }
  }
  return;
}


/* FUN_00430380 @ 00430380 */

/* WARNING: Removing unreachable block (ram,0x004307c4) */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

undefined4 FUN_00430380(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  char *pcVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  undefined *puVar10;
  undefined2 local_90 [2];
  int local_8c;
  undefined2 local_88;
  undefined2 local_86;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined1 auStack_78 [4];
  undefined4 local_74;
  undefined4 local_70;
  undefined1 auStack_58 [48];
  
  (*(code *)PTR_memset_0061223c)(auStack_78,0,0x20);
  local_70 = 2;
  local_74 = 0;
  (*(code *)PTR_memset_0061223c)(&DAT_00614a98,0,0x100);
  (*(code *)PTR_memset_0061223c)(&DAT_00614b98,0,0x400);
  FUN_00430164(param_1,&DAT_00614a98,&DAT_00614b98,&DAT_00614a94);
  (*(code *)PTR_printf_0061185c)("webhost: [%s]\n",&DAT_00614a98);
  (*(code *)PTR_printf_0061185c)("portnumber:%d\n\n",DAT_00614a94);
  iVar1 = (*(code *)PTR_getaddrinfo_00611648)(&DAT_00614a98,0,auStack_78,&local_8c);
  if (iVar1 == 0) {
    iVar8 = 0;
    iVar9 = 0;
    for (iVar1 = local_8c; iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x1c)) {
      iVar3 = *(int *)(iVar1 + 0x14);
      puVar10 = &UNK_005acea0;
      if (*(int *)(iVar1 + 4) == 2) {
        iVar6 = iVar3 + 4;
        iVar8 = iVar3;
        iVar3 = iVar9;
        puVar10 = &DAT_005ace98;
      }
      else {
        iVar6 = iVar3 + 8;
      }
      (*(code *)PTR_inet_ntop_00611738)(*(int *)(iVar1 + 4),iVar6,auStack_58,0x2e);
      (*(code *)PTR_printf_0061185c)(" %s: %s\n",puVar10,auStack_58);
      iVar9 = iVar3;
    }
    (*(code *)PTR_freeaddrinfo_00613370)(local_8c);
    if (iVar9 != 0) goto LAB_00430844;
    DAT_00614a8c = (*(code *)PTR_socket_00611ea8)(2,2,0);
    if (DAT_00614a8c == -1) {
      uVar7 = *(undefined4 *)PTR_stderr_0061292c;
      puVar4 = (undefined4 *)(*(code *)PTR___errno_location_0061397c)();
      uVar2 = (*(code *)PTR_strerror_006118b8)(*puVar4);
      pcVar5 = "Socket Error:%s\a\n";
    }
    else {
      local_88 = 2;
      local_86 = (undefined2)DAT_00614a94;
      local_80 = 0;
      local_7c = 0;
      local_84 = *(undefined4 *)(iVar8 + 4);
      uVar2 = (*(code *)PTR_inet_ntoa_0061221c)(local_84);
      (*(code *)PTR_printf_0061185c)("[GetFWINFO] create socket IP:[%s]\n",uVar2);
      iVar1 = (*(code *)PTR_connect_00613794)(DAT_00614a8c,&local_88,0x10);
      puVar10 = PTR_stderr_0061292c;
      if (iVar1 != -1) {
        if (DAT_00614a94 == 0x50) {
          return 1;
        }
        (*(code *)PTR_SSL_library_init_0061232c)();
        (*(code *)PTR_fputs_00612428)(&DAT_005acf00,*(undefined4 *)puVar10);
        (*(code *)PTR_SSL_load_error_strings_00613434)();
        uVar2 = (*(code *)PTR_SSLv23_client_method_00612560)();
        DAT_00614a90 = (*(code *)PTR_SSL_CTX_new_00612c14)(uVar2);
        if (((DAT_00614a90 == 0) ||
            (DAT_00614a88 = (*(code *)PTR_SSL_new_0061214c)(DAT_00614a90), DAT_00614a88 == 0)) ||
           (iVar1 = (*(code *)PTR_SSL_set_fd_00612ab0)(DAT_00614a88,DAT_00614a8c), iVar1 == 0)) {
          uVar2 = *(undefined4 *)puVar10;
        }
        else {
          (*(code *)PTR_RAND_poll_006131ec)();
          while (iVar1 = (*(code *)PTR_RAND_status_00611ad8)(), iVar1 == 0) {
            iVar1 = (*(code *)PTR_rand_00611e2c)();
            local_90[0] = (undefined2)(iVar1 % 0x10000);
            (*(code *)PTR_RAND_seed_00612c20)(local_90,2);
          }
          iVar1 = (*(code *)PTR_SSL_connect_00613bdc)(DAT_00614a88);
          if (iVar1 == 1) {
            return 1;
          }
          uVar2 = *(undefined4 *)PTR_stderr_0061292c;
        }
        (*(code *)PTR_ERR_print_errors_fp_00613a5c)(uVar2);
        goto LAB_00430844;
      }
      uVar7 = *(undefined4 *)PTR_stderr_0061292c;
      puVar4 = (undefined4 *)(*(code *)PTR___errno_location_0061397c)();
      uVar2 = (*(code *)PTR_strerror_006118b8)(*puVar4);
      pcVar5 = "Connect Error:%s\a\n";
    }
  }
  else {
    uVar7 = *(undefined4 *)PTR_stderr_0061292c;
    uVar2 = (*(code *)PTR_gai_strerror_006126ec)(iVar1);
    pcVar5 = "getaddrinfo: %s\n";
  }
  (*(code *)PTR_fprintf_006120cc)(uVar7,pcVar5,uVar2);
LAB_00430844:
  FUN_00430094();
  return 0xffffffff;
}


/* FUN_00430888 @ 00430888 */

undefined4 FUN_00430888(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  uint *puVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  code *pcVar9;
  undefined4 local_10b0;
  undefined4 local_10ac;
  uint local_10a8 [32];
  char local_1028 [1024];
  undefined1 auStack_c28 [1024];
  char local_828 [1024];
  char local_428 [1024];
  
  (*(code *)PTR_memset_0061223c)(local_1028,0,0x400);
  (*(code *)PTR_memset_0061223c)(auStack_c28,0,0x400);
  (*(code *)PTR_memset_0061223c)(local_828,0,0x400);
  (*(code *)PTR_memset_0061223c)(local_428,0,0x400);
  FUN_00430094();
  iVar1 = FUN_00430380("http://dev.ncpo.cc");
  if (iVar1 == -1) {
LAB_00430c64:
    FUN_00430094();
    uVar4 = 0xffffffff;
  }
  else {
    (*(code *)PTR_sprintf_00611f90)
              (auStack_c28,
               "GET %s HTTP/1.1\r\nAccept: */*\r\nAccept-Language: zh-cn\r\nUser-Agent: Mozilla/4.0 (compatible; MSIE 5.01; Windows NT 5.0)\r\nHost: %s:%d\r\nConnection: Close\r\n\r\n"
               ,param_1,&DAT_00614a98,DAT_00614a94);
    (*(code *)PTR_puts_006117e4)("[GetFWINFO] Send HTTP Request:");
    iVar8 = 0;
    (*(code *)PTR_puts_006117e4)(auStack_c28);
    iVar1 = (*(code *)PTR_strlen_006130b4)(auStack_c28);
    while (iVar8 < iVar1) {
      uVar6 = DAT_00614a8c;
      pcVar9 = (code *)PTR_write_00612898;
      if (DAT_00614a94 != 0x50) {
        uVar6 = DAT_00614a88;
        pcVar9 = (code *)PTR_SSL_write_006120d4;
      }
      iVar7 = (*pcVar9)(uVar6,auStack_c28 + iVar8,iVar1 - iVar8);
      iVar8 = iVar8 + iVar7;
      if (iVar7 == -1) {
        (*(code *)PTR_puts_006117e4)("[GetFWINFO] send http fail...");
        goto LAB_00430c64;
      }
      (*(code *)PTR_printf_0061185c)("%d bytes send OK!\n",iVar8);
    }
    puVar2 = local_10a8;
    do {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    } while (puVar2 != (uint *)local_1028);
    local_10a8[DAT_00614a8c >> 5] = local_10a8[DAT_00614a8c >> 5] | 1 << (DAT_00614a8c & 0x1f);
    local_10b0 = 5;
    local_10ac = 0;
    iVar1 = (*(code *)PTR_select_00612e2c)(DAT_00614a8c + 1,local_10a8,0,0,&local_10b0);
    if ((iVar1 < 0) && (piVar3 = (int *)(*(code *)PTR___errno_location_0061397c)(), *piVar3 != 4)) {
      (*(code *)PTR_printf_0061185c)("select error");
      uVar4 = 0xffffffff;
    }
    else {
      if (DAT_00614a94 == 0x50) {
        iVar7 = 0;
        iVar8 = 0;
        iVar1 = 0;
        while( true ) {
          iVar5 = (*(code *)PTR_read_00612ef0)(DAT_00614a8c,local_1028,1);
          if (iVar5 != 1) break;
          if (iVar8 < 4) {
            iVar8 = iVar8 + 1;
            if ((local_1028[0] != '\r') && (local_1028[0] != '\n')) {
              iVar8 = 0;
            }
            local_828[iVar7] = local_1028[0];
            iVar7 = iVar7 + 1;
          }
          else {
            local_428[iVar1] = local_1028[0];
            iVar1 = iVar1 + 1;
          }
        }
      }
      else {
        iVar7 = 0;
        iVar8 = 0;
        iVar1 = 0;
        while( true ) {
          iVar5 = (*(code *)PTR_SSL_read_00612b14)(DAT_00614a88,local_1028,1);
          if (iVar5 != 1) break;
          if (iVar8 < 4) {
            iVar8 = iVar8 + 1;
            if ((local_1028[0] != '\r') && (local_1028[0] != '\n')) {
              iVar8 = 0;
            }
            local_828[iVar7] = local_1028[0];
            iVar7 = iVar7 + 1;
          }
          else {
            local_428[iVar1] = local_1028[0];
            iVar1 = iVar1 + 1;
          }
        }
      }
      (*(code *)PTR_strcpy_006115d0)(param_2,local_428);
      FUN_00430094();
      uVar4 = 1;
    }
  }
  return uVar4;
}


/* FUN_00430ca0 @ 00430ca0 */

undefined4 FUN_00430ca0(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 auStack_920 [256];
  undefined1 auStack_820 [2048];
  int local_20;
  
  (*(code *)PTR_strcpy_006115d0)
            (auStack_920,
             "/homekit/getlastfwinfo/?guid=034fghijsdernck98674d32hjk&product=smartsocketwithmeter")
  ;
  iVar1 = FUN_00430888(auStack_920,auStack_820);
  uVar2 = 0xffffffff;
  if (iVar1 == 1) {
    (*(code *)PTR_printf_0061185c)("[GetFWINFO]Send fw info API done RES = [%s] \n",auStack_820);
    iVar1 = (*(code *)PTR_strstr_00611c14)(auStack_820,"information");
    if (iVar1 == 0) {
      iVar1 = (*(code *)PTR_strstr_00611c14)(auStack_820,"400 Bad Request");
      uVar2 = 0xffffffff;
      if (iVar1 != 0) {
        (*(code *)PTR_puts_006117e4)("Bad Request");
        uVar2 = 0xffffffff;
      }
    }
    else {
      iVar1 = (*(code *)PTR_strstr_00611c14)(auStack_820,"\"fwver\":\"");
      iVar1 = iVar1 + 9;
      iVar3 = (*(code *)PTR_strstr_00611c14)(iVar1,&DAT_005ad0c8);
      (*(code *)PTR_snprintf_00612f8c)(&DAT_00614a80,(iVar3 + 1) - iVar1,"%s",iVar1);
      local_20 = (*(code *)PTR_strstr_00611c14)(auStack_820,"update_url\":\"");
      local_20 = local_20 + 0xd;
      iVar1 = (*(code *)PTR_strstr_00611c14)(local_20,&DAT_005ad0dc);
      (*(code *)PTR_snprintf_00612f8c)(&DAT_00614880,(iVar1 + 1) - local_20,"%s");
      (*(code *)PTR_printf_0061185c)
                ("[GetFWINFO] Get FW info from HTTP API : ver:[%s] URL:[%s]\n",&DAT_00614a80,
                 &DAT_00614880);
      uVar2 = 1;
    }
  }
  return uVar2;
}


/* checkFWInfo @ 00430e5c */

undefined4 checkFWInfo(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_00430ca0();
  if (0 < iVar1) {
    (*(code *)PTR_sprintf_00611f90)(param_1,&DAT_00614880);
    iVar1 = FUN_0042fe30();
    if (0 < iVar1) {
      return 1;
    }
  }
  return 0xffffffff;
}


/* FUN_00430ec0 @ 00430ec0 */

void FUN_00430ec0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00430ed8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_pthread_cancel_00611e60)(DAT_00614fa0);
  return;
}


/* HomekitOTAThreadStart @ 00430ee0 */

undefined4 HomekitOTAThreadStart(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_40 [40];
  undefined4 local_18;
  
  local_18 = param_1;
  (*(code *)PTR_pthread_attr_init_00613510)(auStack_40);
  uVar2 = 0xffffffff;
  (*(code *)PTR_pthread_attr_setdetachstate_006138cc)(auStack_40,1);
  iVar1 = (*(code *)PTR_pthread_create_006128a4)(&DAT_00614fa0,auStack_40,FUN_00430f84,local_18);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  (*(code *)PTR_pthread_attr_destroy_00612994)(auStack_40);
  return uVar2;
}


/* FUN_00430f84 @ 00430f84 */

void FUN_00430f84(int param_1)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 unaff_s0;
  undefined1 auStack_138 [128];
  int local_b8;
  undefined1 auStack_b0 [128];
  int local_30;
  uint local_2c;
  
  (*(code *)PTR_memset_0061223c)(auStack_138,0,0x88);
  (*(code *)PTR_memset_0061223c)(auStack_b0,0,0x88);
  do {
    iVar2 = (*(code *)PTR_access_00612d14)("/var/fwProgress",4);
    if (iVar2 == 0) {
      iVar2 = (*(code *)PTR_fopen_00612ac0)("/var/fwProgress","r");
      if (iVar2 == 0) goto LAB_00431048;
      uVar4 = (*(code *)PTR_fileno_006128cc)(iVar2);
      iVar3 = (*(code *)PTR_flock_0061219c)(uVar4,2);
      if (iVar3 == 0) {
        (*(code *)PTR_fscanf_006117ac)(iVar2,"%s %d %d",auStack_b0,&local_30,&local_2c);
        uVar4 = (*(code *)PTR_fileno_006128cc)(iVar2);
        (*(code *)PTR_flock_0061219c)(uVar4,8);
        (*(code *)PTR_fclose_00612ba0)(iVar2);
      }
      puVar1 = PTR_HKUpdateValueToGlobalEventTable_00613b54;
      if (local_2c == 200) {
        unaff_s0 = 0;
        goto LAB_004311e0;
      }
      if (200 < (int)local_2c) {
        if (local_2c == 0x191) {
          (*(code *)PTR_puts_006117e4)("verify fw fail");
          unaff_s0 = 2;
        }
        else if (local_2c == 0x192) {
          (*(code *)PTR_puts_006117e4)("upgrade fw fail");
          unaff_s0 = 3;
        }
        else if (local_2c == 400) {
          (*(code *)PTR_puts_006117e4)("download fw fail");
          unaff_s0 = 1;
        }
LAB_004311e0:
        puVar1 = PTR_printf_0061185c;
        *(int *)(param_1 + 0x804) = local_30;
        (*(code *)puVar1)("Progress:[%d] Result:[%d]\n",local_30,unaff_s0);
        (*(code *)PTR_HKUpdateValueToGlobalEventTable_00613b54)(0x13,local_30);
        puVar1 = PTR_HKUpdateValueToGlobalEventTable_00613b54;
        *(undefined4 *)(param_1 + 0x808) = unaff_s0;
        (*(code *)puVar1)(0x14,unaff_s0);
        (*(code *)PTR_memset_0061223c)(auStack_b0,0,0x88);
        (*(code *)PTR_memset_0061223c)(auStack_138,0,0x88);
        (*(code *)PTR_pthread_exit_00611ed8)(0);
        return;
      }
      if (7 < local_2c) goto LAB_004311e0;
      if (local_30 != local_b8) {
        local_b8 = local_30;
        *(int *)(param_1 + 0x804) = local_30;
        (*(code *)puVar1)(0x13);
      }
      uVar4 = 2;
    }
    else {
LAB_00431048:
      uVar4 = 1;
    }
    (*(code *)PTR_sleep_006136a8)(uVar4);
  } while( true );
}


/* HomekitSerialFuncRegister @ 00431290 */

void HomekitSerialFuncRegister(int *param_1)

{
  if (*param_1 != 0) {
    DAT_00614fb0 = *param_1;
  }
  if (param_1[3] != 0) {
    DAT_00614fbc = param_1[3];
  }
  if (param_1[1] != 0) {
    DAT_00614fb4 = param_1[1];
  }
  if (param_1[2] != 0) {
    DAT_00614fb8 = param_1[2];
  }
  return;
}


/* HomekitSerialOpen @ 004312e8 */

undefined4 HomekitSerialOpen(void)

{
  undefined4 uVar1;
  
  if (DAT_00614fb0 == (code *)0x0) {
    return 0xffffffff;
  }
                    /* WARNING: Could not recover jumptable at 0x00431304. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*DAT_00614fb0)();
  return uVar1;
}


/* homekitUserSerialRead @ 00431330 */

undefined4 homekitUserSerialRead(void)

{
  (*(code *)PTR_Serial_Gpio_Read_00613bc4)();
  return 0;
}


/* homekitUserSerialWrite @ 00431364 */

undefined4 homekitUserSerialWrite(void)

{
  (*(code *)PTR_Serial_Gpio_Write_006139f4)();
  return 0;
}


/* homekitUserSerialClose @ 00431398 */

undefined4 homekitUserSerialClose(void)

{
  (*(code *)PTR_Serial_Gpio_Close_00611f94)();
  return 0;
}


/* homekitUserSerialOpen @ 004313cc */

undefined4 homekitUserSerialOpen(void)

{
  (*(code *)PTR_Serial_Gpio_Open_006124c4)();
  return 0;
}


/* FUN_00431400 @ 00431400 */

void FUN_00431400(void)

{
                    /* WARNING: Could not recover jumptable at 0x00431418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_pthread_cancel_00611e60)(DAT_00614fc0);
  return;
}


/* HomekitSerialThreadStart @ 004314b4 */

undefined4 HomekitSerialThreadStart(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_38 [44];
  
  DAT_00614fb0 = 0;
  DAT_00614fbc = 0;
  DAT_00614fb4 = 0;
  DAT_00614fb8 = 0;
  (*(code *)PTR_pthread_mutex_init_00613634)(&DAT_00614fc4,0);
  (*(code *)PTR_sem_init_00613c3c)(&DAT_00614fdc,0,0);
  (*(code *)PTR_sem_init_00613c3c)(&DAT_00614fec,0,0);
  uVar2 = 0xffffffff;
  (*(code *)PTR_pthread_attr_init_00613510)(auStack_38);
  (*(code *)PTR_pthread_attr_setdetachstate_006138cc)(auStack_38,1);
  iVar1 = (*(code *)PTR_pthread_create_006128a4)(&DAT_00614fc0,auStack_38,FUN_004315bc,0);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  (*(code *)PTR_pthread_attr_destroy_00612994)(auStack_38);
  return uVar2;
}


/* FUN_004315bc @ 004315bc */

void FUN_004315bc(void)

{
  int iVar1;
  int *piVar2;
  undefined1 auStack_40 [4];
  int local_3c;
  undefined1 auStack_38 [16];
  
  (*(code *)PTR_pthread_setcancelstate_00611660)(0,0);
  (*(code *)PTR_pthread_setcanceltype_00613b74)(1,0);
  (*(code *)PTR__pthread_cleanup_push_006133e8)(auStack_38,&LAB_0043178c,0);
LAB_0043166c:
  do {
    (*(code *)PTR_clock_gettime_006138fc)(0,auStack_40);
    local_3c = local_3c + 49999999;
    do {
      iVar1 = (*(code *)PTR_sem_timedwait_00612a64)(&DAT_00614fdc,auStack_40);
      if (iVar1 != -1) {
        if (DAT_00614fb4 != (code *)0x0) {
          (*DAT_00614fb4)(DAT_00614ffc);
        }
        if (DAT_00614fb8 != (code *)0x0) {
          (*DAT_00614fb8)(DAT_00614ffc);
        }
        (*(code *)PTR_sem_post_00611c38)(&DAT_00614fec);
        goto LAB_0043166c;
      }
      piVar2 = (int *)(*(code *)PTR___errno_location_0061397c)();
    } while (*piVar2 == 4);
    if (*piVar2 == 0x91) {
      if (DAT_00614fb8 != (code *)0x0) {
        (*DAT_00614fb8)(DAT_00614ffc);
      }
      if (DAT_00614fb4 != (code *)0x0) {
        (*DAT_00614fb4)(DAT_00614ffc);
      }
    }
  } while( true );
}


/* HKSetupDNSServiceName @ 00431810 */

void HKSetupDNSServiceName(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_118 [256];
  int local_18;
  
  (*(code *)PTR_strcpy_006115d0)(auStack_118," flash get MFI_WAC_DEVICE_NAME > /var/wacNameInfo");
  (*(code *)PTR_system_00613870)(auStack_118);
  iVar1 = (*(code *)PTR_fopen_00612ac0)("/var/wacNameInfo","r");
  if (iVar1 != 0) {
    (*(code *)PTR_memset_0061223c)(auStack_118,0,0x100);
    (*(code *)PTR_fread_00612b58)(auStack_118,0x100,1,iVar1);
    iVar2 = (*(code *)PTR_strstr_00611c14)(auStack_118,"MFI_WAC_DEVICE_NAME=\"");
    if (iVar2 != 0) {
      local_18 = iVar2 + 0x15;
      iVar2 = (*(code *)PTR_strchr_00611958)(iVar2 + 0x15,0x22);
      (*(code *)PTR_snprintf_00612f8c)(&DAT_00615000,(iVar2 - local_18) + 1,"%s");
    }
    (*(code *)PTR_fclose_00612ba0)(iVar1);
  }
  (*(code *)PTR_system_00613870)("rm -f /var/wacNameInfo");
  (*(code *)PTR_strcpy_006115d0)(param_1,&DAT_00615000);
  return;
}


/* HKSetupAccessoryType @ 00431984 */

void HKSetupAccessoryType(undefined1 *param_1)

{
  *param_1 = DAT_005b6e24;
  return;
}


/* HKSetupFirmwareVersion @ 00431994 */

void HKSetupFirmwareVersion(undefined4 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004319ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_memcpy_006137d0)(param_1,"10206",5);
  return;
}


/* HKCharacteristicInit @ 004319b4 */

void HKCharacteristicInit(int param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 *puVar4;
  
  (*(code *)PTR_strcpy_006115d0)(param_1,&DAT_00615000);
  uVar2 = (*(code *)PTR_calloc_00613a18)(4,1);
  puVar1 = PTR_HKsetupCodeInit_00611cc8;
  *(undefined4 *)(param_1 + 0x158) = uVar2;
  iVar3 = (*(code *)puVar1)(uVar2);
  if (iVar3 == 0) {
    (*(code *)PTR_memcpy_006137d0)(*(undefined4 *)(param_1 + 0x158),"273-49-151",10);
  }
  puVar4 = (undefined1 *)(*(code *)PTR_calloc_00613a18)(0x814,1);
  puVar1 = PTR_memset_0061223c;
  *puVar4 = 0;
  puVar4[1] = 0;
  *(undefined4 *)(puVar4 + 4) = 0;
  (*(code *)puVar1)(puVar4 + 8,0,0x800);
  *(undefined1 **)(param_1 + 0x154) = puVar4;
  *(undefined4 *)(puVar4 + 0x808) = 0;
  *(undefined4 *)(puVar4 + 0x80c) = 0;
  *(undefined4 *)(puVar4 + 0x810) = 0;
  return;
}


/* HKWriteCharacteristicEvent @ 00431a98 */

void HKWriteCharacteristicEvent
               (undefined4 param_1,int param_2,uint param_3,undefined4 *param_4,undefined4 param_5,
               undefined4 param_6)

{
  undefined4 uVar1;
  
  if ((param_2 == 9) || (param_2 == 10)) {
    (*(code *)PTR_HKUpdateEnableToPrivateEventTable_00611e88)(param_6,param_2,param_3 >> 0x18);
    *param_4 = 0;
  }
  else if (((param_2 == 0xe) || (param_2 == 0xf)) || (param_2 == 0xd)) goto LAB_00431b54;
  if (param_2 == 0x13) {
    uVar1 = 0x13;
  }
  else {
    if (param_2 != 0x14) {
      return;
    }
    uVar1 = 0x14;
  }
  (*(code *)PTR_HKUpdateEnableToPrivateEventTable_00611e88)(param_6,uVar1,param_3 >> 0x18);
LAB_00431b54:
  *param_4 = 0;
  return;
}


/* HKUserTriggerIdentify @ 00431b74 */

void HKUserTriggerIdentify(void)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    iVar1 = iVar1 + 1;
    (*(code *)PTR_sleep_006136a8)(1);
    (*(code *)PTR_Identify_LEDSetup_00611868)(1);
    (*(code *)PTR_sleep_006136a8)(1);
    (*(code *)PTR_Identify_LEDSetup_00611868)(0);
  } while (iVar1 != 3);
  return;
}


/* HKWriteCharacteristicValue @ 00431c10 */

void HKWriteCharacteristicValue
               (undefined4 param_1,int param_2,uint param_3,undefined4 *param_4,int param_5)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_a18 [512];
  undefined1 auStack_818 [2052];
  
  switch(param_2) {
  case 2:
    iVar2 = param_5;
    break;
  case 3:
    iVar2 = param_5 + 0x40;
    break;
  case 4:
    iVar2 = param_5 + 0x80;
    goto LAB_00431ca4;
  case 5:
    iVar2 = param_5 + 0x9e;
LAB_00431ca4:
    uVar3 = 0x1e;
    goto LAB_00431cac;
  case 6:
    (*(code *)PTR_Identify_SwitchSetup_006131b0)((int)(char)param_3);
    goto LAB_00431d10;
  default:
    if (param_2 != 9) goto LAB_00431d10;
    if (param_3 < 2) {
      (*(code *)PTR_Relay_SwitchSetup_00612708)((int)(char)param_3);
      *param_4 = 0;
      return;
    }
    goto LAB_00431de0;
  }
  uVar3 = 0x40;
LAB_00431cac:
  (*(code *)PTR_strncpy_00612580)(iVar2,param_3,uVar3);
  *param_4 = 0;
LAB_00431d10:
  puVar1 = PTR_checkFWInfo_00612cb0;
  if (param_2 == 0x12) {
    if (0 < (int)param_3) {
      *(uint *)(*(int *)(param_5 + 0x154) + 0x808) = param_3;
      iVar2 = (*(code *)puVar1)(auStack_a18);
      if (0 < iVar2) {
        (*(code *)PTR_puts_006117e4)("Set Firmware start!!!");
        (*(code *)PTR_sprintf_00611f90)(auStack_818,"upgfw %s&",auStack_a18);
        (*(code *)PTR_system_00613870)(auStack_818);
        (*(code *)PTR_printf_0061185c)("Create thread for OTA progress=>%d!\n\n",0);
        (*(code *)PTR_HKUpdateValueToGlobalEventTable_00613b54)(0x13,0);
        (*(code *)PTR_HomekitOTAThreadStart_00613c00)(*(int *)(param_5 + 0x154) + 8);
        return;
      }
    }
LAB_00431de0:
    *param_4 = 0xfffeecf6;
  }
  return;
}


/* HKReadCharacteristicValue @ 00431e04 */

undefined4 HKReadCharacteristicValue(undefined4 param_1,int param_2,uint *param_3,uint param_4)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  code *pcVar4;
  
  switch(param_2) {
  case 2:
    *param_3 = param_4;
    goto LAB_00431ed8;
  case 3:
    uVar3 = param_4 + 0x40;
    break;
  case 4:
    uVar3 = param_4 + 0x80;
    break;
  case 5:
    uVar3 = param_4 + 0x9e;
    break;
  case 6:
    *(undefined1 *)param_3 = 1;
    goto LAB_00431ed8;
  default:
    pcVar4 = (code *)PTR_Relay_SwitchState_00612d6c;
    if ((param_2 != 9) && (pcVar4 = (code *)PTR_outlet_InusedRead_00612dd4, param_2 != 10))
    goto LAB_00431ed8;
    iVar2 = (*pcVar4)();
    *param_3 = (uint)(iVar2 == 1);
    goto LAB_00431f3c;
  }
  *param_3 = uVar3;
LAB_00431ed8:
  pcVar4 = (code *)PTR_Get_Irms_value_00611b20;
  if (((param_2 == 0xe) || (pcVar4 = (code *)PTR_Get_Power_value_00612480, param_2 == 0xf)) ||
     (pcVar4 = (code *)PTR_Get_Vrms_value_00611654, param_2 == 0xd)) {
    uVar3 = (*pcVar4)();
    puVar1 = PTR_Get_Relay_State_00612918;
    *param_3 = uVar3;
    (*(code *)puVar1)();
  }
  else {
LAB_00431f3c:
    if (param_2 == 0x13) {
      *param_3 = *(uint *)(*(int *)(param_4 + 0x154) + 0x80c);
    }
    else if (param_2 == 0x14) {
      *param_3 = *(uint *)(*(int *)(param_4 + 0x154) + 0x810);
    }
    else if (param_2 == 0x12) {
      *param_3 = *(uint *)(*(int *)(param_4 + 0x154) + 0x808);
    }
  }
  return 0;
}


/* FUN_00431fb0 @ 00431fb0 */

void FUN_00431fb0(byte *param_1,uint param_2,undefined1 *param_3)

{
  byte bVar1;
  undefined1 uVar2;
  int iVar3;
  uint uVar4;
  undefined1 *puVar5;
  undefined1 auStack_28 [24];
  
  (*(code *)PTR_memcpy_006137d0)(auStack_28,"0123456789abcdef",0x11);
  iVar3 = 0;
  do {
    puVar5 = param_3 + iVar3;
    iVar3 = iVar3 + 1;
    *puVar5 = 0;
  } while (iVar3 != 200);
  for (uVar4 = 0; uVar4 < param_2; uVar4 = uVar4 + 1) {
    *param_3 = auStack_28[*param_1 >> 4];
    bVar1 = *param_1;
    param_1 = param_1 + 1;
    uVar2 = auStack_28[bVar1 & 0xf];
    param_3[2] = 0x20;
    param_3[1] = uVar2;
    param_3 = param_3 + 3;
  }
  return;
}


/* Relay_SwitchState @ 00432254 */

int Relay_SwitchState(void)

{
  return (int)DAT_00615049;
}


/* outlet_InusedRead @ 00432264 */

int outlet_InusedRead(void)

{
  return (int)DAT_00615048;
}


/* Identify_LEDSetup @ 00432274 */

undefined4 Identify_LEDSetup(char param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if (param_1 == '\x01') {
    uVar1 = (*(code *)PTR_fopen_00612ac0)("/proc/wlan0/gpio_ctrl","w");
    uVar2 = 0;
  }
  else {
    if (param_1 != '\0') {
      return 0xffffffff;
    }
    uVar1 = (*(code *)PTR_fopen_00612ac0)("/proc/wlan0/gpio_ctrl","w");
    uVar2 = 1;
  }
  (*(code *)PTR_fprintf_006120cc)(uVar1,"set %d %d",0,uVar2);
  (*(code *)PTR_fclose_00612ba0)(uVar1);
  return 0;
}


/* Identify_SwitchSetup @ 0043234c */

undefined4 Identify_SwitchSetup(char param_1)

{
  undefined4 uVar1;
  
  if (param_1 == '\0') {
    (*(code *)PTR_fprintf_006120cc)
              (*(undefined4 *)PTR_stderr_0061292c,
               "\nFILE %s FUNCTION %s LINE %d: identify LED Off\n\n",
               "/home/vendor/rtl819x_v3464_homekit/users/phytrex-homekit/customize/Incipio_Socket_Meter/Socket_Meter.c"
               ,"Identify_SwitchSetup",0x422);
    uVar1 = (*(code *)PTR_fopen_00612ac0)("/proc/wlan0/gpio_ctrl","w");
    (*(code *)PTR_fprintf_006120cc)(uVar1,"set %d %d",0,1);
    (*(code *)PTR_fclose_00612ba0)(uVar1);
  }
  else {
    if (param_1 != '\x01') {
      (*(code *)PTR_fprintf_006120cc)
                (*(undefined4 *)PTR_stderr_0061292c,"\nFILE %s FUNCTION %s LINE %d: bad request\n\n"
                 ,
                 "/home/vendor/rtl819x_v3464_homekit/users/phytrex-homekit/customize/Incipio_Socket_Meter/Socket_Meter.c"
                 ,"Identify_SwitchSetup",0x42b);
      return 0xffffffff;
    }
    (*(code *)PTR_fprintf_006120cc)
              (*(undefined4 *)PTR_stderr_0061292c,
               "\nFILE %s FUNCTION %s LINE %d: identify LED blink\n\n",
               "/home/vendor/rtl819x_v3464_homekit/users/phytrex-homekit/customize/Incipio_Socket_Meter/Socket_Meter.c"
               ,"Identify_SwitchSetup",0x41c);
    (*(code *)PTR_HKUserTriggerIdentify_00612dac)();
  }
  return 0;
}


/* Serial_Gpio_Close @ 00432488 */

undefined4 Serial_Gpio_Close(void)

{
  undefined4 uVar1;
  
  (*(code *)PTR_fprintf_006120cc)
            (*(undefined4 *)PTR_stderr_0061292c,"\nFILE %s FUNCTION %s LINE %d: Do serial close\n\n"
             ,
             "/home/vendor/rtl819x_v3464_homekit/users/phytrex-homekit/customize/Incipio_Socket_Meter/Socket_Meter.c"
             ,"Serial_Gpio_Close",0x3f5);
  uVar1 = 0xffffffff;
  if (DAT_0061505c != -1) {
    (*(code *)PTR_tcsetattr_006124e0)(DAT_0061505c,0x540e,PTR_serial_options_orig_00611dd8);
    (*(code *)PTR_close_0061276c)(DAT_0061505c);
    uVar1 = 0;
  }
  return uVar1;
}


/* FUN_00432524 @ 00432524 */

undefined4 FUN_00432524(void)

{
  undefined4 uVar1;
  
  uVar1 = 0xffffffff;
  if (DAT_00615058 != -1) {
    (*(code *)PTR_tcsetattr_006124e0)(DAT_00615058,0x540e,PTR_serial_options_orig_00611dd8);
    (*(code *)PTR_close_0061276c)(DAT_00615058);
    uVar1 = 0;
  }
  return uVar1;
}


/* Serial_Gpio_Write @ 0043258c */

/* WARNING: Restarted to delay deadcode elimination for space: ram */

undefined4 Serial_Gpio_Write(void)

{
  undefined4 uVar1;
  
  if (DAT_00615055 == '\0') {
    if (DAT_0061504a != DAT_00615054) {
      DAT_00615055 = '\x01';
    }
  }
  else {
    if (DAT_00615055 == '\x01') {
      DAT_00615048 = DAT_0061504a;
      DAT_00615054 = DAT_0061504a;
      (*(code *)PTR_HKUpdateValueToGlobalEventTable_00613b54)(10);
    }
    DAT_00615055 = '\0';
  }
  if ((PTR_receivebuffer_00612828[DAT_00615050 + -4] == -2) &&
     (PTR_receivebuffer_00612828[DAT_00615050 + -1] == 'V')) {
    if ((PTR_receivebuffer_00612828[DAT_00615050 + -3] == '0') &&
       (PTR_receivebuffer_00612828[DAT_00615050 + -2] == '0')) {
      DAT_00615049 = 0;
      uVar1 = 0;
    }
    else {
      DAT_00615049 = 1;
      uVar1 = 1;
    }
    (*(code *)PTR_fprintf_006120cc)
              (*(undefined4 *)PTR_stdout_00612c98,"relay_switchstate = %d\n",DAT_00615049);
    (*(code *)PTR_HKUpdateValueToGlobalEventTable_00613b54)(9,uVar1);
  }
  return 0;
}


/* FUN_004326d4 @ 004326d4 */

void FUN_004326d4(undefined4 param_1)

{
  int iVar1;
  undefined1 auStack_108 [256];
  
  (*(code *)PTR_printf_0061185c)("Receive in status: %d\n",param_1);
  iVar1 = (*(code *)PTR_read_00612ef0)(DAT_00615058,auStack_108,0xff);
  auStack_108[iVar1] = 0;
  (*(code *)PTR_printf_0061185c)("%s:%d\n",auStack_108,iVar1);
  return;
}


/* FUN_00432754 @ 00432754 */

int FUN_00432754(undefined1 *param_1,undefined4 param_2)

{
  uint *puVar1;
  int iVar2;
  int *piVar3;
  undefined4 local_98;
  undefined4 local_94;
  uint local_90 [32];
  uint uStack_10;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  puVar1 = local_90;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  } while (puVar1 != &uStack_10);
  local_90[DAT_0061505c >> 5] = local_90[DAT_0061505c >> 5] | 1 << (DAT_0061505c & 0x1f);
  local_98 = 1;
  local_94 = 0;
  iVar2 = (*(code *)PTR_select_00612e2c)(DAT_0061505c + 1,local_90,0,0,&local_98);
  if ((iVar2 < 0) && (piVar3 = (int *)(*(code *)PTR___errno_location_0061397c)(), *piVar3 != 4)) {
    (*(code *)PTR_printf_0061185c)("select error");
    iVar2 = 0;
  }
  else if ((((int)local_90[DAT_0061505c >> 5] >> (DAT_0061505c & 0x1f) & 1U) == 0) ||
          (iVar2 = (*(code *)PTR_read_00612ef0)(DAT_0061505c,param_1,param_2), iVar2 < 1)) {
    (*(code *)PTR_fputs_00612428)("Receieve non data \n",*(undefined4 *)PTR_stdout_00612c98);
    iVar2 = 0;
  }
  return iVar2;
}


/* Get_Power_value @ 004328b8 */

/* WARNING: Unknown calling convention */

float Get_Power_value(void)

{
  int iVar1;
  undefined4 uVar2;
  float fVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_20 [20];
  
  DAT_0061504c = 1;
  (*(code *)PTR_write_00612898)(DAT_0061505c,&DAT_005ffce8,0xe);
  iVar1 = FUN_00432754(auStack_20,10,&DAT_005ffce8,0xe);
  fVar3 = 0.0;
  if (0 < iVar1) {
    iVar1 = (*(code *)PTR_memchr_00611e1c)(auStack_20,0xff,iVar1);
    uVar2 = (*(code *)PTR___floatunsisf_00612818)(*(undefined1 *)(iVar1 + 2));
    uVar4 = (*(code *)PTR___extendsfdf2_00611f30)(uVar2);
    uVar4 = (*(code *)PTR___muldf3_00612854)
                      ((int)((ulonglong)uVar4 >> 0x20),(int)uVar4,DAT_005ad980,DAT_005ad984);
    uVar2 = (*(code *)PTR___floatunsisf_00612818)(*(undefined1 *)(iVar1 + 1));
    uVar5 = (*(code *)PTR___extendsfdf2_00611f30)(uVar2);
    uVar4 = (*(code *)PTR___adddf3_006127b4)
                      ((int)((ulonglong)uVar4 >> 0x20),(int)uVar4,(int)((ulonglong)uVar5 >> 0x20),
                       (int)uVar5);
    uVar4 = (*(code *)PTR___adddf3_006127b4)((int)((ulonglong)uVar4 >> 0x20),(int)uVar4,0,0);
    fVar3 = (float)(*(code *)PTR___truncdfsf2_00613a98)((int)((ulonglong)uVar4 >> 0x20),(int)uVar4);
    uVar2 = *(undefined4 *)PTR_stdout_00612c98;
    uVar4 = (*(code *)PTR___extendsfdf2_00611f30)(fVar3);
    (*(code *)PTR_fprintf_006120cc)
              (uVar2,"Power value = %f\n",(int)((ulonglong)uVar4 >> 0x20),(int)uVar4);
  }
  DAT_0061504c = 0;
  return fVar3;
}


/* Get_Irms_value @ 00432a68 */

/* WARNING: Unknown calling convention */

float Get_Irms_value(void)

{
  int iVar1;
  undefined4 uVar2;
  float fVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_20 [20];
  
  DAT_0061504c = 1;
  (*(code *)PTR_write_00612898)(DAT_0061505c,&DAT_005ffcd8,0xe);
  iVar1 = FUN_00432754(auStack_20,10,&DAT_005ffcd8,0xe);
  fVar3 = 0.0;
  if (0 < iVar1) {
    iVar1 = (*(code *)PTR_memchr_00611e1c)(auStack_20,0xff,iVar1);
    uVar2 = (*(code *)PTR___floatunsisf_00612818)(*(undefined1 *)(iVar1 + 2));
    uVar4 = (*(code *)PTR___extendsfdf2_00611f30)(uVar2);
    uVar2 = (*(code *)PTR___floatunsisf_00612818)(*(undefined1 *)(iVar1 + 1));
    uVar5 = (*(code *)PTR___extendsfdf2_00611f30)(uVar2);
    uVar5 = (*(code *)PTR___muldf3_00612854)
                      ((int)((ulonglong)uVar5 >> 0x20),(int)uVar5,DAT_005ad988,DAT_005ad98c);
    uVar4 = (*(code *)PTR___adddf3_006127b4)
                      ((int)((ulonglong)uVar4 >> 0x20),(int)uVar4,(int)((ulonglong)uVar5 >> 0x20),
                       (int)uVar5);
    uVar4 = (*(code *)PTR___adddf3_006127b4)((int)((ulonglong)uVar4 >> 0x20),(int)uVar4,0,0);
    fVar3 = (float)(*(code *)PTR___truncdfsf2_00613a98)((int)((ulonglong)uVar4 >> 0x20),(int)uVar4);
    uVar2 = *(undefined4 *)PTR_stdout_00612c98;
    uVar4 = (*(code *)PTR___extendsfdf2_00611f30)(fVar3);
    (*(code *)PTR_fprintf_006120cc)
              (uVar2,"Irms value = %f\n",(int)((ulonglong)uVar4 >> 0x20),(int)uVar4);
  }
  DAT_0061504c = 0;
  return fVar3;
}


/* Get_Vrms_value @ 00432c18 */

/* WARNING: Unknown calling convention */

float Get_Vrms_value(void)

{
  int iVar1;
  undefined4 uVar2;
  float fVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_20 [20];
  
  DAT_0061504c = 1;
  (*(code *)PTR_write_00612898)(DAT_0061505c,&DAT_005ffcc8,0xe);
  iVar1 = FUN_00432754(auStack_20,10,&DAT_005ffcc8,0xe);
  fVar3 = 0.0;
  if (0 < iVar1) {
    iVar1 = (*(code *)PTR_memchr_00611e1c)(auStack_20,0xff,iVar1);
    uVar2 = (*(code *)PTR___floatunsisf_00612818)(*(undefined1 *)(iVar1 + 2));
    uVar2 = (*(code *)PTR___mulsf3_00611bc8)(uVar2,DAT_005ad998);
    uVar4 = (*(code *)PTR___extendsfdf2_00611f30)(uVar2);
    uVar2 = (*(code *)PTR___floatunsisf_00612818)(*(undefined1 *)(iVar1 + 1));
    uVar5 = (*(code *)PTR___extendsfdf2_00611f30)(uVar2);
    uVar5 = (*(code *)PTR___muldf3_00612854)
                      ((int)((ulonglong)uVar5 >> 0x20),(int)uVar5,DAT_005ad990,DAT_005ad994);
    uVar4 = (*(code *)PTR___adddf3_006127b4)
                      ((int)((ulonglong)uVar4 >> 0x20),(int)uVar4,(int)((ulonglong)uVar5 >> 0x20),
                       (int)uVar5);
    fVar3 = (float)(*(code *)PTR___truncdfsf2_00613a98)((int)((ulonglong)uVar4 >> 0x20),(int)uVar4);
    uVar2 = *(undefined4 *)PTR_stdout_00612c98;
    uVar4 = (*(code *)PTR___extendsfdf2_00611f30)(fVar3);
    (*(code *)PTR_fprintf_006120cc)
              (uVar2,"Vrms value = %f\n",(int)((ulonglong)uVar4 >> 0x20),(int)uVar4);
  }
  DAT_0061504c = 0;
  return fVar3;
}


/* Get_Relay_State @ 00432dc8 */

undefined4 Get_Relay_State(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_108 [256];
  
  DAT_0061504c = 1;
  (*(code *)PTR_write_00612898)(DAT_0061505c,&DAT_005ffcb8,0xe);
  iVar1 = FUN_00432754(auStack_108,0xff,&DAT_005ffcc8,0xe);
  if (0 < iVar1) {
    iVar1 = (*(code *)PTR_memchr_00611e1c)(auStack_108,0xfe,iVar1);
    if ((*(char *)(iVar1 + 1) == '0') && (*(char *)(iVar1 + 2) == '0')) {
      DAT_00615049 = 0;
      uVar2 = 0;
    }
    else {
      DAT_00615049 = 1;
      uVar2 = 1;
    }
    (*(code *)PTR_fprintf_006120cc)
              (*(undefined4 *)PTR_stdout_00612c98,"relay_switchstate = %d\n",DAT_00615049);
    (*(code *)PTR_HKUpdateValueToGlobalEventTable_00613b54)(9,uVar2);
  }
  DAT_0061504c = 0;
  return 1;
}


/* Relay_SwitchSetup @ 00432ed8 */

undefined4 Relay_SwitchSetup(char param_1)

{
  undefined4 uVar1;
  
  DAT_0061504c = 1;
  if (param_1 == '\0') {
    (*(code *)PTR_fputs_00612428)("Switch off\n",*(undefined4 *)PTR_stdout_00612c98);
    (*(code *)PTR_write_00612898)(DAT_0061505c,&DAT_005ffc78,0xe);
    DAT_00615049 = 0;
    uVar1 = 0;
  }
  else if (param_1 == '\x01') {
    (*(code *)PTR_fputs_00612428)("Switch on\n",*(undefined4 *)PTR_stdout_00612c98);
    (*(code *)PTR_write_00612898)(DAT_0061505c,&DAT_005ffc88,0xe);
    uVar1 = 1;
    DAT_00615049 = 1;
  }
  else {
    (*(code *)PTR_fputs_00612428)("Every fail\n",*(undefined4 *)PTR_stdout_00612c98);
    uVar1 = 0xffffffff;
  }
  DAT_0061504c = 0;
  return uVar1;
}


/* FUN_00432fcc @ 00432fcc */

int FUN_00432fcc(void)

{
  undefined4 uVar1;
  undefined4 local_70;
  code *local_6c;
  undefined1 auStack_68 [16];
  undefined4 local_58;
  undefined1 auStack_50 [8];
  uint local_48;
  uint local_44;
  int local_18;
  
  DAT_00615058 = (*(code *)PTR_open_006138f8)(PTR_s__dev_ttyACM0_005ed7c8,0x82);
  if (DAT_00615058 == -1) {
    (*(code *)PTR_puts_006117e4)("Unable to open /dev/ttyUSB0");
  }
  else {
    local_6c = FUN_004326d4;
    (*(code *)PTR_sigemptyset_00611fa0)(auStack_68);
    local_70 = 0;
    local_58 = 0;
    (*(code *)PTR_sigaction_00612630)(0x16,&local_70,0);
    local_18 = DAT_00615058;
    uVar1 = (*(code *)PTR_getpid_00612c9c)();
    (*(code *)PTR_fcntl_00612fec)(local_18,0x18,uVar1);
    (*(code *)PTR_fcntl_00612fec)(DAT_00615058,4,0x1000);
    (*(code *)PTR_puts_006117e4)("Serial Port open");
    (*(code *)PTR_tcgetattr_00612368)(DAT_00615058,PTR_serial_options_orig_00611dd8);
    (*(code *)PTR_tcgetattr_00612368)(DAT_00615058,auStack_50);
    (*(code *)PTR_cfsetispeed_00612e1c)(auStack_50,0x1002);
    (*(code *)PTR_cfsetospeed_00612ab8)(auStack_50,0x1002);
    local_48 = local_48 | 0x8b0;
    local_44 = local_44 | 2;
    (*(code *)PTR_tcsetattr_006124e0)(DAT_00615058,0x540e,auStack_50);
  }
  return DAT_00615058;
}


/* FUN_00433178 @ 00433178 */

int FUN_00433178(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int unaff_s0;
  
  if (param_1 == 1) {
    unaff_s0 = (*(code *)PTR_open_006138f8)(PTR_s__dev_ttyACM0_005ed7c8,0x882);
    if (unaff_s0 == -1) {
LAB_00433240:
      (*(code *)PTR_perror_006121c8)("Can\'t Open Serial Port");
      return unaff_s0;
    }
    pcVar3 = "open ttyUSB0 .....";
  }
  else if (param_1 == 2) {
    unaff_s0 = (*(code *)PTR_open_006138f8)("/dev/ttyS1",0x882);
    if (unaff_s0 == -1) goto LAB_00433240;
    pcVar3 = "open ttyS1 .....";
  }
  else {
    if (param_1 != 3) goto LAB_00433274;
    unaff_s0 = (*(code *)PTR_open_006138f8)("/dev/ttyS2",0x882);
    if (unaff_s0 == -1) goto LAB_00433240;
    pcVar3 = "open ttyS2 .....";
  }
  (*(code *)PTR_puts_006117e4)(pcVar3);
LAB_00433274:
  iVar1 = (*(code *)PTR_fcntl_00612fec)(unaff_s0,4,0);
  if (iVar1 < 0) {
    (*(code *)PTR_puts_006117e4)("fcntl failed!");
  }
  else {
    uVar2 = (*(code *)PTR_fcntl_00612fec)(unaff_s0,4,0);
    (*(code *)PTR_printf_0061185c)("fcntl=%d\n",uVar2);
  }
  iVar1 = (*(code *)PTR_isatty_00612844)(0);
  if (iVar1 == 0) {
    pcVar3 = "standard input is not a terminal device";
  }
  else {
    pcVar3 = "isatty success!";
  }
  (*(code *)PTR_puts_006117e4)(pcVar3);
  (*(code *)PTR_printf_0061185c)("fd-open=%d\n",unaff_s0);
  return unaff_s0;
}


/* FUN_0043334c @ 0043334c */

undefined4 FUN_0043334c(undefined4 param_1,int param_2,int param_3,char param_4,int param_5)

{
  uint uVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  uint local_80 [2];
  uint local_78;
  undefined1 local_6b;
  undefined1 local_6a;
  undefined1 auStack_4c [52];
  
  iVar2 = (*(code *)PTR_tcgetattr_00612368)(param_1,auStack_4c);
  if (iVar2 != 0) {
    pcVar3 = "SetupSerial 1";
    goto LAB_004335dc;
  }
  (*(code *)PTR_memset_0061223c)(local_80,0,0x34);
  uVar1 = local_78 & 0xffffffcf;
  if (param_3 == 7) {
    local_78 = uVar1 | 0x8a0;
  }
  else {
    local_78 = uVar1 | 0x880;
    if (param_3 == 8) {
      local_78 = uVar1 | 0x8b0;
    }
  }
  if (param_4 == 'N') {
    local_78 = local_78 & 0xfffffeff;
  }
  else if (param_4 == 'O') {
    local_78 = local_78 | 0x300;
    local_80[0] = local_80[0] | 0x10;
  }
  else if (param_4 == 'E') {
    local_78 = local_78 & 0xfffffdff | 0x100;
    local_80[0] = local_80[0] | 0x10;
  }
  if (param_2 == 0x12c0) {
    (*(code *)PTR_cfsetispeed_00612e1c)(local_80,0xc);
    uVar4 = 0xc;
  }
  else if (param_2 < 0x12c1) {
    if (param_2 == 0x960) {
      (*(code *)PTR_cfsetispeed_00612e1c)(local_80,0xb);
      uVar4 = 0xb;
    }
    else {
LAB_00433528:
      (*(code *)PTR_cfsetispeed_00612e1c)(local_80,0xd);
      uVar4 = 0xd;
    }
  }
  else {
    if ((param_2 == 0x2580) || (param_2 != 0x1c200)) goto LAB_00433528;
    (*(code *)PTR_cfsetispeed_00612e1c)(local_80,0x1002);
    uVar4 = 0x1002;
  }
  (*(code *)PTR_cfsetospeed_00612ab8)(local_80,uVar4);
  if (param_5 == 1) {
    local_78 = local_78 & 0xffffffbf;
  }
  else if (param_5 == 2) {
    local_78 = local_78 | 0x40;
  }
  local_6a = 0;
  local_6b = 0;
  (*(code *)PTR_tcflush_00612100)(param_1,0);
  iVar2 = (*(code *)PTR_tcsetattr_006124e0)(param_1,0x540e,local_80);
  if (iVar2 == 0) {
    (*(code *)PTR_puts_006117e4)("set done!");
    return 0;
  }
  pcVar3 = "com set error";
LAB_004335dc:
  (*(code *)PTR_perror_006121c8)(pcVar3);
  return 0xffffffff;
}


/* Serial_Gpio_Open @ 00433620 */

undefined4 Serial_Gpio_Open(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  undefined1 auStack_68 [40];
  undefined1 auStack_40 [40];
  undefined1 *local_18;
  
  (*(code *)PTR_memset_0061223c)(auStack_68,0,0x22);
  uVar2 = (*(code *)PTR_fopen_00612ac0)("/proc/wlan0/gpio_ctrl","w");
  (*(code *)PTR_fprintf_006120cc)(uVar2,"config %d w",0);
  puVar1 = PTR_stdout_00612c98;
  (*(code *)PTR_fclose_00612ba0)(uVar2);
  uVar2 = (*(code *)PTR_fopen_00612ac0)("/proc/wlan0/gpio_ctrl","w");
  (*(code *)PTR_fprintf_006120cc)(uVar2,"config %d r",6);
  (*(code *)PTR_fclose_00612ba0)(uVar2);
  (*(code *)PTR_fputs_00612428)("USB to UART Enable...\n",*(undefined4 *)puVar1);
  DAT_0061505c = FUN_00433178(1);
  if (DAT_0061505c < 0) {
    uVar2 = *(undefined4 *)puVar1;
    pcVar4 = "open_port error\n";
  }
  else {
    iVar3 = FUN_0043334c(DAT_0061505c,0x4b00,8,0x4e,1);
    if (-1 < iVar3) goto LAB_00433790;
    uVar2 = *(undefined4 *)puVar1;
    pcVar4 = "set_opt error\n";
  }
  (*(code *)PTR_fputs_00612428)(pcVar4,uVar2);
LAB_00433790:
  (*(code *)PTR_printf_0061185c)("serialport fd=%d\n",DAT_0061505c);
  (*(code *)PTR_printf_0061185c)("FW Version is %s\n","10206");
  Relay_SwitchSetup(0);
  Identify_LEDSetup(0);
  local_18 = auStack_40;
  (*(code *)PTR_Get_product_info_00611b70)(local_18);
  (*(code *)PTR_memcpy_006137d0)(auStack_68,local_18,0x22);
  return 0;
}


/* Serial_Gpio_Read @ 00433824 */

/* WARNING: Restarted to delay deadcode elimination for space: ram */

undefined4 Serial_Gpio_Read(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_90 [128];
  
  (*(code *)PTR_memset_0061223c)(auStack_90,0,0x80);
  uVar1 = (*(code *)PTR_fopen_00612ac0)("/proc/wlan0/gpio_ctrl","r");
  (*(code *)PTR_fseek_00611e8c)(uVar1,0,0);
  iVar2 = (*(code *)PTR_fread_00612b58)(auStack_90,1,0xf,uVar1);
  (*(code *)PTR_fclose_00612ba0)(uVar1);
  if (iVar2 == 0) {
    Serial_Gpio_Close();
    Serial_Gpio_Open();
    (*(code *)PTR_fprintf_006120cc)
              (*(undefined4 *)PTR_stderr_0061292c,
               "\nFILE %s FUNCTION %s LINE %d: gpio re-config...\n\n",
               "/home/vendor/rtl819x_v3464_homekit/users/phytrex-homekit/customize/Incipio_Socket_Meter/Socket_Meter.c"
               ,"Serial_Gpio_Read",0x3cb);
    uVar1 = 1;
  }
  else {
    iVar2 = (*(code *)PTR_memcmp_00611fdc)(auStack_90,"GPIO6 1",7);
    if (iVar2 == 0) {
      DAT_0061504a = 0;
    }
    else {
      iVar2 = (*(code *)PTR_memcmp_00611fdc)(auStack_90,"GPIO6 0",7);
      if (iVar2 == 0) {
        DAT_0061504a = 1;
      }
    }
    uVar1 = 0;
    if (DAT_0061504c == 0) {
      (*(code *)PTR_memset_0061223c)(PTR_receivebuffer_00612828,0,0x32);
      iVar2 = (*(code *)PTR_read_00612ef0)(DAT_0061505c,PTR_receivebuffer_00612828,0x32);
      uVar1 = 1;
      if (0 < iVar2) {
        uVar1 = 0;
        DAT_00615050 = iVar2;
      }
    }
  }
  return uVar1;
}


/* FUN_004339e8 @ 004339e8 */

/* WARNING: Restarted to delay deadcode elimination for space: ram */

void FUN_004339e8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  char *pcVar3;
  int iVar4;
  char cVar5;
  char cVar6;
  char *pcVar7;
  char acStack_a2 [30];
  char cStack_84;
  char local_83;
  int local_38;
  char *local_34;
  char *local_30;
  char *local_2c;
  
  puVar1 = PTR_cmdlen_0061385c;
  (*(code *)PTR_fputs_00612428)
            ("Starting SerialPortThread thread\n",*(undefined4 *)PTR_stdout_00612c98);
LAB_00433a70:
  do {
    if (0 < *(int *)puVar1) {
      (*(code *)PTR_printf_0061185c)("\n cmdlen=%d \n");
      pcVar3 = (char *)0x0;
      pcVar7 = PTR_cmdBuffer_00611784;
      while( true ) {
        puVar2 = PTR_cmdlen_0061385c;
        if (*(int *)puVar1 <= (int)pcVar3) break;
        local_30 = pcVar7;
        local_2c = pcVar3 + 1;
        (*(code *)PTR_printf_0061185c)(&DAT_005ad86c,pcVar7[(int)pcVar3]);
        pcVar3 = local_2c;
        pcVar7 = local_30;
      }
      (*(code *)PTR_putchar_00613588)(10);
      (*(code *)PTR_write_00612898)(DAT_0061505c,PTR_cmdBuffer_00611784,*(undefined4 *)puVar2);
      *(undefined4 *)puVar2 = 0;
      (*(code *)PTR_printf_0061185c)("write to serial port=%d\n",0);
    }
    local_38 = (*(code *)PTR_read_00612ef0)(DAT_0061505c,acStack_a2 + 2,100);
  } while (local_38 < 1);
  local_2c = (char *)0x0;
  local_34 = acStack_a2 + 2;
  (*(code *)PTR_printf_0061185c)("nread=%d\n",local_38);
  do {
    pcVar3 = local_34 + (int)local_2c;
    local_2c = local_2c + 1;
    (*(code *)PTR_printf_0061185c)(&DAT_005ad86c,*pcVar3);
  } while ((int)local_2c < local_38);
  (*(code *)PTR_putchar_00613588)(10);
  if (local_38 != 0x16) goto code_r0x00433bdc;
  goto LAB_00433cb0;
code_r0x00433bdc:
  if (local_38 == 0x1f) {
    acStack_a2[4] = 0xe0;
    acStack_a2[5] = 0x4c;
    acStack_a2[6] = 0x81;
    acStack_a2[7] = 0x96;
    acStack_a2[8] = 0xc1;
    acStack_a2[3] = 0;
    local_83 = '\0';
    pcVar3 = local_34;
    do {
      pcVar7 = pcVar3 + 1;
      pcVar3 = pcVar3 + 1;
      local_83 = local_83 + *pcVar7;
    } while (pcVar3 != &cStack_84);
    local_83 = -local_83;
    local_34 = local_34 + 0x1f;
    local_2c = acStack_a2 + 2;
    (*(code *)PTR_printf_0061185c)("modify nread=%d\n",0x1f);
    do {
      cVar5 = *local_2c;
      local_2c = local_2c + 1;
      (*(code *)PTR_printf_0061185c)(&DAT_005ad86c,cVar5);
    } while (local_2c != local_34);
    (*(code *)PTR_putchar_00613588)(10);
LAB_00433cb0:
    cVar5 = '\0';
    for (iVar4 = 1; iVar4 <= local_38 + -3; iVar4 = iVar4 + 1) {
      cVar5 = cVar5 + acStack_a2[iVar4 + 2];
    }
    cVar6 = '\0';
    for (iVar4 = 1; iVar4 < local_38 + -2; iVar4 = iVar4 + 1) {
      cVar6 = cVar6 + acStack_a2[iVar4 + 2];
    }
    pcVar3 = "CKOK %2X \n";
    if (acStack_a2[local_38] != -cVar6) {
      pcVar3 = "CKERROR %2X \n";
    }
    (*(code *)PTR_printf_0061185c)(pcVar3,-cVar5);
    DAT_005ffc73 = 0;
    cVar5 = '\0';
    pcVar3 = &DAT_005ffc60;
    do {
      pcVar7 = pcVar3 + 1;
      pcVar3 = pcVar3 + 1;
      cVar5 = cVar5 + *pcVar7;
    } while (pcVar3 != &DAT_005ffc73);
    DAT_005ffc74 = -cVar5;
    (*(code *)PTR_write_00612898)(DAT_0061505c,&DAT_005ffc60,0x16);
    (*(code *)PTR_printf_0061185c)("HandShakeResponse size=%d\n",0x16);
    pcVar3 = &DAT_005ffc60;
    pcVar7 = &DAT_005ffc76;
    while (pcVar3 != pcVar7) {
      local_2c = pcVar3 + 1;
      local_30 = pcVar7;
      (*(code *)PTR_printf_0061185c)(&DAT_005ad86c,*pcVar3);
      pcVar3 = local_2c;
      pcVar7 = local_30;
    }
    (*(code *)PTR_putchar_00613588)(10);
  }
  goto LAB_00433a70;
}


/* FUN_00433eb0 @ 00433eb0 */

uint FUN_00433eb0(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  undefined *puVar3;
  int iVar4;
  undefined1 auStack_88 [4];
  int local_84;
  char local_7f;
  int local_7c;
  char local_74;
  char local_71;
  int local_70;
  char local_6c;
  int local_68;
  byte local_64;
  int local_60;
  uint local_40;
  undefined1 *local_3c;
  int local_38;
  int local_34;
  undefined *local_30;
  
  local_3c = auStack_88;
  piVar2 = (int *)(PTR_hapObjects_00613b3c + 4);
  iVar1 = 0;
  local_34 = 0xb5;
  local_30 = PTR_hapObjects_00613b3c;
  local_38 = param_2;
  do {
    if (*piVar2 == 0) {
      return 0xfffeecfe;
    }
    iVar4 = 0;
    puVar3 = local_30 + (iVar1 * local_34 + 1) * 8 + 4;
    do {
      (*(code *)PTR_memcpy_006137d0)(local_3c,puVar3,0x48);
      local_40 = (uint)local_64;
      if ((local_7c != 0) && (local_84 == local_38)) {
        if (local_74 == '\0') {
          return 0xfffeecfe;
        }
        if (local_7f == '\0') {
          return 1;
        }
        if (local_7c == 1) {
          if ((local_71 != '\0') && (local_6c != '\0')) {
            if (param_3 < local_70) {
              return 1;
            }
            if (local_68 < param_3) {
              return 1;
            }
            if (local_40 == 0) {
              return 0;
            }
LAB_00434098:
            if (local_60 == 0) {
              trap(0x1c00);
            }
            return (uint)(param_3 % local_60 != 0);
          }
        }
        else {
          if (local_7c != 2) {
            return 0;
          }
          if ((local_71 != '\0') && (local_6c != '\0')) {
            iVar1 = (*(code *)PTR___ltsf2_006137b4)(param_3,local_70);
            if (iVar1 < 0) {
              return 1;
            }
            iVar1 = (*(code *)PTR___gtsf2_00611a8c)(param_3,local_68);
            if (0 < iVar1) {
              return 1;
            }
            if (local_40 == 0) {
              return 0;
            }
            param_3 = (*(code *)PTR___fixsfsi_00613488)(param_3);
            local_60 = (*(code *)PTR___fixsfsi_00613488)(local_60);
            goto LAB_00434098;
          }
        }
      }
      iVar4 = iVar4 + 1;
      puVar3 = puVar3 + 0x48;
    } while (iVar4 != 0x14);
    iVar1 = iVar1 + 1;
    piVar2 = piVar2 + 0x16a;
    if (iVar1 == 10) {
      return 0xfffeecfe;
    }
  } while( true );
}


/* FUN_00434114 @ 00434114 */

undefined4 FUN_00434114(void)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = 0xffffffff;
  if (DAT_005ffd00 != -1) {
    iVar2 = (*(code *)PTR_mq_close_00611838)();
    if (iVar2 == 0) {
      DAT_005ffd00 = -1;
      uVar1 = 0;
    }
    else {
      uVar1 = 0xffffffff;
    }
  }
  return uVar1;
}


/* shared_ServerReadDetach @ 0043417c */

undefined4 shared_ServerReadDetach(void)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = 0xffffffff;
  if (DAT_005ffd04 != -1) {
    iVar2 = (*(code *)PTR_mq_close_00611838)();
    if (iVar2 == 0) {
      DAT_005ffd04 = -1;
      uVar1 = 0;
    }
    else {
      uVar1 = 0xffffffff;
    }
  }
  return uVar1;
}


/* FUN_004341e4 @ 004341e4 */

undefined4 FUN_004341e4(void)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0xffffffff;
  if (DAT_005ffd08 != -1) {
    iVar1 = (*(code *)PTR_mq_close_00611838)();
    uVar2 = 0xffffffff;
    if (iVar1 == 0) {
      DAT_005ffd08 = -1;
      iVar1 = (*(code *)PTR_mq_unlink_0061328c)("/mqphytrexread");
      uVar2 = 0;
      if (iVar1 != 0) {
        uVar2 = 0xffffffff;
      }
    }
  }
  return uVar2;
}


/* shared_ServerWriteDetach @ 00434268 */

undefined4 shared_ServerWriteDetach(void)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0xffffffff;
  if (DAT_005ffd0c != -1) {
    iVar1 = (*(code *)PTR_mq_close_00611838)();
    uVar2 = 0xffffffff;
    if (iVar1 == 0) {
      DAT_005ffd0c = -1;
      iVar1 = (*(code *)PTR_mq_unlink_0061328c)("/mqphytrexwrite");
      uVar2 = 0;
      if (iVar1 != 0) {
        uVar2 = 0xffffffff;
      }
    }
  }
  return uVar2;
}


/* FUN_004342ec @ 004342ec */

undefined4 FUN_004342ec(undefined4 param_1,int *param_2)

{
  int iVar1;
  undefined1 auStack_30 [4];
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  undefined1 auStack_1c [12];
  
  if (DAT_005ffd04 != -1) {
    (*(code *)PTR_clock_gettime_006138fc)(0,&local_2c);
    local_20 = local_28 + 0x457;
    local_24 = local_2c + 5;
    iVar1 = (*(code *)PTR_mq_timedreceive_006134d0)(DAT_005ffd04,param_1,0x100,auStack_30,&local_24)
    ;
    (*(code *)PTR_clock_gettime_006138fc)(0,auStack_1c);
    if (-1 < iVar1) {
      *param_2 = iVar1;
      return 0;
    }
  }
  return 0xffffffff;
}


/* FUN_004343b8 @ 004343b8 */

undefined4 FUN_004343b8(undefined4 param_1,int *param_2)

{
  int iVar1;
  undefined1 auStack_30 [4];
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  undefined1 auStack_1c [12];
  
  if (DAT_005ffd00 != -1) {
    (*(code *)PTR_clock_gettime_006138fc)(0,&local_2c);
    local_20 = local_28 + 0x457;
    local_24 = local_2c + 5;
    iVar1 = (*(code *)PTR_mq_timedreceive_006134d0)(DAT_005ffd00,param_1,0x100,auStack_30,&local_24)
    ;
    (*(code *)PTR_clock_gettime_006138fc)(0,auStack_1c);
    if (-1 < iVar1) {
      *param_2 = iVar1;
      return 0;
    }
  }
  return 0xffffffff;
}


/* FUN_00434484 @ 00434484 */

undefined4 FUN_00434484(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  if ((DAT_005ffd08 != -1) &&
     (iVar1 = (*(code *)PTR_mq_send_00611b74)(DAT_005ffd08,param_1,param_2,0), iVar1 == 0)) {
    return 0;
  }
  return 0xffffffff;
}


/* FUN_004344e0 @ 004344e0 */

undefined4 FUN_004344e0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  if ((DAT_005ffd0c != -1) &&
     (iVar1 = (*(code *)PTR_mq_send_00611b74)(DAT_005ffd0c,param_1,param_2,0), iVar1 == 0)) {
    return 0;
  }
  return 0xffffffff;
}


/* FUN_0043453c @ 0043453c */

undefined4 FUN_0043453c(void)

{
  undefined4 uVar1;
  
  uVar1 = 0xfffffffe;
  if (DAT_005ffd08 == -1) {
    DAT_005ffd08 = (*(code *)PTR_mq_open_006126f8)("/mqphytrexread",1);
    uVar1 = 0;
    if (DAT_005ffd08 == -1) {
      uVar1 = 0xffffffff;
    }
  }
  return uVar1;
}


/* shared_ServerReadInit @ 004345a4 */

undefined4 shared_ServerReadInit(void)

{
  undefined4 uVar1;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  uVar1 = 0xfffffffe;
  if (DAT_005ffd04 == -1) {
    local_2c = 10;
    local_28 = 0x100;
    local_30 = 0;
    local_24 = 0;
    DAT_005ffd04 = (*(code *)PTR_mq_open_006126f8)("/mqphytrexread",0x100,0x1a4,&local_30);
    uVar1 = 0;
    if (DAT_005ffd04 == -1) {
      uVar1 = 0xffffffff;
    }
  }
  return uVar1;
}


/* FUN_0043462c @ 0043462c */

undefined4 FUN_0043462c(void)

{
  undefined4 uVar1;
  
  uVar1 = 0xfffffffe;
  if (DAT_005ffd00 == -1) {
    DAT_005ffd00 = (*(code *)PTR_mq_open_006126f8)("/mqphytrexwrite",0);
    uVar1 = 0;
    if (DAT_005ffd00 == -1) {
      uVar1 = 0xffffffff;
    }
  }
  return uVar1;
}


/* shared_ServerWriteInit @ 00434694 */

undefined4 shared_ServerWriteInit(void)

{
  undefined4 uVar1;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  uVar1 = 0xfffffffe;
  if (DAT_005ffd0c == -1) {
    local_2c = 10;
    local_28 = 0x100;
    local_30 = 0;
    local_24 = 0;
    DAT_005ffd0c = (*(code *)PTR_mq_open_006126f8)("/mqphytrexwrite",0x101,0x1a4,&local_30);
    uVar1 = 0;
    if (DAT_005ffd0c == -1) {
      uVar1 = 0xffffffff;
    }
  }
  return uVar1;
}


/* FUN_00434720 @ 00434720 */

undefined4 FUN_00434720(undefined4 param_1,int param_2,int param_3)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  int local_res8;
  int local_14;
  int local_10;
  
  local_10 = 0;
  local_14 = 0;
  local_res8 = param_3;
  do {
    while( true ) {
      bVar2 = local_res8 == 0;
      local_res8 = local_res8 + -1;
      if (bVar2) {
        if (0 < local_10 - local_14) {
          (*(code *)PTR_printbuf_memappend_00611768)(param_1,param_2 + local_14,local_10 - local_14)
          ;
        }
        return 0;
      }
      bVar1 = *(byte *)(param_2 + local_10);
      uVar3 = (uint)bVar1;
      if (uVar3 < 0xe) break;
      if (((uVar3 != 0x2f) && (uVar3 != 0x5c)) && (uVar3 != 0x22)) goto LAB_00434a6c;
LAB_004347d4:
      if (0 < local_10 - local_14) {
        (*(code *)PTR_printbuf_memappend_00611768)(param_1,param_2 + local_14,local_10 - local_14);
      }
      if (bVar1 == 8) {
        (*(code *)PTR_printbuf_memappend_00611768)(param_1,PTR_PTR_006114b0 + -0x2618,2);
      }
      else if (bVar1 == 10) {
        (*(code *)PTR_printbuf_memappend_00611768)(param_1,PTR_PTR_006114b0 + -0x2614,2);
      }
      else if (bVar1 == 0xd) {
        (*(code *)PTR_printbuf_memappend_00611768)(param_1,PTR_PTR_006114b0 + -0x2610,2);
      }
      else if (bVar1 == 9) {
        (*(code *)PTR_printbuf_memappend_00611768)(param_1,PTR_PTR_006114b0 + -0x260c,2);
      }
      else if (bVar1 == 0xc) {
        (*(code *)PTR_printbuf_memappend_00611768)(param_1,PTR_PTR_006114b0 + -0x2608,2);
      }
      else if (bVar1 == 0x22) {
        (*(code *)PTR_printbuf_memappend_00611768)(param_1,PTR_PTR_006114b0 + -0x2604,2);
      }
      else if (bVar1 == 0x5c) {
        (*(code *)PTR_printbuf_memappend_00611768)(param_1,PTR_PTR_006114b0 + -0x2600,2);
      }
      else if (bVar1 == 0x2f) {
        (*(code *)PTR_printbuf_memappend_00611768)(param_1,PTR_PTR_006114b0 + -0x25fc,2);
      }
      local_14 = local_10 + 1;
      local_10 = local_14;
    }
    if ((0xb < uVar3) || (uVar3 - 8 < 3)) goto LAB_004347d4;
LAB_00434a6c:
    if (bVar1 < 0x20) {
      if (0 < local_10 - local_14) {
        (*(code *)PTR_printbuf_memappend_00611768)(param_1,param_2 + local_14,local_10 - local_14);
      }
      (*(code *)PTR_sprintbuf_00612f2c)
                (param_1,PTR_PTR_006114b0 + -0x25f8,
                 (int)*(char *)(*(int *)PTR_json_hex_chars_00611ce0 + (uint)(bVar1 >> 4)),
                 (int)*(char *)(*(int *)PTR_json_hex_chars_00611ce0 + (bVar1 & 0xf)));
      local_14 = local_10 + 1;
      local_10 = local_14;
    }
    else {
      local_10 = local_10 + 1;
    }
  } while( true );
}


/* json_object_get @ 00434c30 */

int json_object_get(int param_1)

{
  if (param_1 != 0) {
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  }
  return param_1;
}


/* json_object_put @ 00434c88 */

undefined4 json_object_put(int param_1)

{
  undefined4 uVar1;
  
  if ((param_1 == 0) ||
     (*(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1, *(int *)(param_1 + 0xc) != 0)) {
    uVar1 = 0;
  }
  else {
    if (*(int *)(param_1 + 0x20) != 0) {
      (**(code **)(param_1 + 0x20))(param_1,*(undefined4 *)(param_1 + 0x24));
    }
    (**(code **)(param_1 + 4))(param_1);
    uVar1 = 1;
  }
  return uVar1;
}


/* FUN_00434d6c @ 00434d6c */

void FUN_00434d6c(int param_1)

{
  (*(code *)PTR_printbuf_free_00611904)(*(undefined4 *)(param_1 + 0x10));
  (*(code *)PTR_free_006119dc)(param_1);
  return;
}


/* FUN_00434df0 @ 00434df0 */

undefined4 * FUN_00434df0(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(*(code *)PTR_calloc_00613a18)(0x28,1);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = param_1;
    puVar1[3] = 1;
    puVar1[1] = PTR_LAB_006114b4 + 0x4d6c;
  }
  return puVar1;
}


/* FUN_00434ea0 @ 00434ea0 */

bool FUN_00434ea0(int *param_1,int param_2)

{
  bool bVar1;
  
  if (param_1 == (int *)0x0) {
    bVar1 = param_2 == 0;
  }
  else {
    bVar1 = *param_1 == param_2;
  }
  return bVar1;
}


/* json_object_get_type @ 00434f08 */

undefined4 json_object_get_type(undefined4 *param_1)

{
  undefined4 uVar1;
  
  if (param_1 == (undefined4 *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *param_1;
  }
  return uVar1;
}


/* FUN_00434f54 @ 00434f54 */

void FUN_00434f54(uint *param_1,uint param_2,uint param_3,uint param_4)

{
  if (param_1[8] != 0) {
    (*(code *)param_1[8])(param_1,param_1[9]);
  }
  param_1[9] = 0;
  param_1[8] = 0;
  if (param_2 == 0) {
    if (*param_1 < 7) {
                    /* WARNING: Could not emulate address calculation at 0x00435020 */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&_gp + *(int *)(PTR_PTR_006114b0 + *param_1 * 4 + -0x25ec)))();
      return;
    }
  }
  else {
    param_1[2] = param_2;
    param_1[9] = param_3;
    param_1[8] = param_4;
  }
  return;
}


/* json_object_to_json_string_ext @ 00435150 */

undefined * json_object_to_json_string_ext(int param_1,undefined4 param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (param_1 == 0) {
    puVar1 = PTR_PTR_006114b0 + -0x25d0;
  }
  else {
    if (*(int *)(param_1 + 0x10) == 0) {
      uVar2 = (*(code *)PTR_printbuf_new_00612c24)();
      *(undefined4 *)(param_1 + 0x10) = uVar2;
      if (*(int *)(param_1 + 0x10) == 0) {
        return (undefined *)0x0;
      }
    }
    (*(code *)PTR_printbuf_reset_00612fc8)(*(undefined4 *)(param_1 + 0x10));
    iVar3 = (**(code **)(param_1 + 8))(param_1,*(undefined4 *)(param_1 + 0x10),0,param_2);
    if (iVar3 < 0) {
      puVar1 = (undefined *)0x0;
    }
    else {
      puVar1 = (undefined *)**(undefined4 **)(param_1 + 0x10);
    }
  }
  return puVar1;
}


/* json_object_to_json_string @ 004352a4 */

void json_object_to_json_string(undefined4 param_1)

{
  (*(code *)PTR_json_object_to_json_string_ext_00613534)(param_1,1);
  return;
}


/* FUN_00435300 @ 00435300 */

void FUN_00435300(undefined4 param_1,int param_2,uint param_3)

{
  if ((param_3 & 2) != 0) {
    (*(code *)PTR_printbuf_memset_00611f74)(param_1,0xffffffff,0x20,param_2 << 1);
  }
  return;
}


/* FUN_0043538c @ 0043538c */

void FUN_0043538c(undefined4 param_1,undefined4 param_2,int param_3,uint param_4)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *local_14;
  
  bVar1 = false;
  (*(code *)PTR_sprintbuf_00612f2c)(param_2,PTR_PTR_006114b0 + -0x25c8);
  if ((param_4 & 2) != 0) {
    (*(code *)PTR_sprintbuf_00612f2c)(param_2,PTR_PTR_006114b0 + -0x25c4);
  }
  iVar2 = (*(code *)PTR_json_object_get_object_00612cf8)(param_1);
  for (local_14 = *(undefined4 **)(iVar2 + 0x20); local_14 != (undefined4 *)0x0;
      local_14 = (undefined4 *)local_14[2]) {
    uVar4 = *local_14;
    iVar2 = local_14[1];
    if ((bVar1) &&
       ((*(code *)PTR_sprintbuf_00612f2c)(param_2,PTR_PTR_006114b0 + -0x25c0), (param_4 & 2) != 0))
    {
      (*(code *)PTR_sprintbuf_00612f2c)(param_2,PTR_PTR_006114b0 + -0x25c4);
    }
    bVar1 = true;
    if ((param_4 & 1) != 0) {
      (*(code *)PTR_sprintbuf_00612f2c)(param_2,PTR_PTR_006114b0 + -0x25bc);
    }
    (*(code *)(PTR_LAB_006114b4 + 0x5300))(param_2,param_3 + 1,param_4);
    (*(code *)PTR_sprintbuf_00612f2c)(param_2,PTR_PTR_006114b0 + -0x25b8);
    uVar3 = (*(code *)PTR_strlen_006130b4)(uVar4);
    (*(code *)(PTR_LAB_006114b4 + 0x4720))(param_2,uVar4,uVar3);
    if ((param_4 & 1) == 0) {
      (*(code *)PTR_sprintbuf_00612f2c)(param_2,PTR_PTR_006114b0 + -0x25b0);
    }
    else {
      (*(code *)PTR_sprintbuf_00612f2c)(param_2,PTR_PTR_006114b0 + -0x25b4);
    }
    if (iVar2 == 0) {
      (*(code *)PTR_sprintbuf_00612f2c)(param_2,PTR_PTR_006114b0 + -0x25d0);
    }
    else {
      (**(code **)(iVar2 + 8))(iVar2,param_2,param_3 + 1,param_4);
    }
  }
  if ((param_4 & 2) != 0) {
    if (bVar1) {
      (*(code *)PTR_sprintbuf_00612f2c)(param_2,PTR_PTR_006114b0 + -0x25c4);
    }
    (*(code *)(PTR_LAB_006114b4 + 0x5300))(param_2,param_3,param_4);
  }
  if ((param_4 & 1) == 0) {
    (*(code *)PTR_sprintbuf_00612f2c)(param_2,PTR_PTR_006114b0 + -0x25a8);
  }
  else {
    (*(code *)PTR_sprintbuf_00612f2c)(param_2,PTR_PTR_006114b0 + -0x25ac);
  }
  return;
}


/* FUN_00435818 @ 00435818 */

void FUN_00435818(undefined4 *param_1)

{
  (*(code *)PTR_free_006119dc)(*param_1);
  (*(code *)PTR_json_object_put_00611694)(param_1[1]);
  return;
}


/* FUN_004358ac @ 004358ac */

void FUN_004358ac(int param_1)

{
  (*(code *)PTR_lh_table_free_00611e34)(*(undefined4 *)(param_1 + 0x18));
  (*(code *)(PTR_LAB_006114b4 + 0x4d6c))(param_1);
  return;
}


/* json_object_new_object @ 00435934 */

int json_object_new_object(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (*(code *)(PTR_LAB_006114b4 + 0x4df0))(4);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    *(undefined **)(iVar1 + 4) = PTR_LAB_006114b4 + 0x58ac;
    *(undefined **)(iVar1 + 8) = PTR_LAB_006114b4 + 0x538c;
    uVar2 = (*(code *)PTR_lh_kchar_table_new_006120dc)(0x10,0,PTR_LAB_006114b4 + 0x5818);
    *(undefined4 *)(iVar1 + 0x18) = uVar2;
  }
  return iVar1;
}


/* json_object_get_object @ 00435a14 */

int json_object_get_object(int *param_1)

{
  int iVar1;
  
  if (param_1 == (int *)0x0) {
    iVar1 = 0;
  }
  else if (*param_1 == 4) {
    iVar1 = param_1[6];
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}


/* json_object_object_add @ 00435a84 */

void json_object_object_add(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  iVar1 = (*(code *)PTR_lh_table_lookup_entry_006122a0)(*(undefined4 *)(param_1 + 0x18),param_2);
  if (iVar1 == 0) {
    uVar3 = *(undefined4 *)(param_1 + 0x18);
    uVar2 = (*(code *)PTR_strdup_006117fc)(param_2);
    (*(code *)PTR_lh_table_insert_006139a8)(uVar3,uVar2,param_3);
  }
  else {
    if (*(int *)(iVar1 + 4) != 0) {
      (*(code *)PTR_json_object_put_00611694)(*(int *)(iVar1 + 4));
    }
    *(undefined4 *)(iVar1 + 4) = param_3;
  }
  return;
}


/* FUN_00435bbc @ 00435bbc */

void FUN_00435bbc(int param_1)

{
  (*(code *)PTR_lh_table_length_00613bd0)(*(undefined4 *)(param_1 + 0x18));
  return;
}


/* FUN_00435c24 @ 00435c24 */

undefined4 FUN_00435c24(undefined4 param_1,undefined4 param_2)

{
  undefined4 local_10 [2];
  
  local_10[0] = 0;
  (*(code *)PTR_json_object_object_get_ex_00611750)(param_1,param_2,local_10);
  return local_10[0];
}


/* json_object_object_get_ex @ 00435c94 */

undefined4 json_object_object_get_ex(int *param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = 0;
  }
  if (param_1 == (int *)0x0) {
    uVar1 = 0;
  }
  else if (*param_1 == 4) {
    uVar1 = (*(code *)PTR_lh_table_lookup_ex_0061290c)(param_1[6],param_2,param_3);
  }
  else {
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = 0;
    }
    uVar1 = 0;
  }
  return uVar1;
}


/* FUN_00435d84 @ 00435d84 */

void FUN_00435d84(int param_1,undefined4 param_2)

{
  (*(code *)PTR_lh_table_delete_00612394)(*(undefined4 *)(param_1 + 0x18),param_2);
  return;
}


/* FUN_00435df4 @ 00435df4 */

void FUN_00435df4(int param_1,undefined4 param_2)

{
  if (*(int *)(param_1 + 0x18) == 0) {
    (*(code *)PTR_sprintbuf_00612f2c)(param_2,PTR_PTR_006114b0 + -0x259c);
  }
  else {
    (*(code *)PTR_sprintbuf_00612f2c)(param_2,PTR_PTR_006114b0 + -0x25a4);
  }
  return;
}


/* json_object_new_boolean @ 00435eac */

int json_object_new_boolean(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = (*(code *)(PTR_LAB_006114b4 + 0x4df0))(1);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    *(undefined **)(iVar1 + 8) = PTR_LAB_006114b4 + 0x5df4;
    *(undefined4 *)(iVar1 + 0x18) = param_1;
  }
  return iVar1;
}


/* json_object_get_boolean @ 00435f50 */

uint json_object_get_boolean(uint *param_1)

{
  int iVar1;
  uint uVar2;
  
  if (param_1 == (uint *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *param_1;
    if (uVar2 == 2) {
      uVar2 = 0;
      iVar1 = (*(code *)PTR___nedf2_00612170)(param_1[6],param_1[7],0,0);
      if (iVar1 != 0) {
        uVar2 = 1;
      }
    }
    else {
      if (uVar2 < 3) {
        if (uVar2 == 1) {
          return param_1[6];
        }
      }
      else {
        if (uVar2 == 3) {
          if (param_1[6] == 0 && param_1[7] == 0) {
            return 0;
          }
          return 1;
        }
        if (uVar2 == 6) {
          return (uint)(param_1[7] != 0);
        }
      }
      uVar2 = 0;
    }
  }
  return uVar2;
}


/* FUN_004360bc @ 004360bc */

void FUN_004360bc(int param_1,undefined4 param_2)

{
  (*(code *)PTR_sprintbuf_00612f2c)
            (param_2,PTR_PTR_006114b0 + -0x2594,*(undefined4 *)(param_1 + 0x18),
             *(undefined4 *)(param_1 + 0x1c));
  return;
}


/* json_object_new_int @ 00436144 */

int json_object_new_int(int param_1)

{
  int iVar1;
  
  iVar1 = (*(code *)(PTR_LAB_006114b4 + 0x4df0))(3);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    *(undefined **)(iVar1 + 8) = PTR_LAB_006114b4 + 0x60bc;
    *(int *)(iVar1 + 0x1c) = param_1;
    *(int *)(iVar1 + 0x18) = param_1 >> 0x1f;
  }
  return iVar1;
}


/* json_object_get_int @ 0043620c */

uint json_object_get_int(int *param_1)

{
  int iVar1;
  int local_18;
  int local_10;
  uint local_c;
  
  if (param_1 == (int *)0x0) {
    local_c = 0;
  }
  else {
    local_18 = *param_1;
    local_c = param_1[7];
    local_10 = param_1[6];
    if (local_18 == 6) {
      iVar1 = (*(code *)PTR_json_parse_int64_006123b4)(param_1[6],&local_10);
      if (iVar1 != 0) {
        return 0;
      }
      local_18 = 3;
    }
    if (local_18 == 2) {
      local_c = (*(code *)PTR___fixdfsi_00613c28)(param_1[6],param_1[7]);
    }
    else if (local_18 == 3) {
      if ((local_10 < -1) || ((local_10 == -1 && (local_c < 0x80000001)))) {
        local_c = 0x80000000;
      }
      else if ((0 < local_10) || ((local_10 == 0 && (0x7ffffffe < local_c)))) {
        local_c = 0x7fffffff;
      }
    }
    else if (local_18 == 1) {
      local_c = param_1[6];
    }
    else {
      local_c = 0;
    }
  }
  return local_c;
}


/* json_object_new_int64 @ 00436400 */

int json_object_new_int64(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = (*(code *)(PTR_LAB_006114b4 + 0x4df0))(3);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    *(undefined **)(iVar1 + 8) = PTR_LAB_006114b4 + 0x60bc;
    *(undefined4 *)(iVar1 + 0x1c) = param_2;
    *(undefined4 *)(iVar1 + 0x18) = param_1;
  }
  return iVar1;
}


/* FUN_004364ac @ 004364ac */

uint FUN_004364ac(uint *param_1)

{
  uint uVar1;
  int iVar2;
  uint local_10 [2];
  
  if (param_1 == (uint *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *param_1;
    if (uVar1 == 2) {
      uVar1 = (*(code *)PTR___fixdfdi_00613500)(param_1[6],param_1[7]);
    }
    else {
      if (uVar1 < 3) {
        if (uVar1 == 1) {
          return (int)param_1[6] >> 0x1f;
        }
      }
      else {
        if (uVar1 == 3) {
          return param_1[6];
        }
        if ((uVar1 == 6) &&
           (iVar2 = (*(code *)PTR_json_parse_int64_006123b4)(param_1[6],local_10), iVar2 == 0)) {
          return local_10[0];
        }
      }
      uVar1 = 0;
    }
  }
  return uVar1;
}


/* FUN_00436624 @ 00436624 */

int FUN_00436624(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  int local_98;
  char *local_94;
  char *local_90;
  undefined1 auStack_8c [132];
  
  local_98 = (*(code *)PTR_snprintf_00612f8c)
                       (auStack_8c,0x80,PTR_PTR_006114b0 + -0x258c,param_4,
                        *(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c));
  local_90 = (char *)(*(code *)PTR_strchr_00611958)(auStack_8c,0x2c);
  if (local_90 == (undefined1 *)0x0) {
    local_90 = (char *)(*(code *)PTR_strchr_00611958)(auStack_8c,0x2e);
  }
  else {
    *local_90 = 0x2e;
  }
  if ((local_90 != (undefined1 *)0x0) && ((param_4 & 4) != 0)) {
    local_94 = local_90 + 1;
    local_90 = local_94;
    for (; *local_94 != '\0'; local_94 = local_94 + 1) {
      if (*local_94 != '0') {
        local_90 = local_94;
      }
    }
    local_90[1] = '\0';
    local_98 = (int)(local_90 + 1) - (int)auStack_8c;
  }
  (*(code *)PTR_printbuf_memappend_00611768)(param_2,auStack_8c,local_98);
  return local_98;
}


/* json_object_new_double @ 00436814 */

int json_object_new_double(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = (*(code *)(PTR_LAB_006114b4 + 0x4df0))(2);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    *(undefined **)(iVar1 + 8) = PTR_LAB_006114b4 + 0x6624;
    *(undefined4 *)(iVar1 + 0x1c) = param_2;
    *(undefined4 *)(iVar1 + 0x18) = param_1;
  }
  return iVar1;
}


/* json_object_get_double @ 004368c0 */

uint json_object_get_double(uint *param_1)

{
  uint uVar1;
  int iVar2;
  uint local_10 [2];
  
  if (param_1 == (uint *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *param_1;
    if (uVar1 == 2) {
      uVar1 = param_1[6];
    }
    else {
      if (uVar1 < 3) {
        if (uVar1 == 1) {
          uVar1 = (*(code *)PTR___floatsidf_00612908)(param_1[6]);
          return uVar1;
        }
      }
      else {
        if (uVar1 == 3) {
          uVar1 = (*(code *)PTR___floatdidf_00613c14)(param_1[6],param_1[7]);
          return uVar1;
        }
        if ((uVar1 == 6) &&
           (iVar2 = (*(code *)PTR_sscanf_006125dc)(param_1[6],PTR_PTR_006114b0 + -0x2588,local_10),
           iVar2 == 1)) {
          return local_10[0];
        }
      }
      uVar1 = 0;
    }
  }
  return uVar1;
}


/* FUN_00436a54 @ 00436a54 */

undefined4 FUN_00436a54(int param_1,undefined4 param_2)

{
  (*(code *)PTR_sprintbuf_00612f2c)(param_2,PTR_PTR_006114b0 + -0x25b8);
  (*(code *)(PTR_LAB_006114b4 + 0x4720))
            (param_2,*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c));
  (*(code *)PTR_sprintbuf_00612f2c)(param_2,PTR_PTR_006114b0 + -0x25b8);
  return 0;
}


/* FUN_00436b30 @ 00436b30 */

void FUN_00436b30(int param_1)

{
  (*(code *)PTR_free_006119dc)(*(undefined4 *)(param_1 + 0x18));
  (*(code *)(PTR_LAB_006114b4 + 0x4d6c))(param_1);
  return;
}


/* json_object_new_string @ 00436bb8 */

int json_object_new_string(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (*(code *)(PTR_LAB_006114b4 + 0x4df0))(6);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    *(undefined **)(iVar1 + 4) = PTR_LAB_006114b4 + 0x6b30;
    *(undefined **)(iVar1 + 8) = PTR_LAB_006114b4 + 0x6a54;
    uVar2 = (*(code *)PTR_strdup_006117fc)(param_1);
    *(undefined4 *)(iVar1 + 0x18) = uVar2;
    uVar2 = (*(code *)PTR_strlen_006130b4)(param_1);
    *(undefined4 *)(iVar1 + 0x1c) = uVar2;
  }
  return iVar1;
}


/* json_object_new_string_len @ 00436cb8 */

int json_object_new_string_len(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (*(code *)(PTR_LAB_006114b4 + 0x4df0))(6);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    *(undefined **)(iVar1 + 4) = PTR_LAB_006114b4 + 0x6b30;
    *(undefined **)(iVar1 + 8) = PTR_LAB_006114b4 + 0x6a54;
    uVar2 = (*(code *)PTR_malloc_006132d8)(param_2 + 1);
    *(undefined4 *)(iVar1 + 0x18) = uVar2;
    (*(code *)PTR_memcpy_006137d0)(*(undefined4 *)(iVar1 + 0x18),param_1,param_2);
    *(undefined1 *)(*(int *)(iVar1 + 0x18) + param_2) = 0;
    *(int *)(iVar1 + 0x1c) = param_2;
  }
  return iVar1;
}


/* json_object_get_string @ 00436dfc */

int json_object_get_string(int *param_1)

{
  int iVar1;
  
  if (param_1 == (int *)0x0) {
    iVar1 = 0;
  }
  else if (*param_1 == 6) {
    iVar1 = param_1[6];
  }
  else {
    iVar1 = (*(code *)PTR_json_object_to_json_string_006115e0)(param_1);
  }
  return iVar1;
}


/* json_object_get_string_len @ 00436e9c */

int json_object_get_string_len(int *param_1)

{
  int iVar1;
  
  if (param_1 == (int *)0x0) {
    iVar1 = 0;
  }
  else if (*param_1 == 6) {
    iVar1 = param_1[7];
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}


/* FUN_00436f0c @ 00436f0c */

void FUN_00436f0c(undefined4 param_1,undefined4 param_2,int param_3,uint param_4)

{
  bool bVar1;
  int iVar2;
  int local_14;
  
  bVar1 = false;
  (*(code *)PTR_sprintbuf_00612f2c)(param_2,PTR_PTR_006114b0 + -0x2584);
  if ((param_4 & 2) != 0) {
    (*(code *)PTR_sprintbuf_00612f2c)(param_2,PTR_PTR_006114b0 + -0x25c4);
  }
  local_14 = 0;
  while( true ) {
    iVar2 = (*(code *)PTR_json_object_array_length_006138ec)(param_1);
    if (iVar2 <= local_14) break;
    if (bVar1) {
      (*(code *)PTR_sprintbuf_00612f2c)(param_2,PTR_PTR_006114b0 + -0x25c0);
      if ((param_4 & 2) != 0) {
        (*(code *)PTR_sprintbuf_00612f2c)(param_2,PTR_PTR_006114b0 + -0x25c4);
      }
    }
    bVar1 = true;
    if ((param_4 & 1) != 0) {
      (*(code *)PTR_sprintbuf_00612f2c)(param_2,PTR_PTR_006114b0 + -0x25bc);
    }
    (*(code *)(PTR_LAB_006114b4 + 0x5300))(param_2,param_3 + 1,param_4);
    iVar2 = (*(code *)PTR_json_object_array_get_idx_00613274)(param_1,local_14);
    if (iVar2 == 0) {
      (*(code *)PTR_sprintbuf_00612f2c)(param_2,PTR_PTR_006114b0 + -0x25d0);
    }
    else {
      (**(code **)(iVar2 + 8))(iVar2,param_2,param_3 + 1,param_4);
    }
    local_14 = local_14 + 1;
  }
  if ((param_4 & 2) != 0) {
    if (bVar1) {
      (*(code *)PTR_sprintbuf_00612f2c)(param_2,PTR_PTR_006114b0 + -0x25c4);
    }
    (*(code *)(PTR_LAB_006114b4 + 0x5300))(param_2,param_3,param_4);
  }
  if ((param_4 & 1) == 0) {
    (*(code *)PTR_sprintbuf_00612f2c)(param_2,PTR_PTR_006114b0 + -0x257c);
  }
  else {
    (*(code *)PTR_sprintbuf_00612f2c)(param_2,PTR_PTR_006114b0 + -0x2580);
  }
  return;
}


/* FUN_0043727c @ 0043727c */

void FUN_0043727c(undefined4 param_1)

{
  (*(code *)PTR_json_object_put_00611694)(param_1);
  return;
}


/* FUN_004372dc @ 004372dc */

void FUN_004372dc(int param_1)

{
  (*(code *)PTR_array_list_free_00612f08)(*(undefined4 *)(param_1 + 0x18));
  (*(code *)(PTR_LAB_006114b4 + 0x4d6c))(param_1);
  return;
}


/* json_object_new_array @ 00437364 */

int json_object_new_array(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (*(code *)(PTR_LAB_006114b4 + 0x4df0))(5);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    *(undefined **)(iVar1 + 4) = PTR_LAB_006114b4 + 0x72dc;
    *(undefined **)(iVar1 + 8) = PTR_LAB_006114b4 + 0x6f0c;
    uVar2 = (*(code *)PTR_array_list_new_00613544)(PTR_LAB_006114b4 + 0x727c);
    *(undefined4 *)(iVar1 + 0x18) = uVar2;
  }
  return iVar1;
}


/* FUN_0043743c @ 0043743c */

int FUN_0043743c(int *param_1)

{
  int iVar1;
  
  if (param_1 == (int *)0x0) {
    iVar1 = 0;
  }
  else if (*param_1 == 5) {
    iVar1 = param_1[6];
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}


/* FUN_004374ac @ 004374ac */

void FUN_004374ac(int param_1,undefined4 param_2)

{
  (*(code *)PTR_array_list_sort_00611c68)(*(undefined4 *)(param_1 + 0x18),param_2);
  return;
}


/* json_object_array_length @ 0043751c */

void json_object_array_length(int param_1)

{
  (*(code *)PTR_array_list_length_00611bfc)(*(undefined4 *)(param_1 + 0x18));
  return;
}


/* json_object_array_add @ 00437584 */

void json_object_array_add(int param_1,undefined4 param_2)

{
  (*(code *)PTR_array_list_add_00611534)(*(undefined4 *)(param_1 + 0x18),param_2);
  return;
}


/* FUN_004375f4 @ 004375f4 */

void FUN_004375f4(int param_1,undefined4 param_2,undefined4 param_3)

{
  (*(code *)PTR_array_list_put_idx_00612af0)(*(undefined4 *)(param_1 + 0x18),param_2,param_3);
  return;
}


/* json_object_array_get_idx @ 0043766c */

void json_object_array_get_idx(int param_1,undefined4 param_2)

{
  (*(code *)PTR_array_list_get_idx_00612c18)(*(undefined4 *)(param_1 + 0x18),param_2);
  return;
}


/* FUN_004376e0 @ 004376e0 */

undefined * FUN_004376e0(int param_1)

{
  undefined *puVar1;
  
  if ((param_1 < 0) || (0x38 < param_1)) {
    puVar1 = PTR_PTR_006114b0 + -0x2404;
  }
  else {
    puVar1 = *(undefined **)(PTR_json_tokener_errors_00612df8 + param_1 * 4);
  }
  return puVar1;
}


/* FUN_0043776c @ 0043776c */

undefined4 FUN_0043776c(int param_1)

{
  return *(undefined4 *)(param_1 + 0x1c);
}


/* json_tokener_new_ex @ 0043779c */

int json_tokener_new_ex(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (*(code *)PTR_calloc_00613a18)(1,0x30);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    uVar2 = (*(code *)PTR_calloc_00613a18)(param_1,0x14);
    *(undefined4 *)(iVar1 + 0x28) = uVar2;
    if (*(int *)(iVar1 + 0x28) == 0) {
      (*(code *)PTR_free_006119dc)(iVar1);
      iVar1 = 0;
    }
    else {
      uVar2 = (*(code *)PTR_printbuf_new_00612c24)();
      *(undefined4 *)(iVar1 + 4) = uVar2;
      *(undefined4 *)(iVar1 + 8) = param_1;
      (*(code *)PTR_json_tokener_reset_00613c6c)(iVar1);
    }
  }
  return iVar1;
}


/* json_tokener_new @ 004378e8 */

void json_tokener_new(void)

{
  (*(code *)PTR_json_tokener_new_ex_00613a30)(0x20);
  return;
}


/* json_tokener_free @ 0043793c */

void json_tokener_free(int param_1)

{
  (*(code *)PTR_json_tokener_reset_00613c6c)(param_1);
  if (*(int *)(param_1 + 4) != 0) {
    (*(code *)PTR_printbuf_free_00611904)(*(undefined4 *)(param_1 + 4));
  }
  if (*(int *)(param_1 + 0x28) != 0) {
    (*(code *)PTR_free_006119dc)(*(undefined4 *)(param_1 + 0x28));
  }
  (*(code *)PTR_free_006119dc)(param_1);
  return;
}


/* FUN_00437a38 @ 00437a38 */

void FUN_00437a38(int param_1,int param_2)

{
  *(undefined4 *)(*(int *)(param_1 + 0x28) + param_2 * 0x14) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x28) + param_2 * 0x14 + 4) = 1;
  (*(code *)PTR_json_object_put_00611694)
            (*(undefined4 *)(*(int *)(param_1 + 0x28) + param_2 * 0x14 + 0xc));
  *(undefined4 *)(*(int *)(param_1 + 0x28) + param_2 * 0x14 + 0xc) = 0;
  (*(code *)PTR_free_006119dc)(*(undefined4 *)(*(int *)(param_1 + 0x28) + param_2 * 0x14 + 0x10));
  *(undefined4 *)(*(int *)(param_1 + 0x28) + param_2 * 0x14 + 0x10) = 0;
  return;
}


/* json_tokener_reset @ 00437bac */

void json_tokener_reset(int param_1)

{
  int local_10;
  
  if (param_1 != 0) {
    for (local_10 = *(int *)(param_1 + 0xc); -1 < local_10; local_10 = local_10 + -1) {
      (*(code *)(PTR_LAB_006114b4 + 0x7a38))(param_1,local_10);
    }
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  return;
}


/* json_tokener_parse @ 00437c7c */

undefined4 json_tokener_parse(undefined4 param_1)

{
  undefined4 uVar1;
  undefined1 auStack_c [4];
  
  uVar1 = (*(code *)PTR_json_tokener_parse_verbose_00611d3c)(param_1,auStack_c);
  return uVar1;
}


/* json_tokener_parse_verbose @ 00437ce4 */

int json_tokener_parse_verbose(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 local_10;
  
  iVar1 = (*(code *)PTR_json_tokener_new_006136a0)();
  if (iVar1 == 0) {
    local_10 = 0;
  }
  else {
    local_10 = (*(code *)PTR_json_tokener_parse_ex_00613b68)(iVar1,param_1,0xffffffff);
    *param_2 = *(undefined4 *)(iVar1 + 0x1c);
    if (*(int *)(iVar1 + 0x1c) != 0) {
      if (local_10 != 0) {
        (*(code *)PTR_json_object_put_00611694)(local_10);
      }
      local_10 = 0;
    }
    (*(code *)PTR_json_tokener_free_00613734)(iVar1);
  }
  return local_10;
}


/* json_tokener_parse_ex @ 00437e04 */

undefined4 json_tokener_parse_ex(int param_1,char *param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  char *local_res4;
  int local_60;
  int local_38;
  char local_30;
  
  local_30 = '\x01';
  local_38 = 0;
  iVar2 = (*(code *)PTR_setlocale_006117f4)(1,0);
  if (iVar2 != 0) {
    local_38 = (*(code *)PTR_strdup_006117fc)(iVar2);
  }
  (*(code *)PTR_setlocale_006117f4)(1,PTR_PTR_006114b0 + -0x23b0);
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  local_res4 = param_2;
  do {
    if (*(int *)(param_1 + 0x18) == param_3) {
      if (((*(int *)(param_1 + 0xc) == 0) &&
          (*(int *)(*(int *)(param_1 + 0x28) + *(int *)(param_1 + 0xc) * 0x14) == 0)) &&
         (*(int *)(*(int *)(param_1 + 0x28) + *(int *)(param_1 + 0xc) * 0x14 + 4) == 2)) {
        *(undefined4 *)(param_1 + 0x1c) = 0;
      }
      else {
        *(undefined4 *)(param_1 + 0x1c) = 1;
      }
      bVar1 = false;
    }
    else {
      local_30 = *local_res4;
      bVar1 = true;
    }
    if (!bVar1) break;
    uVar3 = *(uint *)(*(int *)(param_1 + 0x28) + *(int *)(param_1 + 0xc) * 0x14);
    if (uVar3 < 0x18) {
                    /* WARNING: Could not emulate address calculation at 0x00437f38 */
                    /* WARNING: Treating indirect jump as call */
      uVar4 = (*(code *)(&_gp + *(int *)(PTR_PTR_006114b0 + uVar3 * 4 + -0x2398)))();
      return uVar4;
    }
    local_res4 = local_res4 + 1;
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
  } while (local_30 != '\0');
  if (((local_30 == '\0') &&
      (*(int *)(*(int *)(param_1 + 0x28) + *(int *)(param_1 + 0xc) * 0x14) != 2)) &&
     (*(int *)(*(int *)(param_1 + 0x28) + *(int *)(param_1 + 0xc) * 0x14 + 4) != 2)) {
    *(undefined4 *)(param_1 + 0x1c) = 3;
  }
  (*(code *)PTR_setlocale_006117f4)(1,local_38);
  if (local_38 != 0) {
    (*(code *)PTR_free_006119dc)(local_38);
  }
  if (*(int *)(param_1 + 0x1c) == 0) {
    uVar4 = (*(code *)PTR_json_object_get_00612704)
                      (*(undefined4 *)
                        (*(int *)(param_1 + 0x28) + *(int *)(param_1 + 0xc) * 0x14 + 0xc));
    for (local_60 = *(int *)(param_1 + 0xc); -1 < local_60; local_60 = local_60 + -1) {
      (*(code *)(PTR_LAB_006114b4 + 0x7a38))(param_1,local_60);
    }
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}


/* FUN_0043db18 @ 0043db18 */

void FUN_0043db18(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x2c) = param_2;
  return;
}


/* FUN_0043db50 @ 0043db50 */

undefined4 FUN_0043db50(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined1 auStack_1008 [4096];
  
  iVar1 = (*(code *)PTR_open_006138f8)(param_1,0);
  if (iVar1 < 0) {
    puVar2 = (undefined4 *)(*(code *)PTR___errno_location_0061397c)();
    uVar3 = (*(code *)PTR_strerror_006118b8)(*puVar2);
    (*(code *)PTR_mc_error_00613364)(PTR_PTR_006114b0 + -0x2080,param_1,uVar3);
    uVar3 = 0;
  }
  else {
    puVar2 = (undefined4 *)(*(code *)PTR_printbuf_new_00612c24)();
    if (puVar2 == (undefined4 *)0x0) {
      (*(code *)PTR_close_0061276c)(iVar1);
      (*(code *)PTR_mc_error_00613364)(PTR_PTR_006114b0 + -0x204c);
      uVar3 = 0;
    }
    else {
      while( true ) {
        iVar4 = (*(code *)PTR_read_00612ef0)(iVar1,auStack_1008,0x1000);
        if (iVar4 < 1) break;
        (*(code *)PTR_printbuf_memappend_00611768)(puVar2,auStack_1008,iVar4);
      }
      (*(code *)PTR_close_0061276c)(iVar1);
      if (iVar4 < 0) {
        puVar5 = (undefined4 *)(*(code *)PTR___errno_location_0061397c)();
        uVar3 = (*(code *)PTR_strerror_006118b8)(*puVar5);
        (*(code *)PTR_mc_abort_00612ee0)(PTR_PTR_006114b0 + -0x2080,param_1,uVar3);
        (*(code *)PTR_printbuf_free_00611904)(puVar2);
        uVar3 = 0;
      }
      else {
        uVar3 = (*(code *)PTR_json_tokener_parse_00612c48)(*puVar2);
        (*(code *)PTR_printbuf_free_00611904)(puVar2);
      }
    }
  }
  return uVar3;
}


/* json_object_to_file_ext @ 0043de34 */

undefined4 json_object_to_file_ext(undefined4 param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint local_1c;
  
  if (param_2 == 0) {
    (*(code *)PTR_mc_error_00613364)(PTR_PTR_006114b0 + -0x2020);
    uVar1 = 0xffffffff;
  }
  else {
    iVar2 = (*(code *)PTR_open_006138f8)(param_1,0x301,0x1a4);
    if (iVar2 < 0) {
      puVar3 = (undefined4 *)(*(code *)PTR___errno_location_0061397c)();
      uVar1 = (*(code *)PTR_strerror_006118b8)(*puVar3);
      (*(code *)PTR_mc_error_00613364)(PTR_PTR_006114b0 + -0x1ff8,param_1,uVar1);
      uVar1 = 0xffffffff;
    }
    else {
      iVar4 = (*(code *)PTR_json_object_to_json_string_ext_00613534)(param_2,param_3);
      if (iVar4 == 0) {
        (*(code *)PTR_close_0061276c)(iVar2);
        uVar1 = 0xffffffff;
      }
      else {
        uVar5 = (*(code *)PTR_strlen_006130b4)(iVar4);
        for (local_1c = 0; local_1c < uVar5; local_1c = local_1c + iVar6) {
          iVar6 = (*(code *)PTR_write_00612898)(iVar2,iVar4 + local_1c,uVar5 - local_1c);
          if (iVar6 < 0) {
            (*(code *)PTR_close_0061276c)(iVar2);
            puVar3 = (undefined4 *)(*(code *)PTR___errno_location_0061397c)();
            uVar1 = (*(code *)PTR_strerror_006118b8)(*puVar3);
            (*(code *)PTR_mc_error_00613364)(PTR_PTR_006114b0 + -0x1fc8,param_1,uVar1);
            return 0xffffffff;
          }
        }
        (*(code *)PTR_close_0061276c)(iVar2);
        uVar1 = 0;
      }
    }
  }
  return uVar1;
}


/* FUN_0043e12c @ 0043e12c */

void FUN_0043e12c(undefined4 param_1,undefined4 param_2)

{
  (*(code *)PTR_json_object_to_file_ext_00613830)(param_1,param_2,0);
  return;
}


/* json_parse_double @ 0043e190 */

bool json_parse_double(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_sscanf_006125dc)(param_1,PTR_PTR_006114b0 + -0x1f98,param_2);
  return iVar1 != 1;
}


/* FUN_0043e204 @ 0043e204 */

void FUN_0043e204(void)

{
  bool bVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  int local_10;
  int local_c;
  
  (*(code *)PTR_sscanf_006125dc)(PTR_PTR_006114b0 + -0x1f94,PTR_PTR_006114b0 + -0x1f74,&local_10);
  piVar3 = (int *)(*(code *)PTR___errno_location_0061397c)();
  iVar4 = *piVar3;
  bVar1 = false;
  if ((local_10 == -0x80000000) && (local_c == 0)) {
    bVar1 = true;
  }
  (*(code *)PTR_sscanf_006125dc)(PTR_PTR_006114b0 + -0x1f6c,PTR_PTR_006114b0 + -0x1f74,&local_10);
  piVar3 = (int *)(*(code *)PTR___errno_location_0061397c)();
  bVar2 = false;
  if ((local_10 == 0x7fffffff) && (local_c == -1)) {
    bVar2 = true;
  }
  if ((((iVar4 != 0x22) || (!bVar1)) || (*piVar3 != 0x22)) || (!bVar2)) {
    *(undefined4 *)(PTR_DAT_00611498 + 0x5060) = 1;
  }
  return;
}


/* json_parse_int64 @ 0043e3a0 */

undefined4 json_parse_int64(char *param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  char *local_res0;
  char *local_88;
  int local_84;
  char *local_7c;
  int local_78;
  int local_74;
  char local_70;
  char acStack_6f [103];
  
  local_res0 = param_1;
  if (*(int *)(PTR_DAT_00611498 + 0x5064) == 0) {
    (*(code *)(PTR_LAB_006114bc + -0x1dfc))();
    *(undefined4 *)(PTR_DAT_00611498 + 0x5064) = 1;
  }
  for (; ((*(ushort *)(*(int *)PTR___ctype_b_006122a4 + *local_res0 * 2) & 0x20) != 0 &&
         (*local_res0 != '\0')); local_res0 = local_res0 + 1) {
  }
  puVar2 = (undefined4 *)(*(code *)PTR___errno_location_0061397c)();
  *puVar2 = 0;
  iVar3 = (*(code *)PTR_sscanf_006125dc)(local_res0,PTR_PTR_006114b0 + -0x1f74,&local_78);
  if (iVar3 != 1) {
    return 1;
  }
  piVar4 = (int *)(*(code *)PTR___errno_location_0061397c)();
  local_84 = *piVar4;
  local_7c = local_res0;
  bVar1 = *local_res0 == '-';
  if (bVar1) {
    local_7c = local_res0 + 1;
  }
  if ((*(int *)(PTR_DAT_00611498 + 0x5060) != 0) && (local_84 != 0x22)) {
    local_88 = &local_70;
    for (; (*local_7c == '0' && (local_7c[1] != '\0')); local_7c = local_7c + 1) {
    }
    bVar1 = (local_78 != 0 || local_74 != 0) && bVar1;
    (*(code *)PTR_snprintf_00612f8c)
              (local_88,100,PTR_PTR_006114b0 + -0x1f74,param_4,local_78,local_74);
    if (local_70 == '-') {
      local_88 = acStack_6f;
    }
    iVar3 = (*(code *)PTR_strlen_006130b4)(local_88);
    if (bVar1 == (local_70 == '-')) {
      uVar5 = (*(code *)PTR_strlen_006130b4)(local_88);
      iVar6 = (*(code *)PTR_strncmp_0061322c)(local_7c,local_88,uVar5);
      if ((iVar6 == 0) &&
         ((iVar6 = (*(code *)PTR_strlen_006130b4)(local_7c), iVar6 == iVar3 ||
          ((*(ushort *)(*(int *)PTR___ctype_b_006122a4 + local_7c[iVar3] * 2) & 8) == 0))))
      goto LAB_0043e74c;
    }
    local_84 = 0x22;
  }
LAB_0043e74c:
  if (local_84 == 0x22) {
    if (bVar1) {
      local_74 = *(int *)(PTR_PTR_006114b0 + -0x1ee4);
      local_78 = *(int *)(PTR_PTR_006114b0 + -0x1ee8);
    }
    else {
      local_74 = *(int *)(PTR_PTR_006114b0 + -0x1edc);
      local_78 = *(int *)(PTR_PTR_006114b0 + -0x1ee0);
    }
  }
  param_2[1] = local_74;
  *param_2 = local_78;
  return 0;
}


/* FUN_0043e7d8 @ 0043e7d8 */

undefined4 FUN_0043e7d8(int param_1)

{
  undefined4 uVar1;
  
  if ((param_1 < 0) || (6 < param_1)) {
    (*(code *)PTR_mc_error_00613364)(PTR_PTR_006114b0 + -0x1f1c,param_1,7);
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(PTR_DAT_006114b8 + param_1 * 4 + -0x280);
  }
  return uVar1;
}


/* lh_abort @ 0043e8a0 */

void lh_abort(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 local_res4;
  undefined4 local_res8;
  undefined4 local_resc;
  
  local_res4 = param_2;
  local_res8 = param_3;
  local_resc = param_4;
  (*(code *)PTR_vprintf_0061289c)(param_1,&local_res4);
  (*(code *)PTR_exit_00611d48)(1);
  return;
}


/* lh_ptr_hash @ 0043e914 */

uint lh_ptr_hash(int param_1)

{
  return (uint)(param_1 * -0x61c8ffff) >> 4;
}


/* lh_ptr_equal @ 0043e950 */

bool lh_ptr_equal(int param_1,int param_2)

{
  return param_1 == param_2;
}


/* lh_char_hash @ 0043e98c */

int lh_char_hash(char *param_1)

{
  char *local_10;
  int local_c;
  
  local_c = 0;
  for (local_10 = param_1; *local_10 != '\0'; local_10 = local_10 + 1) {
    local_c = local_c * 0x81 + (int)*local_10 + -0x61c8ffff;
  }
  return local_c;
}


/* lh_char_equal @ 0043ea2c */

bool lh_char_equal(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strcmp_00611bec)(param_1,param_2);
  return iVar1 == 0;
}


/* lh_table_new @ 0043ea98 */

int * lh_table_new(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int *piVar1;
  int iVar2;
  int local_c;
  
  piVar1 = (int *)(*(code *)PTR_calloc_00613a18)(1,0x38);
  if (piVar1 == (int *)0x0) {
    (*(code *)PTR_lh_abort_006131e8)(PTR_PTR_006114b0 + -0x1ed0);
  }
  piVar1[1] = 0;
  *piVar1 = param_1;
  piVar1[7] = param_2;
  iVar2 = (*(code *)PTR_calloc_00613a18)(param_1,0x10);
  piVar1[10] = iVar2;
  if (piVar1[10] == 0) {
    (*(code *)PTR_lh_abort_006131e8)(PTR_PTR_006114b0 + -0x1ed0);
  }
  piVar1[0xb] = param_3;
  piVar1[0xc] = param_4;
  piVar1[0xd] = param_5;
  for (local_c = 0; local_c < param_1; local_c = local_c + 1) {
    *(undefined4 *)(piVar1[10] + local_c * 0x10) = 0xffffffff;
  }
  return piVar1;
}


/* lh_kchar_table_new @ 0043ec64 */

void lh_kchar_table_new(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  (*(code *)PTR_lh_table_new_00612864)
            (param_1,param_2,param_3,PTR_lh_char_hash_00612144,PTR_lh_char_equal_00613440);
  return;
}


/* FUN_0043ecdc @ 0043ecdc */

void FUN_0043ecdc(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  (*(code *)PTR_lh_table_new_00612864)
            (param_1,param_2,param_3,PTR_lh_ptr_hash_006135d0,PTR_lh_ptr_equal_00613548);
  return;
}


/* lh_table_resize @ 0043ed54 */

void lh_table_resize(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *local_10;
  
  iVar1 = (*(code *)PTR_lh_table_new_00612864)(param_2,param_1[7],0,param_1[0xc],param_1[0xd]);
  for (local_10 = (undefined4 *)param_1[8]; local_10 != (undefined4 *)0x0;
      local_10 = (undefined4 *)local_10[2]) {
    (*(code *)PTR_lh_table_insert_006139a8)(iVar1,*local_10,local_10[1]);
  }
  (*(code *)PTR_free_006119dc)(param_1[10]);
  param_1[10] = *(undefined4 *)(iVar1 + 0x28);
  *param_1 = param_2;
  param_1[8] = *(undefined4 *)(iVar1 + 0x20);
  param_1[9] = *(undefined4 *)(iVar1 + 0x24);
  param_1[3] = param_1[3] + 1;
  (*(code *)PTR_free_006119dc)(iVar1);
  return;
}


/* lh_table_free @ 0043ef28 */

void lh_table_free(int param_1)

{
  undefined4 local_10;
  
  for (local_10 = *(int *)(param_1 + 0x20); local_10 != 0; local_10 = *(int *)(local_10 + 8)) {
    if (*(int *)(param_1 + 0x2c) != 0) {
      (**(code **)(param_1 + 0x2c))(local_10);
    }
  }
  (*(code *)PTR_free_006119dc)(*(undefined4 *)(param_1 + 0x28));
  (*(code *)PTR_free_006119dc)(param_1);
  return;
}


/* lh_table_insert @ 0043f024 */

undefined4 lh_table_insert(uint *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint local_20;
  
  param_1[5] = param_1[5] + 1;
  uVar3 = (*(code *)PTR___floatsidf_00612908)(param_1[1]);
  uVar4 = (*(code *)PTR___floatsidf_00612908)(*param_1);
  uVar4 = (*(code *)PTR___muldf3_00612854)
                    ((int)((ulonglong)uVar4 >> 0x20),(int)uVar4,
                     *(undefined4 *)(PTR_PTR_006114b0 + -0x1eb0),
                     *(undefined4 *)(PTR_PTR_006114b0 + -0x1eac));
  iVar1 = (*(code *)PTR___gedf2_00611f40)
                    ((int)((ulonglong)uVar3 >> 0x20),(int)uVar3,(int)((ulonglong)uVar4 >> 0x20),
                     (int)uVar4);
  if (-1 < iVar1) {
    (*(code *)PTR_lh_table_resize_006130b8)(param_1,*param_1 << 1);
  }
  local_20 = (*(code *)param_1[0xc])(param_2);
  local_20 = local_20 % *param_1;
  if (*param_1 == 0) {
    trap(0x1c00);
  }
  while ((*(int *)(param_1[10] + local_20 * 0x10) != -1 &&
         (*(int *)(param_1[10] + local_20 * 0x10) != -2))) {
    param_1[2] = param_1[2] + 1;
    local_20 = local_20 + 1;
    if (local_20 == *param_1) {
      local_20 = 0;
    }
  }
  *(undefined4 *)(param_1[10] + local_20 * 0x10) = param_2;
  *(undefined4 *)(param_1[10] + local_20 * 0x10 + 4) = param_3;
  param_1[1] = param_1[1] + 1;
  if (param_1[8] == 0) {
    param_1[9] = param_1[10] + local_20 * 0x10;
    param_1[8] = param_1[9];
    uVar2 = param_1[10];
    iVar1 = param_1[10] + local_20 * 0x10;
    *(undefined4 *)(iVar1 + 0xc) = 0;
    *(undefined4 *)(uVar2 + local_20 * 0x10 + 8) = *(undefined4 *)(iVar1 + 0xc);
  }
  else {
    *(uint *)(param_1[9] + 8) = param_1[10] + local_20 * 0x10;
    *(uint *)(param_1[10] + local_20 * 0x10 + 0xc) = param_1[9];
    *(undefined4 *)(param_1[10] + local_20 * 0x10 + 8) = 0;
    param_1[9] = param_1[10] + local_20 * 0x10;
  }
  return 0;
}


/* lh_table_lookup_entry @ 0043f45c */

int lh_table_lookup_entry(uint *param_1,undefined4 param_2)

{
  int iVar1;
  int local_18;
  uint local_14;
  
  local_14 = (*(code *)param_1[0xc])(param_2);
  local_14 = local_14 % *param_1;
  if (*param_1 == 0) {
    trap(0x1c00);
  }
  local_18 = 0;
  param_1[4] = param_1[4] + 1;
  while( true ) {
    if ((int)*param_1 <= local_18) {
      return 0;
    }
    if (*(int *)(param_1[10] + local_14 * 0x10) == -1) break;
    if ((*(int *)(param_1[10] + local_14 * 0x10) != -2) &&
       (iVar1 = (*(code *)param_1[0xd])(*(undefined4 *)(param_1[10] + local_14 * 0x10),param_2),
       iVar1 != 0)) {
      return param_1[10] + local_14 * 0x10;
    }
    local_14 = local_14 + 1;
    if (local_14 == *param_1) {
      local_14 = 0;
    }
    local_18 = local_18 + 1;
  }
  return 0;
}


/* FUN_0043f63c @ 0043f63c */

undefined4 FUN_0043f63c(undefined4 param_1,undefined4 param_2)

{
  undefined4 local_10 [2];
  
  (*(code *)PTR_lh_table_lookup_ex_0061290c)(param_1,param_2,local_10);
  return local_10[0];
}


/* lh_table_lookup_ex @ 0043f6a8 */

undefined4 lh_table_lookup_ex(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (*(code *)PTR_lh_table_lookup_entry_006122a0)(param_1,param_2);
  if (iVar1 == 0) {
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = 0;
    }
    uVar2 = 0;
  }
  else {
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *(undefined4 *)(iVar1 + 4);
    }
    uVar2 = 1;
  }
  return uVar2;
}


/* lh_table_delete_entry @ 0043f774 */

undefined4 lh_table_delete_entry(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = param_2 - *(int *)(param_1 + 0x28) >> 4;
  if (iVar1 < 0) {
    uVar2 = 0xfffffffe;
  }
  else if ((*(int *)(*(int *)(param_1 + 0x28) + iVar1 * 0x10) == -1) ||
          (*(int *)(*(int *)(param_1 + 0x28) + iVar1 * 0x10) == -2)) {
    uVar2 = 0xffffffff;
  }
  else {
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + -1;
    if (*(int *)(param_1 + 0x2c) != 0) {
      (**(code **)(param_1 + 0x2c))(param_2);
    }
    *(undefined4 *)(*(int *)(param_1 + 0x28) + iVar1 * 0x10 + 4) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0x28) + iVar1 * 0x10) = 0xfffffffe;
    if ((*(int *)(param_1 + 0x24) == *(int *)(param_1 + 0x28) + iVar1 * 0x10) &&
       (*(int *)(param_1 + 0x20) == *(int *)(param_1 + 0x28) + iVar1 * 0x10)) {
      *(undefined4 *)(param_1 + 0x24) = 0;
      *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 0x24);
    }
    else if (*(int *)(param_1 + 0x20) == *(int *)(param_1 + 0x28) + iVar1 * 0x10) {
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x20) + 8) + 0xc) = 0;
      *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(*(int *)(param_1 + 0x20) + 8);
    }
    else if (*(int *)(param_1 + 0x24) == *(int *)(param_1 + 0x28) + iVar1 * 0x10) {
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x24) + 0xc) + 8) = 0;
      *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(*(int *)(param_1 + 0x24) + 0xc);
    }
    else {
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x28) + iVar1 * 0x10 + 0xc) + 8) =
           *(undefined4 *)(*(int *)(param_1 + 0x28) + iVar1 * 0x10 + 8);
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x28) + iVar1 * 0x10 + 8) + 0xc) =
           *(undefined4 *)(*(int *)(param_1 + 0x28) + iVar1 * 0x10 + 0xc);
    }
    iVar4 = *(int *)(param_1 + 0x28);
    iVar3 = *(int *)(param_1 + 0x28) + iVar1 * 0x10;
    *(undefined4 *)(iVar3 + 0xc) = 0;
    *(undefined4 *)(iVar4 + iVar1 * 0x10 + 8) = *(undefined4 *)(iVar3 + 0xc);
    uVar2 = 0;
  }
  return uVar2;
}


/* lh_table_delete @ 0043fb2c */

undefined4 lh_table_delete(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (*(code *)PTR_lh_table_lookup_entry_006122a0)(param_1,param_2);
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (*(code *)PTR_lh_table_delete_entry_006120e0)(param_1,iVar1);
  }
  return uVar2;
}


/* lh_table_length @ 0043fbcc */

undefined4 lh_table_length(int param_1)

{
  return *(undefined4 *)(param_1 + 4);
}


/* printbuf_new @ 0043fc00 */

int * printbuf_new(void)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)(*(code *)PTR_calloc_00613a18)(1,0xc);
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1[2] = 0x20;
    piVar1[1] = 0;
    iVar2 = (*(code *)PTR_malloc_006132d8)(piVar1[2]);
    *piVar1 = iVar2;
    if (*piVar1 == 0) {
      (*(code *)PTR_free_006119dc)(piVar1);
      piVar1 = (int *)0x0;
    }
  }
  return piVar1;
}


/* FUN_0043fd10 @ 0043fd10 */

undefined4 FUN_0043fd10(int *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  if (param_1[2] < param_2) {
    iVar2 = param_1[2] << 1;
    if (param_1[2] << 1 <= param_2 + 8) {
      iVar2 = param_2 + 8;
    }
    iVar3 = (*(code *)PTR_realloc_00613690)(*param_1,iVar2);
    if (iVar3 == 0) {
      uVar1 = 0xffffffff;
    }
    else {
      param_1[2] = iVar2;
      *param_1 = iVar3;
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


/* printbuf_memappend @ 0043fe1c */

int printbuf_memappend(int *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  if ((param_1[2] <= param_1[1] + param_3 + 1) &&
     (iVar1 = (*(code *)(PTR_LAB_006114bc + -0x2f0))(param_1,param_1[1] + param_3 + 1), iVar1 < 0))
  {
    return -1;
  }
  (*(code *)PTR_memcpy_006137d0)(*param_1 + param_1[1],param_2,param_3);
  param_1[1] = param_1[1] + param_3;
  *(undefined1 *)(*param_1 + param_1[1]) = 0;
  return param_3;
}


/* printbuf_memset @ 0043ff7c */

undefined4 printbuf_memset(int *param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int local_res4;
  
  local_res4 = param_2;
  if (param_2 == -1) {
    local_res4 = param_1[1];
  }
  iVar1 = local_res4 + param_4;
  if ((param_1[2] < iVar1) &&
     (iVar2 = (*(code *)(PTR_LAB_006114bc + -0x2f0))(param_1,iVar1), iVar2 < 0)) {
    return 0xffffffff;
  }
  (*(code *)PTR_memset_0061223c)(*param_1 + local_res4,param_3,param_4);
  if (param_1[1] < iVar1) {
    param_1[1] = iVar1;
  }
  return 0;
}


/* SHA256_Final @ 004c3024 */

int SHA256_Final(uchar *md,SHA256_CTX *c)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  SHA256_CTX *pSVar5;
  uint *puVar6;
  
  puVar6 = c->data;
  uVar1 = c->num + 1;
  *(undefined1 *)((int)puVar6 + c->num) = 0x80;
  if (0x38 < uVar1) {
    (*(code *)PTR_memset_0061223c)((int)puVar6 + uVar1,0,0x40 - uVar1);
    FUN_004c0d30(c,puVar6,1);
    uVar1 = 0;
  }
  (*(code *)PTR_memset_0061223c)((int)puVar6 + uVar1,0,0x38 - uVar1);
  *(undefined1 *)(c->data + 0xe) = *(undefined1 *)&c->Nh;
  *(char *)((int)c->data + 0x39) = (char)*(undefined2 *)&c->Nh;
  *(char *)((int)c->data + 0x3a) = (char)(c->Nh >> 8);
  *(char *)((int)c->data + 0x3b) = (char)c->Nh;
  *(undefined1 *)(c->data + 0xf) = *(undefined1 *)&c->Nl;
  *(char *)((int)c->data + 0x3d) = (char)*(undefined2 *)&c->Nl;
  *(char *)((int)c->data + 0x3e) = (char)(c->Nl >> 8);
  *(char *)((int)c->data + 0x3f) = (char)c->Nl;
  FUN_004c0d30(c,puVar6,1);
  c->num = 0;
  (*(code *)PTR_memset_0061223c)(puVar6,0,0x40);
  uVar1 = c->md_len;
  if (uVar1 == 0x1c) {
    iVar2 = 0;
    do {
      uVar4 = *(undefined4 *)((int)c->h + iVar2);
      iVar2 = iVar2 + 4;
      *md = (uchar)((uint)uVar4 >> 0x18);
      md[1] = (uchar)((uint)uVar4 >> 0x10);
      md[2] = (uchar)((uint)uVar4 >> 8);
      md[3] = (uchar)uVar4;
      md = md + 4;
    } while (iVar2 != 0x1c);
    iVar2 = 1;
  }
  else if (uVar1 == 0x20) {
    iVar2 = 0;
    do {
      uVar4 = *(undefined4 *)((int)c->h + iVar2);
      iVar2 = iVar2 + 4;
      *md = (uchar)((uint)uVar4 >> 0x18);
      md[1] = (uchar)((uint)uVar4 >> 0x10);
      md[2] = (uchar)((uint)uVar4 >> 8);
      md[3] = (uchar)uVar4;
      md = md + 4;
    } while (iVar2 != 0x20);
    iVar2 = 1;
  }
  else {
    iVar2 = 0;
    if (uVar1 < 0x21) {
      pSVar5 = c;
      for (uVar1 = 0; iVar2 = 1, uVar1 < c->md_len >> 2; uVar1 = uVar1 + 1) {
        uVar3 = pSVar5->h[0];
        pSVar5 = (SHA256_CTX *)(pSVar5->h + 1);
        *md = (uchar)(uVar3 >> 0x18);
        md[1] = (uchar)(uVar3 >> 0x10);
        md[2] = (uchar)(uVar3 >> 8);
        md[3] = (uchar)uVar3;
        md = md + 4;
      }
    }
  }
  return iVar2;
}


/* SHA256_Update @ 004c33a0 */

int SHA256_Update(SHA256_CTX *c,void *data,size_t len)

{
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  int iVar5;
  
  if (len != 0) {
    uVar2 = len * 8 + c->Nl;
    if (uVar2 < c->Nl) {
      c->Nh = c->Nh + 1;
    }
    uVar3 = c->num;
    c->Nh = c->Nh + (len >> 0x1d);
    c->Nl = uVar2;
    if (uVar3 != 0) {
      puVar4 = c->data;
      if ((len < 0x40) && (len + uVar3 < 0x40)) {
        (*(code *)PTR_memcpy_006137d0)((int)puVar4 + uVar3,data,len);
        c->num = c->num + len;
        return 1;
      }
      iVar5 = 0x40 - uVar3;
      (*(code *)PTR_memcpy_006137d0)((int)puVar4 + uVar3,data,iVar5);
      FUN_004c0d30(c,puVar4,1);
      c->num = 0;
      (*(code *)PTR_memset_0061223c)(puVar4,0,0x40);
      len = len - iVar5;
      data = (void *)((int)data + iVar5);
    }
    uVar2 = len >> 6;
    if (uVar2 != 0) {
      FUN_004c0d30(c,data,uVar2);
      len = len + uVar2 * -0x40;
      data = (void *)((int)data + uVar2 * 0x40);
    }
    puVar1 = PTR_memcpy_006137d0;
    if (len != 0) {
      c->num = len;
      (*(code *)puVar1)(c->data,data,len);
    }
  }
  return 1;
}


/* RSA_verify @ 004df64c */

int RSA_verify(int type,uchar *m,uint m_length,uchar *sigbuf,uint siglen,RSA *rsa)

{
  int iVar1;
  _func_1769 *UNRECOVERED_JUMPTABLE;
  
  if (((rsa->flags & 0x40U) != 0) &&
     (UNRECOVERED_JUMPTABLE = rsa->meth->rsa_verify, UNRECOVERED_JUMPTABLE != (_func_1769 *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x004df694. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = (*UNRECOVERED_JUMPTABLE)(type,m,m_length,sigbuf,siglen,rsa);
    return iVar1;
  }
  iVar1 = int_rsa_verify(type,m,m_length,0,0,sigbuf,siglen,rsa);
  return iVar1;
}


/* RSA_public_decrypt @ 004dfc18 */

int RSA_public_decrypt(int flen,uchar *from,uchar *to,RSA *rsa,int padding)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004dfc28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*rsa->meth->rsa_pub_dec)(flen,from,to,rsa,padding);
  return iVar1;
}


