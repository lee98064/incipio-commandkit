/* Ghidra-generated pseudo-C; not original source or a buildable project. */
/* _init @ 00410aa4 */

int _init(EVP_PKEY_CTX *ctx)

{
  int iVar1;
  
  FUN_00410c98();
  iVar1 = (*(code *)(PTR_LAB_0057d040 + 0x1cd0))();
  return iVar1;
}


/* entry @ 00410b30 */

void processEntry entry(undefined4 param_1,undefined4 param_2)

{
  undefined1 auStack_20 [16];
  undefined *local_10;
  undefined4 local_c;
  undefined1 *local_8;
  
  local_8 = auStack_20;
  local_10 = PTR__fini_0057e4d0;
  local_c = param_1;
  (*(code *)PTR___uClibc_main_0057e2c0)
            (PTR_main_0057d0e4,param_2,&stack0x00000004,PTR__init_0057d0d8);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* FUN_00410b90 @ 00410b90 */

void FUN_00410b90(void)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  code *pcVar6;
  
  if (PTR_DAT_0057d028[-0x1670] == '\0') {
    if (PTR___cxa_finalize_0057e3cc != (undefined *)0x0) {
      (*(code *)PTR___cxa_finalize_0057e3cc)(*(undefined4 *)PTR_LOOP_0057d02c);
    }
    puVar1 = PTR_DAT_0057d028;
    puVar4 = PTR_PTR_0057d034 + -0x6834;
    iVar5 = (int)PTR___DTOR_END___0057d030 - (int)puVar4;
    while( true ) {
      uVar2 = *(uint *)(puVar1 + -0x166c);
      iVar3 = uVar2 + 1;
      if ((iVar5 >> 2) - 1U <= uVar2) break;
      pcVar6 = *(code **)(puVar4 + iVar3 * 4);
      *(int *)(puVar1 + -0x166c) = iVar3;
      (*pcVar6)();
    }
    if (PTR___deregister_frame_info_0057e8cc != (undefined *)0x0) {
      (*(code *)PTR___deregister_frame_info_0057e8cc)(PTR_DAT_0057d038 + -0x6840);
    }
    PTR_DAT_0057d028[-0x1670] = 1;
  }
  return;
}


/* FUN_00410c98 @ 00410c98 */

void FUN_00410c98(void)

{
  if (PTR___register_frame_info_0057e3e0 != (undefined *)0x0) {
    (*(code *)PTR___register_frame_info_0057e3e0)
              (PTR_DAT_0057d038 + -0x6840,PTR_DAT_0057d028 + -0x1668);
  }
  if (*(int *)(PTR_PTR_0057d034 + -0x682c) != 0) {
    if (PTR__Jv_RegisterClasses_0057e608 != (undefined *)0x0) {
      (*(code *)PTR__Jv_RegisterClasses_0057e608)(PTR_PTR_0057d034 + -0x682c);
      return;
    }
  }
  return;
}


/* FUN_00410d30 @ 00410d30 */

void FUN_00410d30(void)

{
  (*(code *)PTR_puts_0057d208)("Stop socket and version check from cloud");
  DAT_0057e9b0 = 1;
  (*(code *)PTR_exit_0057d568)(0);
  return;
}


/* FUN_00410d70 @ 00410d70 */

int FUN_00410d70(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  int iVar6;
  
  iVar2 = (*(code *)PTR_strlen_0057e1dc)();
  iVar3 = (*(code *)PTR_strlen_0057e1dc)(param_2);
  iVar6 = iVar2 - iVar3;
  if (iVar3 <= iVar2) {
    pcVar4 = (char *)(param_1 + iVar6);
    for (; 0 < iVar6; iVar6 = iVar6 + -1) {
      pcVar5 = pcVar4;
      for (iVar2 = 0;
          (iVar2 < iVar3 &&
          (cVar1 = *pcVar5, pcVar5 = pcVar5 + 1, *(char *)(param_2 + iVar2) == cVar1));
          iVar2 = iVar2 + 1) {
      }
      pcVar4 = pcVar4 + -1;
      if (iVar2 == iVar3) {
        return param_1 + iVar6;
      }
    }
  }
  return 0;
}


/* main @ 00410e30 */

undefined4 main(undefined4 param_1,int param_2)

