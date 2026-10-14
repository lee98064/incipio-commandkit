/* FUN_00411550 @ 00411550 */

/* WARNING: Removing unreachable block (ram,0x00411908) */
/* WARNING: Removing unreachable block (ram,0x00411a40) */

undefined4 FUN_00411550(undefined4 param_1,undefined4 param_2)

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
  
  (*(code *)PTR_memset_0057d9dc)(&local_4bc,0,0x49c);
  (*(code *)PTR_memset_0057d9dc)(local_cbc,0,0x400);
  FUN_00411420(param_1,&local_4bc);
  (*(code *)PTR_printf_0057d378)("SSL_flag:%d\n",local_2c);
  (*(code *)PTR_printf_0057d378)("webhost:%s\n",auStack_4b4);
  (*(code *)PTR_printf_0057d378)("hostfile:%s\n",auStack_434);
  (*(code *)PTR_printf_0057d378)("portnumber:%d\n\n",local_4b8);
  local_4bc = (*(code *)PTR_socket_0057d794)(2,2,0);
  if (local_4bc == -1) {
    uVar6 = *(undefined4 *)PTR_stderr_0057de44;
    puVar2 = (undefined4 *)(*(code *)PTR___errno_location_0057e8d8)();
    uVar3 = (*(code *)PTR_strerror_0057d3ac)(*puVar2);
    (*(code *)PTR_fprintf_0057d8e4)(uVar6,&DAT_00532684,uVar3);
    uVar3 = 0x194;
    if (*(int *)PTR_g_progress_flag_0057e4dc != 0) {
      (*(code *)PTR_update_result_0057d6a8)(0x194);
      uVar3 = 0x194;
    }
  }
  else {
    local_ccc = 2;
    local_cc4 = 0;
    local_cc0 = 0;
    local_cca = 0;
    local_cc8 = *(undefined4 *)**(undefined4 **)(in_zero + 0x10);
    iVar4 = (*(code *)PTR_connect_0057e7b4)(local_4bc,&local_ccc,0x10);
    puVar1 = PTR_stderr_0057de44;
    if (iVar4 == -1) {
      uVar6 = *(undefined4 *)PTR_stderr_0057de44;
      puVar2 = (undefined4 *)(*(code *)PTR___errno_location_0057e8d8)();
      uVar3 = (*(code *)PTR_strerror_0057d3ac)(*puVar2);
      (*(code *)PTR_fprintf_0057d8e4)(uVar6,&DAT_00532698,uVar3);
      if (*(int *)PTR_g_progress_flag_0057e4dc == 0) {
        return 0x195;
      }
      (*(code *)PTR_update_result_0057d6a8)(0x195);
      return 0x195;
    }
    if (local_2c == 1) {
      (*(code *)PTR_SSL_library_init_0057da70)();
      (*(code *)PTR_fputs_0057db10)(&DAT_005326ac,*(undefined4 *)puVar1);
      (*(code *)PTR_SSL_load_error_strings_0057e564)();
      uVar3 = (*(code *)PTR_SSLv23_client_method_0057dbb8)();
      local_24 = (*(code *)PTR_SSL_CTX_new_0057e034)(uVar3);
      if ((local_24 == 0) || (local_28 = (*(code *)PTR_SSL_new_0057d92c)(local_24), local_28 == 0))
      {
        (*(code *)PTR_ERR_print_errors_fp_0057e974)(*(undefined4 *)puVar1);
        if (*(int *)PTR_g_progress_flag_0057e4dc != 0) {
          (*(code *)PTR_update_result_0057d6a8)(0x196);
          return 0x196;
        }
        return 0x196;
      }
      iVar4 = (*(code *)PTR_SSL_set_fd_0057df50)(local_28,local_4bc);
      if (iVar4 == 0) {
        uVar3 = *(undefined4 *)puVar1;
        goto LAB_00411d50;
      }
      (*(code *)PTR_RAND_poll_0057e3ec)();
      while (iVar4 = (*(code *)PTR_RAND_status_0057d504)(), iVar4 == 0) {
        iVar4 = (*(code *)PTR_rand_0057d748)();
        local_cd0[0] = (undefined2)(iVar4 % 0x10000);
        (*(code *)PTR_RAND_seed_0057e038)(local_cd0,2);
      }
      iVar4 = (*(code *)PTR_SSL_connect_0057ea48)(local_28);
      if (iVar4 != 1) {
        (*(code *)PTR_ERR_print_errors_fp_0057e974)(*(undefined4 *)PTR_stderr_0057de44);
        if (*(int *)PTR_g_progress_flag_0057e4dc == 0) {
          return 0x197;
        }
        (*(code *)PTR_update_result_0057d6a8)(0x197);
        return 0x197;
      }
    }
    (*(code *)PTR_sprintf_0057d810)
              (auStack_8bc,
               "GET /%s HTTP/1.1\r\nAccept: */*\r\nAccept-Language: zh-cn\r\nUser-Agent: Mozilla/4.0 (compatible; MSIE 5.01; Windows NT 5.0)\r\nHost: %s:%d\r\nConnection: Close\r\n\r\n"
               ,auStack_434,auStack_4b4,local_4b8);
    (*(code *)PTR_printf_0057d378)("%s",auStack_8bc);
    iVar8 = 0;
    iVar4 = (*(code *)PTR_strlen_0057e310)(auStack_8bc);
    while (iVar8 < iVar4) {
      iVar5 = (*(code *)PTR_SSL_write_0057d8e8)(local_28,auStack_8bc + iVar8,iVar4 - iVar8);
      iVar8 = iVar8 + iVar5;
      if (iVar5 == -1) {
        (*(code *)PTR_ERR_print_errors_fp_0057e974)(*(undefined4 *)PTR_stderr_0057de44);
        if (*(int *)PTR_g_progress_flag_0057e4dc == 0) {
          return 0x198;
        }
        (*(code *)PTR_update_result_0057d6a8)(0x198);
        return 0x198;
      }
      (*(code *)PTR_printf_0057d378)("%d bytes send OK!\n",iVar8);
    }
    iVar4 = (*(code *)PTR_fopen_0057df5c)(param_2,"a");
    (*(code *)PTR_printf_0057d378)("logfile=%s\n",param_2);
    if (iVar4 == 0) {
      puVar2 = (undefined4 *)(*(code *)PTR___errno_location_0057e8d8)();
      uVar3 = (*(code *)PTR_strerror_0057d3ac)(*puVar2);
      (*(code *)PTR_printf_0057d378)("Create file error! %s\n",uVar3);
      uVar3 = 0;
    }
    else {
      (*(code *)PTR_puts_0057d338)("\nThe following is the response header:");
      if (local_2c == 1) {
        uVar7 = 0;
LAB_00411c10:
        iVar8 = (*(code *)PTR_SSL_read_0057df90)(local_28,local_cbc,1);
        if (iVar8 == 1) {
          if (3 < (int)uVar7) goto LAB_00411bd0;
          iVar8 = (int)local_cbc[0];
          pcVar9 = (code *)PTR_putchar_0057e64c;
          if ((iVar8 == 0xd) || (iVar8 == 10)) {
            uVar7 = uVar7 + 1;
          }
          else {
            uVar7 = 0;
          }
          goto LAB_00411c00;
        }
        (*(code *)PTR_fclose_0057dfec)(iVar4);
        iVar4 = (*(code *)PTR_SSL_shutdown_0057d650)(local_28);
        (*(code *)PTR_printf_0057d378)("\nSSL shutdown!(%d)\n",iVar4);
        if (iVar4 != 1) {
          uVar3 = *(undefined4 *)PTR_stderr_0057de44;
LAB_00411d50:
          (*(code *)PTR_ERR_print_errors_fp_0057e974)(uVar3);
          uVar3 = (*(code *)PTR_exit_0057d698)(1);
          return uVar3;
        }
      }
      else {
        uVar7 = 0;
LAB_00411d04:
        iVar8 = (*(code *)PTR_read_0057e204)(local_4bc,local_cbc,1);
        if (iVar8 == 1) {
          if (3 < (int)uVar7) goto LAB_00411cc4;
          iVar8 = (int)local_cbc[0];
          pcVar9 = (code *)PTR_putchar_0057e64c;
          if ((iVar8 == 0xd) || (iVar8 == 10)) {
            uVar7 = uVar7 + 1;
          }
          else {
            uVar7 = 0;
          }
          goto LAB_00411cf4;
        }
        (*(code *)PTR_fclose_0057dfec)(iVar4);
      }
      (*(code *)PTR_close_0057dd2c)(local_4bc);
      if (local_2c == 1) {
        (*(code *)PTR_SSL_free_0057e2b4)(local_28);
        (*(code *)PTR_SSL_CTX_free_0057d27c)(local_24);
        (*(code *)PTR_puts_0057d338)("\nSSL Free!");
      }
      (*(code *)PTR_ERR_free_strings_0057e080)();
      uVar3 = 1;
      if (*(int *)PTR_g_progress_flag_0057e4dc != 0) {
        (*(code *)PTR_update_result_0057d6a8)(1);
        uVar3 = 1;
      }
    }
  }
  return uVar3;
LAB_00411bd0:
  uVar7 = uVar7 + 1;
  (*(code *)PTR_fwrite_0057e840)(local_cbc,1,1,iVar4);
  iVar8 = iVar4;
  pcVar9 = (code *)PTR_fflush_0057d9f4;
  if ((uVar7 & 0x3ff) == 0) {
LAB_00411c00:
    (*pcVar9)(iVar8);
  }
  goto LAB_00411c10;
LAB_00411cc4:
  uVar7 = uVar7 + 1;
  (*(code *)PTR_fwrite_0057e840)(local_cbc,1,1,iVar4);
  iVar8 = iVar4;
  pcVar9 = (code *)PTR_fflush_0057d9f4;
  if ((uVar7 & 0x3ff) == 0) {
LAB_00411cf4:
    (*pcVar9)(iVar8);
  }
  goto LAB_00411d04;
}

