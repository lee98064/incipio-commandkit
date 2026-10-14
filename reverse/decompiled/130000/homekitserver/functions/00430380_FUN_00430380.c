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