{
  int iVar1;
  char *pcVar2;
  undefined4 local_108;
  undefined1 *local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined1 auStack_e4 [64];
  undefined1 auStack_a4 [128];
  undefined4 local_24;
  int local_20;
  undefined4 local_1c;
  undefined1 *local_18;
  
  (*(code *)PTR_memset_0057d8ac)(auStack_a4,0,0x8c);
  (*(code *)PTR_signal_0057d1b4)(2,FUN_00410d30);
  (*(code *)PTR_signal_0057d1b4)(9,FUN_00410d30);
  (*(code *)PTR_strcpy_0057d0d4)(auStack_e4,"Incipiofw");
  if (*(int *)(param_2 + 4) == 0) {
    (*(code *)PTR_puts_0057d208)("---upgrade from usb---");
    (*(code *)PTR_UploadFromUsb_0057e4b4)("/var/tmp/usb/sda/fw.bin.rsa",auStack_a4);
    (*(code *)PTR_puts_0057d208)("---upgrade ok---");
    (*(code *)PTR_sleep_0057e5d8)(10);
    (*(code *)PTR_system_0057e6fc)("reboot");
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  iVar1 = FUN_00410d70(*(int *)(param_2 + 4),&DAT_005323a8);
  if (iVar1 != 0) {
    (*(code *)PTR_printf_0057d248)("[UPGFW] fwpath:%s\n",*(undefined4 *)(param_2 + 4));
  }
  (*(code *)PTR_memset_0057d8ac)(&local_104,0,0x20);
  local_104 = auStack_e4;
  local_100 = 100;
  local_fc = 10;
  local_f8 = 0x5a;
  if (g_progress_flag != 0) {
    (*(code *)PTR_progress_init_0057e7fc)(&local_104);
  }
  local_20 = (*(code *)PTR_https_download_fw_0057e950)(*(undefined4 *)(param_2 + 4),&local_108);
  if (local_20 != -1) {
    (*(code *)PTR_puts_0057d208)("\n====================================");
    (*(code *)PTR_printf_0057d248)("download over %d\n",local_20);
    local_18 = auStack_e4;
    iVar1 = (*(code *)PTR_strlen_0057e1dc)(local_18);
    (*(code *)PTR_memcpy_0057e698)(auStack_a4,local_18,iVar1 + 1);
    local_24 = local_108;
    local_1c = 0;
    (*(code *)PTR_puts_0057d208)("---upgrade firmware from download file---");
    iVar1 = (*(code *)PTR_Upload_0057d948)(auStack_a4);
    if (iVar1 == 4) {
      iVar1 = (*(code *)PTR_FirmwareUpgrade_0057da38)(auStack_a4);
      if (iVar1 == 200) {
        (*(code *)PTR_puts_0057d208)("---upgrade ok---");
        (*(code *)PTR_sleep_0057e5d8)(10);
        (*(code *)PTR_system_0057e6fc)("reboot");
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
      pcVar2 = "---upgrade fail---";
    }
    else {
      pcVar2 = "---fw verify fail---";
    }
    (*(code *)PTR_puts_0057d208)(pcVar2);
  }
  return 0;
}


/* FUN_00411150 @ 00411150 */

bool FUN_00411150(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined1 auStack_110 [260];
  
  (*(code *)PTR_memset_0057d8ac)(auStack_110,0,0x100);
  iVar1 = (*(code *)PTR_fopen_0057de2c)("/var/info.html","r");
  if (iVar1 == 0) {
    uVar4 = *(undefined4 *)PTR_stderr_0057dd14;
    puVar3 = (undefined4 *)(*(code *)PTR___errno_location_0057e7a4)();
    uVar2 = (*(code *)PTR_strerror_0057d27c)(*puVar3);
    (*(code *)PTR_fprintf_0057d7b4)(uVar4,"Open information file error, %s\n",uVar2);
  }
  else {
    (*(code *)PTR_fgets_0057db24)(auStack_110,0x100);
    (*(code *)PTR_strtok_0057dcec)(auStack_110,":");
    uVar2 = (*(code *)PTR_strtok_0057dcec)(0,":");
    (*(code *)PTR_printf_0057d248)("FileName=%s\n",uVar2);
  }
  return iVar1 != 0;
}


/* FUN_00411278 @ 00411278 */

undefined4 FUN_00411278(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined1 auStack_210 [256];
  undefined1 auStack_110 [256];
  
  (*(code *)PTR_memset_0057d8ac)(auStack_210,0,0x100);
  (*(code *)PTR_memset_0057d8ac)(auStack_110,0,0x100);
  iVar1 = (*(code *)PTR_fopen_0057de2c)(param_1,"r");
  if (iVar1 == 0) {
    uVar4 = *(undefined4 *)PTR_stderr_0057dd14;
    puVar3 = (undefined4 *)(*(code *)PTR___errno_location_0057e7a4)();
    uVar2 = (*(code *)PTR_strerror_0057d27c)(*puVar3);
    (*(code *)PTR_fprintf_0057d7b4)(uVar4,"Open information file error, %s\n",uVar2);
    uVar2 = 0x19a;
  }
  else {
    (*(code *)PTR_fgets_0057db24)(auStack_110,0x100,iVar1);
    uVar2 = (*(code *)PTR_strtok_0057dcec)(auStack_110,":");
    (*(code *)PTR_printf_0057d248)("New version=%s\n",uVar2);
    (*(code *)PTR_fclose_0057deb8)(iVar1);
    iVar1 = (*(code *)PTR_atoi_0057d314)(uVar2);
    uVar2 = 0x199;
    if (param_2 < iVar1) {
      uVar2 = 2;
    }
  }
  return uVar2;
}


/* FUN_004113f0 @ 004113f0 */

void FUN_004113f0(char *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_20;
  undefined4 local_1c;
  
  local_20 = 0;
  local_1c = 0;
  if (*param_1 != '\0') {
    iVar1 = (*(code *)PTR_strncmp_0057e2e8)(param_1,"http://",7);
    if (iVar1 == 0) {
      *(undefined4 *)(param_2 + 0x490) = 0;
    }
    else {
      iVar1 = (*(code *)PTR_strncmp_0057e2e8)(param_1,"https://",8);
      if (iVar1 == 0) {
        *(undefined4 *)(param_2 + 0x490) = 1;
      }
    }
    iVar1 = (*(code *)PTR_sscanf_0057dad4)
                      (param_1,"%99[^:]://%99[^:]:%i/%199[^\n]",&local_20,param_2 + 8,param_2 + 4,
                       param_2 + 0x88);
    if (iVar1 != 4) {
      iVar1 = (*(code *)PTR_sscanf_0057dad4)
                        (param_1,"%99[^:]://%99[^/]/%199[^\n]",&local_20,param_2 + 8,param_2 + 0x88)
      ;
      if (iVar1 == 3) {
        uVar2 = 0x1bb;
        if (*(int *)(param_2 + 0x490) != 1) {
          uVar2 = 0x50;
        }
        *(undefined4 *)(param_2 + 4) = uVar2;
      }
    }
  }
  return;
}


/* FUN_00411520 @ 00411520 */

/* WARNING: Removing unreachable block (ram,0x004118d8) */
/* WARNING: Removing unreachable block (ram,0x00411a10) */

undefined4 FUN_00411520(undefined4 param_1,undefined4 param_2)

{
  undefined *puVar1;
  int in_zero;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  code *pcVar9;
  undefined2 local_cd0 [2];
  undefined2 local_ccc;
  undefined2 local_cca;
  undefined4 local_cc8;
  undefined4 local_cc4;
  undefined4 local_cc0;
  char local_cbc [1024];
  undefined1 auStack_8bc [1024];
  int local_4bc;
  undefined4 local_4b8;
  undefined1 auStack_4b4 [128];
  undefined1 auStack_434 [1032];
  int local_2c;
  int local_28;
  int local_24;
  
  (*(code *)PTR_memset_0057d8ac)(&local_4bc,0,0x49c);
  (*(code *)PTR_memset_0057d8ac)(local_cbc,0,0x400);
  FUN_004113f0(param_1,&local_4bc);
  (*(code *)PTR_printf_0057d248)("SSL_flag:%d\n",local_2c);
  (*(code *)PTR_printf_0057d248)("webhost:%s\n",auStack_4b4);
  (*(code *)PTR_printf_0057d248)("hostfile:%s\n",auStack_434);
  (*(code *)PTR_printf_0057d248)("portnumber:%d\n\n",local_4b8);
  local_4bc = (*(code *)PTR_socket_0057d664)(2,2,0);
  if (local_4bc == -1) {
    uVar6 = *(undefined4 *)PTR_stderr_0057dd14;
    puVar2 = (undefined4 *)(*(code *)PTR___errno_location_0057e7a4)();
    uVar3 = (*(code *)PTR_strerror_0057d27c)(*puVar2);
    (*(code *)PTR_fprintf_0057d7b4)(uVar6,&DAT_00532584,uVar3);
    uVar3 = 0x194;
    if (*(int *)PTR_g_progress_flag_0057e3a8 != 0) {
      (*(code *)PTR_update_result_0057d578)(0x194);
      uVar3 = 0x194;
    }
  }
  else {
    local_ccc = 2;
    local_cc4 = 0;
    local_cc0 = 0;
    local_cca = 0;
    local_cc8 = *(undefined4 *)**(undefined4 **)(in_zero + 0x10);
    iVar4 = (*(code *)PTR_connect_0057e680)(local_4bc,&local_ccc,0x10);
    puVar1 = PTR_stderr_0057dd14;
    if (iVar4 == -1) {
      uVar6 = *(undefined4 *)PTR_stderr_0057dd14;
      puVar2 = (undefined4 *)(*(code *)PTR___errno_location_0057e7a4)();
      uVar3 = (*(code *)PTR_strerror_0057d27c)(*puVar2);
      (*(code *)PTR_fprintf_0057d7b4)(uVar6,&DAT_00532598,uVar3);
      if (*(int *)PTR_g_progress_flag_0057e3a8 == 0) {
        return 0x195;
      }
      (*(code *)PTR_update_result_0057d578)(0x195);
      return 0x195;
    }
    if (local_2c == 1) {
      (*(code *)PTR_SSL_library_init_0057d940)();
      (*(code *)PTR_fputs_0057d9e0)(&DAT_005325ac,*(undefined4 *)puVar1);
      (*(code *)PTR_SSL_load_error_strings_0057e430)();
      uVar3 = (*(code *)PTR_SSLv23_client_method_0057da88)();
      local_24 = (*(code *)PTR_SSL_CTX_new_0057df00)(uVar3);
      if ((local_24 == 0) || (local_28 = (*(code *)PTR_SSL_new_0057d7fc)(local_24), local_28 == 0))
      {
        (*(code *)PTR_ERR_print_errors_fp_0057e840)(*(undefined4 *)puVar1);
        if (*(int *)PTR_g_progress_flag_0057e3a8 != 0) {
          (*(code *)PTR_update_result_0057d578)(0x196);
          return 0x196;
        }
        return 0x196;
      }
      iVar4 = (*(code *)PTR_SSL_set_fd_0057de20)(local_28,local_4bc);
      if (iVar4 == 0) {
        uVar3 = *(undefined4 *)puVar1;
        goto LAB_00411d20;
      }
      (*(code *)PTR_RAND_poll_0057e2b8)();
      while (iVar4 = (*(code *)PTR_RAND_status_0057d3d4)(), iVar4 == 0) {
        iVar4 = (*(code *)PTR_rand_0057d618)();
        local_cd0[0] = (undefined2)(iVar4 % 0x10000);
        (*(code *)PTR_RAND_seed_0057df04)(local_cd0,2);
      }
      iVar4 = (*(code *)PTR_SSL_connect_0057e914)(local_28);
      if (iVar4 != 1) {
        (*(code *)PTR_ERR_print_errors_fp_0057e840)(*(undefined4 *)PTR_stderr_0057dd14);
        if (*(int *)PTR_g_progress_flag_0057e3a8 == 0) {
          return 0x197;
        }
        (*(code *)PTR_update_result_0057d578)(0x197);
        return 0x197;
      }
    }
    (*(code *)PTR_sprintf_0057d6e0)
              (auStack_8bc,
               "GET /%s HTTP/1.1\r\nAccept: */*\r\nAccept-Language: zh-cn\r\nUser-Agent: Mozilla/4.0 (compatible; MSIE 5.01; Windows NT 5.0)\r\nHost: %s:%d\r\nConnection: Close\r\n\r\n"
               ,auStack_434,auStack_4b4,local_4b8);
    (*(code *)PTR_printf_0057d248)("%s",auStack_8bc);
    iVar8 = 0;
    iVar4 = (*(code *)PTR_strlen_0057e1dc)(auStack_8bc);
    while (iVar8 < iVar4) {
      iVar5 = (*(code *)PTR_SSL_write_0057d7b8)(local_28,auStack_8bc + iVar8,iVar4 - iVar8);
      iVar8 = iVar8 + iVar5;
      if (iVar5 == -1) {
        (*(code *)PTR_ERR_print_errors_fp_0057e840)(*(undefined4 *)PTR_stderr_0057dd14);
        if (*(int *)PTR_g_progress_flag_0057e3a8 == 0) {
          return 0x198;
        }
        (*(code *)PTR_update_result_0057d578)(0x198);
        return 0x198;
      }
      (*(code *)PTR_printf_0057d248)("%d bytes send OK!\n",iVar8);
    }
    iVar4 = (*(code *)PTR_fopen_0057de2c)(param_2,"a");
    (*(code *)PTR_printf_0057d248)("logfile=%s\n",param_2);
    if (iVar4 == 0) {
      puVar2 = (undefined4 *)(*(code *)PTR___errno_location_0057e7a4)();
      uVar3 = (*(code *)PTR_strerror_0057d27c)(*puVar2);
      (*(code *)PTR_printf_0057d248)("Create file error! %s\n",uVar3);
      uVar3 = 0;
    }
    else {
      (*(code *)PTR_puts_0057d208)("\nThe following is the response header:");
      if (local_2c == 1) {
        uVar7 = 0;
LAB_00411be0:
        iVar8 = (*(code *)PTR_SSL_read_0057de60)(local_28,local_cbc,1);
        if (iVar8 == 1) {
          if (3 < (int)uVar7) goto LAB_00411ba0;
          iVar8 = (int)local_cbc[0];
          pcVar9 = (code *)PTR_putchar_0057e518;
          if ((iVar8 == 0xd) || (iVar8 == 10)) {
            uVar7 = uVar7 + 1;
          }
          else {
            uVar7 = 0;
          }
          goto LAB_00411bd0;
        }
        (*(code *)PTR_fclose_0057deb8)(iVar4);
        iVar4 = (*(code *)PTR_SSL_shutdown_0057d520)(local_28);
        (*(code *)PTR_printf_0057d248)("\nSSL shutdown!(%d)\n",iVar4);
        if (iVar4 != 1) {
          uVar3 = *(undefined4 *)PTR_stderr_0057dd14;
LAB_00411d20:
          (*(code *)PTR_ERR_print_errors_fp_0057e840)(uVar3);
          uVar3 = (*(code *)PTR_exit_0057d568)(1);
          return uVar3;
        }
      }
      else {
        uVar7 = 0;
LAB_00411cd4:
        iVar8 = (*(code *)PTR_read_0057e0d0)(local_4bc,local_cbc,1);
        if (iVar8 == 1) {
          if (3 < (int)uVar7) goto LAB_00411c94;
          iVar8 = (int)local_cbc[0];
          pcVar9 = (code *)PTR_putchar_0057e518;
          if ((iVar8 == 0xd) || (iVar8 == 10)) {
            uVar7 = uVar7 + 1;
          }
          else {
            uVar7 = 0;
          }
          goto LAB_00411cc4;
        }
        (*(code *)PTR_fclose_0057deb8)(iVar4);
      }
      (*(code *)PTR_close_0057dbfc)(local_4bc);
      if (local_2c == 1) {
        (*(code *)PTR_SSL_free_0057e180)(local_28);
        (*(code *)PTR_SSL_CTX_free_0057d14c)(local_24);
        (*(code *)PTR_puts_0057d208)("\nSSL Free!");
      }
      (*(code *)PTR_ERR_free_strings_0057df4c)();
      uVar3 = 1;
      if (*(int *)PTR_g_progress_flag_0057e3a8 != 0) {
        (*(code *)PTR_update_result_0057d578)(1);
        uVar3 = 1;
      }
    }
  }
  return uVar3;
LAB_00411ba0:
  uVar7 = uVar7 + 1;
  (*(code *)PTR_fwrite_0057e70c)(local_cbc,1,1,iVar4);
  iVar8 = iVar4;
  pcVar9 = (code *)PTR_fflush_0057d8c4;
  if ((uVar7 & 0x3ff) == 0) {
LAB_00411bd0:
    (*pcVar9)(iVar8);
  }
  goto LAB_00411be0;
LAB_00411c94:
  uVar7 = uVar7 + 1;
  (*(code *)PTR_fwrite_0057e70c)(local_cbc,1,1,iVar4);
  iVar8 = iVar4;
  pcVar9 = (code *)PTR_fflush_0057d8c4;
  if ((uVar7 & 0x3ff) == 0) {
LAB_00411cc4:
    (*pcVar9)(iVar8);
  }
  goto LAB_00411cd4;
}


/* https_download_fw @ 00411e20 */

/* WARNING: Removing unreachable block (ram,0x004122b0) */

int https_download_fw(undefined4 param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  char *pcVar8;
  uint uVar9;
  char *pcVar10;
  int iVar11;
  undefined *puVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  code *pcVar15;
  undefined2 local_3e00 [2];
  int local_3dfc;
  undefined4 local_3df8;
  undefined4 local_3df4;
  undefined4 local_3df0;
  undefined4 local_3dec;
  undefined1 auStack_3de8 [4];
  undefined4 local_3de4;
  undefined4 local_3de0;
  undefined1 auStack_3dc8 [48];
  undefined1 auStack_3d98 [64];
  undefined4 local_3d58 [32];
  undefined4 auStack_3cd8 [255];
  undefined1 auStack_38dc [4];
  undefined1 auStack_38d8 [1024];
  uint local_34d8;
  undefined4 local_34d4;
  undefined1 auStack_34d0 [128];
  undefined1 auStack_3450 [1024];
  int local_3050;
  int local_304c;
  int local_3048;
  uint local_3044;
  int local_3040;
  undefined1 auStack_303c [2048];
  undefined1 auStack_283c [10244];
  undefined4 *local_38;
  undefined2 *local_34;
  undefined4 *local_30;
  char *local_2c;
  
  (*(code *)PTR_memset_0057d8ac)(&local_34d8,0,0x49c);
  (*(code *)PTR_memset_0057d8ac)(auStack_3de8,0,0x20);
  local_3de0 = 2;
  local_3de4 = 0;
  (*(code *)PTR_memset_0057d8ac)(auStack_3cd8,0,0x400);
  (*(code *)PTR_memset_0057d8ac)(auStack_303c,0,0x800);
  (*(code *)PTR_strcpy_0057d0d4)(auStack_303c,param_1);
  FUN_004113f0(auStack_303c,&local_34d8);
  (*(code *)PTR_puts_0057d208)("[download]");
  (*(code *)PTR_printf_0057d248)("SSL_flag:%d\n",local_3048);
  (*(code *)PTR_printf_0057d248)("webhost:%s\n",auStack_34d0);
  (*(code *)PTR_printf_0057d248)("hostfile:%s\n",auStack_3450);
  (*(code *)PTR_printf_0057d248)("portnumber:%d\n\n",local_34d4);
  iVar1 = (*(code *)PTR_getaddrinfo_0057d110)(auStack_34d0,0,auStack_3de8,&local_3dfc);
  if (iVar1 == 0) {
    for (iVar1 = local_3dfc; iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x1c)) {
      iVar11 = *(int *)(iVar1 + 0x14);
      puVar12 = &UNK_00532704;
      if (*(int *)(iVar1 + 4) == 2) {
        iVar4 = iVar11 + 4;
        puVar12 = &DAT_005326fc;
        local_3050 = iVar11;
      }
      else {
        iVar4 = iVar11 + 8;
        local_304c = iVar11;
      }
      (*(code *)PTR_inet_ntop_0057d1ac)(*(undefined4 *)(iVar1 + 4),iVar4,auStack_3dc8,0x2e);
      (*(code *)PTR_printf_0057d248)(" %s: %s\n",puVar12,auStack_3dc8);
    }
    (*(code *)PTR_freeaddrinfo_0057e3bc)(local_3dfc);
    if (local_304c != 0) goto LAB_00412a1c;
    local_34d8 = (*(code *)PTR_socket_0057d664)(2,2,0);
    if (local_34d8 == 0xffffffff) {
      pcVar10 = *(char **)PTR_stderr_0057dd14;
      puVar3 = (undefined4 *)(*(code *)PTR___errno_location_0057e7a4)();
      uVar2 = (*(code *)PTR_strerror_0057d27c)(*puVar3);
      pcVar8 = "Socket Error:%s\a\n";
      pcVar15 = (code *)PTR_fprintf_0057d7b4;
    }
    else {
      local_3df8 = CONCAT22(2,(short)local_34d4);
      local_3df0 = 0;
      local_3dec = 0;
      local_3df4 = *(undefined4 *)(local_3050 + 4);
      uVar2 = (*(code *)PTR_inet_ntoa_0057d89c)(local_3df4);
      (*(code *)PTR_printf_0057d248)("[GetFWINFO] create socket IP:[%s]\n",uVar2);
      iVar1 = (*(code *)PTR_connect_0057e680)(local_34d8,&local_3df8,0x10);
      puVar12 = PTR_stderr_0057dd14;
      if (iVar1 != -1) {
        if (local_3048 == 1) {
          (*(code *)PTR_SSL_library_init_0057d940)();
          (*(code *)PTR_fputs_0057d9e0)(&DAT_005325ac,*(undefined4 *)puVar12);
          (*(code *)PTR_SSL_load_error_strings_0057e430)();
          uVar2 = (*(code *)PTR_SSLv23_client_method_0057da88)();
          local_3040 = (*(code *)PTR_SSL_CTX_new_0057df00)(uVar2);
          if (((local_3040 == 0) ||
              (local_3044 = (*(code *)PTR_SSL_new_0057d7fc)(local_3040), local_3044 == 0)) ||
             (iVar1 = (*(code *)PTR_SSL_set_fd_0057de20)(local_3044,local_34d8), iVar1 == 0)) {
            iVar1 = *(int *)puVar12;
            pcVar15 = (code *)PTR_ERR_print_errors_fp_0057e840;
          }
          else {
            (*(code *)PTR_RAND_poll_0057e2b8)();
            while (iVar1 = (*(code *)PTR_RAND_status_0057d3d4)(), iVar1 == 0) {
              iVar1 = (*(code *)PTR_rand_0057d618)();
              local_3e00[0] = (undefined2)(iVar1 % 0x10000);
              (*(code *)PTR_RAND_seed_0057df04)(local_3e00,2);
            }
            iVar1 = (*(code *)PTR_SSL_connect_0057e914)(local_3044);
            if (iVar1 == 1) goto LAB_0041231c;
LAB_004123cc:
            iVar1 = *(int *)PTR_stderr_0057dd14;
            pcVar15 = (code *)PTR_ERR_print_errors_fp_0057e840;
          }
LAB_0041299c:
          (*pcVar15)(iVar1);
        }
        else {
LAB_0041231c:
          (*(code *)PTR_sprintf_0057d6e0)
                    (auStack_3cd8,
                     "GET /%s HTTP/1.1\r\nAccept: */*\r\nAccept-Language: zh-cn\r\nUser-Agent: Mozilla/4.0 (compatible; MSIE 5.01; Windows NT 5.0)\r\nHost: %s:%d\r\nConnection: Close\r\n\r\n"
                     ,auStack_3450,auStack_34d0,local_34d4);
          (*(code *)PTR_printf_0057d248)("request:[%s]",auStack_3cd8);
          iVar11 = 0;
          iVar1 = (*(code *)PTR_strlen_0057e1dc)(auStack_3cd8);
          while (iVar11 < iVar1) {
            uVar9 = local_3044;
            pcVar15 = (code *)PTR_SSL_write_0057d7b8;
            if (local_3044 == 0) {
              uVar9 = local_34d8;
              pcVar15 = (code *)PTR_write_0057dcb4;
            }
            iVar4 = (*pcVar15)(uVar9,(int)auStack_3cd8 + iVar11,iVar1 - iVar11);
            iVar11 = iVar11 + iVar4;
            if (iVar4 == -1) goto LAB_004123cc;
            (*(code *)PTR_printf_0057d248)("%d bytes send OK!\n",iVar11);
          }
          (*(code *)PTR_puts_0057d208)("\nThe following is the response header:");
          (*(code *)PTR_memset_0057d8ac)(auStack_3d98,0,0x40);
          iVar11 = 0;
          (*(code *)PTR_memset_0057d8ac)(auStack_38d8,0,0x400);
          local_38 = auStack_3cd8;
          local_34 = local_3e00;
          local_30 = &local_3df8;
          puVar3 = local_3d58;
          while( true ) {
            do {
              *puVar3 = 0;
              puVar3 = puVar3 + 1;
            } while (puVar3 != local_38);
            *(uint *)(local_34 + (local_34d8 >> 5) * 2 + 0x54) =
                 *(uint *)(local_34 + (local_34d8 >> 5) * 2 + 0x54) | 1 << (local_34d8 & 0x1f);
            local_3df8 = 0x1e;
            local_3df4 = 0;
            iVar1 = (*(code *)PTR_select_0057e044)(local_34d8 + 1,local_3d58,0,0,local_30);
            if (iVar1 == -1) goto LAB_004127a0;
            if (iVar1 == 0) goto LAB_00412484;
            uVar9 = local_34d8;
            pcVar15 = (code *)PTR_read_0057e0d0;
            if (local_3044 != 0) {
              uVar9 = local_3044;
              pcVar15 = (code *)PTR_SSL_read_0057de60;
            }
            iVar4 = (*pcVar15)(uVar9,auStack_38d8 + iVar11,0x400 - iVar11);
            if (iVar4 == 0) {
              puVar3 = (undefined4 *)(*(code *)PTR___errno_location_0057e7a4)();
              pcVar8 = (char *)*puVar3;
              if (pcVar8 != (char *)0xb) goto LAB_00412850;
            }
            else if (iVar4 < 0) goto LAB_00412838;
            iVar5 = (*(code *)PTR_strstr_0057d4bc)(auStack_38d8,"\r\n\r\n");
            if (iVar5 != 0) break;
            iVar11 = iVar11 + iVar4;
            puVar3 = local_3d58;
          }
          (*(code *)PTR_printf_0057d248)("http_header:[%s]\n",auStack_38d8);
          iVar1 = (*(code *)PTR_strstr_0057d4bc)(auStack_38d8,"Content-Length: ");
          if (iVar1 == 0) {
            pcVar8 = "Can\'t get Content-Length in http header";
          }
          else {
            local_2c = (char *)(iVar1 + 0x10);
            iVar1 = (*(code *)PTR_strstr_0057d4bc)((char *)(iVar1 + 0x10),"\r\n");
            if (iVar1 == 0) {
              pcVar8 = "Can\'t get Content-Length end in http header";
            }
            else {
              (*(code *)PTR_snprintf_0057e134)(auStack_3d98,(iVar1 - (int)local_2c) + 1,"%s");
              iVar6 = (*(code *)PTR_atoi_0057d314)(auStack_3d98);
              (*(code *)PTR_printf_0057d248)("download_len :%d\n",iVar6);
              iVar1 = (*(code *)PTR_malloc_0057e358)(iVar6);
              if (iVar1 != 0) {
                (*(code *)PTR_memset_0057d8ac)(iVar1,0,iVar6);
                puVar14 = auStack_38d8 + ((iVar4 + iVar11) - iVar5) + -4;
                (*(code *)PTR_memcpy_0057e698)(iVar1,iVar5 + 4,puVar14);
                if (*(int *)PTR_g_progress_flag_0057e3a8 != 0) {
                  (*(code *)PTR_set_download_size_0057e6e8)(iVar6);
                }
                if (*(int *)PTR_g_progress_flag_0057e3a8 != 0) {
                  (*(code *)PTR_increase_progress_0057e0fc)(puVar14,3);
                }
                local_38 = auStack_3cd8;
                local_34 = local_3e00;
                local_30 = &local_3df8;
                for (puVar13 = puVar14; puVar3 = local_3d58, (int)puVar13 < iVar6;
                    puVar13 = puVar13 + (int)local_2c) {
                  do {
                    *puVar3 = 0;
                    puVar3 = puVar3 + 1;
                  } while (puVar3 != local_38);
                  local_3df8 = 0x1e;
                  *(uint *)(local_34 + (local_34d8 >> 5) * 2 + 0x54) =
                       *(uint *)(local_34 + (local_34d8 >> 5) * 2 + 0x54) | 1 << (local_34d8 & 0x1f)
                  ;
                  local_3df4 = 0;
                  iVar5 = (*(code *)PTR_select_0057e044)(local_34d8 + 1,local_3d58,0,0,local_30);
                  if (iVar5 == -1) goto LAB_004127a0;
                  if (iVar5 == 0) goto LAB_00412484;
                  (*(code *)PTR_memset_0057d8ac)(auStack_283c,0,0x2800);
                  uVar7 = iVar6 - (int)puVar13;
                  uVar9 = local_34d8;
                  pcVar15 = (code *)PTR_read_0057e0d0;
                  if (local_3044 != 0) {
                    uVar9 = local_3044;
                    pcVar15 = (code *)PTR_SSL_read_0057de60;
                  }
                  if (0x2800 < uVar7) {
                    uVar7 = 0x2800;
                  }
                  pcVar10 = (char *)(*pcVar15)(uVar9,auStack_283c,uVar7);
                  if (pcVar10 == (char *)0x0) {
                    local_2c = pcVar10;
                    puVar3 = (undefined4 *)(*(code *)PTR___errno_location_0057e7a4)();
                    pcVar8 = (char *)*puVar3;
                    pcVar10 = local_2c;
                    if (pcVar8 != (char *)0xb) goto LAB_00412850;
                  }
                  else if ((int)pcVar10 < 0) goto LAB_00412838;
                  local_2c = pcVar10;
                  (*(code *)PTR_memcpy_0057e698)(puVar13 + iVar1,auStack_283c,pcVar10);
                  if (*(int *)PTR_g_progress_flag_0057e3a8 != 0) {
                    (*(code *)PTR_increase_progress_0057e0fc)(local_2c,3);
                  }
                }
                (*(code *)PTR_printf_0057d248)
                          ("header_len = %d, content_len = %d\n",(iVar4 + iVar11) - (int)puVar14,
                           puVar13);
                iVar4 = 0;
                iVar11 = 1;
                if (local_3044 != 0) {
                  do {
                    iVar4 = iVar4 + 1;
                    iVar11 = (*(code *)PTR_SSL_shutdown_0057d520)(local_3044);
                    if (iVar4 == 10) break;
                    (*(code *)PTR_sleep_0057e5d8)(1);
                  } while (iVar11 == 0);
                }
                (*(code *)PTR_printf_0057d248)("download_len = %d\n",iVar6);
                if (iVar11 == 1) {
                  (*(code *)PTR_close_0057dbfc)(local_34d8);
                  if (local_3044 != 0) {
                    (*(code *)PTR_SSL_free_0057e180)();
                    (*(code *)PTR_SSL_CTX_free_0057d14c)(local_3040);
                  }
                  (*(code *)PTR_ERR_free_strings_0057df4c)();
                  *param_2 = iVar1;
                  return iVar6;
                }
                (*(code *)PTR_ERR_print_errors_fp_0057e840)(*(undefined4 *)PTR_stderr_0057dd14);
                pcVar15 = (code *)PTR_free_0057d32c;
                goto LAB_0041299c;
              }
              pcVar8 = "memory alloc error";
            }
          }
          (*(code *)PTR_puts_0057d208)(pcVar8);
        }
        goto LAB_00412a1c;
      }
      pcVar10 = *(char **)PTR_stderr_0057dd14;
      puVar3 = (undefined4 *)(*(code *)PTR___errno_location_0057e7a4)();
      uVar2 = (*(code *)PTR_strerror_0057d27c)(*puVar3);
      pcVar8 = "Connect Error:%s\a\n";
      pcVar15 = (code *)PTR_fprintf_0057d7b4;
    }
  }
  else {
    pcVar10 = *(char **)PTR_stderr_0057dd14;
    uVar2 = (*(code *)PTR_gai_strerror_0057dba4)(iVar1);
    pcVar8 = "getaddrinfo: %s\n";
    pcVar15 = (code *)PTR_fprintf_0057d7b4;
  }
  goto LAB_00412874;
LAB_004127a0:
  pcVar8 = "Download select error";
  goto LAB_00412490;
LAB_00412484:
  pcVar8 = "Download select timeout";
LAB_00412490:
  (*(code *)PTR_puts_0057d208)(pcVar8);
LAB_00412838:
  puVar3 = (undefined4 *)(*(code *)PTR___errno_location_0057e7a4)();
  pcVar8 = (char *)*puVar3;
LAB_00412850:
  local_2c = pcVar8;
  uVar2 = (*(code *)PTR_strerror_0057d27c)(pcVar8);
  pcVar10 = "errno(%d)=%s\n";
  pcVar8 = local_2c;
  pcVar15 = (code *)PTR_printf_0057d248;
LAB_00412874:
  (*pcVar15)(pcVar10,pcVar8,uVar2);
LAB_00412a1c:
  if (*(int *)PTR_g_progress_flag_0057e3a8 != 0) {
    (*(code *)PTR_update_result_0057d578)(400);
  }
  return -1;
}


/* set_upgrade_size @ 00412b10 */

void set_upgrade_size(undefined4 param_1)

{
  undefined *UNRECOVERED_JUMPTABLE;
  int iVar1;
  
  iVar1 = DAT_0057e9c0;
  UNRECOVERED_JUMPTABLE = PTR_printf_0057d248;
  if (DAT_0057e9c0 != 0) {
    *(undefined4 *)(DAT_0057e9c0 + 0x14) = param_1;
    *(undefined4 *)(iVar1 + 0x1c) = 0;
                    /* WARNING: Could not recover jumptable at 0x00412b3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)UNRECOVERED_JUMPTABLE)("set_upgrade_size=[%d]\n",param_1);
    return;
  }
  return;
}


/* set_download_size @ 00412b4c */

void set_download_size(undefined4 param_1)

{
  undefined *UNRECOVERED_JUMPTABLE;
  int iVar1;
  
  iVar1 = DAT_0057e9c0;
  UNRECOVERED_JUMPTABLE = PTR_printf_0057d248;
  if (DAT_0057e9c0 != 0) {
    *(undefined4 *)(DAT_0057e9c0 + 0x10) = param_1;
    *(undefined4 *)(iVar1 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x00412b78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)UNRECOVERED_JUMPTABLE)("set_download_size=[%d]\n",param_1);
    return;
  }
  return;
}


/* FUN_00412b88 @ 00412b88 */

void FUN_00412b88(undefined4 param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_410 [1024];
  
  puVar1 = PTR_fopen_0057de2c;
  *DAT_0057e9c0 = param_1;
  iVar2 = (*(code *)puVar1)("/var/fwProgress","w");
  if (iVar2 != 0) {
    uVar3 = (*(code *)PTR_fileno_0057dcc8)(iVar2);
    (*(code *)PTR_flock_0057d83c)(uVar3,2);
    (*(code *)PTR_sprintf_0057d6e0)(auStack_410,"%s %d %d",*DAT_0057e9c0,DAT_0057e9c8,DAT_0057e9c4);
    uVar3 = (*(code *)PTR_strlen_0057e1dc)(auStack_410);
    (*(code *)PTR_fwrite_0057e70c)(auStack_410,1,uVar3,iVar2);
    uVar3 = (*(code *)PTR_fileno_0057dcc8)(iVar2);
    (*(code *)PTR_flock_0057d83c)(uVar3,8);
    (*(code *)PTR_fclose_0057deb8)(iVar2);
  }
  return;
}


/* update_result @ 00412cc8 */

void update_result(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_410 [1024];
  
  DAT_0057e9c4 = param_1;
  iVar1 = (*(code *)PTR_fopen_0057de2c)("/var/fwProgress","w");
  if (iVar1 != 0) {
    uVar2 = (*(code *)PTR_fileno_0057dcc8)(iVar1);
    (*(code *)PTR_flock_0057d83c)(uVar2,2);
    (*(code *)PTR_sprintf_0057d6e0)(auStack_410,"%s %d %d",*DAT_0057e9c0,DAT_0057e9c8,param_1);
    uVar2 = (*(code *)PTR_strlen_0057e1dc)(auStack_410);
    (*(code *)PTR_fwrite_0057e70c)(auStack_410,1,uVar2,iVar1);
    uVar2 = (*(code *)PTR_fileno_0057dcc8)(iVar1);
    (*(code *)PTR_flock_0057d83c)(uVar2,8);
    (*(code *)PTR_fclose_0057deb8)(iVar1);
  }
  return;
}


/* increase_progress @ 00412e04 */

undefined4 increase_progress(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  undefined1 auStack_410 [1024];
  
  if (param_2 == 3) {
    iVar1 = DAT_0057e9c0[4];
  }
  else {
    if ((param_2 < 3) || (2 < param_2 - 5U)) goto LAB_00412e88;
    iVar1 = DAT_0057e9c0[5];
  }
  if (iVar1 < 1) {
    return 1;
  }
LAB_00412e88:
  DAT_0057e9c4 = param_2;
  iVar1 = (*(code *)PTR_fopen_0057de2c)("/var/fwProgress","w");
  if (iVar1 != 0) {
    uVar2 = (*(code *)PTR_fileno_0057dcc8)(iVar1);
    (*(code *)PTR_flock_0057d83c)(uVar2,2);
    if (param_2 == 3) {
      piVar5 = DAT_0057e9c0 + 6;
      piVar3 = DAT_0057e9c0 + 4;
      piVar7 = DAT_0057e9c0 + 2;
    }
    else {
      piVar5 = (int *)0x0;
      if ((param_2 < 3) || (2 < param_2 - 5U)) {
        piVar7 = (int *)0x0;
        piVar3 = (int *)0x0;
      }
      else {
        piVar5 = DAT_0057e9c0 + 7;
        piVar3 = DAT_0057e9c0 + 5;
        piVar7 = DAT_0057e9c0 + 3;
      }
    }
    iVar6 = *piVar3;
    iVar4 = *piVar7;
    param_1 = param_1 + *piVar5;
    *piVar5 = param_1;
    if (param_1 < *piVar3) {
      if (iVar4 == 0) {
        trap(0x1c00);
      }
      uVar2 = *DAT_0057e9c0;
      iVar4 = iVar6 / iVar4 + 1;
      if (iVar4 == 0) {
        trap(0x1c00);
      }
      iVar4 = param_1 / iVar4 + DAT_0057e9c8;
    }
    else {
      iVar4 = *piVar7 + DAT_0057e9c8;
      uVar2 = *DAT_0057e9c0;
      DAT_0057e9c8 = iVar4;
    }
    (*(code *)PTR_sprintf_0057d6e0)(auStack_410,"%s %d %d",uVar2,iVar4,param_2);
    uVar2 = (*(code *)PTR_strlen_0057e1dc)(auStack_410);
    (*(code *)PTR_fwrite_0057e70c)(auStack_410,1,uVar2,iVar1);
    uVar2 = (*(code *)PTR_fileno_0057dcc8)(iVar1);
    (*(code *)PTR_flock_0057d83c)(uVar2,8);
    (*(code *)PTR_fclose_0057deb8)(iVar1);
  }
  return 0;
}


/* progress_init @ 0041308c */

/* WARNING: Restarted to delay deadcode elimination for space: ram */

undefined4 progress_init(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined1 auStack_410 [1024];
  
  if (param_1 != (int *)0x0) {
    DAT_0057e9c8 = 0;
    DAT_0057e9c0 = param_1;
    (*(code *)PTR_printf_0057d248)("T %d\n",param_1[1]);
    (*(code *)PTR_printf_0057d248)("D %d\n",DAT_0057e9c0[2]);
    (*(code *)PTR_printf_0057d248)("U %d\n\n",DAT_0057e9c0[3]);
    if (DAT_0057e9c0[3] + DAT_0057e9c0[2] == DAT_0057e9c0[1]) {
      if (*DAT_0057e9c0 != 0) {
        iVar1 = (*(code *)PTR_fopen_0057de2c)("/var/fwProgress","w");
        if (iVar1 == 0) {
          return 0;
        }
        uVar2 = (*(code *)PTR_fileno_0057dcc8)(iVar1);
        (*(code *)PTR_flock_0057d83c)(uVar2,2);
        (*(code *)PTR_sprintf_0057d6e0)(auStack_410,"%s %d %d",*DAT_0057e9c0,0,0);
        uVar2 = (*(code *)PTR_strlen_0057e1dc)(auStack_410);
        (*(code *)PTR_fwrite_0057e70c)(auStack_410,1,uVar2,iVar1);
        uVar2 = (*(code *)PTR_fileno_0057dcc8)(iVar1);
        (*(code *)PTR_flock_0057d83c)(uVar2,8);
        (*(code *)PTR_fclose_0057deb8)(iVar1);
        return 0;
      }
      pcVar3 = "progressName null";
    }
    else {
      pcVar3 = "totalProgress != subprogress";
    }
    (*(code *)PTR_puts_0057d208)(pcVar3);
  }
  return 1;
}


/* FUN_004132b0 @ 004132b0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * FUN_004132b0(byte *pem,int public_key)

{
  int iVar1;
  code *pcVar2;
  void *local_10 [2];
  
  local_10[0] = (void *)0x0;
  iVar1 = (*(code *)PTR_BIO_new_mem_buf_0057e91c)(pem,0xffffffff);
  if (iVar1 == 0) {
    (*(code *)PTR_puts_0057d208)("Failed to create key BIO");
    local_10[0] = (void *)0x0;
  }
  else {
    pcVar2 = (code *)PTR_PEM_read_bio_RSAPrivateKey_0057e050;
    if (public_key != 0) {
      pcVar2 = (code *)PTR_PEM_read_bio_RSA_PUBKEY_0057d86c;
    }
    local_10[0] = (void *)(*pcVar2)(iVar1,local_10,0,0);
    if (local_10[0] == (void *)0x0) {
      (*(code *)PTR_puts_0057d208)("Failed to create RSA");
    }
  }
  return local_10[0];
}


/* FUN_0041335c @ 0041335c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int FUN_0041335c(byte *ciphertext,int ciphertext_length,byte *public_key_pem,byte *plaintext)

{
  void *pvVar1;
  int iVar2;
  
  pvVar1 = FUN_004132b0(public_key_pem,1);
  iVar2 = (*(code *)PTR_RSA_public_decrypt_0057d350)
                    (ciphertext_length,ciphertext,plaintext,pvVar1,DAT_00576540);
  return iVar2;
}


/* FUN_004133cc @ 004133cc */

undefined4 FUN_004133cc(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined1 uVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 local_c0 [20];
  undefined1 auStack_ac [44];
  undefined1 auStack_80 [100];
  
  (*(code *)PTR_SHA1_Init_0057d594)(auStack_80);
  puVar4 = local_c0;
  (*(code *)PTR_SHA1_Update_0057e340)(auStack_80,param_1,param_2);
  (*(code *)PTR_SHA1_Final_0057d480)(puVar4,auStack_80);
  puVar3 = auStack_ac;
  do {
    uVar1 = *puVar4;
    puVar4 = puVar4 + 1;
    (*(code *)PTR_sprintf_0057d6e0)(puVar3,&DAT_00532934,uVar1);
    puVar3 = puVar3 + 2;
  } while (puVar4 != auStack_ac);
  iVar2 = (*(code *)PTR_memcmp_0057d714)(param_3,auStack_ac,param_4);
  if ((iVar2 == 0) && (iVar2 = (*(code *)PTR_strlen_0057e1dc)(auStack_ac), param_4 == iVar2)) {
    (*(code *)PTR_puts_0057d208)("The signature check successfully.");
    return 1;
  }
  (*(code *)PTR_puts_0057d208)("The signature doesn\'t match the firmware hash code.");
  return 0;
}


/* FUN_00413510 @ 00413510 */

undefined4 FUN_00413510(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  byte abStack_1138 [276];
  byte abStack_1024 [4100];
  
  (*(code *)PTR_memset_0057d8ac)(abStack_1024,0,0x1002);
  (*(code *)PTR_memcpy_0057e698)
            (abStack_1138,
             "-----BEGIN PUBLIC KEY-----\nMIGfMA0GCSqGSIb3DQEBAQUAA4GNADCBiQKBgQDEfQaDf1W49oIv5Rh1LRiwyosx\nHAqbv+qeJKk9oZO2FUBAv88E6cXTUYtlkg0BUr5H6ecthgpuzsoSOj07HwMefxTI\nPcWLL0XP5Ch5HGiyYTPjutGJgbBmTslnt2s4yWrOzOskUrWv71bd9AdHXwmarAiY\nPQypQJ42EPv/Sv1nKwIDAQAB\n-----END PUBLIC KEY-----\n"
             ,0x111);
  iVar6 = *(int *)(param_1 + 0x80);
  iVar5 = iVar6 + param_2;
  if (iVar5 == 0) {
    pcVar3 = "can\'t get  SIGN_HEADER!";
  }
  else {
    iVar1 = (*(code *)PTR_memcmp_0057d714)(iVar5,&DAT_00532994,4);
    if (iVar1 != 0) {
      pcVar3 = "memcmp SIGN_HEADER(%s) fail!\n";
      puVar4 = &DAT_00532994;
LAB_0041370c:
      (*(code *)PTR_printf_0057d248)(pcVar3,puVar4);
      return 0;
    }
    iVar6 = FUN_0041335c((byte *)(iVar6 + param_2 + 0x10),*(int *)(iVar5 + 0xc),abStack_1138,
                         abStack_1024);
    if (iVar6 == -1) {
      pcVar3 = "Public Decrypt failed";
    }
    else {
      iVar6 = FUN_004133cc(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x88),
                           abStack_1024,iVar6);
      if (iVar6 == 0) {
        return 0;
      }
      iVar6 = param_2 + 0x10 + *(int *)(iVar5 + 0xc);
      iVar5 = *(int *)(param_1 + 0x80) + iVar6;
      if (iVar5 != 0) {
        iVar1 = (*(code *)PTR_memcmp_0057d714)(iVar5,&DAT_005329ec,4);
        puVar4 = &DAT_005329ec;
        if (iVar1 == 0) {
          (*(code *)PTR_printf_0057d248)
                    ("get DVER_HEADER (%s)startAddr (%d), burnAddr (%d), len (%d)\n",iVar5,
                     *(undefined4 *)(iVar5 + 4),*(undefined4 *)(iVar5 + 8),
                     *(undefined4 *)(iVar5 + 0xc));
          iVar5 = *(int *)(param_1 + 0x80) + iVar6 + 0x10;
          (*(code *)PTR_memset_0057d8ac)(param_1 + 0x40,0,0x40);
          uVar2 = (*(code *)PTR_strlen_0057e1dc)(iVar5);
          (*(code *)PTR_memcpy_0057e698)(param_1 + 0x40,iVar5,uVar2);
          return 1;
        }
        pcVar3 = "memcmp DVER_HEADER(%s) fail!\n";
        goto LAB_0041370c;
      }
      pcVar3 = "can\'t get DVER_HEADER!";
    }
  }
  (*(code *)PTR_puts_0057d208)(pcVar3);
  return 0;
}


/* Upload @ 00413760 */

/* WARNING: Removing unreachable block (ram,0x00413ab8) */
/* WARNING: Removing unreachable block (ram,0x00413b00) */

undefined4 Upload(int param_1)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  short sVar6;
  char cVar7;
  char *pcVar8;
  uint uVar9;
  uint unaff_s0;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  undefined1 auStack_100 [200];
  int local_38;
  uint local_34;
  undefined1 *local_30;
  
  local_30 = auStack_100;
  local_38 = 0;
  iVar14 = 0;
  iVar13 = 0;
  bVar2 = false;
  iVar11 = 0;
  do {
    local_34 = *(uint *)(param_1 + 0x84);
    uVar15 = iVar11 + 0x10;
    if (local_34 <= uVar15) {
LAB_00413a88:
      *(int *)(param_1 + 0x88) = iVar14;
      iVar11 = FUN_00413510(param_1,iVar11);
      if (iVar11 == 0) {
LAB_00413b44:
        if (*(int *)PTR_g_progress_flag_0057e3a8 != 0) {
          (*(code *)PTR_update_result_0057d578)(0x191);
        }
        DAT_0057e9d4 = 0;
        (*(code *)PTR_fprintf_0057d7b4)(*(undefined4 *)PTR_stderr_0057dd14,"%s\n",auStack_100);
        uVar4 = 0x191;
      }
      else {
        DAT_0057e9d4 = *(int *)(param_1 + 0x84) / 0x11001 + 0x3e;
        if ((iVar13 != 0) && (!bVar2)) {
          (*(code *)PTR_strcpy_0057d0d4)(auStack_100,"Update successfully!");
          DAT_0057e9d4 = *(int *)(param_1 + 0x84) / 0x11001 + 0x32;
          DAT_0057e9d8 = iVar13;
        }
        uVar4 = 4;
        if (*(int *)PTR_g_progress_flag_0057e3a8 != 0) {
          (*(code *)PTR_update_result_0057d578)(4);
          uVar4 = 4;
        }
      }
      return uVar4;
    }
    iVar12 = *(int *)(param_1 + 0x80);
    iVar10 = iVar12 + iVar11;
    uVar9 = iVar10 + 0xcU & 3;
    iVar5 = *(int *)((iVar10 + 0xcU) - uVar9);
    iVar3 = (*(code *)PTR_memcmp_0057d714)(iVar10,&DAT_00532b80,4);
    uVar1 = iVar10 + 0xfU & 3;
    unaff_s0 = (iVar5 << uVar9 * 8 | unaff_s0 & 0xffffffffU >> (4 - uVar9) * 8) &
               -1 << (uVar1 + 1) * 8 | *(uint *)((iVar10 + 0xfU) - uVar1) >> (3 - uVar1) * 8;
    iVar5 = 1;
    if (iVar3 == 0) {
LAB_00413948:
      if (0x400000 < (int)unaff_s0) {
        pcVar8 = "Image len exceed max size 0x%x ! len=0x%x";
        uVar15 = 0x400000;
        uVar9 = unaff_s0;
LAB_00413974:
        (*(code *)PTR_sprintf_0057d6e0)(auStack_100,pcVar8,uVar15,uVar9);
        goto LAB_00413b44;
      }
      if ((iVar5 == 1) || (iVar5 == 3)) {
        sVar6 = 0;
        for (iVar5 = 0; iVar5 < (int)unaff_s0; iVar5 = iVar5 + 2) {
          sVar6 = sVar6 + *(short *)(iVar12 + uVar15 + iVar5);
        }
        if (sVar6 != 0) {
          uVar9 = (uint)*(ushort *)(iVar12 + unaff_s0 + -2);
          pcVar8 = "Image checksum mismatched! len=0x%x, checksum=0x%x";
          uVar15 = unaff_s0;
          goto LAB_00413974;
        }
      }
      else {
        cVar7 = '\0';
        for (iVar5 = 0; iVar5 < (int)unaff_s0; iVar5 = iVar5 + 1) {
          cVar7 = cVar7 + *(char *)(iVar12 + uVar15 + iVar5);
        }
        if (cVar7 != '\0') {
          pcVar8 = "Image checksum mismatched! len=0x%x";
LAB_00413a30:
          (*(code *)PTR_sprintf_0057d6e0)(auStack_100,pcVar8,unaff_s0);
          goto LAB_00413b44;
        }
      }
      (*(code *)PTR_sprintf_0057d6e0)
                (local_30,"Upload successfully (size = %d bytes)! Firmware update in progress.",
                 local_34);
      unaff_s0 = unaff_s0 + 0x10;
      iVar14 = unaff_s0 + iVar14;
      iVar11 = unaff_s0 + iVar11;
      bVar2 = true;
    }
    else {
      iVar5 = (*(code *)PTR_memcmp_0057d714)(iVar10,&DAT_00532b88,4);
      if (iVar5 == 0) {
        iVar5 = 1;
        goto LAB_00413948;
      }
      iVar3 = (*(code *)PTR_memcmp_0057d714)(iVar10,&DAT_00532b90,4);
      iVar5 = 2;
      if (iVar3 == 0) goto LAB_00413948;
      iVar3 = (*(code *)PTR_memcmp_0057d714)(iVar10,&DAT_00532b98,4);
      iVar5 = 3;
      if (iVar3 == 0) goto LAB_00413948;
      iVar5 = (*(code *)PTR_memcmp_0057d714)(iVar10,"COMPHS",6);
      if (((iVar5 != 0) && (iVar5 = (*(code *)PTR_memcmp_0057d714)(iVar10,"COMPDS",6), iVar5 != 0))
         && (iVar5 = (*(code *)PTR_memcmp_0057d714)(iVar10,"COMPCS",6), iVar5 != 0)) {
        if (local_38 == 0) {
          pcVar8 = "%d:Invalid file format!";
          unaff_s0 = 0x6a8;
          goto LAB_00413a30;
        }
        goto LAB_00413a88;
      }
      iVar13 = (*(code *)PTR_memcmp_0057d714)(iVar10,"COMPCS",6);
      if (iVar13 == 0) {
        iVar13 = 1;
        iVar11 = *(int *)(iVar12 + iVar11 + 8) + 0xc + iVar11;
        DAT_0057e9dc = iVar11;
      }
      else {
        iVar13 = 1;
        iVar11 = *(int *)(iVar12 + iVar11 + 8) + 0xc + iVar11;
      }
    }
    local_38 = 1;
  } while( true );
}


