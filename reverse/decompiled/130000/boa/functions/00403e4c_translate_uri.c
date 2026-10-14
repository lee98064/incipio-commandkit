/* translate_uri @ 00403e4c */

bool translate_uri(int param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined1 *puVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined *puVar9;
  char *pcVar10;
  undefined *puVar11;
  undefined4 uVar12;
  int *piVar13;
  undefined4 *puVar14;
  int iVar15;
  int iVar16;
  code *pcVar17;
  undefined1 auStack_d8 [20];
  uint local_c4;
  undefined1 *local_40;
  int local_3c;
  int local_38;
  int local_34;
  uint local_30;
  
  puVar9 = PTR_isFWUPGRADE_0046ab90;
  if ((*(int *)PTR_isFWUPGRADE_0046ab90 == 1) &&
     (iVar2 = (*(code *)PTR_strcmp_0046a824)(param_1 + 0x8d4,"/countDownPage.htm"), iVar2 == 0)) {
    *(undefined4 *)puVar9 = 2;
    *(undefined4 *)PTR_isREBOOTASP_0046a804 = 1;
  }
  puVar9 = PTR_isCFGUPGRADE_0046aab8;
  if ((*(int *)PTR_isCFGUPGRADE_0046aab8 == 1) &&
     (iVar2 = (*(code *)PTR_strcmp_0046a824)(param_1 + 0x8d4,"/countDownPage.htm"), iVar2 == 0)) {
    *(undefined4 *)puVar9 = 2;
    *(undefined4 *)PTR_isREBOOTASP_0046a804 = 1;
  }
  iVar2 = param_1 + 0x8d4;
  pcVar17 = (code *)PTR_send_r_bad_request_0046a968;
  if (*(char *)(param_1 + 0x8d4) != '/') goto LAB_00404d98;
  uVar3 = (*(code *)PTR_strlen_0046a714)(iVar2);
  iVar4 = FUN_00403d30(iVar2);
  if ((*(uint *)PTR_debug_level_0046abf4 & 1) != 0) {
    (*(code *)PTR_fprintf_0046a9ec)
              (*(undefined4 *)PTR_stderr_0046a7f0,"%s:%d - looking for \"%s\" (hash=%u,len=%u)...\n"
               ,"alias.c",0xb6,iVar2,iVar4,uVar3);
  }
  puVar11 = PTR_debug_level_0046abf4;
  puVar9 = PTR_stderr_0046a7f0;
  for (piVar13 = (int *)(&DAT_0046c56c)[iVar4]; piVar13 != (int *)0x0; piVar13 = (int *)piVar13[5])
  {
    if ((*(uint *)puVar11 & 1) != 0) {
      (*(code *)PTR_fprintf_0046a9ec)
                (*(undefined4 *)puVar9,"%s:%d - comparing \"%s\" (request) to \"%s\" (alias): ",
                 "alias.c",0xbf,iVar2,*piVar13);
    }
    uVar8 = piVar13[3];
    if (uVar8 <= uVar3) {
      local_34 = *piVar13;
      local_30 = uVar8;
      iVar4 = (*(code *)PTR_memcmp_0046a8d0)(iVar2,local_34,uVar8);
      if ((iVar4 == 0) &&
         (((*(char *)(local_34 + local_30 + -1) == '/' || (*(char *)(iVar2 + local_30) == '\0')) ||
          (*(char *)(iVar2 + local_30) == '/')))) {
        if ((*(uint *)PTR_debug_level_0046abf4 & 1) != 0) {
          (*(code *)PTR_fprintf_0046a9ec)
                    (*(undefined4 *)PTR_stderr_0046a7f0,"Got it! (%s)\n",piVar13[1]);
        }
        if (piVar13 != (int *)0x0) {
          if (piVar13[2] != 1) {
            if (0x801 < ((piVar13[4] + 1) - piVar13[3]) + uVar3) goto LAB_00404bec;
            puVar9 = &DAT_0046ad60;
            (*(code *)PTR_memcpy_0046ab5c)(&DAT_0046ad60,piVar13[1]);
            (*(code *)PTR_memcpy_0046ab5c)
                      (&DAT_0046ad60 + piVar13[4],param_1 + 0x8d4 + piVar13[3],
                       (1 - piVar13[3]) + uVar3);
            if (piVar13[2] != 2) goto LAB_00404894;
            if (*(int *)(param_1 + 0xc) != 4) {
              (*(code *)PTR_send_r_moved_temp_0046a830)(param_1,&DAT_0046ad60,&DAT_0044b32c);
              return false;
            }
            uVar12 = *(undefined4 *)PTR_stderr_0046a7f0;
            pcVar10 = "POST to non-script is disallowed.\n";
            goto LAB_00404d80;
          }
          iVar4 = piVar13[3];
          uVar8 = *(uint *)PTR_vhost_root_0046ab98;
          if (uVar8 == 0) {
            if (0x801 < ((piVar13[4] + 1) - iVar4) + uVar3) goto LAB_00404bec;
            (*(code *)PTR_memcpy_0046ab5c)(&DAT_0046bd68,piVar13[1]);
            iVar4 = piVar13[3];
            iVar15 = piVar13[4];
          }
          else {
            local_3c = param_1 + 0xbc;
            local_34 = piVar13[4];
            local_30 = uVar8;
            iVar6 = (*(code *)PTR_strlen_0046a714)(uVar8);
            local_38 = (*(code *)PTR_strlen_0046a714)(local_3c);
            local_40 = *(undefined1 **)(param_1 + 0x70);
            iVar7 = (*(code *)PTR_strlen_0046a714)(local_40);
            uVar8 = local_30;
            iVar15 = local_38 + iVar6 + iVar7;
            if (0x801 < ((local_34 + 4) - iVar4) + uVar3 + iVar15) goto LAB_00404bec;
            local_34 = iVar7;
            local_30 = local_38 + iVar6;
            (*(code *)PTR_memcpy_0046ab5c)(&DAT_0046bd68,uVar8,iVar6);
            puVar9 = PTR_memcpy_0046ab5c;
            (&DAT_0046bd68)[iVar6] = 0x2f;
            (*(code *)puVar9)(&DAT_0046bd69 + iVar6,local_3c,local_38);
            (&DAT_0046bd69)[local_30] = 0x2f;
            (*(code *)PTR_memcpy_0046ab5c)(&DAT_0046bd6a + local_30,local_40,local_34);
            (&DAT_0046bd6a)[iVar15] = 0x2f;
            (*(code *)PTR_memcpy_0046ab5c)(&DAT_0046bd6b + iVar15,piVar13[1],piVar13[4]);
            iVar4 = piVar13[3];
            iVar15 = piVar13[4] + 3 + iVar15;
          }
          (*(code *)PTR_memcpy_0046ab5c)
                    (&DAT_0046bd68 + iVar15,param_1 + 0x8d4 + iVar4,(1 - iVar4) + uVar3);
          iVar4 = (*(code *)PTR_strncmp_0046a918)(&DAT_004495a0,&DAT_0046bd68 + piVar13[4],4);
          uVar12 = 1;
          if ((iVar4 != 0) && (*(int *)(param_1 + 8) != 1)) {
            uVar12 = 2;
          }
          *(undefined4 *)(param_1 + 0x14) = uVar12;
          iVar4 = piVar13[4];
          if ((*(int *)(param_1 + 0xc) == 4) &&
             (iVar15 = (*(code *)PTR_strchr_0046a6e8)(iVar2,0x2e), iVar15 == 0)) {
            return true;
          }
          local_40 = auStack_d8;
          pcVar10 = &DAT_0046bd69 + iVar4;
          goto LAB_00404360;
        }
        break;
      }
    }
    if ((*(uint *)puVar11 & 1) != 0) {
      (*(code *)PTR_fputs_0046a6e4)("Don\'t Got it!\n",*(undefined4 *)puVar9);
    }
  }
  if ((*(int *)PTR_user_dir_0046a724 == 0) || (*(char *)(param_1 + 0x8d5) != '~')) {
    uVar3 = *(uint *)PTR_vhost_root_0046ab98;
    if (uVar3 == 0) {
      iVar4 = *(int *)PTR_document_root_0046ac24;
      pcVar17 = (code *)PTR_send_r_not_found_0046aa1c;
      if (iVar4 == 0) goto LAB_00404d98;
      iVar7 = 0;
      iVar6 = (*(code *)PTR_strlen_0046a714)(iVar4);
      iVar15 = (*(code *)PTR_strlen_0046a714)(iVar2);
      if (*(int *)PTR_virtualhost_0046abc4 != 0) {
        iVar7 = (*(code *)PTR_strlen_0046a714)(param_1 + 0xbc);
      }
      if (0x801 < (uint)(iVar6 + iVar15 + 2 + iVar7)) goto LAB_00404bec;
      (*(code *)PTR_memcpy_0046ab5c)(&DAT_0046ad60,iVar4,iVar6);
      puVar9 = PTR_memcpy_0046ab5c;
      iVar15 = iVar15 + 1;
      puVar5 = (undefined1 *)(param_1 + 0x8d4);
      puVar11 = &DAT_0046ad60 + iVar6;
      if (*(int *)PTR_virtualhost_0046abc4 != 0) {
        *puVar11 = 0x2f;
        (*(code *)puVar9)(iVar6 + 0x46ad61,param_1 + 0xbc,iVar7);
        puVar11 = (undefined *)(iVar6 + iVar7 + 0x46ad61);
      }
    }
    else {
      local_3c = param_1 + 0xbc;
      local_30 = uVar3;
      iVar4 = (*(code *)PTR_strlen_0046a714)(uVar3);
      local_38 = (*(code *)PTR_strlen_0046a714)(local_3c);
      local_40 = *(undefined1 **)(param_1 + 0x70);
      iVar6 = (*(code *)PTR_strlen_0046a714)(local_40);
      iVar15 = (*(code *)PTR_strlen_0046a714)(iVar2);
      iVar16 = local_38 + iVar4;
      iVar7 = iVar16 + iVar6;
      if (0x801 < iVar7 + iVar15 + 10U) {
LAB_00404bec:
        uVar12 = *(undefined4 *)PTR_stderr_0046a7f0;
        pcVar10 = "uri too long!\n";
        goto LAB_00404d80;
      }
      (*(code *)PTR_memcpy_0046ab5c)(&DAT_0046ad60,local_30,iVar4);
      puVar9 = PTR_memcpy_0046ab5c;
      (&DAT_0046ad60)[iVar4] = 0x2f;
      (*(code *)puVar9)(iVar4 + 0x46ad61,local_3c,local_38);
      puVar9 = PTR_memcpy_0046ab5c;
      *(undefined1 *)(iVar16 + 0x46ad61) = 0x2f;
      (*(code *)puVar9)(iVar16 + 0x46ad62,local_40,iVar6);
      puVar9 = PTR_memcpy_0046ab5c;
      *(undefined1 *)(iVar7 + 0x46ad62) = 0x2f;
      (*(code *)puVar9)(iVar7 + 0x46ad63,"htdocs",6);
      puVar11 = (undefined *)(iVar7 + 0x46ad69);
      iVar15 = iVar15 + 1;
      puVar5 = (undefined1 *)(param_1 + 0x8d4);
    }
LAB_00404c74:
    (*(code *)PTR_memcpy_0046ab5c)(puVar11,puVar5,iVar15);
LAB_00404c94:
    iVar4 = (*(code *)PTR_strdup_0046a8a4)(&DAT_0046ad60);
    *(int *)(param_1 + 0x1c) = iVar4;
    if (iVar4 == 0) {
      return false;
    }
    uVar12 = (*(code *)PTR_get_mime_type_0046a77c)(iVar4);
    iVar4 = (*(code *)PTR_strcmp_0046a824)("application/x-httpd-cgi",uVar12);
    if (iVar4 == 0) {
      iVar2 = (*(code *)PTR_strdup_0046a8a4)(iVar2);
      *(int *)(param_1 + 0x88) = iVar2;
      if (iVar2 == 0) {
        return false;
      }
      uVar12 = 1;
      if (*(int *)(param_1 + 8) != 1) {
        iVar2 = (*(code *)PTR_strncmp_0046a918)(&DAT_004495a0,*(int *)(param_1 + 0x1c) + 5,4);
        uVar12 = 1;
        if (iVar2 != 0) {
          uVar12 = 2;
        }
      }
      *(undefined4 *)(param_1 + 0x14) = uVar12;
      return true;
    }
    if (*(int *)(param_1 + 0xc) != 4) {
      return true;
    }
    iVar2 = (*(code *)PTR_strstr_0046a940)(iVar2,"boafrm");
    if (iVar2 != 0) {
      return true;
    }
    uVar12 = *(undefined4 *)PTR_stderr_0046a7f0;
    pcVar10 = "POST to non-script disallowed.\n";
  }
  else {
    if (*(char *)(param_1 + 0x8d6) != '\0') {
      puVar5 = (undefined1 *)(*(code *)PTR_memchr_0046a974)(param_1 + 0x8d6,0x2f,uVar3 - 2);
      if (puVar5 != (undefined1 *)0x0) {
        *puVar5 = 0;
      }
      iVar4 = (*(code *)PTR_get_home_dir_0046a8c0)(param_1 + 0x8d6);
      if (puVar5 != (undefined1 *)0x0) {
        *puVar5 = 0x2f;
      }
      pcVar17 = (code *)PTR_send_r_not_found_0046aa1c;
      if (iVar4 == 0) goto LAB_00404d98;
      iVar15 = 0;
      iVar6 = (*(code *)PTR_strlen_0046a714)(iVar4);
      iVar7 = (*(code *)PTR_strlen_0046a714)(*(undefined4 *)PTR_user_dir_0046a724);
      if (puVar5 != (undefined1 *)0x0) {
        iVar15 = (*(code *)PTR_strlen_0046a714)(puVar5);
      }
      if (0x801 < (uint)(iVar7 + iVar6 + 2 + iVar15)) goto LAB_00404bec;
      (*(code *)PTR_memcpy_0046ab5c)(&DAT_0046ad60,iVar4,iVar6);
      puVar9 = PTR_memcpy_0046ab5c;
      uVar12 = *(undefined4 *)PTR_user_dir_0046a724;
      (&DAT_0046ad60)[iVar6] = 0x2f;
      (*(code *)puVar9)(iVar6 + 0x46ad61,uVar12,iVar7 + 1);
      if (puVar5 != (undefined1 *)0x0) {
        puVar11 = (undefined *)(iVar7 + iVar6 + 0x46ad61);
        iVar15 = iVar15 + 1;
        goto LAB_00404c74;
      }
      goto LAB_00404c94;
    }
    uVar12 = *(undefined4 *)PTR_stderr_0046a7f0;
    pcVar10 = "Empty user-dir in URI\n";
  }
LAB_00404d80:
  (*(code *)PTR_fputs_0046a6e4)(pcVar10,uVar12);
  pcVar17 = (code *)PTR_send_r_bad_request_0046a968;
LAB_00404d98:
  (*pcVar17)(param_1);
  return false;
LAB_00404360:
  puVar9 = PTR_stat_0046a7a4;
  cVar1 = *pcVar10;
  if (cVar1 == '/') {
    *pcVar10 = '\0';
    iVar15 = (*(code *)puVar9)(&DAT_0046bd68,local_40);
    pcVar17 = (code *)PTR_send_r_not_found_0046aa1c;
    if (iVar15 == -1) goto LAB_00404d98;
    if ((local_c4 & 0xf000) != 0x4000) {
      pcVar17 = (code *)PTR_send_r_forbidden_0046a838;
      if ((local_c4 & 0xf000) != 0x8000) goto LAB_00404d98;
      iVar15 = (*(code *)PTR_access_0046a784)(&DAT_0046bd68,5);
      pcVar17 = (code *)PTR_send_r_forbidden_0046a838;
      if (iVar15 != 0) goto LAB_00404d98;
      (&DAT_0046bd69)[iVar4] = 0x2f;
LAB_004043e0:
      iVar2 = (*(code *)PTR_strdup_0046a8a4)(iVar2);
      *(int *)(param_1 + 0x88) = iVar2;
      if (iVar2 == 0) {
        return false;
      }
      if (cVar1 == '\0') {
        iVar2 = (*(code *)PTR_stat_0046a7a4)(&DAT_0046bd68,auStack_d8);
        pcVar17 = (code *)PTR_send_r_not_found_0046aa1c;
        if ((((iVar2 == -1) ||
             (pcVar17 = (code *)PTR_send_r_forbidden_0046a838, (local_c4 & 0xf000) == 0x4000)) ||
            ((local_c4 & 0xf000) != 0x8000)) ||
           (iVar2 = (*(code *)PTR_access_0046a784)(&DAT_0046bd68,5),
           pcVar17 = (code *)PTR_send_r_forbidden_0046a838, iVar2 != 0)) goto LAB_00404d98;
      }
      else if (cVar1 == '/') {
        iVar2 = (*(code *)PTR_strdup_0046a8a4)(&DAT_0046bd69 + iVar4);
        *(int *)(param_1 + 0x80) = iVar2;
        if (iVar2 == 0) {
          return false;
        }
        (&DAT_0046bd69)[iVar4] = 0;
        iVar15 = (*(code *)PTR_strlen_0046a714)(*(undefined4 *)(param_1 + 0x80));
        iVar6 = *(int *)(param_1 + 0x88);
        iVar2 = (*(code *)PTR_strlen_0046a714)(iVar6);
        *(undefined1 *)(iVar6 + (iVar2 - iVar15)) = 0;
        iVar2 = FUN_00403d30(*(undefined4 *)(param_1 + 0x80));
        puVar14 = (undefined4 *)(&DAT_0046c56c)[iVar2];
        while ((puVar9 = PTR_document_root_0046ac24, puVar14 != (undefined4 *)0x0 &&
               (*(int *)(param_1 + 0x84) == 0))) {
          iVar6 = puVar14[3];
          iVar2 = (*(code *)PTR_strncmp_0046a918)(*(undefined4 *)(param_1 + 0x80),*puVar14,iVar6);
          if (iVar2 == 0) {
            if (0x801 < (uint)(((puVar14[4] + 1) - iVar6) + iVar15)) goto LAB_00404bec;
            (*(code *)PTR_memcpy_0046ab5c)(&DAT_0046b564,puVar14[1],puVar14[4]);
            (*(code *)PTR_memcpy_0046ab5c)
                      (&DAT_0046b564 + puVar14[4],*(int *)(param_1 + 0x80) + puVar14[3],
                       (1 - puVar14[3]) + iVar15);
            iVar2 = (*(code *)PTR_strdup_0046a8a4)(&DAT_0046b564);
            *(int *)(param_1 + 0x84) = iVar2;
            if (iVar2 == 0) {
              return false;
            }
          }
          puVar14 = (undefined4 *)puVar14[5];
        }
        if (*(int *)(param_1 + 0x84) == 0) {
          if ((*(int *)PTR_user_dir_0046a724 == 0) ||
             (*(char *)(*(int *)(param_1 + 0x80) + 1) != '~')) {
            if (*(int *)PTR_document_root_0046ac24 == 0) goto LAB_004047cc;
            iVar15 = iVar15 + 1;
            iVar2 = (*(code *)PTR_strlen_0046a714)();
            iVar4 = (*(code *)PTR_malloc_0046ab14)(iVar15 + iVar2);
            *(int *)(param_1 + 0x84) = iVar4;
            if (iVar4 == 0) {
              return false;
            }
            (*(code *)PTR_memcpy_0046ab5c)(iVar4,*(undefined4 *)puVar9,iVar2);
            puVar5 = *(undefined1 **)(param_1 + 0x80);
            iVar2 = *(int *)(param_1 + 0x84) + iVar2;
          }
          else {
            puVar5 = (undefined1 *)(*(code *)PTR_strchr_0046a6e8)(&DAT_0046bd6a + iVar4,0x2f);
            if (puVar5 != (undefined1 *)0x0) {
              *puVar5 = 0;
            }
            iVar2 = (*(code *)PTR_get_home_dir_0046a8c0)(&DAT_0046bd6b + iVar4);
            if (puVar5 != (undefined1 *)0x0) {
              *puVar5 = 0x2f;
            }
            pcVar17 = (code *)PTR_send_r_not_found_0046aa1c;
            if (iVar2 == 0) goto LAB_00404d98;
            iVar15 = 0;
            iVar4 = (*(code *)PTR_strlen_0046a714)(iVar2);
            iVar6 = (*(code *)PTR_strlen_0046a714)(*(undefined4 *)PTR_user_dir_0046a724);
            if (puVar5 != (undefined1 *)0x0) {
              iVar15 = (*(code *)PTR_strlen_0046a714)(puVar5);
            }
            iVar7 = (*(code *)PTR_malloc_0046ab14)(iVar6 + iVar4 + 2 + iVar15);
            *(int *)(param_1 + 0x84) = iVar7;
            if (iVar7 == 0) {
              return false;
            }
            (*(code *)PTR_memcpy_0046ab5c)(iVar7,iVar2,iVar4);
            *(undefined1 *)(*(int *)(param_1 + 0x84) + iVar4) = 0x2f;
            (*(code *)PTR_memcpy_0046ab5c)
                      (*(int *)(param_1 + 0x84) + iVar4 + 1,*(undefined4 *)PTR_user_dir_0046a724,
                       iVar6 + 1);
            if (puVar5 == (undefined1 *)0x0) goto LAB_004047cc;
            iVar2 = *(int *)(param_1 + 0x84) + iVar6 + iVar4 + 1;
            iVar15 = iVar15 + 1;
          }
          (*(code *)PTR_memcpy_0046ab5c)(iVar2,puVar5,iVar15);
        }
      }
LAB_004047cc:
      puVar9 = &DAT_0046bd68;
LAB_00404894:
      iVar2 = (*(code *)PTR_strdup_0046a8a4)(puVar9);
      *(int *)(param_1 + 0x1c) = iVar2;
      return iVar2 != 0;
    }
    *pcVar10 = '/';
  }
  else if (cVar1 == '\0') goto LAB_004043e0;
  pcVar10 = pcVar10 + 1;
  iVar4 = iVar4 + 1;
  goto LAB_00404360;
}

