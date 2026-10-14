/* process_logline @ 0040c104 */

undefined4 process_logline(int param_1)

{
  char cVar1;
  undefined *puVar2;
  char *pcVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  code *pcVar11;
  int local_20;
  int local_1c;
  
  puVar2 = PTR_strlen_0046a714;
  pcVar8 = (char *)(param_1 + 0x10d5);
  *(char **)(param_1 + 0x3c) = pcVar8;
  uVar4 = (*(code *)puVar2)(pcVar8);
  if (uVar4 < 5) {
    pcVar11 = (code *)PTR_send_r_bad_request_0046a968;
    if ((*(uint *)PTR_debug_level_0046abf4 & 1) == 0) goto LAB_0040c5a4;
    uVar6 = *(undefined4 *)PTR_stderr_0046a7f0;
    pcVar7 = "Request too short: \"%s\"\n";
LAB_0040c58c:
    (*(code *)PTR_fprintf_0046a9ec)(uVar6,pcVar7,pcVar8);
    pcVar11 = (code *)PTR_send_r_bad_request_0046a968;
    goto LAB_0040c5a4;
  }
  iVar5 = (*(code *)PTR_memcmp_0046a8d0)(pcVar8,&DAT_0044ac08,4);
  if (iVar5 == 0) {
    uVar6 = 1;
  }
  else {
    iVar5 = (*(code *)PTR_memcmp_0046a8d0)(pcVar8,"HEAD ",5);
    if (iVar5 == 0) {
      uVar6 = 2;
    }
    else {
      iVar5 = (*(code *)PTR_memcmp_0046a8d0)(pcVar8,"POST ",5);
      uVar6 = 4;
      if (iVar5 != 0) {
        pcVar11 = (code *)PTR_send_r_not_implemented_0046aa64;
        if ((*(uint *)PTR_debug_level_0046abf4 & 1) != 0) {
          (*(code *)PTR_fprintf_0046a9ec)
                    (*(undefined4 *)PTR_stderr_0046a7f0,"malformed request: \"%s\"\n",pcVar8);
          pcVar11 = (code *)PTR_send_r_not_implemented_0046aa64;
        }
        goto LAB_0040c5a4;
      }
    }
  }
  pcVar8 = *(char **)(param_1 + 0x3c);
  *(undefined4 *)(param_1 + 0xc) = uVar6;
  *(undefined4 *)(param_1 + 8) = 2;
  pcVar7 = pcVar8 + 3;
  if (pcVar8[3] != ' ') {
    pcVar7 = pcVar8 + 4;
  }
  do {
    pcVar10 = pcVar7;
    pcVar7 = pcVar10 + 1;
    pcVar3 = pcVar7;
  } while (*pcVar7 == ' ');
  do {
    pcVar9 = pcVar3;
    if (*pcVar9 == '\0') break;
    pcVar3 = pcVar9 + 1;
  } while (*pcVar9 != ' ');
  if (0x800 < (int)pcVar9 - (int)pcVar7) {
    pcVar11 = (code *)PTR_send_r_bad_request_0046a968;
    if ((*(uint *)PTR_debug_level_0046abf4 & 1) != 0) {
      (*(code *)PTR_fprintf_0046a9ec)
                (*(undefined4 *)PTR_stderr_0046a7f0,"URI too long %d: \"%s\"\n",0x800,pcVar8);
      pcVar11 = (code *)PTR_send_r_bad_request_0046a968;
    }
    goto LAB_0040c5a4;
  }
  iVar5 = (*(code *)PTR_memcmp_0046a8d0)(pcVar7,&DAT_0044ac54,4);
  if ((iVar5 == 0) &&
     (iVar5 = (*(code *)PTR_memcmp_0046a8d0)(pcVar10 + 5,&DAT_0044a180,3), iVar5 == 0)) {
    cVar1 = pcVar10[8];
    pcVar11 = (code *)PTR_send_r_bad_request_0046a968;
    if (((cVar1 == '/') || (cVar1 == ' ')) || (pcVar7 = pcVar10 + 8, cVar1 == '\0')) {
      if ((*(uint *)PTR_debug_level_0046abf4 & 1) != 0) {
        (*(code *)PTR_fputs_0046a6e4)("bogus absolute URI\n",*(undefined4 *)PTR_stderr_0046a7f0);
        pcVar11 = (code *)PTR_send_r_bad_request_0046a968;
      }
      goto LAB_0040c5a4;
    }
    do {
      cVar1 = *pcVar7;
      if (cVar1 == '\0') break;
      if (cVar1 == '/') {
        if (pcVar7 <= pcVar9) {
          (*(code *)PTR_memcpy_0046ab5c)(param_1 + 0x8d4,pcVar7,(int)pcVar9 - (int)pcVar7);
          *pcVar7 = '\0';
          *(char **)(param_1 + 0x60) = pcVar10 + 8;
          goto LAB_0040c460;
        }
        if ((*(uint *)PTR_debug_level_0046abf4 & 1) == 0) goto LAB_0040c5a4;
        uVar6 = *(undefined4 *)PTR_stderr_0046a7f0;
        pcVar7 = "Error: corruption in absolute URI:\"%s\".  This should not happen.\n";
        goto LAB_0040c58c;
      }
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != ' ');
    if ((*(uint *)PTR_debug_level_0046abf4 & 1) == 0) goto LAB_0040c5a4;
    uVar6 = *(undefined4 *)PTR_stderr_0046a7f0;
    pcVar7 = "no URL in absolute URI: \"%s\"\n";
    goto LAB_0040c58c;
  }
  (*(code *)PTR_memcpy_0046ab5c)(param_1 + 0x8d4,pcVar7,(int)pcVar9 - (int)pcVar7);
LAB_0040c460:
  pcVar9[(param_1 - (int)pcVar7) + 0x8d4] = '\0';
  if (*pcVar9 == '\0') {
LAB_0040c4f0:
    uVar6 = 1;
LAB_0040c510:
    *(undefined4 *)(param_1 + 8) = uVar6;
  }
  else if (*pcVar9 == ' ') {
    do {
      pcVar8 = pcVar9 + 1;
      pcVar9 = pcVar8;
    } while (*pcVar8 == ' ');
    uVar6 = 1;
    if (*pcVar8 != '\0') {
      iVar5 = (*(code *)PTR_sscanf_0046a8c4)(pcVar8,&DAT_0044acd4,&local_20,&local_1c);
      if (iVar5 == 2) {
        if (local_20 == 0) {
          if (local_1c == 9) goto LAB_0040c4f0;
        }
        else if (local_20 == 1) {
          uVar6 = 2;
          if (local_1c == 0) goto LAB_0040c510;
          if (local_1c == 1) {
            *(undefined4 *)(param_1 + 8) = 3;
            *(undefined4 *)(param_1 + 4) = 2;
            goto LAB_0040c528;
          }
        }
      }
      pcVar11 = (code *)PTR_send_r_bad_request_0046a968;
      if ((*(uint *)PTR_debug_level_0046abf4 & 1) == 0) goto LAB_0040c5a4;
      uVar6 = *(undefined4 *)PTR_stderr_0046a7f0;
      pcVar7 = "bogus HTTP version: \"%s\"\n";
      goto LAB_0040c58c;
    }
    goto LAB_0040c510;
  }
LAB_0040c528:
  if ((*(int *)(param_1 + 0xc) != 2) ||
     (pcVar11 = (code *)PTR_send_r_bad_request_0046a968, *(int *)(param_1 + 8) != 1)) {
    *(int *)(param_1 + 0x5c) = (int)*(short *)PTR_common_cgi_env_count_0046ac20;
    return 1;
  }
LAB_0040c5a4:
  (*pcVar11)(param_1);
  return 0;
}