/* FUN_00413bcc @ 00413bcc */

bool FUN_00413bcc(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  
  iVar1 = (*(code *)PTR_open_0057e750)("/dev/mtdblock0",0);
  bVar3 = false;
  if (iVar1 != -1) {
    (*(code *)PTR_lseek_0057e15c)(iVar1,param_2,0);
    iVar2 = (*(code *)PTR_read_0057e0d0)(iVar1,param_1,param_3);
    bVar3 = iVar2 == param_3;
    (*(code *)PTR_close_0057dbfc)(iVar1);
  }
  return bVar3;
}


/* FUN_00413c98 @ 00413c98 */

int FUN_00413c98(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 local_30;
  undefined4 local_2c;
  undefined1 auStack_28 [8];
  uint local_20;
  
  iVar1 = (*(code *)PTR_open_0057e750)(param_1,0);
  if (iVar1 == -1) {
    (*(code *)PTR_fprintf_0057d7b4)(*(undefined4 *)PTR_stderr_0057dd14,"%s\n","Open file failed!\n")
    ;
    iVar1 = -0x80000000;
  }
  else {
    (*(code *)PTR_lseek_0057e15c)(iVar1,0x10000,0);
    local_30 = 0;
    local_2c = 0;
    iVar2 = (*(code *)PTR_read_0057e0d0)(iVar1,auStack_28,0x10);
    iVar3 = 0;
    if (iVar2 == 0x10) {
      local_30 = DAT_00532b80;
      local_2c = DAT_00532b88;
      iVar2 = (*(code *)PTR_memcmp_0057d714)(auStack_28,&local_30,4);
      iVar3 = 1;
      if (iVar2 != 0) {
        iVar2 = (*(code *)PTR_memcmp_0057d714)(auStack_28,&local_2c,4);
        iVar3 = 2;
        if (iVar2 != 0) {
          (*(code *)PTR_puts_0057d208)("no sys signature at !");
          iVar3 = 0;
        }
      }
    }
    (*(code *)PTR_lseek_0057e15c)(iVar1,0x10000,0);
    uVar4 = 0x80000000;
    if ((iVar3 != 0) && (uVar4 = local_20, -1 < (int)local_20)) {
      uVar4 = 0x80000001;
    }
    (*(code *)PTR_close_0057dbfc)(iVar1);
    iVar1 = -0x7ffffffe;
    if (((0x80000001 < uVar4) && (iVar1 = -0x10, uVar4 != 0xfffffff0)) &&
       (iVar1 = uVar4 + 1, param_2 == 0)) {
      iVar1 = -0x10;
    }
  }
  return iVar1;
}


