/* process_option_line @ 0040b654 */

uint process_option_line(int param_1)

{
  char cVar1;
  undefined *puVar2;
  char *pcVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  char *pcVar14;
  char *pcVar15;
  code *pcVar16;
  undefined1 local_a0 [128];
  int local_20;
  
  pcVar15 = *(char **)(param_1 + 0x40);
  puVar4 = (undefined1 *)(*(code *)PTR_strchr_0046a6e8)(pcVar15,0x3a);
  puVar2 = PTR_to_upper_0046ab6c;
  if (puVar4 == (undefined1 *)0x0) {
    (*(code *)PTR_fprintf_0046a9ec)
              (*(undefined4 *)PTR_stderr_0046a7f0,"header \"%s\" does not contain \':\'\n",pcVar15);
  }
  else {
    *puVar4 = 0;
    (*(code *)puVar2)(pcVar15);
    pcVar3 = puVar4 + 1;
    do {
      while( true ) {
        pcVar14 = pcVar3;
        cVar1 = *pcVar14;
        if (cVar1 == '\0') {
          return 1;
        }
        if (cVar1 != ' ') break;
        pcVar3 = pcVar14 + 1;
      }
      pcVar3 = pcVar14 + 1;
    } while (cVar1 == '\t');
    cVar1 = *pcVar15;
    if (cVar1 == 'H') {
      iVar6 = (*(code *)PTR_memcmp_0046a8d0)(pcVar15,&DAT_0044ab18,5);
      if ((iVar6 == 0) && (*(int *)(param_1 + 0x60) == 0)) {
        *(char **)(param_1 + 0x60) = pcVar14;
        return 1;
      }
      goto LAB_0040bbe4;
    }
    if (cVar1 < 'I') {
      if (cVar1 != 'A') {
        if (cVar1 == 'C') {
          iVar6 = (*(code *)PTR_memcmp_0046a8d0)(pcVar15,"CONTENT_TYPE",0xd);
          puVar2 = PTR_strlen_0046a714;
          if ((iVar6 == 0) && (*(int *)(param_1 + 0x90) == 0)) {
            *(char **)(param_1 + 0x90) = pcVar14;
            *(undefined4 *)(param_1 + 0x3278) = 0;
            uVar7 = (*(code *)puVar2)(pcVar14);
            if ((0x13 < uVar7) &&
               (iVar6 = (*(code *)PTR_strncmp_0046a918)(pcVar14,"multipart/form-data",0x13),
               iVar6 == 0)) {
              iVar6 = (*(code *)PTR_strstr_0046a940)(pcVar14,"boundary=");
              local_20 = iVar6 + 9;
              if (iVar6 != 0) {
                iVar6 = (*(code *)PTR_strlen_0046a714)(local_20);
                iVar6 = (*(code *)PTR_malloc_0046ab14)(iVar6 + 4);
                *(int *)(param_1 + 0x3278) = iVar6;
                if (iVar6 != 0) {
                  (*(code *)PTR_sprintf_0046a808)(iVar6,&DAT_0044aaf4,local_20);
                  return 1;
                }
              }
            }
          }
          else {
            iVar6 = (*(code *)PTR_memcmp_0046a8d0)(pcVar15,"CONTENT_LENGTH",0xf);
            if ((iVar6 == 0) && (*(int *)(param_1 + 0x94) == 0)) {
              *(char **)(param_1 + 0x94) = pcVar14;
            }
            else {
              iVar6 = (*(code *)PTR_memcmp_0046a8d0)(pcVar15,"CONNECTION",0xb);
              if (((iVar6 != 0) || (*(int *)PTR_ka_max_0046a69c == 0)) ||
                 (*(int *)(param_1 + 4) == 2)) goto LAB_0040bbe4;
              *(undefined4 *)(param_1 + 4) = 2;
            }
          }
          return 1;
        }
        goto LAB_0040bbe4;
      }
      iVar6 = (*(code *)PTR_memcmp_0046a8d0)(pcVar15,"ACCEPT",7);
      if (iVar6 == 0) {
        return 1;
      }
      iVar6 = (*(code *)PTR_memcmp_0046a8d0)(pcVar15,"AUTHORIZATION",0xe);
      if (iVar6 != 0) goto LAB_0040bbe4;
      iVar6 = (*(code *)PTR_strncasecmp_0046aa8c)(pcVar14,"Basic ",6);
      if (iVar6 == 0) {
        iVar6 = (*(code *)PTR_strlen_0046a714)(pcVar14 + 6);
        uVar7 = 0;
        uVar10 = 0;
        iVar8 = 0;
        for (iVar12 = 0; iVar12 < iVar6; iVar12 = iVar12 + 1) {
          cVar1 = pcVar14[iVar12 + 6];
          iVar9 = (int)cVar1;
          iVar11 = iVar9 + -0x41;
          if ((((byte)(cVar1 + 0xbfU) < 0x1a) ||
              (iVar11 = iVar9 + -0x47, (byte)(cVar1 + 0x9fU) < 0x1a)) ||
             ((iVar11 = iVar9 + 4, (byte)(cVar1 - 0x30U) < 10 || (iVar11 = 0x3e, iVar9 == 0x2b)))) {
LAB_0040b83c:
            uVar10 = iVar11 + uVar10 * 0x40;
            uVar7 = uVar7 + 6;
            while( true ) {
              uVar13 = uVar7 - 8;
              if ((int)uVar7 < 8) break;
              uVar7 = uVar7 - 8;
              if (iVar8 < 0x80) {
                local_a0[iVar8] = (char)((int)uVar10 >> (uVar13 & 0x1f));
                iVar8 = iVar8 + 1;
              }
              uVar10 = uVar10 & (1 << (uVar7 & 0x1f)) - 1U;
            }
          }
          else if (iVar9 == 0x2d) {
            iVar11 = 0x3f;
            goto LAB_0040b83c;
          }
        }
        if (iVar8 < 0x80) {
          local_a0[iVar8] = 0;
        }
        puVar4 = (undefined1 *)(*(code *)PTR_strchr_0046a6e8)(local_a0,0x3a);
        puVar2 = PTR_strdup_0046a8a4;
        if (puVar4 != (undefined1 *)0x0) {
          *puVar4 = 0;
          uVar5 = (*(code *)puVar2)(local_a0);
          puVar2 = PTR_strdup_0046a8a4;
          *(undefined4 *)(param_1 + 0xa8) = uVar5;
          uVar5 = (*(code *)puVar2)(puVar4 + 1);
          *(undefined4 *)(param_1 + 0xac) = uVar5;
          return 1;
        }
        pcVar15 = "No user:pass in Basic auth";
      }
      else {
        pcVar15 = "Can only handle Basic auth";
      }
      (*(code *)PTR_puts_0046ab3c)(pcVar15);
      pcVar16 = (code *)PTR_send_r_bad_request_0046a968;
    }
    else {
      if (cVar1 != 'R') {
        if (cVar1 == 'U') {
          iVar6 = (*(code *)PTR_memcmp_0046a8d0)(pcVar15,"USER_AGENT",0xb);
          puVar2 = PTR_add_cgi_env_0046a788;
          if (iVar6 == 0) {
            *(char **)(param_1 + 100) = pcVar14;
            iVar6 = (*(code *)puVar2)(param_1,"USER_AGENT",pcVar14,1);
            return (uint)(iVar6 != 0);
          }
        }
        else if (((cVar1 == 'I') &&
                 (iVar6 = (*(code *)PTR_memcmp_0046a8d0)(pcVar15,"IF_MODIFIED_SINCE",0x12),
                 iVar6 == 0)) && (*(int *)(param_1 + 0x54) == 0)) {
          *(char **)(param_1 + 0x54) = pcVar14;
          return 1;
        }
LAB_0040bbe4:
        uVar7 = (*(code *)PTR_add_cgi_env_0046a788)(param_1,pcVar15,pcVar14,1);
        return uVar7;
      }
      iVar6 = (*(code *)PTR_memcmp_0046a8d0)(pcVar15,"REFERER",8);
      puVar2 = PTR_add_cgi_env_0046a788;
      if (iVar6 == 0) {
        *(char **)(param_1 + 0x68) = pcVar14;
        iVar6 = (*(code *)puVar2)(param_1,"REFERER",pcVar14,1);
        if (iVar6 == 0) {
          return 0;
        }
        goto LAB_0040bbe4;
      }
      iVar6 = (*(code *)PTR_memcmp_0046a8d0)(pcVar15,"RANGE",6);
      if (iVar6 != 0) goto LAB_0040bbe4;
      if ((*(int *)(param_1 + 0x20) != 0) && (*(int *)(*(int *)(param_1 + 0x20) + 4) == 0x7fffffff))
      {
        return 1;
      }
      iVar6 = (*(code *)PTR_range_parse_0046a730)(param_1,pcVar14);
      pcVar16 = (code *)PTR_send_r_invalid_range_0046aa80;
      if (iVar6 != 0) goto LAB_0040bbe4;
    }
    (*pcVar16)(param_1);
  }
  return 0;
}

