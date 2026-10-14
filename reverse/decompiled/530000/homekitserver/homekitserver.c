/* Ghidra-generated pseudo-C; not original source or a buildable project. */
/* _init @ 0041aeb4 */

int _init(EVP_PKEY_CTX *ctx)

{
  int iVar1;
  
  FUN_0041b0a8();
  iVar1 = (*(code *)(PTR_s_bfPjPmmrJagyc0JnT6m8oXWXV3AGNaOk_00612340 + -0x4e50))();
  return iVar1;
}


/* entry @ 0041af40 */

void processEntry entry(undefined4 param_1,undefined4 param_2)

{
  undefined1 auStack_20 [16];
  undefined *local_10;
  undefined4 local_c;
  undefined1 *local_8;
  
  local_8 = auStack_20;
  local_10 = PTR__fini_006143b8;
  local_c = param_1;
  (*(code *)PTR___uClibc_main_00614090)
            (PTR_main_0061247c,param_2,&stack0x00000004,PTR__init_00612468);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* FUN_0041afa0 @ 0041afa0 */

void FUN_0041afa0(void)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  code *pcVar6;
  
  if (PTR_DAT_00612328[0x4b60] == '\0') {
    if (PTR___cxa_finalize_00614228 != (undefined *)0x0) {
      (*(code *)PTR___cxa_finalize_00614228)(*(undefined4 *)PTR_LOOP_0061232c);
    }
    puVar1 = PTR_DAT_00612328;
    puVar4 = PTR_DAT_00612334 + -0x19a4;
    iVar5 = (int)PTR___DTOR_END___00612330 - (int)puVar4;
    while( true ) {
      uVar2 = *(uint *)(puVar1 + 0x4b64);
      iVar3 = uVar2 + 1;
      if ((iVar5 >> 2) - 1U <= uVar2) break;
      pcVar6 = *(code **)(puVar4 + iVar3 * 4);
      *(int *)(puVar1 + 0x4b64) = iVar3;
      (*pcVar6)();
    }
    if (PTR___deregister_frame_info_00614a08 != (undefined *)0x0) {
      (*(code *)PTR___deregister_frame_info_00614a08)(PTR_DAT_00612338 + -0x19b0);
    }
    PTR_DAT_00612328[0x4b60] = 1;
  }
  return;
}


/* FUN_0041b0a8 @ 0041b0a8 */

void FUN_0041b0a8(void)

{
  if (PTR___register_frame_info_00614244 != (undefined *)0x0) {
    (*(code *)PTR___register_frame_info_00614244)
              (PTR_DAT_00612338 + -0x19b0,PTR_DAT_00612328 + 0x4b68);
  }
  if (*(int *)(PTR_DAT_00612334 + -0x199c) != 0) {
    if (PTR__Jv_RegisterClasses_00614598 != (undefined *)0x0) {
      (*(code *)PTR__Jv_RegisterClasses_00614598)(PTR_DAT_00612334 + -0x199c);
      return;
    }
  }
  return;
}


/* FUN_0041b140 @ 0041b140 */

undefined4 FUN_0041b140(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_210 [512];
  
  if (param_2 == 1) {
    uVar2 = 0x302;
  }
  else {
    iVar1 = 0;
    if (param_2 != 2) goto LAB_0041b1a4;
    uVar2 = 10;
  }
  iVar1 = (*(code *)PTR_open_0061479c)(param_1,uVar2,0x1b0);
  if (iVar1 < 0) {
    return 0;
  }
LAB_0041b1a4:
  (*(code *)PTR_strcpy_00612464)(auStack_210,param_3);
  uVar2 = (*(code *)PTR_strlen_00613f4c)(auStack_210);
  (*(code *)PTR_write_00613734)(iVar1,auStack_210,uVar2);
  (*(code *)PTR_close_00613604)(iVar1);
  return 1;
}


/* FUN_0041b220 @ 0041b220 */

bool FUN_0041b220(undefined4 param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  
  uVar1 = (*(code *)PTR_fcntl_00613e84)(param_1,3,0);
  bVar3 = false;
  if (uVar1 != 0xffffffff) {
    uVar4 = uVar1 | 0x80;
    if (param_2 != 0) {
      uVar4 = uVar1 & 0xffffff7f;
    }
    iVar2 = (*(code *)PTR_fcntl_00613e84)(param_1,4,uVar4);
    bVar3 = iVar2 != -1;
  }
  return bVar3;
}


/* FUN_0041b2a4 @ 0041b2a4 */

void FUN_0041b2a4(undefined4 param_1)

{
  uint uVar1;
  
  uVar1 = (*(code *)PTR_fcntl_00613e84)(param_1,3);
  if (uVar1 != 0xffffffff) {
                    /* WARNING: Could not recover jumptable at 0x0041b2f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR_fcntl_00613e84)(param_1,4,uVar1 | 0x80);
    return;
  }
  return;
}


/* FUN_0041b308 @ 0041b308 */

void FUN_0041b308(undefined4 param_1)

{
  uint uVar1;
  
  uVar1 = (*(code *)PTR_fcntl_00613e84)(param_1,3);
  if (uVar1 != 0xffffffff) {
                    /* WARNING: Could not recover jumptable at 0x0041b358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR_fcntl_00613e84)(param_1,4,uVar1 & 0xffffff7f);
    return;
  }
  return;
}


/* FUN_0041b370 @ 0041b370 */

void FUN_0041b370(undefined4 param_1)

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
  (*(code *)PTR_memcpy_00614674)(&local_20,PTR_in6addr_any_0061340c,0x10);
  _local_28 = CONCAT22(local_28,(short)*(undefined4 *)PTR_server_port_006134f0);
  (*(code *)PTR_bind_006149f0)(param_1,&local_28,0x1c);
  return;
}


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


/* build_needs_escape @ 0041c0d0 */

void build_needs_escape(void)

{
  bool bVar1;
  byte bVar2;
  undefined *puVar3;
  int iVar4;
  byte *pbVar5;
  byte abStack_60 [80];
  byte abStack_10 [12];
  
  (*(code *)PTR_memcpy_00614674)
            (abStack_60,
             "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789-_.!~*\'():@&=+$,/?",
             0x51);
  iVar4 = 1;
  do {
    bVar1 = iVar4 != 0x20;
    iVar4 = iVar4 + 1;
  } while (bVar1);
  (*(code *)PTR_memset_006130cc)(PTR__needs_escape_0061335c,0xffffffff,0x10);
  puVar3 = PTR__needs_escape_0061335c;
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


/* init_signals @ 0041c1a0 */

void init_signals(void)

{
  undefined4 local_30;
  code *local_2c;
  undefined1 auStack_28 [24];
  
  local_30 = 0;
  (*(code *)PTR_sigemptyset_00612e30)(auStack_28);
  (*(code *)PTR_sigaddset_00613360)(auStack_28,0xb);
  (*(code *)PTR_sigaddset_00613360)(auStack_28,10);
  (*(code *)PTR_sigaddset_00613360)(auStack_28,0xf);
  (*(code *)PTR_sigaddset_00613360)(auStack_28,1);
  (*(code *)PTR_sigaddset_00613360)(auStack_28,2);
  (*(code *)PTR_sigaddset_00613360)(auStack_28,0xd);
  (*(code *)PTR_sigaddset_00613360)(auStack_28,0x12);
  (*(code *)PTR_sigaddset_00613360)(auStack_28,0xe);
  local_2c = (code *)&UNK_0041c5b4;
  (*(code *)PTR_sigaction_006134c4)(0xb,&local_30,0);
  local_2c = FUN_0041c540;
  (*(code *)PTR_sigaction_006134c4)(10,&local_30,0);
  local_2c = (code *)&LAB_0041c190;
  (*(code *)PTR_sigaction_006134c4)(0xf,&local_30,0);
  local_2c = (code *)&UNK_0041c4c8;
  (*(code *)PTR_sigaction_006134c4)(1,&local_30,0);
  local_2c = FUN_0041c454;
  (*(code *)PTR_sigaction_006134c4)(2,&local_30,0);
  local_2c = (code *)0x1;
  (*(code *)PTR_sigaction_006134c4)(0xd,&local_30,0);
  local_2c = (code *)&LAB_0041c198;
  (*(code *)PTR_sigaction_006134c4)(0x12,&local_30,0);
  local_2c = FUN_0041c400;
  (*(code *)PTR_sigaction_006134c4)(0xe,&local_30,0);
  local_2c = (code *)0x1;
  (*(code *)PTR_sigaction_006134c4)(0xd,&local_30,0);
  local_2c = FUN_0041c400;
  (*(code *)PTR_sigaction_006134c4)(0xe,&local_30,0);
  return;
}


/* FUN_0041c400 @ 0041c400 */

void FUN_0041c400(void)

{
  (*(code *)PTR_fprintf_00612f5c)
            (*(undefined4 *)PTR_stderr_006137c8,
             "\nFILE %s FUNCTION %s LINE %d: caught SIGALRM with pthread id\n",
             "/home/vendor/rtl819x_v3464_homekit/users/phytrex-homekit/lib_homekitserver/signals.c",
             "_handle_sigalrm",0x81);
  return;
}


/* FUN_0041c454 @ 0041c454 */

void FUN_0041c454(void)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_pthread_self_006134a8)();
  (*(code *)PTR_fprintf_00612f5c)
            (*(undefined4 *)PTR_stderr_006137c8,
             "\nFILE %s FUNCTION %s LINE %d: caught SIGINT with pthread id\n",
             "/home/vendor/rtl819x_v3464_homekit/users/phytrex-homekit/lib_homekitserver/signals.c",
             "_handle_sigint",0x77,uVar1);
  (*(code *)PTR_exit_00612bd8)(1);
  return;
}


/* FUN_0041c540 @ 0041c540 */

void FUN_0041c540(void)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_pthread_self_006134a8)();
  (*(code *)PTR_fprintf_00612f5c)
            (*(undefined4 *)PTR_stderr_006137c8,
             "\nFILE %s FUNCTION %s LINE %d: caught SIGBUS with pthread id\n",
             "/home/vendor/rtl819x_v3464_homekit/users/phytrex-homekit/lib_homekitserver/signals.c",
             "_handle_sigbus",0x60,uVar1);
  (*(code *)PTR_pthread_exit_00612d68)(0);
  return;
}


/* FUN_0041c630 @ 0041c630 */

void FUN_0041c630(void)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_calloc_006148c0)(1,0x18);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 4) = 1;
  }
  return;
}


/* FUN_0041c670 @ 0041c670 */

undefined4
FUN_0041c670(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5,
            int param_6)

{
  int iVar1;
  undefined4 unaff_s4;
  int local_20;
  int local_1c;
  
  local_20 = 0;
  local_1c = 0;
  if (param_2 == 0) {
    unaff_s4 = (*(code *)PTR_CreateEVENTRespondMessageNoCopy_00614170)
                         (200,"application/hap+json",param_5,&local_20,&local_1c);
    if (local_20 != 0) {
      iVar1 = (*(code *)PTR_calloc_006148c0)(param_5 + local_1c,1);
      if (iVar1 != 0) {
        (*(code *)PTR_memcpy_00614674)(iVar1,local_20,local_1c);
        if (param_5 != 0) {
          (*(code *)PTR_memcpy_00614674)(iVar1 + local_1c,param_4,param_5);
        }
        unaff_s4 = (*(code *)PTR_HKSecureSocketSend_006125b8)
                             (param_1,iVar1,param_5 + local_1c,*(undefined4 *)(param_6 + 0xc));
        (*(code *)PTR_free_0061286c)(iVar1);
      }
    }
  }
  if (local_20 != 0) {
    (*(code *)PTR_free_0061286c)();
  }
  return unaff_s4;
}


/* FUN_0041c7c0 @ 0041c7c0 */

void FUN_0041c7c0(int *param_1)

{
  if (*param_1 != 0) {
    if (*(int *)(*param_1 + 0xc) != 0) {
      (*(code *)PTR_free_0061286c)();
    }
    if (*(int *)(*param_1 + 0x10) != 0) {
      (*(code *)PTR_free_0061286c)();
    }
    (*(code *)PTR_free_0061286c)(*param_1);
    *param_1 = 0;
  }
  return;
}


/* FUN_0041c860 @ 0041c860 */

int FUN_0041c860(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5,
                int param_6)

{
  int iVar1;
  int unaff_s4;
  int local_20;
  int local_1c;
  
  local_20 = 0;
  local_1c = 0;
  if (param_2 == 0) {
    unaff_s4 = (*(code *)PTR_CreateHTTPRespondMessageNoCopy_00613b88)
                         (200,"application/pairing+tlv8",param_5,&local_20,&local_1c);
    if ((unaff_s4 == 0) && (local_20 != 0)) {
      iVar1 = (*(code *)PTR_calloc_006148c0)(param_5 + local_1c,1);
      if (iVar1 != 0) {
        (*(code *)PTR_memcpy_00614674)(iVar1,local_20,local_1c);
        if (param_5 != 0) {
          (*(code *)PTR_memcpy_00614674)(iVar1 + local_1c,param_4,param_5);
        }
        unaff_s4 = (*(code *)PTR_HKSecureSocketSend_006125b8)
                             (param_1,iVar1,param_5 + local_1c,*(undefined4 *)(param_6 + 0xc));
        (*(code *)PTR_free_0061286c)(iVar1);
      }
    }
  }
  if (local_20 != 0) {
    (*(code *)PTR_free_0061286c)();
  }
  return unaff_s4;
}


/* FUN_0041c9b8 @ 0041c9b8 */

undefined4
FUN_0041c9b8(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5
            ,int param_6)

{
  int iVar1;
  undefined4 unaff_s1;
  int local_20;
  int local_1c [2];
  
  local_20 = 0;
  local_1c[0] = 0;
  if (param_4 == 0) {
    unaff_s1 = (*(code *)PTR_CreateHTTPRespondMessageNoCopy_00613b88)
                         (param_2,param_3,param_6,&local_20,local_1c);
    if (local_20 != 0) {
      iVar1 = (*(code *)PTR_calloc_006148c0)(param_6 + local_1c[0],1);
      if (iVar1 != 0) {
        (*(code *)PTR_memcpy_00614674)(iVar1,local_20,local_1c[0]);
        if (param_6 != 0) {
          (*(code *)PTR_memcpy_00614674)(iVar1 + local_1c[0],param_5,param_6);
        }
        unaff_s1 = (*(code *)PTR_SocketSend_00612dcc)(param_1,iVar1,param_6 + local_1c[0]);
        (*(code *)PTR_free_0061286c)(iVar1);
      }
    }
  }
  if (local_20 != 0) {
    (*(code *)PTR_free_0061286c)();
  }
  return unaff_s1;
}


/* FUN_0041caf4 @ 0041caf4 */

int FUN_0041caf4(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5,
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
    iVar1 = (*(code *)PTR_CreateHTTPRespondMessageNoCopy_00613b88)
                      (200,"application/hap+json",param_5,&local_20,&local_1c);
    iVar4 = 0;
LAB_0041cd44:
    if (iVar1 == 0) goto LAB_0041cd4c;
  }
  else {
    if (param_2 != 0x10) {
      iVar4 = (*(code *)PTR_json_object_new_object_0061278c)();
      uVar2 = (*(code *)PTR_json_object_new_int_00613484)(param_2);
      (*(code *)PTR_json_object_object_add_006137b4)(iVar4,"status",uVar2);
      if (param_2 == -0x1130b) {
        param_4 = (*(code *)PTR_json_object_to_json_string_00612474)(iVar4);
        param_5 = (*(code *)PTR_strlen_00613f4c)(param_4);
        uVar2 = 0x193;
      }
      else if ((param_2 + 0x11305U < 2) || (param_2 == -0x11302)) {
        uVar2 = 0xcf;
      }
      else if ((param_2 == -0x1130d) || (param_2 == -0x11301)) {
        param_4 = (*(code *)PTR_json_object_to_json_string_00612474)(iVar4);
        param_5 = (*(code *)PTR_strlen_00613f4c)(param_4);
        uVar2 = 400;
      }
      else {
        param_4 = (*(code *)PTR_json_object_to_json_string_00612474)(iVar4);
        param_5 = (*(code *)PTR_strlen_00613f4c)(param_4);
        uVar2 = 500;
      }
      iVar1 = (*(code *)PTR_CreateHTTPRespondMessageNoCopy_00613b88)
                        (uVar2,"application/hap+json",param_5,&local_20,&local_1c);
      goto LAB_0041cd44;
    }
    iVar1 = (*(code *)PTR_CreateHTTPRespondMessageNoCopy_00613b88)
                      (0xcc,"application/hap+json",0,&local_20,&local_1c);
    if (iVar1 != 0) goto LAB_0041ce18;
    param_5 = 0;
    iVar4 = 0;
LAB_0041cd4c:
    if (local_20 != 0) {
      iVar3 = (*(code *)PTR_calloc_006148c0)(param_5 + local_1c,1);
      if (iVar3 != 0) {
        (*(code *)PTR_memcpy_00614674)(iVar3,local_20,local_1c);
        if (param_5 != 0) {
          (*(code *)PTR_memcpy_00614674)(iVar3 + local_1c,param_4,param_5);
        }
        iVar1 = (*(code *)PTR_HKSecureSocketSend_006125b8)
                          (param_1,iVar3,param_5 + local_1c,*(undefined4 *)(param_6 + 0xc));
        (*(code *)PTR_free_0061286c)(iVar3);
        goto LAB_0041cdfc;
      }
    }
    iVar1 = 0;
  }
LAB_0041cdfc:
  if (iVar4 != 0) {
    (*(code *)PTR_json_object_put_00612524)(iVar4);
  }
LAB_0041ce18:
  if (local_20 != 0) {
    (*(code *)PTR_free_0061286c)();
  }
  return iVar1;
}


/* homeKitListener_loop @ 0041ce5c */

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
  
  (*(code *)PTR_HKCreateGlobalEventTable_00612b84)();
  (*(code *)PTR_pthread_list_init_00614740)();
  (*(code *)PTR_HomekitSerialThreadStart_006144dc)();
  iVar3 = (*(code *)PTR_Phytrex_HMPairListIsEmpty_00614aa0)();
  if (iVar3 == 0) {
    pcVar7 = "1";
  }
  else {
    pcVar7 = "0";
  }
  uVar8 = param_1 >> 5;
  (*(code *)PTR_mdnsPhytrex_HomekitUpdate_00612f60)(&DAT_005ac3f4,pcVar7);
  uVar4 = (*(code *)PTR_calloc_006148c0)(100,1);
  (*(code *)PTR_HKSetupFirmwareVersion_00614ae0)(uVar4);
  (*(code *)PTR_mdnsPhytrex_HomekitUpdate_00612f60)(&DAT_005ac3f8,uVar4);
  (*(code *)PTR_free_0061286c)(uVar4);
  uVar9 = 1 << (param_1 & 0x1f);
  uVar4 = (*(code *)PTR_calloc_006148c0)(10,1);
  (*(code *)PTR_HKSetupAccessoryType_00613f18)(uVar4);
  (*(code *)PTR_mdnsPhytrex_HomekitUpdate_00612f60)(&DAT_005ac3fc,uVar4);
  (*(code *)PTR_free_0061286c)(uVar4);
  local_e4 = PTR_homekitUserSerialOpen_006147dc;
  local_e0 = PTR_homekitUserSerialWrite_00613424;
  local_dc = PTR_homekitUserSerialRead_00613dd0;
  local_d8 = PTR_homekitUserSerialClose_006143f4;
  (*(code *)PTR_HomekitSerialFuncRegister_006143a8)(&local_e4);
  (*(code *)PTR_HomekitSerialOpen_00612550)(0);
  DAT_00614bf0 = (*(code *)PTR_calloc_006148c0)(0x15c,1);
  (*(code *)PTR_Phytrex_HMGetAppConfig_00614b2c)(DAT_00614bf0 + 0xbc);
  local_b0[0x20] = param_1 + 1;
  (*(code *)PTR_HKCharacteristicInit_00614288)(DAT_00614bf0);
  (*(code *)PTR_HKSetPassword_00612648)(*(undefined4 *)(DAT_00614bf0 + 0x158));
  DAT_00614bec = 0;
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
        iVar3 = (*(code *)PTR_select_00613cc4)(uVar2,local_b0,0,0,&local_ec);
        uVar5 = 0;
      } while (iVar3 + 1U < 2);
      if ((uVar9 & local_b0[uVar8]) == 0) break;
      piVar6 = (int *)(*(code *)PTR_calloc_006148c0)(0x24,1);
      iVar3 = (*(code *)PTR_accept_00612890)(param_1,piVar6 + 1,piVar6 + 8);
      puVar1 = PTR_pthread_attr_init_006143b4;
      *piVar6 = iVar3;
      if (iVar3 < 1) {
        (*(code *)PTR_free_0061286c)(piVar6);
      }
      else {
        (*(code *)puVar1)(auStack_d4);
        (*(code *)PTR_pthread_attr_setdetachstate_00614770)(auStack_d4,1);
        iVar3 = (*(code *)PTR_pthread_create_00613740)(auStack_f0,auStack_d4,&DAT_0041fdb4,piVar6);
        if (iVar3 < 0) {
          (*(code *)PTR_close_00613604)(param_1);
          (*(code *)PTR_free_0061286c)(piVar6);
          return 1;
        }
        (*(code *)PTR_pthread_attr_destroy_00613830)(auStack_d4);
      }
      uVar5 = 0;
    }
  } while( true );
}


/* FUN_0041d2a4 @ 0041d2a4 */

void FUN_0041d2a4(undefined4 *param_1)

{
  undefined4 uVar1;
  
  (*(code *)PTR_close_00613604)(*param_1);
  (*(code *)PTR_free_0061286c)(param_1);
  (*(code *)PTR_pthread_mutex_unlock_00612b1c)(&DAT_00614bb0);
  (*(code *)PTR_pthread_mutex_unlock_00612b1c)(&DAT_00614bc8);
  (*(code *)PTR_Phytrex_Cleanup_Handler_006148e4)();
  (*(code *)PTR_pthread_list_cleanup_handler_006125bc)();
  uVar1 = (*(code *)PTR_pthread_self_006134a8)();
                    /* WARNING: Could not recover jumptable at 0x0041d374. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_pthread_list_remove_byID_00613e34)(uVar1);
  return;
}


/* HomekitServer_Cleaner @ 0041d37c */

void HomekitServer_Cleaner(void)

{
  (*(code *)PTR_pthread_mutex_destroy_00613ae8)(&DAT_00614bb0);
  (*(code *)PTR_pthread_mutex_destroy_00613ae8)(&DAT_00614bc8);
                    /* WARNING: Could not recover jumptable at 0x0041d3c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_Phytrex_HMEnd_006147ac)();
  return;
}


/* HomekitServer_init @ 0041d3d0 */

void HomekitServer_init(void)

{
  (*(code *)PTR_Phytrex_HMCreatPairList_006134e4)();
  (*(code *)PTR_pthread_mutex_init_006144d8)(&DAT_00614bb0,0);
  (*(code *)PTR_pthread_mutex_init_006144d8)(&DAT_00614bc8,0);
  (*(code *)PTR_pthread_cond_init_00613358)(&DAT_00600a00,0);
                    /* WARNING: Could not recover jumptable at 0x0041d458. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_Phytrex_HMStart_0061471c)();
  return;
}


/* FUN_0041d460 @ 0041d460 */

void FUN_0041d460(void)

{
  (*(code *)PTR_syscall_00614510)(0x107e);
  return;
}


/* FUN_0041d478 @ 0041d478 */

/* WARNING: Restarted to delay deadcode elimination for space: ram */

undefined4 FUN_0041d478(undefined4 param_1)

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
  
  local_54 = (*(code *)PTR_json_object_new_object_0061278c)();
  iVar10 = 0;
  uVar3 = (*(code *)PTR_json_object_new_array_00613184)();
  (*(code *)PTR_json_object_object_add_006137b4)(local_54,"accessories",uVar3);
  uVar4 = (*(code *)PTR_json_object_new_object_0061278c)();
  (*(code *)PTR_json_object_array_add_00613278)(uVar3,uVar4);
  uVar3 = (*(code *)PTR_json_object_new_int_00613484)(1);
  (*(code *)PTR_json_object_object_add_006137b4)(uVar4,&DAT_005ac40c,uVar3);
  local_50 = (*(code *)PTR_json_object_new_array_00613184)();
  (*(code *)PTR_json_object_object_add_006137b4)(uVar4,"services",local_50);
  piVar9 = (int *)(PTR_hapObjects_006149e4 + 4);
  do {
    if (*piVar9 == 0) {
      DAT_00614be4 = local_54;
      return 0;
    }
    iVar11 = 0;
    uVar3 = (*(code *)PTR_json_object_new_object_0061278c)();
    uVar4 = (*(code *)PTR_json_object_new_string_00614508)(*piVar9);
    (*(code *)PTR_json_object_object_add_006137b4)(uVar3,"type",uVar4);
    uVar4 = (*(code *)PTR_json_object_new_int_00613484)(piVar9[1]);
    (*(code *)PTR_json_object_object_add_006137b4)(uVar3,&DAT_005ac41c,uVar4);
    local_4c = (*(code *)PTR_json_object_new_array_00613184)();
    (*(code *)PTR_json_object_object_add_006137b4)(uVar3,"characteristics",local_4c);
    local_70 = PTR_hapObjects_006149e4 + (iVar10 * 0xb5 + 1) * 8 + 4;
    do {
      (*(code *)PTR_memcpy_00614674)(&local_c4,local_70,0x48);
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
      if (local_c4 == 0) goto LAB_0041de64;
      local_30 = local_c4;
      uVar4 = (*(code *)PTR_json_object_new_object_0061278c)();
      uVar5 = (*(code *)PTR_json_object_new_string_00614508)(local_30);
      (*(code *)PTR_json_object_object_add_006137b4)(uVar4,"type",uVar5);
      uVar5 = (*(code *)PTR_json_object_new_int_00613484)(local_58);
      (*(code *)PTR_json_object_object_add_006137b4)(uVar4,&DAT_005ac41c,uVar5);
      if (local_78 == 0) {
        (*(code *)PTR_HKReadCharacteristicValue_006149a4)(0,local_58,&local_c8,param_1);
      }
      else {
        local_c8 = local_b4;
      }
      switch(iVar7) {
      case 0:
        pcVar8 = "bool";
        goto LAB_0041d828;
      case 1:
        pcVar8 = "int";
LAB_0041d828:
        uVar5 = (*(code *)PTR_json_object_new_string_00614508)(pcVar8);
        (*(code *)PTR_json_object_object_add_006137b4)(uVar4,"format",uVar5);
        pcVar12 = (code *)PTR_json_object_new_int_00613484;
        if (local_74 == 0) goto joined_r0x0041d960;
        goto LAB_0041d974;
      case 2:
        uVar5 = (*(code *)PTR_json_object_new_string_00614508)("float");
        (*(code *)PTR_json_object_object_add_006137b4)(uVar4,"format",uVar5);
        if ((local_74 != 0) || (local_78 != 0)) {
          uVar13 = (*(code *)PTR___extendsfdf2_00612dc0)(local_c8);
          uVar5 = (*(code *)PTR_json_object_new_double_00612d04)
                            ((int)((ulonglong)uVar13 >> 0x20),(int)uVar13);
          goto LAB_0041d97c;
        }
        goto LAB_0041d9f8;
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
        if (iVar7 != 8) goto LAB_0041d9f8;
        goto LAB_0041dae0;
      case 8:
        if ((local_74 == 0) && (local_78 == 0)) goto LAB_0041dae0;
        uVar6 = (*(code *)PTR_json_object_new_string_00614508)(local_c8);
        pcVar8 = "value";
        goto LAB_0041dad4;
      }
      uVar5 = (*(code *)PTR_json_object_new_string_00614508)(pcVar8);
      (*(code *)PTR_json_object_object_add_006137b4)(uVar4,"format",uVar5);
      pcVar12 = (code *)PTR_json_object_new_string_00614508;
      if (local_74 == 0) {
joined_r0x0041d960:
        if (local_78 != 0) goto LAB_0041d974;
      }
      else {
LAB_0041d974:
        uVar5 = (*pcVar12)(local_c8);
LAB_0041d97c:
        (*(code *)PTR_json_object_object_add_006137b4)(uVar4,"value",uVar5);
      }
LAB_0041d9f8:
      local_78 = (*(code *)PTR_json_object_new_array_00613184)();
      if (local_34 != 0) {
        uVar5 = (*(code *)PTR_json_object_new_string_00614508)(&DAT_005ac440);
        (*(code *)PTR_json_object_array_add_00613278)(local_78,uVar5);
      }
      if (local_38 != 0) {
        uVar5 = (*(code *)PTR_json_object_new_string_00614508)(&DAT_005ac444);
        (*(code *)PTR_json_object_array_add_00613278)(local_78,uVar5);
      }
      if (local_3c != 0) {
        uVar5 = (*(code *)PTR_json_object_new_string_00614508)(&DAT_005ac448);
        (*(code *)PTR_json_object_array_add_00613278)(local_78,uVar5);
      }
      pcVar8 = "perms";
      uVar6 = local_78;
LAB_0041dad4:
      (*(code *)PTR_json_object_object_add_006137b4)(uVar4,pcVar8,uVar6);
LAB_0041dae0:
      if (local_40 == 0) {
        if (local_5c != 0) {
LAB_0041dbf4:
          if (iVar7 == 1) {
            uVar5 = (*(code *)PTR_json_object_new_int_00613484)(local_a4);
          }
          else {
            if (iVar7 != 2) goto LAB_0041dc7c;
            uVar13 = (*(code *)PTR___extendsfdf2_00612dc0)(local_a4);
            uVar5 = (*(code *)PTR_json_object_new_double_00612d04)
                              ((int)((ulonglong)uVar13 >> 0x20),(int)uVar13);
          }
          (*(code *)PTR_json_object_object_add_006137b4)(uVar4,"maxValue",uVar5);
          goto LAB_0041dc7c;
        }
        if (local_60 != 0) goto LAB_0041dc7c;
        iVar7 = (*(code *)PTR___nesf2_00612800)(local_64,0);
        if ((iVar7 != 0) || (local_68 != 0)) goto LAB_0041dd04;
      }
      else {
        if (iVar7 == 1) {
          uVar5 = (*(code *)PTR_json_object_new_int_00613484)(local_ac);
LAB_0041dbd8:
          (*(code *)PTR_json_object_object_add_006137b4)(uVar4,"minValue",uVar5);
        }
        else if (iVar7 == 2) {
          uVar13 = (*(code *)PTR___extendsfdf2_00612dc0)(local_ac);
          uVar5 = (*(code *)PTR_json_object_new_double_00612d04)
                            ((int)((ulonglong)uVar13 >> 0x20),(int)uVar13);
          goto LAB_0041dbd8;
        }
        if (local_5c != 0) goto LAB_0041dbf4;
LAB_0041dc7c:
        if (local_60 != 0) {
          if (iVar7 == 1) {
            uVar5 = (*(code *)PTR_json_object_new_int_00613484)(local_9c);
          }
          else {
            if (iVar7 != 2) goto LAB_0041dd04;
            uVar13 = (*(code *)PTR___extendsfdf2_00612dc0)(local_9c);
            uVar5 = (*(code *)PTR_json_object_new_double_00612d04)
                              ((int)((ulonglong)uVar13 >> 0x20),(int)uVar13);
          }
          (*(code *)PTR_json_object_object_add_006137b4)(uVar4,"minStep",uVar5);
        }
LAB_0041dd04:
        if (local_44 != 0) {
          uVar13 = (*(code *)PTR___extendsfdf2_00612dc0)(local_64);
          uVar5 = (*(code *)PTR_json_object_new_double_00612d04)
                            ((int)((ulonglong)uVar13 >> 0x20),(int)uVar13);
          (*(code *)PTR_json_object_object_add_006137b4)(uVar4,"precision",uVar5);
        }
        if (local_48 != 0) {
          uVar5 = (*(code *)PTR_json_object_new_int_00613484)(local_68);
          (*(code *)PTR_json_object_object_add_006137b4)(uVar4,"maxLen",uVar5);
        }
      }
      if (local_6c != 0) {
        uVar5 = (*(code *)PTR_json_object_new_string_00614508)(local_6c);
        (*(code *)PTR_json_object_object_add_006137b4)(uVar4,"description",uVar5);
      }
      if (iVar1 != 0) {
        uVar5 = (*(code *)PTR_json_object_new_string_00614508)(iVar1);
        (*(code *)PTR_json_object_object_add_006137b4)(uVar4,"format",uVar5);
      }
      if (iVar2 != 0) {
        uVar5 = (*(code *)PTR_json_object_new_string_00614508)(iVar2);
        (*(code *)PTR_json_object_object_add_006137b4)(uVar4,&DAT_005ac494,uVar5);
      }
      (*(code *)PTR_json_object_array_add_00613278)(local_4c,uVar4);
LAB_0041de64:
      iVar11 = iVar11 + 1;
      local_70 = local_70 + 0x48;
    } while (iVar11 != 0x14);
    iVar10 = iVar10 + 1;
    (*(code *)PTR_json_object_array_add_00613278)(local_50,uVar3);
    piVar9 = piVar9 + 0x16a;
    if (iVar10 == 10) {
      DAT_00614be4 = local_54;
      return 0;
    }
  } while( true );
}


/* FUN_0041dee0 @ 0041dee0 */

/* WARNING: Restarted to delay deadcode elimination for space: ram */

uint FUN_0041dee0(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

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
  
  DAT_00614be4 = (undefined *)0x0;
  iVar1 = (*(code *)PTR_json_object_get_object_00613b90)();
  puVar11 = *(undefined4 **)(iVar1 + 0x20);
  iVar1 = 0;
  while (puVar11 != (undefined4 *)0x0) {
    iVar12 = puVar11[1];
    iVar2 = (*(code *)PTR_strcmp_00612a7c)(*puVar11,"characteristics");
    puVar11 = (undefined4 *)puVar11[2];
    if (iVar2 == 0) {
      iVar1 = iVar12;
    }
  }
  if ((iVar1 == 0) || (iVar2 = (*(code *)PTR_json_object_get_type_00614280)(iVar1), iVar2 != 5)) {
    uVar6 = 0xfffeecf5;
  }
  else {
    local_50 = 0;
    local_40 = (*(code *)PTR_json_object_array_length_00614790)(iVar1);
    DAT_00614be4 = (undefined *)(*(code *)PTR_json_object_new_object_0061278c)();
    local_3c = DAT_00614be4;
    local_44 = (*(code *)PTR_json_object_new_array_00613184)();
    (*(code *)PTR_json_object_object_add_006137b4)(local_3c,"characteristics",local_44);
    uVar6 = 0;
    for (iVar2 = 0; iVar2 < local_40; iVar2 = iVar2 + 1) {
      uVar3 = (*(code *)PTR_json_object_array_get_idx_00614110)(iVar1,iVar2);
      local_54 = 0;
      iVar12 = (*(code *)PTR_json_object_get_object_00613b90)(uVar3);
      local_60 = *(int **)(iVar12 + 0x20);
      puVar4 = (undefined1 *)0;
      while (local_60 != (int *)0x0) {
        local_58 = *local_60;
        iVar12 = (*(code *)PTR_strcmp_00612a7c)(local_58,&DAT_005ac41c);
        local_5c = (undefined1 *)local_60[1];
        local_60 = (int *)local_60[2];
        if (iVar12 == 0) {
          local_54 = (*(code *)PTR_json_object_get_int_00613880)(local_5c);
        }
        else {
          iVar12 = (*(code *)PTR_strcmp_00612a7c)(local_58,"value");
          if (iVar12 == 0) {
            unaff_s6 = 0;
            puVar4 = local_5c;
          }
          else {
            iVar12 = (*(code *)PTR_strcmp_00612a7c)(local_58,&DAT_005ac40c);
            if (iVar12 == 0) {
              (*(code *)PTR_json_object_get_int_00613880)(local_5c);
            }
            else {
              iVar12 = (*(code *)PTR_strcmp_00612a7c)(local_58,&DAT_005ac448);
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
      piVar9 = (int *)(PTR_hapObjects_006149e4 + 4);
      do {
        if (*piVar9 == 0) break;
        uVar8 = 0;
        puVar10 = PTR_hapObjects_006149e4 + (uVar6 * 0xb5 + 1) * 8 + 4;
        local_2c = uVar6;
        local_38 = uVar3;
        local_34 = piVar9;
        do {
          local_3c = puVar10;
          local_30 = uVar8;
          (*(code *)PTR_memcpy_00614674)(local_60,puVar10,0x48);
          if ((local_138 != 0) && (local_134 == local_54)) {
            local_48 = local_30;
            local_4c = local_2c;
            (*(code *)PTR_memcpy_00614674)
                      (local_5c,PTR_hapObjects_006149e4 + local_30 * 0x48 + local_2c * 0x5a8 + 0xc,
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
        (*(code *)PTR_json_object_put_00612524)(local_44);
        uVar6 = 0xfffeecf9;
        break;
      }
      if (unaff_s6 == 0) {
        switch(uVar3) {
        case 0:
        case 1:
          unaff_s0 = (*(code *)PTR_json_object_get_int_00613880)(puVar4);
          break;
        case 2:
          uVar14 = (*(code *)PTR_json_object_get_double_00613bd8)(puVar4);
          unaff_s0 = (*(code *)PTR___truncdfsf2_00614940)
                               ((int)((ulonglong)uVar14 >> 0x20),(int)uVar14);
          break;
        case 3:
        case 4:
        case 5:
          unaff_s0 = (*(code *)PTR_json_object_get_string_00613ffc)(puVar4);
          (*(code *)PTR_json_object_get_string_len_00614594)(puVar4);
        }
      }
      else if (unaff_s6 == 1) {
        iVar12 = (*(code *)PTR_json_object_get_boolean_00614668)(puVar4);
        unaff_s0 = unaff_s0 & 0xffffff | (uint)(iVar12 != 0) << 0x18;
      }
      local_140 = 0;
      if ((PTR_hapObjects_006149e4[local_48 * 0x48 + local_4c * 0x5a8 + 0x22] == '\0') ||
         (unaff_s6 != 1)) {
        if (PTR_hapObjects_006149e4[local_48 * 0x48 + local_4c * 0x5a8 + 0x21] == '\0') {
          local_140 = -0x11304;
        }
        else {
          (*(code *)PTR_HKWriteCharacteristicValue_00613280)(0,unaff_s3,unaff_s0,&local_140,param_2)
          ;
          if (local_140 == 0) {
            (*(code *)PTR_pthread_mutex_lock_00613f24)(&DAT_00614bc8);
            (*(code *)PTR_HKUpdateValueToGlobalEventTable_006149fc)(unaff_s3,unaff_s0);
            (*(code *)PTR_pthread_mutex_unlock_00612b1c)(&DAT_00614bc8);
            (*(code *)PTR_HKUpdateValueToPrivateEventTable_00613968)(*param_3,unaff_s3,unaff_s0);
          }
        }
      }
      else {
        (*(code *)PTR_HKWriteCharacteristicEvent_00612668)
                  (0,unaff_s3,unaff_s0,&local_140,param_2,*param_3);
      }
      local_58 = local_140;
      iVar12 = (*(code *)PTR_json_object_new_object_0061278c)();
      local_5c = (undefined1 *)(*(code *)PTR_json_object_new_object_0061278c)();
      (*(code *)PTR_memcpy_00614674)
                (&local_a8,PTR_hapObjects_006149e4 + local_48 * 0x48 + local_4c * 0x5a8 + 0xc,0x48);
      local_60 = (int *)local_a4;
      local_54 = local_9c;
      if (local_a8 == 0) {
        uVar3 = (*(code *)PTR_json_object_new_int_00613484)(1);
        (*(code *)PTR_json_object_object_add_006137b4)(iVar12,&DAT_005ac40c,uVar3);
        local_30 = 0xfffe0000;
        uVar3 = (*(code *)PTR_json_object_new_int_00613484)(local_60);
        (*(code *)PTR_json_object_object_add_006137b4)(iVar12,&DAT_005ac41c,uVar3);
        local_2c = local_30 | 0xecf9;
        uVar3 = (*(code *)PTR_json_object_new_int_00613484)(local_30 | 0xecfe);
        (*(code *)PTR_json_object_object_add_006137b4)(iVar12,"status",uVar3);
        uVar3 = (*(code *)PTR_json_object_new_string_00614508)
                          ("Write a characteristic that is not existed");
        (*(code *)PTR_json_object_object_add_006137b4)(local_5c,"developerMessage",uVar3);
        uVar3 = (*(code *)PTR_json_object_new_int_00613484)(local_30 | 0xecf9);
        (*(code *)PTR_json_object_object_add_006137b4)(local_5c,"errorCode",uVar3);
        pcVar7 = "response";
        puVar4 = local_5c;
LAB_0041e780:
        (*(code *)PTR_json_object_object_add_006137b4)(iVar12,pcVar7,puVar4);
        uVar6 = local_2c;
LAB_0041e9cc:
        local_50 = local_50 + 1;
      }
      else {
        local_30 = (uint)local_92;
        local_2c = (uint)local_93;
        uVar3 = (*(code *)PTR_json_object_new_int_00613484)(1);
        (*(code *)PTR_json_object_object_add_006137b4)(iVar12,&DAT_005ac40c,uVar3);
        uVar3 = (*(code *)PTR_json_object_new_int_00613484)(local_60);
        (*(code *)PTR_json_object_object_add_006137b4)(iVar12,&DAT_005ac41c,uVar3);
        if ((local_2c == 0) && (local_30 == 0)) {
          uVar3 = (*(code *)PTR_json_object_new_int_00613484)(1);
          (*(code *)PTR_json_object_object_add_006137b4)(iVar12,&DAT_005ac40c,uVar3);
          local_2c = 0xfffeecfc;
          uVar3 = (*(code *)PTR_json_object_new_int_00613484)(local_60);
          (*(code *)PTR_json_object_object_add_006137b4)(iVar12,&DAT_005ac41c,uVar3);
          puVar4 = (undefined1 *)(*(code *)PTR_json_object_new_int_00613484)(0xfffeecfc);
          pcVar7 = "status";
          goto LAB_0041e780;
        }
        iVar5 = (*(code *)PTR_HKReadCharacteristicValue_006149a4)(0,unaff_s3,&local_13c,param_2);
        if ((iVar5 != 0) || (local_58 != 0)) {
          uVar3 = (*(code *)PTR_json_object_new_int_00613484)(1);
          (*(code *)PTR_json_object_object_add_006137b4)(iVar12,&DAT_005ac40c,uVar3);
          uVar3 = (*(code *)PTR_json_object_new_int_00613484)(local_60);
          (*(code *)PTR_json_object_object_add_006137b4)(iVar12,&DAT_005ac41c,uVar3);
          uVar3 = (*(code *)PTR_json_object_new_int_00613484)(local_58);
          (*(code *)PTR_json_object_object_add_006137b4)(iVar12,"status",uVar3);
          uVar6 = 0xfffeecfe;
          goto LAB_0041e9cc;
        }
        switch(local_54) {
        case 0:
        case 1:
          pcVar13 = (code *)PTR_json_object_new_int_00613484;
          break;
        case 2:
          uVar14 = (*(code *)PTR___extendsfdf2_00612dc0)(local_13c);
          uVar3 = (*(code *)PTR_json_object_new_double_00612d04)
                            ((int)((ulonglong)uVar14 >> 0x20),(int)uVar14);
          goto LAB_0041e8f4;
        case 3:
        case 4:
        case 5:
          pcVar13 = (code *)PTR_json_object_new_string_00614508;
          break;
        default:
          goto switchD_0041e898_default;
        }
        uVar3 = (*pcVar13)(local_13c);
LAB_0041e8f4:
        (*(code *)PTR_json_object_object_add_006137b4)(iVar12,"value",uVar3);
switchD_0041e898_default:
        uVar6 = 0;
      }
      if (iVar12 != 0) {
        local_2c = uVar6;
        (*(code *)PTR_json_object_array_add_00613278)(local_44,iVar12);
        uVar6 = local_2c;
      }
    }
  }
  if (local_50 != 0) {
    uVar6 = 0xfffeecfe;
  }
  return uVar6;
}


/* FUN_0041e9e0 @ 0041e9e0 */

int * FUN_0041e9e0(undefined4 param_1,int param_2,int param_3,int param_4,int param_5)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  undefined1 *puVar7;
  undefined4 *puVar8;
  int ***pppiVar9;
  undefined1 *puVar10;
  undefined1 uVar14;
  int *piVar11;
  int *piVar12;
  int iVar13;
  int ****ppppiVar15;
  int ***pppiVar16;
  char *pcVar17;
  int unaff_s3;
  undefined1 *puVar18;
  int iVar19;
  int ****ppppiVar20;
  undefined4 ****ppppuVar21;
  byte *pbVar22;
  undefined4 ***pppuVar23;
  code *pcVar24;
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
  int *local_34;
  byte *local_30;
  
  piVar4 = (int *)(*(code *)PTR_HKSocketReadHTTPHeader_006146cc)
                            (param_1,param_2,*(undefined4 *)(param_3 + 0xc));
  if (piVar4 == (int *)0xffffe59f) {
    uVar6 = (*(code *)PTR_pthread_self_006134a8)();
    (*(code *)PTR_pthread_kill_00613d24)(uVar6,3);
    goto LAB_0041fd04;
  }
  if ((piVar4 != (int *)0x0) ||
     (piVar4 = (int *)(*(code *)PTR_HKSocketReadHTTPBody_006138bc)
                                (param_1,param_2,*(undefined4 *)(param_3 + 0xc)),
     piVar4 != (int *)0x0)) goto LAB_0041fd04;
  iVar5 = (*(code *)PTR_HTTPHeaderMatchURL_00612574)(param_2,"/pair-setup");
  if (iVar5 == 0) {
    piVar4 = (int *)(*(code *)PTR_HKPairSetupEngine_00613918)
                              (param_1,param_2,param_3,param_4,param_5);
    if (piVar4 == (int *)0x0) {
      piVar4 = (int *)0xffffe59f;
      if (*(char *)(param_4 + 0x110) != '\0') {
        piVar4 = (int *)0x0;
      }
    }
    else {
      FUN_0041c9b8(param_1,400,"application/pairing+tlv8",0xfffeecf3,0,0);
    }
    goto LAB_0041fd04;
  }
  iVar5 = (*(code *)PTR_HTTPHeaderMatchURL_00612574)(param_2,"/pair-verify");
  if (iVar5 == 0) {
    if (*(int *)(param_3 + 4) == 0) {
      iVar5 = (*(code *)PTR_HKCreatePairVerifyInfo_00613394)();
      *(int *)(param_3 + 4) = iVar5;
      if (iVar5 == 0) {
LAB_0041fd00:
        piVar4 = (int *)0xffffe5b8;
        goto LAB_0041fd04;
      }
    }
    piVar4 = (int *)(*(code *)PTR_HKPairVerifyEngine_0061499c)
                              (param_1,param_2,*(undefined4 *)(param_3 + 4),param_4,param_5);
    puVar3 = PTR_memcpy_00614674;
    if (piVar4 == (int *)0x0) {
      if (**(char **)(param_3 + 4) == '\0') goto LAB_0041fd04;
      **(undefined1 **)(param_3 + 0xc) = 1;
      (*(code *)puVar3)(*(int *)(param_3 + 0xc) + 0x21,*(undefined4 *)(*(int *)(param_3 + 4) + 0x24)
                        ,0x20);
      (*(code *)PTR_memcpy_00614674)
                (*(int *)(param_3 + 0xc) + 1,*(undefined4 *)(*(int *)(param_3 + 4) + 0x20),0x20);
    }
    (*(code *)PTR_HKCleanPairVerifyInfo_00612dc8)(param_3 + 4);
    goto LAB_0041fd04;
  }
  iVar5 = (*(code *)PTR_HTTPHeaderMatchURL_00612574)(param_2,"/accessories");
  if (iVar5 == 0) {
    (*(code *)PTR_puts_00612670)("[discovery]");
    piVar4 = (int *)FUN_0041d478(param_4);
    if (piVar4 != (int *)0x0) goto LAB_0041fd04;
    local_34 = (int *)(*(code *)PTR_json_object_to_json_string_00612474)(DAT_00614be4);
    uVar6 = (*(code *)PTR_strlen_00613f4c)(local_34);
    pcVar17 = "Read Data base Error";
    pbVar22 = (byte *)0x0;
    piVar4 = local_34;
LAB_0041f310:
    piVar4 = (int *)FUN_0041caf4(param_1,pbVar22,pcVar17,piVar4,uVar6,param_3);
    (*(code *)PTR_json_object_put_00612524)(DAT_00614be4);
    DAT_00614be4 = 0;
    goto LAB_0041fd04;
  }
  iVar5 = (*(code *)PTR_HTTPHeaderMatchPartialURL_00613e74)(param_2,"/characteristics");
  if (iVar5 == 0) {
    iVar5 = (*(code *)PTR_HTTPHeaderMatchURL_00612574)(param_2,"/pairings");
    if (iVar5 == 0) {
      (*(code *)PTR_puts_00612670)("[HTTP Header] Get kPAIRINGS");
      if (**(char **)(param_3 + 0xc) != '\0') {
        if (*(int *)(param_3 + 8) != 0) {
LAB_0041f3b8:
          local_1c0 = *(int *)(param_2 + 0x104);
          local_50 = (int *)(local_1c0 + *(int *)(param_2 + 0x10c));
          local_4c = &local_1bc;
          iVar5 = *(int *)(param_3 + 8);
switchD_0041f450_caseD_2:
          iVar19 = (*(code *)PTR_TLVGetNext_00613da4)
                             (local_1c0,local_50,&local_1c8,local_4c,&local_1b8,&local_1c0);
          if (iVar19 != 0) goto code_r0x0041f4f0;
          pbVar22 = (byte *)(*(code *)PTR_calloc_006148c0)(local_1b8 + 1,1);
          if (pbVar22 == (byte *)0x0) {
            piVar4 = (int *)0xffffe5b8;
            goto LAB_0041fbd0;
          }
          local_30 = pbVar22;
          (*(code *)PTR_memcpy_00614674)(pbVar22,local_1bc,local_1b8);
          puVar3 = PTR_free_0061286c;
          switch((uint)local_1c8 >> 0x18) {
          case 0:
            *(uint *)(iVar5 + 8) = (uint)*local_30;
            break;
          case 1:
            *(byte **)(iVar5 + 0xc) = local_30;
          default:
            goto switchD_0041f450_caseD_2;
          case 3:
            *(byte **)(iVar5 + 0x10) = local_30;
            goto switchD_0041f450_caseD_2;
          case 6:
            if (*(uint *)(iVar5 + 4) != (uint)*local_30) {
              piVar4 = (int *)0xffffe5af;
              goto LAB_0041fbd0;
            }
            break;
          case 0xb:
            *(byte *)(iVar5 + 0x14) = *local_30;
          }
          (*(code *)puVar3)(local_30);
          goto switchD_0041f450_caseD_2;
        }
        iVar5 = FUN_0041c630();
        *(int *)(param_3 + 8) = iVar5;
        if (iVar5 != 0) goto LAB_0041f3b8;
        goto LAB_0041fd00;
      }
LAB_0041fca0:
      pbVar22 = (byte *)0xfffeecf3;
    }
    else {
      iVar5 = (*(code *)PTR_HTTPHeaderMatchURL_00612574)(param_2,"/identify");
      if (iVar5 != 0) goto LAB_0041fca0;
      if (**(char **)(param_3 + 0xc) == '\0') {
        iVar5 = (*(code *)PTR_Phytrex_HMPairListIsEmpty_00614aa0)(param_1);
        if (iVar5 == 0) {
          (*(code *)PTR_HKUserTriggerIdentify_00613c44)();
          pcVar17 = "application/pairing+tlv8";
          uVar6 = 0xcc;
          pcVar26 = (char *)0x0;
          uVar27 = 0;
        }
        else {
          pcVar26 = "{\"status\":-70401}";
          pcVar17 = "application/hap+json";
          uVar6 = 400;
          uVar27 = 0x11;
        }
        piVar4 = (int *)FUN_0041c9b8(param_1,uVar6,pcVar17,0,pcVar26,uVar27);
        goto LAB_0041fd04;
      }
      pbVar22 = (byte *)0xfffeecff;
    }
    pcVar17 = "Unsupport HTTP method";
  }
  else {
    iVar5 = (*(code *)PTR_HTTPHeaderMatchMethod_00613a98)(param_2,&DAT_005ac558);
    if (iVar5 != -0x1a47) {
      local_1ac = (int ***)&local_1ac;
      local_1a8 = (int ***)&local_1ac;
      iVar5 = (*(code *)PTR_HTTPHeaderMatchPartialURL_00613e74)(param_2,"/characteristics");
      iVar19 = iVar5 + 0x14;
      if (iVar5 == 0) {
        iVar19 = 0;
      }
      puVar7 = (undefined1 *)(*(code *)PTR_strchr_006127e8)(iVar19,0x20);
      if (puVar7 != (undefined1 *)0x0) {
        *puVar7 = 0;
      }
      iVar5 = (*(code *)PTR_strtok_0061379c)(iVar19,",");
      while (iVar5 != 0) {
        (*(code *)PTR_memset_006130cc)(auStack_15c,0,100);
        (*(code *)PTR_strcpy_00612464)(auStack_15c,iVar5);
        local_30 = (byte *)(*(code *)PTR_strchr_006127e8)(iVar5,0x2e);
        (*(code *)PTR_memset_006130cc)(auStack_15c,0,100);
        puVar8 = (undefined4 *)(*(code *)PTR_calloc_006148c0)(0x10,1);
        uVar6 = (*(code *)PTR_atoi_00612850)(iVar5);
        *puVar8 = uVar6;
        uVar6 = (*(code *)PTR_atoi_00612850)(local_30 + 1);
        puVar3 = PTR_strtok_0061379c;
        puVar8[1] = uVar6;
        local_1ac[1] = (int **)(puVar8 + 2);
        puVar8[2] = local_1ac;
        puVar8[3] = &local_1ac;
        local_1ac = (int ***)(puVar8 + 2);
        iVar5 = (*(code *)puVar3)(0,",");
      }
      local_1c8 = local_1b4;
      pbVar22 = (byte *)0x0;
      if ((undefined4 ****)local_1c8 != &local_1c8) {
        local_4c = (undefined4 *)0x0;
        DAT_00614be4 = (*(code *)PTR_json_object_new_object_0061278c)();
        local_44 = (undefined1 *)(*(code *)PTR_json_object_new_array_00613184)();
        local_38 = &local_1c4;
        local_3c = &local_1a4;
        for (ppppuVar21 = (undefined4 ****)local_1c8[2];
            ppppuVar21 != (undefined4 ****)(local_1c8 + 2);
            ppppuVar21 = (undefined4 ****)*ppppuVar21) {
          local_40 = ppppuVar21[-2];
          iVar5 = 0;
          local_50 = (int *)(PTR_hapObjects_006149e4 + 4);
          pppuVar23 = ppppuVar21[-1];
          while (*local_50 != 0) {
            piVar4 = (int *)0x0;
            pbVar22 = PTR_hapObjects_006149e4 + (iVar5 * 0xb5 + 1) * 8 + 4;
            do {
              local_34 = piVar4;
              local_30 = pbVar22;
              (*(code *)PTR_memcpy_00614674)(local_3c,pbVar22,0x48);
              local_48 = local_198;
              if ((local_1a4 != 0) && ((undefined4 ***)local_1a0 == pppuVar23)) {
                if (local_190 == '\0') {
                  unaff_s3 = (*(code *)PTR_json_object_new_object_0061278c)();
                  uVar6 = (*(code *)PTR_json_object_new_int_00613484)(1);
                  (*(code *)PTR_json_object_object_add_006137b4)(unaff_s3,&DAT_005ac40c,uVar6);
                  uVar6 = (*(code *)PTR_json_object_new_int_00613484)(pppuVar23);
                  (*(code *)PTR_json_object_object_add_006137b4)(unaff_s3,&DAT_005ac41c,uVar6);
                  pbVar22 = (byte *)0xfffeecfb;
                  uVar6 = (*(code *)PTR_json_object_new_int_00613484)();
                  (*(code *)PTR_json_object_object_add_006137b4)(unaff_s3,"status",uVar6);
                  goto LAB_0041f144;
                }
                local_34 = (int *)(uint)local_19c;
                unaff_s3 = (*(code *)PTR_json_object_new_object_0061278c)();
                uVar6 = (*(code *)PTR_json_object_new_int_00613484)(1);
                (*(code *)PTR_json_object_object_add_006137b4)(unaff_s3,&DAT_005ac40c,uVar6);
                uVar6 = (*(code *)PTR_json_object_new_int_00613484)(pppuVar23);
                (*(code *)PTR_json_object_object_add_006137b4)(unaff_s3,&DAT_005ac41c,uVar6);
                if (local_34 == (int *)0x0) {
                  (*(code *)PTR_HKReadCharacteristicValue_006149a4)
                            (local_40,pppuVar23,local_38,param_4);
                }
                else {
                  local_1c4 = local_194;
                }
                switch(local_48) {
                case (undefined1 *)0x0:
                case (undefined1 *)0x1:
                  pcVar24 = (code *)PTR_json_object_new_int_00613484;
                  break;
                case (undefined1 *)0x2:
                  uVar25 = (*(code *)PTR___extendsfdf2_00612dc0)(local_1c4);
                  uVar6 = (*(code *)PTR_json_object_new_double_00612d04)
                                    ((int)((ulonglong)uVar25 >> 0x20),(int)uVar25);
                  goto LAB_0041f0f0;
                case (undefined1 *)0x3:
                case (undefined1 *)0x4:
                case (undefined1 *)0x5:
                  pcVar24 = (code *)PTR_json_object_new_string_00614508;
                  break;
                default:
                  goto switchD_0041f094_default;
                }
                uVar6 = (*pcVar24)(local_1c4);
LAB_0041f0f0:
                (*(code *)PTR_json_object_object_add_006137b4)(unaff_s3,"value",uVar6);
                break;
              }
              piVar4 = (int *)((int)local_34 + 1);
              pbVar22 = local_30 + 0x48;
            } while (piVar4 != (int *)0x14);
switchD_0041f094_default:
            iVar5 = iVar5 + 1;
            local_50 = local_50 + 0x16a;
            if (iVar5 == 10) break;
          }
          pbVar22 = (byte *)0x0;
LAB_0041f144:
          if (unaff_s3 == 0) goto LAB_0041f1a4;
          (*(code *)PTR_json_object_array_add_00613278)(local_44,unaff_s3);
          local_4c = (undefined4 *)((int)local_4c + (uint)(pbVar22 != (byte *)0x0));
        }
        (*(code *)PTR_json_object_object_add_006137b4)(DAT_00614be4,"characteristics",local_44);
LAB_0041f1a4:
        if (local_4c != (undefined4 *)0x0) {
          pbVar22 = (byte *)0xfffeecfe;
        }
      }
      piVar4 = (int *)(*(code *)PTR_json_object_to_json_string_00612474)(DAT_00614be4);
      ppppiVar15 = (int ****)local_1ac;
      ppppiVar20 = (int ****)*local_1ac;
      while (puVar3 = PTR_free_0061286c, ppppiVar15 != &local_1ac) {
        pppiVar9 = ppppiVar15[1];
        pppiVar16 = *ppppiVar15;
        pppiVar16[1] = (int **)pppiVar9;
        *pppiVar9 = (int **)pppiVar16;
        *ppppiVar15 = (int ***)ppppiVar15;
        ppppiVar15[1] = (int ***)ppppiVar15;
        (*(code *)puVar3)(ppppiVar15 + -2);
        ppppiVar15 = ppppiVar20;
        ppppiVar20 = (int ****)*ppppiVar20;
      }
      uVar6 = (*(code *)PTR_strlen_00613f4c)(piVar4);
      pcVar17 = "Read characteristic Error";
      goto LAB_0041f310;
    }
    iVar5 = (*(code *)PTR_HTTPHeaderMatchMethod_00613a98)(param_2,&DAT_005ac578);
    if (iVar5 == -0x1a47) goto LAB_0041fca0;
    DAT_00614be0 = (*(code *)PTR_json_tokener_parse_00613ae4)(*(undefined4 *)(param_2 + 0x104));
    if (DAT_00614be0 == 0) goto LAB_0041fd04;
    local_30 = (byte *)FUN_0041dee0(DAT_00614be0,param_4,param_5);
    (*(code *)PTR_json_object_put_00612524)(DAT_00614be0);
    if (DAT_00614be4 != 0) {
      local_34 = (int *)(*(code *)PTR_json_object_to_json_string_00612474)();
      if (local_30 == (byte *)0x0) {
        local_30 = (byte *)0x10;
      }
      uVar6 = (*(code *)PTR_strlen_00613f4c)(local_34);
      pcVar17 = "Write characteristic Error";
      pbVar22 = local_30;
      piVar4 = local_34;
      goto LAB_0041f310;
    }
    pcVar17 = "Write characteristic Error";
    pbVar22 = local_30;
  }
  piVar4 = (int *)FUN_0041caf4(param_1,pbVar22,pcVar17,0,0,param_3);
  goto LAB_0041fd04;
code_r0x0041f4f0:
  if (*(int *)(iVar5 + 8) - 3U < 3) {
    puVar7 = *(undefined1 **)(param_3 + 8);
    iVar5 = *(int *)(puVar7 + 8);
    if (iVar5 == 3) {
      if (*(char *)(param_5 + 4) == '\x01') {
        (*(code *)PTR_memset_006130cc)(auStack_f8,0,0x40);
        (*(code *)PTR_strcpy_00612464)(auStack_f8,*(undefined4 *)(puVar7 + 0xc));
        (*(code *)PTR_memcpy_00614674)(auStack_b8,*(undefined4 *)(puVar7 + 0x10),0x20);
        local_98 = puVar7[0x14];
        iVar5 = (*(code *)PTR_Phytrex_HMAddPairKey_00612cd4)(auStack_f8);
        if (iVar5 == -0x1a48) goto LAB_0041f5a8;
        piVar11 = (int *)(*(code *)PTR_Phytrex_HMSavePairList_00612ccc)();
        if (piVar11 == (int *)0x0) {
          local_30 = (byte *)0x0;
          uVar6 = 3;
          iVar5 = 0;
          goto LAB_0041f5d8;
        }
      }
      else {
        *puVar7 = 2;
        iVar5 = 0;
LAB_0041f5a8:
        local_30 = (byte *)0x1;
        uVar6 = 6;
LAB_0041f5d8:
        puVar10 = (undefined1 *)(*(code *)PTR_calloc_006148c0)(uVar6,1);
        if (puVar10 == (undefined1 *)0x0) {
          piVar11 = (int *)0xffffe5b8;
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
              uVar14 = 1;
              if (iVar5 == -0x1a48) {
                uVar14 = 4;
              }
              puVar10[5] = uVar14;
            }
            else {
              puVar10[5] = 2;
            }
          }
          *puVar7 = 1;
          piVar11 = (int *)FUN_0041c860(param_1,0,"Add Pairing Error",puVar10,uVar6,param_3);
          (*(code *)PTR_free_0061286c)(puVar10);
          if (piVar11 == (int *)0x0) goto LAB_0041fbb8;
        }
      }
      FUN_0041c7c0(param_3 + 8);
      iVar5 = *(int *)(param_3 + 8);
    }
    else {
      if (iVar5 != 4) {
        if (iVar5 == 5) {
          if (*(char *)(param_5 + 4) == '\x01') {
            piVar11 = (int *)(*(code *)PTR_Phytrex_HMGetNoOfPairList_006149a0)();
            if (piVar11 == (int *)0x0) goto LAB_0041f990;
            local_30 = (byte *)0x0;
            iVar5 = (int)piVar11 * 0x4d + 1;
          }
          else {
            *puVar7 = 2;
            piVar11 = (int *)0x0;
LAB_0041f990:
            local_30 = (byte *)0x1;
            iVar5 = 6;
          }
          local_34 = (int *)(iVar5 + 1);
          puVar10 = (undefined1 *)(*(code *)PTR_calloc_006148c0)(local_34,1);
          piVar12 = (int *)0xffffe5b8;
          if (puVar10 != (undefined1 *)0x0) {
            if (local_30 == (byte *)0x0) {
              local_48 = (undefined1 *)(*(code *)PTR_realloc_00614534)(puVar10,local_34);
              local_44 = auStack_b8;
              local_4c = auStack_f8;
              local_50 = (int *)0x0;
              for (iVar19 = 0; iVar13 = (*(code *)PTR_Phytrex_HMGetMaxPairList_006130dc)(),
                  puVar18 = puVar10, iVar19 < iVar13; iVar19 = iVar19 + 1) {
                iVar13 = (*(code *)PTR_Phytrex_HMReadPairList_006136d4)(local_4c,iVar19);
                if (iVar13 == 0) {
                  *puVar10 = 1;
                  puVar10[1] = 0x24;
                  (*(code *)PTR_memcpy_00614674)(puVar10 + 2,local_4c,0x24);
                  puVar10[0x27] = 0x20;
                  puVar10[0x26] = 3;
                  (*(code *)PTR_memcpy_00614674)(puVar10 + 0x28,local_44,0x20);
                  puVar10[0x48] = 0xb;
                  puVar10[0x49] = 1;
                  local_50 = (int *)((int)local_50 + 1);
                  puVar10[0x4a] = local_98;
                  puVar18 = puVar10 + 0x4b;
                  if (local_50 == piVar11) break;
                  *puVar18 = 0xff;
                  puVar10[0x4c] = 0;
                  puVar10 = puVar10 + 0x4d;
                }
              }
              puVar18[2] = 2;
              *puVar18 = 6;
              puVar18[1] = 1;
              puVar10 = local_48;
            }
            else {
              *puVar10 = 6;
              puVar10[3] = 7;
              puVar10[4] = 1;
              puVar10[1] = 1;
              puVar10[2] = 1;
              uVar14 = 1;
              if (*(char *)(param_5 + 4) != '\x01') {
                uVar14 = 2;
              }
              puVar10[5] = uVar14;
            }
            *puVar7 = 1;
            piVar12 = (int *)FUN_0041c860(param_1,0,"Remove Pairing Error",puVar10,iVar5,param_3);
            if (puVar10 != (undefined1 *)0x0) {
              local_34 = piVar12;
              (*(code *)PTR_free_0061286c)(puVar10);
              piVar12 = local_34;
            }
            if (piVar12 == (int *)0x0) goto LAB_0041fbb8;
          }
          *(undefined4 *)(*(int *)(param_3 + 8) + 4) = 1;
          piVar4 = piVar12;
          goto LAB_0041fd04;
        }
LAB_0041fbb8:
        if (**(char **)(param_3 + 8) == '\0') goto LAB_0041fd04;
        goto LAB_0041fbd0;
      }
      local_1c8 = (undefined4 ***)((uint)local_1c8 & 0xffffff);
      uVar6 = (*(code *)PTR_pthread_self_006134a8)();
      bVar2 = false;
      iVar5 = (*(code *)PTR_pthread_list_GetControllerName_00613450)(uVar6,auStack_f8);
      if (iVar5 == 0) {
        iVar5 = (*(code *)PTR_memcmp_00612e6c)(auStack_f8,*(undefined4 *)(puVar7 + 0xc),0x24);
        bVar2 = iVar5 == 0;
      }
      if ((*(char *)(param_5 + 4) == '\x01') || (bVar2)) {
        uVar6 = 3;
        iVar5 = (*(code *)PTR_Phytrex_HMRemovePairKey_0061295c)
                          (*(undefined4 *)(puVar7 + 0xc),&local_1c8);
        if (iVar5 != 0) {
          uVar6 = 6;
        }
        local_4c = (undefined4 *)(uint)(iVar5 != 0);
        local_50 = (int *)(*(code *)PTR_Phytrex_HMSavePairList_00612ccc)();
        if (local_50 == (int *)0x0) goto LAB_0041f778;
      }
      else {
        *puVar7 = 2;
        uVar6 = 6;
        local_4c = (undefined4 *)0x1;
LAB_0041f778:
        puVar10 = (undefined1 *)(*(code *)PTR_calloc_006148c0)(uVar6,1);
        if (puVar10 == (undefined1 *)0x0) {
          local_50 = (int *)0xffffe5b8;
        }
        else {
          uVar14 = 2;
          *puVar10 = 6;
          puVar10[1] = 1;
          puVar10[2] = 2;
          if (local_4c != (undefined4 *)0x0) {
            cVar1 = *(char *)(param_5 + 4);
            puVar10[4] = 1;
            puVar10[3] = 7;
            if ((cVar1 == '\x01') || (bVar2)) {
              uVar14 = 1;
            }
            puVar10[5] = uVar14;
          }
          *puVar7 = 1;
          local_50 = (int *)FUN_0041c860(param_1,0,"Remove Pairing Error",puVar10,uVar6,param_3);
          if ((local_50 == (int *)0x0) && ((*(char *)(param_5 + 4) == '\x01' || (bVar2)))) {
            if ((local_1c8._0_1_ == '\0') ||
               (iVar5 = (*(code *)PTR_Phytrex_HMPairListIsEmpty_00614aa0)(), iVar5 == 0)) {
              (*(code *)PTR_pthread_list_terminal_byControllerName_00613e58)
                        (*(undefined4 *)(puVar7 + 0xc));
            }
            iVar5 = (*(code *)PTR_Phytrex_HMPairListIsEmpty_00614aa0)();
            if (iVar5 == 0) {
LAB_0041f900:
              pcVar17 = "1";
            }
            else {
              if (local_1c8._0_1_ != '\0') {
                (*(code *)PTR_pthread_list_terminal_AllThread_006146f4)();
                (*(code *)PTR_Phytrex_HMRemoveAllPairKey_006144cc)();
                local_50 = (int *)(*(code *)PTR_Phytrex_HMSavePairList_00612ccc)();
                if (local_50 != (int *)0x0) goto LAB_0041fd8c;
                goto LAB_0041f900;
              }
              pcVar17 = "0";
            }
            (*(code *)PTR_mdnsPhytrex_HomekitUpdate_00612f60)(&DAT_005ac3f4,pcVar17);
          }
LAB_0041fd8c:
          (*(code *)PTR_free_0061286c)(puVar10);
          if (local_50 == (int *)0x0) goto LAB_0041fbb8;
        }
      }
      FUN_0041c7c0(param_3 + 8);
      iVar5 = *(int *)(param_3 + 8);
      piVar11 = local_50;
    }
    *(undefined4 *)(iVar5 + 4) = 1;
    piVar4 = piVar11;
  }
  else {
    piVar4 = (int *)0xffffe5c3;
LAB_0041fbd0:
    FUN_0041c7c0(param_3 + 8);
  }
LAB_0041fd04:
  (*(code *)PTR_HTTPHeaderClear_00614320)(param_2);
  if (DAT_00614be4 != 0) {
    (*(code *)PTR_json_object_put_00612524)();
  }
  return piVar4;
}


/* HKSNewSecuritySession @ 00420850 */

void HKSNewSecuritySession(void)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)(*(code *)PTR_calloc_006148c0)(1,0x68);
  *puVar1 = 0;
  return;
}


/* FUN_00420888 @ 00420888 */

/* WARNING: Type propagation algorithm not settling */

uint FUN_00420888(char *param_1,uint param_2,undefined4 param_3,uint param_4)

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
    iVar5 = (*(code *)PTR_select_00613cc4)(param_2 + 1,local_d0,0,0,&local_e4);
    if (0 < iVar5) {
      if (((int)local_d0[uVar2] >> (param_2 & 0x1f) & 1U) != 0) {
        (*(code *)PTR_getsockopt_00613710)(param_2,0xffff,0x1007,&local_f4,auStack_f8);
        (*(code *)PTR_memset_006130cc)(param_3,0,param_4);
        uVar2 = (*(code *)PTR_read_00613d88)(param_2,param_3,param_4);
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
LAB_00420d24:
      if ((iVar5 == 0) && (uVar2 < param_4)) {
        param_4 = uVar2;
      }
      (*(code *)PTR_memcpy_00614674)(param_3,*(undefined4 *)(param_1 + 0x50),param_4);
      uVar2 = *(uint *)(param_1 + 0x4c) - param_4;
      iVar5 = *(int *)(param_1 + 0x48) - (uint)(*(uint *)(param_1 + 0x4c) < uVar2);
      *(int *)(param_1 + 0x48) = iVar5;
      *(uint *)(param_1 + 0x4c) = uVar2;
      if (iVar5 == 0 && uVar2 == 0) {
        (*(code *)PTR_free_0061286c)();
        return param_4;
      }
      (*(code *)PTR_memmove_00613a7c)(*(int *)(param_1 + 0x50),*(int *)(param_1 + 0x50) + param_4);
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
      iVar5 = (*(code *)PTR_select_00613cc4)(iVar5,local_40,0,0,local_48);
      if (iVar5 < 1) break;
      ppuVar3 = local_40;
      if ((uVar7 & (uint)local_d0[uVar8]) != 0) {
        (*(code *)PTR_getsockopt_00613710)(param_2,0xffff,0x1007,local_4c,local_50);
        local_2c = (*(code *)PTR_read_00613d88)(param_2,local_44 + uVar2,2 - uVar2);
        local_2c = local_2c & 0xffff;
        (*(code *)PTR_setsockopt_00613a04)(param_2,6,1,&local_f0,4);
        (*(code *)PTR_setsockopt_00613a04)(param_2,6,0xc,&local_f0,4);
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
            iVar5 = (*(code *)PTR_calloc_006148c0)(uVar2,1);
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
                iVar4 = (*(code *)PTR_select_00613cc4)(iVar4,local_34,0,0,local_30);
                if (iVar4 < 1) {
                  return 0;
                }
                ppuVar3 = local_40;
              } while ((uVar7 & (uint)local_d0[uVar8]) == 0);
              (*(code *)PTR_getsockopt_00613710)(param_2,0xffff,0x1007,local_4c,local_48);
              local_2c = (*(code *)PTR_read_00613d88)(param_2,iVar5 + uVar6 * 4,uVar2 - uVar6);
              local_2c = local_2c & 0xffff;
              (*(code *)PTR_setsockopt_00613a04)(param_2,6,1,local_44,4);
              (*(code *)PTR_setsockopt_00613a04)(param_2,6,0xc,local_44,4);
              if (local_2c == 0) {
                if (uVar6 == 0) {
                  return 0;
                }
              }
              else {
                uVar6 = local_2c + uVar6 & 0xffff;
              }
            }
            iVar4 = (*(code *)PTR_calloc_006148c0)(local_50,1);
            *(int *)(param_1 + 0x50) = iVar4;
            if (iVar4 == 0) {
              return 0;
            }
            local_d8 = 0;
            local_d4 = 0;
            local_dc = (uint)CONCAT11((char)*(undefined4 *)(param_1 + 100),
                                      (char)((uint)*(undefined4 *)(param_1 + 100) >> 8)) << 0x10;
            iVar4 = (*(code *)PTR_crypto_aead_chacha20poly1305_decrypt_00613a28)
                              (iVar4,param_1 + 0x48,0,iVar5,0,uVar2,&local_ec);
            uVar8 = *(uint *)(param_1 + 100) + 1;
            *(uint *)(param_1 + 0x60) =
                 (uint)(uVar8 < *(uint *)(param_1 + 100)) + *(int *)(param_1 + 0x60);
            *(uint *)(param_1 + 100) = uVar8;
            if (iVar4 != 0) {
              (*(code *)PTR_free_0061286c)(iVar5);
              return 0;
            }
            if (*(int *)(param_1 + 0x48) != (uVar2 - 0x10 < uVar2) - 1) {
              return 0;
            }
            if (*(uint *)(param_1 + 0x4c) != uVar2 - 0x10) {
              return 0;
            }
            (*(code *)PTR_free_0061286c)(iVar5);
            iVar5 = *(int *)(param_1 + 0x48);
            uVar2 = *(uint *)(param_1 + 0x4c);
            goto LAB_00420d24;
          }
        }
      }
    }
  }
  return 0;
}


/* HKSocketReadHTTPBody @ 00420ed4 */

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
          goto LAB_00421170;
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
          iVar4 = (*(code *)PTR_select_00613cc4)(iVar4,local_c0,0,0,local_34);
          if (iVar4 < 1) goto LAB_00421170;
        }
        iVar6 = (*(code *)PTR_HTTPGetHeaderField_00613c70)
                          (param_2,*(undefined4 *)(param_2 + 0x100),"Content-Type",0,0,&local_d0,
                           local_30,0);
        if (iVar6 != 0) goto LAB_00421170;
        iVar4 = (*(code *)PTR_strnicmpx_00613ea0)(local_d0,local_cc,"application/phytrex-ota");
        if (iVar4 != 0) break;
        iVar4 = (*(code *)PTR_calloc_006148c0)(0x400,1);
        *(int *)(param_2 + 0x108) = iVar4;
        if (iVar4 == 0) {
          iVar6 = -0x1a48;
          goto LAB_00421170;
        }
        uVar5 = *(uint *)(param_2 + 0x17c) - *(int *)(param_2 + 0x10c);
        if ((*(uint *)(param_2 + 0x178) != (uint)(*(uint *)(param_2 + 0x17c) < uVar5)) ||
           (0x3ff < uVar5)) {
          uVar5 = 0x400;
        }
        iVar4 = FUN_00420888(param_3,param_1,iVar4,uVar5);
        puVar1 = PTR_free_0061286c;
        if (iVar4 < 1) {
          if (iVar7 == 0) {
            iVar6 = -0x1a61;
          }
          else {
            (*(code *)PTR_free_0061286c)(*(undefined4 *)(param_2 + 0x108));
            *(undefined4 *)(param_2 + 0x108) = 0;
          }
          goto LAB_00421170;
        }
        *(int *)(param_2 + 0x10c) = *(int *)(param_2 + 0x10c) + iVar4;
        iVar7 = iVar7 + iVar4;
        (*(code *)puVar1)(*(undefined4 *)(param_2 + 0x108));
        *(undefined4 *)(param_2 + 0x108) = 0;
      }
      iVar4 = FUN_00420888(param_3,param_1,*(int *)(param_2 + 0x104) + *(int *)(param_2 + 0x10c),
                           *(int *)(param_2 + 0x17c) - *(int *)(param_2 + 0x10c));
      if (iVar4 < 1) break;
      iVar7 = iVar7 + iVar4;
      *(int *)(param_2 + 0x10c) = *(int *)(param_2 + 0x10c) + iVar4;
    }
    if (iVar7 == 0) {
      iVar6 = -0x1a61;
    }
  }
LAB_00421170:
  if (*(int *)(param_2 + 0x108) != 0) {
    (*(code *)PTR_free_0061286c)();
    *(undefined4 *)(param_2 + 0x108) = 0;
  }
  return iVar6;
}


/* HKSocketReadHTTPHeader @ 004211c8 */

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
      uVar4 = FUN_00420888(param_3,param_1,iVar5,uVar2);
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
      (*(code *)PTR_memmove_00613a7c)(iVar5,*(undefined4 *)(param_2 + 0x104),uVar4);
      *(undefined4 *)(param_2 + 0x10c) = 0;
    }
    puVar1 = PTR_findHeader_00613ba0;
    *(uint *)(param_2 + 0x100) = *(int *)(param_2 + 0x100) + uVar4;
    iVar3 = (*(code *)puVar1)(param_2,&local_38);
    iVar6 = iVar6 + uVar4;
    iVar5 = iVar5 + uVar4;
  } while (iVar3 == 0);
  puVar1 = PTR_HTTPHeaderParse_00613d18;
  *(int *)(param_2 + 0x100) = local_38 - param_2;
  iVar6 = (*(code *)puVar1)(param_2);
  if (iVar6 == 0) {
    *(int *)(param_2 + 0x10c) = iVar5 - local_38;
    if (*(int *)(param_2 + 0x104) != 0) {
      (*(code *)PTR_free_0061286c)();
      *(undefined4 *)(param_2 + 0x104) = 0;
    }
    if (*(int *)(param_2 + 0x108) != 0) {
      (*(code *)PTR_free_0061286c)();
      *(undefined4 *)(param_2 + 0x108) = 0;
    }
    iVar5 = (*(code *)PTR_HTTPGetHeaderField_00613c70)
                      (param_2,*(undefined4 *)(param_2 + 0x100),"Content-Type",0,0,&local_34,
                       local_30,0);
    if ((iVar5 == 0) &&
       (iVar5 = (*(code *)PTR_strnicmpx_00613ea0)(local_34,local_30[0],"application/phytrex-ota"),
       iVar5 == 0)) {
      return 0;
    }
    if (*(int *)(param_2 + 0x178) != 0 || *(int *)(param_2 + 0x17c) != 0) {
      iVar6 = -0x1a48;
      iVar5 = (*(code *)PTR_calloc_006148c0)(*(int *)(param_2 + 0x17c),1);
      *(int *)(param_2 + 0x104) = iVar5;
      if (iVar5 != 0) {
        (*(code *)PTR_memcpy_00614674)(iVar5,local_38,*(undefined4 *)(param_2 + 0x10c));
        iVar6 = 0;
      }
    }
  }
  return iVar6;
}


/* HKSecureSocketSend @ 00421430 */

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
  puVar2 = (undefined1 *)(*(code *)PTR_calloc_006148c0)(param_3 + 0x1c,1);
  puVar1 = PTR_crypto_aead_chacha20poly1305_encrypt_00613840;
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
        (*(code *)PTR_SocketSend_00612dcc)(param_1,puVar2,local_34 + 2);
      }
    }
    (*(code *)PTR_free_0061286c)(puVar2);
  }
  return 0;
}


/* findHeader @ 004215a0 */

undefined4 findHeader(char *param_1,undefined4 *param_2)

{
  char *pcVar1;
  uint uVar2;
  char *pcVar3;
  char cVar4;
  
  pcVar1 = param_1 + *(int *)(param_1 + 0x100);
  if ((3 < *(int *)(param_1 + 0x100)) && (*param_1 == '$')) {
    param_1 = param_1 + 4;
LAB_00421660:
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
LAB_00421648:
        cVar4 = *pcVar3;
      }
      else {
        cVar4 = *pcVar3;
        if (cVar4 == '\r') {
          if (param_1[2] != '\n') goto LAB_00421648;
          param_1 = param_1 + 3;
          goto LAB_00421660;
        }
      }
      if (cVar4 == '\n') {
        param_1 = param_1 + 2;
        goto LAB_00421660;
      }
    }
    param_1 = param_1 + 1;
    uVar2 = uVar2 - 1;
  } while( true );
}


/* FUN_00421678 @ 00421678 */

char * FUN_00421678(int param_1)

{
  if (param_1 != 200) {
    if (param_1 == 400) {
      return "Bad Request";
    }
    if (param_1 == 0x193) {
      return "Forbidden";
    }
    if (param_1 == 500) {
      return "Internal Server Error";
    }
    if (param_1 == 0xcf) {
      return "Multi-Status";
    }
    if (param_1 == 0x1ad) {
      return "Too Many Requests";
    }
    if (param_1 == 0xcc) {
      return "No Content";
    }
  }
  return "OK";
}


/* FUN_00421718 @ 00421718 */

void FUN_00421718(void)

{
                    /* WARNING: Could not recover jumptable at 0x0042172c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_calloc_006148c0)(1,0x188);
  return;
}


/* FUN_004217e8 @ 004217e8 */

undefined4
FUN_004217e8(undefined4 param_1,undefined4 param_2,int param_3,int param_4,int param_5,int *param_6,
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
      iVar2 = (*(code *)PTR_calloc_006148c0)(param_5 + 500,1);
      *param_6 = iVar2;
      uVar1 = 0xffffe5b8;
      if (iVar2 != 0) {
        (*(code *)PTR_sprintf_00612e20)
                  (iVar2,"%s %s? %s %s%s %s%s%s %d%s",param_1,param_2,"HTTP/1.1",&DAT_005ac7b8,
                   "Content-Type:",param_3,&DAT_005ac7b8,"Content-Length:",param_5,"\r\n\r\n");
        iVar2 = (*(code *)PTR_strlen_00613f4c)(*param_6);
        *param_7 = iVar2 + param_5;
        iVar3 = *param_6;
        iVar2 = (*(code *)PTR_strlen_00613f4c)(iVar3);
        (*(code *)PTR_memcpy_00614674)(iVar3 + iVar2,param_4,param_5);
        uVar1 = 0;
      }
    }
  }
  return uVar1;
}


/* CreateEVENTRespondMessageNoCopy @ 00421944 */

undefined4
CreateEVENTRespondMessageNoCopy
          (undefined4 param_1,int param_2,int param_3,int *param_4,undefined4 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 auStack_428 [4];
  undefined1 auStack_424 [1032];
  
  uVar1 = FUN_00421678();
  (*(code *)PTR_time_00613804)(auStack_428);
  uVar2 = (*(code *)PTR_localtime_00613610)(auStack_428);
  (*(code *)PTR_strftime_006148cc)(auStack_424,0x100,"%a, %d %b %Y %H:%M:%S %Z",uVar2);
  if ((param_2 != 0) && (param_3 != 0)) {
    iVar3 = (*(code *)PTR_calloc_006148c0)(200,1);
    *param_4 = iVar3;
    if (iVar3 != 0) {
      (*(code *)PTR_snprintf_00613e24)
                (iVar3,200,"%s %d %s%s%s %s%s%s %d%s","EVENT/1.0",param_1,uVar1,&DAT_005ac7b8,
                 "Content-Type:",param_2,&DAT_005ac7b8,"Content-Length:",param_3,"\r\n\r\n");
      uVar1 = (*(code *)PTR_strlen_00613f4c)(*param_4);
      *param_5 = uVar1;
    }
  }
  return 0;
}


/* CreateHTTPRespondMessageNoCopy @ 00421ab8 */

undefined4
CreateHTTPRespondMessageNoCopy(int param_1,int param_2,int param_3,int *param_4,undefined4 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 auStack_428 [4];
  undefined1 auStack_424 [1032];
  
  uVar1 = FUN_00421678();
  (*(code *)PTR_time_00613804)(auStack_428);
  uVar2 = (*(code *)PTR_localtime_00613610)(auStack_428);
  (*(code *)PTR_strftime_006148cc)(auStack_424,0x100,"%a, %d %b %Y %H:%M:%S %Z",uVar2);
  if (param_1 == 0xcc) {
    iVar3 = (*(code *)PTR_calloc_006148c0)(200,1);
    *param_4 = iVar3;
    if (iVar3 == 0) {
      return 0xffffe5b8;
    }
    (*(code *)PTR_snprintf_00613e24)
              (iVar3,200,"%s %3d %s%sDate: %s%s","HTTP/1.1",0xcc,uVar1,&DAT_005ac7b8,auStack_424,
               "\r\n\r\n");
  }
  else {
    if (param_2 == 0) {
      return 0xffffe5cf;
    }
    if (param_3 == 0) {
      return 0xffffe5cf;
    }
    iVar3 = (*(code *)PTR_calloc_006148c0)(200,1);
    *param_4 = iVar3;
    if (iVar3 == 0) {
      return 0xffffe5b8;
    }
    (*(code *)PTR_snprintf_00613e24)
              (iVar3,200,"%s %d %s%s%s %s%s%s %d%s","HTTP/1.1",param_1,uVar1,&DAT_005ac7b8,
               "Content-Type:",param_2,&DAT_005ac7b8,"Content-Length:",param_3,"\r\n\r\n");
  }
  uVar1 = (*(code *)PTR_strlen_00613f4c)(*param_4);
  *param_5 = uVar1;
  return 0;
}


/* CreateSimpleHTTPMessageNoCopy @ 00421ca8 */

undefined4 CreateSimpleHTTPMessageNoCopy(int param_1,int param_2,int *param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((param_1 == 0) || (param_2 == 0)) {
    uVar2 = 0xffffe5cf;
  }
  else {
    iVar1 = (*(code *)PTR_calloc_006148c0)(200,1);
    *param_3 = iVar1;
    uVar2 = 0xffffe5b8;
    if (iVar1 != 0) {
      (*(code *)PTR_snprintf_00613e24)
                (iVar1,200,"%s %s %s%s%s %s%s%s %d%s","HTTP/1.1",&DAT_005ac798,&DAT_005ac728,
                 &DAT_005ac7b8,"Content-Type:",param_1,&DAT_005ac7b8,"Content-Length:",param_2,
                 "\r\n\r\n");
      uVar2 = (*(code *)PTR_strlen_00613f4c)(*param_3);
      *param_4 = uVar2;
      uVar2 = 0;
    }
  }
  return uVar2;
}


/* FUN_00421dc0 @ 00421dc0 */

undefined4 FUN_00421dc0(int param_1,int param_2,int param_3,int *param_4,int *param_5)

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
      iVar2 = (*(code *)PTR_calloc_006148c0)(param_3 + 200,1);
      *param_4 = iVar2;
      uVar1 = 0xffffe5b8;
      if (iVar2 != 0) {
        (*(code *)PTR_snprintf_00613e24)
                  (iVar2,200,"%s %d %s%s%s %s%s%s %d%s","HTTP/1.1",200,&DAT_005ac728,&DAT_005ac7b8,
                   "Content-Type:",param_1,&DAT_005ac7b8,"Content-Length:",param_3,"\r\n\r\n");
        iVar2 = (*(code *)PTR_strlen_00613f4c)(*param_4);
        *param_5 = iVar2 + param_3;
        iVar3 = *param_4;
        iVar2 = (*(code *)PTR_strlen_00613f4c)(iVar3);
        (*(code *)PTR_memcpy_00614674)(iVar3 + iVar2,param_2,param_3);
        uVar1 = 0;
      }
    }
  }
  return uVar1;
}


/* HTTPHeaderClear @ 00421f18 */

void HTTPHeaderClear(int param_1)

{
  *(undefined4 *)(param_1 + 0x100) = 0;
  *(undefined4 *)(param_1 + 0x10c) = 0;
  if (*(int *)(param_1 + 0x104) != 0) {
    (*(code *)PTR_free_0061286c)();
    *(undefined4 *)(param_1 + 0x104) = 0;
  }
  if (*(int *)(param_1 + 0x108) != 0) {
    (*(code *)PTR_free_0061286c)();
    *(undefined4 *)(param_1 + 0x108) = 0;
  }
  return;
}


/* HTTPHeaderMatchPartialURL @ 00421f90 */

void HTTPHeaderMatchPartialURL(int param_1,undefined4 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00421fa8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_strnstr_suffix_006124e0)
            (*(undefined4 *)(param_1 + 0x140),*(undefined4 *)(param_1 + 0x144),param_2);
  return;
}


/* HTTPHeaderMatchURL @ 00421fb0 */

undefined4 HTTPHeaderMatchURL(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (*(code *)PTR_strnicmp_suffix_00614494)
                    (*(undefined4 *)(param_1 + 0x140),*(undefined4 *)(param_1 + 0x144),param_2);
  uVar2 = 0xffffe5b9;
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  return uVar2;
}


/* HTTPHeaderMatchMethod @ 00421ff4 */

undefined4 HTTPHeaderMatchMethod(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (*(code *)PTR_strnicmpx_00613ea0)
                    (*(undefined4 *)(param_1 + 0x110),*(undefined4 *)(param_1 + 0x114),param_2);
  uVar2 = 0xffffe5b9;
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  return uVar2;
}


/* HTTPGetHeaderField @ 00422038 */

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
    param_2 = (*(code *)PTR_strlen_00613f4c)();
  }
  pcVar10 = param_1 + param_2;
  uVar9 = 0;
  pcVar3 = param_1;
  if (param_3 != 0) {
    uVar9 = (*(code *)PTR_strlen_00613f4c)(param_3);
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
          goto LAB_004221b0;
        }
      }
    }
  } while ((((uint)((int)pcVar7 - (int)pcVar8) <= uVar9) || (pcVar8[uVar9] != ':')) ||
          (iVar5 = (*(code *)PTR_strnicmp_00612b48)(pcVar8,param_3,uVar9), iVar5 != 0));
LAB_004221b0:
  pcVar3 = pcVar8 + uVar9 + 1;
  do {
    while( true ) {
      pcVar6 = pcVar3;
      if (pcVar7 <= pcVar6) goto LAB_0042224c;
      if (*pcVar6 != ' ') break;
      pcVar3 = pcVar6 + 1;
    }
    pcVar3 = pcVar6 + 1;
  } while (*pcVar6 == '\t');
LAB_0042224c:
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
        if (pcVar10 <= pcVar7) goto LAB_0042224c;
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


/* FUN_00422330 @ 00422330 */

void FUN_00422330(void)

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
    (*(code *)PTR_VSNScanF_00612990)(local_18,local_14,in_a3,local_10,uVar2,puVar3,puVar4,uVar5);
  }
  return;
}


/* HTTPHeaderParse @ 004223a0 */

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
  
  puVar2 = PTR_memset_006130cc;
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
      goto LAB_004224cc;
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
joined_r0x0042255c:
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
    iVar4 = (*(code *)PTR_strnicmpx_00613ea0)(local_20,local_1c[0],pcVar6);
    param_1[0x180] = iVar4 != 0;
    FUN_00422330(param_1,*(undefined4 *)(param_1 + 0x100),"Content-Length",&DAT_005ac884,
                 param_1 + 0x178);
    return 0;
  }
  return -0x1a56;
  while (pcVar6 = pcVar8 + 1, *pcVar8 != ' ') {
LAB_004224cc:
    pcVar8 = pcVar6;
    if (pcVar7 <= pcVar8) break;
  }
  *(int *)(param_1 + 0x11c) = (int)pcVar8 - (int)pcVar3;
  if (pcVar7 <= pcVar8) {
    return -0x1a56;
  }
  iVar4 = (*(code *)PTR_URLParseComponents_00613674)
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
  goto joined_r0x0042255c;
}


/* FUN_00422b70 @ 00422b70 */

int FUN_00422b70(undefined4 param_1,int param_2)

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
      (*(code *)PTR_getsockopt_00613710)(param_1,0xffff,0x1007,local_34,local_30);
      uVar6 = (*(code *)PTR_read_00613d88)(param_1,iVar4,uVar6);
      (*(code *)PTR_setsockopt_00613a04)(param_1,6,1,&local_3c,4);
      (*(code *)PTR_setsockopt_00613a04)(param_1,6,0xc,&local_3c,4);
      if ((int)uVar6 < 1) {
        if (uVar6 == 0) {
          piVar1 = (int *)(*(code *)PTR___errno_location_00614824)();
          if ((*piVar1 == 4) || (*piVar1 == 0xb)) goto LAB_00422d08;
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
      (*(code *)PTR_memmove_00613a7c)(iVar4,*(undefined4 *)(param_2 + 0x104),uVar3);
      *(undefined4 *)(param_2 + 0x10c) = 0;
    }
LAB_00422d08:
    *(uint *)(param_2 + 0x100) = *(int *)(param_2 + 0x100) + uVar3;
    iVar2 = findHeader(param_2,local_2c);
    iVar4 = iVar4 + uVar3;
  } while (iVar2 == 0);
  *(int *)(param_2 + 0x100) = local_50 - param_2;
  iVar5 = HTTPHeaderParse(param_2);
  if (iVar5 == 0) {
    *(int *)(param_2 + 0x10c) = iVar4 - local_50;
    if (*(int *)(param_2 + 0x104) != 0) {
      (*(code *)PTR_free_0061286c)();
      *(undefined4 *)(param_2 + 0x104) = 0;
    }
    if (*(int *)(param_2 + 0x108) != 0) {
      (*(code *)PTR_free_0061286c)();
      *(undefined4 *)(param_2 + 0x108) = 0;
    }
    iVar4 = HTTPGetHeaderField(param_2,*(undefined4 *)(param_2 + 0x100),"Content-Type",0,0,&local_4c
                               ,&local_48,0);
    if ((iVar4 == 0) &&
       (iVar4 = (*(code *)PTR_strnicmpx_00613ea0)(local_4c,local_48,"application/phytrex-ota"),
       iVar4 == 0)) {
      return 0;
    }
    iVar5 = -0x1a48;
    iVar4 = (*(code *)PTR_calloc_006148c0)(*(undefined4 *)(param_2 + 0x17c),1);
    *(int *)(param_2 + 0x104) = iVar4;
    if (iVar4 != 0) {
      (*(code *)PTR_memcpy_00614674)(iVar4,local_50,*(undefined4 *)(param_2 + 0x10c));
      iVar5 = 0;
    }
  }
  return iVar5;
}


/* URLParseComponents @ 00422e78 */

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
    iVar1 = (*(code *)PTR_strlen_00613f4c)();
    param_2 = param_1 + iVar1;
  }
  cVar3 = '\0';
  pcVar4 = param_1;
  while (pcVar4 < param_2) {
    cVar3 = *pcVar4;
    if (cVar3 == ':') goto LAB_00422f1c;
    pcVar13 = (char *)0x0;
    if (cVar3 == '/') goto LAB_00422f2c;
    pcVar14 = (char *)0x0;
    if ((cVar3 == '?') || (pcVar4 = pcVar4 + 1, cVar3 == '#')) goto LAB_00422f34;
  }
  if (cVar3 == ':') {
LAB_00422f1c:
    pcVar13 = pcVar4;
    pcVar14 = param_1;
    param_1 = pcVar4 + 1;
  }
  else {
LAB_00422f2c:
    pcVar13 = (char *)0x0;
    pcVar14 = (char *)0x0;
  }
LAB_00422f34:
  pcVar4 = (char *)0x0;
  if ((int)param_2 - (int)param_1 < 2) {
    pcVar11 = (char *)0x0;
LAB_0042302c:
    pcVar10 = (char *)0x0;
    pcVar9 = (char *)0x0;
    pcVar6 = (char *)0x0;
    pcVar7 = (char *)0x0;
  }
  else {
    pcVar11 = (char *)0x0;
    if ((*param_1 != '/') || (param_1[1] != '/')) goto LAB_0042302c;
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
      if (param_1 <= pcVar8) goto LAB_0042302c;
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
      goto LAB_00423080;
    }
    pcVar8 = pcVar2 + 1;
  } while (cVar3 != '#');
  pcVar12 = (char *)0x0;
  pcVar5 = pcVar2;
  pcVar15 = (char *)0x0;
LAB_004230ac:
  pcVar8 = (char *)0x0;
  if (cVar3 != '#') {
    param_2 = pcVar5;
    pcVar5 = (char *)0x0;
    goto LAB_004230c8;
  }
  goto LAB_004230c0;
  while( true ) {
    cVar3 = *pcVar5;
    pcVar8 = pcVar5 + 1;
    if (cVar3 == '#') break;
LAB_00423080:
    pcVar5 = pcVar8;
    pcVar15 = pcVar5;
    if (param_2 <= pcVar5) goto LAB_004230ac;
  }
LAB_004230c0:
  pcVar8 = pcVar5 + 1;
  pcVar5 = param_2;
LAB_004230c8:
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


/* strnicmp @ 004231d0 */

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
    sVar2 = *(short *)(*(int *)PTR___ctype_tolower_00613388 + (uint)bVar1 * 2);
    sVar3 = *(short *)(*(int *)PTR___ctype_tolower_00613388 + (uint)*param_2 * 2);
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


/* strnicmpx @ 00423258 */

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
    sVar1 = *(short *)(*(int *)PTR___ctype_tolower_00613388 + (uint)*param_3 * 2);
    sVar2 = *(short *)(*(int *)PTR___ctype_tolower_00613388 + (uint)*param_1 * 2);
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


/* FUN_004232e4 @ 004232e4 */

void FUN_004232e4(undefined4 param_1,char *param_2)

{
  int iVar1;
  
  iVar1 = *(int *)PTR___ctype_toupper_00613e40;
  (*(code *)PTR_sprintf_00612e20)
            (param_1,"%c%c:%c%c:%c%c:%c%c:%c%c:%c%c",(int)*(short *)(iVar1 + *param_2 * 2),
             (int)*(short *)(iVar1 + param_2[1] * 2),(int)*(short *)(iVar1 + param_2[2] * 2),
             (int)*(short *)(iVar1 + param_2[3] * 2),(int)*(short *)(iVar1 + param_2[4] * 2),
             (int)*(short *)(iVar1 + param_2[5] * 2),(int)*(short *)(iVar1 + param_2[6] * 2),
             (int)*(short *)(iVar1 + param_2[7] * 2),(int)*(short *)(iVar1 + param_2[8] * 2),
             (int)*(short *)(iVar1 + param_2[9] * 2),(int)*(short *)(iVar1 + param_2[10] * 2),
             (int)*(short *)(iVar1 + param_2[0xb] * 2));
  return;
}


/* FUN_00423408 @ 00423408 */

void FUN_00423408(int param_1,undefined4 param_2,uint param_3)

{
  undefined1 *puVar1;
  uint uVar2;
  undefined1 auStack_28 [12];
  
  (*(code *)PTR_memset_006130cc)(param_2,0);
  uVar2 = 0;
  while( true ) {
    puVar1 = (undefined1 *)(param_1 + uVar2);
    if (param_3 <= uVar2) break;
    uVar2 = uVar2 + 1;
    (*(code *)PTR_sprintf_00612e20)(auStack_28,&DAT_005ac8ac,*puVar1);
    (*(code *)PTR_strcat_00614354)(param_2,auStack_28);
  }
  return;
}


/* VSNScanF @ 004234cc */

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
    param_2 = (*(code *)PTR_strlen_00613f4c)();
  }
  puVar6 = PTR___ctype_tolower_00613388;
  puVar5 = PTR___ctype_b_00613134;
  pbVar13 = param_1 + param_2;
  iVar8 = 0;
  pbVar14 = param_1;
LAB_00423564:
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
LAB_00423778:
        bVar27 = *pbVar10;
      }
      else {
        if (0x6c < bVar27) {
          bVar16 = 0x7a;
          if (bVar27 != 0x74) goto LAB_00423720;
LAB_00423770:
          pbVar10 = pbVar14 + 1;
          bVar17 = bVar27;
          goto LAB_00423778;
        }
        bVar16 = 0x6a;
        if (bVar27 != 0x68) {
LAB_00423720:
          bVar17 = 0;
          pbVar10 = pbVar14;
          if (bVar27 != bVar16) goto LAB_00423778;
          goto LAB_00423770;
        }
        pbVar10 = pbVar14 + 1;
        bVar27 = *pbVar10;
        bVar17 = 0x68;
        if (bVar27 == 0x68) {
          bVar17 = 0x48;
          pbVar10 = pbVar14 + 2;
          goto LAB_00423778;
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
            goto LAB_00423ce0;
          }
          if (bVar27 < 99) {
            if (bVar27 == 0x58) goto LAB_00423860;
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
              goto LAB_00423ce4;
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
              if (bVar4) goto LAB_004238e8;
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
              goto LAB_004240e4;
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
              goto LAB_004240e0;
            }
LAB_004238e8:
            pbVar14 = pbVar19 + uVar9;
          }
          goto LAB_00423564;
        }
        if (bVar27 == 0x70) {
          if (bVar17 == 0) {
            uVar15 = 0x10;
            bVar17 = 0x70;
          }
          else {
LAB_00423860:
            uVar15 = 0x10;
          }
          goto LAB_00423ce0;
        }
        if (bVar27 < 0x71) {
          if (bVar27 != 0x6e) {
            uVar15 = 8;
            if (bVar27 != 0x6f) {
              return iVar8;
            }
            bVar2 = pbVar19 < pbVar13;
            goto LAB_00423ce4;
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
          goto LAB_00423564;
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
          goto LAB_00423564;
        }
      }
LAB_00423ce0:
      do {
        bVar2 = pbVar19 < pbVar13;
        pbVar14 = pbVar19;
LAB_00423ce4:
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
          goto LAB_00423f44;
          sVar24 = *(short *)(*(int *)puVar6 + (uint)pbVar14[1] * 2);
          sVar20 = 0x78;
        }
        else {
          if ((((uVar15 != 2) || ((int)pbVar13 - (int)pbVar14 < 2)) || ((int)uVar9 < 2)) ||
             (*pbVar14 != 0x30)) goto LAB_00423f44;
          sVar24 = *(short *)(*(int *)puVar6 + (uint)pbVar14[1] * 2);
          sVar20 = 0x62;
        }
        if (sVar24 == sVar20) {
          uVar9 = uVar9 - 2;
          pbVar19 = pbVar14 + 2;
        }
        goto LAB_00423f44;
      }
      if ((int)pbVar13 - (int)pbVar14 < 3) {
        if ((int)pbVar13 - (int)pbVar14 == 2) goto LAB_00423e40;
      }
      else {
        if ((int)uVar9 < 2) {
LAB_00423e40:
          if ((int)uVar9 < 1) goto LAB_00423f40;
        }
        else {
          if (((*pbVar14 == 0x30) && (*(short *)(*(int *)puVar6 + (uint)pbVar14[1] * 2) == 0x78)) &&
             ((*(ushort *)(iVar21 + (uint)pbVar14[2] * 2) & 0x10) != 0)) {
            uVar9 = uVar9 - 2;
            uVar15 = 0x10;
            pbVar19 = pbVar14 + 2;
            goto LAB_00423f44;
          }
          if (((*pbVar14 == 0x30) && (*(short *)(*(int *)puVar6 + (uint)pbVar14[1] * 2) == 0x62)) &&
             ((byte)(pbVar14[2] - 0x30) < 2)) {
            uVar9 = uVar9 - 2;
            uVar15 = 2;
            pbVar19 = pbVar14 + 2;
            goto LAB_00423f44;
          }
        }
        if (*pbVar14 == 0x30) {
          if ((0x2f < pbVar14[1]) && (pbVar14[1] < 0x38)) {
            uVar9 = uVar9 - 1;
            uVar15 = 8;
            pbVar19 = pbVar14 + 1;
            goto LAB_00423f44;
          }
        }
      }
LAB_00423f40:
      uVar15 = 10;
LAB_00423f44:
      uVar28 = 0;
      uVar26 = 0;
      do {
        if ((pbVar13 <= pbVar19) || ((int)uVar9 < 1)) goto LAB_00423ff8;
        uVar9 = uVar9 - 1;
        iVar22 = (uint)*pbVar19 * 2;
        uVar1 = *(ushort *)(iVar21 + iVar22);
        uVar23 = *pbVar19 - 0x30;
        if ((uVar1 & 8) == 0) {
          if ((uVar1 & 0x10) == 0) goto LAB_00423ff8;
          uVar23 = (int)*(short *)(*(int *)puVar6 + iVar22) - 0x57;
        }
        if ((int)uVar15 <= (int)uVar23) goto LAB_00423ff8;
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
LAB_00423ff8:
  if (pbVar19 == pbVar14) {
    return iVar8;
  }
  pbVar14 = pbVar19;
  if (bVar4) goto LAB_00423564;
  if (bVar2) {
    uVar28 = -uVar28;
    uVar26 = -(uint)(uVar28 != 0) - uVar26;
  }
  puVar11 = (uint *)*param_4;
  if (puVar11 == (uint *)0x0) {
    return iVar8;
  }
  if (bVar17 == 0x6a) {
LAB_004240d0:
    puVar11[1] = uVar28;
    *puVar11 = uVar26;
  }
  else {
    if (bVar17 < 0x6b) {
      if (bVar17 == 0x4c) goto LAB_004240d0;
      if (0x4c < bVar17) {
        if (bVar17 != 0x68) {
          return iVar8;
        }
        *(short *)puVar11 = (short)uVar28;
        param_4 = param_4 + 1;
        goto LAB_004240e4;
      }
      if (bVar17 != 0) {
        if (bVar17 != 0x48) {
          return iVar8;
        }
        *(char *)puVar11 = (char)uVar28;
        param_4 = param_4 + 1;
        goto LAB_004240e4;
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
        if (bVar17 == 0x74) goto LAB_004240dc;
        if (bVar17 != 0x7a) {
          return iVar8;
        }
        *puVar11 = uVar28;
      }
      goto LAB_004240e0;
    }
LAB_004240dc:
    *puVar11 = uVar28;
  }
LAB_004240e0:
  param_4 = param_4 + 1;
LAB_004240e4:
  iVar8 = iVar8 + 1;
  pbVar14 = pbVar19;
  goto LAB_00423564;
}


/* FUN_00424120 @ 00424120 */

undefined4 FUN_00424120(byte *param_1,int param_2,int param_3,undefined1 *param_4)

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
    param_2 = (*(code *)PTR_strlen_00613f4c)();
  }
  puVar4 = PTR___ctype_tolower_00613388;
  puVar3 = PTR___ctype_b_00613134;
  pbVar5 = param_1 + param_2;
  do {
    uVar7 = 0;
    if (param_3 == 0) {
      return 0;
    }
    iVar6 = 0;
LAB_0042421c:
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
          goto LAB_0042421c;
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


/* strnicmp_suffix @ 00424294 */

undefined4 strnicmp_suffix(int param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  
  uVar1 = (*(code *)PTR_strnlen_00612d54)();
  uVar2 = (*(code *)PTR_strlen_00613f4c)(param_3);
  if (uVar1 < uVar2) {
    return 0xffffffff;
  }
  uVar3 = strnicmpx(param_1 + (uVar1 - uVar2),uVar2,param_3);
  return uVar3;
}


/* strnstr_suffix @ 00424324 */

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
  
  uVar3 = (*(code *)PTR_strlen_00613f4c)(param_3);
  uVar4 = (*(code *)PTR_strnlen_00612d54)(param_1,param_2);
  iVar5 = (*(code *)PTR_calloc_006148c0)(uVar4 + 1,1);
  iVar6 = (*(code *)PTR_calloc_006148c0)(uVar3 + 1,1);
  puVar1 = PTR___ctype_tolower_00613388;
  uVar7 = 0;
  while( true ) {
    puVar2 = PTR___ctype_tolower_00613388;
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
    iVar9 = (*(code *)PTR_strstr_00612aa4)(iVar5,iVar6);
    iVar8 = 0;
    if (iVar9 != 0) {
      iVar8 = param_1 + (iVar9 - iVar5);
    }
  }
  (*(code *)PTR_free_0061286c)(iVar5);
  (*(code *)PTR_free_0061286c)(iVar6);
  return iVar8;
}


/* FUN_004244b8 @ 004244b8 */

int FUN_004244b8(undefined1 *param_1,uint param_2)

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
    iVar1 = (*(code *)PTR_malloc_00614174)(param_2 * 3 + 1);
    if (iVar1 != 0) {
      iVar4 = iVar1;
      for (uVar5 = 0; uVar5 < param_2; uVar5 = uVar5 + 1) {
        pcVar3 = "%02X:";
        if (uVar5 == param_2 - 1) {
          pcVar3 = "%02X";
        }
        iVar2 = (*(code *)PTR_sprintf_00612e20)(iVar4,pcVar3,*param_1);
        iVar4 = iVar4 + iVar2;
        param_1 = param_1 + 1;
      }
      *(undefined1 *)(iVar4 + 1) = 0;
    }
  }
  return iVar1;
}


/* FUN_004245b8 @ 004245b8 */

int FUN_004245b8(int param_1,uint param_2)

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
    iVar1 = (*(code *)PTR_malloc_00614174)(param_2 * 3 + 1);
    if (iVar1 != 0) {
      uVar5 = 0;
      iVar4 = iVar1;
      while( true ) {
        puVar3 = (undefined1 *)(param_1 + uVar5);
        if (param_2 <= uVar5) break;
        uVar5 = uVar5 + 1;
        iVar2 = (*(code *)PTR_sprintf_00612e20)(iVar4,"%02X ",*puVar3);
        iVar4 = iVar4 + iVar2;
      }
      *(undefined1 *)(iVar4 + 1) = 0;
    }
  }
  return iVar1;
}


/* FUN_0042468c @ 0042468c */

int FUN_0042468c(int param_1,uint param_2)

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
    iVar1 = (*(code *)PTR_malloc_00614174)(param_2 * 2 + 1);
    if (iVar1 != 0) {
      uVar5 = 0;
      iVar4 = iVar1;
      while( true ) {
        puVar3 = (undefined1 *)(param_1 + uVar5);
        if (param_2 <= uVar5) break;
        uVar5 = uVar5 + 1;
        iVar2 = (*(code *)PTR_sprintf_00612e20)(iVar4,&DAT_005cbb40,*puVar3);
        iVar4 = iVar4 + iVar2;
      }
      *(undefined1 *)(iVar4 + 1) = 0;
    }
  }
  return iVar1;
}


/* FUN_0042475c @ 0042475c */

void FUN_0042475c(char *param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  
  iVar2 = (*(code *)PTR_strlen_00613f4c)();
  iVar2 = iVar2 + 1;
  pcVar3 = param_1;
  while( true ) {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
    if (cVar1 == '\0') break;
    iVar2 = iVar2 + (uint)(cVar1 == '.');
  }
  pcVar3 = (char *)(*(code *)PTR_malloc_00614174)(iVar2);
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


/* FUN_00424814 @ 00424814 */

int FUN_00424814(int param_1,int param_2)

{
  int iVar1;
  
  if (param_1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = 0;
    if (param_2 != 0) {
      iVar1 = (*(code *)PTR_malloc_00614174)(param_2 + 1);
      if (iVar1 != 0) {
        (*(code *)PTR_memcpy_00614674)(iVar1,param_1,param_2);
        *(undefined1 *)(iVar1 + param_2) = 0;
      }
    }
  }
  return iVar1;
}


/* FUN_004248a4 @ 004248a4 */

int FUN_004248a4(char *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if ((param_1 != (char *)0x0) && (*param_1 != '\0')) {
    iVar1 = (*(code *)PTR_strlen_00613f4c)();
    iVar2 = (*(code *)PTR_malloc_00614174)(iVar1 + 1);
    if (iVar2 != 0) {
      (*(code *)PTR_memcpy_00614674)(iVar2,param_1,iVar1 + 1);
    }
  }
  return iVar2;
}


/* FUN_00424940 @ 00424940 */

bool FUN_00424940(int param_1)

{
  bool bVar1;
  undefined4 local_78;
  char local_74 [112];
  
  bVar1 = false;
  if (0 < param_1) {
    local_78 = 0x68;
    (*(code *)PTR_getsockopt_00613710)(param_1,6,0xb,local_74,&local_78);
    bVar1 = local_74[0] == '\x01';
  }
  return bVar1;
}


/* FUN_004249a0 @ 004249a0 */

void FUN_004249a0(undefined4 *param_1)

{
  undefined *UNRECOVERED_JUMPTABLE;
  undefined4 uVar1;
  
  UNRECOVERED_JUMPTABLE = PTR_close_00613604;
  uVar1 = *param_1;
  *param_1 = 0xffffffff;
                    /* WARNING: Could not recover jumptable at 0x004249bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)(uVar1);
  return;
}


/* SocketSend @ 00424a58 */

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
        iVar3 = (*(code *)PTR_select_00613cc4)(iVar3,0,local_b0,0,local_30);
        if (iVar3 < 1) {
          return 0xffffe5ad;
        }
        if ((uVar6 & (uint)local_b0[uVar5]) != 0) {
          iVar3 = (*(code *)PTR_write_00613734)(param_1,param_2 + uVar4,param_3 - uVar4);
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


/* Phytrex_HMGetMaxPairList @ 00424c2c */

undefined4 Phytrex_HMGetMaxPairList(void)

{
  return 0x10;
}


/* Phytrex_HMGetAccessoryName @ 00424c34 */

undefined * Phytrex_HMGetAccessoryName(void)

{
  return &DAT_00615628;
}


/* Phytrex_HMSetAccessoryName @ 00424c40 */

void Phytrex_HMSetAccessoryName(undefined4 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00424c58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_strcpy_00612464)(&DAT_00615628,param_1);
  return;
}


/* Phytrex_HMGetPairListPermission @ 00424c60 */

undefined4 Phytrex_HMGetPairListPermission(int param_1,undefined1 *param_2)

{
  undefined4 uVar1;
  
  (*(code *)PTR_pthread_mutex_lock_00613f24)(&DAT_00614c00);
  uVar1 = 0xffffe5b7;
  if (param_1 < 0x10) {
    uVar1 = 0;
    *param_2 = (&DAT_00614c78)[param_1 * 0xa1];
  }
  (*(code *)PTR_pthread_mutex_unlock_00612b1c)(&DAT_00614c00);
  return uVar1;
}


/* Phytrex_HMGetNoOfPairList @ 00424cf8 */

int Phytrex_HMGetNoOfPairList(void)

{
  char *pcVar1;
  int iVar2;
  
  (*(code *)PTR_pthread_mutex_lock_00613f24)(&DAT_00614c00);
  pcVar1 = &DAT_00614c18;
  iVar2 = 0;
  do {
    if (*pcVar1 != '\0') {
      iVar2 = iVar2 + (uint)(pcVar1[0x40] != '\0');
    }
    pcVar1 = pcVar1 + 0xa1;
  } while (pcVar1 != &DAT_00615628);
  (*(code *)PTR_pthread_mutex_unlock_00612b1c)(&DAT_00614c00);
  return iVar2;
}


/* Phytrex_HMPairListIsEmpty @ 00424d88 */

undefined4 Phytrex_HMPairListIsEmpty(void)

{
  char cVar1;
  char *pcVar2;
  short sVar3;
  undefined4 uVar4;
  
  (*(code *)PTR_pthread_mutex_lock_00613f24)(&DAT_00614c00);
  pcVar2 = &DAT_00614c58;
  sVar3 = 0;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 0xa1;
    if (cVar1 != '\0') {
      sVar3 = sVar3 + 1;
    }
    uVar4 = 0xffffe5b7;
  } while (pcVar2 != (char *)&DAT_00615668);
  if (sVar3 == 0) {
    uVar4 = 0;
  }
  (*(code *)PTR_pthread_mutex_unlock_00612b1c)(&DAT_00614c00);
  return uVar4;
}


/* Phytrex_Cleanup_Handler @ 00424e0c */

void Phytrex_Cleanup_Handler(void)

{
                    /* WARNING: Could not recover jumptable at 0x00424e20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_pthread_mutex_unlock_00612b1c)(&DAT_00614c00);
  return;
}


/* Phytrex_HMUpdatePairList @ 00424e28 */

undefined4 Phytrex_HMUpdatePairList(int param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    (*(code *)PTR_pthread_mutex_lock_00613f24)(&DAT_00614c00);
    uVar1 = 0xffffe5b8;
    if (param_2 < 0x10) {
      param_2 = param_2 * 0xa1;
      uVar1 = 0;
      (*(code *)PTR_memcpy_00614674)(&DAT_00614c18 + param_2,param_1,0x24);
      (*(code *)PTR_memcpy_00614674)(&DAT_00614c58 + param_2,param_1 + 0x40,0x20);
      (&DAT_00614c78)[param_2] = *(undefined1 *)(param_1 + 0x60);
    }
  }
  (*(code *)PTR_pthread_mutex_unlock_00612b1c)(&DAT_00614c00);
  return uVar1;
}


/* Phytrex_HMGetControllerName @ 00424f00 */

undefined4 Phytrex_HMGetControllerName(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  
  (*(code *)PTR_pthread_mutex_lock_00613f24)(&DAT_00614c00);
  uVar1 = 0xffffe5b9;
  if ((&DAT_00614c18)[param_2 * 0xa1] != '\0') {
    (*(code *)PTR_memcpy_00614674)(param_1,&DAT_00614c18 + param_2 * 0xa1,0x24);
    uVar1 = 0;
  }
  (*(code *)PTR_pthread_mutex_unlock_00612b1c)(&DAT_00614c00);
  return uVar1;
}


/* Phytrex_HMReadPairList @ 00424fa4 */

undefined4 Phytrex_HMReadPairList(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  (*(code *)PTR_pthread_mutex_lock_00613f24)(&DAT_00614c00);
  if (param_1 != 0) {
    iVar1 = (*(code *)PTR_open_0061479c)("/dev/mtdblock2",0);
    uVar2 = 0xffffe5c2;
    if (iVar1 != -1) {
      (*(code *)PTR_close_00613604)(iVar1);
      uVar2 = 0xffffe5b8;
      if (param_2 < 0x10) {
        param_2 = param_2 * 0xa1;
        if ((&DAT_00614c18)[param_2] != '\0') {
          (*(code *)PTR_memcpy_00614674)(param_1,&DAT_00614c18 + param_2,0x24);
          uVar2 = 0;
          (*(code *)PTR_memcpy_00614674)(param_1 + 0x40,&DAT_00614c58 + param_2,0x20);
          *(undefined1 *)(param_1 + 0x60) = (&DAT_00614c78)[param_2];
        }
      }
    }
  }
  (*(code *)PTR_pthread_mutex_unlock_00612b1c)(&DAT_00614c00);
  return uVar2;
}


/* Phytrex_HMRemoveAllPairKey @ 004250bc */

undefined4 Phytrex_HMRemoveAllPairKey(void)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  
  (*(code *)PTR_pthread_mutex_lock_00613f24)(&DAT_00614c00);
  puVar1 = &DAT_00614c18;
  do {
    puVar2 = puVar1 + 0xa1;
    (*(code *)PTR_memset_006130cc)(puVar1,0,0xa1);
    puVar1 = puVar2;
  } while (puVar2 != &DAT_00615628);
  (*(code *)PTR_pthread_mutex_unlock_00612b1c)(&DAT_00614c00);
  return 0;
}


/* Phytrex_HMRemovePairKey @ 00425148 */

undefined4 Phytrex_HMRemovePairKey(undefined4 param_1,undefined1 *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  
  (*(code *)PTR_pthread_mutex_lock_00613f24)(&DAT_00614c00);
  iVar5 = 0;
  iVar2 = 0;
  do {
    iVar1 = (*(code *)PTR_strncmp_006140c8)(&DAT_00614c18 + iVar5,param_1,0x40);
    iVar3 = iVar2 + 1;
    if (iVar1 == 0) {
      (*(code *)PTR_memset_006130cc)(&DAT_00614c18 + iVar5,0,0xa1);
      uVar4 = 0;
      if (iVar2 == 0) {
        *param_2 = 1;
      }
      goto LAB_00425210;
    }
    iVar5 = iVar3 * 0xa1;
    iVar2 = iVar3;
  } while (iVar3 != 0x10);
  uVar4 = 0xffffe5b9;
LAB_00425210:
  (*(code *)PTR_pthread_mutex_unlock_00612b1c)(&DAT_00614c00);
  return uVar4;
}


/* Phytrex_HMSearchLTPK @ 0042524c */

undefined4 Phytrex_HMSearchLTPK(undefined4 param_1,undefined4 param_2,int *param_3)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  
  puVar1 = PTR_pthread_mutex_lock_00613f24;
  *param_3 = -1;
  (*(code *)puVar1)(&DAT_00614c00);
  iVar6 = 0;
  iVar3 = 0;
  do {
    iVar2 = (*(code *)PTR_strncmp_006140c8)(&DAT_00614c18 + iVar6,param_1,0x40);
    iVar4 = iVar3 + 1;
    if (iVar2 == 0) {
      (*(code *)PTR_memcpy_00614674)(param_2,&DAT_00614c58 + iVar6,0x20);
      *param_3 = iVar3;
      uVar5 = 0;
      goto LAB_0042531c;
    }
    iVar6 = iVar4 * 0xa1;
    iVar3 = iVar4;
  } while (iVar4 != 0x10);
  uVar5 = 0xffffe5b9;
LAB_0042531c:
  (*(code *)PTR_pthread_mutex_unlock_00612b1c)(&DAT_00614c00);
  return uVar5;
}


/* Phytrex_HMAddPairKey @ 0042535c */

undefined4 Phytrex_HMAddPairKey(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  
  (*(code *)PTR_printf_006126e8)("[Add Pair] ControllerName=[%s]\n",param_1);
  pcVar4 = &DAT_00614c18;
  (*(code *)PTR_pthread_mutex_lock_00613f24)(&DAT_00614c00);
  iVar5 = 0;
  iVar6 = 0;
  while( true ) {
    iVar5 = iVar5 + 1;
    iVar2 = (*(code *)PTR_strncmp_006140c8)(&DAT_00614c18 + iVar6,param_1,0x40);
    if (iVar2 == 0) {
      uVar3 = 0xffffe5ae;
      goto LAB_0042546c;
    }
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 0xa1;
    if (cVar1 == '\0') break;
    iVar6 = iVar5 * 0xa1;
    if (iVar5 == 0x10) {
      uVar3 = 0xffffe5b8;
LAB_0042546c:
      (*(code *)PTR_pthread_mutex_unlock_00612b1c)(&DAT_00614c00);
      return uVar3;
    }
  }
  (*(code *)PTR_memcpy_00614674)(&DAT_00614c58 + iVar6,param_1 + 0x40,0x20);
  (*(code *)PTR_memcpy_00614674)(&DAT_00614c18 + iVar6,param_1,0x24);
  uVar3 = 0;
  (&DAT_00614c78)[iVar6] = *(undefined1 *)(param_1 + 0x60);
  goto LAB_0042546c;
}


/* Phytrex_HMGetAppConfig @ 004254a8 */

undefined4 Phytrex_HMGetAppConfig(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if (param_1 != 0) {
    (*(code *)PTR_pthread_mutex_lock_00613f24)(&DAT_00614c00);
    uVar2 = 0xffffe5c2;
    iVar1 = (*(code *)PTR_open_0061479c)("/dev/mtdblock2",0);
    if (iVar1 != -1) {
      (*(code *)PTR_lseek_00613e6c)(iVar1,0xc,0);
      uVar2 = 0;
      (*(code *)PTR_read_00613d88)(iVar1,param_1,0x41);
      (*(code *)PTR_close_00613604)(iVar1);
    }
    (*(code *)PTR_pthread_mutex_unlock_00612b1c)(&DAT_00614c00);
  }
  return uVar2;
}


/* FUN_0042558c @ 0042558c */

undefined4 FUN_0042558c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if (param_1 != 0) {
    (*(code *)PTR_pthread_mutex_lock_00613f24)(&DAT_00614c00);
    uVar2 = 0xffffe5c2;
    iVar1 = (*(code *)PTR_open_0061479c)("/dev/mtdblock2",0);
    if (iVar1 != -1) {
      (*(code *)PTR_lseek_00613e6c)(iVar1,0,0);
      uVar2 = 0;
      (*(code *)PTR_read_00613d88)(iVar1,param_1,0xc);
      (*(code *)PTR_close_00613604)(iVar1);
    }
  }
  (*(code *)PTR_pthread_mutex_unlock_00612b1c)(&DAT_00614c00);
  return uVar2;
}


/* FUN_00425670 @ 00425670 */

/* WARNING: Removing unreachable block (ram,0x0042585c) */
/* WARNING: Removing unreachable block (ram,0x004257a4) */
/* WARNING: Removing unreachable block (ram,0x004256ec) */
/* WARNING: Removing unreachable block (ram,0x00425748) */
/* WARNING: Removing unreachable block (ram,0x00425800) */
/* WARNING: Removing unreachable block (ram,0x004258b8) */

void FUN_00425670(void)

{
  undefined4 uVar1;
  int iVar2;
  char local_10;
  char local_f;
  char local_e;
  char local_d;
  char local_c;
  char local_b;
  
  (*(code *)PTR_apmib_init_00613c14)();
  uVar1 = (*(code *)PTR_time_00613804)(0);
  (*(code *)PTR_srand_00612708)(uVar1);
  iVar2 = (*(code *)PTR_rand_00612cbc)();
  local_10 = (char)(iVar2 % 0xff) + '\x01';
  iVar2 = (*(code *)PTR_time_00613804)(0);
  (*(code *)PTR_srand_00612708)(iVar2 + 1);
  iVar2 = (*(code *)PTR_rand_00612cbc)();
  local_f = (char)(iVar2 % 0xff) + '\x01';
  iVar2 = (*(code *)PTR_time_00613804)(0);
  (*(code *)PTR_srand_00612708)(iVar2 + 2);
  iVar2 = (*(code *)PTR_rand_00612cbc)();
  local_e = (char)(iVar2 % 0xff) + '\x01';
  iVar2 = (*(code *)PTR_time_00613804)(0);
  (*(code *)PTR_srand_00612708)(iVar2 + 3);
  iVar2 = (*(code *)PTR_rand_00612cbc)();
  local_d = (char)(iVar2 % 0xff) + '\x01';
  iVar2 = (*(code *)PTR_time_00613804)(0);
  (*(code *)PTR_srand_00612708)(iVar2 + 4);
  iVar2 = (*(code *)PTR_rand_00612cbc)();
  local_c = (char)(iVar2 % 0xff) + '\x01';
  iVar2 = (*(code *)PTR_time_00613804)(0);
  (*(code *)PTR_srand_00612708)(iVar2 + 5);
  iVar2 = (*(code *)PTR_rand_00612cbc)();
  local_b = (char)(iVar2 % 0xff) + '\x01';
  (*(code *)PTR_apmib_set_006136e0)(0x17,&local_10);
  (*(code *)PTR_apmib_update_006141c4)(4);
  return;
}


/* Phytrex_HMInitFlash @ 00425904 */

void Phytrex_HMInitFlash(char param_1)

{
  undefined4 uVar1;
  undefined1 local_60;
  undefined1 local_5f;
  undefined1 local_5e;
  undefined1 local_5d;
  undefined4 local_5c;
  undefined4 local_58;
  undefined1 auStack_54 [72];
  
  if (param_1 != '\0') {
    FUN_00425670();
  }
  uVar1 = (*(code *)PTR_open_0061479c)("/dev/mtdblock2",0x101,0x1b0);
  local_60 = 0x50;
  local_5f = 0x48;
  local_5e = 0x52;
  local_5d = 0x58;
  local_5c = 0;
  local_58 = 0;
  (*(code *)PTR_lseek_00613e6c)(uVar1,0,0);
  (*(code *)PTR_write_00613734)(uVar1,&local_60,0xc);
  (*(code *)PTR_memset_006130cc)(auStack_54,0,0x41);
  (*(code *)PTR_lseek_00613e6c)(uVar1,0,0xc);
  (*(code *)PTR_write_00613734)(uVar1,auStack_54,0x41);
  (*(code *)PTR_memset_006130cc)(&DAT_00614c18,0,0xa10);
  (*(code *)PTR_lseek_00613e6c)(uVar1,0,0x4d);
  (*(code *)PTR_write_00613734)(uVar1,&DAT_00614c18,0xa10);
  (*(code *)PTR_close_00613604)(uVar1);
  return;
}


/* Phytrex_HMSavePairList @ 00425a88 */

undefined4 Phytrex_HMSavePairList(void)

{
  int iVar1;
  undefined4 uVar2;
  
  (*(code *)PTR_pthread_mutex_lock_00613f24)(&DAT_00614c00);
  iVar1 = (*(code *)PTR_open_0061479c)("/dev/mtdblock2",2);
  if (iVar1 == -1) {
    Phytrex_HMInitFlash(1);
    uVar2 = 0xffffe5c2;
  }
  else {
    (*(code *)PTR_lseek_00613e6c)(iVar1,0x4d,0);
    (*(code *)PTR_write_00613734)(iVar1,&DAT_00614c18,0xa10);
    uVar2 = 0;
    (*(code *)PTR_close_00613604)(iVar1);
  }
  (*(code *)PTR_pthread_mutex_unlock_00612b1c)(&DAT_00614c00);
  return uVar2;
}


/* Phytrex_HMSaveAppConfig @ 00425b64 */

undefined4 Phytrex_HMSaveAppConfig(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  (*(code *)PTR_pthread_mutex_lock_00613f24)(&DAT_00614c00);
  iVar1 = (*(code *)PTR_open_0061479c)("/dev/mtdblock2",2);
  if (iVar1 == -1) {
    Phytrex_HMInitFlash(1);
    uVar2 = 0xffffe5c2;
  }
  else {
    (*(code *)PTR_lseek_00613e6c)(iVar1,0xc,0);
    (*(code *)PTR_write_00613734)(iVar1,param_1,0x41);
    uVar2 = 0;
    (*(code *)PTR_close_00613604)(iVar1);
  }
  (*(code *)PTR_pthread_mutex_unlock_00612b1c)(&DAT_00614c00);
  return uVar2;
}


/* Phytrex_HMCreatPairList @ 00425c4c */

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
  
  (*(code *)PTR_pthread_mutex_lock_00613f24)(&DAT_00614c00);
  iVar1 = (*(code *)PTR_open_0061479c)("/dev/mtdblock2",0);
  if (iVar1 == -1) {
    Phytrex_HMInitFlash(1);
  }
  else {
    (*(code *)PTR_lseek_00613e6c)(iVar1,0,0);
    (*(code *)PTR_read_00613d88)(iVar1,&local_60,0xc);
    if ((((local_60 == 'P') && (local_5f == 'H')) && (local_5e == 'R')) && (local_5d == 'X')) {
      (*(code *)PTR_lseek_00613e6c)(iVar1,0x4d,0);
      pcVar2 = (code *)PTR_read_00613d88;
    }
    else {
      (*(code *)PTR_close_00613604)(iVar1);
      iVar1 = (*(code *)PTR_open_0061479c)("/dev/mtdblock2",0x101,0x1b0);
      local_60 = 'P';
      local_5f = 'H';
      local_5e = 'R';
      local_5d = 'X';
      local_5c = 0;
      local_58 = 0;
      (*(code *)PTR_lseek_00613e6c)(iVar1,0,0);
      (*(code *)PTR_write_00613734)(iVar1,&local_60,0xc);
      (*(code *)PTR_memset_006130cc)(auStack_54,0,0x41);
      (*(code *)PTR_lseek_00613e6c)(iVar1,0,0xc);
      (*(code *)PTR_write_00613734)(iVar1,auStack_54,0x41);
      (*(code *)PTR_memset_006130cc)(&DAT_00614c18,0,0xa10);
      (*(code *)PTR_lseek_00613e6c)(iVar1,0,0x4d);
      pcVar2 = (code *)PTR_write_00613734;
    }
    (*pcVar2)(iVar1,&DAT_00614c18,0xa10);
    (*(code *)PTR_close_00613604)(iVar1);
  }
  (*(code *)PTR_pthread_mutex_unlock_00612b1c)(&DAT_00614c00);
  return 0;
}


/* Phytrex_HMEnd @ 00425ecc */

void Phytrex_HMEnd(void)

{
                    /* WARNING: Could not recover jumptable at 0x00425ee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_pthread_mutex_destroy_00613ae8)(&DAT_00614c00);
  return;
}


/* Phytrex_HMStart @ 00425ee8 */

void Phytrex_HMStart(void)

{
                    /* WARNING: Could not recover jumptable at 0x00425f00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_pthread_mutex_init_006144d8)(&DAT_00614c00,0);
  return;
}


/* HKSetPassword @ 00425f10 */

void HKSetPassword(undefined4 param_1)

{
  DAT_00615654 = param_1;
  return;
}


/* HKCreatePairVerifyInfo @ 00425f24 */

void HKCreatePairVerifyInfo(void)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_calloc_006148c0)(1,0x28);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 4) = 1;
  }
  return;
}


/* HKCleanPairVerifyInfo @ 00425f64 */

void HKCleanPairVerifyInfo(int *param_1)

{
  int iVar1;
  
  if (*param_1 != 0) {
    if (*(int *)(*param_1 + 0xc) != 0) {
      (*(code *)PTR_free_0061286c)();
    }
    iVar1 = *param_1;
    if (*(int *)(iVar1 + 0x10) != 0) {
      (*(code *)PTR_free_0061286c)();
      iVar1 = *param_1;
    }
    if (*(int *)(iVar1 + 0x14) != 0) {
      (*(code *)PTR_free_0061286c)();
    }
    iVar1 = *param_1;
    if (*(int *)(iVar1 + 0x18) != 0) {
      (*(code *)PTR_free_0061286c)();
      iVar1 = *param_1;
    }
    if (*(int *)(iVar1 + 0x1c) != 0) {
      (*(code *)PTR_free_0061286c)();
    }
    iVar1 = *param_1;
    if (*(int *)(iVar1 + 0x20) != 0) {
      (*(code *)PTR_free_0061286c)();
      iVar1 = *param_1;
    }
    if (*(int *)(iVar1 + 0x24) != 0) {
      (*(code *)PTR_free_0061286c)();
    }
    (*(code *)PTR_free_0061286c)(*param_1);
    *param_1 = 0;
  }
  return;
}


/* HKCleanPairSetupInfo @ 004260e0 */

void HKCleanPairSetupInfo(int *param_1,int param_2)

{
  int iVar1;
  
  if ((*param_1 != 0) && (*(char *)(param_2 + 0x110) != '\0')) {
    DAT_00600a50 = 1;
    *(undefined1 *)(param_2 + 0x110) = 0;
    if (*(int *)(*param_1 + 4) != 0) {
      (*(code *)PTR_free_0061286c)();
    }
    iVar1 = *param_1;
    if (*(int *)(iVar1 + 0xc) != 0) {
      (*(code *)PTR_free_0061286c)();
      iVar1 = *param_1;
    }
    if (*(int *)(iVar1 + 0x14) != 0) {
      (*(code *)PTR_free_0061286c)();
    }
    iVar1 = *param_1;
    if (*(int *)(iVar1 + 0x1c) != 0) {
      (*(code *)PTR_free_0061286c)();
      iVar1 = *param_1;
    }
    if (*(int *)(*(int *)(iVar1 + 8) + 0x30) != 0) {
      (*(code *)PTR_free_0061286c)();
    }
    if (*(int *)(*(int *)(*param_1 + 8) + 0x28) != 0) {
      (*(code *)PTR_free_0061286c)();
    }
    if (*(int *)(*(int *)(*param_1 + 8) + 0x24) != 0) {
      (*(code *)PTR_free_0061286c)();
    }
    if (*(int *)(*(int *)(*param_1 + 8) + 0x48) != 0) {
      (*(code *)PTR_free_0061286c)();
    }
    if (*(int *)(*param_1 + 8) != 0) {
      (*(code *)PTR_free_0061286c)();
    }
    (*(code *)PTR_free_0061286c)(*param_1);
    *param_1 = 0;
  }
  return;
}


/* FUN_004262f8 @ 004262f8 */

int FUN_004262f8(undefined4 param_1,int param_2,int param_3)

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
  iVar2 = (*(code *)PTR_calloc_006148c0)(0x20,1);
  *(int *)(param_2 + 0x10) = iVar2;
  if (iVar2 != 0) {
    iVar2 = (*(code *)PTR_calloc_006148c0)(0x20,1);
    *(int *)(param_2 + 0x14) = iVar2;
    if (iVar2 != 0) {
      iVar2 = (*(code *)PTR_calloc_006148c0)(0x20,1);
      *(int *)(param_2 + 0x18) = iVar2;
      if (iVar2 != 0) {
        iVar2 = (*(code *)PTR_calloc_006148c0)(0x20,1);
        *(int *)(param_2 + 0x1c) = iVar2;
        if (iVar2 != 0) {
          iVar2 = (*(code *)PTR_calloc_006148c0)(0x90,1);
          if (iVar2 != 0) {
            if (*(int *)(param_2 + 0x14) == 0) {
              uVar3 = (*(code *)PTR_calloc_006148c0)(0x20,1);
              *(undefined4 *)(param_2 + 0x14) = uVar3;
            }
            (*(code *)PTR_t_random_006124fc)(*(undefined4 *)(param_2 + 0x14),0x20);
            (*(code *)PTR_memset_006130cc)(&DAT_00600a30,0,0x20);
            DAT_00600a30 = 9;
            (*(code *)PTR_curve25519_donna_0061279c)
                      (*(undefined4 *)(param_2 + 0x10),*(undefined4 *)(param_2 + 0x14),&DAT_00600a30
                      );
            (*(code *)PTR_curve25519_donna_0061279c)
                      (*(undefined4 *)(param_2 + 0x18),*(undefined4 *)(param_2 + 0x14),
                       *(undefined4 *)(param_2 + 0xc));
            uVar3 = (*(code *)PTR_Phytrex_HMGetAccessoryName_00613728)();
            (*(code *)PTR_memcpy_00614674)(auStack_268,*(undefined4 *)(param_2 + 0x10),0x20);
            uVar4 = (*(code *)PTR_strlen_00613f4c)(uVar3);
            (*(code *)PTR_memcpy_00614674)(auStack_248,uVar3,uVar4);
            local_34 = (undefined1 *)(*(code *)PTR_strlen_00613f4c)(uVar3);
            (*(code *)PTR_memcpy_00614674)
                      (auStack_268 + (int)local_34 + 0x20,*(undefined4 *)(param_2 + 0xc),0x20);
            (*(code *)PTR_memcpy_00614674)(auStack_3a8,param_3 + 0xbd,0x40);
            iVar5 = (*(code *)PTR_crypto_sign_detached_00612830)
                              (auStack_368,auStack_3b8,auStack_268);
            puVar8 = (undefined1 *)0x0;
            if (iVar5 == 0) {
              local_30 = PTR_s_Pair_Verify_Encrypt_Salt_00600a6c;
              local_34 = (undefined1 *)
                         (*(code *)PTR_strlen_00613f4c)(PTR_s_Pair_Verify_Encrypt_Salt_00600a6c);
              puVar1 = PTR_s_Pair_Verify_Encrypt_Info_00600a88;
              uVar4 = (*(code *)PTR_strlen_00613f4c)(PTR_s_Pair_Verify_Encrypt_Info_00600a88);
              iVar5 = (*(code *)PTR_hkdf_00613044)
                                (4,local_30,local_34,*(undefined4 *)(param_2 + 0x18),0x20,puVar1,
                                 uVar4,*(undefined4 *)(param_2 + 0x1c),0x20);
              puVar8 = (undefined1 *)0x0;
              if (iVar5 == 0) {
                local_38 = (*(code *)PTR_strlen_00613f4c)(uVar3);
                local_38 = local_3b4 + 4 + local_38;
                puVar8 = (undefined1 *)(*(code *)PTR_calloc_006148c0)(local_38,1);
                puVar1 = PTR_strlen_00613f4c;
                if (puVar8 == (undefined1 *)0x0) {
LAB_004268e4:
                  iVar5 = -0x1a48;
                }
                else {
                  *puVar8 = 1;
                  uVar7 = (*(code *)puVar1)(uVar3);
                  puVar8[1] = uVar7;
                  uVar4 = (*(code *)PTR_strlen_00613f4c)(uVar3);
                  local_34 = puVar8 + 2;
                  (*(code *)PTR_memcpy_00614674)(local_34,uVar3,uVar4);
                  iVar5 = (*(code *)PTR_strlen_00613f4c)(uVar3);
                  puVar6 = local_34 + iVar5;
                  *puVar6 = 10;
                  puVar1 = PTR_memcpy_00614674;
                  puVar6[1] = (char)local_3b4;
                  (*(code *)puVar1)(puVar6 + 2,auStack_368,local_3b4);
                  iVar5 = (*(code *)PTR_crypto_aead_chacha20poly1305_encrypt_00613840)
                                    (auStack_168,auStack_3b0,puVar8);
                  if (iVar5 == 0) {
                    (*(code *)PTR_free_0061286c)(puVar8);
                    iVar9 = local_3ac + 0x27;
                    puVar8 = (undefined1 *)(*(code *)PTR_calloc_006148c0)(iVar9,1);
                    if (puVar8 == (undefined1 *)0x0) goto LAB_004268e4;
                    *puVar8 = 6;
                    puVar8[2] = 2;
                    puVar8[1] = 1;
                    puVar8[3] = 3;
                    puVar8[4] = 0x20;
                    (*(code *)PTR_memcpy_00614674)(puVar8 + 5,*(undefined4 *)(param_2 + 0x10),0x20);
                    puVar8[0x25] = 5;
                    puVar1 = PTR_memcpy_00614674;
                    puVar8[0x26] = (char)local_3ac;
                    (*(code *)puVar1)(puVar8 + 0x27,auStack_168,local_3ac);
                    iVar5 = (*(code *)PTR_CreateSimpleHTTPMessageNoCopy_006131a4)
                                      ("application/pairing+tlv8",iVar9,&local_3c0,&local_3bc);
                    if (iVar5 == 0) {
                      unaff_s3 = (*(code *)PTR_calloc_006148c0)(iVar9 + local_3bc,1);
                      (*(code *)PTR_memcpy_00614674)(unaff_s3,local_3c0,local_3bc);
                      (*(code *)PTR_memcpy_00614674)(unaff_s3 + local_3bc,puVar8,iVar9);
                      iVar5 = (*(code *)PTR_SocketSend_00612dcc)(param_1,unaff_s3,iVar9 + local_3bc)
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
            (*(code *)PTR_free_0061286c)(iVar2);
            goto LAB_00426850;
          }
        }
      }
    }
  }
  puVar8 = (undefined1 *)0x0;
  local_34 = (undefined1 *)0xffffe5b8;
LAB_00426850:
  if (unaff_s3 != 0) {
    (*(code *)PTR_free_0061286c)(unaff_s3);
  }
  if (puVar8 != (undefined1 *)0x0) {
    (*(code *)PTR_free_0061286c)(puVar8);
  }
  if (local_3c0 != 0) {
    (*(code *)PTR_free_0061286c)();
  }
  return (int)local_34;
}


/* FUN_00426908 @ 00426908 */

int FUN_00426908(int param_1,int param_2,undefined4 param_3,int param_4)

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
    iVar1 = (*(code *)PTR_TLVGetNext_00613da4)
                      (local_59c,local_40,&local_5a0,&local_598,local_3c,local_38);
    if (iVar1 != 0) {
      iVar1 = (*(code *)PTR_crypto_aead_chacha20poly1305_decrypt_00613a28)
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
            iVar1 = (*(code *)PTR_TLVGetNext_00613da4)
                              (local_59c,local_40,local_30,local_3c,local_38,local_34);
            if (iVar1 != 0) {
              (*(code *)PTR_memcpy_00614674)(auStack_240,*(undefined4 *)(param_2 + 0xc),0x20);
              (*(code *)PTR_memcpy_00614674)(auStack_220,auStack_560,unaff_s1);
              uVar3 = unaff_s1 + 0x20 & 0xff;
              (*(code *)PTR_memcpy_00614674)
                        (auStack_240 + uVar3,*(undefined4 *)(param_2 + 0x10),0x20);
              iVar1 = (*(code *)PTR_Phytrex_HMSearchLTPK_00612a34)
                                (auStack_560,auStack_580,local_590);
              if (iVar1 == 0) {
                iVar1 = (*(code *)PTR_Phytrex_HMGetPairListPermission_00612a68)
                                  (local_590[0],local_59f);
                if (iVar1 == 0) {
                  *(undefined1 *)(param_4 + 4) = local_59f[0];
                }
                iVar1 = (*(code *)PTR_crypto_sign_ed25519_verify_detached_00613b78)
                                  (auStack_4fc,auStack_240,0,uVar3 + 0x20 & 0xff,auStack_580);
                if (iVar1 == 0) {
                  uVar2 = (*(code *)PTR_pthread_self_006134a8)();
                  (*(code *)PTR_pthread_list_updateControllerName_00612630)(uVar2,auStack_560);
                }
              }
              return iVar1;
            }
            if (local_5a0 != '\x01') break;
            (*(code *)PTR_memset_006130cc)(auStack_560,0,100);
            (*(code *)PTR_memcpy_00614674)(auStack_560,local_598,local_594);
            unaff_s1 = local_594 & 0xff;
          }
        } while (local_5a0 != '\n');
        if (local_594 != 0x40) break;
        (*(code *)PTR_memset_006130cc)(auStack_4fc,0,100);
        (*(code *)PTR_memcpy_00614674)(auStack_4fc,local_598,local_594);
      }
      return 0;
    }
    local_2c = (byte *)(*(code *)PTR_calloc_006148c0)(local_594 + 1,1);
    if (local_2c == (byte *)0x0) break;
    (*(code *)PTR_memcpy_00614674)(local_2c,local_598,local_594);
    if (local_5a0 == '\x05') {
      (*(code *)PTR_memcpy_00614674)(local_34,local_598,local_594);
      uVar3 = local_594;
      if (local_594 == 0) {
        return -0x1a51;
      }
    }
    else if (local_5a0 == '\x06') {
      if (*(uint *)(param_2 + 4) != (uint)*local_2c) {
        return -0x1a51;
      }
      (*(code *)PTR_free_0061286c)(local_2c);
    }
  }
  return -0x1a48;
}


/* HKPairVerifyEngine @ 00426d10 */

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
    while (iVar4 = (*(code *)PTR_TLVGetNext_00613da4)
                             (local_44,iVar5,local_48,local_38,&local_40,&local_44), iVar4 == 0) {
      local_34 = (byte *)(*(code *)PTR_calloc_006148c0)(local_40 + 1,1);
      if (local_34 == (byte *)0x0) {
        local_34 = (byte *)0xffffe5b8;
        goto LAB_00427104;
      }
      (*(code *)PTR_memcpy_00614674)(local_34,local_3c,local_40);
      if (local_48[0] == '\x03') {
        *(byte **)(param_3 + 0xc) = local_34;
      }
      else if (local_48[0] == '\x06') {
        if (*(uint *)(param_3 + 4) != (uint)*local_34) {
          local_34 = (byte *)0xffffe5af;
          goto LAB_00427104;
        }
        (*(code *)PTR_free_0061286c)(local_34);
      }
    }
    *(undefined4 *)(param_3 + 4) = 2;
    local_34 = (byte *)FUN_004262f8(param_1,param_3,param_4);
    goto LAB_004270fc;
  }
  if (*(int *)(param_3 + 4) != 3) {
    return -0x1a35;
  }
  iVar5 = FUN_00426908(param_2,param_3,param_4,param_5);
  if (iVar5 != 0) {
    *(undefined4 *)(param_3 + 4) = 1;
    return iVar5;
  }
  local_40 = 0;
  local_3c = 0;
  puVar6 = (undefined1 *)(*(code *)PTR_calloc_006148c0)(3,1);
  puVar3 = PTR_calloc_006148c0;
  if (puVar6 == (undefined1 *)0x0) {
LAB_0042713c:
    iVar5 = -0x1a48;
LAB_00427140:
    local_34 = (byte *)iVar5;
    if (puVar6 != (undefined1 *)0x0) goto LAB_004270bc;
  }
  else {
    *puVar6 = 6;
    puVar6[2] = 4;
    *param_3 = 1;
    puVar6[1] = 1;
    iVar5 = (*(code *)puVar3)(0x20,1);
    *(int *)(param_3 + 0x20) = iVar5;
    if (iVar5 == 0) goto LAB_0042713c;
    local_30 = PTR_s_Control_Salt_00600a7c;
    local_34 = (byte *)(*(code *)PTR_strlen_00613f4c)(PTR_s_Control_Salt_00600a7c);
    puVar3 = PTR_s_Control_Read_Encryption_Key_00600a98;
    uVar7 = (*(code *)PTR_strlen_00613f4c)(PTR_s_Control_Read_Encryption_Key_00600a98);
    iVar5 = (*(code *)PTR_hkdf_00613044)
                      (4,local_30,local_34,*(undefined4 *)(param_3 + 0x18),0x20,puVar3,uVar7,iVar5,
                       0x20);
    if (iVar5 != 0) goto LAB_00427140;
    iVar5 = (*(code *)PTR_calloc_006148c0)(0x20,1);
    *(int *)(param_3 + 0x24) = iVar5;
    if (iVar5 == 0) goto LAB_0042713c;
    local_30 = PTR_s_Control_Salt_00600a78;
    local_34 = (byte *)(*(code *)PTR_strlen_00613f4c)(PTR_s_Control_Salt_00600a78);
    puVar3 = PTR_s_Control_Write_Encryption_Key_00600a94;
    uVar7 = (*(code *)PTR_strlen_00613f4c)(PTR_s_Control_Write_Encryption_Key_00600a94);
    iVar5 = (*(code *)PTR_hkdf_00613044)
                      (4,local_30,local_34,*(undefined4 *)(param_3 + 0x18),0x20,puVar3,uVar7,iVar5,
                       0x20);
    if ((iVar5 != 0) ||
       (iVar5 = (*(code *)PTR_CreateSimpleHTTPMessageNoCopy_006131a4)
                          ("application/pairing+tlv8",3,&local_40,&local_3c), iVar5 != 0))
    goto LAB_00427140;
    iVar5 = (*(code *)PTR_calloc_006148c0)(local_3c + 3,1);
    (*(code *)PTR_memcpy_00614674)(iVar5,local_40,local_3c);
    puVar3 = PTR_SocketSend_00612dcc;
    uVar1 = *puVar6;
    uVar2 = puVar6[1];
    puVar8 = (undefined1 *)(iVar5 + local_3c);
    puVar8[2] = puVar6[2];
    *puVar8 = uVar1;
    puVar8[1] = uVar2;
    local_34 = (byte *)(*(code *)puVar3)(param_1,iVar5,local_3c + 3);
    if (iVar5 != 0) {
      (*(code *)PTR_free_0061286c)(iVar5);
    }
LAB_004270bc:
    (*(code *)PTR_free_0061286c)(puVar6);
  }
  if (local_40 != 0) {
    (*(code *)PTR_free_0061286c)();
  }
LAB_004270fc:
  if (local_34 != (byte *)0x0) {
LAB_00427104:
    *(undefined4 *)(param_3 + 4) = 1;
  }
  return (int)local_34;
}


/* FUN_00427150 @ 00427150 */

/* WARNING: Removing unreachable block (ram,0x004272b8) */
/* WARNING: Removing unreachable block (ram,0x00427508) */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

int FUN_00427150(undefined4 param_1,int param_2)

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
  *(undefined4 *)(param_2 + 0x2c) = 0;
  if (*(int *)(param_2 + 0x1c) == 0) {
    iVar2 = (*(code *)PTR_calloc_006148c0)(0x40,1);
    puVar9 = (undefined1 *)0x0;
    *(int *)(param_2 + 0x1c) = iVar2;
    if (iVar2 != 0) goto LAB_004271cc;
  }
  else {
LAB_004271cc:
    puVar6 = PTR_SRP_compute_key_006144f0;
    puVar9 = *(undefined1 **)(param_2 + 0x1c);
    puVar9[3] = 0;
    *puVar9 = 0;
    puVar9[1] = 0;
    puVar9[2] = 0;
    (*(code *)puVar6)(*(undefined4 *)(param_2 + 0x24),param_2 + 0x2c,*(undefined4 *)(param_2 + 0xc),
                      *(undefined4 *)(param_2 + 0x10));
    puVar6 = PTR_calloc_006148c0;
    *(undefined4 *)(*(int *)(param_2 + 8) + 0x4c) = *(undefined4 *)(*(int *)(param_2 + 0x2c) + 4);
    iVar2 = *(int *)(param_2 + 8);
    uVar3 = (*(code *)puVar6)(*(undefined4 *)(iVar2 + 0x4c),1);
    *(undefined4 *)(iVar2 + 0x48) = uVar3;
    (*(code *)PTR_memcpy_00614674)
              (*(undefined4 *)(*(int *)(param_2 + 8) + 0x48),**(undefined4 **)(param_2 + 0x2c),
               *(undefined4 *)(*(int *)(param_2 + 8) + 0x4c));
    iVar2 = (*(code *)PTR_SRP_verify_00613f54)
                      (*(undefined4 *)(param_2 + 0x24),*(undefined4 *)(param_2 + 0x14),
                       *(undefined4 *)(param_2 + 0x18));
    puVar6 = PTR_strlen_00613f4c;
    if ((iVar2 == 0) && (DAT_00615650 < 100)) {
      puVar9 = *(undefined1 **)(param_2 + 0x1c);
      puVar9[3] = 0;
      *puVar9 = 0;
      puVar9[1] = 0;
      puVar9[2] = 0;
      local_2c = PTR_s_Pair_Setup_Encrypt_Salt_00600a64;
      local_30 = (*(code *)puVar6)(PTR_s_Pair_Setup_Encrypt_Salt_00600a64);
      puVar6 = PTR_s_Pair_Setup_Encrypt_Info_00600a80;
      iVar2 = *(int *)(param_2 + 8);
      uVar3 = (*(code *)PTR_strlen_00613f4c)(PTR_s_Pair_Setup_Encrypt_Info_00600a80);
      (*(code *)PTR_hkdf_00613044)
                (4,local_2c,local_30,*(undefined4 *)(iVar2 + 0x48),*(undefined4 *)(iVar2 + 0x4c),
                 puVar6,uVar3,*(undefined4 *)(param_2 + 0x1c),0x20);
      local_2c = PTR_s_MFi_Pair_Setup_Salt_00600a68;
      local_30 = (*(code *)PTR_strlen_00613f4c)(PTR_s_MFi_Pair_Setup_Salt_00600a68);
      puVar6 = PTR_s_MFi_Pair_Setup_Info_00600a84;
      iVar2 = *(int *)(param_2 + 8);
      uVar3 = (*(code *)PTR_strlen_00613f4c)(PTR_s_MFi_Pair_Setup_Info_00600a84);
      puVar10 = auStack_6a4;
      iVar2 = (*(code *)PTR_hkdf_00613044)
                        (4,local_2c,local_30,*(undefined4 *)(iVar2 + 0x48),
                         *(undefined4 *)(iVar2 + 0x4c),puVar6,uVar3,auStack_6a4,0x20);
      if (iVar2 == 0) {
        (*(code *)PTR_SHA1_Init_compat_00614984)(auStack_680);
        (*(code *)PTR_SHA1_Update_compat_00613558)(auStack_680,auStack_6a4,0x20);
        (*(code *)PTR_SHA1_Final_compat_00613764)(auStack_6b8,auStack_680);
        iVar2 = (*(code *)PTR_MFiAuthCreateSignature_00612840)
                          (auStack_6b8,0x14,&local_6d0,&local_6cc);
        if ((iVar2 == 0) &&
           (iVar2 = (*(code *)PTR_MFiAuthCopyCertificate_006146a8)(&local_6c8,&local_6c4),
           iVar2 == 0)) {
          (*(code *)PTR_SRP_respond_00614958)(*(undefined4 *)(param_2 + 0x24),param_2 + 0x2c);
          *(undefined4 *)(*(int *)(param_2 + 8) + 0x5c) =
               *(undefined4 *)(*(int *)(param_2 + 0x2c) + 4);
          uVar14 = (uint)local_6c4 / 0xff;
          if ((uint)local_6c4 % 0xff != 0) {
            uVar14 = uVar14 + 1;
          }
          puVar13 = local_6c4 + uVar14 * 2 + local_6cc + 2;
          puVar9 = (undefined1 *)(*(code *)PTR_calloc_006148c0)(puVar13,1);
          puVar6 = PTR_memcpy_00614674;
          if (puVar9 != (undefined1 *)0x0) {
            *puVar9 = 10;
            puVar9[1] = (char)local_6cc;
            (*(code *)puVar6)(puVar9 + 2,local_6d0);
            puVar12 = (undefined *)0x0;
            puVar4 = puVar9 + 2 + local_6cc;
            puVar6 = (undefined *)0xff;
            uVar3 = 9;
            while( true ) {
              puVar1 = PTR_memcpy_00614674;
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
            iVar2 = (*(code *)PTR_crypto_aead_chacha20poly1305_encrypt_00613840)
                              (auStack_620,&local_6c0,puVar9,uVar3,0,puVar13,0,puVar10,0,0,0,
                               PTR_s_PS_Msg04_00600a9c,*(undefined4 *)(param_2 + 0x1c));
            if (iVar2 != 0) goto LAB_00427884;
            (*(code *)PTR_free_0061286c)(puVar9);
            uVar8 = local_6bc;
            uVar14 = local_6c0;
            iVar2 = *(int *)(*(int *)(param_2 + 8) + 0x5c);
            lVar15 = (*(code *)PTR___umoddi3_006139e4)(local_6c0,local_6bc,0,0xff);
            if (lVar15 == 0) {
              (*(code *)PTR___udivdi3_0061294c)(uVar14,uVar8,0,0xff);
              iVar7 = extraout_v1_00;
            }
            else {
              (*(code *)PTR___udivdi3_0061294c)(uVar14,uVar8,0,0xff);
              iVar7 = extraout_v1 + 1;
            }
            iVar2 = iVar2 + 5 + uVar8 + iVar7 * 2;
            puVar9 = (undefined1 *)(*(code *)PTR_calloc_006148c0)(iVar2,1);
            if (puVar9 != (undefined1 *)0x0) {
              *puVar9 = 6;
              puVar9[1] = 1;
              puVar9[3] = 4;
              puVar9[2] = 4;
              puVar6 = PTR_memcpy_00614674;
              iVar7 = *(int *)(param_2 + 8);
              uVar14 = 0;
              puVar9[4] = (char)*(undefined4 *)(iVar7 + 0x5c);
              (*(code *)puVar6)(puVar9 + 5,**(undefined4 **)(param_2 + 0x2c),
                                *(undefined4 *)(iVar7 + 0x5c));
              puVar10 = puVar9 + 5 + *(int *)(*(int *)(param_2 + 8) + 0x5c);
              while( true ) {
                puVar6 = PTR_memcpy_00614674;
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
              DAT_00600a50 = 5;
              goto LAB_004277e0;
            }
          }
          goto LAB_00427878;
        }
      }
      puVar9 = (undefined1 *)0x0;
      goto LAB_00427884;
    }
    bVar5 = DAT_00615650 + 1;
    if ((DAT_00615650 < 100) && (DAT_00615650 = bVar5, (uint)bVar5 % 3 == 0)) {
      (*(code *)PTR_sleep_0061454c)(3);
    }
    puVar9 = (undefined1 *)(*(code *)PTR_calloc_006148c0)(6,1);
    if (puVar9 != (undefined1 *)0x0) {
      *puVar9 = 6;
      puVar9[2] = 4;
      puVar9[3] = 7;
      puVar9[4] = 1;
      puVar9[5] = 2;
      puVar9[1] = 1;
      DAT_00600a50 = 1;
      iVar2 = 6;
LAB_004277e0:
      (*(code *)PTR_CreateSimpleHTTPMessageNoCopy_006131a4)
                ("application/pairing+tlv8",iVar2,&local_6d8,&local_6d4);
      unaff_s1 = (*(code *)PTR_calloc_006148c0)(iVar2 + local_6d4,1);
      (*(code *)PTR_memcpy_00614674)(unaff_s1,local_6d8,local_6d4);
      (*(code *)PTR_memcpy_00614674)(unaff_s1 + local_6d4,puVar9,iVar2);
      iVar2 = (*(code *)PTR_SocketSend_00612dcc)(param_1,unaff_s1,iVar2 + local_6d4);
      goto LAB_00427884;
    }
  }
LAB_00427878:
  iVar2 = -0x1a48;
LAB_00427884:
  (*(code *)PTR_SRP_free_00612de4)(*(undefined4 *)(param_2 + 0x24));
  (*(code *)PTR_cstr_free_00613448)(*(undefined4 *)(param_2 + 0x2c));
  if (local_6c8 != 0) {
    (*(code *)PTR_free_0061286c)();
  }
  if (local_6d0 != 0) {
    (*(code *)PTR_free_0061286c)();
  }
  if (unaff_s1 != 0) {
    (*(code *)PTR_free_0061286c)(unaff_s1);
  }
  if (puVar9 != (undefined1 *)0x0) {
    (*(code *)PTR_free_0061286c)(puVar9);
  }
  if (local_6d8 != 0) {
    (*(code *)PTR_free_0061286c)();
  }
  return iVar2;
}


/* FUN_00427980 @ 00427980 */

int FUN_00427980(int param_1,int param_2,undefined4 param_3,int param_4)

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
LAB_00427ad0:
  iVar3 = (*(code *)PTR_TLVGetNext_00613da4)
                    (local_3c4,local_48,local_3c8,&local_3c0,local_44,&local_3c4);
  puVar1 = PTR_strlen_00613f4c;
  if (iVar3 == 0) {
    if (local_3c8[0] == '\x05') {
      iVar9 = (*(code *)PTR_calloc_006148c0)(local_3bc,1);
      if (iVar9 == 0) {
        return -0x1a48;
      }
      (*(code *)PTR_memcpy_00614674)(iVar9,local_3c0,local_3bc);
      unaff_s0 = local_3bc;
    }
    else if (local_3c8[0] == '\x06') {
      pbVar2 = (byte *)(*(code *)PTR_calloc_006148c0)(local_3bc,1);
      if (pbVar2 == (byte *)0x0) {
        iVar3 = -0x1a48;
      }
      else {
        local_30 = pbVar2;
        (*(code *)PTR_memcpy_00614674)(pbVar2,local_3c0,local_3bc);
        if (DAT_00600a50 == *local_30) {
          (*(code *)PTR_free_0061286c)(local_30);
          goto LAB_00427ad0;
        }
        iVar3 = -0x1a51;
      }
      puVar4 = (undefined1 *)0x0;
      goto LAB_00427eac;
    }
    goto LAB_00427ad0;
  }
  puVar4 = *(undefined1 **)(param_2 + 0x1c);
  puVar4[3] = 0;
  *puVar4 = 0;
  puVar4[1] = 0;
  puVar4[2] = 0;
  puVar4 = (undefined1 *)0x0;
  local_2c = PTR_s_Pair_Setup_Encrypt_Salt_00600a64;
  local_30 = (byte *)(*(code *)puVar1)(PTR_s_Pair_Setup_Encrypt_Salt_00600a64);
  puVar1 = PTR_s_Pair_Setup_Encrypt_Info_00600a80;
  iVar3 = *(int *)(param_2 + 8);
  uVar5 = (*(code *)PTR_strlen_00613f4c)(PTR_s_Pair_Setup_Encrypt_Info_00600a80);
  uVar7 = *(undefined4 *)(param_2 + 0x1c);
  (*(code *)PTR_hkdf_00613044)
            (4,local_2c,local_30,*(undefined4 *)(iVar3 + 0x48),*(undefined4 *)(iVar3 + 0x4c),puVar1,
             uVar5,uVar7,0x20);
  iVar3 = (*(code *)PTR_crypto_aead_chacha20poly1305_decrypt_00613a28)
                    (aiStack_24c,auStack_3b8,0,iVar9,0,unaff_s0,0,uVar7,0,0,PTR_s_PS_Msg05_00600aa0,
                     *(undefined4 *)(param_2 + 0x1c));
  if (iVar3 == 0) {
    puVar4 = (undefined1 *)(*(code *)PTR_calloc_006148c0)(1,0xa1);
    iVar3 = -0x1a48;
    if (puVar4 != (undefined1 *)0x0) {
      iVar3 = (*(code *)PTR_Phytrex_HMReadPairList_006136d4)(puVar4,0);
      if (iVar3 == -0x1a48) {
        local_44 = (int *)((int)aiStack_24c + local_3b4);
        local_48 = auStack_3b0;
        local_38 = &local_3c4;
        local_3c4 = aiStack_24c;
        local_40 = &local_3c0;
        local_3c = &local_3bc;
        local_34 = local_3c8;
LAB_00427d18:
        iVar6 = (*(code *)PTR_TLVGetNext_00613da4)
                          (local_3c4,local_44,local_34,local_40,local_3c,local_38);
        if (iVar6 == 0) {
          if (local_3c8[0] == '\x03') {
            iVar6 = 0x20;
            puVar8 = puVar4 + 0x40;
            if (local_3bc == 0x20) goto LAB_00427d0c;
          }
          else {
            if (local_3c8[0] != '\n') goto code_r0x00427c88;
            if (local_3bc == 0x40) {
              (*(code *)PTR_memset_006130cc)(local_48,0,100);
              puVar8 = local_48;
              iVar6 = local_3bc;
              goto LAB_00427d0c;
            }
          }
        }
        else {
          local_2c = PTR_s_Pair_Setup_Controller_Sign_Salt_00600a70;
          local_30 = (byte *)(*(code *)PTR_strlen_00613f4c)
                                       (PTR_s_Pair_Setup_Controller_Sign_Salt_00600a70);
          puVar1 = PTR_s_Pair_Setup_Controller_Sign_Info_00600a8c;
          iVar3 = *(int *)(param_2 + 8);
          uVar5 = (*(code *)PTR_strlen_00613f4c)(PTR_s_Pair_Setup_Controller_Sign_Info_00600a8c);
          (*(code *)PTR_hkdf_00613044)
                    (4,local_2c,local_30,*(undefined4 *)(iVar3 + 0x48),*(undefined4 *)(iVar3 + 0x4c)
                     ,puVar1,uVar5,*(undefined4 *)(param_2 + 0x1c),0x20);
          (*(code *)PTR_memcpy_00614674)(auStack_34c,*(undefined4 *)(param_2 + 0x1c),0x20);
          uVar5 = (*(code *)PTR_strlen_00613f4c)(puVar4);
          (*(code *)PTR_memcpy_00614674)(auStack_32c,puVar4,uVar5);
          iVar3 = (*(code *)PTR_strlen_00613f4c)(puVar4);
          (*(code *)PTR_memcpy_00614674)(auStack_34c + iVar3 + 0x20,puVar4 + 0x40,0x20);
          iVar3 = (*(code *)PTR_crypto_sign_ed25519_verify_detached_00613b78)
                            (auStack_3b0,auStack_34c,0,iVar3 + 0x40,puVar4 + 0x40);
          puVar1 = PTR_Phytrex_HMUpdatePairList_00613310;
          if (iVar3 == 0) {
            puVar4[0x60] = 1;
            iVar3 = (*(code *)puVar1)(puVar4,0);
            *(undefined1 *)(param_4 + 4) = 1;
            DAT_00600a50 = 6;
          }
        }
      }
    }
  }
LAB_00427eac:
  if (iVar9 != 0) {
    (*(code *)PTR_free_0061286c)(iVar9);
  }
  if (puVar4 != (undefined1 *)0x0) {
    (*(code *)PTR_free_0061286c)(puVar4);
  }
  return iVar3;
code_r0x00427c88:
  if (local_3c8[0] == '\x01') {
    (*(code *)PTR_memset_006130cc)(puVar4,0,0x50);
    puVar8 = puVar4;
    iVar6 = local_3bc;
LAB_00427d0c:
    (*(code *)PTR_memcpy_00614674)(puVar8,local_3c0,iVar6);
  }
  goto LAB_00427d18;
}


/* FUN_00427f14 @ 00427f14 */

int FUN_00427f14(undefined4 param_1,int *param_2,int param_3)

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
  (*(code *)PTR_memset_006130cc)(auStack_24c,0,100);
  if (*(char *)(*param_2 + 0x20) == '\0') {
    if (*(char *)(param_3 + 0xbc) == '\0') {
      iVar5 = (*(code *)PTR_crypto_sign_keypair_006127ec)(auStack_498,param_3 + 0xbd);
      if (iVar5 == 0) goto LAB_00428020;
    }
    else {
      (*(code *)PTR_memcpy_00614674)(auStack_498,param_3 + 0xdd,0x20);
LAB_00428020:
      uVar3 = (*(code *)PTR_Phytrex_HMGetAccessoryName_00613728)();
      local_30 = PTR_s_Pair_Setup_Accessory_Sign_Salt_00600a74;
      local_38 = (*(code *)PTR_strlen_00613f4c)(PTR_s_Pair_Setup_Accessory_Sign_Salt_00600a74);
      puVar1 = PTR_s_Pair_Setup_Accessory_Sign_Info_00600a90;
      iVar5 = *param_2;
      iVar7 = *(int *)(iVar5 + 8);
      uVar4 = (*(code *)PTR_strlen_00613f4c)(PTR_s_Pair_Setup_Accessory_Sign_Info_00600a90);
      iVar5 = (*(code *)PTR_hkdf_00613044)
                        (4,local_30,local_38,*(undefined4 *)(iVar7 + 0x48),
                         *(undefined4 *)(iVar7 + 0x4c),puVar1,uVar4,*(undefined4 *)(iVar5 + 0x1c),
                         0x20);
      if (iVar5 == 0) {
        (*(code *)PTR_memcpy_00614674)(auStack_478,*(undefined4 *)(*param_2 + 0x1c),0x20);
        local_48 = auStack_498;
        uVar4 = (*(code *)PTR_strlen_00613f4c)(uVar3);
        (*(code *)PTR_memcpy_00614674)(auStack_458,uVar3,uVar4);
        local_44 = auStack_378;
        iVar5 = (*(code *)PTR_strlen_00613f4c)(uVar3);
        (*(code *)PTR_memcpy_00614674)(auStack_478 + iVar5 + 0x20,local_48,0x20);
        iVar5 = (*(code *)PTR_crypto_sign_detached_00612830)(local_44,&local_4a0,auStack_478);
        if ((iVar5 == 0) && (local_4a0 == 0)) {
          local_40 = local_49c;
          puVar2 = (undefined1 *)0x0;
          if (local_49c == 0x40) {
            iVar5 = (*(code *)PTR_strlen_00613f4c)(uVar3);
            puVar2 = (undefined1 *)(*(code *)PTR_calloc_006148c0)(iVar5 + 0x66,1);
            puVar1 = PTR_strlen_00613f4c;
            if (puVar2 != (undefined1 *)0x0) {
              *puVar2 = 1;
              uVar6 = (*(code *)puVar1)(uVar3);
              puVar2[1] = uVar6;
              iVar5 = -0x1a31;
              uVar4 = (*(code *)PTR_strlen_00613f4c)(uVar3);
              local_34 = puVar2 + 2;
              (*(code *)PTR_memcpy_00614674)(local_34,uVar3,uVar4);
              iVar7 = (*(code *)PTR_strlen_00613f4c)(uVar3);
              puVar8 = local_34 + iVar7;
              *puVar8 = 3;
              puVar1 = PTR_memcpy_00614674;
              puVar8[1] = 0x20;
              (*(code *)puVar1)(puVar8 + 2,local_48,0x20);
              puVar8[0x22] = 10;
              puVar1 = PTR_memcpy_00614674;
              puVar8[0x23] = (char)local_40;
              (*(code *)puVar1)(puVar8 + 0x24,local_44,local_49c);
              local_30 = PTR_s_Pair_Setup_Encrypt_Salt_00600a64;
              local_38 = (*(code *)PTR_strlen_00613f4c)(PTR_s_Pair_Setup_Encrypt_Salt_00600a64);
              iVar7 = *param_2;
              local_3c = *(int *)(iVar7 + 8);
              local_34 = PTR_s_Pair_Setup_Encrypt_Info_00600a80;
              uVar3 = (*(code *)PTR_strlen_00613f4c)(PTR_s_Pair_Setup_Encrypt_Info_00600a80);
              (*(code *)PTR_hkdf_00613044)
                        (4,local_30,local_38,*(undefined4 *)(local_3c + 0x48),
                         *(undefined4 *)(local_3c + 0x4c),local_34,uVar3,
                         *(undefined4 *)(iVar7 + 0x1c),0x20);
              if (*(int *)(*param_2 + 0x1c) == 0) goto LAB_00428574;
              iVar5 = (*(code *)PTR_crypto_aead_chacha20poly1305_encrypt_00613840)
                                (auStack_24c,auStack_4a8,puVar2);
              if (iVar5 != 0) goto LAB_00428574;
              (*(code *)PTR_free_0061286c)(puVar2);
              iVar7 = local_4a4 + 5;
              puVar2 = (undefined1 *)(*(code *)PTR_calloc_006148c0)(iVar7,1);
              if (puVar2 != (undefined1 *)0x0) {
                puVar2[1] = 1;
                puVar2[2] = 6;
                puVar2[3] = 5;
                *puVar2 = 6;
                puVar1 = PTR_memcpy_00614674;
                puVar2[4] = (char)local_4a4;
                (*(code *)puVar1)(puVar2 + 5,auStack_24c);
                goto LAB_00428400;
              }
            }
          }
        }
        else {
          puVar2 = (undefined1 *)0x0;
        }
        goto LAB_00428570;
      }
    }
    puVar2 = (undefined1 *)0x0;
  }
  else {
    puVar2 = (undefined1 *)(*(code *)PTR_calloc_006148c0)(6,1);
    if (puVar2 != (undefined1 *)0x0) {
      puVar2[3] = 7;
      puVar2[2] = 6;
      puVar2[4] = 1;
      puVar2[5] = 4;
      *puVar2 = 6;
      puVar2[1] = 1;
      iVar7 = 6;
LAB_00428400:
      DAT_00600a50 = 1;
      iVar5 = (*(code *)PTR_CreateSimpleHTTPMessageNoCopy_006131a4)
                        ("application/pairing+tlv8",iVar7,&local_4b0,&local_4ac);
      if (iVar5 == 0) {
        unaff_s5 = (*(code *)PTR_calloc_006148c0)(iVar7 + local_4ac,1);
        (*(code *)PTR_memcpy_00614674)(unaff_s5,local_4b0,local_4ac);
        (*(code *)PTR_memcpy_00614674)(unaff_s5 + local_4ac,puVar2,iVar7);
        iVar5 = (*(code *)PTR_SocketSend_00612dcc)(param_1,unaff_s5,iVar7 + local_4ac);
        puVar1 = PTR_Phytrex_HMSaveAppConfig_00613c3c;
        if (iVar5 == 0) {
          if (*(char *)(*param_2 + 0x20) == '\0') {
            *(undefined1 *)(param_3 + 0xbc) = 1;
            (*(code *)puVar1)(param_3 + 0xbc);
            (*(code *)PTR_Phytrex_HMSavePairList_00612ccc)();
            iVar7 = (*(code *)PTR_Phytrex_HMPairListIsEmpty_00614aa0)();
            if (iVar7 == 0) {
              (*(code *)PTR_mdnsPhytrex_HomekitUpdate_00612f60)(&DAT_005ac3f4,"1");
            }
            else {
              (*(code *)PTR_mdnsPhytrex_HomekitUpdate_00612f60)(&DAT_005ac3f4,"0");
              DAT_00615650 = 0;
            }
          }
          DAT_00600a50 = 1;
          HKCleanPairSetupInfo(param_2,param_3);
          *(undefined1 *)(param_3 + 0x110) = 0;
        }
      }
      goto LAB_00428574;
    }
LAB_00428570:
    iVar5 = -0x1a48;
  }
LAB_00428574:
  if (unaff_s5 != 0) {
    (*(code *)PTR_free_0061286c)(unaff_s5);
  }
  if (puVar2 != (undefined1 *)0x0) {
    (*(code *)PTR_free_0061286c)(puVar2);
  }
  if (local_4b0 != 0) {
    (*(code *)PTR_free_0061286c)();
  }
  return iVar5;
}


/* HKPairSetupEngine @ 00428600 */

/* WARNING: Removing unreachable block (ram,0x00428dc4) */
/* WARNING: Removing unreachable block (ram,0x00428ca0) */
/* WARNING: Removing unreachable block (ram,0x00428c78) */
/* WARNING: Removing unreachable block (ram,0x00428d3c) */
/* WARNING: Removing unreachable block (ram,0x00428dec) */

int HKPairSetupEngine(undefined4 param_1,int param_2,int *param_3,int param_4,undefined4 param_5)

{
  bool bVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined1 *puVar7;
  int iVar8;
  int iVar9;
  undefined1 *puVar10;
  code *pcVar11;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int *local_34;
  int *local_30;
  byte *local_2c;
  
  if ((*(char *)(param_4 + 0x110) != '\0') &&
     (((char *)*param_3 == (char *)0x0 || (*(char *)*param_3 == '\0')))) {
    (*(code *)PTR_sleep_0061454c)(2);
    local_48 = 0;
    local_3c = 0;
    puVar3 = (undefined1 *)(*(code *)PTR_calloc_006148c0)(6,1);
    puVar2 = PTR_CreateSimpleHTTPMessageNoCopy_006131a4;
    if (puVar3 == (undefined1 *)0x0) {
      local_2c = (byte *)0xffffe5b8;
      iVar8 = 0;
    }
    else {
      *puVar3 = 6;
      puVar3[2] = 2;
      puVar3[4] = 1;
      puVar3[5] = 7;
      puVar3[1] = 1;
      puVar3[3] = 7;
      local_2c = (byte *)(*(code *)puVar2)("application/pairing+tlv8",6,&local_48,&local_3c);
      iVar8 = 0;
      if (local_2c == (byte *)0x0) {
        iVar8 = (*(code *)PTR_calloc_006148c0)(local_3c + 6,1);
        (*(code *)PTR_memcpy_00614674)(iVar8,local_48,local_3c);
        (*(code *)PTR_memcpy_00614674)(iVar8 + local_3c,puVar3,6);
        local_2c = (byte *)(*(code *)PTR_SocketSend_00612dcc)(param_1,iVar8,local_3c + 6);
      }
      (*(code *)PTR_free_0061286c)(puVar3);
    }
    if (local_48 != 0) {
      (*(code *)PTR_free_0061286c)();
    }
    if (iVar8 != 0) {
      (*(code *)PTR_free_0061286c)(iVar8);
    }
    iVar5 = (int)local_2c;
    if (local_2c == (byte *)0x0) {
      return 0;
    }
    goto LAB_004291e8;
  }
  if (DAT_00600a50 == 3) {
    local_44 = *(int *)(param_2 + 0x104);
    iVar8 = *param_3;
    local_30 = &local_48;
    local_38 = local_44 + *(int *)(param_2 + 0x10c);
    local_34 = &local_40;
    while (iVar5 = (*(code *)PTR_TLVGetNext_00613da4)
                             (local_44,local_38,local_30,local_34,&local_3c,&local_44), iVar5 == 0)
    {
      if (local_48._0_1_ == '\x04') {
        if (*(int *)(iVar8 + 0x14) == 0) {
          iVar5 = (*(code *)PTR_calloc_006148c0)(local_3c,1);
          *(int *)(iVar8 + 0x14) = iVar5;
          if (iVar5 == 0) goto LAB_0042924c;
          (*(code *)PTR_memcpy_00614674)(iVar5,local_40,local_3c);
          *(int *)(iVar8 + 0x18) = local_3c;
        }
        else {
          iVar5 = (*(code *)PTR_realloc_00614534)
                            (*(int *)(iVar8 + 0x14),*(int *)(iVar8 + 0x18) + local_3c);
          *(int *)(iVar8 + 0x14) = iVar5;
          if (iVar5 == 0) goto LAB_0042924c;
          (*(code *)PTR_memcpy_00614674)(iVar5 + *(int *)(iVar8 + 0x18),local_40,local_3c);
          *(int *)(iVar8 + 0x18) = *(int *)(iVar8 + 0x18) + local_3c;
        }
      }
      else if (local_48._0_1_ == '\x06') {
        local_2c = (byte *)(*(code *)PTR_calloc_006148c0)(local_3c,1);
        if (local_2c == (byte *)0x0) goto LAB_0042924c;
        (*(code *)PTR_memcpy_00614674)(local_2c,local_40,local_3c);
        iVar5 = -0x1a51;
        if (DAT_00600a50 != *local_2c) goto LAB_00429258;
        (*(code *)PTR_free_0061286c)(local_2c);
      }
      else if (local_48._0_1_ == '\x03') {
        if (*(int *)(iVar8 + 0xc) == 0) {
          iVar5 = (*(code *)PTR_calloc_006148c0)(local_3c,1);
          *(int *)(iVar8 + 0xc) = iVar5;
          if (iVar5 == 0) goto LAB_0042924c;
          (*(code *)PTR_memcpy_00614674)(iVar5,local_40,local_3c);
          *(int *)(iVar8 + 0x10) = local_3c;
        }
        else {
          iVar5 = (*(code *)PTR_realloc_00614534)
                            (*(int *)(iVar8 + 0xc),*(int *)(iVar8 + 0x10) + local_3c);
          *(int *)(iVar8 + 0xc) = iVar5;
          if (iVar5 == 0) goto LAB_0042924c;
          (*(code *)PTR_memcpy_00614674)(iVar5 + *(int *)(iVar8 + 0x10),local_40,local_3c);
          *(int *)(iVar8 + 0x10) = *(int *)(iVar8 + 0x10) + local_3c;
        }
      }
    }
    DAT_00600a50 = 4;
    iVar5 = FUN_00427150(param_1,*param_3,param_4);
LAB_004291d0:
    if (iVar5 == 0) {
      return 0;
    }
  }
  else {
    if (DAT_00600a50 != 5) {
      if (DAT_00600a50 != 1) {
        return 0;
      }
      local_3c = *(int *)(param_2 + 0x104);
      local_38 = local_3c + *(int *)(param_2 + 0x10c);
      HKCleanPairSetupInfo(param_3,param_4);
      if (*param_3 == 0) {
        iVar8 = (*(code *)PTR_calloc_006148c0)(1,0x30);
        *param_3 = iVar8;
        if (iVar8 != 0) goto LAB_00428830;
LAB_0042924c:
        iVar5 = -0x1a48;
      }
      else {
LAB_00428830:
        *(undefined1 *)*param_3 = 1;
        *(undefined1 *)(param_4 + 0x110) = 1;
        while (iVar8 = (*(code *)PTR_TLVGetNext_00613da4)
                                 (local_3c,local_38,&local_48,&local_44,&local_40,&local_3c),
              iVar8 == 0) {
          local_2c = (byte *)(*(code *)PTR_calloc_006148c0)(local_40 + 1,1);
          if (local_2c == (byte *)0x0) goto LAB_0042924c;
          (*(code *)PTR_memcpy_00614674)(local_2c,local_44,local_40);
          if (((local_48._0_1_ != '\0') && (local_48._0_1_ == '\x06')) &&
             (iVar5 = -0x1a51, DAT_00600a50 != *local_2c)) goto LAB_00429258;
          (*(code *)PTR_free_0061286c)(local_2c);
        }
        DAT_00600a50 = 2;
        iVar8 = *param_3;
        local_40 = 0;
        local_44 = 0;
        if (*(int *)(iVar8 + 8) == 0) {
          uVar4 = (*(code *)PTR_calloc_006148c0)(1,0x60);
          *(undefined4 *)(iVar8 + 8) = uVar4;
        }
        iVar5 = (*(code *)PTR_Phytrex_HMPairListIsEmpty_00614aa0)();
        if (iVar5 == 0) {
          if (DAT_00615650 < 100) {
            **(undefined4 **)(iVar8 + 8) = 4;
            iVar9 = *(int *)(iVar8 + 8);
            iVar5 = (*(code *)PTR_strlen_00613f4c)(PTR_s_Pair_Setup_00600a60);
            uVar4 = (*(code *)PTR_calloc_006148c0)(iVar5 + 2,1);
            *(undefined4 *)(iVar9 + 0x24) = uVar4;
            iVar5 = (*(code *)PTR_strlen_00613f4c)(PTR_s_Pair_Setup_00600a60);
            (*(code *)PTR_memset_006130cc)(*(undefined4 *)(*(int *)(iVar8 + 8) + 0x24),0,iVar5 + 2);
            (*(code *)PTR_strcpy_00612464)
                      (*(undefined4 *)(*(int *)(iVar8 + 8) + 0x24),PTR_s_Pair_Setup_00600a60);
            *(undefined4 *)(*(int *)(iVar8 + 8) + 0x2c) = 0x10;
            iVar5 = *(int *)(iVar8 + 8);
            uVar4 = (*(code *)PTR_calloc_006148c0)(*(undefined4 *)(iVar5 + 0x2c),1);
            *(undefined4 *)(iVar5 + 0x28) = uVar4;
            (*(code *)PTR_t_random_006124fc)
                      (*(undefined4 *)(*(int *)(iVar8 + 8) + 0x28),
                       *(undefined4 *)(*(int *)(iVar8 + 8) + 0x2c));
            (*(code *)PTR_SRP_initialize_library_006129f0)();
            *(undefined4 *)(*(int *)(iVar8 + 8) + 0x18) = 0x180;
            *(undefined **)(*(int *)(iVar8 + 8) + 0x14) = &DAT_005aceb0;
            puVar2 = PTR_SRP6a_server_method_0061353c;
            *(undefined4 *)(*(int *)(iVar8 + 8) + 0x20) = 1;
            *(undefined **)(*(int *)(iVar8 + 8) + 0x1c) = &DAT_005ad030;
            uVar4 = (*(code *)puVar2)();
            uVar4 = (*(code *)PTR_SRP_new_00612c6c)(uVar4);
            *(undefined4 *)(iVar8 + 0x24) = uVar4;
            (*(code *)PTR_SRP_set_username_00612f68)
                      (uVar4,*(undefined4 *)(*(int *)(iVar8 + 8) + 0x24));
            iVar5 = *(int *)(iVar8 + 8);
            (*(code *)PTR_SRP_set_params_00613cb0)
                      (*(undefined4 *)(iVar8 + 0x24),*(undefined4 *)(iVar5 + 0x14),
                       *(undefined4 *)(iVar5 + 0x18),*(undefined4 *)(iVar5 + 0x1c),
                       *(undefined4 *)(iVar5 + 0x20),*(undefined4 *)(iVar5 + 0x28),
                       *(undefined4 *)(iVar5 + 0x2c));
            (*(code *)PTR_SRP_set_auth_password_00612e80)
                      (*(undefined4 *)(iVar8 + 0x24),DAT_00615654);
            (*(code *)PTR_SRP_gen_pub_00613df0)(*(undefined4 *)(iVar8 + 0x24),iVar8 + 0x28);
            puVar2 = PTR_calloc_006148c0;
            *(undefined4 *)(*(int *)(iVar8 + 8) + 0x34) =
                 *(undefined4 *)(*(int *)(iVar8 + 0x28) + 4);
            iVar5 = *(int *)(iVar8 + 8);
            uVar4 = (*(code *)puVar2)(*(undefined4 *)(iVar5 + 0x34),1);
            *(undefined4 *)(iVar5 + 0x30) = uVar4;
            (*(code *)PTR_memcpy_00614674)
                      (*(undefined4 *)(*(int *)(iVar8 + 8) + 0x30),**(undefined4 **)(iVar8 + 0x28),
                       *(undefined4 *)(*(int *)(iVar8 + 8) + 0x34));
            iVar9 = *(int *)(*(int *)(iVar8 + 8) + 0x34);
            iVar5 = 3;
            iVar6 = iVar9 / 0xff;
            while (bVar1 = 0 < iVar6, iVar6 = iVar6 + -1, bVar1) {
              iVar5 = iVar5 + 0x101;
            }
            iVar5 = *(int *)(*(int *)(iVar8 + 8) + 0x2c) + 4 + iVar9 % 0xff + iVar5;
            puVar3 = (undefined1 *)(*(code *)PTR_calloc_006148c0)(iVar5,1);
            if (puVar3 != (undefined1 *)0x0) {
              *puVar3 = 6;
              puVar3[1] = 1;
              puVar3[3] = 2;
              puVar3[2] = 2;
              puVar2 = PTR_memcpy_00614674;
              puVar3[4] = (char)*(undefined4 *)(*(int *)(iVar8 + 8) + 0x2c);
              (*(code *)puVar2)(puVar3 + 5,*(undefined4 *)(*(int *)(iVar8 + 8) + 0x28),
                                *(undefined4 *)(*(int *)(iVar8 + 8) + 0x2c));
              iVar6 = *(int *)(*(int *)(iVar8 + 8) + 0x34) / 0xff;
              puVar10 = puVar3 + 5 + *(int *)(*(int *)(iVar8 + 8) + 0x2c);
              for (iVar9 = 0; puVar2 = PTR_memcpy_00614674, puVar7 = puVar10 + 2, iVar9 < iVar6;
                  iVar9 = iVar9 + 1) {
                *puVar10 = 3;
                puVar10[1] = 0xff;
                puVar10 = puVar10 + 0x101;
                (*(code *)puVar2)(puVar7,*(int *)(*(int *)(iVar8 + 8) + 0x30) + iVar9 * 0xff,0xff);
              }
              *puVar10 = 3;
              puVar10[1] = (char)(*(int *)(*(int *)(iVar8 + 8) + 0x34) % 0xff);
              (*(code *)puVar2)(puVar7,*(int *)(*(int *)(iVar8 + 8) + 0x30) + iVar6 * 0xff,
                                *(int *)(*(int *)(iVar8 + 8) + 0x34) % 0xff);
              iVar6 = (*(code *)PTR_CreateSimpleHTTPMessageNoCopy_006131a4)
                                ("application/pairing+tlv8",iVar5,&local_40,&local_44);
              iVar9 = 0;
              if (iVar6 == 0) goto LAB_00428e28;
              goto LAB_00428eb0;
            }
          }
          else {
            puVar3 = (undefined1 *)(*(code *)PTR_calloc_006148c0)(6,1);
            if (puVar3 != (undefined1 *)0x0) {
              *puVar3 = 6;
              puVar3[2] = 2;
              pcVar11 = (code *)PTR_CreateHTTPRespondMessageNoCopy_00613b88;
              puVar3[3] = 7;
              puVar3[4] = 1;
              puVar3[5] = 5;
              goto LAB_004289fc;
            }
          }
LAB_00428ea8:
          iVar9 = 0;
          iVar6 = -0x1a48;
        }
        else {
          puVar3 = (undefined1 *)(*(code *)PTR_calloc_006148c0)(6,1);
          if (puVar3 == (undefined1 *)0x0) goto LAB_00428ea8;
          puVar3[2] = 2;
          pcVar11 = (code *)PTR_CreateHTTPRespondMessageNoCopy_00613b88;
          puVar3[3] = 7;
          puVar3[4] = 1;
          puVar3[5] = 6;
          *puVar3 = 6;
LAB_004289fc:
          puVar3[1] = 1;
          iVar6 = (*pcVar11)(0x1ad,"application/pairing+tlv8",6,&local_40,&local_44);
          iVar9 = 0;
          if (iVar6 == 0) {
            iVar5 = 6;
LAB_00428e28:
            iVar9 = (*(code *)PTR_calloc_006148c0)(iVar5 + local_44,1);
            (*(code *)PTR_memcpy_00614674)(iVar9,local_40,local_44);
            (*(code *)PTR_memcpy_00614674)(iVar9 + local_44,puVar3,iVar5);
            iVar6 = (*(code *)PTR_SocketSend_00612dcc)(param_1,iVar9,iVar5 + local_44);
            if (iVar6 == 0) {
              DAT_00600a50 = 3;
            }
          }
        }
LAB_00428eb0:
        local_2c = (byte *)iVar6;
        if (*(int *)(iVar8 + 0x28) != 0) {
          (*(code *)PTR_cstr_free_00613448)();
        }
        if (puVar3 != (undefined1 *)0x0) {
          (*(code *)PTR_free_0061286c)(puVar3);
        }
        if (local_40 != 0) {
          (*(code *)PTR_free_0061286c)();
        }
        if (iVar9 != 0) {
          (*(code *)PTR_free_0061286c)(iVar9);
        }
        iVar5 = (int)local_2c;
        if (local_2c == (byte *)0x0) {
          return 0;
        }
      }
LAB_00429258:
      DAT_00600a50 = 1;
      goto LAB_004291e8;
    }
    iVar5 = FUN_00427980(param_2,*param_3,param_4,param_5);
    if (iVar5 == 0) {
      iVar5 = FUN_00427f14(param_1,param_3,param_4);
      goto LAB_004291d0;
    }
  }
  DAT_00600a50 = 1;
LAB_004291e8:
  local_2c = (byte *)iVar5;
  HKCleanPairSetupInfo(param_3,param_4);
  return (int)local_2c;
}


/* TLVGetNext @ 00429260 */

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


/* FUN_004292c0 @ 004292c0 */

void FUN_004292c0(void)

{
  if (DAT_00615660 != 0) {
    (*(code *)PTR_free_0061286c)();
    DAT_00615660 = 0;
  }
  DAT_00615664 = 0;
  return;
}


/* FUN_00429318 @ 00429318 */

undefined4 FUN_00429318(void)

{
  longlong lVar1;
  int local_10;
  int local_c;
  
  (*(code *)PTR_clock_gettime_006147a0)(0,&local_10);
  lVar1 = (*(code *)PTR___udivdi3_0061294c)(local_c >> 0x1f,local_c,0,10000000);
  return (int)((ulonglong)((longlong)local_10 * 100 + lVar1) >> 0x20);
}


/* FUN_00429394 @ 00429394 */

undefined4
FUN_00429394(undefined4 param_1,undefined1 param_2,undefined4 param_3,int param_4,int param_5,
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
  lVar7 = FUN_00429318();
  if (DAT_00615668 == 0 && DAT_0061566c == 0) {
    DAT_0061566c = 100;
    DAT_00615668 = 0;
  }
  lVar7 = lVar7 + CONCAT44(DAT_00615668,DAT_0061566c);
  uVar6 = (uint)lVar7;
  uVar5 = (uint)((ulonglong)lVar7 >> 0x20);
  if (param_5 == 0) {
    (&stack0xffffffc8)[iVar1] = local_res4[0];
    (*(code *)PTR_memcpy_00614674)(&stack0xffffffc9 + iVar1,param_3,param_4);
    iVar4 = 1;
    while (iVar2 = (*(code *)PTR_write_00613734)(param_1,&stack0xffffffc8 + iVar1,param_4 + 1),
          iVar2 != param_4 + 1) {
      (*(code *)PTR_usleep_00614684)(5000);
      uVar8 = FUN_00429318();
      uVar3 = (uint)((ulonglong)uVar8 >> 0x20);
      if ((uVar5 <= uVar3) && ((uVar5 != uVar3 || (uVar6 <= (uint)uVar8)))) goto LAB_004295a0;
      iVar4 = iVar4 + 1;
    }
  }
  else {
    iVar4 = 1;
    while (iVar1 = (*(code *)PTR_write_00613734)(param_1,local_res4,1), iVar1 != 1) {
      (*(code *)PTR_usleep_00614684)(5000);
      uVar8 = FUN_00429318();
      uVar3 = (uint)((ulonglong)uVar8 >> 0x20);
      if ((uVar5 <= uVar3) && ((uVar5 != uVar3 || (uVar6 <= (uint)uVar8)))) goto LAB_004295a0;
      iVar4 = iVar4 + 1;
    }
    iVar4 = 1;
    while (iVar1 = (*(code *)PTR_read_00613d88)(param_1,param_5,param_6), iVar1 != param_6) {
      (*(code *)PTR_usleep_00614684)(5000);
      uVar8 = FUN_00429318();
      uVar3 = (uint)((ulonglong)uVar8 >> 0x20);
      if ((uVar5 <= uVar3) && ((uVar5 != uVar3 || (uVar6 <= (uint)uVar8)))) {
LAB_004295a0:
        (*(code *)PTR_printf_006126e8)
                  ("### MFi auth register 0x%02X failed after %d tries: %d\n",local_res4[0],iVar4,
                   0xffffe5d4);
        return 0xffffe5d4;
      }
      iVar4 = iVar4 + 1;
    }
  }
  return 0;
}


/* MFiAuthCopyCertificate @ 004295fc */

int MFiAuthCopyCertificate(int *param_1,uint *param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  ushort local_28 [6];
  
  if (DAT_00615664 == 0) {
    iVar1 = (*(code *)PTR_open_0061479c)("/dev/mfi_cp",2);
    if (iVar1 < 0) {
      piVar2 = (int *)(*(code *)PTR___errno_location_00614824)();
      iVar5 = *piVar2;
      if (iVar5 == 0) {
        iVar5 = -0x1a2c;
      }
    }
    else {
      iVar5 = FUN_00429394(iVar1,0x30,0,0,local_28,2);
      if (iVar5 == 0) {
        uVar4 = (uint)local_28[0];
        iVar5 = -0x1a57;
        if (uVar4 != 0) {
          iVar5 = -0x1a48;
          iVar3 = (*(code *)PTR_malloc_00614174)(uVar4);
          if (iVar3 != 0) {
            iVar5 = FUN_00429394(iVar1,0x31,0,0,iVar3,uVar4);
            if (iVar5 == 0) {
              (*(code *)PTR_printf_006126e8)("MFi auth copy certificate done: %d bytes\n",uVar4);
              *param_1 = iVar3;
              *param_2 = uVar4;
            }
            else {
              (*(code *)PTR_free_0061286c)(iVar3);
            }
          }
        }
      }
      (*(code *)PTR_close_00613604)(iVar1);
      if (iVar5 == 0) {
        return 0;
      }
    }
  }
  else {
    iVar1 = (*(code *)PTR_malloc_00614174)(DAT_00615664);
    if (iVar1 != 0) {
      (*(code *)PTR_memcpy_00614674)(iVar1,DAT_00615660,DAT_00615664);
      *param_1 = iVar1;
      *param_2 = DAT_00615664;
      return 0;
    }
    iVar5 = -0x1a48;
  }
  (*(code *)PTR_printf_006126e8)("### MFi auth copy certificate failed: %d\n",iVar5);
  return iVar5;
}


/* MFiAuthCreateSignature @ 00429824 */

int MFiAuthCreateSignature(undefined4 param_1,int param_2,int *param_3,uint *param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  ushort local_40;
  undefined1 auStack_3e [34];
  
  iVar1 = (*(code *)PTR_open_0061479c)("/dev/mfi_cp",2);
  if (iVar1 < 0) {
    piVar2 = (int *)(*(code *)PTR___errno_location_00614824)();
    iVar5 = *piVar2;
    if (iVar5 == 0) {
      iVar5 = -0x1a2c;
    }
  }
  else {
    if (param_2 == 0x14) {
      local_40 = 0x14;
      (*(code *)PTR_memcpy_00614674)(auStack_3e,param_1,0x14);
      iVar5 = FUN_00429394(iVar1,0x20,&local_40,0x16,0,0);
      if (iVar5 == 0) {
        local_40 = CONCAT11(1,(undefined1)local_40);
        iVar5 = FUN_00429394(iVar1,0x10,&local_40,1,0,0);
        if ((((iVar5 == 0) && (iVar5 = FUN_00429394(iVar1,0x10,0,0,&local_40,1), iVar5 == 0)) &&
            (iVar5 = -0x1a2c, -1 < (short)local_40)) &&
           (iVar5 = FUN_00429394(iVar1,0x11,0,0,&local_40,2), iVar5 == 0)) {
          uVar4 = (uint)local_40;
          iVar5 = -0x1a57;
          if (uVar4 != 0) {
            iVar5 = -0x1a48;
            iVar3 = (*(code *)PTR_malloc_00614174)(uVar4);
            if (iVar3 != 0) {
              iVar5 = FUN_00429394(iVar1,0x12,0,0,iVar3,uVar4);
              if (iVar5 == 0) {
                (*(code *)PTR_printf_006126e8)
                          ("MFi auth created signature:%p, len=%d\n",iVar3,uVar4);
                *param_3 = iVar3;
                *param_4 = uVar4;
              }
              else {
                (*(code *)PTR_free_0061286c)(iVar3);
              }
            }
          }
        }
      }
    }
    else {
      iVar5 = -0x1a57;
    }
    (*(code *)PTR_close_00613604)(iVar1);
    if (iVar5 == 0) {
      return 0;
    }
  }
  (*(code *)PTR_printf_006126e8)("### MFi auth create signature failed: %d\n",iVar5);
  return iVar5;
}


/* FUN_00429b14 @ 00429b14 */

uint FUN_00429b14(undefined4 param_1)

{
  uint uVar1;
  undefined1 auStack_a0 [156];
  
  uVar1 = (*(code *)PTR_stat_00613ec0)(param_1,auStack_a0);
  return ~uVar1 >> 0x1f;
}


/* SHA1_Init_compat @ 00429b50 */

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


/* FUN_00429ba4 @ 00429ba4 */

void FUN_00429ba4(int param_1,byte *param_2)

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


/* FUN_0042a154 @ 0042a154 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0042a154(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = DAT_005ad474;
  uVar1 = DAT_005ad470;
  param_1[0x12] = 0;
  param_1[3] = uVar2;
  param_1[2] = uVar1;
  uVar1 = DAT_005ad478;
  param_1[5] = DAT_005ad47c;
  param_1[4] = uVar1;
  uVar1 = DAT_005ad480;
  param_1[7] = DAT_005ad484;
  param_1[6] = uVar1;
  uVar1 = DAT_005ad488;
  param_1[9] = DAT_005ad48c;
  param_1[8] = uVar1;
  uVar1 = DAT_005ad490;
  param_1[0xb] = DAT_005ad494;
  param_1[10] = uVar1;
  uVar1 = DAT_005ad498;
  param_1[0xd] = DAT_005ad49c;
  param_1[0xc] = uVar1;
  uVar1 = DAT_005ad4a0;
  param_1[0xf] = DAT_005ad4a4;
  param_1[0xe] = uVar1;
  uVar1 = DAT_005ad4a8;
  param_1[0x11] = _DAT_005ad4ac;
  param_1[0x10] = uVar1;
  param_1[1] = 0;
  *param_1 = 0;
  return;
}


/* FUN_0042a20c @ 0042a20c */

void FUN_0042a20c(int param_1,byte *param_2)

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
  piVar7 = &DAT_005ad1f0;
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
  } while (piVar7 != &DAT_005ad470);
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


/* FUN_0042b904 @ 0042b904 */

void FUN_0042b904(uint *param_1,byte *param_2)

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
  for (puVar1 = &DAT_005ad130; puVar1 != &DAT_005ad1f0; puVar1 = puVar1 + 2) {
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


/* FUN_0042d638 @ 0042d638 */

undefined4 FUN_0042d638(undefined1 *param_1,int param_2)

{
  undefined *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  puVar1 = PTR_memset_006130cc;
  *(undefined1 *)(param_2 + *(int *)(param_2 + 200) + 0xcc) = 1;
  (*(code *)puVar1)(param_2 + 0xcc + *(uint *)(param_2 + 200) + 1,0,~*(uint *)(param_2 + 200) + 0x48
                   );
  *(byte *)(param_2 + 0x113) = *(byte *)(param_2 + 0x113) | 0x80;
  FUN_0042b904(param_2,param_2 + 0xcc);
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


/* FUN_0042d750 @ 0042d750 */

undefined4 FUN_0042d750(undefined4 param_1)

{
  (*(code *)PTR_memset_006130cc)(param_1,0,0x118);
  return 0;
}


/* FUN_0042d784 @ 0042d784 */

undefined4 FUN_0042d784(undefined1 *param_1,longlong *param_2)

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
    FUN_0042a20c(param_2,(int)param_2 + 0x4c);
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
  FUN_0042a20c(param_2,(int)param_2 + 0x4c);
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
  (*(code *)PTR_memset_006130cc)(param_2,0,0xd0);
  return 0;
}


/* SHA1_Final_compat @ 0042d94c */

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
    FUN_00429ba4(param_2,param_2 + 8);
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
  FUN_00429ba4(param_2,param_2 + 8);
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
  (*(code *)PTR_memset_006130cc)(param_2,0,0x60);
  return 0;
}


/* FUN_0042dad0 @ 0042dad0 */

undefined4 FUN_0042dad0(int param_1,int param_2,uint param_3)

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
    (*(code *)PTR_memcpy_00614674)(param_1 + 0xcc + iVar2,param_2,uVar3);
    uVar1 = uVar3 + *(int *)(param_1 + 200);
    *(uint *)(param_1 + 200) = uVar1;
    if (uVar1 < 0x48) {
      return 0;
    }
    FUN_0042b904(param_1,param_1 + 0xcc);
    param_3 = param_3 - uVar3;
    param_2 = param_2 + uVar3;
  }
  for (; 0x47 < param_3; param_3 = param_3 - 0x48) {
    FUN_0042b904(param_1,param_2);
    param_2 = param_2 + 0x48;
  }
  *(uint *)(param_1 + 200) = param_3;
  if (param_3 != 0) {
    (*(code *)PTR_memcpy_00614674)(param_1 + 0xcc,param_2,param_3);
  }
  return 0;
}


/* FUN_0042dbc4 @ 0042dbc4 */

undefined4 FUN_0042dbc4(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 auStack_130 [280];
  undefined4 local_18;
  
  local_18 = param_1;
  FUN_0042d750(auStack_130);
  FUN_0042dad0(auStack_130,local_18,param_2);
  FUN_0042d638(param_3,auStack_130);
  return param_3;
}


/* FUN_0042dc2c @ 0042dc2c */

undefined4 FUN_0042dc2c(int *param_1,int param_2,uint param_3)

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
      FUN_0042a20c(param_1,param_2);
      uVar1 = param_1[1] + 0x400;
      param_2 = param_2 + 0x80;
      *param_1 = (uint)(uVar1 < (uint)param_1[1]) + *param_1;
      param_1[1] = uVar1;
      param_3 = param_3 - 0x80;
    }
    else {
      param_3 = param_3 - uVar1;
      (*(code *)PTR_memcpy_00614674)((int)(param_1 + 0x13) + iVar2,param_2,uVar1);
      iVar2 = param_1[0x12];
      param_2 = param_2 + uVar1;
      param_1[0x12] = uVar1 + iVar2;
      if (uVar1 + iVar2 == 0x80) {
        FUN_0042a20c(param_1,param_1 + 0x13);
        uVar1 = param_1[1] + 0x400;
        param_1[0x12] = 0;
        *param_1 = (uint)(uVar1 < (uint)param_1[1]) + *param_1;
        param_1[1] = uVar1;
      }
    }
  }
  return 0;
}


/* FUN_0042dd5c @ 0042dd5c */

undefined4 FUN_0042dd5c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 auStack_e8 [208];
  undefined4 local_18;
  
  local_18 = param_1;
  FUN_0042a154(auStack_e8);
  FUN_0042dc2c(auStack_e8,local_18,param_2);
  FUN_0042d784(param_3,auStack_e8);
  return param_3;
}


/* SHA1_Update_compat @ 0042ddc4 */

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
      FUN_00429ba4(param_1,param_2);
      uVar1 = param_1[1] + 0x200;
      param_2 = param_2 + 0x40;
      *param_1 = (uint)(uVar1 < (uint)param_1[1]) + *param_1;
      param_1[1] = uVar1;
      param_3 = param_3 - 0x40;
    }
    else {
      param_3 = param_3 - uVar1;
      (*(code *)PTR_memcpy_00614674)((int)(param_1 + 8) + iVar2,param_2,uVar1);
      iVar2 = param_1[7];
      param_2 = param_2 + uVar1;
      param_1[7] = uVar1 + iVar2;
      if (uVar1 + iVar2 == 0x40) {
        FUN_00429ba4(param_1,param_1 + 8);
        uVar1 = param_1[1] + 0x200;
        param_1[7] = 0;
        *param_1 = (uint)(uVar1 < (uint)param_1[1]) + *param_1;
        param_1[1] = uVar1;
      }
    }
  }
  return 0;
}


/* FUN_0042def4 @ 0042def4 */

undefined4 FUN_0042def4(undefined4 param_1,undefined4 param_2,undefined4 param_3)

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


/* pthread_list_terminal_byControllerName @ 0042dfa0 */

undefined4 pthread_list_terminal_byControllerName(int param_1)

{
  undefined *puVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  undefined4 uVar5;
  
  uVar5 = 0xffffffff;
  if (param_1 != 0) {
    (*(code *)PTR_pthread_mutex_lock_00613f24)(&DAT_00615670);
    if ((undefined4 **)DAT_00615688 != &DAT_00615688) {
      piVar4 = DAT_006156b0;
      piVar3 = (int *)*DAT_006156b0;
      while( true ) {
        if ((int **)piVar4 == &DAT_006156b0) break;
        iVar2 = (*(code *)PTR_memcmp_00612e6c)(param_1,piVar4 + -9,0x24);
        if (iVar2 == 0) {
          iVar2 = (*(code *)PTR_pthread_kill_00613d24)(piVar4[-10],0);
          if ((iVar2 != 3) && (iVar2 != 0x16)) {
            uVar5 = 0;
            (*(code *)PTR_pthread_kill_00613d24)(piVar4[-10],3);
            puVar1 = PTR_free_0061286c;
            piVar3 = (int *)piVar4[1];
            iVar2 = *piVar4;
            *(int **)(iVar2 + 4) = piVar3;
            *piVar3 = iVar2;
            piVar4[1] = (int)piVar4;
            *piVar4 = (int)piVar4;
            (*(code *)puVar1)(piVar4 + -10);
            goto LAB_0042e0b8;
          }
        }
        piVar4 = piVar3;
        piVar3 = (int *)*piVar3;
      }
    }
    uVar5 = 0xffffffff;
LAB_0042e0b8:
    (*(code *)PTR_pthread_mutex_unlock_00612b1c)(&DAT_00615670);
  }
  return uVar5;
}


/* pthread_list_remove_byID @ 0042e0f4 */

undefined4 pthread_list_remove_byID(int param_1)

{
  undefined *puVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  
  (*(code *)PTR_pthread_mutex_lock_00613f24)(&DAT_00615670);
  puVar1 = PTR_free_0061286c;
  if ((undefined4 **)DAT_00615688 != &DAT_00615688) {
    piVar2 = DAT_006156b0;
    piVar3 = (int *)*DAT_006156b0;
    while ((int **)piVar2 != &DAT_006156b0) {
      if (piVar2[-10] == param_1) {
        piVar3 = (int *)piVar2[1];
        iVar4 = *piVar2;
        uVar5 = 0;
        *(int **)(iVar4 + 4) = piVar3;
        *piVar3 = iVar4;
        piVar2[1] = (int)piVar2;
        *piVar2 = (int)piVar2;
        (*(code *)puVar1)(piVar2 + -10);
        goto LAB_0042e1a0;
      }
      piVar2 = piVar3;
      piVar3 = (int *)*piVar3;
    }
  }
  uVar5 = 0xffffffff;
LAB_0042e1a0:
  (*(code *)PTR_pthread_mutex_unlock_00612b1c)(&DAT_00615670);
  return uVar5;
}


/* pthread_list_cleanup_handler @ 0042e1c4 */

void pthread_list_cleanup_handler(void)

{
                    /* WARNING: Could not recover jumptable at 0x0042e1d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_pthread_mutex_unlock_00612b1c)(&DAT_00615670);
  return;
}


/* pthread_list_terminal_AllThread @ 0042e1e0 */

void pthread_list_terminal_AllThread(void)

{
  undefined *puVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  char local_58 [40];
  int *local_30;
  
  (*(code *)PTR_pthread_mutex_lock_00613f24)(&DAT_00615670);
  if ((undefined4 **)DAT_00615688 != &DAT_00615688) {
    piVar4 = DAT_006156b0;
    piVar6 = (int *)*DAT_006156b0;
    while ((int **)piVar4 != &DAT_006156b0) {
      piVar7 = piVar4 + -10;
      iVar2 = 0;
      local_30 = piVar4 + -9;
      do {
        (*(code *)PTR_memset_006130cc)(local_58,0,0x24);
        iVar5 = iVar2 + 1;
        iVar2 = (*(code *)PTR_Phytrex_HMGetControllerName_006135b4)(local_58,iVar2);
        if (((iVar2 == 0) && (local_58[0] != '\0')) &&
           (iVar2 = (*(code *)PTR_memcmp_00612e6c)(local_58,local_30,0x24), iVar2 == 0)) {
          iVar2 = (*(code *)PTR_pthread_kill_00613d24)(*piVar7,0);
          if ((iVar2 != 3) && (iVar2 != 0x16)) {
            (*(code *)PTR_pthread_kill_00613d24)(*piVar7,3);
            puVar1 = PTR_free_0061286c;
            piVar3 = (int *)piVar4[1];
            iVar2 = *piVar4;
            *(int **)(iVar2 + 4) = piVar3;
            *piVar3 = iVar2;
            piVar4[1] = (int)piVar4;
            *piVar4 = (int)piVar4;
            (*(code *)puVar1)(piVar7);
          }
          break;
        }
        iVar2 = iVar5;
      } while (iVar5 != 0x10);
      piVar4 = piVar6;
      piVar6 = (int *)*piVar6;
    }
  }
  (*(code *)PTR_pthread_mutex_unlock_00612b1c)(&DAT_00615670);
  return;
}


/* FUN_0042e390 @ 0042e390 */

undefined4 FUN_0042e390(void)

{
  undefined *puVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  
  (*(code *)PTR_pthread_mutex_lock_00613f24)(&DAT_00615670);
  if ((undefined4 **)DAT_00615688 != &DAT_00615688) {
    piVar2 = DAT_006156b0;
    piVar5 = (int *)*DAT_006156b0;
    while( true ) {
      puVar1 = PTR_free_0061286c;
      if ((int **)piVar2 == &DAT_006156b0) break;
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
  (*(code *)PTR_pthread_mutex_unlock_00612b1c)(&DAT_00615670);
  (*(code *)PTR_pthread_mutex_destroy_00613ae8)(&DAT_00615670);
  return 0;
}


/* pthread_list_GetControllerName @ 0042e460 */

undefined4 pthread_list_GetControllerName(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  uVar3 = 0xffffffff;
  if (param_2 != 0) {
    (*(code *)PTR_pthread_mutex_lock_00613f24)(&DAT_00615670);
    if ((undefined4 **)DAT_00615688 != &DAT_00615688) {
      puVar1 = DAT_006156b0;
      puVar2 = (undefined4 *)*DAT_006156b0;
      while ((undefined4 **)puVar1 != &DAT_006156b0) {
        if (puVar1[-10] == param_1) {
          (*(code *)PTR_memcpy_00614674)(param_2,puVar1 + -9,0x24);
          uVar3 = 0;
          goto LAB_0042e50c;
        }
        puVar1 = puVar2;
        puVar2 = (undefined4 *)*puVar2;
      }
    }
    uVar3 = 0xffffffff;
LAB_0042e50c:
    (*(code *)PTR_pthread_mutex_unlock_00612b1c)(&DAT_00615670);
  }
  return uVar3;
}


/* pthread_list_updateControllerName @ 0042e534 */

undefined4 pthread_list_updateControllerName(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  
  (*(code *)PTR_pthread_mutex_lock_00613f24)(&DAT_00615670);
  if ((undefined4 **)DAT_00615688 != &DAT_00615688) {
    puVar1 = (undefined4 *)*DAT_006156b0;
    puVar3 = DAT_006156b0;
    while (puVar2 = puVar1, (undefined4 **)puVar3 != &DAT_006156b0) {
      if (puVar3[-10] == param_1) {
        (*(code *)PTR_memcpy_00614674)(puVar3 + -9,param_2,0x24);
        uVar4 = 0;
        goto LAB_0042e5d4;
      }
      puVar1 = (undefined4 *)*puVar2;
      puVar3 = puVar2;
    }
  }
  uVar4 = 0xffffffff;
LAB_0042e5d4:
  (*(code *)PTR_pthread_mutex_unlock_00612b1c)(&DAT_00615670);
  return uVar4;
}


/* pthread_list_add @ 0042e5f8 */

undefined4 pthread_list_add(undefined4 param_1)

{
  undefined *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  
  (*(code *)PTR_pthread_mutex_lock_00613f24)(&DAT_00615670);
  uVar4 = 0xffffffff;
  puVar3 = (undefined4 *)(*(code *)PTR_calloc_006148c0)(0x30,1);
  puVar1 = PTR_memset_006130cc;
  if (puVar3 != (undefined4 *)0x0) {
    *puVar3 = param_1;
    (*(code *)puVar1)(puVar3 + 1,0,0x24);
    uVar4 = 0;
    DAT_006156b0[1] = puVar3 + 10;
    puVar3[0xb] = &DAT_006156b0;
    puVar2 = puVar3 + 10;
    puVar3[10] = DAT_006156b0;
    DAT_006156b0 = puVar2;
  }
  (*(code *)PTR_pthread_mutex_unlock_00612b1c)(&DAT_00615670);
  return uVar4;
}


/* pthread_list_init @ 0042e6c8 */

undefined4 pthread_list_init(void)

{
  DAT_006156b4 = &DAT_006156b0;
  DAT_006156b0 = &DAT_006156b0;
  (*(code *)PTR_pthread_mutex_init_006144d8)(&DAT_00615670,0);
  return 0;
}


/* mdnsPhytrex_HomekitSetID @ 0042e720 */

void mdnsPhytrex_HomekitSetID(undefined4 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0042e738. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_strcpy_00612464)(&DAT_006156d4,param_1);
  return;
}


/* mdnsPhytrex_HomekitRemove @ 0042e740 */

void mdnsPhytrex_HomekitRemove(void)

{
  int iVar1;
  code *pcVar2;
  
  if (*(int *)PTR_g_isWACConfigured_00612528 != 0) {
    iVar1 = (*(code *)PTR_dlopen_00612650)("libdns_sd.so",1);
    if (iVar1 == 0) {
      (*(code *)PTR_fputs_006132bc)("Load libdns_so error.\n",*(undefined4 *)PTR_stderr_006137c8);
    }
    (*(code *)PTR_dlerror_00613b68)();
    pcVar2 = (code *)(*(code *)PTR_dlsym_0061400c)(iVar1,"TXTRecordDeallocate");
    (*(code *)PTR_dlerror_00613b68)();
    (*pcVar2)(&DAT_006156c4);
    (*(code *)PTR_dlerror_00613b68)();
    if (DAT_006156c0 != 0) {
      pcVar2 = (code *)(*(code *)PTR_dlsym_0061400c)(iVar1,"DNSServiceRefDeallocate");
      (*pcVar2)(DAT_006156c0);
      DAT_006156c0 = 0;
    }
                    /* WARNING: Could not recover jumptable at 0x0042e870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR_dlclose_0061246c)(iVar1);
    return;
  }
  return;
}


/* mdnsPhytrex_HomekitUpdate @ 0042e890 */

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
  
  if (*(int *)PTR_g_isWACConfigured_00612528 != 0) {
    iVar2 = (*(code *)PTR_dlopen_00612650)("libdns_sd.so",1);
    if (iVar2 == 0) {
      (*(code *)PTR_fputs_006132bc)("Load libdns_so error.\n",*(undefined4 *)PTR_stderr_006137c8);
    }
    (*(code *)PTR_dlerror_00613b68)();
    pcVar3 = (code *)(*(code *)PTR_dlsym_0061400c)(iVar2,"TXTRecordSetValue");
    (*(code *)PTR_dlerror_00613b68)();
    uVar9 = (*(code *)PTR_strlen_00613f4c)(param_2);
    (*pcVar3)(&DAT_006156c4,param_1,uVar9,param_2);
    (*(code *)PTR_dlerror_00613b68)();
    pcVar3 = (code *)(*(code *)PTR_dlsym_0061400c)(iVar2,"DNSServiceUpdateRecord");
    (*(code *)PTR_dlerror_00613b68)();
    pcVar4 = (code *)(*(code *)PTR_dlsym_0061400c)(iVar2,"TXTRecordGetLength");
    iVar5 = (*(code *)PTR_dlerror_00613b68)();
    if (iVar5 != 0) {
      (*(code *)PTR_fprintf_00612f5c)(*(undefined4 *)PTR_stderr_006137c8,"dlsym error: %s\n",iVar5);
    }
    (*(code *)PTR_dlerror_00613b68)();
    pcVar6 = (code *)(*(code *)PTR_dlsym_0061400c)(iVar2,"TXTRecordGetBytesPtr");
    (*(code *)PTR_dlerror_00613b68)();
    iVar5 = (*(code *)PTR_dlerror_00613b68)();
    if (iVar5 != 0) {
      (*(code *)PTR_fprintf_00612f5c)(*(undefined4 *)PTR_stderr_006137c8,"dlsym error: %s\n",iVar5);
    }
    uVar1 = DAT_006156c0;
    uVar8 = (*pcVar4)(&DAT_006156c4);
    uVar7 = (*pcVar6)(&DAT_006156c4);
    (*pcVar3)(uVar1,0,0,uVar8,uVar7,0);
                    /* WARNING: Could not recover jumptable at 0x0042eb28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR_dlclose_0061246c)(iVar2);
    return;
  }
  return;
}


/* mdnsPhytrex_HomekitRegist @ 0042eb54 */

void mdnsPhytrex_HomekitRegist(undefined4 param_1)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  code *pcVar4;
  undefined1 uVar8;
  code *pcVar5;
  undefined2 uVar7;
  undefined4 uVar6;
  
  if (*(int *)PTR_g_isWACConfigured_00612528 != 0) {
    iVar1 = (*(code *)PTR_dlopen_00612650)("libdns_sd.so",1);
    if (iVar1 == 0) {
      (*(code *)PTR_fputs_006132bc)("Load libdns_so error.\n",*(undefined4 *)PTR_stderr_006137c8);
    }
    (*(code *)PTR_dlerror_00613b68)();
    pcVar2 = (code *)(*(code *)PTR_dlsym_0061400c)(iVar1,"DNSServiceRegister");
    iVar3 = (*(code *)PTR_dlerror_00613b68)();
    if (iVar3 != 0) {
      (*(code *)PTR_fprintf_00612f5c)(*(undefined4 *)PTR_stderr_006137c8,"dlsym error: %s\n",iVar3);
    }
    (*(code *)PTR_dlerror_00613b68)();
    pcVar4 = (code *)(*(code *)PTR_dlsym_0061400c)(iVar1,"TXTRecordCreate");
    iVar3 = (*(code *)PTR_dlerror_00613b68)();
    if (iVar3 != 0) {
      (*(code *)PTR_fprintf_00612f5c)(*(undefined4 *)PTR_stderr_006137c8,"dlsym error: %s\n",iVar3);
    }
    (*pcVar4)(&DAT_006156c4,0,0);
    pcVar4 = (code *)(*(code *)PTR_dlsym_0061400c)(iVar1,"TXTRecordSetValue");
    (*pcVar4)(&DAT_006156c4,&UNK_005ad594,1,"1");
    (*pcVar4)(&DAT_006156c4,"ff",1,"1");
    uVar8 = (*(code *)PTR_strlen_00613f4c)(&DAT_006156d4);
    (*pcVar4)(&DAT_006156c4,"id",uVar8,&DAT_006156d4);
    (*pcVar4)(&DAT_006156c4,"md",10,&UNK_005ad598);
    (*pcVar4)(&DAT_006156c4,&UNK_005ad5a4,3,&UNK_005ad5a8);
    (*pcVar4)(&DAT_006156c4,&UNK_005ad5ac,1,"1");
    (*pcVar4)(&DAT_006156c4,&DAT_005ac3f4,1,"1");
    (*pcVar4)(&DAT_006156c4,&DAT_005ac3f8,5,&UNK_005ad5b0);
    (*pcVar4)(&DAT_006156c4,&DAT_005ac3fc,1,&DAT_005b7cc4);
    (*(code *)PTR_dlerror_00613b68)();
    pcVar4 = (code *)(*(code *)PTR_dlsym_0061400c)(iVar1,"TXTRecordGetLength");
    iVar3 = (*(code *)PTR_dlerror_00613b68)();
    if (iVar3 != 0) {
      (*(code *)PTR_fprintf_00612f5c)(*(undefined4 *)PTR_stderr_006137c8,"dlsym error: %s\n",iVar3);
    }
    (*(code *)PTR_dlerror_00613b68)();
    pcVar5 = (code *)(*(code *)PTR_dlsym_0061400c)(iVar1,"TXTRecordGetBytesPtr");
    iVar3 = (*(code *)PTR_dlerror_00613b68)();
    if (iVar3 != 0) {
      (*(code *)PTR_fprintf_00612f5c)(*(undefined4 *)PTR_stderr_006137c8,"dlsym error: %s\n",iVar3);
    }
    uVar7 = (*pcVar4)(&DAT_006156c4);
    uVar6 = (*pcVar5)(&DAT_006156c4);
    iVar3 = (*pcVar2)(&DAT_006156c0,0,0,param_1,"_hap._tcp","local","",0xce03,uVar7,uVar6,0,"");
    if (iVar3 != 0) {
      (*(code *)PTR_fprintf_00612f5c)
                (*(undefined4 *)PTR_stderr_006137c8,"Error: %s,%s,%d,%d\n",
                 "/home/vendor/rtl819x_v3464_homekit/users/phytrex-homekit/lib_homekitserver/mdns_phytrexHomekit.c"
                 ,"mdnsPhytrex_HomekitRegist",0x16c,iVar3);
    }
                    /* WARNING: Could not recover jumptable at 0x0042efdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR_dlclose_0061246c)(iVar1);
    return;
  }
  return;
}


/* FUN_0042f00c @ 0042f00c */

undefined4 FUN_0042f00c(undefined4 param_1)

{
  int iVar1;
  char local_78 [104];
  
  (*(code *)PTR_system_00614714)("hostname > /tmp/net/jc_hostname.txt");
  iVar1 = (*(code *)PTR_fopen_0061395c)("/tmp/net/jc_hostname.txt","r");
  if (iVar1 != 0) {
    (*(code *)PTR_fseek_00612d1c)(iVar1,0,0);
    (*(code *)PTR_fgets_006134d4)(local_78,100,iVar1);
    (*(code *)PTR_fclose_00613a3c)(iVar1);
    if (local_78[0] != '\0') {
      (*(code *)PTR_fprintf_00612f5c)(*(undefined4 *)PTR_stderr_006137c8,"JHOSTNAME=%s",local_78);
      (*(code *)PTR_strcpy_00612464)(param_1,local_78);
      return 0;
    }
  }
  return 1;
}


/* HKGetValueFromGlobalEventTable @ 0042f120 */

undefined4 HKGetValueFromGlobalEventTable(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  if ((undefined4 **)DAT_006156f0 != &DAT_006156f0) {
    puVar1 = (undefined4 *)*DAT_006156fc;
    puVar3 = DAT_006156fc;
    while (puVar2 = puVar1, (undefined4 **)puVar3 != &DAT_006156fc) {
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


/* HKUpdateEnableToPrivateEventTable @ 0042f1c8 */

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


/* HKDestroyPrivateEventTable @ 0042f374 */

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
        (*(code *)PTR_free_0061286c)();
      }
      puVar1 = PTR_free_0061286c;
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


/* FUN_0042f474 @ 0042f474 */

undefined4 FUN_0042f474(void)

{
  undefined *puVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  
  if ((undefined4 **)DAT_006156f0 != &DAT_006156f0) {
    piVar4 = DAT_006156fc;
    piVar5 = (int *)*DAT_006156fc;
    while ((int **)piVar4 != &DAT_006156fc) {
      iVar2 = piVar4[-1];
      if ((((iVar2 == 4) || (iVar2 == 5)) || (iVar2 == 3)) && (piVar4[-2] != 0)) {
        (*(code *)PTR_free_0061286c)();
      }
      puVar1 = PTR_free_0061286c;
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


/* HKCreatePrivateEventTable @ 0042f57c */

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
  
  puVar6 = PTR_hapObjects_006149e4;
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
    puVar6 = PTR_hapObjects_006149e4 + (iVar3 * 0xb5 + 1) * 8 + 4;
    do {
      (*(code *)PTR_memcpy_00614674)(local_38,puVar6,0x48);
      iVar7 = iVar7 + 1;
      puVar6 = puVar6 + 0x48;
      if (local_6a != '\0') {
        local_34 = local_74;
        local_30 = local_7c;
        puVar1 = (undefined1 *)(*(code *)PTR_calloc_006148c0)(0x1c,1);
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


/* HKCreateGlobalEventTable @ 0042f6e8 */

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
  
  DAT_006156fc = &DAT_006156fc;
  DAT_00615700 = &DAT_006156fc;
  piVar3 = (int *)(PTR_hapObjects_006149e4 + 4);
  iVar2 = 0;
  uVar6 = 0;
  do {
    if (*piVar3 == 0) {
      return uVar6;
    }
    iVar5 = 0;
    puVar4 = PTR_hapObjects_006149e4 + (iVar2 * 0xb5 + 1) * 8 + 4;
    do {
      (*(code *)PTR_memcpy_00614674)(auStack_78,puVar4,0x48);
      iVar5 = iVar5 + 1;
      puVar4 = puVar4 + 0x48;
      if (local_62 != '\0') {
        local_30 = local_6c;
        local_2c = local_74;
        puVar1 = (undefined4 *)(*(code *)PTR_calloc_006148c0)(0x14,1);
        if (puVar1 == (undefined4 *)0x0) {
          uVar6 = 0xffffe5b8;
          break;
        }
        puVar1[2] = local_30;
        *puVar1 = local_2c;
        puVar1[1] = 0;
        DAT_006156fc[1] = puVar1 + 3;
        puVar1[3] = DAT_006156fc;
        puVar1[4] = &DAT_006156fc;
        DAT_006156fc = puVar1 + 3;
      }
    } while (iVar5 != 0x14);
    iVar2 = iVar2 + 1;
    piVar3 = piVar3 + 0x16a;
    if (iVar2 == 10) {
      return uVar6;
    }
  } while( true );
}


/* HKUpdateValueToPrivateEventTable @ 0042f858 */

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
            iVar2 = (*(code *)PTR_strcmp_00612a7c)(iVar5,param_3);
            if (iVar2 == 0) {
              return 0;
            }
            (*(code *)PTR_free_0061286c)(iVar5);
          }
          iVar5 = (*(code *)PTR_strlen_00613f4c)(param_3);
          iVar5 = (*(code *)PTR_calloc_006148c0)(1,iVar5 + 1);
          piVar4[-3] = iVar5;
          (*(code *)PTR_strcpy_00612464)(iVar5,param_3);
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


/* HKUpdateValueToGlobalEventTable @ 0042f9b0 */

undefined4 HKUpdateValueToGlobalEventTable(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  
  if ((undefined4 **)DAT_006156f0 != &DAT_006156f0) {
    puVar1 = (undefined4 *)*DAT_006156fc;
    puVar5 = DAT_006156fc;
    while (puVar4 = puVar1, (undefined4 **)puVar5 != &DAT_006156fc) {
      if (puVar5[-3] == param_1) {
        switch(puVar5[-1]) {
        case 0:
        case 1:
          goto switchD_0042fa30_caseD_0;
        case 2:
          iVar6 = (*(code *)PTR___nesf2_00612800)(puVar5[-2],param_2);
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
            iVar2 = (*(code *)PTR_strcmp_00612a7c)(iVar6,param_2);
            if (iVar2 == 0) {
              return 0;
            }
            (*(code *)PTR_free_0061286c)(iVar6);
          }
          iVar6 = (*(code *)PTR_strlen_00613f4c)(param_2);
          uVar3 = (*(code *)PTR_calloc_006148c0)(1,iVar6 + 1);
          puVar5[-2] = uVar3;
          (*(code *)PTR_strcpy_00612464)(uVar3,param_2);
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
switchD_0042fa30_caseD_0:
  if (puVar5[-2] != param_2) {
    puVar5[-2] = param_2;
    return 0;
  }
  return 0;
}


/* FUN_0042fb84 @ 0042fb84 */

undefined4 FUN_0042fb84(char *param_1)

{
  undefined4 uVar1;
  
  if ((((((9 < (byte)(*param_1 - 0x30U)) || (9 < (byte)(param_1[1] - 0x30U))) ||
        (9 < (byte)(param_1[2] - 0x30U))) ||
       ((param_1[3] != '-' || (9 < (byte)(param_1[4] - 0x30U))))) ||
      ((9 < (byte)(param_1[5] - 0x30U) || ((param_1[6] != '-' || (9 < (byte)(param_1[7] - 0x30U)))))
      )) || ((9 < (byte)(param_1[8] - 0x30U) || (uVar1 = 1, 9 < (byte)(param_1[9] - 0x30U))))) {
    (*(code *)PTR_fprintf_00612f5c)
              (*(undefined4 *)PTR_stderr_006137c8,
               "\nFILE %s FUNCTION %s LINE %d: Setup code is illegal %2x%2x%2x%2x%2x%2x%2x%2x%2x%2x\n"
               ,"/home/vendor/rtl819x_v3464_homekit/users/phytrex-homekit/homekitsetupcode.c",
               "checkSetupCodeisLegal",0x76,*param_1,param_1[1],param_1[2],param_1[3],param_1[4],
               param_1[5],param_1[6],param_1[7],param_1[8],param_1[9]);
    uVar1 = 0;
  }
  return uVar1;
}


/* FUN_0042fd28 @ 0042fd28 */

byte * FUN_0042fd28(char *param_1,int param_2)

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
  pbVar1 = (byte *)(*(code *)PTR_malloc_00614174)(local_18[0]);
  (*(code *)PTR_memset_006130cc)(pbVar1,0,local_18[0]);
  uVar6 = 0;
  pbVar5 = pbVar1;
  do {
    piVar7 = local_28;
    pcVar8 = param_1;
    if (uVar10 <= uVar6) {
      return pbVar1;
    }
    do {
      pcVar9 = s_ABCDEFGHIJKLMNOPQRSTUVWXYZabcdef_00600ab0;
      iVar3 = 0;
      do {
        if (*pcVar9 == *pcVar8) goto LAB_0042fdf4;
        iVar2 = iVar3 + 1;
        pcVar9 = s_ABCDEFGHIJKLMNOPQRSTUVWXYZabcdef_00600ab0 + iVar3 + 1;
        iVar3 = iVar2;
      } while (iVar2 != 0x41);
      iVar3 = -1;
LAB_0042fdf4:
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


/* FUN_0042fecc @ 0042fecc */

undefined4 FUN_0042fecc(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_30 [4];
  undefined1 auStack_2c [17];
  undefined1 local_1b;
  
  iVar1 = (*(code *)PTR_open_0061479c)("/dev/mtdblock2",2);
  if (iVar1 < 1) {
    (*(code *)PTR_printf_006126e8)("open MTD device %s fail...\n","/dev/mtdblock2");
  }
  else {
    iVar2 = (*(code *)PTR_lseek_00613e6c)(iVar1,0x10000,0);
    if ((iVar2 != -1) && (iVar2 = (*(code *)PTR_read_00613d88)(iVar1,auStack_30,0x18), iVar2 != -1))
    {
      iVar2 = (*(code *)PTR_memcmp_00612e6c)(auStack_30,&DAT_005ad7cc,4);
      if (iVar2 == 0) {
        local_1b = 0;
        uVar3 = (*(code *)PTR_strlen_00613f4c)(auStack_2c);
        uVar3 = FUN_0042fd28(auStack_2c,uVar3);
        (*(code *)PTR_memcpy_00614674)(param_1,uVar3,10);
        iVar2 = FUN_0042fb84(param_1);
        if (iVar2 != 0) {
          (*(code *)PTR_close_00613604)(iVar1);
          return 1;
        }
      }
    }
    (*(code *)PTR_close_00613604)(iVar1);
  }
  return 0;
}


/* HKsetupCodeInit @ 00430030 */

bool HKsetupCodeInit(void)

{
  int iVar1;
  
  iVar1 = FUN_0042fecc();
  return iVar1 != 0;
}


/* Get_product_info @ 00430050 */

undefined4 Get_product_info(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined4 uVar5;
  char *pcVar6;
  undefined1 auStack_38 [28];
  
  iVar1 = (*(code *)PTR_open_0061479c)("/dev/mtdblock5",2);
  if (iVar1 < 1) {
    (*(code *)PTR_fprintf_00612f5c)
              (*(undefined4 *)PTR_stderr_006137c8,
               "\nFILE %s FUNCTION %s LINE %d: read production from flash open fail......\n\n",
               "/home/vendor/rtl819x_v3464_homekit/users/phytrex-homekit/customize/Incipio_Socket_Meter/homekitdatasave.c"
               ,"Get_product_info",0xac);
    uVar5 = 0xffffffff;
    if (iVar1 == 0) {
      return 0xffffffff;
    }
    goto LAB_004303a4;
  }
  iVar2 = (*(code *)PTR_lseek_00613e6c)(iVar1,0x18000,0);
  uVar5 = 0;
  if (iVar2 == -1) {
    (*(code *)PTR_fprintf_00612f5c)
              (*(undefined4 *)PTR_stderr_006137c8,
               "\nFILE %s FUNCTION %s LINE %d: locate production to flash by lseek fail......\n\n",
               "/home/vendor/rtl819x_v3464_homekit/users/phytrex-homekit/customize/Incipio_Socket_Meter/homekitdatasave.c"
               ,"Get_product_info",0x76);
    uVar5 = 0xffffffff;
  }
  iVar2 = (*(code *)PTR_read_00613d88)(iVar1,param_1,0x22);
  if (iVar2 == -1) {
    (*(code *)PTR_fprintf_00612f5c)
              (*(undefined4 *)PTR_stderr_006137c8,
               "\nFILE %s FUNCTION %s LINE %d: read production from flash fail.......\n\n",
               "/home/vendor/rtl819x_v3464_homekit/users/phytrex-homekit/customize/Incipio_Socket_Meter/homekitdatasave.c"
               ,"Get_product_info",0x7d);
    uVar5 = 0xffffffff;
  }
  (*(code *)PTR_puts_00612670)("[METER DEBUG] Read Product Info :");
  pcVar6 = (char *)(param_1 + 0xe);
  (*(code *)PTR_printf_006126e8)("              Serial NUM : [%s] \n",pcVar6);
  iVar2 = (*(code *)PTR_memcmp_00612e6c)(param_1,"AccessoryInfo",0xe);
  if (iVar2 == 0) {
    iVar2 = (*(code *)PTR_memcmp_00612e6c)(pcVar6,&DAT_005ad98c,4);
    if (iVar2 == 0) {
      pcVar4 = "SN format right";
    }
    else {
      (*(code *)PTR_puts_00612670)("SN wrong format");
      (*(code *)PTR_memcpy_00614674)(auStack_38,pcVar6,0x14);
      uVar3 = (*(code *)PTR_strchr_006127e8)(auStack_38,0x2d);
      (*(code *)PTR_sprintf_00612e20)(pcVar6,"%s%s",&DAT_005ad98c,uVar3);
      iVar2 = (*(code *)PTR_lseek_00613e6c)(iVar1,0x18000,0);
      if (iVar2 == -1) {
        (*(code *)PTR_fprintf_00612f5c)
                  (*(undefined4 *)PTR_stderr_006137c8,
                   "\nFILE %s FUNCTION %s LINE %d: locate production to flash by lseek fail......\n\n"
                   ,
                   "/home/vendor/rtl819x_v3464_homekit/users/phytrex-homekit/customize/Incipio_Socket_Meter/homekitdatasave.c"
                   ,"Get_product_info",0x9c);
        uVar5 = 0xffffffff;
      }
      iVar2 = (*(code *)PTR_write_00613734)(iVar1,param_1,0x22);
      if (iVar2 == -1) {
        (*(code *)PTR_fprintf_00612f5c)
                  (*(undefined4 *)PTR_stderr_006137c8,
                   "\nFILE %s FUNCTION %s LINE %d: rewrite production SN to flash fail.......\n\n",
                   "/home/vendor/rtl819x_v3464_homekit/users/phytrex-homekit/customize/Incipio_Socket_Meter/homekitdatasave.c"
                   ,"Get_product_info",0xa1);
        uVar5 = 0xffffffff;
        goto LAB_00430354;
      }
      pcVar4 = "Corrcet SN rewrite successful!!";
    }
    (*(code *)PTR_puts_00612670)(pcVar4);
  }
  else {
    (*(code *)PTR_puts_00612670)("signature fail");
    pcVar6 = "HKMO-0000001";
  }
LAB_00430354:
  (*(code *)PTR_strcpy_00612464)(&DAT_00615710,pcVar6);
LAB_004303a4:
  (*(code *)PTR_close_00613604)(iVar1);
  return uVar5;
}


/* Get_hksettinginfo @ 004303dc */

undefined4 Get_hksettinginfo(char *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = (*(code *)PTR_open_0061479c)("/dev/mtdblock5",2);
  if (iVar1 < 1) {
    (*(code *)PTR_fprintf_00612f5c)
              (*(undefined4 *)PTR_stderr_006137c8,
               "\nFILE %s FUNCTION %s LINE %d: read hksettinginfo from flash open fail......\n\n",
               "/home/vendor/rtl819x_v3464_homekit/users/phytrex-homekit/customize/Incipio_Socket_Meter/homekitdatasave.c"
               ,"Get_hksettinginfo",0x5e);
    uVar3 = 0xffffffff;
    if (iVar1 == 0) {
      return 0xffffffff;
    }
  }
  else {
    iVar2 = (*(code *)PTR_lseek_00613e6c)(iVar1,0x10000,0);
    uVar3 = 0;
    if (iVar2 == -1) {
      (*(code *)PTR_fprintf_00612f5c)
                (*(undefined4 *)PTR_stderr_006137c8,
                 "\nFILE %s FUNCTION %s LINE %d: locate hksettinginfo to flash by lseek fail......\n\n"
                 ,
                 "/home/vendor/rtl819x_v3464_homekit/users/phytrex-homekit/customize/Incipio_Socket_Meter/homekitdatasave.c"
                 ,"Get_hksettinginfo",0x4b);
      uVar3 = 0xffffffff;
    }
    iVar2 = (*(code *)PTR_read_00613d88)(iVar1,param_1,1);
    if (iVar2 == -1) {
      (*(code *)PTR_fprintf_00612f5c)
                (*(undefined4 *)PTR_stderr_006137c8,
                 "\nFILE %s FUNCTION %s LINE %d: read hksettinginfo from flash fail.......\n\n",
                 "/home/vendor/rtl819x_v3464_homekit/users/phytrex-homekit/customize/Incipio_Socket_Meter/homekitdatasave.c"
                 ,"Get_hksettinginfo",0x52);
      uVar3 = 0xffffffff;
    }
    (*(code *)PTR_puts_00612670)("Get hksetting info :");
    (*(code *)PTR_printf_006126e8)("relay state value : %d\n ",(int)*param_1);
  }
  (*(code *)PTR_close_00613604)(iVar1);
  return uVar3;
}


/* Store_hksettinginfo @ 00430574 */

undefined4 Store_hksettinginfo(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = (*(code *)PTR_open_0061479c)("/dev/mtdblock5",2);
  if (iVar1 < 1) {
    (*(code *)PTR_fprintf_00612f5c)
              (*(undefined4 *)PTR_stderr_006137c8,
               "\nFILE %s FUNCTION %s LINE %d: write hksettinginfo to flash open fail......\n\n",
               "/home/vendor/rtl819x_v3464_homekit/users/phytrex-homekit/customize/Incipio_Socket_Meter/homekitdatasave.c"
               ,"Store_hksettinginfo",0x36);
    uVar3 = 0xffffffff;
    if (iVar1 == 0) {
      return 0xffffffff;
    }
  }
  else {
    iVar2 = (*(code *)PTR_lseek_00613e6c)(iVar1,0x10000,0);
    uVar3 = 0;
    if (iVar2 == -1) {
      (*(code *)PTR_fprintf_00612f5c)
                (*(undefined4 *)PTR_stderr_006137c8,
                 "\nFILE %s FUNCTION %s LINE %d: locate hksettinginfo to flash by lseek fail......\n\n"
                 ,
                 "/home/vendor/rtl819x_v3464_homekit/users/phytrex-homekit/customize/Incipio_Socket_Meter/homekitdatasave.c"
                 ,"Store_hksettinginfo",0x2b);
      uVar3 = 0xffffffff;
    }
    iVar2 = (*(code *)PTR_write_00613734)(iVar1,param_1,1);
    if (iVar2 == -1) {
      (*(code *)PTR_fprintf_00612f5c)
                (*(undefined4 *)PTR_stderr_006137c8,
                 "\nFILE %s FUNCTION %s LINE %d: write hksettinginfo to flash fail.......\n\n",
                 "/home/vendor/rtl819x_v3464_homekit/users/phytrex-homekit/customize/Incipio_Socket_Meter/homekitdatasave.c"
                 ,"Store_hksettinginfo",0x30);
      uVar3 = 0xffffffff;
    }
  }
  (*(code *)PTR_close_00613604)(iVar1);
  return uVar3;
}


/* FUN_004306e0 @ 004306e0 */

undefined4 FUN_004306e0(void)

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
  (*(code *)PTR_strcpy_00612464)(auStack_2c,"10219");
  iVar8 = 0;
  (*(code *)PTR_printf_006126e8)("***orifwVer:[%s]\n",auStack_2c);
  for (iVar2 = (*(code *)PTR_atol_00614190)(auStack_2c); 9999 < iVar2; iVar2 = iVar2 + -10000) {
    iVar8 = (iVar8 + 1) * 0x1000000 >> 0x18;
  }
  (*(code *)PTR_printf_006126e8)("ver_x = %d, ver_rem = %d\n",iVar8,iVar2);
  iVar7 = 0;
  for (; 99 < iVar2; iVar2 = iVar2 + -100) {
    iVar7 = (iVar7 + 1) * 0x1000000 >> 0x18;
  }
  (*(code *)PTR_printf_006126e8)("ver_y = %d, ver_rem = %d\n",iVar7,iVar2);
  (*(code *)PTR_printf_006126e8)("ver_z = %d, ver_rem = %d\n",(int)(char)iVar2,iVar2);
  puVar3 = (undefined1 *)(*(code *)PTR_strchr_006127e8)(&DAT_00615930,0x2e);
  puVar1 = PTR_sprintf_00612e20;
  *puVar3 = 0;
  (*(code *)puVar1)(&local_38,&DAT_00615930);
  iVar4 = (*(code *)PTR_atoi_00612850)(&local_38);
  puVar1 = PTR_strchr_006127e8;
  uVar5 = 1;
  if (iVar4 <= iVar8) {
    *puVar3 = 0x2e;
    puVar6 = (undefined1 *)(*(code *)puVar1)(puVar3 + 1,0x2e);
    puVar1 = PTR_sprintf_00612e20;
    *puVar6 = 0;
    (*(code *)puVar1)(&local_34,puVar3 + 1);
    iVar8 = (*(code *)PTR_atoi_00612850)(&local_34);
    puVar1 = PTR_sprintf_00612e20;
    uVar5 = 1;
    if (iVar8 <= iVar7) {
      *puVar6 = 0x2e;
      (*(code *)puVar1)(&local_30,puVar6 + 1);
      iVar8 = (*(code *)PTR_atoi_00612850)(&local_30);
      if ((char)iVar2 < iVar8) {
        uVar5 = 1;
      }
      else {
        (*(code *)PTR_HKUpdateValueToGlobalEventTable_006149fc)(0x14,1);
        uVar5 = 0xffffffff;
      }
    }
  }
  return uVar5;
}


/* FUN_00430944 @ 00430944 */

void FUN_00430944(void)

{
  if (DAT_00615938 != 0) {
    (*(code *)PTR_SSL_shutdown_00612b40)();
  }
  if (0 < DAT_0061593c) {
    (*(code *)PTR_close_00613604)();
    DAT_0061593c = -1;
  }
  if (DAT_00615938 != 0) {
    (*(code *)PTR_SSL_free_00613eb8)();
    DAT_00615938 = 0;
  }
  if (DAT_00615940 != 0) {
    (*(code *)PTR_SSL_CTX_free_00612534)();
    DAT_00615940 = 0;
  }
  return;
}


/* FUN_00430a14 @ 00430a14 */

void FUN_00430a14(char *param_1,undefined1 *param_2,undefined1 *param_3,undefined4 *param_4)

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
    iVar1 = (*(code *)PTR_strncmp_006140c8)(param_1,"http://",7);
    if (iVar1 == 0) {
      *param_4 = 0x50;
      param_1 = param_1 + 7;
    }
    else {
      iVar1 = (*(code *)PTR_strncmp_006140c8)(param_1,"https://",8);
      if (iVar1 == 0) {
        *param_4 = 0x1bb;
        param_1 = param_1 + 8;
      }
    }
    iVar1 = (*(code *)PTR_strchr_006127e8)(param_1,0x2f);
    if (iVar1 == 0) {
      uVar4 = (*(code *)PTR_strlen_00613f4c)(param_1);
      (*(code *)PTR_memcpy_00614674)(param_2,param_1,uVar4);
      iVar1 = (*(code *)PTR_strlen_00613f4c)(param_1);
      param_2[iVar1] = 0;
    }
    else {
      iVar2 = (*(code *)PTR_strlen_00613f4c)(param_1);
      iVar3 = (*(code *)PTR_strlen_00613f4c)(iVar1);
      (*(code *)PTR_memcpy_00614674)(param_2,param_1,iVar2 - iVar3);
      if (iVar1 + 1 != 0) {
        iVar2 = (*(code *)PTR_strlen_00613f4c)(iVar1);
        (*(code *)PTR_memcpy_00614674)(param_3,iVar1 + 1,iVar2 + -1);
        iVar2 = (*(code *)PTR_strlen_00613f4c)(iVar1);
        param_3[iVar2 + -1] = 0;
      }
      iVar2 = (*(code *)PTR_strlen_00613f4c)(param_1);
      iVar1 = (*(code *)PTR_strlen_00613f4c)(iVar1);
      param_2[iVar2 - iVar1] = 0;
    }
  }
  return;
}


/* FUN_00430c30 @ 00430c30 */

/* WARNING: Removing unreachable block (ram,0x004310a8) */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

undefined4 FUN_00430c30(undefined4 param_1)

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
  
  (*(code *)PTR_memset_006130cc)(auStack_78,0,0x20);
  local_70 = 2;
  local_74 = 0;
  (*(code *)PTR_memset_006130cc)(&DAT_00615948,0,0x100);
  (*(code *)PTR_memset_006130cc)(&DAT_00615a48,0,0x400);
  FUN_00430a14(param_1,&DAT_00615948,&DAT_00615a48,&DAT_00615944);
  (*(code *)PTR_printf_006126e8)("webhost: [%s]\n",&DAT_00615948);
  (*(code *)PTR_printf_006126e8)("portnumber:%d\n\n",DAT_00615944);
  iVar1 = (*(code *)PTR_system_00614714)("ping 168.95.1.1 -c 1 > /dev/null");
  if (iVar1 == 0) {
    iVar1 = (*(code *)PTR_getaddrinfo_006124dc)(&DAT_00615948,0,auStack_78,&local_8c);
    if (iVar1 == 0) {
      iVar8 = 0;
      iVar9 = 0;
      for (iVar1 = local_8c; iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x1c)) {
        iVar3 = *(int *)(iVar1 + 0x14);
        puVar10 = &UNK_005add60;
        if (*(int *)(iVar1 + 4) == 2) {
          iVar6 = iVar3 + 4;
          iVar8 = iVar3;
          iVar3 = iVar9;
          puVar10 = &DAT_005add58;
        }
        else {
          iVar6 = iVar3 + 8;
        }
        (*(code *)PTR_inet_ntop_006125c8)(*(int *)(iVar1 + 4),iVar6,auStack_58,0x2e);
        (*(code *)PTR_printf_006126e8)(" %s: %s\n",puVar10,auStack_58);
        iVar9 = iVar3;
      }
      (*(code *)PTR_freeaddrinfo_00614214)(local_8c);
      if (iVar9 != 0) goto LAB_00431128;
      DAT_0061593c = (*(code *)PTR_socket_00612d38)(2,2,0);
      if (DAT_0061593c == -1) {
        uVar7 = *(undefined4 *)PTR_stderr_006137c8;
        puVar4 = (undefined4 *)(*(code *)PTR___errno_location_00614824)();
        uVar2 = (*(code *)PTR_strerror_00612748)(*puVar4);
        pcVar5 = "Socket Error:%s\a\n";
      }
      else {
        local_88 = 2;
        local_86 = (undefined2)DAT_00615944;
        local_80 = 0;
        local_7c = 0;
        local_84 = *(undefined4 *)(iVar8 + 4);
        uVar2 = (*(code *)PTR_inet_ntoa_006130ac)(local_84);
        (*(code *)PTR_printf_006126e8)("[GetFWINFO] create socket IP:[%s]\n",uVar2);
        iVar1 = (*(code *)PTR_connect_00614638)(DAT_0061593c,&local_88,0x10);
        puVar10 = PTR_stderr_006137c8;
        if (iVar1 != -1) {
          if (DAT_00615944 == 0x50) {
            return 1;
          }
          (*(code *)PTR_SSL_library_init_006131c0)();
          (*(code *)PTR_fputs_006132bc)(&DAT_005addc0,*(undefined4 *)puVar10);
          (*(code *)PTR_SSL_load_error_strings_006142d8)();
          uVar2 = (*(code *)PTR_SSLv23_client_method_006133f4)();
          DAT_00615940 = (*(code *)PTR_SSL_CTX_new_00613ab0)(uVar2);
          if (((DAT_00615940 == 0) ||
              (DAT_00615938 = (*(code *)PTR_SSL_new_00612fdc)(DAT_00615940), DAT_00615938 == 0)) ||
             (iVar1 = (*(code *)PTR_SSL_set_fd_0061394c)(DAT_00615938,DAT_0061593c), iVar1 == 0)) {
            uVar2 = *(undefined4 *)puVar10;
          }
          else {
            (*(code *)PTR_RAND_poll_00614088)();
            while (iVar1 = (*(code *)PTR_RAND_status_00612968)(), iVar1 == 0) {
              iVar1 = (*(code *)PTR_rand_00612cbc)();
              local_90[0] = (undefined2)(iVar1 % 0x10000);
              (*(code *)PTR_RAND_seed_00613abc)(local_90,2);
            }
            iVar1 = (*(code *)PTR_SSL_connect_00614a84)(DAT_00615938);
            if (iVar1 == 1) {
              return 1;
            }
            uVar2 = *(undefined4 *)PTR_stderr_006137c8;
          }
          (*(code *)PTR_ERR_print_errors_fp_00614904)(uVar2);
          goto LAB_00431128;
        }
        uVar7 = *(undefined4 *)PTR_stderr_006137c8;
        puVar4 = (undefined4 *)(*(code *)PTR___errno_location_00614824)();
        uVar2 = (*(code *)PTR_strerror_00612748)(*puVar4);
        pcVar5 = "Connect Error:%s\a\n";
      }
    }
    else {
      uVar7 = *(undefined4 *)PTR_stderr_006137c8;
      uVar2 = (*(code *)PTR_gai_strerror_00613580)(iVar1);
      pcVar5 = "getaddrinfo: %s\n";
    }
    (*(code *)PTR_fprintf_00612f5c)(uVar7,pcVar5,uVar2);
  }
  else {
    (*(code *)PTR_puts_00612670)("ping error");
  }
LAB_00431128:
  FUN_00430944();
  return 0xffffffff;
}


/* FUN_0043116c @ 0043116c */

undefined4 FUN_0043116c(undefined4 param_1,undefined4 param_2)

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
  
  (*(code *)PTR_memset_006130cc)(local_1028,0,0x400);
  (*(code *)PTR_memset_006130cc)(auStack_c28,0,0x400);
  (*(code *)PTR_memset_006130cc)(local_828,0,0x400);
  (*(code *)PTR_memset_006130cc)(local_428,0,0x400);
  FUN_00430944();
  iVar1 = FUN_00430c30("http://dev.ncpo.cc");
  if (iVar1 == -1) {
LAB_00431548:
    FUN_00430944();
    uVar4 = 0xffffffff;
  }
  else {
    (*(code *)PTR_sprintf_00612e20)
              (auStack_c28,
               "GET %s HTTP/1.1\r\nAccept: */*\r\nAccept-Language: zh-cn\r\nUser-Agent: Mozilla/4.0 (compatible; MSIE 5.01; Windows NT 5.0)\r\nHost: %s:%d\r\nConnection: Close\r\n\r\n"
               ,param_1,&DAT_00615948,DAT_00615944);
    (*(code *)PTR_puts_00612670)("[GetFWINFO] Send HTTP Request:");
    iVar8 = 0;
    (*(code *)PTR_puts_00612670)(auStack_c28);
    iVar1 = (*(code *)PTR_strlen_00613f4c)(auStack_c28);
    while (iVar8 < iVar1) {
      uVar6 = DAT_0061593c;
      pcVar9 = (code *)PTR_write_00613734;
      if (DAT_00615944 != 0x50) {
        uVar6 = DAT_00615938;
        pcVar9 = (code *)PTR_SSL_write_00612f64;
      }
      iVar7 = (*pcVar9)(uVar6,auStack_c28 + iVar8,iVar1 - iVar8);
      iVar8 = iVar8 + iVar7;
      if (iVar7 == -1) {
        (*(code *)PTR_puts_00612670)("[GetFWINFO] send http fail...");
        goto LAB_00431548;
      }
      (*(code *)PTR_printf_006126e8)("%d bytes send OK!\n",iVar8);
    }
    puVar2 = local_10a8;
    do {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    } while (puVar2 != (uint *)local_1028);
    local_10a8[DAT_0061593c >> 5] = local_10a8[DAT_0061593c >> 5] | 1 << (DAT_0061593c & 0x1f);
    local_10b0 = 5;
    local_10ac = 0;
    iVar1 = (*(code *)PTR_select_00613cc4)(DAT_0061593c + 1,local_10a8,0,0,&local_10b0);
    if ((iVar1 < 0) && (piVar3 = (int *)(*(code *)PTR___errno_location_00614824)(), *piVar3 != 4)) {
      (*(code *)PTR_printf_006126e8)("select error");
      uVar4 = 0xffffffff;
    }
    else {
      if (DAT_00615944 == 0x50) {
        iVar7 = 0;
        iVar8 = 0;
        iVar1 = 0;
        while( true ) {
          iVar5 = (*(code *)PTR_read_00613d88)(DAT_0061593c,local_1028,1);
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
          iVar5 = (*(code *)PTR_SSL_read_006139b0)(DAT_00615938,local_1028,1);
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
      (*(code *)PTR_strcpy_00612464)(param_2,local_428);
      FUN_00430944();
      uVar4 = 1;
    }
  }
  return uVar4;
}


/* FUN_00431584 @ 00431584 */

undefined4 FUN_00431584(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 auStack_920 [256];
  undefined1 auStack_820 [2048];
  int local_20;
  
  (*(code *)PTR_strcpy_00612464)
            (auStack_920,
             "/homekit/getlastfwinfo/?guid=034fghijsdernck98674d32hjk&product=smartsocketwithmeter")
  ;
  iVar1 = FUN_0043116c(auStack_920,auStack_820);
  uVar2 = 0xffffffff;
  if (iVar1 == 1) {
    (*(code *)PTR_printf_006126e8)("[GetFWINFO]Send fw info API done RES = [%s] \n",auStack_820);
    iVar1 = (*(code *)PTR_strstr_00612aa4)(auStack_820,"information");
    if (iVar1 == 0) {
      iVar1 = (*(code *)PTR_strstr_00612aa4)(auStack_820,"400 Bad Request");
      uVar2 = 0xffffffff;
      if (iVar1 != 0) {
        (*(code *)PTR_puts_00612670)("Bad Request");
        uVar2 = 0xffffffff;
      }
    }
    else {
      iVar1 = (*(code *)PTR_strstr_00612aa4)(auStack_820,"\"fwver\":\"");
      iVar1 = iVar1 + 9;
      iVar3 = (*(code *)PTR_strstr_00612aa4)(iVar1,&DAT_005adf88);
      (*(code *)PTR_snprintf_00613e24)(&DAT_00615930,(iVar3 + 1) - iVar1,"%s",iVar1);
      local_20 = (*(code *)PTR_strstr_00612aa4)(auStack_820,"update_url\":\"");
      local_20 = local_20 + 0xd;
      iVar1 = (*(code *)PTR_strstr_00612aa4)(local_20,&DAT_005adf9c);
      (*(code *)PTR_snprintf_00613e24)(&DAT_00615730,(iVar1 + 1) - local_20,"%s");
      (*(code *)PTR_printf_006126e8)
                ("[GetFWINFO] Get FW info from HTTP API : ver:[%s] URL:[%s]\n",&DAT_00615930,
                 &DAT_00615730);
      uVar2 = 1;
    }
  }
  return uVar2;
}


/* checkFWInfo @ 00431740 */

undefined4 checkFWInfo(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_00431584();
  if (0 < iVar1) {
    (*(code *)PTR_sprintf_00612e20)(param_1,&DAT_00615730);
    iVar1 = FUN_004306e0();
    if (0 < iVar1) {
      return 1;
    }
  }
  return 0xffffffff;
}


/* FUN_004317a0 @ 004317a0 */

void FUN_004317a0(void)

{
                    /* WARNING: Could not recover jumptable at 0x004317b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_pthread_cancel_00612cf0)(DAT_00615e50);
  return;
}


/* HomekitOTAThreadStart @ 004317c0 */

undefined4 HomekitOTAThreadStart(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_40 [40];
  undefined4 local_18;
  
  local_18 = param_1;
  (*(code *)PTR_pthread_attr_init_006143b4)(auStack_40);
  uVar2 = 0xffffffff;
  (*(code *)PTR_pthread_attr_setdetachstate_00614770)(auStack_40,1);
  iVar1 = (*(code *)PTR_pthread_create_00613740)(&DAT_00615e50,auStack_40,FUN_00431864,local_18);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  (*(code *)PTR_pthread_attr_destroy_00613830)(auStack_40);
  return uVar2;
}


/* FUN_00431864 @ 00431864 */

void FUN_00431864(int param_1)

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
  
  (*(code *)PTR_memset_006130cc)(auStack_138,0,0x88);
  (*(code *)PTR_memset_006130cc)(auStack_b0,0,0x88);
  do {
    iVar2 = (*(code *)PTR_access_00613bac)("/var/fwProgress",4);
    if (iVar2 == 0) {
      iVar2 = (*(code *)PTR_fopen_0061395c)("/var/fwProgress","r");
      if (iVar2 == 0) goto LAB_00431928;
      uVar4 = (*(code *)PTR_fileno_00613768)(iVar2);
      iVar3 = (*(code *)PTR_flock_0061302c)(uVar4,2);
      if (iVar3 == 0) {
        (*(code *)PTR_fscanf_00612638)(iVar2,"%s %d %d",auStack_b0,&local_30,&local_2c);
        uVar4 = (*(code *)PTR_fileno_00613768)(iVar2);
        (*(code *)PTR_flock_0061302c)(uVar4,8);
        (*(code *)PTR_fclose_00613a3c)(iVar2);
      }
      puVar1 = PTR_HKUpdateValueToGlobalEventTable_006149fc;
      if (local_2c == 200) {
        unaff_s0 = 0;
        goto LAB_00431ac0;
      }
      if (200 < (int)local_2c) {
        if (local_2c == 0x191) {
          (*(code *)PTR_puts_00612670)("verify fw fail");
          unaff_s0 = 3;
        }
        else if (local_2c == 0x192) {
          (*(code *)PTR_puts_00612670)("upgrade fw fail");
          unaff_s0 = 4;
        }
        else if (local_2c == 400) {
          (*(code *)PTR_puts_00612670)("download fw fail");
          unaff_s0 = 2;
        }
LAB_00431ac0:
        puVar1 = PTR_printf_006126e8;
        *(int *)(param_1 + 0x804) = local_30;
        (*(code *)puVar1)("Progress:[%d] Result:[%d]\n",local_30,unaff_s0);
        (*(code *)PTR_HKUpdateValueToGlobalEventTable_006149fc)(0x13,local_30);
        puVar1 = PTR_HKUpdateValueToGlobalEventTable_006149fc;
        *(undefined4 *)(param_1 + 0x808) = unaff_s0;
        (*(code *)puVar1)(0x14,unaff_s0);
        (*(code *)PTR_memset_006130cc)(auStack_b0,0,0x88);
        (*(code *)PTR_memset_006130cc)(auStack_138,0,0x88);
        (*(code *)PTR_pthread_exit_00612d68)(0);
        return;
      }
      if (7 < local_2c) goto LAB_00431ac0;
      if (local_30 != local_b8) {
        local_b8 = local_30;
        *(int *)(param_1 + 0x804) = local_30;
        (*(code *)puVar1)(0x13);
      }
      uVar4 = 2;
    }
    else {
LAB_00431928:
      uVar4 = 1;
    }
    (*(code *)PTR_sleep_0061454c)(uVar4);
  } while( true );
}


/* HomekitSerialFuncRegister @ 00431b70 */

void HomekitSerialFuncRegister(int *param_1)

{
  if (*param_1 != 0) {
    DAT_00615e60 = *param_1;
  }
  if (param_1[3] != 0) {
    DAT_00615e6c = param_1[3];
  }
  if (param_1[1] != 0) {
    DAT_00615e64 = param_1[1];
  }
  if (param_1[2] != 0) {
    DAT_00615e68 = param_1[2];
  }
  return;
}


/* HomekitSerialOpen @ 00431bc8 */

undefined4 HomekitSerialOpen(void)

{
  undefined4 uVar1;
  
  if (DAT_00615e60 == (code *)0x0) {
    return 0xffffffff;
  }
                    /* WARNING: Could not recover jumptable at 0x00431be4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*DAT_00615e60)();
  return uVar1;
}


/* homekitUserSerialRead @ 00431c10 */

undefined4 homekitUserSerialRead(void)

{
  (*(code *)PTR_Serial_Gpio_Read_00614a6c)();
  return 0;
}


/* homekitUserSerialWrite @ 00431c44 */

undefined4 homekitUserSerialWrite(void)

{
  (*(code *)PTR_Serial_Gpio_Write_0061489c)();
  return 0;
}


/* homekitUserSerialClose @ 00431c78 */

undefined4 homekitUserSerialClose(void)

{
  (*(code *)PTR_Serial_Gpio_Close_00612e24)();
  return 0;
}


/* homekitUserSerialOpen @ 00431cac */

undefined4 homekitUserSerialOpen(void)

{
  (*(code *)PTR_Serial_Gpio_Open_00613354)();
  return 0;
}


/* FUN_00431ce0 @ 00431ce0 */

void FUN_00431ce0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00431cf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_pthread_cancel_00612cf0)(DAT_00615e70);
  return;
}


/* HomekitSerialThreadStart @ 00431d94 */

undefined4 HomekitSerialThreadStart(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_38 [44];
  
  DAT_00615e60 = 0;
  DAT_00615e6c = 0;
  DAT_00615e64 = 0;
  DAT_00615e68 = 0;
  (*(code *)PTR_pthread_mutex_init_006144d8)(&DAT_00615e74,0);
  (*(code *)PTR_sem_init_00614ae4)(&DAT_00615e8c,0,0);
  (*(code *)PTR_sem_init_00614ae4)(&DAT_00615e9c,0,0);
  uVar2 = 0xffffffff;
  (*(code *)PTR_pthread_attr_init_006143b4)(auStack_38);
  (*(code *)PTR_pthread_attr_setdetachstate_00614770)(auStack_38,1);
  iVar1 = (*(code *)PTR_pthread_create_00613740)(&DAT_00615e70,auStack_38,FUN_00431eb4,0);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  (*(code *)PTR_meterHandlerInit_00613fd8)();
  (*(code *)PTR_pthread_attr_destroy_00613830)(auStack_38);
  return uVar2;
}


/* FUN_00431eb4 @ 00431eb4 */

void FUN_00431eb4(void)

{
  int iVar1;
  int *piVar2;
  undefined1 auStack_40 [4];
  int local_3c;
  undefined1 auStack_38 [16];
  
  (*(code *)PTR_pthread_setcancelstate_006124f0)(0,0);
  (*(code *)PTR_pthread_setcanceltype_00614a1c)(1,0);
  (*(code *)PTR__pthread_cleanup_push_0061428c)(auStack_38,&LAB_00432084,0);
LAB_00431f64:
  do {
    (*(code *)PTR_clock_gettime_006147a0)(0,auStack_40);
    local_3c = local_3c + 49999999;
    do {
      iVar1 = (*(code *)PTR_sem_timedwait_00613900)(&DAT_00615e8c,auStack_40);
      if (iVar1 != -1) {
        if (DAT_00615e64 != (code *)0x0) {
          (*DAT_00615e64)(DAT_00615eac);
        }
        if (DAT_00615e68 != (code *)0x0) {
          (*DAT_00615e68)(DAT_00615eac);
        }
        (*(code *)PTR_sem_post_00612ac8)(&DAT_00615e9c);
        goto LAB_00431f64;
      }
      piVar2 = (int *)(*(code *)PTR___errno_location_00614824)();
    } while (*piVar2 == 4);
    if (*piVar2 == 0x91) {
      if (DAT_00615e68 != (code *)0x0) {
        (*DAT_00615e68)(DAT_00615eac);
      }
      if (DAT_00615e64 != (code *)0x0) {
        (*DAT_00615e64)(DAT_00615eac);
      }
    }
  } while( true );
}


/* HKSetupDNSServiceName @ 00432100 */

void HKSetupDNSServiceName(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_118 [256];
  int local_18;
  
  (*(code *)PTR_strcpy_00612464)(auStack_118," flash get MFI_WAC_DEVICE_NAME > /var/wacNameInfo");
  (*(code *)PTR_system_00614714)(auStack_118);
  iVar1 = (*(code *)PTR_fopen_0061395c)("/var/wacNameInfo","r");
  if (iVar1 != 0) {
    (*(code *)PTR_memset_006130cc)(auStack_118,0,0x100);
    (*(code *)PTR_fread_006139f4)(auStack_118,0x100,1,iVar1);
    iVar2 = (*(code *)PTR_strstr_00612aa4)(auStack_118,"MFI_WAC_DEVICE_NAME=\"");
    if (iVar2 != 0) {
      local_18 = iVar2 + 0x15;
      iVar2 = (*(code *)PTR_strchr_006127e8)(iVar2 + 0x15,0x22);
      (*(code *)PTR_snprintf_00613e24)(&DAT_00615eb0,(iVar2 - local_18) + 1,"%s");
    }
    (*(code *)PTR_fclose_00613a3c)(iVar1);
  }
  (*(code *)PTR_system_00614714)("rm -f /var/wacNameInfo");
  (*(code *)PTR_strcpy_00612464)(param_1,&DAT_00615eb0);
  return;
}


/* HKSetupAccessoryType @ 00432274 */

void HKSetupAccessoryType(undefined1 *param_1)

{
  *param_1 = DAT_005b7cc4;
  return;
}


/* HKSetupFirmwareVersion @ 00432284 */

void HKSetupFirmwareVersion(undefined4 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0043229c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_memcpy_00614674)(param_1,"10219",5);
  return;
}


/* HKCharacteristicInit @ 004322a4 */

void HKCharacteristicInit(int param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 *puVar4;
  
  (*(code *)PTR_strcpy_00612464)(param_1,&DAT_00615eb0);
  uVar2 = (*(code *)PTR_calloc_006148c0)(4,1);
  puVar1 = PTR_HKsetupCodeInit_00612b58;
  *(undefined4 *)(param_1 + 0x158) = uVar2;
  iVar3 = (*(code *)puVar1)(uVar2);
  if (iVar3 == 0) {
    (*(code *)PTR_memcpy_00614674)(*(undefined4 *)(param_1 + 0x158),"273-49-151",10);
  }
  puVar4 = (undefined1 *)(*(code *)PTR_calloc_006148c0)(0x814,1);
  puVar1 = PTR_memset_006130cc;
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


/* HKWriteCharacteristicEvent @ 00432388 */

void HKWriteCharacteristicEvent
               (undefined4 param_1,int param_2,uint param_3,undefined4 *param_4,undefined4 param_5,
               undefined4 param_6)

{
  undefined4 uVar1;
  
  if ((param_2 == 9) || (param_2 == 10)) {
    (*(code *)PTR_HKUpdateEnableToPrivateEventTable_00612d18)(param_6,param_2,param_3 >> 0x18);
    *param_4 = 0;
  }
  else if (((param_2 == 0xe) || (param_2 == 0xf)) || (param_2 == 0xd)) goto LAB_0043245c;
  if (param_2 == 0x13) {
    uVar1 = 0x13;
  }
  else if (param_2 == 0x14) {
    uVar1 = 0x14;
  }
  else {
    if (param_2 != 0x12) {
      return;
    }
    uVar1 = 0x12;
  }
  (*(code *)PTR_HKUpdateEnableToPrivateEventTable_00612d18)(param_6,uVar1,param_3 >> 0x18);
LAB_0043245c:
  *param_4 = 0;
  return;
}


/* HKUserTriggerIdentify @ 0043247c */

void HKUserTriggerIdentify(void)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    iVar1 = iVar1 + 1;
    (*(code *)PTR_sleep_0061454c)(1);
    (*(code *)PTR_Identify_LEDSetup_006126f4)(1);
    (*(code *)PTR_sleep_0061454c)(1);
    (*(code *)PTR_Identify_LEDSetup_006126f4)(0);
  } while (iVar1 != 3);
  return;
}


/* HKWriteCharacteristicValue @ 00432518 */

void HKWriteCharacteristicValue
               (undefined4 param_1,int param_2,uint param_3,undefined4 *param_4,int param_5)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  code *pcVar4;
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
    goto LAB_004325ac;
  case 5:
    iVar2 = param_5 + 0x9e;
LAB_004325ac:
    uVar3 = 0x1e;
    goto LAB_004325b4;
  case 6:
    if (param_3 < 2) {
      (*(code *)PTR_Identify_SwitchSetup_0061404c)((int)(char)param_3);
      goto LAB_004325bc;
    }
    *param_4 = 0xfffeecf6;
    goto LAB_00432624;
  default:
    if (param_2 != 9) goto LAB_00432624;
    if (1 < param_3) goto LAB_00432738;
    iVar2 = (int)(char)param_3;
    pcVar4 = (code *)PTR_Relay_SwitchSetup_0061359c;
    goto LAB_004326e4;
  }
  uVar3 = 0x40;
LAB_004325b4:
  (*(code *)PTR_strncpy_00613414)(iVar2,param_3,uVar3);
LAB_004325bc:
  *param_4 = 0;
LAB_00432624:
  puVar1 = PTR_checkFWInfo_00613b48;
  if (param_2 == 0x12) {
    if (param_3 == 1) {
      *(undefined4 *)(*(int *)(param_5 + 0x154) + 0x808) = 1;
      iVar2 = (*(code *)puVar1)(auStack_a18);
      if (iVar2 < 1) {
        (*(code *)PTR_puts_00612670)("download fw fail, check WiFi connection");
        puVar1 = PTR_HKUpdateValueToGlobalEventTable_006149fc;
        *(undefined4 *)(*(int *)(param_5 + 0x154) + 0x810) = 2;
        (*(code *)puVar1)(0x14,2);
      }
      else {
        (*(code *)PTR_puts_00612670)("Set Firmware start!!!");
        (*(code *)PTR_sprintf_00612e20)(auStack_818,"upgfw %s&",auStack_a18);
        (*(code *)PTR_system_00614714)(auStack_818);
        (*(code *)PTR_printf_006126e8)("Create thread for OTA progress=>%d!\n\n",0);
        (*(code *)PTR_HKUpdateValueToGlobalEventTable_006149fc)(0x13,0);
        iVar2 = *(int *)(param_5 + 0x154) + 8;
        pcVar4 = (code *)PTR_HomekitOTAThreadStart_00614aa8;
LAB_004326e4:
        (*pcVar4)(iVar2);
      }
      *param_4 = 0;
    }
    else if (param_3 == 0) {
      *param_4 = 0;
    }
    else {
LAB_00432738:
      *param_4 = 0xfffeecf6;
    }
  }
  return;
}


/* HKReadCharacteristicValue @ 0043275c */

undefined4 HKReadCharacteristicValue(undefined4 param_1,int param_2,uint *param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  code *pcVar3;
  
  switch(param_2) {
  case 2:
    *param_3 = param_4;
    goto LAB_00432830;
  case 3:
    uVar2 = param_4 + 0x40;
    break;
  case 4:
    uVar2 = param_4 + 0x80;
    break;
  case 5:
    uVar2 = param_4 + 0x9e;
    break;
  case 6:
    *(undefined1 *)param_3 = 1;
    goto LAB_00432830;
  default:
    pcVar3 = (code *)PTR_Relay_SwitchState_00613c04;
    if ((param_2 != 9) && (pcVar3 = (code *)PTR_outlet_InusedRead_00613c6c, param_2 != 10))
    goto LAB_00432830;
    iVar1 = (*pcVar3)();
    *param_3 = (uint)(iVar1 == 1);
    goto LAB_0043287c;
  }
  *param_3 = uVar2;
LAB_00432830:
  pcVar3 = (code *)PTR_get_current_value_006146f8;
  if (((param_2 == 0xe) || (pcVar3 = (code *)PTR_get_power_value_006129ac, param_2 == 0xf)) ||
     (pcVar3 = (code *)PTR_get_voltage_value_006131b4, param_2 == 0xd)) {
    uVar2 = (*pcVar3)();
    *param_3 = uVar2;
  }
  else {
LAB_0043287c:
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


/* FUN_004328f0 @ 004328f0 */

void FUN_004328f0(byte *param_1,uint param_2,undefined1 *param_3)

{
  byte bVar1;
  undefined1 uVar2;
  int iVar3;
  uint uVar4;
  undefined1 *puVar5;
  undefined1 auStack_28 [24];
  
  (*(code *)PTR_memcpy_00614674)(auStack_28,"0123456789abcdef",0x11);
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


/* Relay_SwitchState @ 004329bc */

int Relay_SwitchState(void)

{
  return (int)DAT_00615f20;
}


/* outlet_InusedRead @ 004329cc */

int outlet_InusedRead(void)

{
  return (int)DAT_00615f21;
}


/* get_power_value @ 004329dc */

/* WARNING: Unknown calling convention */

float get_power_value(void)

{
  float fVar1;
  int iVar2;
  
  fVar1 = DAT_00615f10;
  iVar2 = (*(code *)PTR___gtsf2_0061291c)(DAT_00615f10,DAT_005ae810);
  if (iVar2 < 1) {
    iVar2 = (*(code *)PTR___ltsf2_00614658)(fVar1,0);
    if (iVar2 < 0) {
      DAT_00615f10 = 0.0;
    }
  }
  else {
    DAT_00615f10 = DAT_005ae810;
  }
  return DAT_00615f10;
}


/* get_current_value @ 00432a70 */

/* WARNING: Unknown calling convention */

float get_current_value(void)

{
  float fVar1;
  int iVar2;
  
  fVar1 = DAT_00615f0c;
  iVar2 = (*(code *)PTR___gtsf2_0061291c)(DAT_00615f0c,DAT_005ae814);
  if (iVar2 < 1) {
    iVar2 = (*(code *)PTR___ltsf2_00614658)(fVar1,0);
    if (iVar2 < 0) {
      DAT_00615f0c = 0.0;
    }
  }
  else {
    DAT_00615f0c = DAT_005ae814;
  }
  return DAT_00615f0c;
}


/* get_voltage_value @ 00432b04 */

/* WARNING: Unknown calling convention */

float get_voltage_value(void)

{
  float fVar1;
  int iVar2;
  
  fVar1 = DAT_00615f08;
  iVar2 = (*(code *)PTR___gtsf2_0061291c)(DAT_00615f08,DAT_005ae818);
  if (iVar2 < 1) {
    iVar2 = (*(code *)PTR___ltsf2_00614658)(fVar1,0);
    if (iVar2 < 0) {
      DAT_00615f08 = 0.0;
    }
  }
  else {
    DAT_00615f08 = DAT_005ae818;
  }
  return DAT_00615f08;
}


/* meterHandlerInit @ 00432b94 */

void meterHandlerInit(void)

{
  int iVar1;
  undefined1 auStack_30 [4];
  undefined1 auStack_2c [36];
  
  (*(code *)PTR_pthread_attr_init_006143b4)(auStack_2c);
  (*(code *)PTR_pthread_attr_setdetachstate_00614770)(auStack_2c,1);
  iVar1 = (*(code *)PTR_pthread_create_00613740)(auStack_30,auStack_2c,FUN_00434a3c,0);
  if (iVar1 != 0) {
    (*(code *)PTR_puts_00612670)("serial port thread create error");
  }
  (*(code *)PTR_pthread_attr_destroy_00613830)(auStack_2c);
  return;
}


/* Serial_Gpio_Write @ 00432c38 */

undefined4 Serial_Gpio_Write(void)

{
  if (DAT_00615f31 == '\0') {
    if (DAT_00615f22 != DAT_00615f30) {
      DAT_00615f31 = '\x01';
    }
  }
  else {
    if (DAT_00615f31 == '\x01') {
      DAT_00615f21 = DAT_00615f22;
      DAT_00615f30 = DAT_00615f22;
      (*(code *)PTR_HKUpdateValueToGlobalEventTable_006149fc)(10);
    }
    DAT_00615f31 = '\0';
  }
  return 0;
}


/* Serial_Gpio_Close @ 00432cd0 */

undefined4 Serial_Gpio_Close(void)

{
  (*(code *)PTR_fprintf_00612f5c)
            (*(undefined4 *)PTR_stderr_006137c8,"\nFILE %s FUNCTION %s LINE %d: Do serial close\n\n"
             ,
             "/home/vendor/rtl819x_v3464_homekit/users/phytrex-homekit/customize/Incipio_Socket_Meter/Socket_Meter.c"
             ,"Serial_Gpio_Close",0x353);
  return 0xffffffff;
}


/* Identify_LEDSetup @ 00432d24 */

undefined4 Identify_LEDSetup(char param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1 == '\x01') {
    iVar1 = (*(code *)PTR_fopen_0061395c)("/proc/wlan0/gpio_ctrl","w");
    if (iVar1 == 0) {
      return 0xffffffff;
    }
    uVar2 = 0;
  }
  else {
    if (param_1 != '\0') {
      return 0xffffffff;
    }
    iVar1 = (*(code *)PTR_fopen_0061395c)("/proc/wlan0/gpio_ctrl","w");
    if (iVar1 == 0) {
      return 0xffffffff;
    }
    uVar2 = 1;
  }
  (*(code *)PTR_fprintf_00612f5c)(iVar1,"set %d %d",6,uVar2);
  (*(code *)PTR_fclose_00613a3c)(iVar1);
  return 0;
}


/* FUN_00432e0c @ 00432e0c */

undefined4 FUN_00432e0c(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (*(code *)PTR_fopen_0061395c)("/proc/wlan0/gpio_ctrl","w");
  uVar2 = 0xffffffff;
  if (iVar1 != 0) {
    (*(code *)PTR_fprintf_00612f5c)(iVar1,"set %d %d",5,param_1);
    DAT_00615f2c = param_1;
    (*(code *)PTR_fclose_00613a3c)(iVar1);
    uVar2 = 0;
  }
  return uVar2;
}


/* Identify_SwitchSetup @ 00432ea4 */

undefined4 Identify_SwitchSetup(char param_1)

{
  int iVar1;
  
  if (param_1 == '\0') {
    (*(code *)PTR_fprintf_00612f5c)
              (*(undefined4 *)PTR_stderr_006137c8,
               "\nFILE %s FUNCTION %s LINE %d: identify LED Off\n\n",
               "/home/vendor/rtl819x_v3464_homekit/users/phytrex-homekit/customize/Incipio_Socket_Meter/Socket_Meter.c"
               ,"Identify_SwitchSetup",0x378);
    iVar1 = (*(code *)PTR_fopen_0061395c)("/proc/wlan0/gpio_ctrl","w");
    if (iVar1 == 0) {
      return 1;
    }
    (*(code *)PTR_fprintf_00612f5c)(iVar1,"set %d %d",6,1);
    (*(code *)PTR_fclose_00613a3c)(iVar1);
  }
  else {
    if (param_1 != '\x01') {
      (*(code *)PTR_fprintf_00612f5c)
                (*(undefined4 *)PTR_stderr_006137c8,"\nFILE %s FUNCTION %s LINE %d: bad request\n\n"
                 ,
                 "/home/vendor/rtl819x_v3464_homekit/users/phytrex-homekit/customize/Incipio_Socket_Meter/Socket_Meter.c"
                 ,"Identify_SwitchSetup",0x388);
      return 0xffffffff;
    }
    (*(code *)PTR_fprintf_00612f5c)
              (*(undefined4 *)PTR_stderr_006137c8,
               "\nFILE %s FUNCTION %s LINE %d: identify LED blink\n\n",
               "/home/vendor/rtl819x_v3464_homekit/users/phytrex-homekit/customize/Incipio_Socket_Meter/Socket_Meter.c"
               ,"Identify_SwitchSetup",0x372);
    (*(code *)PTR_HKUserTriggerIdentify_00613c44)();
  }
  return 0;
}


/* Serial_Gpio_Open @ 00432fec */

undefined4 Serial_Gpio_Open(void)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fopen_0061395c)("/proc/wlan0/gpio_ctrl","w");
  if (iVar1 != 0) {
    (*(code *)PTR_fprintf_00612f5c)(iVar1,"config %d w",6);
    (*(code *)PTR_fclose_00613a3c)(iVar1);
  }
  iVar1 = (*(code *)PTR_fopen_0061395c)("/proc/wlan0/gpio_ctrl","w");
  if (iVar1 != 0) {
    (*(code *)PTR_fprintf_00612f5c)(iVar1,"config %d r",0);
    (*(code *)PTR_fclose_00613a3c)(iVar1);
  }
  iVar1 = (*(code *)PTR_fopen_0061395c)("/proc/wlan0/gpio_ctrl","w");
  if (iVar1 != 0) {
    (*(code *)PTR_fprintf_00612f5c)(iVar1,"config %d w",5);
    (*(code *)PTR_fclose_00613a3c)(iVar1);
  }
  (*(code *)PTR_printf_006126e8)("FW Version is %s\n","10219");
  Identify_LEDSetup(0);
  return 0;
}


/* Serial_Gpio_Read @ 00433154 */

undefined4 Serial_Gpio_Read(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined2 local_c;
  undefined1 local_a;
  
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  local_c = 0;
  local_a = 0;
  iVar1 = (*(code *)PTR_fopen_0061395c)("/proc/wlan0/gpio_ctrl","r");
  if (iVar1 != 0) {
    (*(code *)PTR_fseek_00612d1c)(iVar1,0,0);
    iVar2 = (*(code *)PTR_fread_006139f4)(&local_18,1,0xf,iVar1);
    if (iVar2 == 0) {
      (*(code *)PTR_fclose_00613a3c)(iVar1);
      Serial_Gpio_Close();
      Serial_Gpio_Open();
      (*(code *)PTR_fprintf_00612f5c)
                (*(undefined4 *)PTR_stderr_006137c8,
                 "\nFILE %s FUNCTION %s LINE %d: gpio re-config...\n\n",
                 "/home/vendor/rtl819x_v3464_homekit/users/phytrex-homekit/customize/Incipio_Socket_Meter/Socket_Meter.c"
                 ,"Serial_Gpio_Read",0x31d);
      return 1;
    }
    (*(code *)PTR_fclose_00613a3c)(iVar1);
    if (local_14._2_1_ == '1') {
      DAT_00615f22 = 0;
    }
    else {
      DAT_00615f22 = 1;
    }
  }
  if (DAT_00615f24 == 1) {
    if (DAT_00615f28 < 2) {
      DAT_00615f28 = DAT_00615f28 + 1;
      return 0;
    }
    uVar3 = 1;
    if (DAT_00615f2c != 0) {
      if (DAT_00615f2c != 1) {
        DAT_00615f28 = 0;
        return 0;
      }
      uVar3 = 0;
    }
    FUN_00432e0c(uVar3);
    DAT_00615f28 = 0;
    return 0;
  }
  if (DAT_00615f24 != 0) {
    return 0;
  }
  if (DAT_00615f2c != 0) {
    return 0;
  }
  FUN_00432e0c(1);
  return 0;
}


/* FUN_004332fc @ 004332fc */

int FUN_004332fc(void)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  puVar1 = PTR_receivebuffer_006136c0;
  (*(code *)PTR_memset_006130cc)(PTR_receivebuffer_006136c0,0,0x32);
  (*(code *)PTR_pthread_mutex_lock_00613f24)(&DAT_00615f34);
  iVar2 = (*(code *)PTR_read_00613d88)(DAT_00600b80,puVar1,0x32);
  if (iVar2 < 1) {
    (*(code *)PTR_pthread_mutex_unlock_00612b1c)(&DAT_00615f34);
    iVar2 = -1;
  }
  else {
    DAT_00615f4c = iVar2;
    (*(code *)PTR_printf_006126e8)("0x%x, 0x%x, 0x%x, 0x%x\n",*puVar1,puVar1[1],puVar1[2],puVar1[3])
    ;
    if (puVar1[DAT_00615f4c + -4] == -2) {
      if (puVar1[DAT_00615f4c + -1] == 'V') {
        if ((puVar1[DAT_00615f4c + -3] == '0') && (puVar1[DAT_00615f4c + -2] == '0')) {
          DAT_00615ee0 = 0;
          DAT_00615f20 = '\0';
          (*(code *)PTR_Store_hksettinginfo_00614810)(&DAT_00615ee0);
          uVar3 = 0;
        }
        else {
          uVar3 = 1;
          DAT_00615ee0 = 1;
          DAT_00615f20 = '\x01';
          (*(code *)PTR_Store_hksettinginfo_00614810)(&DAT_00615ee0);
        }
        (*(code *)PTR_printf_006126e8)("relay_switchstate = %d\n",(int)DAT_00615f20);
        (*(code *)PTR_HKUpdateValueToGlobalEventTable_006149fc)(9,uVar3);
      }
    }
    else if (((puVar1[DAT_00615f4c + -4] == -0x56) && (puVar1[DAT_00615f4c + -1] == 'U')) &&
            (puVar1[DAT_00615f4c + -3] == -1)) {
      if (puVar1[DAT_00615f4c + -2] == '\0') {
        (*(code *)PTR_puts_00612670)("hardware button trigger reset flow");
        DAT_00615f24 = 1;
      }
      else if (puVar1[DAT_00615f4c + -2] == -1) {
        DAT_00615f24 = 0;
        (*(code *)PTR_system_00614714)("flash default-sw");
        (*(code *)PTR_puts_00612670)(&DAT_005ae5cc);
        (*(code *)PTR_system_00614714)("homekitserver -c");
        (*(code *)PTR_system_00614714)("reboot");
      }
    }
    (*(code *)PTR_pthread_mutex_unlock_00612b1c)(&DAT_00615f34);
    iVar2 = (int)DAT_00615f20;
  }
  return iVar2;
}


/* FUN_0043357c @ 0043357c */

void FUN_0043357c(void)

{
  if (0 < DAT_00600b80) {
    (*(code *)PTR_tcsetattr_00613374)(DAT_00600b80,0x540e,PTR_serial_options_orig_00612c68);
    (*(code *)PTR_close_00613604)(DAT_00600b80);
    DAT_00600b80 = -1;
  }
  return;
}


/* FUN_004335e8 @ 004335e8 */

int FUN_004335e8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int unaff_s0;
  
  if (param_1 == 1) {
    unaff_s0 = (*(code *)PTR_open_0061479c)(PTR_s__dev_ttyACM0_005ee668,0x882);
    if (unaff_s0 == -1) {
LAB_004336b0:
      (*(code *)PTR_perror_00613058)("can\'t open tty port");
      return unaff_s0;
    }
    pcVar3 = "open ttyUSB0 .....";
  }
  else if (param_1 == 2) {
    unaff_s0 = (*(code *)PTR_open_0061479c)("/dev/ttyS1",0x882);
    if (unaff_s0 == -1) goto LAB_004336b0;
    pcVar3 = "open ttyS1 .....";
  }
  else {
    if (param_1 != 3) goto LAB_004336e4;
    unaff_s0 = (*(code *)PTR_open_0061479c)("/dev/ttyS2",0x882);
    if (unaff_s0 == -1) goto LAB_004336b0;
    pcVar3 = "open ttyS2 .....";
  }
  (*(code *)PTR_puts_00612670)(pcVar3);
LAB_004336e4:
  iVar1 = (*(code *)PTR_fcntl_00613e84)(unaff_s0,4,0);
  if (iVar1 < 0) {
    (*(code *)PTR_puts_00612670)("fcntl failed!");
  }
  else {
    uVar2 = (*(code *)PTR_fcntl_00613e84)(unaff_s0,4,0);
    (*(code *)PTR_printf_006126e8)("fcntl=%d\n",uVar2);
  }
  iVar1 = (*(code *)PTR_isatty_006136dc)(0);
  if (iVar1 == 0) {
    pcVar3 = "standard input is not a terminal device";
  }
  else {
    pcVar3 = "isatty success!";
  }
  (*(code *)PTR_puts_00612670)(pcVar3);
  (*(code *)PTR_printf_006126e8)("fd-open=%d\n",unaff_s0);
  return unaff_s0;
}


/* FUN_004337bc @ 004337bc */

undefined4 FUN_004337bc(undefined4 param_1,int param_2,int param_3,char param_4,int param_5)

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
  
  iVar2 = (*(code *)PTR_tcgetattr_006131fc)(param_1,auStack_4c);
  if (iVar2 != 0) {
    pcVar3 = "SetupSerial 1";
    goto LAB_00433a4c;
  }
  (*(code *)PTR_memset_006130cc)(local_80,0,0x34);
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
    (*(code *)PTR_cfsetispeed_00613cb4)(local_80,0xc);
    uVar4 = 0xc;
  }
  else if (param_2 < 0x12c1) {
    if (param_2 == 0x960) {
      (*(code *)PTR_cfsetispeed_00613cb4)(local_80,0xb);
      uVar4 = 0xb;
    }
    else {
LAB_00433998:
      (*(code *)PTR_cfsetispeed_00613cb4)(local_80,0xd);
      uVar4 = 0xd;
    }
  }
  else {
    if ((param_2 == 0x2580) || (param_2 != 0x1c200)) goto LAB_00433998;
    (*(code *)PTR_cfsetispeed_00613cb4)(local_80,0x1002);
    uVar4 = 0x1002;
  }
  (*(code *)PTR_cfsetospeed_00613954)(local_80,uVar4);
  if (param_5 == 1) {
    local_78 = local_78 & 0xffffffbf;
  }
  else if (param_5 == 2) {
    local_78 = local_78 | 0x40;
  }
  local_6a = 0;
  local_6b = 0;
  (*(code *)PTR_tcflush_00612f90)(param_1,0);
  iVar2 = (*(code *)PTR_tcsetattr_00613374)(param_1,0x540e,local_80);
  if (iVar2 == 0) {
    (*(code *)PTR_puts_00612670)("set done!");
    return 0;
  }
  pcVar3 = "com set error";
LAB_00433a4c:
  (*(code *)PTR_perror_00613058)(pcVar3);
  return 0xffffffff;
}


/* FUN_00433a90 @ 00433a90 */

/* WARNING: Restarted to delay deadcode elimination for space: ram */

void FUN_00433a90(void)

{
  int iVar1;
  char *pcVar2;
  
  (*(code *)PTR_puts_00612670)("USB Interface Enable...");
  DAT_00600b80 = FUN_004335e8(1);
  if (DAT_00600b80 < 0) {
    pcVar2 = "open_port error";
  }
  else {
    iVar1 = FUN_004337bc(DAT_00600b80,0x4b00,8,0x4e,1);
    if (-1 < iVar1) goto LAB_00433b20;
    pcVar2 = "set_opt error";
  }
  (*(code *)PTR_puts_00612670)(pcVar2);
LAB_00433b20:
                    /* WARNING: Could not recover jumptable at 0x00433b34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_printf_006126e8)("serialport fd=%d\n",DAT_00600b80);
  return;
}


/* FUN_00433b3c @ 00433b3c */

uint FUN_00433b3c(void)

{
  uint uVar1;
  
  uVar1 = DAT_00600b80;
  if ((int)DAT_00600b80 < 1) {
    FUN_00433a90();
    uVar1 = (uint)(0 < (int)DAT_00600b80);
  }
  return uVar1;
}


/* FUN_00433b80 @ 00433b80 */

/* WARNING: Unknown calling convention */

float FUN_00433b80(void)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  float fVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 local_c0 [2];
  char local_b8;
  undefined1 local_b7;
  undefined1 local_b6;
  uint local_ac [33];
  
  (*(code *)PTR_pthread_mutex_lock_00613f24)(&DAT_00615f34);
  iVar1 = FUN_00433b3c();
  if (iVar1 == 0) {
LAB_00433dfc:
    fVar4 = 0.0;
  }
  else {
    uVar2 = 0;
LAB_00433c14:
    do {
      while( true ) {
        if (0x1f < uVar2) break;
        local_ac[uVar2] = 0;
        uVar2 = uVar2 + 1;
      }
      local_c0[0] = 1;
      local_ac[DAT_00600b80 >> 5] = local_ac[DAT_00600b80 >> 5] | 1 << (DAT_00600b80 & 0x1f);
      iVar1 = (*(code *)PTR_write_00613734)(DAT_00600b80,&DAT_00600b70,0xe);
      if (iVar1 == -1) {
        FUN_0043357c();
        goto LAB_00433dfc;
      }
      iVar1 = (*(code *)PTR_select_00613cc4)(DAT_00600b80 + 1,local_ac,0,0,local_c0);
      if (iVar1 == -1) {
        (*(code *)PTR_puts_00612670)("select error.");
      }
      else {
        uVar2 = 0;
        if (iVar1 == 0) goto LAB_00433c14;
        (*(code *)PTR_read_00613d88)(DAT_00600b80,&local_b8,10);
      }
      uVar2 = 0;
    } while (local_b8 == -2);
    uVar3 = (*(code *)PTR___floatunsisf_006136b0)(local_b6);
    uVar5 = (*(code *)PTR___extendsfdf2_00612dc0)(uVar3);
    uVar5 = (*(code *)PTR___muldf3_006136f0)
                      ((int)((ulonglong)uVar5 >> 0x20),(int)uVar5,DAT_005ae820,DAT_005ae824);
    uVar3 = (*(code *)PTR___floatunsisf_006136b0)(local_b7);
    uVar6 = (*(code *)PTR___extendsfdf2_00612dc0)(uVar3);
    uVar5 = (*(code *)PTR___adddf3_0061364c)
                      ((int)((ulonglong)uVar5 >> 0x20),(int)uVar5,(int)((ulonglong)uVar6 >> 0x20),
                       (int)uVar6);
    uVar5 = (*(code *)PTR___adddf3_0061364c)((int)((ulonglong)uVar5 >> 0x20),(int)uVar5,0,0);
    fVar4 = (float)(*(code *)PTR___truncdfsf2_00614940)((int)((ulonglong)uVar5 >> 0x20),(int)uVar5);
    (*(code *)PTR___extendsfdf2_00612dc0)(fVar4);
    (*(code *)PTR_printf_006126e8)("power result value = %f\n");
  }
  (*(code *)PTR_pthread_mutex_unlock_00612b1c)(&DAT_00615f34);
  return fVar4;
}


/* FUN_00433e48 @ 00433e48 */

/* WARNING: Unknown calling convention */

float FUN_00433e48(void)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  float fVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 local_c0 [2];
  char local_b8;
  undefined1 local_b7;
  undefined1 local_b6;
  uint local_ac [33];
  
  (*(code *)PTR_pthread_mutex_lock_00613f24)(&DAT_00615f34);
  iVar1 = FUN_00433b3c();
  if (iVar1 == 0) {
LAB_004340c4:
    fVar4 = 0.0;
  }
  else {
    uVar2 = 0;
LAB_00433edc:
    do {
      while( true ) {
        if (0x1f < uVar2) break;
        local_ac[uVar2] = 0;
        uVar2 = uVar2 + 1;
      }
      local_c0[0] = 1;
      local_ac[DAT_00600b80 >> 5] = local_ac[DAT_00600b80 >> 5] | 1 << (DAT_00600b80 & 0x1f);
      iVar1 = (*(code *)PTR_write_00613734)(DAT_00600b80,&DAT_00600b60,0xe);
      if (iVar1 == -1) {
        FUN_0043357c();
        goto LAB_004340c4;
      }
      iVar1 = (*(code *)PTR_select_00613cc4)(DAT_00600b80 + 1,local_ac,0,0,local_c0);
      if (iVar1 == -1) {
        (*(code *)PTR_puts_00612670)("select error.");
      }
      else {
        uVar2 = 0;
        if (iVar1 == 0) goto LAB_00433edc;
        (*(code *)PTR_read_00613d88)(DAT_00600b80,&local_b8,10);
      }
      uVar2 = 0;
    } while (local_b8 == -2);
    uVar3 = (*(code *)PTR___floatunsisf_006136b0)(local_b6);
    uVar5 = (*(code *)PTR___extendsfdf2_00612dc0)(uVar3);
    uVar3 = (*(code *)PTR___floatunsisf_006136b0)(local_b7);
    uVar6 = (*(code *)PTR___extendsfdf2_00612dc0)(uVar3);
    uVar6 = (*(code *)PTR___muldf3_006136f0)
                      ((int)((ulonglong)uVar6 >> 0x20),(int)uVar6,DAT_005ae828,DAT_005ae82c);
    uVar5 = (*(code *)PTR___adddf3_0061364c)
                      ((int)((ulonglong)uVar5 >> 0x20),(int)uVar5,(int)((ulonglong)uVar6 >> 0x20),
                       (int)uVar6);
    uVar5 = (*(code *)PTR___adddf3_0061364c)((int)((ulonglong)uVar5 >> 0x20),(int)uVar5,0,0);
    fVar4 = (float)(*(code *)PTR___truncdfsf2_00614940)((int)((ulonglong)uVar5 >> 0x20),(int)uVar5);
    (*(code *)PTR___extendsfdf2_00612dc0)(fVar4);
    (*(code *)PTR_printf_006126e8)("Irms result value = %f\n");
  }
  (*(code *)PTR_pthread_mutex_unlock_00612b1c)(&DAT_00615f34);
  return fVar4;
}


/* FUN_00434110 @ 00434110 */

/* WARNING: Unknown calling convention */

float FUN_00434110(void)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  float fVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 local_c0 [2];
  char local_b8;
  undefined1 local_b7;
  undefined1 local_b6;
  uint local_ac [33];
  
  (*(code *)PTR_pthread_mutex_lock_00613f24)(&DAT_00615f34);
  iVar1 = FUN_00433b3c();
  if (iVar1 == 0) {
LAB_0043438c:
    fVar4 = 0.0;
  }
  else {
    uVar2 = 0;
LAB_004341a4:
    do {
      while( true ) {
        if (0x1f < uVar2) break;
        local_ac[uVar2] = 0;
        uVar2 = uVar2 + 1;
      }
      local_c0[0] = 1;
      local_ac[DAT_00600b80 >> 5] = local_ac[DAT_00600b80 >> 5] | 1 << (DAT_00600b80 & 0x1f);
      iVar1 = (*(code *)PTR_write_00613734)(DAT_00600b80,&DAT_00600b50,0xe);
      if (iVar1 == -1) {
        FUN_0043357c();
        goto LAB_0043438c;
      }
      iVar1 = (*(code *)PTR_select_00613cc4)(DAT_00600b80 + 1,local_ac,0,0,local_c0);
      if (iVar1 == -1) {
        (*(code *)PTR_puts_00612670)("select error.");
      }
      else {
        uVar2 = 0;
        if (iVar1 == 0) goto LAB_004341a4;
        (*(code *)PTR_read_00613d88)(DAT_00600b80,&local_b8,10);
      }
      uVar2 = 0;
    } while (local_b8 == -2);
    uVar3 = (*(code *)PTR___floatunsisf_006136b0)(local_b6);
    uVar3 = (*(code *)PTR___mulsf3_00612a58)(uVar3,DAT_005ae81c);
    uVar5 = (*(code *)PTR___extendsfdf2_00612dc0)(uVar3);
    uVar3 = (*(code *)PTR___floatunsisf_006136b0)(local_b7);
    uVar6 = (*(code *)PTR___extendsfdf2_00612dc0)(uVar3);
    uVar6 = (*(code *)PTR___muldf3_006136f0)
                      ((int)((ulonglong)uVar6 >> 0x20),(int)uVar6,DAT_005ae830,DAT_005ae834);
    uVar5 = (*(code *)PTR___adddf3_0061364c)
                      ((int)((ulonglong)uVar5 >> 0x20),(int)uVar5,(int)((ulonglong)uVar6 >> 0x20),
                       (int)uVar6);
    fVar4 = (float)(*(code *)PTR___truncdfsf2_00614940)((int)((ulonglong)uVar5 >> 0x20),(int)uVar5);
    (*(code *)PTR___extendsfdf2_00612dc0)(fVar4);
    (*(code *)PTR_printf_006126e8)("Vrms result value = %f\n");
  }
  (*(code *)PTR_pthread_mutex_unlock_00612b1c)(&DAT_00615f34);
  return fVar4;
}


/* FUN_004343d8 @ 004343d8 */

bool FUN_004343d8(void)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  undefined4 local_c0 [2];
  char local_b8;
  char local_b7;
  char local_b6;
  uint local_ac [33];
  
  (*(code *)PTR_pthread_mutex_lock_00613f24)(&DAT_00615f34);
  iVar1 = FUN_00433b3c();
  if (iVar1 == 0) {
LAB_00434588:
    bVar3 = false;
  }
  else {
    uVar2 = 0;
LAB_0043446c:
    do {
      for (; uVar2 < 0x20; uVar2 = uVar2 + 1) {
        local_ac[uVar2] = 0;
      }
      local_c0[0] = 1;
      local_ac[DAT_00600b80 >> 5] = local_ac[DAT_00600b80 >> 5] | 1 << (DAT_00600b80 & 0x1f);
      iVar1 = (*(code *)PTR_write_00613734)(DAT_00600b80,&DAT_00600b40,0xe);
      if (iVar1 == -1) {
        FUN_0043357c();
        goto LAB_00434588;
      }
      iVar1 = (*(code *)PTR_select_00613cc4)(DAT_00600b80 + 1,local_ac,0,0,local_c0);
      if (iVar1 == -1) {
        (*(code *)PTR_puts_00612670)("select error.");
      }
      else {
        uVar2 = 0;
        if (iVar1 == 0) goto LAB_0043446c;
        (*(code *)PTR_read_00613d88)(DAT_00600b80,&local_b8,10);
      }
      uVar2 = 0;
    } while (local_b8 != -2);
    bVar3 = local_b7 != '0' || local_b6 != '0';
    (*(code *)PTR_printf_006126e8)("relay_switchstate = %d\n",bVar3);
  }
  (*(code *)PTR_pthread_mutex_unlock_00612b1c)(&DAT_00615f34);
  return bVar3;
}


/* FUN_004345d4 @ 004345d4 */

void FUN_004345d4(void)

{
  float fVar1;
  int iVar2;
  float fVar3;
  
  fVar1 = FUN_00434110();
  iVar2 = (*(code *)PTR___gtsf2_0061291c)(fVar1,DAT_005ae818);
  fVar3 = DAT_005ae818;
  if ((iVar2 < 1) && (iVar2 = (*(code *)PTR___ltsf2_00614658)(fVar1,0), fVar3 = fVar1, iVar2 < 0)) {
    fVar3 = 0.0;
  }
  iVar2 = (*(code *)PTR___gesf2_00614178)(fVar3,0);
  if ((-1 < iVar2) && (iVar2 = (*(code *)PTR___nesf2_00612800)(DAT_00615f08,fVar3), iVar2 != 0)) {
    DAT_00615f08 = fVar3;
    (*(code *)PTR_HKUpdateValueToGlobalEventTable_006149fc)(0xd,fVar3);
  }
  fVar1 = FUN_00433e48();
  iVar2 = (*(code *)PTR___gtsf2_0061291c)(fVar1,DAT_005ae814);
  fVar3 = DAT_005ae814;
  if ((iVar2 < 1) && (iVar2 = (*(code *)PTR___ltsf2_00614658)(fVar1,0), fVar3 = fVar1, iVar2 < 0)) {
    fVar3 = 0.0;
  }
  iVar2 = (*(code *)PTR___gesf2_00614178)(fVar3,0);
  if ((-1 < iVar2) && (iVar2 = (*(code *)PTR___nesf2_00612800)(DAT_00615f0c,fVar3), iVar2 != 0)) {
    DAT_00615f0c = fVar3;
    (*(code *)PTR_HKUpdateValueToGlobalEventTable_006149fc)(0xe,fVar3);
  }
  fVar1 = FUN_00433b80();
  iVar2 = (*(code *)PTR___gtsf2_0061291c)(fVar1,DAT_005ae810);
  fVar3 = DAT_005ae810;
  if ((iVar2 < 1) && (iVar2 = (*(code *)PTR___ltsf2_00614658)(fVar1,0), fVar3 = fVar1, iVar2 < 0)) {
    fVar3 = 0.0;
  }
  iVar2 = (*(code *)PTR___gesf2_00614178)(fVar3,0);
  if ((-1 < iVar2) && (iVar2 = (*(code *)PTR___nesf2_00612800)(DAT_00615f10,fVar3), iVar2 != 0)) {
    DAT_00615f10 = fVar3;
    (*(code *)PTR_HKUpdateValueToGlobalEventTable_006149fc)(0xf,fVar3);
  }
  iVar2 = FUN_004343d8();
  if ((-1 < iVar2) && (DAT_00615f14 != iVar2)) {
    DAT_00615f14 = iVar2;
    (*(code *)PTR_HKUpdateValueToGlobalEventTable_006149fc)(9,iVar2);
    DAT_00615f20 = (undefined1)iVar2;
  }
  iVar2 = (int)DAT_00615f21;
  if ((-1 < iVar2) && (DAT_00615f18 != iVar2)) {
    DAT_00615f18 = iVar2;
  }
  return;
}


/* Relay_SwitchSetup @ 0043485c */

undefined4 Relay_SwitchSetup(char param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  (*(code *)PTR_pthread_mutex_lock_00613f24)(&DAT_00615f34);
  iVar1 = FUN_00433b3c();
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
    goto LAB_0043497c;
  }
  if (param_1 == '\0') {
    (*(code *)PTR_puts_00612670)("Switch off");
    (*(code *)PTR_write_00613734)(DAT_00600b80,&DAT_00600b00,0xe);
    DAT_00615f20 = 0;
LAB_00434930:
    uVar2 = 0;
  }
  else {
    if (param_1 == '\x01') {
      (*(code *)PTR_puts_00612670)("Switch on");
      (*(code *)PTR_write_00613734)(DAT_00600b80,&DAT_00600b10,0xe);
      DAT_00615f20 = 1;
      goto LAB_00434930;
    }
    (*(code *)PTR_puts_00612670)("Every fail");
    uVar2 = 0xffffffff;
  }
  DAT_00615ee0 = param_1;
  (*(code *)PTR_Store_hksettinginfo_00614810)(&DAT_00615ee0);
LAB_0043497c:
  (*(code *)PTR_pthread_mutex_unlock_00612b1c)(&DAT_00615f34);
  return uVar2;
}


/* FUN_0043499c @ 0043499c */

void FUN_0043499c(void)

{
  (*(code *)PTR_Get_product_info_00612a00)(&DAT_00615ee4);
  (*(code *)PTR_Get_hksettinginfo_00613364)(&DAT_00615ee0);
  if (1 < DAT_00615ee0) {
    DAT_00615ee0 = 0;
  }
  Relay_SwitchSetup((int)(char)DAT_00615ee0);
  Relay_SwitchSetup((int)(char)DAT_00615ee0);
  Relay_SwitchSetup((int)(char)DAT_00615ee0);
                    /* WARNING: Could not recover jumptable at 0x00434a34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_HKUpdateValueToGlobalEventTable_006149fc)(9,(int)(char)DAT_00615ee0);
  return;
}


/* FUN_00434a3c @ 00434a3c */

void FUN_00434a3c(void)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  code *pcVar4;
  int local_b8;
  int local_b4;
  int local_b0 [2];
  uint local_a8 [33];
  
  while (iVar1 = FUN_00433b3c(), iVar1 == 0) {
    (*(code *)PTR_sleep_0061454c)(1);
  }
  FUN_0043499c();
  iVar1 = (*(code *)PTR_access_00613bac)("/tmp/net/wac_state.txt",4);
  if (iVar1 < 0) {
    (*(code *)PTR_time_00613804)(&local_b8);
  }
  local_b4 = local_b8;
  uVar2 = 0;
  do {
    for (; uVar2 < 0x20; uVar2 = uVar2 + 1) {
      local_a8[uVar2] = 0;
    }
    local_b0[0] = (local_b8 + 5) - local_b4;
    if (4 < (uint)(local_b4 - local_b8)) {
      local_b0[0] = 0;
    }
    local_a8[DAT_00600b80 >> 5] = local_a8[DAT_00600b80 >> 5] | 1 << (DAT_00600b80 & 0x1f);
    iVar1 = (*(code *)PTR_select_00613cc4)(DAT_00600b80 + 1,local_a8,0,0,local_b0);
    if (iVar1 == -1) {
      pcVar3 = "select error.";
      pcVar4 = (code *)PTR_puts_00612670;
LAB_00434bf0:
      (*pcVar4)(pcVar3);
    }
    else {
      if (iVar1 != 0) {
        FUN_004332fc(&local_b8);
        pcVar3 = (char *)&local_b4;
        pcVar4 = (code *)PTR_time_00613804;
        goto LAB_00434bf0;
      }
      (*(code *)PTR_time_00613804)();
      local_b4 = local_b8;
      FUN_004345d4();
    }
    uVar2 = 0;
  } while( true );
}


/* FUN_00434c80 @ 00434c80 */

uint FUN_00434c80(undefined4 param_1,int param_2,int param_3)

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
  piVar2 = (int *)(PTR_hapObjects_006149e4 + 4);
  iVar1 = 0;
  local_34 = 0xb5;
  local_30 = PTR_hapObjects_006149e4;
  local_38 = param_2;
  do {
    if (*piVar2 == 0) {
      return 0xfffeecfe;
    }
    iVar4 = 0;
    puVar3 = local_30 + (iVar1 * local_34 + 1) * 8 + 4;
    do {
      (*(code *)PTR_memcpy_00614674)(local_3c,puVar3,0x48);
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
LAB_00434e68:
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
            iVar1 = (*(code *)PTR___ltsf2_00614658)(param_3,local_70);
            if (iVar1 < 0) {
              return 1;
            }
            iVar1 = (*(code *)PTR___gtsf2_0061291c)(param_3,local_68);
            if (0 < iVar1) {
              return 1;
            }
            if (local_40 == 0) {
              return 0;
            }
            param_3 = (*(code *)PTR___fixsfsi_0061432c)(param_3);
            local_60 = (*(code *)PTR___fixsfsi_0061432c)(local_60);
            goto LAB_00434e68;
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


/* FUN_00434ee4 @ 00434ee4 */

undefined4 FUN_00434ee4(void)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = 0xffffffff;
  if (DAT_00600b90 != -1) {
    iVar2 = (*(code *)PTR_mq_close_006126c4)();
    if (iVar2 == 0) {
      DAT_00600b90 = -1;
      uVar1 = 0;
    }
    else {
      uVar1 = 0xffffffff;
    }
  }
  return uVar1;
}


/* shared_ServerReadDetach @ 00434f4c */

undefined4 shared_ServerReadDetach(void)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = 0xffffffff;
  if (DAT_00600b94 != -1) {
    iVar2 = (*(code *)PTR_mq_close_006126c4)();
    if (iVar2 == 0) {
      DAT_00600b94 = -1;
      uVar1 = 0;
    }
    else {
      uVar1 = 0xffffffff;
    }
  }
  return uVar1;
}


/* FUN_00434fb4 @ 00434fb4 */

undefined4 FUN_00434fb4(void)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0xffffffff;
  if (DAT_00600b98 != -1) {
    iVar1 = (*(code *)PTR_mq_close_006126c4)();
    uVar2 = 0xffffffff;
    if (iVar1 == 0) {
      DAT_00600b98 = -1;
      iVar1 = (*(code *)PTR_mq_unlink_00614128)("/mqphytrexread");
      uVar2 = 0;
      if (iVar1 != 0) {
        uVar2 = 0xffffffff;
      }
    }
  }
  return uVar2;
}


/* shared_ServerWriteDetach @ 00435038 */

undefined4 shared_ServerWriteDetach(void)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0xffffffff;
  if (DAT_00600b9c != -1) {
    iVar1 = (*(code *)PTR_mq_close_006126c4)();
    uVar2 = 0xffffffff;
    if (iVar1 == 0) {
      DAT_00600b9c = -1;
      iVar1 = (*(code *)PTR_mq_unlink_00614128)("/mqphytrexwrite");
      uVar2 = 0;
      if (iVar1 != 0) {
        uVar2 = 0xffffffff;
      }
    }
  }
  return uVar2;
}


/* FUN_004350bc @ 004350bc */

undefined4 FUN_004350bc(undefined4 param_1,int *param_2)

{
  int iVar1;
  undefined1 auStack_30 [4];
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  undefined1 auStack_1c [12];
  
  if (DAT_00600b94 != -1) {
    (*(code *)PTR_clock_gettime_006147a0)(0,&local_2c);
    local_20 = local_28 + 0x457;
    local_24 = local_2c + 5;
    iVar1 = (*(code *)PTR_mq_timedreceive_00614374)(DAT_00600b94,param_1,0x100,auStack_30,&local_24)
    ;
    (*(code *)PTR_clock_gettime_006147a0)(0,auStack_1c);
    if (-1 < iVar1) {
      *param_2 = iVar1;
      return 0;
    }
  }
  return 0xffffffff;
}


/* FUN_00435188 @ 00435188 */

undefined4 FUN_00435188(undefined4 param_1,int *param_2)

{
  int iVar1;
  undefined1 auStack_30 [4];
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  undefined1 auStack_1c [12];
  
  if (DAT_00600b90 != -1) {
    (*(code *)PTR_clock_gettime_006147a0)(0,&local_2c);
    local_20 = local_28 + 0x457;
    local_24 = local_2c + 5;
    iVar1 = (*(code *)PTR_mq_timedreceive_00614374)(DAT_00600b90,param_1,0x100,auStack_30,&local_24)
    ;
    (*(code *)PTR_clock_gettime_006147a0)(0,auStack_1c);
    if (-1 < iVar1) {
      *param_2 = iVar1;
      return 0;
    }
  }
  return 0xffffffff;
}


/* FUN_00435254 @ 00435254 */

undefined4 FUN_00435254(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  if ((DAT_00600b98 != -1) &&
     (iVar1 = (*(code *)PTR_mq_send_00612a04)(DAT_00600b98,param_1,param_2,0), iVar1 == 0)) {
    return 0;
  }
  return 0xffffffff;
}


/* FUN_004352b0 @ 004352b0 */

undefined4 FUN_004352b0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  if ((DAT_00600b9c != -1) &&
     (iVar1 = (*(code *)PTR_mq_send_00612a04)(DAT_00600b9c,param_1,param_2,0), iVar1 == 0)) {
    return 0;
  }
  return 0xffffffff;
}


/* FUN_0043530c @ 0043530c */

undefined4 FUN_0043530c(void)

{
  undefined4 uVar1;
  
  uVar1 = 0xfffffffe;
  if (DAT_00600b98 == -1) {
    DAT_00600b98 = (*(code *)PTR_mq_open_0061358c)("/mqphytrexread",1);
    uVar1 = 0;
    if (DAT_00600b98 == -1) {
      uVar1 = 0xffffffff;
    }
  }
  return uVar1;
}


/* shared_ServerReadInit @ 00435374 */

undefined4 shared_ServerReadInit(void)

{
  undefined4 uVar1;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  uVar1 = 0xfffffffe;
  if (DAT_00600b94 == -1) {
    local_2c = 10;
    local_28 = 0x100;
    local_30 = 0;
    local_24 = 0;
    DAT_00600b94 = (*(code *)PTR_mq_open_0061358c)("/mqphytrexread",0x100,0x1a4,&local_30);
    uVar1 = 0;
    if (DAT_00600b94 == -1) {
      uVar1 = 0xffffffff;
    }
  }
  return uVar1;
}


/* FUN_004353fc @ 004353fc */

undefined4 FUN_004353fc(void)

{
  undefined4 uVar1;
  
  uVar1 = 0xfffffffe;
  if (DAT_00600b90 == -1) {
    DAT_00600b90 = (*(code *)PTR_mq_open_0061358c)("/mqphytrexwrite",0);
    uVar1 = 0;
    if (DAT_00600b90 == -1) {
      uVar1 = 0xffffffff;
    }
  }
  return uVar1;
}


/* shared_ServerWriteInit @ 00435464 */

undefined4 shared_ServerWriteInit(void)

{
  undefined4 uVar1;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  uVar1 = 0xfffffffe;
  if (DAT_00600b9c == -1) {
    local_2c = 10;
    local_28 = 0x100;
    local_30 = 0;
    local_24 = 0;
    DAT_00600b9c = (*(code *)PTR_mq_open_0061358c)("/mqphytrexwrite",0x101,0x1a4,&local_30);
    uVar1 = 0;
    if (DAT_00600b9c == -1) {
      uVar1 = 0xffffffff;
    }
  }
  return uVar1;
}


/* FUN_004354f0 @ 004354f0 */

undefined4 FUN_004354f0(undefined4 param_1,int param_2,int param_3)

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
          (*(code *)PTR_printbuf_memappend_006125f8)(param_1,param_2 + local_14,local_10 - local_14)
          ;
        }
        return 0;
      }
      bVar1 = *(byte *)(param_2 + local_10);
      uVar3 = (uint)bVar1;
      if (uVar3 < 0xe) break;
      if (((uVar3 != 0x2f) && (uVar3 != 0x5c)) && (uVar3 != 0x22)) goto LAB_0043583c;
LAB_004355a4:
      if (0 < local_10 - local_14) {
        (*(code *)PTR_printbuf_memappend_006125f8)(param_1,param_2 + local_14,local_10 - local_14);
      }
      if (bVar1 == 8) {
        (*(code *)PTR_printbuf_memappend_006125f8)
                  (param_1,PTR_s_bfPjPmmrJagyc0JnT6m8oXWXV3AGNaOk_00612340 + -0x1778,2);
      }
      else if (bVar1 == 10) {
        (*(code *)PTR_printbuf_memappend_006125f8)
                  (param_1,PTR_s_bfPjPmmrJagyc0JnT6m8oXWXV3AGNaOk_00612340 + -0x1774,2);
      }
      else if (bVar1 == 0xd) {
        (*(code *)PTR_printbuf_memappend_006125f8)
                  (param_1,PTR_s_bfPjPmmrJagyc0JnT6m8oXWXV3AGNaOk_00612340 + -6000,2);
      }
      else if (bVar1 == 9) {
        (*(code *)PTR_printbuf_memappend_006125f8)
                  (param_1,PTR_s_bfPjPmmrJagyc0JnT6m8oXWXV3AGNaOk_00612340 + -0x176c,2);
      }
      else if (bVar1 == 0xc) {
        (*(code *)PTR_printbuf_memappend_006125f8)
                  (param_1,PTR_s_bfPjPmmrJagyc0JnT6m8oXWXV3AGNaOk_00612340 + -0x1768,2);
      }
      else if (bVar1 == 0x22) {
        (*(code *)PTR_printbuf_memappend_006125f8)
                  (param_1,PTR_s_bfPjPmmrJagyc0JnT6m8oXWXV3AGNaOk_00612340 + -0x1764,2);
      }
      else if (bVar1 == 0x5c) {
        (*(code *)PTR_printbuf_memappend_006125f8)
                  (param_1,PTR_s_bfPjPmmrJagyc0JnT6m8oXWXV3AGNaOk_00612340 + -0x1760,2);
      }
      else if (bVar1 == 0x2f) {
        (*(code *)PTR_printbuf_memappend_006125f8)
                  (param_1,PTR_s_bfPjPmmrJagyc0JnT6m8oXWXV3AGNaOk_00612340 + -0x175c,2);
      }
      local_14 = local_10 + 1;
      local_10 = local_14;
    }
    if ((0xb < uVar3) || (uVar3 - 8 < 3)) goto LAB_004355a4;
LAB_0043583c:
    if (bVar1 < 0x20) {
      if (0 < local_10 - local_14) {
        (*(code *)PTR_printbuf_memappend_006125f8)(param_1,param_2 + local_14,local_10 - local_14);
      }
      (*(code *)PTR_sprintbuf_00613dc4)
                (param_1,PTR_s_bfPjPmmrJagyc0JnT6m8oXWXV3AGNaOk_00612340 + -0x1758,
                 (int)*(char *)(*(int *)PTR_json_hex_chars_00612b70 + (uint)(bVar1 >> 4)),
                 (int)*(char *)(*(int *)PTR_json_hex_chars_00612b70 + (bVar1 & 0xf)));
      local_14 = local_10 + 1;
      local_10 = local_14;
    }
    else {
      local_10 = local_10 + 1;
    }
  } while( true );
}


/* json_object_get @ 00435a00 */

int json_object_get(int param_1)

{
  if (param_1 != 0) {
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  }
  return param_1;
}


/* json_object_put @ 00435a58 */

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


/* FUN_00435b3c @ 00435b3c */

void FUN_00435b3c(int param_1)

{
  (*(code *)PTR_printbuf_free_00612794)(*(undefined4 *)(param_1 + 0x10));
  (*(code *)PTR_free_0061286c)(param_1);
  return;
}


/* FUN_00435bc0 @ 00435bc0 */

undefined4 * FUN_00435bc0(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(*(code *)PTR_calloc_006148c0)(0x28,1);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = param_1;
    puVar1[3] = 1;
    puVar1[1] = PTR_LAB_00612344 + 0x5b3c;
  }
  return puVar1;
}


/* FUN_00435c70 @ 00435c70 */

bool FUN_00435c70(int *param_1,int param_2)

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


/* json_object_get_type @ 00435cd8 */

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


/* FUN_00435d24 @ 00435d24 */

void FUN_00435d24(uint *param_1,uint param_2,uint param_3,uint param_4)

{
  if (param_1[8] != 0) {
    (*(code *)param_1[8])(param_1,param_1[9]);
  }
  param_1[9] = 0;
  param_1[8] = 0;
  if (param_2 == 0) {
    if (*param_1 < 7) {
                    /* WARNING: Could not emulate address calculation at 0x00435df0 */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&_gp + *(int *)(PTR_s_bfPjPmmrJagyc0JnT6m8oXWXV3AGNaOk_00612340 +
                                *param_1 * 4 + -0x174c)))();
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


/* json_object_to_json_string_ext @ 00435f20 */

undefined * json_object_to_json_string_ext(int param_1,undefined4 param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (param_1 == 0) {
    puVar1 = PTR_s_bfPjPmmrJagyc0JnT6m8oXWXV3AGNaOk_00612340 + -0x1730;
  }
  else {
    if (*(int *)(param_1 + 0x10) == 0) {
      uVar2 = (*(code *)PTR_printbuf_new_00613ac0)();
      *(undefined4 *)(param_1 + 0x10) = uVar2;
      if (*(int *)(param_1 + 0x10) == 0) {
        return (undefined *)0x0;
      }
    }
    (*(code *)PTR_printbuf_reset_00613e60)(*(undefined4 *)(param_1 + 0x10));
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


/* json_object_to_json_string @ 00436074 */

void json_object_to_json_string(undefined4 param_1)

{
  (*(code *)PTR_json_object_to_json_string_ext_006143d8)(param_1,1);
  return;
}


/* FUN_004360d0 @ 004360d0 */

void FUN_004360d0(undefined4 param_1,int param_2,uint param_3)

{
  if ((param_3 & 2) != 0) {
    (*(code *)PTR_printbuf_memset_00612e04)(param_1,0xffffffff,0x20,param_2 << 1);
  }
  return;
}


/* FUN_0043615c @ 0043615c */

void FUN_0043615c(undefined4 param_1,undefined4 param_2,int param_3,uint param_4)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *local_14;
  
  bVar1 = false;
  (*(code *)PTR_sprintbuf_00613dc4)
            (param_2,PTR_s_bfPjPmmrJagyc0JnT6m8oXWXV3AGNaOk_00612340 + -0x1728);
  if ((param_4 & 2) != 0) {
    (*(code *)PTR_sprintbuf_00613dc4)
              (param_2,PTR_s_bfPjPmmrJagyc0JnT6m8oXWXV3AGNaOk_00612340 + -0x1724);
  }
  iVar2 = (*(code *)PTR_json_object_get_object_00613b90)(param_1);
  for (local_14 = *(undefined4 **)(iVar2 + 0x20); local_14 != (undefined4 *)0x0;
      local_14 = (undefined4 *)local_14[2]) {
    uVar4 = *local_14;
    iVar2 = local_14[1];
    if ((bVar1) &&
       ((*(code *)PTR_sprintbuf_00613dc4)
                  (param_2,PTR_s_bfPjPmmrJagyc0JnT6m8oXWXV3AGNaOk_00612340 + -0x1720),
       (param_4 & 2) != 0)) {
      (*(code *)PTR_sprintbuf_00613dc4)
                (param_2,PTR_s_bfPjPmmrJagyc0JnT6m8oXWXV3AGNaOk_00612340 + -0x1724);
    }
    bVar1 = true;
    if ((param_4 & 1) != 0) {
      (*(code *)PTR_sprintbuf_00613dc4)
                (param_2,PTR_s_bfPjPmmrJagyc0JnT6m8oXWXV3AGNaOk_00612340 + -0x171c);
    }
    (*(code *)(PTR_LAB_00612344 + 0x60d0))(param_2,param_3 + 1,param_4);
    (*(code *)PTR_sprintbuf_00613dc4)
              (param_2,PTR_s_bfPjPmmrJagyc0JnT6m8oXWXV3AGNaOk_00612340 + -0x1718);
    uVar3 = (*(code *)PTR_strlen_00613f4c)(uVar4);
    (*(code *)(PTR_LAB_00612344 + 0x54f0))(param_2,uVar4,uVar3);
    if ((param_4 & 1) == 0) {
      (*(code *)PTR_sprintbuf_00613dc4)
                (param_2,PTR_s_bfPjPmmrJagyc0JnT6m8oXWXV3AGNaOk_00612340 + -0x1710);
    }
    else {
      (*(code *)PTR_sprintbuf_00613dc4)
                (param_2,PTR_s_bfPjPmmrJagyc0JnT6m8oXWXV3AGNaOk_00612340 + -0x1714);
    }
    if (iVar2 == 0) {
      (*(code *)PTR_sprintbuf_00613dc4)
                (param_2,PTR_s_bfPjPmmrJagyc0JnT6m8oXWXV3AGNaOk_00612340 + -0x1730);
    }
    else {
      (**(code **)(iVar2 + 8))(iVar2,param_2,param_3 + 1,param_4);
    }
  }
  if ((param_4 & 2) != 0) {
    if (bVar1) {
      (*(code *)PTR_sprintbuf_00613dc4)
                (param_2,PTR_s_bfPjPmmrJagyc0JnT6m8oXWXV3AGNaOk_00612340 + -0x1724);
    }
    (*(code *)(PTR_LAB_00612344 + 0x60d0))(param_2,param_3,param_4);
  }
  if ((param_4 & 1) == 0) {
    (*(code *)PTR_sprintbuf_00613dc4)
              (param_2,PTR_s_bfPjPmmrJagyc0JnT6m8oXWXV3AGNaOk_00612340 + -0x1708);
  }
  else {
    (*(code *)PTR_sprintbuf_00613dc4)
              (param_2,PTR_s_bfPjPmmrJagyc0JnT6m8oXWXV3AGNaOk_00612340 + -0x170c);
  }
  return;
}


/* FUN_004365e8 @ 004365e8 */

void FUN_004365e8(undefined4 *param_1)

{
  (*(code *)PTR_free_0061286c)(*param_1);
  (*(code *)PTR_json_object_put_00612524)(param_1[1]);
  return;
}


/* FUN_0043667c @ 0043667c */

void FUN_0043667c(int param_1)

{
  (*(code *)PTR_lh_table_free_00612cc4)(*(undefined4 *)(param_1 + 0x18));
  (*(code *)(PTR_LAB_00612344 + 0x5b3c))(param_1);
  return;
}


/* json_object_new_object @ 00436704 */

int json_object_new_object(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (*(code *)(PTR_LAB_00612344 + 0x5bc0))(4);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    *(undefined **)(iVar1 + 4) = PTR_LAB_00612344 + 0x667c;
    *(undefined **)(iVar1 + 8) = PTR_LAB_00612344 + 0x615c;
    uVar2 = (*(code *)PTR_lh_kchar_table_new_00612f6c)(0x10,0,PTR_LAB_00612344 + 0x65e8);
    *(undefined4 *)(iVar1 + 0x18) = uVar2;
  }
  return iVar1;
}


/* json_object_get_object @ 004367e4 */

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


/* json_object_object_add @ 00436854 */

void json_object_object_add(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  iVar1 = (*(code *)PTR_lh_table_lookup_entry_00613130)(*(undefined4 *)(param_1 + 0x18),param_2);
  if (iVar1 == 0) {
    uVar3 = *(undefined4 *)(param_1 + 0x18);
    uVar2 = (*(code *)PTR_strdup_00612688)(param_2);
    (*(code *)PTR_lh_table_insert_00614850)(uVar3,uVar2,param_3);
  }
  else {
    if (*(int *)(iVar1 + 4) != 0) {
      (*(code *)PTR_json_object_put_00612524)(*(int *)(iVar1 + 4));
    }
    *(undefined4 *)(iVar1 + 4) = param_3;
  }
  return;
}


/* FUN_0043698c @ 0043698c */

void FUN_0043698c(int param_1)

{
  (*(code *)PTR_lh_table_length_00614a78)(*(undefined4 *)(param_1 + 0x18));
  return;
}


/* FUN_004369f4 @ 004369f4 */

undefined4 FUN_004369f4(undefined4 param_1,undefined4 param_2)

{
  undefined4 local_10 [2];
  
  local_10[0] = 0;
  (*(code *)PTR_json_object_object_get_ex_006125e0)(param_1,param_2,local_10);
  return local_10[0];
}


/* json_object_object_get_ex @ 00436a64 */

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
    uVar1 = (*(code *)PTR_lh_table_lookup_ex_006137ac)(param_1[6],param_2,param_3);
  }
  else {
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = 0;
    }
    uVar1 = 0;
  }
  return uVar1;
}


/* FUN_00436b54 @ 00436b54 */

void FUN_00436b54(int param_1,undefined4 param_2)

{
  (*(code *)PTR_lh_table_delete_00613228)(*(undefined4 *)(param_1 + 0x18),param_2);
  return;
}


/* FUN_00436bc4 @ 00436bc4 */

void FUN_00436bc4(int param_1,undefined4 param_2)

{
  if (*(int *)(param_1 + 0x18) == 0) {
    (*(code *)PTR_sprintbuf_00613dc4)
              (param_2,PTR_s_bfPjPmmrJagyc0JnT6m8oXWXV3AGNaOk_00612340 + -0x16fc);
  }
  else {
    (*(code *)PTR_sprintbuf_00613dc4)
              (param_2,PTR_s_bfPjPmmrJagyc0JnT6m8oXWXV3AGNaOk_00612340 + -0x1704);
  }
  return;
}


/* json_object_new_boolean @ 00436c7c */

int json_object_new_boolean(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = (*(code *)(PTR_LAB_00612344 + 0x5bc0))(1);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    *(undefined **)(iVar1 + 8) = PTR_LAB_00612344 + 0x6bc4;
    *(undefined4 *)(iVar1 + 0x18) = param_1;
  }
  return iVar1;
}


/* json_object_get_boolean @ 00436d20 */

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
      iVar1 = (*(code *)PTR___nedf2_00613000)(param_1[6],param_1[7],0,0);
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


/* FUN_00436e8c @ 00436e8c */

void FUN_00436e8c(int param_1,undefined4 param_2)

{
  (*(code *)PTR_sprintbuf_00613dc4)
            (param_2,PTR_s_bfPjPmmrJagyc0JnT6m8oXWXV3AGNaOk_00612340 + -0x16f4,
             *(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c));
  return;
}


/* json_object_new_int @ 00436f14 */

int json_object_new_int(int param_1)

{
  int iVar1;
  
  iVar1 = (*(code *)(PTR_LAB_00612344 + 0x5bc0))(3);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    *(undefined **)(iVar1 + 8) = PTR_LAB_00612344 + 0x6e8c;
    *(int *)(iVar1 + 0x1c) = param_1;
    *(int *)(iVar1 + 0x18) = param_1 >> 0x1f;
  }
  return iVar1;
}


/* json_object_get_int @ 00436fdc */

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
      iVar1 = (*(code *)PTR_json_parse_int64_00613248)(param_1[6],&local_10);
      if (iVar1 != 0) {
        return 0;
      }
      local_18 = 3;
    }
    if (local_18 == 2) {
      local_c = (*(code *)PTR___fixdfsi_00614ad0)(param_1[6],param_1[7]);
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


/* json_object_new_int64 @ 004371d0 */

int json_object_new_int64(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = (*(code *)(PTR_LAB_00612344 + 0x5bc0))(3);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    *(undefined **)(iVar1 + 8) = PTR_LAB_00612344 + 0x6e8c;
    *(undefined4 *)(iVar1 + 0x1c) = param_2;
    *(undefined4 *)(iVar1 + 0x18) = param_1;
  }
  return iVar1;
}


/* FUN_0043727c @ 0043727c */

uint FUN_0043727c(uint *param_1)

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
      uVar1 = (*(code *)PTR___fixdfdi_006143a4)(param_1[6],param_1[7]);
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
           (iVar2 = (*(code *)PTR_json_parse_int64_00613248)(param_1[6],local_10), iVar2 == 0)) {
          return local_10[0];
        }
      }
      uVar1 = 0;
    }
  }
  return uVar1;
}


/* FUN_004373f4 @ 004373f4 */

int FUN_004373f4(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  int local_98;
  char *local_94;
  char *local_90;
  undefined1 auStack_8c [132];
  
  local_98 = (*(code *)PTR_snprintf_00613e24)
                       (auStack_8c,0x80,PTR_s_bfPjPmmrJagyc0JnT6m8oXWXV3AGNaOk_00612340 + -0x16ec,
                        param_4,*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c));
  local_90 = (char *)(*(code *)PTR_strchr_006127e8)(auStack_8c,0x2c);
  if (local_90 == (undefined1 *)0x0) {
    local_90 = (char *)(*(code *)PTR_strchr_006127e8)(auStack_8c,0x2e);
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
  (*(code *)PTR_printbuf_memappend_006125f8)(param_2,auStack_8c,local_98);
  return local_98;
}


/* json_object_new_double @ 004375e4 */

int json_object_new_double(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = (*(code *)(PTR_LAB_00612344 + 0x5bc0))(2);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    *(undefined **)(iVar1 + 8) = PTR_LAB_00612344 + 0x73f4;
    *(undefined4 *)(iVar1 + 0x1c) = param_2;
    *(undefined4 *)(iVar1 + 0x18) = param_1;
  }
  return iVar1;
}


/* json_object_get_double @ 00437690 */

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
          uVar1 = (*(code *)PTR___floatsidf_006137a8)(param_1[6]);
          return uVar1;
        }
      }
      else {
        if (uVar1 == 3) {
          uVar1 = (*(code *)PTR___floatdidf_00614abc)(param_1[6],param_1[7]);
          return uVar1;
        }
        if ((uVar1 == 6) &&
           (iVar2 = (*(code *)PTR_sscanf_00613470)
                              (param_1[6],PTR_s_bfPjPmmrJagyc0JnT6m8oXWXV3AGNaOk_00612340 + -0x16e8,
                               local_10), iVar2 == 1)) {
          return local_10[0];
        }
      }
      uVar1 = 0;
    }
  }
  return uVar1;
}


/* FUN_00437824 @ 00437824 */

undefined4 FUN_00437824(int param_1,undefined4 param_2)

{
  (*(code *)PTR_sprintbuf_00613dc4)
            (param_2,PTR_s_bfPjPmmrJagyc0JnT6m8oXWXV3AGNaOk_00612340 + -0x1718);
  (*(code *)(PTR_LAB_00612344 + 0x54f0))
            (param_2,*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c));
  (*(code *)PTR_sprintbuf_00613dc4)
            (param_2,PTR_s_bfPjPmmrJagyc0JnT6m8oXWXV3AGNaOk_00612340 + -0x1718);
  return 0;
}


/* FUN_00437900 @ 00437900 */

void FUN_00437900(int param_1)

{
  (*(code *)PTR_free_0061286c)(*(undefined4 *)(param_1 + 0x18));
  (*(code *)(PTR_LAB_00612344 + 0x5b3c))(param_1);
  return;
}


/* json_object_new_string @ 00437988 */

int json_object_new_string(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (*(code *)(PTR_LAB_00612344 + 0x5bc0))(6);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    *(undefined **)(iVar1 + 4) = PTR_LAB_00612344 + 0x7900;
    *(undefined **)(iVar1 + 8) = PTR_LAB_00612344 + 0x7824;
    uVar2 = (*(code *)PTR_strdup_00612688)(param_1);
    *(undefined4 *)(iVar1 + 0x18) = uVar2;
    uVar2 = (*(code *)PTR_strlen_00613f4c)(param_1);
    *(undefined4 *)(iVar1 + 0x1c) = uVar2;
  }
  return iVar1;
}


/* json_object_new_string_len @ 00437a88 */

int json_object_new_string_len(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (*(code *)(PTR_LAB_00612344 + 0x5bc0))(6);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    *(undefined **)(iVar1 + 4) = PTR_LAB_00612344 + 0x7900;
    *(undefined **)(iVar1 + 8) = PTR_LAB_00612344 + 0x7824;
    uVar2 = (*(code *)PTR_malloc_00614174)(param_2 + 1);
    *(undefined4 *)(iVar1 + 0x18) = uVar2;
    (*(code *)PTR_memcpy_00614674)(*(undefined4 *)(iVar1 + 0x18),param_1,param_2);
    *(undefined1 *)(*(int *)(iVar1 + 0x18) + param_2) = 0;
    *(int *)(iVar1 + 0x1c) = param_2;
  }
  return iVar1;
}


/* json_object_get_string @ 00437bcc */

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
    iVar1 = (*(code *)PTR_json_object_to_json_string_00612474)(param_1);
  }
  return iVar1;
}


/* json_object_get_string_len @ 00437c6c */

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


/* FUN_00437cdc @ 00437cdc */

void FUN_00437cdc(undefined4 param_1,undefined4 param_2,int param_3,uint param_4)

{
  bool bVar1;
  int iVar2;
  int local_14;
  
  bVar1 = false;
  (*(code *)PTR_sprintbuf_00613dc4)
            (param_2,PTR_s_bfPjPmmrJagyc0JnT6m8oXWXV3AGNaOk_00612340 + -0x16e4);
  if ((param_4 & 2) != 0) {
    (*(code *)PTR_sprintbuf_00613dc4)
              (param_2,PTR_s_bfPjPmmrJagyc0JnT6m8oXWXV3AGNaOk_00612340 + -0x1724);
  }
  local_14 = 0;
  while( true ) {
    iVar2 = (*(code *)PTR_json_object_array_length_00614790)(param_1);
    if (iVar2 <= local_14) break;
    if (bVar1) {
      (*(code *)PTR_sprintbuf_00613dc4)
                (param_2,PTR_s_bfPjPmmrJagyc0JnT6m8oXWXV3AGNaOk_00612340 + -0x1720);
      if ((param_4 & 2) != 0) {
        (*(code *)PTR_sprintbuf_00613dc4)
                  (param_2,PTR_s_bfPjPmmrJagyc0JnT6m8oXWXV3AGNaOk_00612340 + -0x1724);
      }
    }
    bVar1 = true;
    if ((param_4 & 1) != 0) {
      (*(code *)PTR_sprintbuf_00613dc4)
                (param_2,PTR_s_bfPjPmmrJagyc0JnT6m8oXWXV3AGNaOk_00612340 + -0x171c);
    }
    (*(code *)(PTR_LAB_00612344 + 0x60d0))(param_2,param_3 + 1,param_4);
    iVar2 = (*(code *)PTR_json_object_array_get_idx_00614110)(param_1,local_14);
    if (iVar2 == 0) {
      (*(code *)PTR_sprintbuf_00613dc4)
                (param_2,PTR_s_bfPjPmmrJagyc0JnT6m8oXWXV3AGNaOk_00612340 + -0x1730);
    }
    else {
      (**(code **)(iVar2 + 8))(iVar2,param_2,param_3 + 1,param_4);
    }
    local_14 = local_14 + 1;
  }
  if ((param_4 & 2) != 0) {
    if (bVar1) {
      (*(code *)PTR_sprintbuf_00613dc4)
                (param_2,PTR_s_bfPjPmmrJagyc0JnT6m8oXWXV3AGNaOk_00612340 + -0x1724);
    }
    (*(code *)(PTR_LAB_00612344 + 0x60d0))(param_2,param_3,param_4);
  }
  if ((param_4 & 1) == 0) {
    (*(code *)PTR_sprintbuf_00613dc4)
              (param_2,PTR_s_bfPjPmmrJagyc0JnT6m8oXWXV3AGNaOk_00612340 + -0x16dc);
  }
  else {
    (*(code *)PTR_sprintbuf_00613dc4)
              (param_2,PTR_s_bfPjPmmrJagyc0JnT6m8oXWXV3AGNaOk_00612340 + -0x16e0);
  }
  return;
}


/* FUN_0043804c @ 0043804c */

void FUN_0043804c(undefined4 param_1)

{
  (*(code *)PTR_json_object_put_00612524)(param_1);
  return;
}


/* FUN_004380ac @ 004380ac */

void FUN_004380ac(int param_1)

{
  (*(code *)PTR_array_list_free_00613da0)(*(undefined4 *)(param_1 + 0x18));
  (*(code *)(PTR_LAB_00612344 + 0x5b3c))(param_1);
  return;
}


/* json_object_new_array @ 00438134 */

int json_object_new_array(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (*(code *)(PTR_LAB_00612344 + 0x5bc0))(5);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    *(undefined **)(iVar1 + 4) = PTR_LAB_00612348 + -0x7f54;
    *(undefined **)(iVar1 + 8) = PTR_LAB_00612344 + 0x7cdc;
    uVar2 = (*(code *)PTR_array_list_new_006143e8)(PTR_LAB_00612348 + -0x7fb4);
    *(undefined4 *)(iVar1 + 0x18) = uVar2;
  }
  return iVar1;
}


/* FUN_0043820c @ 0043820c */

int FUN_0043820c(int *param_1)

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


/* FUN_0043827c @ 0043827c */

void FUN_0043827c(int param_1,undefined4 param_2)

{
  (*(code *)PTR_array_list_sort_00612af8)(*(undefined4 *)(param_1 + 0x18),param_2);
  return;
}


/* json_object_array_length @ 004382ec */

void json_object_array_length(int param_1)

{
  (*(code *)PTR_array_list_length_00612a8c)(*(undefined4 *)(param_1 + 0x18));
  return;
}


/* json_object_array_add @ 00438354 */

void json_object_array_add(int param_1,undefined4 param_2)

{
  (*(code *)PTR_array_list_add_006123c8)(*(undefined4 *)(param_1 + 0x18),param_2);
  return;
}


/* FUN_004383c4 @ 004383c4 */

void FUN_004383c4(int param_1,undefined4 param_2,undefined4 param_3)

{
  (*(code *)PTR_array_list_put_idx_0061398c)(*(undefined4 *)(param_1 + 0x18),param_2,param_3);
  return;
}


/* json_object_array_get_idx @ 0043843c */

void json_object_array_get_idx(int param_1,undefined4 param_2)

{
  (*(code *)PTR_array_list_get_idx_00613ab4)(*(undefined4 *)(param_1 + 0x18),param_2);
  return;
}


/* FUN_004384b0 @ 004384b0 */

undefined * FUN_004384b0(int param_1)

{
  undefined *puVar1;
  
  if ((param_1 < 0) || (0x38 < param_1)) {
    puVar1 = PTR_s_bfPjPmmrJagyc0JnT6m8oXWXV3AGNaOk_00612340 + -0x1564;
  }
  else {
    puVar1 = *(undefined **)(PTR_json_tokener_errors_00613c90 + param_1 * 4);
  }
  return puVar1;
}


/* FUN_0043853c @ 0043853c */

undefined4 FUN_0043853c(int param_1)

{
  return *(undefined4 *)(param_1 + 0x1c);
}


/* json_tokener_new_ex @ 0043856c */

int json_tokener_new_ex(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (*(code *)PTR_calloc_006148c0)(1,0x30);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    uVar2 = (*(code *)PTR_calloc_006148c0)(param_1,0x14);
    *(undefined4 *)(iVar1 + 0x28) = uVar2;
    if (*(int *)(iVar1 + 0x28) == 0) {
      (*(code *)PTR_free_0061286c)(iVar1);
      iVar1 = 0;
    }
    else {
      uVar2 = (*(code *)PTR_printbuf_new_00613ac0)();
      *(undefined4 *)(iVar1 + 4) = uVar2;
      *(undefined4 *)(iVar1 + 8) = param_1;
      (*(code *)PTR_json_tokener_reset_00614b14)(iVar1);
    }
  }
  return iVar1;
}


/* json_tokener_new @ 004386b8 */

void json_tokener_new(void)

{
  (*(code *)PTR_json_tokener_new_ex_006148d8)(0x20);
  return;
}


/* json_tokener_free @ 0043870c */

void json_tokener_free(int param_1)

{
  (*(code *)PTR_json_tokener_reset_00614b14)(param_1);
  if (*(int *)(param_1 + 4) != 0) {
    (*(code *)PTR_printbuf_free_00612794)(*(undefined4 *)(param_1 + 4));
  }
  if (*(int *)(param_1 + 0x28) != 0) {
    (*(code *)PTR_free_0061286c)(*(undefined4 *)(param_1 + 0x28));
  }
  (*(code *)PTR_free_0061286c)(param_1);
  return;
}


/* FUN_00438808 @ 00438808 */

void FUN_00438808(int param_1,int param_2)

{
  *(undefined4 *)(*(int *)(param_1 + 0x28) + param_2 * 0x14) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x28) + param_2 * 0x14 + 4) = 1;
  (*(code *)PTR_json_object_put_00612524)
            (*(undefined4 *)(*(int *)(param_1 + 0x28) + param_2 * 0x14 + 0xc));
  *(undefined4 *)(*(int *)(param_1 + 0x28) + param_2 * 0x14 + 0xc) = 0;
  (*(code *)PTR_free_0061286c)(*(undefined4 *)(*(int *)(param_1 + 0x28) + param_2 * 0x14 + 0x10));
  *(undefined4 *)(*(int *)(param_1 + 0x28) + param_2 * 0x14 + 0x10) = 0;
  return;
}


/* json_tokener_reset @ 0043897c */

void json_tokener_reset(int param_1)

{
  int local_10;
  
  if (param_1 != 0) {
    for (local_10 = *(int *)(param_1 + 0xc); -1 < local_10; local_10 = local_10 + -1) {
      (*(code *)(PTR_LAB_00612348 + -0x77f8))(param_1,local_10);
    }
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  return;
}


/* json_tokener_parse @ 00438a4c */

undefined4 json_tokener_parse(undefined4 param_1)

{
  undefined4 uVar1;
  undefined1 auStack_c [4];
  
  uVar1 = (*(code *)PTR_json_tokener_parse_verbose_00612bcc)(param_1,auStack_c);
  return uVar1;
}


/* json_tokener_parse_verbose @ 00438ab4 */

int json_tokener_parse_verbose(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 local_10;
  
  iVar1 = (*(code *)PTR_json_tokener_new_00614544)();
  if (iVar1 == 0) {
    local_10 = 0;
  }
  else {
    local_10 = (*(code *)PTR_json_tokener_parse_ex_00614a10)(iVar1,param_1,0xffffffff);
    *param_2 = *(undefined4 *)(iVar1 + 0x1c);
    if (*(int *)(iVar1 + 0x1c) != 0) {
      if (local_10 != 0) {
        (*(code *)PTR_json_object_put_00612524)(local_10);
      }
      local_10 = 0;
    }
    (*(code *)PTR_json_tokener_free_006145d8)(iVar1);
  }
  return local_10;
}


/* json_tokener_parse_ex @ 00438bd4 */

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
  iVar2 = (*(code *)PTR_setlocale_00612680)(1,0);
  if (iVar2 != 0) {
    local_38 = (*(code *)PTR_strdup_00612688)(iVar2);
  }
  (*(code *)PTR_setlocale_00612680)(1,PTR_s_bfPjPmmrJagyc0JnT6m8oXWXV3AGNaOk_00612340 + -0x1510);
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
                    /* WARNING: Could not emulate address calculation at 0x00438d08 */
                    /* WARNING: Treating indirect jump as call */
      uVar4 = (*(code *)(&_gp + *(int *)(PTR_s_bfPjPmmrJagyc0JnT6m8oXWXV3AGNaOk_00612340 +
                                        uVar3 * 4 + -0x14f8)))();
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
  (*(code *)PTR_setlocale_00612680)(1,local_38);
  if (local_38 != 0) {
    (*(code *)PTR_free_0061286c)(local_38);
  }
  if (*(int *)(param_1 + 0x1c) == 0) {
    uVar4 = (*(code *)PTR_json_object_get_00613598)
                      (*(undefined4 *)
                        (*(int *)(param_1 + 0x28) + *(int *)(param_1 + 0xc) * 0x14 + 0xc));
    for (local_60 = *(int *)(param_1 + 0xc); -1 < local_60; local_60 = local_60 + -1) {
      (*(code *)(PTR_LAB_00612348 + -0x77f8))(param_1,local_60);
    }
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}


/* FUN_0043e8e8 @ 0043e8e8 */

void FUN_0043e8e8(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x2c) = param_2;
  return;
}


/* FUN_0043e920 @ 0043e920 */

undefined4 FUN_0043e920(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined1 auStack_1008 [4096];
  
  iVar1 = (*(code *)PTR_open_0061479c)(param_1,0);
  if (iVar1 < 0) {
    puVar2 = (undefined4 *)(*(code *)PTR___errno_location_00614824)();
    uVar3 = (*(code *)PTR_strerror_00612748)(*puVar2);
    (*(code *)PTR_mc_error_00614208)
              (PTR_s_bfPjPmmrJagyc0JnT6m8oXWXV3AGNaOk_00612340 + -0x11e0,param_1,uVar3);
    uVar3 = 0;
  }
  else {
    puVar2 = (undefined4 *)(*(code *)PTR_printbuf_new_00613ac0)();
    if (puVar2 == (undefined4 *)0x0) {
      (*(code *)PTR_close_00613604)(iVar1);
      (*(code *)PTR_mc_error_00614208)(PTR_s_bfPjPmmrJagyc0JnT6m8oXWXV3AGNaOk_00612340 + -0x11ac);
      uVar3 = 0;
    }
    else {
      while( true ) {
        iVar4 = (*(code *)PTR_read_00613d88)(iVar1,auStack_1008,0x1000);
        if (iVar4 < 1) break;
        (*(code *)PTR_printbuf_memappend_006125f8)(puVar2,auStack_1008,iVar4);
      }
      (*(code *)PTR_close_00613604)(iVar1);
      if (iVar4 < 0) {
        puVar5 = (undefined4 *)(*(code *)PTR___errno_location_00614824)();
        uVar3 = (*(code *)PTR_strerror_00612748)(*puVar5);
        (*(code *)PTR_mc_abort_00613d78)
                  (PTR_s_bfPjPmmrJagyc0JnT6m8oXWXV3AGNaOk_00612340 + -0x11e0,param_1,uVar3);
        (*(code *)PTR_printbuf_free_00612794)(puVar2);
        uVar3 = 0;
      }
      else {
        uVar3 = (*(code *)PTR_json_tokener_parse_00613ae4)(*puVar2);
        (*(code *)PTR_printbuf_free_00612794)(puVar2);
      }
    }
  }
  return uVar3;
}


/* json_object_to_file_ext @ 0043ec04 */

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
    (*(code *)PTR_mc_error_00614208)(PTR_s_bfPjPmmrJagyc0JnT6m8oXWXV3AGNaOk_00612340 + -0x1180);
    uVar1 = 0xffffffff;
  }
  else {
    iVar2 = (*(code *)PTR_open_0061479c)(param_1,0x301,0x1a4);
    if (iVar2 < 0) {
      puVar3 = (undefined4 *)(*(code *)PTR___errno_location_00614824)();
      uVar1 = (*(code *)PTR_strerror_00612748)(*puVar3);
      (*(code *)PTR_mc_error_00614208)
                (PTR_s_bfPjPmmrJagyc0JnT6m8oXWXV3AGNaOk_00612340 + -0x1158,param_1,uVar1);
      uVar1 = 0xffffffff;
    }
    else {
      iVar4 = (*(code *)PTR_json_object_to_json_string_ext_006143d8)(param_2,param_3);
      if (iVar4 == 0) {
        (*(code *)PTR_close_00613604)(iVar2);
        uVar1 = 0xffffffff;
      }
      else {
        uVar5 = (*(code *)PTR_strlen_00613f4c)(iVar4);
        for (local_1c = 0; local_1c < uVar5; local_1c = local_1c + iVar6) {
          iVar6 = (*(code *)PTR_write_00613734)(iVar2,iVar4 + local_1c,uVar5 - local_1c);
          if (iVar6 < 0) {
            (*(code *)PTR_close_00613604)(iVar2);
            puVar3 = (undefined4 *)(*(code *)PTR___errno_location_00614824)();
            uVar1 = (*(code *)PTR_strerror_00612748)(*puVar3);
            (*(code *)PTR_mc_error_00614208)
                      (PTR_s_bfPjPmmrJagyc0JnT6m8oXWXV3AGNaOk_00612340 + -0x1128,param_1,uVar1);
            return 0xffffffff;
          }
        }
        (*(code *)PTR_close_00613604)(iVar2);
        uVar1 = 0;
      }
    }
  }
  return uVar1;
}


/* FUN_0043eefc @ 0043eefc */

void FUN_0043eefc(undefined4 param_1,undefined4 param_2)

{
  (*(code *)PTR_json_object_to_file_ext_006146d4)(param_1,param_2,0);
  return;
}


/* json_parse_double @ 0043ef60 */

bool json_parse_double(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_sscanf_00613470)
                    (param_1,PTR_s_bfPjPmmrJagyc0JnT6m8oXWXV3AGNaOk_00612340 + -0x10f8,param_2);
  return iVar1 != 1;
}


/* FUN_0043efd4 @ 0043efd4 */

void FUN_0043efd4(void)

{
  bool bVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  int local_10;
  int local_c;
  
  (*(code *)PTR_sscanf_00613470)
            (PTR_s_bfPjPmmrJagyc0JnT6m8oXWXV3AGNaOk_00612340 + -0x10f4,
             PTR_s_bfPjPmmrJagyc0JnT6m8oXWXV3AGNaOk_00612340 + -0x10d4,&local_10);
  piVar3 = (int *)(*(code *)PTR___errno_location_00614824)();
  iVar4 = *piVar3;
  bVar1 = false;
  if ((local_10 == -0x80000000) && (local_c == 0)) {
    bVar1 = true;
  }
  (*(code *)PTR_sscanf_00613470)
            (PTR_s_bfPjPmmrJagyc0JnT6m8oXWXV3AGNaOk_00612340 + -0x10cc,
             PTR_s_bfPjPmmrJagyc0JnT6m8oXWXV3AGNaOk_00612340 + -0x10d4,&local_10);
  piVar3 = (int *)(*(code *)PTR___errno_location_00614824)();
  bVar2 = false;
  if ((local_10 == 0x7fffffff) && (local_c == -1)) {
    bVar2 = true;
  }
  if ((((iVar4 != 0x22) || (!bVar1)) || (*piVar3 != 0x22)) || (!bVar2)) {
    *(undefined4 *)(PTR_DAT_00612328 + 0x5f50) = 1;
  }
  return;
}


/* json_parse_int64 @ 0043f170 */

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
  if (*(int *)(PTR_DAT_00612328 + 0x5f54) == 0) {
    (*(code *)(PTR_LAB_00612348 + -0x102c))();
    *(undefined4 *)(PTR_DAT_00612328 + 0x5f54) = 1;
  }
  for (; ((*(ushort *)(*(int *)PTR___ctype_b_00613134 + *local_res0 * 2) & 0x20) != 0 &&
         (*local_res0 != '\0')); local_res0 = local_res0 + 1) {
  }
  puVar2 = (undefined4 *)(*(code *)PTR___errno_location_00614824)();
  *puVar2 = 0;
  iVar3 = (*(code *)PTR_sscanf_00613470)
                    (local_res0,PTR_s_bfPjPmmrJagyc0JnT6m8oXWXV3AGNaOk_00612340 + -0x10d4,&local_78)
  ;
  if (iVar3 != 1) {
    return 1;
  }
  piVar4 = (int *)(*(code *)PTR___errno_location_00614824)();
  local_84 = *piVar4;
  local_7c = local_res0;
  bVar1 = *local_res0 == '-';
  if (bVar1) {
    local_7c = local_res0 + 1;
  }
  if ((*(int *)(PTR_DAT_00612328 + 0x5f50) != 0) && (local_84 != 0x22)) {
    local_88 = &local_70;
    for (; (*local_7c == '0' && (local_7c[1] != '\0')); local_7c = local_7c + 1) {
    }
    bVar1 = (local_78 != 0 || local_74 != 0) && bVar1;
    (*(code *)PTR_snprintf_00613e24)
              (local_88,100,PTR_s_bfPjPmmrJagyc0JnT6m8oXWXV3AGNaOk_00612340 + -0x10d4,param_4,
               local_78,local_74);
    if (local_70 == '-') {
      local_88 = acStack_6f;
    }
    iVar3 = (*(code *)PTR_strlen_00613f4c)(local_88);
    if (bVar1 == (local_70 == '-')) {
      uVar5 = (*(code *)PTR_strlen_00613f4c)(local_88);
      iVar6 = (*(code *)PTR_strncmp_006140c8)(local_7c,local_88,uVar5);
      if ((iVar6 == 0) &&
         ((iVar6 = (*(code *)PTR_strlen_00613f4c)(local_7c), iVar6 == iVar3 ||
          ((*(ushort *)(*(int *)PTR___ctype_b_00613134 + local_7c[iVar3] * 2) & 8) == 0))))
      goto LAB_0043f51c;
    }
    local_84 = 0x22;
  }
LAB_0043f51c:
  if (local_84 == 0x22) {
    if (bVar1) {
      local_74 = *(int *)(PTR_s_bfPjPmmrJagyc0JnT6m8oXWXV3AGNaOk_00612340 + -0x1044);
      local_78 = *(int *)(PTR_s_bfPjPmmrJagyc0JnT6m8oXWXV3AGNaOk_00612340 + -0x1048);
    }
    else {
      local_74 = *(int *)(PTR_s_bfPjPmmrJagyc0JnT6m8oXWXV3AGNaOk_00612340 + -0x103c);
      local_78 = *(int *)(PTR_s_bfPjPmmrJagyc0JnT6m8oXWXV3AGNaOk_00612340 + -0x1040);
    }
  }
  param_2[1] = local_74;
  *param_2 = local_78;
  return 0;
}


/* FUN_0043f5a8 @ 0043f5a8 */

undefined4 FUN_0043f5a8(int param_1)

{
  undefined4 uVar1;
  
  if ((param_1 < 0) || (6 < param_1)) {
    (*(code *)PTR_mc_error_00614208)
              (PTR_s_bfPjPmmrJagyc0JnT6m8oXWXV3AGNaOk_00612340 + -0x107c,param_1,7);
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(PTR_DAT_0061234c + param_1 * 4 + 0xc10);
  }
  return uVar1;
}


/* lh_abort @ 0043f670 */

void lh_abort(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 local_res4;
  undefined4 local_res8;
  undefined4 local_resc;
  
  local_res4 = param_2;
  local_res8 = param_3;
  local_resc = param_4;
  (*(code *)PTR_vprintf_00613738)(param_1,&local_res4);
  (*(code *)PTR_exit_00612bd8)(1);
  return;
}


/* lh_ptr_hash @ 0043f6e4 */

uint lh_ptr_hash(int param_1)

{
  return (uint)(param_1 * -0x61c8ffff) >> 4;
}


/* lh_ptr_equal @ 0043f720 */

bool lh_ptr_equal(int param_1,int param_2)

{
  return param_1 == param_2;
}


/* lh_char_hash @ 0043f75c */

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


/* lh_char_equal @ 0043f7fc */

bool lh_char_equal(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strcmp_00612a7c)(param_1,param_2);
  return iVar1 == 0;
}


/* lh_table_new @ 0043f868 */

int * lh_table_new(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int *piVar1;
  int iVar2;
  int local_c;
  
  piVar1 = (int *)(*(code *)PTR_calloc_006148c0)(1,0x38);
  if (piVar1 == (int *)0x0) {
    (*(code *)PTR_lh_abort_00614084)(PTR_s_bfPjPmmrJagyc0JnT6m8oXWXV3AGNaOk_00612340 + -0x1030);
  }
  piVar1[1] = 0;
  *piVar1 = param_1;
  piVar1[7] = param_2;
  iVar2 = (*(code *)PTR_calloc_006148c0)(param_1,0x10);
  piVar1[10] = iVar2;
  if (piVar1[10] == 0) {
    (*(code *)PTR_lh_abort_00614084)(PTR_s_bfPjPmmrJagyc0JnT6m8oXWXV3AGNaOk_00612340 + -0x1030);
  }
  piVar1[0xb] = param_3;
  piVar1[0xc] = param_4;
  piVar1[0xd] = param_5;
  for (local_c = 0; local_c < param_1; local_c = local_c + 1) {
    *(undefined4 *)(piVar1[10] + local_c * 0x10) = 0xffffffff;
  }
  return piVar1;
}


/* lh_kchar_table_new @ 0043fa34 */

void lh_kchar_table_new(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  (*(code *)PTR_lh_table_new_00613700)
            (param_1,param_2,param_3,PTR_lh_char_hash_00612fd4,PTR_lh_char_equal_006142e4);
  return;
}


/* FUN_0043faac @ 0043faac */

void FUN_0043faac(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  (*(code *)PTR_lh_table_new_00613700)
            (param_1,param_2,param_3,PTR_lh_ptr_hash_00614470,PTR_lh_ptr_equal_006143ec);
  return;
}


/* lh_table_resize @ 0043fb24 */

void lh_table_resize(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *local_10;
  
  iVar1 = (*(code *)PTR_lh_table_new_00613700)(param_2,param_1[7],0,param_1[0xc],param_1[0xd]);
  for (local_10 = (undefined4 *)param_1[8]; local_10 != (undefined4 *)0x0;
      local_10 = (undefined4 *)local_10[2]) {
    (*(code *)PTR_lh_table_insert_00614850)(iVar1,*local_10,local_10[1]);
  }
  (*(code *)PTR_free_0061286c)(param_1[10]);
  param_1[10] = *(undefined4 *)(iVar1 + 0x28);
  *param_1 = param_2;
  param_1[8] = *(undefined4 *)(iVar1 + 0x20);
  param_1[9] = *(undefined4 *)(iVar1 + 0x24);
  param_1[3] = param_1[3] + 1;
  (*(code *)PTR_free_0061286c)(iVar1);
  return;
}


/* lh_table_free @ 0043fcf8 */

void lh_table_free(int param_1)

{
  undefined4 local_10;
  
  for (local_10 = *(int *)(param_1 + 0x20); local_10 != 0; local_10 = *(int *)(local_10 + 8)) {
    if (*(int *)(param_1 + 0x2c) != 0) {
      (**(code **)(param_1 + 0x2c))(local_10);
    }
  }
  (*(code *)PTR_free_0061286c)(*(undefined4 *)(param_1 + 0x28));
  (*(code *)PTR_free_0061286c)(param_1);
  return;
}


/* lh_table_insert @ 0043fdf4 */

undefined4 lh_table_insert(uint *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint local_20;
  
  param_1[5] = param_1[5] + 1;
  uVar3 = (*(code *)PTR___floatsidf_006137a8)(param_1[1]);
  uVar4 = (*(code *)PTR___floatsidf_006137a8)(*param_1);
  uVar4 = (*(code *)PTR___muldf3_006136f0)
                    ((int)((ulonglong)uVar4 >> 0x20),(int)uVar4,
                     *(undefined4 *)(PTR_s_bfPjPmmrJagyc0JnT6m8oXWXV3AGNaOk_00612340 + -0x1010),
                     *(undefined4 *)(PTR_s_bfPjPmmrJagyc0JnT6m8oXWXV3AGNaOk_00612340 + -0x100c));
  iVar1 = (*(code *)PTR___gedf2_00612dd0)
                    ((int)((ulonglong)uVar3 >> 0x20),(int)uVar3,(int)((ulonglong)uVar4 >> 0x20),
                     (int)uVar4);
  if (-1 < iVar1) {
    (*(code *)PTR_lh_table_resize_00613f50)(param_1,*param_1 << 1);
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


/* SHA256_Final @ 004c3df4 */

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
    (*(code *)PTR_memset_006130cc)((int)puVar6 + uVar1,0,0x40 - uVar1);
    FUN_004c1b00(c,puVar6,1);
    uVar1 = 0;
  }
  (*(code *)PTR_memset_006130cc)((int)puVar6 + uVar1,0,0x38 - uVar1);
  *(undefined1 *)(c->data + 0xe) = *(undefined1 *)&c->Nh;
  *(char *)((int)c->data + 0x39) = (char)*(undefined2 *)&c->Nh;
  *(char *)((int)c->data + 0x3a) = (char)(c->Nh >> 8);
  *(char *)((int)c->data + 0x3b) = (char)c->Nh;
  *(undefined1 *)(c->data + 0xf) = *(undefined1 *)&c->Nl;
  *(char *)((int)c->data + 0x3d) = (char)*(undefined2 *)&c->Nl;
  *(char *)((int)c->data + 0x3e) = (char)(c->Nl >> 8);
  *(char *)((int)c->data + 0x3f) = (char)c->Nl;
  FUN_004c1b00(c,puVar6,1);
  c->num = 0;
  (*(code *)PTR_memset_006130cc)(puVar6,0,0x40);
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


/* SHA256_Update @ 004c4170 */

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
        (*(code *)PTR_memcpy_00614674)((int)puVar4 + uVar3,data,len);
        c->num = c->num + len;
        return 1;
      }
      iVar5 = 0x40 - uVar3;
      (*(code *)PTR_memcpy_00614674)((int)puVar4 + uVar3,data,iVar5);
      FUN_004c1b00(c,puVar4,1);
      c->num = 0;
      (*(code *)PTR_memset_006130cc)(puVar4,0,0x40);
      len = len - iVar5;
      data = (void *)((int)data + iVar5);
    }
    uVar2 = len >> 6;
    if (uVar2 != 0) {
      FUN_004c1b00(c,data,uVar2);
      len = len + uVar2 * -0x40;
      data = (void *)((int)data + uVar2 * 0x40);
    }
    puVar1 = PTR_memcpy_00614674;
    if (len != 0) {
      c->num = len;
      (*(code *)puVar1)(c->data,data,len);
    }
  }
  return 1;
}


/* RSA_verify @ 004e041c */

int RSA_verify(int type,uchar *m,uint m_length,uchar *sigbuf,uint siglen,RSA *rsa)

{
  int iVar1;
  _func_1769 *UNRECOVERED_JUMPTABLE;
  
  if (((rsa->flags & 0x40U) != 0) &&
     (UNRECOVERED_JUMPTABLE = rsa->meth->rsa_verify, UNRECOVERED_JUMPTABLE != (_func_1769 *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x004e0464. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = (*UNRECOVERED_JUMPTABLE)(type,m,m_length,sigbuf,siglen,rsa);
    return iVar1;
  }
  iVar1 = int_rsa_verify(type,m,m_length,0,0,sigbuf,siglen,rsa);
  return iVar1;
}


/* RSA_public_decrypt @ 004e09e8 */

int RSA_public_decrypt(int flen,uchar *from,uchar *to,RSA *rsa,int padding)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004e09f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*rsa->meth->rsa_pub_dec)(flen,from,to,rsa,padding);
  return iVar1;
}