/* FUN_00413e4c @ 00413e4c */

uint FUN_00413e4c(undefined4 param_1)

{
  uint uVar1;
  undefined1 auStack_a0 [156];
  
  uVar1 = (*(code *)PTR_stat_0057e184)(param_1,auStack_a0);
  return ~uVar1 >> 0x1f;
}


/* UploadFromUsb @ 00413e84 */

undefined4 UploadFromUsb(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  undefined4 local_1a0;
  undefined2 local_19c;
  undefined1 local_19a;
  undefined1 auStack_199 [41];
  undefined1 auStack_170 [128];
  undefined1 auStack_f0 [200];
  undefined1 *local_28;
  
  local_19a = DAT_00533056;
  local_1a0 = DAT_00533050;
  local_19c = DAT_00533054;
  (*(code *)PTR_memset_0057d8ac)(auStack_199,0,0x29);
  if (param_1 == 0) {
    (*(code *)PTR_sprintf_0057d6e0)(auStack_170,"/var/tmp/usb/sda/%s",&local_1a0);
  }
  else {
    (*(code *)PTR_strcpy_0057d0d4)(auStack_170,param_1);
  }
  (*(code *)PTR_printf_0057d248)("USB Upload,File Path:%s\n",auStack_170);
  iVar1 = FUN_00413e4c(auStack_170);
  if (iVar1 == 0) {
    pcVar4 = "Error! Firmware is not exist in path!\n";
  }
  else {
    iVar1 = (*(code *)PTR_open_0057e750)(auStack_170,0);
    if (iVar1 != 0) {
      (*(code *)PTR_lseek_0057e15c)(iVar1,0,0);
      iVar6 = 0;
      iVar5 = 0;
      (*(code *)PTR_puts_0057d208)("\t\t<read image from usb storage device>");
      while( true ) {
        iVar6 = (*(code *)PTR_realloc_0057e5c8)(iVar6,iVar5 + 0x1000);
        if (iVar6 == 0) {
          pcVar4 = "reallco failed !\n";
          goto LAB_00413ffc;
        }
        iVar2 = (*(code *)PTR_read_0057e0d0)(iVar1,iVar6 + iVar5,0x1000);
        (*(code *)PTR_putchar_0057e518)(0x2e);
        if (iVar2 == -1) break;
        iVar5 = iVar5 + iVar2;
        if (iVar2 != 0x1000) {
          (*(code *)PTR_close_0057dbfc)(iVar1);
          (*(code *)PTR_putchar_0057e518)(10);
          if (*(int *)PTR_g_progress_flag_0057e3a8 != 0) {
            (*(code *)PTR_set_download_size_0057e6e8)(iVar5);
          }
          if (*(int *)PTR_g_progress_flag_0057e3a8 != 0) {
            (*(code *)PTR_increase_progress_0057e0fc)(iVar5,3);
          }
          local_28 = auStack_170;
          uVar3 = (*(code *)PTR_strlen_0057e1dc)(local_28);
          (*(code *)PTR_memcpy_0057e698)(param_2,local_28,uVar3);
          *(int *)(param_2 + 0x80) = iVar6;
          *(int *)(param_2 + 0x84) = iVar5;
          *(undefined4 *)(param_2 + 0x88) = 0;
          uVar3 = Upload(param_2);
          return uVar3;
        }
      }
      (*(code *)PTR_strcpy_0057d0d4)(auStack_f0,"file read error!\n");
      (*(code *)PTR_puts_0057d208)("file read error!");
      goto LAB_00414060;
    }
    pcVar4 = "Open image file  failed!\n";
  }
LAB_00413ffc:
  (*(code *)PTR_strcpy_0057d0d4)(auStack_f0,pcVar4);
LAB_00414060:
  (*(code *)PTR_printf_0057d248)("errmsg: %s\n",auStack_f0);
  return 400;
}


