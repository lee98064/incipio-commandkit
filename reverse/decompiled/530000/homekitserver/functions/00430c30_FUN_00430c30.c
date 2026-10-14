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

