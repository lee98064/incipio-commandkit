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