/* FUN_00414188 @ 00414188 */

bool FUN_00414188(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  
  iVar1 = (*(code *)PTR_open_0057e750)("/dev/mtdblock0",2);
  bVar3 = false;
  if (iVar1 != -1) {
    (*(code *)PTR_lseek_0057e15c)(iVar1,param_2,0);
    iVar2 = (*(code *)PTR_write_0057dcb4)(iVar1,param_1,param_3);
    bVar3 = iVar2 == param_3;
    (*(code *)PTR_close_0057dbfc)(iVar1);
    (*(code *)PTR_sync_0057d8e8)();
  }
  return bVar3;
}


/* FUN_0041426c @ 0041426c */

bool FUN_0041426c(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = 0x6000;
  if ((param_1 != 1) && (uVar1 = 0xc000, param_1 == 2)) {
    uVar1 = 0x8000;
  }
  iVar2 = FUN_00414188(param_2,uVar1);
  if (iVar2 == 0) {
    (*(code *)PTR_printf_0057d248)("flash write apmib failed");
  }
  return iVar2 != 0;
}


/* FUN_004142d8 @ 004142d8 */

int FUN_004142d8(int param_1,uint param_2,int param_3)

{
  byte bVar1;
  byte bVar2;
  undefined1 uVar3;
  undefined1 *puVar4;
  int iVar5;
  undefined1 *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  byte *pbVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  
  puVar4 = (undefined1 *)(*(code *)PTR_malloc_0057e358)(0x1011);
  iVar5 = 0;
  DAT_0057e9e0 = puVar4;
  if (puVar4 != (undefined1 *)0x0) {
    puVar6 = puVar4;
    do {
      *puVar6 = 0x20;
      puVar6 = puVar6 + 1;
      iVar5 = 0;
    } while (puVar6 != puVar4 + 0xfee);
    uVar9 = 0;
    uVar8 = 0xfee;
    uVar7 = 0;
    while( true ) {
      while( true ) {
        uVar9 = uVar9 >> 1;
        uVar11 = uVar9;
        if ((uVar9 & 0x100) == 0) {
          pbVar10 = (byte *)(param_1 + uVar7);
          uVar7 = uVar7 + 1;
          uVar11 = (uint)*pbVar10;
          uVar9 = uVar11 | 0xff00;
          if (param_2 < uVar7) goto LAB_00414438;
        }
        uVar12 = uVar7 + 1;
        if ((uVar11 & 1) == 0) break;
        bVar1 = *(byte *)(param_1 + uVar7);
        if (param_2 < uVar12) goto LAB_00414438;
        pbVar10 = (byte *)(param_3 + iVar5);
        puVar4[uVar8] = bVar1;
        iVar5 = iVar5 + 1;
        *pbVar10 = bVar1;
        uVar8 = uVar8 + 1 & 0xfff;
        uVar7 = uVar12;
      }
      bVar1 = *(byte *)(param_1 + uVar7);
      uVar7 = uVar7 + 2;
      if (param_2 < uVar12) break;
      bVar2 = *(byte *)(param_1 + uVar12);
      if (param_2 < uVar7) break;
      puVar6 = (undefined1 *)(param_3 + iVar5);
      iVar13 = 0;
      do {
        uVar3 = puVar4[iVar13 + ((bVar2 & 0xf0) << 4 | (uint)bVar1) & 0xfff];
        iVar13 = iVar13 + 1;
        puVar4[uVar8] = uVar3;
        iVar5 = iVar5 + 1;
        *puVar6 = uVar3;
        uVar8 = uVar8 + 1 & 0xfff;
        puVar6 = puVar6 + 1;
      } while (iVar13 <= (int)((bVar2 & 0xf) + 2));
    }
LAB_00414438:
    (*(code *)PTR_free_0057d32c)();
  }
  return iVar5;
}


/* FUN_00414460 @ 00414460 */

int FUN_00414460(int param_1,int param_2,uint *param_3,undefined4 *param_4)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  int unaff_s1;
  int iVar7;
  uint uVar8;
  int unaff_s5;
  undefined4 local_38 [2];
  int local_30;
  int local_2c;
  
  local_2c = 0;
  iVar7 = 0;
  local_30 = 0;
  bVar1 = false;
  uVar8 = 0;
  do {
    iVar6 = param_1 + iVar7;
    iVar2 = (*(code *)PTR_memcmp_0057d714)(iVar6,"COMPHS",6);
    if (iVar2 == 0) {
      bVar1 = true;
    }
    else {
      iVar2 = (*(code *)PTR_memcmp_0057d714)(iVar6,"COMPDS",6);
      if (((iVar2 != 0) && (iVar2 = (*(code *)PTR_memcmp_0057d714)(iVar6,"COMPCS",6), iVar2 != 0))
         && (local_2c != 0)) break;
    }
    iVar6 = param_1 + iVar7;
    iVar2 = (*(code *)PTR_malloc_0057e358)((uint)*(ushort *)(iVar6 + 6) * *(int *)(iVar6 + 8));
    local_30 = iVar2;
    if (iVar2 == 0) {
      (*(code *)PTR_puts_0057d208)("malloc for expFile error!!");
      return 0;
    }
    if (!bVar1) {
      unaff_s1 = iVar2;
    }
    FUN_004142d8(param_1 + iVar7 + 0xc,*(undefined4 *)(iVar6 + 8),iVar2);
    iVar3 = (*(code *)PTR_sscanf_0057dad4)(unaff_s1 + 2,&DAT_00532e08,local_38);
    if (bVar1) {
      unaff_s5 = iVar2;
    }
    if (iVar3 != 1) {
      local_38[0] = 0xffffffff;
    }
    iVar3 = (*(code *)PTR_memcmp_0057d714)(unaff_s1,&DAT_00532e10,2);
    uVar5 = 1;
    if (iVar3 == 0) {
LAB_00414658:
      if (bVar1) {
        cVar4 = '\0';
        iVar3 = iVar2;
        while (iVar3 + 1 != iVar2 + *(ushort *)(unaff_s5 + 4) + 1) {
          cVar4 = cVar4 + *(char *)(iVar3 + 6);
          iVar3 = iVar3 + 1;
        }
      }
      else {
        cVar4 = '\0';
        for (iVar3 = 0; iVar3 < *(int *)(unaff_s1 + 4); iVar3 = iVar3 + 1) {
          cVar4 = cVar4 + *(char *)(iVar2 + iVar3 + 8);
        }
      }
      if (cVar4 != '\0') {
LAB_00414984:
        uVar5 = 0;
        goto LAB_00414988;
      }
      FUN_0041426c(4,param_1 + iVar7,*(int *)(iVar6 + 8) + 0xc,uVar5,local_38[0]);
      iVar6 = *(int *)(iVar6 + 8);
      uVar8 = uVar8 | 4;
LAB_0041481c:
      local_2c = 1;
      iVar7 = iVar6 + 0xc + iVar7;
      (*(code *)PTR_free_0057d32c)(iVar2);
      local_30 = 0;
    }
    else {
      iVar3 = (*(code *)PTR_memcmp_0057d714)(unaff_s1,&DAT_00532e14,2,1);
      uVar5 = 2;
      if (iVar3 == 0) goto LAB_00414658;
      iVar3 = (*(code *)PTR_memcmp_0057d714)(unaff_s1,&DAT_00532e18,2,2);
      if (iVar3 == 0) {
        uVar5 = 0;
        goto LAB_00414658;
      }
      iVar3 = (*(code *)PTR_memcmp_0057d714)(unaff_s1,&DAT_00532e2c,2);
      uVar5 = 1;
      if (iVar3 == 0) {
LAB_00414760:
        if (bVar1) {
          cVar4 = '\0';
          iVar3 = iVar2;
          while (iVar3 + 1 != iVar2 + *(ushort *)(unaff_s5 + 4) + 1) {
            cVar4 = cVar4 + *(char *)(iVar3 + 6);
            iVar3 = iVar3 + 1;
          }
        }
        else {
          cVar4 = '\0';
          for (iVar3 = 0; iVar3 < *(int *)(unaff_s1 + 4); iVar3 = iVar3 + 1) {
            cVar4 = cVar4 + *(char *)(iVar2 + iVar3 + 8);
          }
        }
        if (cVar4 == '\0') {
          FUN_0041426c(2,param_1 + iVar7,*(int *)(iVar6 + 8) + 0xc,uVar5,local_38[0]);
          iVar6 = *(int *)(iVar6 + 8);
          uVar8 = uVar8 | 2;
          goto LAB_0041481c;
        }
        goto LAB_00414984;
      }
      iVar3 = (*(code *)PTR_memcmp_0057d714)(unaff_s1,&DAT_00532e1c,2,1);
      uVar5 = 2;
      if (iVar3 == 0) goto LAB_00414760;
      iVar3 = (*(code *)PTR_memcmp_0057d714)(unaff_s1,&DAT_00532e20,2,2);
      if (iVar3 == 0) {
        uVar5 = 0;
        goto LAB_00414760;
      }
      iVar3 = (*(code *)PTR_memcmp_0057d714)(unaff_s1,&DAT_00532e30,2);
      uVar5 = 1;
      if (iVar3 == 0) {
LAB_00414880:
        if (bVar1) {
          cVar4 = '\0';
          iVar3 = iVar2;
          while (iVar3 + 1 != iVar2 + *(ushort *)(unaff_s5 + 4) + 1) {
            cVar4 = cVar4 + *(char *)(iVar3 + 6);
            iVar3 = iVar3 + 1;
          }
        }
        else {
          cVar4 = '\0';
          for (iVar3 = 0; iVar3 < *(int *)(unaff_s1 + 4); iVar3 = iVar3 + 1) {
            cVar4 = cVar4 + *(char *)(iVar2 + iVar3 + 8);
          }
        }
        if (cVar4 == '\0') {
          FUN_0041426c(1,param_1 + iVar7,*(int *)(iVar6 + 8) + 0xc,uVar5,local_38[0]);
          local_2c = 1;
          local_30 = 0;
          iVar7 = *(int *)(iVar6 + 8) + 0xc + iVar7;
          (*(code *)PTR_free_0057d32c)(iVar2);
          uVar8 = uVar8 | 1;
          goto LAB_00414958;
        }
        goto LAB_00414984;
      }
      iVar3 = (*(code *)PTR_memcmp_0057d714)(unaff_s1,&DAT_00532e24,2,1);
      uVar5 = 2;
      if (iVar3 == 0) goto LAB_00414880;
      iVar3 = (*(code *)PTR_memcmp_0057d714)(unaff_s1,&DAT_00532e28,2,2);
      uVar5 = 0;
      if (iVar3 == 0) goto LAB_00414880;
    }
LAB_00414958:
  } while (iVar7 < param_2);
  uVar5 = 1;
  if (local_30 != 0) {
LAB_00414988:
    (*(code *)PTR_free_0057d32c)(local_30);
  }
  *param_3 = uVar8;
  *param_4 = uVar5;
  return iVar7;
}


