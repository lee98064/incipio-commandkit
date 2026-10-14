/* FUN_00406f70 @ 00406f70 */

char * FUN_00406f70(char *param_1,int param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined4 *puVar3;
  char *pcVar4;
  int *piVar5;
  undefined4 uVar6;
  char *pcVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  code *pcVar13;
  undefined1 auStack_2030 [4096];
  undefined1 auStack_1030 [4096];
  undefined4 local_30;
  
  puVar1 = PTR_directory_index_0046a818;
  iVar11 = *(int *)PTR_directory_index_0046a818;
  if (iVar11 != 0) {
    local_30 = *(undefined4 *)(param_1 + 0x1c);
    iVar2 = (*(code *)PTR_strlen_0046a714)(local_30);
    iVar11 = (*(code *)PTR_strlen_0046a714)(iVar11);
    if (0x1000 < iVar2 + iVar11 + 1U) {
      puVar3 = (undefined4 *)(*(code *)PTR___errno_location_0046a764)();
      *puVar3 = 0xc;
      return (char *)0xffffffff;
    }
    (*(code *)PTR_memcpy_0046ab5c)(auStack_2030,local_30,iVar2);
    (*(code *)PTR_memcpy_0046ab5c)(auStack_2030 + iVar2,*(undefined4 *)puVar1,iVar11 + 1);
    pcVar4 = (char *)(*(code *)PTR_open_0046a710)(auStack_2030,0);
    if (pcVar4 != (char *)0xffffffff) {
      (*(code *)PTR_memcpy_0046ab5c)(param_1 + 0x8d4,*(undefined4 *)puVar1,iVar11 + 1);
      pcVar7 = pcVar4;
      pcVar13 = (code *)PTR_fstat_0046a9f0;
      goto LAB_00407298;
    }
    piVar5 = (int *)(*(code *)PTR___errno_location_0046a764)(param_1 + 0x8d4);
    pcVar13 = (code *)PTR_send_r_forbidden_0046a838;
    if ((*piVar5 == 0xd) || (pcVar13 = (code *)PTR_send_r_not_found_0046aa1c, *piVar5 != 2))
    goto LAB_004075fc;
  }
  if (*(int *)PTR_dirmaker_0046a874 != 0) {
    param_1[0x10] = '\0';
    param_1[0x11] = '\0';
    param_1[0x12] = '\0';
    param_1[0x13] = -0x38;
    param_1[4] = '\0';
    param_1[5] = '\0';
    param_1[6] = '\0';
    param_1[7] = '\x02';
    if (*(int *)(param_1 + 8) != 1) {
      uVar6 = (*(code *)PTR_http_ver_string_0046a9f4)();
      (*(code *)PTR_req_write_0046abec)(param_1,uVar6);
      (*(code *)PTR_req_write_0046abec)(param_1," 200 OK\r\n");
      (*(code *)PTR_print_http_headers_0046a7c4)(param_1);
      (*(code *)PTR_print_last_modified_0046a908)(param_1);
      (*(code *)PTR_req_write_0046abec)(param_1,"Content-Type: text/html\r\n\r\n");
      (*(code *)PTR_req_flush_0046a698)(param_1);
    }
    if (*(int *)(param_1 + 0xc) != 2) {
      pcVar4 = (char *)(*(code *)PTR_init_cgi_0046a930)(param_1);
      return pcVar4;
    }
    return (char *)0x0;
  }
  pcVar13 = (code *)PTR_send_r_forbidden_0046a838;
  if (*(int *)PTR_cachedir_0046aaa0 != 0) {
    iVar11 = *(int *)(param_2 + 0x44);
    (*(code *)PTR_snprintf_0046abe4)
              (auStack_1030,0x1000,"%s/dir.%d.%ld",*(int *)PTR_cachedir_0046aaa0,
               *(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 0x10));
    pcVar7 = (char *)(*(code *)PTR_open_0046a710)(auStack_1030,0);
    if (pcVar7 != (char *)0xffffffff) {
      (*(code *)PTR_fstat_0046a9f0)(pcVar7,param_2);
      puVar1 = PTR_directory_index_0046a818;
      pcVar4 = param_1 + 0x8d4;
      if (iVar11 < *(int *)(param_2 + 0x44)) {
        *(int *)(param_2 + 0x44) = iVar11;
        param_2 = *(int *)puVar1;
        pcVar13 = (code *)PTR_strcpy_0046ac60;
LAB_00407298:
        (*pcVar13)(pcVar4,param_2);
        return pcVar7;
      }
      (*(code *)PTR_close_0046a694)(pcVar7);
      (*(code *)PTR_unlink_0046a900)(auStack_1030);
    }
    iVar2 = (*(code *)PTR_chdir_0046a9a0)(*(undefined4 *)(param_1 + 0x1c));
    if (iVar2 == -1) {
      piVar5 = (int *)(*(code *)PTR___errno_location_0046a764)();
      pcVar13 = (code *)PTR_send_r_forbidden_0046a838;
      if ((*piVar5 != 0xd) && (*piVar5 != 1)) {
        (*(code *)PTR_perror_0046ab44)("chdir");
        pcVar13 = (code *)PTR_send_r_bad_request_0046a968;
      }
    }
    else {
      iVar2 = (*(code *)PTR_opendir_0046a848)(".");
      if (iVar2 != 0) {
        iVar8 = (*(code *)PTR_fopen_0046a894)(auStack_1030,"w");
        if (iVar8 == 0) {
          (*(code *)PTR_closedir_0046a6d8)(iVar2);
          return (char *)0xffffffff;
        }
        pcVar4 = param_1 + 0x8d4;
        iVar9 = (*(code *)PTR_fprintf_0046a9ec)
                          (iVar8,"<HTML><HEAD>\n<TITLE>Index of %s</TITLE>\n</HEAD>\n\n",pcVar4);
        iVar10 = (*(code *)PTR_fprintf_0046a9ec)
                           (iVar8,"<BODY>\n\n<H2>Index of %s</H2>\n\n<PRE>\n",pcVar4);
        iVar10 = iVar10 + iVar9;
        while( true ) {
          iVar9 = (*(code *)PTR_readdir_0046aac8)(iVar2);
          iVar12 = iVar9 + 0xb;
          if (iVar9 == 0) break;
          iVar9 = (*(code *)PTR_strcmp_0046a824)(iVar12,".");
          if (iVar9 != 0) {
            iVar9 = (*(code *)PTR_strcmp_0046a824)(iVar12,"..");
            if (iVar9 == 0) {
              iVar9 = (*(code *)PTR_fprintf_0046a9ec)
                                (iVar8," [DIR] <A HREF=\"../\">Parent Directory</A>\n");
              iVar10 = iVar10 + iVar9;
            }
            else {
              iVar9 = (*(code *)PTR_escape_string_0046a91c)(iVar12,0);
              if (iVar9 != 0) {
                iVar12 = (*(code *)PTR_fprintf_0046a9ec)
                                   (iVar8," <A HREF=\"%s\">%s</A>\n",iVar9,iVar12);
                iVar10 = iVar10 + iVar12;
                (*(code *)PTR_free_0046a680)(iVar9);
              }
            }
          }
        }
        (*(code *)PTR_closedir_0046a6d8)(iVar2);
        iVar2 = (*(code *)PTR_fprintf_0046a9ec)(iVar8,"</PRE>\n\n</BODY>\n</HTML>\n");
        (*(code *)PTR_fclose_0046a85c)(iVar8);
        (*(code *)PTR_chdir_0046a9a0)(*(undefined4 *)PTR_server_root_0046a6b8);
        *(int *)(param_1 + 0x2c) = iVar2 + iVar10;
        pcVar7 = (char *)(*(code *)PTR_open_0046a710)(auStack_1030,0);
        if (pcVar7 != (char *)0xffffffff) {
          (*(code *)PTR_strcpy_0046ac60)(pcVar4,*(undefined4 *)PTR_directory_index_0046a818);
          (*(code *)PTR_fstat_0046a9f0)(pcVar7,param_2);
          *(int *)(param_2 + 0x44) = iVar11;
          return pcVar7;
        }
        return (char *)0xffffffff;
      }
      puVar3 = (undefined4 *)(*(code *)PTR___errno_location_0046a764)();
      uVar6 = *puVar3;
      (*(code *)PTR_send_r_error_0046a718)(param_1);
      (*(code *)PTR_fprintf_0046a9ec)
                (*(undefined4 *)PTR_stderr_0046a7f0,"opendir failed on directory \"%s\": ",
                 *(undefined4 *)(param_1 + 0x1c));
      *puVar3 = uVar6;
      param_1 = "opendir";
      pcVar13 = (code *)PTR_perror_0046ab44;
    }
  }
LAB_004075fc:
  (*pcVar13)(param_1);
  return (char *)0xffffffff;
}