/* FUN_00414b00 @ 00414b00 */

void FUN_00414b00(void)

{
  (*(code *)PTR_puts_0057d208)("upgrade: killing tasks...");
  (*(code *)PTR_kill_0057d0cc)(1,0x18);
  (*(code *)PTR_kill_0057d0cc)(1,0x17);
  (*(code *)PTR_kill_0057d0cc)(2,0x17);
  (*(code *)PTR_kill_0057d0cc)(3,0x17);
  (*(code *)PTR_kill_0057d0cc)(4,0x17);
  (*(code *)PTR_kill_0057d0cc)(5,0x17);
  (*(code *)PTR_kill_0057d0cc)(6,0x17);
  (*(code *)PTR_kill_0057d0cc)(7,0x17);
  (*(code *)PTR_sync_0057d8e8)();
  (*(code *)PTR_signal_0057d1b4)(0xf,1);
  (*(code *)PTR_setpgrp_0057dd18)();
  (*(code *)PTR_sleep_0057e5d8)(1);
                    /* WARNING: Could not recover jumptable at 0x00414c58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_signal_0057d1b4)(1,1);
  return;
}


/* FUN_00414c60 @ 00414c60 */

undefined4 FUN_00414c60(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_110 [256];
  
  (*(code *)PTR_memset_0057d8ac)(auStack_110,0,0x100);
  (*(code *)PTR_sprintf_0057d6e0)(auStack_110,"flash get DUALBANK_ENABLED > %s","/var/readMibData");
  uVar3 = 0;
  (*(code *)PTR_system_0057e6fc)(auStack_110);
  iVar1 = (*(code *)PTR_fopen_0057de2c)("/var/readMibData","r");
  if (iVar1 != 0) {
    (*(code *)PTR_fgets_0057db24)(auStack_110,0x100,iVar1);
    iVar2 = (*(code *)PTR_strstr_0057d4bc)(auStack_110,"DUALBANK_ENABLED=");
    if (iVar2 != 0) {
      uVar3 = (*(code *)PTR_atoi_0057d314)(iVar2 + 0x11);
    }
    (*(code *)PTR_fclose_0057deb8)(iVar1);
  }
  return uVar3;
}


/* FUN_00414d78 @ 00414d78 */

void FUN_00414d78(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char local_20 [12];
  
  iVar1 = (*(code *)PTR_fopen_0057de2c)("/proc/bootbank","r");
  if (iVar1 == 0) {
    (*(code *)PTR_fprintf_0057d7b4)
              (*(undefined4 *)PTR_stderr_0057dd14,"%s\n","Read /proc/bootbank failed!\n");
  }
  else {
    (*(code *)PTR_fgets_0057db24)(local_20,2,iVar1);
    (*(code *)PTR_fclose_0057deb8)(iVar1);
  }
  if (((int)local_20[0] - 0x31U < 2) && (uVar2 = 1, local_20[0] != 0x31)) {
    uVar3 = 2;
  }
  else {
    uVar2 = 2;
    uVar3 = 1;
  }
  if (param_1 == 0) {
    uVar2 = uVar3;
  }
  *param_2 = uVar3;
  *param_3 = uVar2;
  return;
}


/* FirmwareUpgrade @ 00414e7c */

/* WARNING: Removing unreachable block (ram,0x00415340) */

undefined4 FirmwareUpgrade(int param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined **ppuVar5;
  short sVar6;
  char cVar7;
  char *pcVar8;
  undefined4 uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  int local_118;
  int local_114;
  int local_110;
  int local_10c;
  undefined1 auStack_108 [200];
  int local_40;
  uint local_3c;
  uint local_38;
  int local_34;
  uint local_30;
  
  uVar2 = FUN_00414c60();
  FUN_00414d78(uVar2,&local_118,&local_114);
  if (*(int *)PTR_g_progress_flag_0057e3a8 != 0) {
    (*(code *)PTR_set_upgrade_size_0057db60)(*(int *)(param_1 + 0x88) + -0x10);
  }
  local_34 = 0;
  iVar13 = 0;
  do {
    local_38 = iVar13 + 0x10;
    if (*(uint *)(param_1 + 0x88) <= local_38) {
LAB_00415450:
      if (*(int *)PTR_g_progress_flag_0057e3a8 != 0) {
        (*(code *)PTR_update_result_0057d578)(200);
      }
      DAT_0057e9d0 = 1;
      return 200;
    }
    local_40 = *(int *)(param_1 + 0x80);
    iVar14 = local_40 + iVar13;
    uVar12 = *(uint *)(iVar14 + 0xc);
    iVar3 = (*(code *)PTR_memcmp_0057d714)(iVar14,&DAT_00532b80,4);
    local_3c = uVar12 + 0x10;
    local_30 = local_3c;
    if ((iVar3 == 0) || (iVar3 = (*(code *)PTR_memcmp_0057d714)(iVar14,&DAT_00532b88,4), iVar3 == 0)
       ) {
      iVar3 = 1;
LAB_004150d8:
      if (0x400000 < (int)uVar12) {
        pcVar8 = "Image len exceed max size 0x%x ! len=0x%x</b><br>";
        uVar10 = 0x400000;
        uVar11 = uVar12;
LAB_0041517c:
        (*(code *)PTR_sprintf_0057d6e0)(auStack_108,pcVar8,uVar10,uVar11);
LAB_004151e4:
        if (*(int *)PTR_g_progress_flag_0057e3a8 != 0) {
          (*(code *)PTR_update_result_0057d578)(0x192);
        }
        (*(code *)PTR_fprintf_0057d7b4)(*(undefined4 *)PTR_stderr_0057dd14,"%s\n",auStack_108);
        return 0x192;
      }
      if ((iVar3 == 1) || (iVar3 == 3)) {
        sVar6 = 0;
        for (iVar4 = 0; iVar4 < (int)uVar12; iVar4 = iVar4 + 2) {
          sVar6 = sVar6 + *(short *)(local_40 + local_38 + iVar4);
        }
        if (sVar6 != 0) {
          uVar11 = (uint)*(ushort *)(local_40 + uVar12 + -2);
          pcVar8 = "Image checksum mismatched! len=0x%x, checksum=0x%x</b><br>";
          uVar10 = uVar12;
          goto LAB_0041517c;
        }
        if (iVar3 == 3) {
          ppuVar5 = (undefined **)(&DAT_00576558 + (local_114 + -1) * 4);
        }
        else {
          if (iVar3 != 1) goto LAB_00415260;
          ppuVar5 = &PTR_s__dev_mtdblock0_00576550 + local_114 + -1;
        }
        pcVar8 = *ppuVar5;
      }
      else {
        cVar7 = '\0';
        for (iVar4 = 0; iVar4 < (int)uVar12; iVar4 = iVar4 + 1) {
          cVar7 = cVar7 + *(char *)(local_40 + local_38 + iVar4);
        }
        if (cVar7 != '\0') {
          pcVar8 = "Image checksum mismatched! len=0x%x</b><br>";
          goto LAB_004151dc;
        }
LAB_00415260:
        pcVar8 = "/dev/mtdblock0";
      }
      local_40 = (*(code *)PTR_open_0057e750)(pcVar8,2);
      if (local_40 == -1) {
        (*(code *)PTR_strcpy_0057d0d4)(auStack_108,"File open failed!");
      }
      else {
        if ((iVar3 == 1) || (uVar9 = 0, iVar3 != 3)) {
          uVar9 = *(undefined4 *)(iVar14 + 8);
        }
        (*(code *)PTR_lseek_0057e15c)(local_40,uVar9,0);
        if (iVar3 == 3) {
          iVar4 = 0x10;
          local_3c = uVar12;
        }
        else {
          iVar4 = 0;
          if (iVar3 == 1) {
            uVar9 = FUN_00413c98((&PTR_s__dev_mtdblock0_00576550)[local_118 + -1],uVar2);
            *(undefined4 *)(iVar14 + 8) = uVar9;
          }
        }
        puVar1 = PTR_g_progress_flag_0057e3a8;
        iVar3 = (int)local_3c / 100;
        local_38 = iVar4 + iVar13;
        uVar12 = 0;
        (*(code *)PTR_printf_0057d248)("fwLen=[ %d ]\nperWrite=[ %d ]\n\n",local_3c,iVar3);
        while( true ) {
          if ((int)(local_3c - uVar12) < iVar3) {
            iVar3 = local_3c - uVar12;
          }
          if (uVar12 == local_3c) break;
          iVar14 = (*(code *)PTR_write_0057dcb4)
                             (local_40,*(int *)(param_1 + 0x80) + local_38 + uVar12,iVar3);
          uVar12 = uVar12 + iVar14;
          if (*(int *)puVar1 != 0) {
            (*(code *)PTR_increase_progress_0057e0fc)(iVar14,5);
          }
          (*(code *)PTR_sync_0057d8e8)();
          (*(code *)PTR_usleep_0057e6a8)(5000);
        }
        (*(code *)PTR_printf_0057d248)("write over, totalwrite=[ %d ]\n",uVar12);
        iVar13 = local_30 + iVar13;
        (*(code *)PTR_close_0057dbfc)(local_40);
      }
    }
    else {
      iVar4 = (*(code *)PTR_memcmp_0057d714)(iVar14,&DAT_00532b90,4);
      iVar3 = 2;
      if (iVar4 == 0) goto LAB_004150d8;
      iVar4 = (*(code *)PTR_memcmp_0057d714)(iVar14,&DAT_00532b98,4);
      iVar3 = 3;
      if (iVar4 == 0) goto LAB_004150d8;
      iVar3 = (*(code *)PTR_memcmp_0057d714)(iVar14,"COMPHS",6);
      if (((iVar3 != 0) && (iVar3 = (*(code *)PTR_memcmp_0057d714)(iVar14,"COMPDS",6), iVar3 != 0))
         && (iVar3 = (*(code *)PTR_memcmp_0057d714)(iVar14,"COMPCS",6), iVar3 != 0)) {
        if (local_34 == 0) {
          pcVar8 = "%d:Invalid file format!";
          uVar12 = 0x204;
LAB_004151dc:
          (*(code *)PTR_sprintf_0057d6e0)(auStack_108,pcVar8,uVar12);
          goto LAB_004151e4;
        }
        goto LAB_00415450;
      }
      local_110 = 0;
      local_10c = 0;
      iVar3 = FUN_00414460(*(int *)(param_1 + 0x80) + iVar13,DAT_0057e9dc,&local_110,&local_10c);
      if ((local_10c == 0) || (local_110 == 0)) {
        pcVar8 = "%d:Invalid file format!";
        uVar12 = 0x1f6;
        goto LAB_004151dc;
      }
      (*(code *)PTR_strcpy_0057d0d4)(auStack_108,"Update successfully!");
      iVar13 = iVar13 + iVar3;
    }
    local_34 = 1;
  } while( true );
}


/* FUN_004154f4 @ 004154f4 */

int FUN_004154f4(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (param_1 == 0) {
    return -1;
  }
  iVar1 = (*(code *)PTR_strstr_0057d4bc)(param_1,"/octet-stream\r\n");
  iVar2 = 0x11;
  if (iVar1 == 0) {
    iVar1 = (*(code *)PTR_strstr_0057d4bc)(param_1,"/x-ns-proxy-autoconfig\r\n");
    iVar2 = 0x1a;
    if (iVar1 == 0) {
      iVar1 = (*(code *)PTR_strstr_0057d4bc)(param_1,"/macbinary\r\n");
      iVar2 = 0xe;
      if (iVar1 == 0) {
        iVar1 = (*(code *)PTR_strstr_0057d4bc)(param_1,"/x-macbinary\r\n");
        iVar2 = 0x10;
        if (iVar1 == 0) {
          iVar1 = (*(code *)PTR_strstr_0057d4bc)(param_1,"filename=");
          if ((iVar1 != 0) && (iVar1 = (*(code *)PTR_strchr_0057d2d0)(iVar1,0x22), iVar1 != 0)) {
            iVar1 = (*(code *)PTR_strstr_0057d4bc)(iVar1,&DAT_005330ec);
            iVar2 = 4;
            if (iVar1 != 0) goto LAB_004155e4;
          }
          return -1;
        }
      }
    }
  }
LAB_004155e4:
  return (iVar1 - param_1) + iVar2;
}


/* SSLv23_client_method @ 00415610 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

SSL_METHOD * SSLv23_client_method(void)

{
  return (SSL_METHOD *)&DAT_00572154;
}


/* FUN_0041561c @ 0041561c */

undefined4 FUN_0041561c(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 == 2) {
    uVar1 = (*(code *)PTR_SSLv2_client_method_0057e328)();
  }
  else if (param_1 == 0x300) {
    uVar1 = (*(code *)PTR_SSLv3_client_method_0057dfc8)();
  }
  else {
    uVar1 = 0;
    if (param_1 == 0x301) {
      uVar1 = (*(code *)PTR_TLSv1_client_method_0057e79c)();
    }
  }
  return uVar1;
}


/* FUN_004156a4 @ 004156a4 */

int FUN_004156a4(int *param_1)

{
  char cVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  byte *pbVar9;
  byte bVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  int iVar17;
  byte *pbVar18;
  int iVar19;
  char *pcVar20;
  code *pcVar21;
  byte bVar22;
  code *pcVar23;
  undefined4 local_60;
  undefined4 local_5c;
  char local_58;
  char local_57;
  char local_56;
  byte *local_50;
  byte *local_4c;
  byte *local_48;
  byte *local_44;
  int local_40;
  uint local_3c;
  byte *local_38;
  int local_34;
  code *local_30;
  
  local_60 = (*(code *)PTR_time_0057dd4c)(0);
  (*(code *)PTR_RAND_add_0057dc08)(&local_60,4,0,0);
  (*(code *)PTR_ERR_clear_error_0057e148)();
  puVar4 = (undefined4 *)(*(code *)PTR___errno_location_0057e7a4)();
  *puVar4 = 0;
  pcVar21 = (code *)param_1[0x34];
  if (pcVar21 == (code *)0x0) {
    pcVar21 = *(code **)(param_1[0x39] + 0x9c);
  }
  param_1[7] = param_1[7] + 1;
  uVar5 = (*(code *)PTR_SSL_state_0057e370)(param_1);
  if (((uVar5 & 0x3000) == 0) ||
     (uVar5 = (*(code *)PTR_SSL_state_0057e370)(param_1), (uVar5 & 0x4000) != 0)) {
    (*(code *)PTR_SSL_clear_0057d8a4)(param_1);
  }
  do {
    iVar19 = param_1[0xd];
    if (iVar19 < 0x1212) {
      if (iVar19 < 0x1210) {
        if ((iVar19 != 0x1000) && (iVar19 != 0x1003)) goto LAB_0041679c;
        goto LAB_00415840;
      }
      param_1[0xc] = 0;
      bVar22 = (*(byte *)(param_1 + 0x40) ^ 1) & 1;
      if (bVar22 != 0) {
        uVar7 = (*(code *)PTR_SSL_get_ciphers_0057d21c)(param_1);
        for (iVar17 = 0; iVar6 = (*(code *)PTR_sk_num_0057da00)(uVar7), iVar17 < iVar6;
            iVar17 = iVar17 + 1) {
          iVar6 = (*(code *)PTR_sk_value_0057e4a0)(uVar7,iVar17);
          if (*(int *)(iVar6 + 0x1c) == 1) goto LAB_004159cc;
        }
        bVar22 = 0;
      }
LAB_004159cc:
      uVar5 = param_1[0x40];
      if ((uVar5 & 0x4000000) == 0) {
        iVar6 = 0x301;
LAB_00415a0c:
        if (param_1[0x48] != 0) {
          bVar22 = 0;
        }
        if (param_1[0x4a] != -1) {
          bVar22 = 0;
        }
      }
      else {
        if ((uVar5 & 0x2000000) == 0) {
          iVar6 = 0x300;
          goto LAB_00415a0c;
        }
        iVar6 = 2;
        if ((uVar5 & 0x1000000) != 0) {
          iVar6 = 0;
          goto LAB_00415a0c;
        }
      }
      pbVar18 = *(byte **)(param_1[0xf] + 4);
      if (param_1[0xd] == 0x1210) {
        local_50 = (byte *)param_1[0x16];
        uVar7 = (*(code *)PTR_time_0057dd4c)(0);
        local_50[0xc0] = (byte)((uint)uVar7 >> 0x18);
        local_50[0xc1] = (byte)((uint)uVar7 >> 0x10);
        local_50[0xc2] = (byte)((uint)uVar7 >> 8);
        local_50[0xc3] = (byte)uVar7;
        iVar17 = (*(code *)PTR_RAND_pseudo_bytes_0057d778)(local_50 + 0xc4,0x1c);
        if (iVar17 < 1) {
LAB_0041682c:
          iVar17 = -1;
          goto LAB_00416830;
        }
        if (iVar6 == 0x301) {
          iVar17 = 1;
          bVar10 = 3;
        }
        else {
          iVar17 = 0;
          if (iVar6 == 0x300) {
            bVar10 = 3;
          }
          else {
            iVar17 = 2;
            bVar10 = 0;
            if (iVar6 != 2) {
              (*(code *)PTR_ERR_put_error_0057d15c)(0x14,0x74,0xbf,"s23_clnt.c",0x154);
              iVar17 = -1;
              goto LAB_00416830;
            }
          }
        }
        param_1[0x44] = iVar6;
        local_50 = pbVar18;
        if (bVar22 == 0) {
          local_38 = pbVar18 + 9;
          local_3c = (uint)bVar10;
          *local_38 = bVar10;
          pbVar18[10] = (byte)iVar17;
          iVar8 = param_1[0x16];
          uVar16 = *(undefined4 *)(iVar8 + 0xc4);
          uVar15 = *(undefined4 *)(iVar8 + 200);
          uVar14 = *(undefined4 *)(iVar8 + 0xcc);
          uVar13 = *(undefined4 *)(iVar8 + 0xd0);
          uVar12 = *(undefined4 *)(iVar8 + 0xd4);
          uVar11 = *(undefined4 *)(iVar8 + 0xd8);
          uVar7 = *(undefined4 *)(iVar8 + 0xdc);
          *(undefined4 *)(pbVar18 + 0xb) = *(undefined4 *)(iVar8 + 0xc0);
          *(undefined4 *)(pbVar18 + 0xf) = uVar16;
          *(undefined4 *)(pbVar18 + 0x13) = uVar15;
          *(undefined4 *)(pbVar18 + 0x17) = uVar14;
          *(undefined4 *)(pbVar18 + 0x1b) = uVar13;
          *(undefined4 *)(pbVar18 + 0x1f) = uVar12;
          *(undefined4 *)(pbVar18 + 0x23) = uVar11;
          *(undefined4 *)(pbVar18 + 0x27) = uVar7;
          pbVar18[0x2b] = 0;
          local_40 = iVar17;
          uVar7 = (*(code *)PTR_SSL_get_ciphers_0057d21c)(param_1);
          local_4c = local_50 + 0x2e;
          iVar17 = (*(code *)PTR_ssl_cipher_list_to_bytes_0057dc60)
                             (param_1,uVar7,local_4c,PTR_ssl3_put_cipher_by_char_0057dc3c);
          if (iVar17 == 0) {
            (*(code *)PTR_ERR_put_error_0057d15c)(0x14,0x74,0xb5,"s23_clnt.c",0x1b1);
            iVar17 = -1;
            goto LAB_00416830;
          }
          pbVar18[0x2c] = (byte)((uint)iVar17 >> 8);
          pbVar18[0x2d] = (byte)iVar17;
          local_48 = local_4c + iVar17;
          if (((param_1[0x40] & 0x20000U) == 0) && (*(int *)(param_1[0x39] + 0x98) != 0)) {
            pbVar9 = (byte *)(*(code *)PTR_sk_num_0057da00)();
            pbVar18 = local_48;
            *local_48 = (char)pbVar9 + 1;
            local_4c = local_48 + 1;
            local_44 = pbVar9;
            if (0 < (int)pbVar9) {
              iVar17 = 0;
              local_34 = iVar19;
              local_30 = pcVar21;
              do {
                puVar4 = (undefined4 *)
                         (*(code *)PTR_sk_value_0057e4a0)
                                   (*(undefined4 *)(param_1[0x39] + 0x98),iVar17);
                pbVar18[iVar17 + 1] = (byte)*puVar4;
                iVar17 = iVar17 + 1;
              } while (iVar17 < (int)pbVar9);
              local_4c = local_4c + (int)local_44;
              iVar19 = local_34;
              pcVar21 = local_30;
            }
          }
          else {
            *local_48 = 1;
            local_4c = local_48 + 1;
          }
          *local_4c = 0;
          iVar17 = (*(code *)PTR_ssl_prepare_clienthello_tlsext_0057e694)(param_1);
          if (iVar17 < 1) {
            (*(code *)PTR_ERR_put_error_0057d15c)(0x14,0x74,0xe2,"s23_clnt.c",0x1cb);
            iVar17 = -1;
            goto LAB_00416830;
          }
          iVar17 = (*(code *)PTR_ssl_add_clienthello_tlsext_0057d2c0)
                             (param_1,local_4c + 1,local_50 + 0x4000);
          if (iVar17 == 0) {
            (*(code *)PTR_ERR_put_error_0057d15c)(0x14,0x74,0x44,"s23_clnt.c",0x1d3);
            iVar17 = -1;
            goto LAB_00416830;
          }
          iVar8 = iVar17 - (int)local_38;
          local_50[5] = 1;
          local_50[6] = (byte)((uint)iVar8 >> 0x10);
          local_50[7] = (byte)((uint)iVar8 >> 8);
          local_50[8] = (byte)iVar8;
          uVar5 = iVar8 + 4;
          if (0x4000 < uVar5) {
            (*(code *)PTR_ERR_put_error_0057d15c)(0x14,0x74,0x44,"s23_clnt.c",0x1e2);
            iVar17 = -1;
            goto LAB_00416830;
          }
          *local_50 = 0x16;
          local_50[1] = (byte)local_3c;
          local_50[2] = (byte)local_40;
          local_50[3] = (byte)(uVar5 >> 8);
          local_50[4] = (byte)uVar5;
          param_1[0x11] = iVar17 - (int)local_50;
          param_1[0x12] = 0;
          (*(code *)PTR_ssl3_finish_mac_0057d7e4)
                    (param_1,local_50 + 5,(iVar17 - (int)local_50) + -5);
        }
        else {
          local_48 = pbVar18 + 2;
          local_44 = pbVar18 + 0xb;
          *local_48 = 1;
          pbVar18[3] = bVar10;
          local_4c = pbVar18 + 4;
          *local_4c = (byte)iVar17;
          uVar7 = (*(code *)PTR_SSL_get_ciphers_0057d21c)(param_1);
          iVar17 = (*(code *)PTR_ssl_cipher_list_to_bytes_0057dc60)(param_1,uVar7,local_44,0);
          if (iVar17 == 0) {
            (*(code *)PTR_ERR_put_error_0057d15c)(0x14,0x74,0xb5,"s23_clnt.c",0x16a);
            iVar17 = -1;
            goto LAB_00416830;
          }
          local_4c[1] = (byte)((uint)iVar17 >> 8);
          local_4c[2] = (byte)iVar17;
          local_4c[3] = 0;
          local_4c[4] = 0;
          pbVar18 = (byte *)0x20;
          if ((param_1[0x40] & 2U) != 0) {
            pbVar18 = (byte *)0x10;
          }
          local_4c[5] = 0;
          local_4c[6] = (byte)pbVar18;
          iVar8 = param_1[0x16];
          *(undefined4 *)(iVar8 + 0xc0) = 0;
          *(undefined4 *)(iVar8 + 0xc4) = 0;
          *(undefined4 *)(iVar8 + 200) = 0;
          *(undefined4 *)(iVar8 + 0xcc) = 0;
          *(undefined4 *)(iVar8 + 0xd0) = 0;
          *(undefined4 *)(iVar8 + 0xd4) = 0;
          *(undefined4 *)(iVar8 + 0xd8) = 0;
          *(undefined4 *)(iVar8 + 0xdc) = 0;
          local_40 = -(int)pbVar18 + 0x20;
          local_4c = pbVar18;
          iVar8 = (*(code *)PTR_RAND_pseudo_bytes_0057d778)
                            (param_1[0x16] + -(int)pbVar18 + 0xe0,pbVar18);
          if (iVar8 < 1) goto LAB_0041682c;
          pbVar18 = local_44 + iVar17;
          (*(code *)PTR_memcpy_0057e698)(pbVar18,param_1[0x16] + 0xc0 + local_40,local_4c);
          iVar17 = (int)(pbVar18 + (int)local_4c) - (int)local_48;
          *local_50 = (byte)((uint)iVar17 >> 8) | 0x80;
          local_50[1] = (byte)iVar17;
          param_1[0x11] = iVar17 + 2;
          param_1[0x12] = 0;
          (*(code *)PTR_ssl3_finish_mac_0057d7e4)(param_1,local_48);
        }
        param_1[0xd] = 0x1211;
        param_1[0x12] = 0;
      }
      iVar17 = (*(code *)PTR_ssl23_write_bytes_0057d354)(param_1);
      if ((1 < iVar17) && (pcVar23 = (code *)param_1[0x19], pcVar23 != (code *)0x0)) {
        if (bVar22 == 0) {
          (*pcVar23)(1,iVar6,0x16,*(int *)(param_1[0xf] + 4) + 5,iVar17 + -5,param_1,param_1[0x1a]);
        }
        else {
          (*pcVar23)(1,2,0,*(int *)(param_1[0xf] + 4) + 2,iVar17 + -2,param_1,param_1[0x1a]);
        }
      }
      if (iVar17 < 1) goto LAB_00416830;
      param_1[0xd] = 0x1220;
      param_1[0x11] = 0;
    }
    else {
      if (iVar19 != 0x4000) {
        if (iVar19 < 0x4001) {
          if (1 < iVar19 - 0x1220U) goto LAB_0041679c;
          iVar17 = (*(code *)PTR_ssl23_read_bytes_0057d074)(param_1,7);
          puVar3 = PTR_TLSv1_client_method_0057e79c;
          puVar2 = PTR_SSLv3_client_method_0057dfc8;
          if (iVar17 == 7) {
            pcVar20 = (char *)param_1[0x13];
            local_5c = *(undefined4 *)pcVar20;
            local_58 = pcVar20[4];
            local_57 = pcVar20[5];
            local_56 = pcVar20[6];
            cVar1 = *pcVar20;
            if ((((cVar1 < '\0') && (pcVar20[2] == '\x04')) && (pcVar20[5] == '\0')) &&
               (pcVar20[6] == '\x02')) {
              if ((param_1[0x40] & 0x1000000U) != 0) {
                (*(code *)PTR_ERR_put_error_0057d15c)(0x14,0x77,0x102,"s23_clnt.c",0x228);
                iVar17 = -1;
                goto LAB_00416830;
              }
              if (param_1[0x15] == 0) {
                iVar19 = (*(code *)PTR_ssl2_new_0057de8c)(param_1);
                iVar17 = -1;
                if (iVar19 == 0) goto LAB_00416830;
              }
              else {
                (*(code *)PTR_ssl2_clear_0057e600)(param_1);
              }
              iVar19 = 0x20;
              if ((param_1[0x40] & 2U) != 0) {
                iVar19 = 0x10;
              }
              *(int *)(param_1[0x15] + 100) = iVar19;
              (*(code *)PTR_memcpy_0057e698)(param_1[0x15] + 0x68,(param_1[0x16] - iVar19) + 0xe0);
              if (param_1[0x16] != 0) {
                (*(code *)PTR_ssl3_free_0057e0b4)(param_1);
              }
              iVar19 = (*(code *)PTR_BUF_MEM_grow_clean_0057d968)(param_1[0xf],0x3fff);
              if (iVar19 != 0) {
                param_1[0xd] = 0x1020;
                if (param_1[0x44] != 2) {
                  *(undefined4 *)(param_1[0x15] + 0xc) = 1;
                }
                param_1[0xe] = 0xf0;
                param_1[0x14] = 7;
                puVar4 = *(undefined4 **)(param_1[0x15] + 0x30);
                param_1[0x13] = (int)puVar4;
                *puVar4 = local_5c;
                *(char *)(puVar4 + 1) = local_58;
                *(char *)((int)puVar4 + 5) = local_57;
                *(char *)((int)puVar4 + 6) = local_56;
                *(undefined4 *)(param_1[0x15] + 0x28) = 7;
                *(undefined4 *)(param_1[0x15] + 0x2c) = 0;
                puVar2 = PTR_SSLv2_client_method_0057e328;
                *(undefined4 *)(param_1[0x15] + 0xd4) = 1;
                iVar19 = (*(code *)puVar2)();
                param_1[2] = iVar19;
                param_1[8] = *(int *)(iVar19 + 0x14);
LAB_00416758:
                param_1[0x11] = 0;
                iVar19 = (*(code *)PTR_ssl_get_new_session_0057e280)(param_1,0);
                if (iVar19 != 0) {
                  iVar17 = (*(code *)PTR_SSL_connect_0057e914)(param_1);
                  goto LAB_00416794;
                }
                goto LAB_0041682c;
              }
              (*(code *)PTR_ERR_put_error_0057d15c)(0x14,0x77,7,"s23_clnt.c",0x247);
              iVar17 = -1;
              goto LAB_00416830;
            }
            if ((pcVar20[1] == '\x03') && (bVar22 = pcVar20[2], bVar22 < 2)) {
              if (cVar1 == '\x16') {
                cVar1 = pcVar20[5];
              }
              else {
                if ((cVar1 != '\x15') || (pcVar20[3] != '\0')) goto LAB_0041672c;
                cVar1 = pcVar20[4];
              }
              if (cVar1 == '\x02') {
                if ((bVar22 == 0) && ((param_1[0x40] & 0x2000000U) == 0)) {
                  *param_1 = 0x300;
                  iVar19 = (*(code *)puVar2)();
                  param_1[2] = iVar19;
                }
                else {
                  if ((bVar22 != 1) || ((param_1[0x40] & 0x4000000U) != 0)) {
                    (*(code *)PTR_ERR_put_error_0057d15c)(0x14,0x77,0x102,"s23_clnt.c",0x273);
                    iVar17 = -1;
                    goto LAB_00416830;
                  }
                  *param_1 = 0x301;
                  iVar19 = (*(code *)puVar3)();
                  param_1[2] = iVar19;
                }
                if (0x301 < *param_1) {
                  (*(code *)PTR_OpenSSLDie_0057e1f4)
                            ("s23_clnt.c",0x278,"s->version <= TLS_MAX_VERSION");
                }
                if ((*pcVar20 != '\x15') || (cVar1 = pcVar20[5], cVar1 == '\x01')) {
                  iVar19 = (*(code *)PTR_ssl_init_wbio_buffer_0057d95c)(param_1,1);
                  if (iVar19 != 0) {
                    param_1[0xd] = 0x1120;
                    param_1[0xe] = 0xf0;
                    param_1[0x14] = 7;
                    if ((*(int *)(param_1[0x16] + 0xec) != 0) ||
                       (iVar19 = (*(code *)PTR_ssl3_setup_read_buffer_0057d160)(param_1),
                       iVar19 != 0)) {
                      puVar4 = *(undefined4 **)(param_1[0x16] + 0xec);
                      param_1[0x13] = (int)puVar4;
                      *puVar4 = local_5c;
                      *(char *)(puVar4 + 1) = local_58;
                      *(char *)((int)puVar4 + 5) = local_57;
                      *(char *)((int)puVar4 + 6) = local_56;
                      *(undefined4 *)(param_1[0x16] + 0xf8) = 7;
                      *(undefined4 *)(param_1[0x16] + 0xf4) = 0;
                      param_1[8] = *(int *)(param_1[2] + 0x14);
                      goto LAB_00416758;
                    }
                  }
                  goto LAB_0041682c;
                }
                pcVar23 = (code *)param_1[0x34];
                if ((pcVar23 != (code *)0x0) ||
                   (pcVar23 = *(code **)(param_1[0x39] + 0x9c), pcVar23 != (code *)0x0)) {
                  (*pcVar23)(param_1,0x4004,CONCAT11(cVar1,pcVar20[6]));
                }
                if ((code *)param_1[0x19] != (code *)0x0) {
                  (*(code *)param_1[0x19])(0,*param_1,0x15,pcVar20 + 5,2,param_1,param_1[0x1a]);
                }
                param_1[6] = 1;
                (*(code *)PTR_ERR_put_error_0057d15c)
                          (0x14,0x77,(byte)pcVar20[6] + 1000,"s23_clnt.c",0x290);
                iVar17 = -1;
                goto LAB_00416830;
              }
            }
LAB_0041672c:
            (*(code *)PTR_ERR_put_error_0057d15c)(0x14,0x77,0xfc,"s23_clnt.c",0x2a9);
            iVar17 = -1;
            goto LAB_00416830;
          }
LAB_00416794:
          if (-1 < iVar17) {
            pcVar21 = (code *)0x0;
          }
LAB_00416830:
          param_1[7] = param_1[7] + -1;
LAB_00416840:
          if (pcVar21 != (code *)0x0) {
            (*pcVar21)(param_1,0x1002,iVar17);
          }
          return iVar17;
        }
        if (iVar19 != 0x5000) {
LAB_0041679c:
          (*(code *)PTR_ERR_put_error_0057d15c)(0x14,0x75,0xff,"s23_clnt.c",0xe7);
          iVar17 = -1;
          goto LAB_00416830;
        }
      }
LAB_00415840:
      if (param_1[0x30] != 0) {
        (*(code *)PTR_ERR_put_error_0057d15c)(0x14,0x75,0xdd,"s23_clnt.c",0xae);
        iVar17 = -1;
        goto LAB_00416830;
      }
      param_1[9] = 0;
      if (pcVar21 != (code *)0x0) {
        (*pcVar21)(param_1,0x10,1);
      }
      param_1[1] = 0x1000;
      if (param_1[0xf] == 0) {
        iVar17 = (*(code *)PTR_BUF_MEM_new_0057e1c0)();
        if (iVar17 == 0) goto LAB_0041682c;
        iVar6 = (*(code *)PTR_BUF_MEM_grow_0057dfc0)(iVar17,0x4000);
        if (iVar6 == 0) {
          param_1[7] = param_1[7] + -1;
          (*(code *)PTR_BUF_MEM_free_0057d774)(iVar17);
          iVar17 = -1;
          goto LAB_00416840;
        }
        param_1[0xf] = iVar17;
      }
      iVar6 = (*(code *)PTR_ssl3_setup_buffers_0057d9d4)(param_1);
      iVar17 = -1;
      if (iVar6 == 0) goto LAB_00416830;
      (*(code *)PTR_ssl3_init_finished_mac_0057e238)(param_1);
      param_1[0xd] = 0x1210;
      *(int *)(param_1[0x39] + 0x34) = *(int *)(param_1[0x39] + 0x34) + 1;
      param_1[0x11] = 0;
    }
    if (param_1[0x3a] != 0) {
      (*(code *)PTR_BIO_ctrl_0057e798)(param_1[4],0xb,0,0);
    }
    if ((pcVar21 != (code *)0x0) && (iVar17 = param_1[0xd], iVar17 != iVar19)) {
      param_1[0xd] = iVar19;
      (*pcVar21)(param_1,0x1001,1);
      param_1[0xd] = iVar17;
    }
  } while( true );
}


/* SHA256_Final @ 00456ed4 */

int SHA256_Final(uchar *md,SHA256_CTX *c)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  SHA256_CTX *pSVar5;
  uint *puVar6;
  
  puVar6 = c->data;
  uVar1 = c->num;
  *(undefined1 *)((int)puVar6 + uVar1) = 0x80;
  uVar1 = uVar1 + 1;
  if (0x38 < uVar1) {
    (*(code *)PTR_memset_0057d8ac)((int)puVar6 + uVar1,0,0x40 - uVar1);
    FUN_00454ad0(c,puVar6,1);
    uVar1 = 0;
  }
  (*(code *)PTR_memset_0057d8ac)((int)puVar6 + uVar1,0,0x38 - uVar1);
  *(undefined1 *)(c->data + 0xe) = *(undefined1 *)&c->Nh;
  *(char *)((int)c->data + 0x39) = (char)*(undefined2 *)&c->Nh;
  *(char *)((int)c->data + 0x3a) = (char)(c->Nh >> 8);
  *(char *)((int)c->data + 0x3b) = (char)c->Nh;
  *(undefined1 *)(c->data + 0xf) = *(undefined1 *)&c->Nl;
  *(char *)((int)c->data + 0x3d) = (char)*(undefined2 *)&c->Nl;
  *(char *)((int)c->data + 0x3e) = (char)(c->Nl >> 8);
  *(char *)((int)c->data + 0x3f) = (char)c->Nl;
  FUN_00454ad0(c,puVar6,1);
  c->num = 0;
  (*(code *)PTR_memset_0057d8ac)(puVar6,0,0x40);
  uVar1 = c->md_len;
  if (uVar1 == 0x1c) {
    iVar4 = 0;
    do {
      uVar2 = *(undefined4 *)((int)c->h + iVar4);
      *md = (uchar)((uint)uVar2 >> 0x18);
      md[1] = (uchar)((uint)uVar2 >> 0x10);
      md[2] = (uchar)((uint)uVar2 >> 8);
      md[3] = (uchar)uVar2;
      iVar4 = iVar4 + 4;
      md = md + 4;
    } while (iVar4 != 0x1c);
    iVar4 = 1;
  }
  else {
    iVar4 = 0;
    if (uVar1 == 0x20) {
      do {
        uVar2 = *(undefined4 *)((int)c->h + iVar4);
        *md = (uchar)((uint)uVar2 >> 0x18);
        md[1] = (uchar)((uint)uVar2 >> 0x10);
        md[2] = (uchar)((uint)uVar2 >> 8);
        md[3] = (uchar)uVar2;
        iVar4 = iVar4 + 4;
        md = md + 4;
      } while (iVar4 != 0x20);
      iVar4 = 1;
    }
    else if (uVar1 < 0x21) {
      iVar4 = 1;
      if (3 < uVar1) {
        uVar1 = 0;
        pSVar5 = c;
        do {
          uVar3 = pSVar5->h[0];
          *md = (uchar)(uVar3 >> 0x18);
          md[1] = (uchar)(uVar3 >> 0x10);
          md[2] = (uchar)(uVar3 >> 8);
          md[3] = (uchar)uVar3;
          md = md + 4;
          uVar1 = uVar1 + 1;
          pSVar5 = (SHA256_CTX *)(pSVar5->h + 1);
        } while (uVar1 < c->md_len >> 2);
        iVar4 = 1;
      }
    }
    else {
      iVar4 = 0;
    }
  }
  return iVar4;
}


/* SHA256_Update @ 004572ac */

int SHA256_Update(SHA256_CTX *c,void *data,size_t len)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  
  if (len != 0) {
    uVar1 = len * 8 + c->Nl;
    if (uVar1 < c->Nl) {
      c->Nh = c->Nh + 1;
    }
    c->Nh = c->Nh + (len >> 0x1d);
    c->Nl = uVar1;
    uVar1 = c->num;
    if (uVar1 != 0) {
      puVar2 = c->data;
      if ((len < 0x40) && (len + uVar1 < 0x40)) {
        (*(code *)PTR_memcpy_0057e698)((int)puVar2 + uVar1,data,len);
        c->num = c->num + len;
        return 1;
      }
      iVar3 = 0x40 - uVar1;
      (*(code *)PTR_memcpy_0057e698)((int)puVar2 + uVar1,data,iVar3);
      FUN_00454ad0(c,puVar2,1);
      data = (void *)((int)data + iVar3);
      len = len - iVar3;
      c->num = 0;
      (*(code *)PTR_memset_0057d8ac)(puVar2,0,0x40);
    }
    uVar1 = len >> 6;
    if (uVar1 != 0) {
      FUN_00454ad0(c,data,uVar1);
      data = (void *)((int)data + uVar1 * 0x40);
      len = len + uVar1 * -0x40;
    }
    if (len != 0) {
      c->num = len;
      (*(code *)PTR_memcpy_0057e698)(c->data,data,len);
    }
  }
  return 1;
}


/* RSA_public_decrypt @ 0046c470 */

int RSA_public_decrypt(int length,byte *from,byte *to,void *rsa,int padding)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(int *)((int)rsa + 8) + 8))();
  return iVar1;
}


/* RSA_verify @ 0046da84 */

int RSA_verify(int type,uchar *m,uint m_length,uchar *sigbuf,uint siglen,RSA *rsa)

{
  int iVar1;
  _func_1769 *p_Var2;
  
  if (((rsa->flags & 0x40U) == 0) || (p_Var2 = rsa->meth->rsa_verify, p_Var2 == (_func_1769 *)0x0))
  {
    iVar1 = int_rsa_verify();
  }
  else {
    iVar1 = (*p_Var2)(type,m,m_length,sigbuf,siglen,rsa);
  }
  return iVar1;
}


/* PEM_read_bio_RSA_PUBKEY @ 00497238 */

RSA * PEM_read_bio_RSA_PUBKEY(BIO *bp,RSA **x,undefined1 *cb,void *u)

{
  RSA *pRVar1;
  
  pRVar1 = (RSA *)(*(code *)PTR_PEM_ASN1_read_bio_0057d34c)
                            (PTR_d2i_RSA_PUBKEY_0057e748,"PUBLIC KEY",bp,x,cb,u);
  return pRVar1;
}


