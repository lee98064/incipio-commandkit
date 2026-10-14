/* Ghidra-generated pseudo-C; not original source or a buildable project. */
/* _init @ 00401134 */

int _init(EVP_PKEY_CTX *ctx)

{
  int iVar1;
  
  FUN_00401328();
  iVar1 = FUN_00410780();
  return iVar1;
}


/* entry @ 004011c0 */

void processEntry entry(undefined4 param_1,undefined4 param_2)

{
  undefined1 auStack_20 [16];
  undefined *local_10;
  undefined4 local_c;
  undefined1 *local_8;
  
  local_8 = auStack_20;
  local_10 = PTR__fini_004234e4;
  local_c = param_1;
  (*(code *)PTR___uClibc_main_00423520)
            (PTR_main_00423508,param_2,&stack0x00000004,PTR__init_00423590);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* FUN_00401220 @ 00401220 */

void FUN_00401220(void)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  code *pcVar6;
  
  if (PTR_DAT_00423468[0x3610] == '\0') {
    if (PTR___cxa_finalize_004235c0 != (undefined *)0x0) {
      (*(code *)PTR___cxa_finalize_004235c0)(*(undefined4 *)PTR_LOOP_0042346c);
    }
    puVar1 = PTR_DAT_00423468;
    puVar4 = PTR_DAT_00423468 + 0x33ec;
    iVar5 = (int)PTR___DTOR_END___00423470 - (int)puVar4;
    while( true ) {
      uVar2 = *(uint *)(puVar1 + 0x3614);
      iVar3 = uVar2 + 1;
      if ((iVar5 >> 2) - 1U <= uVar2) break;
      pcVar6 = *(code **)(puVar4 + iVar3 * 4);
      *(int *)(puVar1 + 0x3614) = iVar3;
      (*pcVar6)();
    }
    if (PTR___deregister_frame_info_0042356c != (undefined *)0x0) {
      (*(code *)PTR___deregister_frame_info_0042356c)(PTR_LAB_00423474 + 0x33e0);
    }
    PTR_DAT_00423468[0x3610] = 1;
  }
  return;
}


/* FUN_00401328 @ 00401328 */

void FUN_00401328(void)

{
  if (PTR___register_frame_info_004235e4 != (undefined *)0x0) {
    (*(code *)PTR___register_frame_info_004235e4)
              (PTR_LAB_00423474 + 0x33e0,PTR_DAT_00423468 + 0x3618);
  }
  if (*(int *)(PTR_DAT_00423468 + 0x33f4) != 0) {
    if (PTR__Jv_RegisterClasses_0042349c != (undefined *)0x0) {
      (*(code *)PTR__Jv_RegisterClasses_0042349c)(PTR_DAT_00423468 + 0x33f4);
      return;
    }
  }
  return;
}


/* FUN_004013e8 @ 004013e8 */

void FUN_004013e8(void)

{
  bool bVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  int *piVar5;
  
  puVar4 = PTR_hwmib_table_00423580;
  puVar3 = PTR_hwmib_wlan_table_004234e8;
  DAT_00423630 = 0;
  while( true ) {
    bVar1 = 6 < DAT_00423630;
    bVar2 = DAT_00423630 < 2;
    DAT_00423630 = DAT_00423630 + 1;
    if (bVar1) break;
    if (bVar2) {
      piVar5 = (int *)puVar3;
      if (DAT_00423630 == 1) {
        piVar5 = (int *)puVar4;
      }
      while (*piVar5 != 0) {
        (*(code *)PTR_printf_004235f4)("HW_%s\n",piVar5 + 1);
        piVar5 = piVar5 + 0xf;
      }
    }
  }
  return;
}


/* FUN_004014b0 @ 004014b0 */

undefined4 FUN_004014b0(int param_1,undefined4 param_2,int param_3,undefined1 *param_4)

{
  undefined1 uVar1;
  ushort uVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  char *pcVar10;
  undefined1 auStack_40 [6];
  short local_3a;
  uint local_38;
  undefined4 local_30;
  
  uVar1 = *param_4;
  local_30 = param_2;
  iVar4 = (*(code *)PTR_mib_get_flash_offset_00423528)();
  if (-1 < iVar4) {
    if (param_1 == 2) {
      pcVar10 = "COMPDS";
    }
    else if (param_1 == 4) {
      pcVar10 = "COMPCS";
    }
    else {
      if (param_1 != 1) {
        return 0;
      }
      pcVar10 = "COMPHS";
    }
    uVar2 = *(ushort *)(param_3 + 4);
    iVar5 = (*(code *)PTR_mib_get_real_len_004235d0)(param_1);
    if (iVar5 != 0) {
      uVar9 = uVar2 + 6;
      iVar5 = (*(code *)PTR_malloc_004235b8)(iVar5);
      iVar6 = (*(code *)PTR_malloc_004235b8)(uVar9);
      if (iVar6 == 0) {
        if (iVar5 != 0) {
          (*(code *)PTR_free_0042348c)(iVar5);
          return 0;
        }
      }
      else if (iVar5 != 0) {
        (*(code *)PTR_memcpy_004235d4)(iVar6 + 6,local_30,*(ushort *)(param_3 + 4) - 1);
        puVar3 = PTR_memcpy_004235d4;
        *(undefined1 *)(iVar6 + 6 + (uint)*(ushort *)(param_3 + 4) + -1) = uVar1;
        (*(code *)puVar3)(iVar6,param_3,6);
        uVar7 = (*(code *)PTR_Encode_004235a0)(iVar6,uVar9,iVar5 + 0xc);
        (*(code *)PTR_strcpy_00423600)(auStack_40,pcVar10);
        if (uVar7 == 0) {
          trap(0x1c00);
        }
        local_3a = (short)(uVar9 / uVar7) + 1;
        local_38 = uVar7;
        (*(code *)PTR_memcpy_004235d4)(iVar5,auStack_40,0xc);
        iVar8 = (*(code *)PTR_open_004234b0)("/dev/mtdblock0",2);
        if (iVar8 != -1) {
          (*(code *)PTR_lseek_00423598)(iVar8,iVar4,0);
          iVar4 = (*(code *)PTR_write_00423568)(iVar8,iVar5,uVar7 + 0xc);
          (*(code *)PTR_close_00423490)(iVar8);
          (*(code *)PTR_sync_00423534)();
          if (iVar4 == uVar7 + 0xc) {
            (*(code *)PTR_free_0042348c)(iVar5);
            (*(code *)PTR_free_0042348c)(iVar6);
            return 1;
          }
        }
        (*(code *)PTR_printf_004235f4)
                  ("Write flash compress setting[%u] failed![%s-%u]\n",param_1,"flash.c",0x2cfa);
        return 0;
      }
    }
  }
  return 0;
}


/* FUN_004017c0 @ 004017c0 */

bool FUN_004017c0(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  
  iVar1 = (*(code *)PTR_open_004234b0)("/dev/mtdblock0",2);
  bVar3 = false;
  if (iVar1 != -1) {
    (*(code *)PTR_lseek_00423598)(iVar1,param_2,0);
    iVar2 = (*(code *)PTR_read_00423544)(iVar1,param_1,param_3);
    bVar3 = iVar2 == param_3;
    (*(code *)PTR_close_00423490)(iVar1);
  }
  return bVar3;
}


/* FUN_0040188c @ 0040188c */

undefined4 FUN_0040188c(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  char cVar5;
  undefined4 uVar6;
  char *pcVar7;
  undefined1 auStack_28 [6];
  ushort local_22;
  uint local_20;
  
  if (param_1 == 0x8000) {
    pcVar7 = "COMPDS";
    uVar6 = 2;
  }
  else if (param_1 == 0xc000) {
    pcVar7 = "COMPCS";
    uVar6 = 4;
  }
  else {
    if (param_1 != 0x6000) {
      (*(code *)PTR_printf_004235f4)("offset error-[%s-%u]\n","flash.c",0x2c61);
      return 0xffffffff;
    }
    pcVar7 = "COMPHS";
    uVar6 = 1;
  }
  uVar1 = (*(code *)PTR_mib_get_real_len_004235d0)(uVar6);
  FUN_004017c0(auStack_28,param_1,0xc);
  iVar2 = (*(code *)PTR_strncmp_00423540)(auStack_28,pcVar7,6);
  if (iVar2 != 0) {
    return 0xffffffff;
  }
  if (local_20 == 0) {
    return 0xffffffff;
  }
  if (local_20 <= uVar1) {
    iVar2 = (*(code *)PTR_calloc_00423570)(1,local_20 + 0xc);
    if (iVar2 == 0) {
      return 0xffffffff;
    }
    iVar3 = (*(code *)PTR_calloc_00423570)(1,local_22 * local_20);
    if (iVar3 != 0) {
      FUN_004017c0(iVar2,param_1,local_20 + 0xc);
      (*(code *)PTR_Decode_004235e0)(iVar2 + 0xc,local_20,iVar3);
      uVar1 = (uint)*(ushort *)(iVar3 + 4);
      pcVar7 = (char *)(*(code *)PTR_calloc_00423570)(1,uVar1);
      if (pcVar7 != (char *)0x0) {
        (*(code *)PTR_memcpy_004235d4)(pcVar7,iVar3 + 6,uVar1);
        cVar5 = '\0';
        for (pcVar4 = pcVar7; pcVar4 != pcVar7 + uVar1; pcVar4 = pcVar4 + 1) {
          cVar5 = cVar5 + *pcVar4;
        }
        if (cVar5 != '\0') {
          return 0xffffffff;
        }
        (*(code *)PTR_free_0042348c)(iVar2);
        (*(code *)PTR_free_0042348c)(iVar3);
        (*(code *)PTR_free_0042348c)(pcVar7);
        return 1;
      }
      (*(code *)PTR_free_0042348c)(iVar2);
      iVar2 = iVar3;
    }
    (*(code *)PTR_free_0042348c)(iVar2);
    return 0xffffffff;
  }
  return 0xffffffff;
}


/* FUN_00401b18 @ 00401b18 */

undefined4 FUN_00401b18(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_50;
  undefined2 local_4c;
  undefined4 local_48;
  undefined2 local_44;
  undefined4 local_40;
  undefined2 local_3c;
  undefined1 auStack_38 [16];
  undefined2 local_28;
  undefined1 auStack_26 [14];
  undefined1 *local_18;
  
  local_48 = 0xff000000;
  local_50 = 0;
  local_4c = 0;
  local_44 = 0;
  local_40 = 0;
  local_3c = 0;
  uVar1 = (*(code *)PTR_socket_004235a8)(2,1,0);
  (*(code *)PTR_memcpy_004235d4)(&local_40,param_1,5);
  local_18 = auStack_38;
  local_28 = 2;
  (*(code *)PTR_strcpy_00423600)(local_18,&local_40);
  iVar2 = (*(code *)PTR_ioctl_004235f8)(uVar1,0x8927,local_18);
  if (iVar2 < 0) {
    (*(code *)PTR_close_00423490)(uVar1);
    uVar1 = 0xffffffff;
  }
  else {
    (*(code *)PTR_close_00423490)(uVar1);
    iVar2 = (*(code *)PTR_memcmp_0042352c)(auStack_26,&local_50,6);
    uVar1 = 0xffffffff;
    if (iVar2 != 0) {
      iVar2 = (*(code *)PTR_memcmp_0042352c)(auStack_26,&local_48,6);
      if (iVar2 == 0) {
        uVar1 = 0xffffffff;
      }
      else {
        (*(code *)PTR_memcpy_004235d4)(param_2,auStack_26,6);
        uVar1 = 0;
      }
    }
  }
  return uVar1;
}


/* FUN_00401c7c @ 00401c7c */

/* WARNING: Restarted to delay deadcode elimination for space: ram */

int FUN_00401c7c(int param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  code *pcVar9;
  undefined1 auStack_88 [104];
  
  iVar3 = (*(code *)PTR_memcmp_0042352c)(param_1,&DAT_00410dd4,3);
  if (iVar3 == 0) {
    DAT_00423630 = 1;
    iVar3 = (*(code *)PTR_memcmp_0042352c)(param_1 + 3,&DAT_00410dd8,4);
    if ((iVar3 == 0) && (*(char *)(param_1 + 8) == '_')) {
      iVar3 = *(char *)(param_1 + 7) + -0x30;
      *(int *)PTR_wlan_idx_00423548 = iVar3;
      if (0 < iVar3) {
        return -1;
      }
      (*(code *)PTR_strcpy_00423600)(auStack_88,param_1 + 9);
      iVar3 = DAT_00423630 + 1;
      goto LAB_00401f80;
    }
    param_1 = param_1 + 3;
LAB_00401e4c:
    (*(code *)PTR_strcpy_00423600)(auStack_88,param_1);
    iVar3 = 0;
  }
  else {
    iVar3 = (*(code *)PTR_memcmp_0042352c)(param_1,&DAT_00410de0,4);
    if (iVar3 == 0) {
      DAT_00423630 = 3;
      iVar3 = (*(code *)PTR_memcmp_0042352c)(param_1 + 4,&DAT_00410dd8,4);
      if ((iVar3 != 0) || (*(char *)(param_1 + 9) != '_')) {
        param_1 = param_1 + 4;
        goto LAB_00401e4c;
      }
      iVar3 = *(char *)(param_1 + 8) + -0x30;
      *(int *)PTR_wlan_idx_00423548 = iVar3;
      if (0 < iVar3) {
        return -1;
      }
      iVar3 = (*(code *)PTR_memcmp_0042352c)(param_1 + 10,&DAT_00410de8,3);
      pcVar9 = (code *)PTR_strcpy_00423600;
      if ((iVar3 == 0) && (*(char *)(param_1 + 0xe) == '_')) {
        if (4 < *(char *)(param_1 + 0xd) + -0x30) {
LAB_00401efc:
          *(undefined4 *)PTR_vwlan_idx_0042355c = 0;
          return -1;
        }
        *(int *)PTR_vwlan_idx_0042355c = *(char *)(param_1 + 0xd) + -0x2f;
        param_1 = param_1 + 0xf;
      }
      else {
LAB_00401e24:
        param_1 = param_1 + 10;
      }
    }
    else {
      DAT_00423630 = 5;
      iVar3 = (*(code *)PTR_memcmp_0042352c)(param_1,&DAT_00410dd8,4);
      if ((iVar3 != 0) || (*(char *)(param_1 + 5) != '_')) {
        (*(code *)PTR_strcpy_00423600)(auStack_88,param_1);
        iVar3 = 0;
        goto LAB_00401f80;
      }
      iVar3 = *(char *)(param_1 + 4) + -0x30;
      *(int *)PTR_wlan_idx_00423548 = iVar3;
      if (0 < iVar3) {
        return -1;
      }
      iVar3 = (*(code *)PTR_memcmp_0042352c)(param_1 + 6,&DAT_00410de8,3);
      pcVar9 = (code *)PTR_strcpy_00423600;
      if ((iVar3 == 0) && (*(char *)(param_1 + 10) == '_')) {
        if (4 < *(char *)(param_1 + 9) + -0x30) goto LAB_00401efc;
        *(int *)PTR_vwlan_idx_0042355c = *(char *)(param_1 + 9) + -0x2f;
        param_1 = param_1 + 0xb;
      }
      else {
        iVar3 = (*(code *)PTR_memcmp_0042352c)(param_1 + 6,&DAT_00410dec,3);
        pcVar9 = (code *)PTR_strcpy_00423600;
        if ((iVar3 == 0) && (*(char *)(param_1 + 9) == '_')) {
          *(undefined4 *)PTR_vwlan_idx_0042355c = 5;
          goto LAB_00401e24;
        }
        param_1 = param_1 + 6;
      }
    }
    (*pcVar9)(auStack_88,param_1);
    iVar3 = DAT_00423630 + 1;
  }
LAB_00401f80:
  iVar8 = DAT_00423630;
  puVar1 = PTR_mib_table_0042358c;
  puVar2 = PTR_hwmib_table_00423580;
  if (DAT_00423630 == 1) {
    iVar8 = 0;
    piVar7 = (int *)PTR_hwmib_table_00423580;
    do {
      iVar6 = iVar8;
      puVar1 = PTR_hwmib_wlan_table_004234e8;
      iVar8 = *piVar7;
      piVar7 = piVar7 + 0xf;
      if (iVar8 == 0) {
        iVar8 = 0;
        piVar7 = (int *)PTR_hwmib_wlan_table_004234e8;
        do {
          iVar6 = iVar8;
          iVar8 = *piVar7;
          piVar7 = piVar7 + 0xf;
          if (iVar8 == 0) {
            return -1;
          }
          iVar4 = (*(code *)PTR_strcmp_004234ec)(puVar1 + iVar6 * 0x3c + 4,auStack_88);
          iVar8 = iVar6 + 1;
        } while (iVar4 != 0);
        iVar8 = 2;
        DAT_00423630 = 2;
        goto joined_r0x00402048;
      }
      iVar4 = (*(code *)PTR_strcmp_004234ec)(puVar2 + iVar6 * 0x3c + 4,auStack_88);
      iVar8 = iVar6 + 1;
    } while (iVar4 != 0);
    iVar8 = 1;
joined_r0x00402048:
    if (iVar3 == 0) {
      return iVar6;
    }
    if (iVar3 != iVar8) {
      return -1;
    }
    return iVar6;
  }
  iVar6 = 0;
  piVar7 = (int *)PTR_mib_table_0042358c;
  while (puVar2 = PTR_mib_wlan_table_004235e8, iVar4 = *piVar7, piVar7 = piVar7 + 0xf, iVar4 != 0) {
    iVar4 = (*(code *)PTR_strcmp_004234ec)(puVar1 + iVar6 * 0x3c + 4,auStack_88);
    if (iVar4 == 0) goto LAB_004020fc;
    iVar6 = iVar6 + 1;
  }
  iVar4 = 0;
  piVar7 = (int *)PTR_mib_wlan_table_004235e8;
  do {
    iVar6 = iVar4;
    iVar4 = *piVar7;
    piVar7 = piVar7 + 0xf;
    if (iVar4 == 0) {
      return -1;
    }
    iVar5 = (*(code *)PTR_strcmp_004234ec)(puVar2 + iVar6 * 0x3c + 4,auStack_88);
    iVar4 = iVar6 + 1;
  } while (iVar5 != 0);
  iVar8 = iVar8 + 1;
  DAT_00423630 = iVar8;
LAB_004020fc:
  if (iVar3 == 0) {
    return iVar6;
  }
  if (iVar8 == iVar3) {
    return iVar6;
  }
  return -1;
}


/* FUN_00402158 @ 00402158 */

void FUN_00402158(char *param_1)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = (*(code *)PTR_strlen_004234b4)();
  puVar1 = PTR___ctype_tolower_00423494;
  for (iVar3 = 0; iVar3 < iVar2; iVar3 = iVar3 + 1) {
    *param_1 = (char)*(undefined2 *)(*(int *)puVar1 + *param_1 * 2);
    param_1 = param_1 + 1;
  }
  return;
}


/* FUN_004021d4 @ 004021d4 */

undefined4 FUN_004021d4(int param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  char *pcVar7;
  int iVar8;
  
  iVar8 = param_1 + 4;
  iVar4 = (*(code *)PTR_atoi_004234b8)(iVar8);
  puVar3 = PTR_vwlan_idx_0042355c;
  puVar2 = PTR_wlan_idx_00423548;
  puVar1 = PTR_strlen_004234b4;
  if (0 < iVar4) {
    pcVar7 = "invalid wlan interface index number!";
LAB_004022ac:
    (*(code *)PTR_puts_004235c4)(pcVar7);
    return 0;
  }
  *(int *)PTR_wlan_idx_00423548 = iVar4;
  *(undefined4 *)puVar3 = 0;
  uVar5 = (*(code *)puVar1)(param_1);
  if ((((8 < uVar5) && (*(char *)(param_1 + 5) == '-')) && (*(char *)(param_1 + 6) == 'v')) &&
     (*(char *)(param_1 + 7) == 'a')) {
    iVar4 = (*(code *)PTR_atoi_004234b8)(param_1 + 8);
    puVar1 = PTR_atoi_004234b8;
    if (4 < iVar4) {
      pcVar7 = "invalid virtual wlan interface index number!";
      goto LAB_004022ac;
    }
    *(int *)puVar3 = iVar4 + 1;
    uVar6 = (*(code *)puVar1)(iVar8);
    *(undefined4 *)puVar2 = uVar6;
  }
  uVar5 = (*(code *)PTR_strlen_004234b4)(param_1);
  if (8 < uVar5) {
    if (*(char *)(param_1 + 5) != '-') {
      return 1;
    }
    iVar4 = (*(code *)PTR_memcmp_0042352c)(param_1 + 6,&DAT_00410e48,3);
    puVar1 = PTR_atoi_004234b8;
    if (iVar4 == 0) {
      *(undefined4 *)PTR_vwlan_idx_0042355c = 5;
      uVar6 = (*(code *)puVar1)(iVar8);
      *(undefined4 *)PTR_wlan_idx_00423548 = uVar6;
      return 1;
    }
  }
  return 1;
}


/* FUN_00402374 @ 00402374 */

void FUN_00402374(void)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  code *pcVar9;
  
  puVar3 = PTR_hwmib_table_00423580;
  puVar2 = PTR_hwmib_wlan_table_004234e8;
  DAT_00423630 = 0;
  while( true ) {
    uVar4 = DAT_00423630;
    uVar5 = DAT_00423630 + 1;
    bVar1 = 6 < DAT_00423630;
    DAT_00423630 = uVar5;
    if (bVar1) break;
    if (uVar4 < 2) {
      piVar7 = (int *)puVar2;
      if (uVar5 == 1) {
        piVar7 = (int *)puVar3;
      }
      while (*piVar7 != 0) {
        (*(code *)PTR_printf_004235f4)("HW_%s\n",piVar7 + 1);
        piVar7 = piVar7 + 0xf;
      }
    }
    else {
      if ((uVar5 == 3) || (piVar7 = (int *)PTR_mib_wlan_table_004235e8, uVar5 == 5)) {
        piVar7 = (int *)PTR_mib_table_0042358c;
      }
      piVar6 = (int *)&DAT_00410de0;
      piVar8 = piVar7;
      pcVar9 = (code *)PTR_printf_004235f4;
      if (1 < uVar4 - 2) goto LAB_00402458;
      do {
        (*pcVar9)(piVar6);
        piVar8 = piVar7;
LAB_00402458:
        piVar7 = piVar8 + 0xf;
        piVar6 = piVar8 + 1;
        pcVar9 = (code *)PTR_puts_004235c4;
      } while (*piVar8 != 0);
    }
  }
  return;
}


/* FUN_004024b4 @ 004024b4 */

undefined4 FUN_004024b4(int param_1)

{
  uint uVar1;
  uint uVar2;
  char *pcVar3;
  int iVar4;
  undefined1 *puVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  char cVar9;
  char *pcVar10;
  char *pcVar11;
  char local_6f28 [4];
  int local_6f24;
  undefined1 auStack_6f20 [4];
  ushort local_6f1c;
  undefined1 auStack_6f18 [8];
  undefined1 auStack_6f10 [4];
  undefined1 local_6f0c;
  undefined1 local_6f0b;
  char local_6f00 [7];
  undefined1 auStack_6ef9 [5];
  undefined1 local_6ef4;
  undefined1 auStack_6ef3 [5];
  char local_6eee;
  undefined1 auStack_6eed [5];
  char local_6ee8;
  undefined1 auStack_6ee7 [5];
  char local_6ee2;
  undefined1 auStack_6ee1 [5];
  char local_6edc;
  undefined1 auStack_6edb [5];
  char local_6ed6;
  undefined1 auStack_6ed5 [5];
  char local_6ed0;
  undefined1 auStack_6ecf [5];
  char local_6eca;
  undefined1 auStack_6ec9 [5];
  char local_6ec4;
  undefined1 local_6ec3 [14];
  undefined1 local_6eb5 [14];
  undefined1 local_6ea7 [14];
  undefined1 local_6e99 [14];
  undefined1 local_6e8b [14];
  undefined1 local_6e7d [14];
  undefined1 local_6e6f [14];
  undefined1 local_6e61;
  undefined1 local_6e60;
  undefined1 local_6e5f;
  undefined1 local_6e5e;
  undefined1 local_6e5d;
  undefined1 local_6e5c;
  undefined1 local_6e5b;
  undefined1 local_6e59;
  undefined1 local_6e58;
  undefined1 local_6e57;
  undefined1 local_6e56;
  undefined1 local_6e50 [196];
  undefined1 local_6d8c [196];
  undefined1 local_6cc8 [196];
  undefined1 local_6c04 [196];
  undefined1 local_6b40 [196];
  undefined1 auStack_6a7c [12];
  char local_6a70 [1620];
  uint3 local_641c;
  undefined1 uStack_6419;
  undefined1 local_6418;
  undefined1 local_6417;
  undefined1 local_6416;
  undefined1 local_6415;
  undefined1 local_6414;
  undefined1 local_6413;
  undefined1 local_6412;
  undefined1 local_6411;
  undefined1 local_6410;
  undefined1 local_640f;
  undefined1 local_640e;
  uint3 local_630c;
  undefined1 uStack_6309;
  undefined1 local_6308;
  undefined1 local_6307;
  undefined1 local_6306;
  undefined1 local_6305;
  undefined1 local_6304;
  undefined1 local_6303;
  undefined1 local_6302;
  undefined1 local_6301;
  undefined1 local_6300;
  undefined1 local_62ff;
  undefined1 local_62fe;
  uint local_61bc;
  undefined4 local_61b8;
  undefined1 local_61b4;
  undefined1 local_61b3;
  undefined1 local_61b2;
  undefined1 local_61b1;
  undefined1 local_61b0;
  undefined1 local_61af;
  undefined1 local_61ae;
  undefined1 local_61ad;
  undefined1 auStack_6105 [5];
  undefined1 auStack_6100 [5];
  undefined1 auStack_60fb [5];
  undefined1 local_60f6;
  undefined1 local_60f5;
  undefined1 auStack_60f3 [8];
  undefined1 local_60eb;
  undefined1 local_60ea;
  undefined1 local_60e9;
  undefined1 local_60e8;
  undefined1 local_60e7;
  undefined1 local_60e6;
  undefined1 local_60e5;
  undefined1 local_60e4;
  undefined1 local_60e3;
  undefined1 local_60e2;
  undefined1 auStack_60e1 [133];
  undefined2 local_605c;
  undefined2 local_605a;
  undefined1 local_6058;
  undefined1 local_6030;
  undefined1 auStack_602f [67];
  undefined1 local_5fec;
  undefined1 local_5fac;
  undefined1 local_5fab;
  undefined1 local_5faa;
  uint local_5fa8;
  undefined4 local_5fa4;
  undefined1 local_5bc4;
  undefined1 local_5bc3;
  undefined1 local_579e;
  undefined1 local_579d;
  undefined1 local_5378;
  undefined1 local_5377;
  undefined1 local_5376;
  undefined1 auStack_5375 [19];
  undefined2 local_5362;
  undefined1 auStack_535f [17];
  undefined1 local_534e;
  undefined2 local_534c;
  undefined1 auStack_5349 [17];
  undefined1 local_5338;
  undefined2 local_5336;
  undefined1 auStack_5333 [17];
  undefined1 local_5322;
  undefined1 auStack_531d [22];
  undefined1 auStack_5307 [22];
  undefined1 auStack_52f1 [22];
  undefined1 auStack_52db [22];
  undefined1 auStack_52c5 [22];
  undefined1 auStack_52af [22];
  undefined1 auStack_5299 [22];
  undefined1 auStack_5283 [22];
  undefined1 auStack_526d [22];
  undefined1 auStack_5257 [22];
  undefined1 auStack_5241 [4008];
  undefined1 local_4299;
  undefined2 local_4298;
  undefined1 local_4259;
  undefined4 local_4258;
  undefined1 local_4254;
  undefined4 local_4253;
  undefined1 auStack_3c24 [33];
  undefined1 local_3c03;
  undefined1 local_3bfc;
  undefined4 local_3bb4;
  uint local_3bb0;
  undefined4 local_3bac;
  undefined4 local_3ba8;
  undefined1 local_3985;
  undefined4 local_386a;
  undefined1 local_3865;
  undefined1 local_3861;
  undefined1 local_3826;
  undefined1 local_3825;
  undefined4 local_37de;
  char local_37d6 [12939];
  undefined1 local_54b;
  undefined1 local_de;
  undefined1 local_dd;
  undefined1 auStack_5a [31];
  char acStack_3b [3];
  char *local_38;
  int local_34;
  int local_30;
  int local_2c;
  
  local_6f24 = 0;
  (*(code *)PTR_apmib_init_004234ac)();
  pcVar3 = (char *)(*(code *)PTR_calloc_00423570)(1,0xa000);
  if (pcVar3 == (char *)0x0) {
    pcVar3 = "Allocate buffer failed!";
    goto LAB_00402560;
  }
  iVar4 = (*(code *)PTR_open_004234b0)("/dev/mtdblock0",2);
  if (iVar4 == -1) {
    pcVar3 = "create file failed!";
    goto LAB_00402560;
  }
  if (param_1 != 0) {
    (*(code *)PTR_sprintf_004234e0)(auStack_6f20,"%s%02d",&DAT_00410e80,1);
    local_6f1c = 0x48e;
    (*(code *)PTR_memset_0042350c)(local_6f00,0,0x48d);
    local_6f00[0] = '\x01';
    (*(code *)PTR_memcpy_004235d4)(local_6f00 + 1,&DAT_004132d0,6);
    (*(code *)PTR_memcpy_004235d4)(auStack_6ef9,&DAT_004132d8,6);
    local_6ef4 = 0xc9;
    (*(code *)PTR_memcpy_004235d4)(auStack_6ef3,&DAT_004132d8,5);
    local_6eee = -0x3f;
    (*(code *)PTR_memcpy_004235d4)(auStack_6eed,&DAT_004132d8,5);
    local_6ee8 = local_6eee + '\x01';
    (*(code *)PTR_memcpy_004235d4)(auStack_6ee7,&DAT_004132d8,5);
    local_6ee2 = local_6eee + '\x02';
    (*(code *)PTR_memcpy_004235d4)(auStack_6ee1,&DAT_004132d8,5);
    local_6edc = local_6eee + '\x03';
    (*(code *)PTR_memcpy_004235d4)(auStack_6edb,&DAT_004132d8,5);
    local_6ed6 = local_6eee + '\x04';
    (*(code *)PTR_memcpy_004235d4)(auStack_6ed5,&DAT_004132d8,5);
    local_6ed0 = local_6eee + '\x05';
    (*(code *)PTR_memcpy_004235d4)(auStack_6ecf,&DAT_004132d8,5);
    local_6eca = local_6eee + '\x06';
    (*(code *)PTR_memcpy_004235d4)(auStack_6ec9,&DAT_004132d8,5);
    local_6e61 = 1;
    local_6e5e = 0;
    local_6ec4 = local_6eee + '\a';
    local_6e60 = 10;
    local_6e5f = 7;
    local_6e5b = 0;
    puVar5 = local_6ec3;
    do {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    } while (puVar5 != local_6eb5);
    puVar5 = local_6eb5;
    do {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    } while (puVar5 != local_6ea7);
    puVar5 = local_6ea7;
    do {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    } while (puVar5 != local_6e99);
    puVar5 = local_6e99;
    do {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    } while (puVar5 != local_6e8b);
    puVar5 = local_6e8b;
    do {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    } while (puVar5 != local_6e7d);
    puVar5 = local_6e7d;
    do {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    } while (puVar5 != local_6e6f);
    puVar5 = local_6e6f;
    do {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    } while (puVar5 != &local_6e61);
    local_6e5d = 0;
    local_6e5c = 0;
    puVar5 = local_6e50;
    do {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    } while (puVar5 != local_6d8c);
    puVar5 = local_6d8c;
    do {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    } while (puVar5 != local_6cc8);
    puVar5 = local_6cc8;
    do {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    } while (puVar5 != local_6c04);
    puVar5 = local_6c04;
    do {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    } while (puVar5 != local_6b40);
    puVar5 = local_6b40;
    do {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    } while (puVar5 != auStack_6a7c);
    local_6e59 = 0;
    local_6e58 = 0;
    local_6e57 = 0;
    local_6e56 = 0;
    iVar6 = FUN_004017c0(auStack_6f18,0x6000,6);
    if (iVar6 == 0) {
      (*(code *)PTR_puts_004235c4)("Read hw setting header failed!");
    }
    local_6f28[0] = '\0';
    for (iVar6 = 0; iVar6 < (int)(local_6f1c - 1); iVar6 = iVar6 + 1) {
      local_6f28[0] = local_6f28[0] + local_6f00[iVar6];
    }
    local_6f28[0] = -local_6f28[0];
    (*(code *)PTR_lseek_00423598)(iVar4,0x6000,0);
    iVar6 = (*(code *)PTR_write_00423568)(iVar4,auStack_6f20,6);
    if (iVar6 != 6) {
      pcVar3 = "write hs header failed!";
      goto LAB_00402560;
    }
    iVar6 = (*(code *)PTR_write_00423568)(iVar4,local_6f00,0x48d);
    if (iVar6 != 0x48d) {
      pcVar3 = "write hs MIB failed!";
      goto LAB_00402560;
    }
    iVar6 = (*(code *)PTR_write_00423568)(iVar4,local_6f28,1);
    if (iVar6 != 1) {
      pcVar3 = "write hs checksum failed!";
      goto LAB_00402560;
    }
    (*(code *)PTR_close_00423490)(iVar4);
    (*(code *)PTR_sync_00423534)();
    iVar4 = (*(code *)PTR_open_004234b0)("/dev/mtdblock0",2);
  }
  (*(code *)PTR_memset_0042350c)(local_6a70,0,0x6a35);
  (*(code *)PTR_strcpy_00423600)(local_6a70 + 0x2c,"Metering-Outlet");
  (*(code *)PTR_strcpy_00423600)(local_6a70 + 0x4d,"Realtek");
  pcVar10 = local_37d6 + 0x583;
  iVar6 = 0;
  do {
    if (iVar6 - 1U < 4) {
      (*(code *)PTR_sprintf_004234e0)(auStack_3c24 + iVar6 * 0x9e1,"RTK 11n AP VAP%d",iVar6);
LAB_00402bac:
      if (iVar6 != 5) {
LAB_00402bb4:
        pcVar10[-0x5ea] = '\v';
        pcVar10[-0x7d] = '\x01';
        pcVar10[-0x613] = '\x01';
      }
    }
    else {
      if (iVar6 == 0) {
        (*(code *)PTR_apmib_get_004235ac)(0xc9,auStack_6f10);
        (*(code *)PTR_sprintf_004234e0)
                  (auStack_3c24,"%s%02X%02X","Metering-Outlet",local_6f0c,local_6f0b);
        local_3bb0 = local_3bb0 & 0xffffff00 | 0xf;
        local_3ba8 = local_3ba8 & 0xffffff | 0x64000000;
        local_3bac = 0xff000f00;
        local_3c03 = 0xb;
        local_3861 = 1;
        local_3bfc = 0;
        local_3bb4._2_2_ = CONCAT11(1,(undefined1)local_3bb4);
        (*(code *)PTR_strcpy_00423600)(local_37d6 + 0x223,"0000000000");
        local_37d6[0x126] = 2;
        local_3bb0 = local_3bb0 & 0xff0000ff | 0x92b00;
        goto LAB_00402bb4;
      }
      if (iVar6 != 5) goto LAB_00402bac;
      local_37d6[0x30d7] = 1;
      (*(code *)PTR_sprintf_004234e0)(local_37d6 + 0x2d17,"RTK 11n AP RPT%d",0);
      (*(code *)PTR_sprintf_004234e0)(auStack_602f,"RTK 11n AP RPT%d",0);
    }
    pcVar10[-0x954] = '\0';
    if (iVar6 == 5) {
      local_37d6[0x315d] = '\0';
      local_37d6[0x315e] = '\x01';
      local_37d6[0x315f] = 'Q';
      local_37d6[0x3160] = -0x80;
      local_37d6[0x3116] = 1;
      local_54b = 2;
      local_37d6[0x3115] = 2;
    }
    iVar7 = iVar6 * 0x9e1;
    local_37d6[iVar7] = '\a';
    local_37d6[iVar7 + 1] = '\x14';
    local_37d6[iVar7 + 0x91] = '\0';
    local_37d6[iVar7 + 0x92] = '\0';
    local_37d6[iVar7 + 0x11c] = '\0';
    local_37d6[iVar7 + 0x11d] = '\0';
    pcVar10[-0x464] = '\x03';
    local_37d6[iVar7 + 0x120] = '\0';
    local_37d6[iVar7 + 0x121] = '\x05';
    pcVar10[-0x461] = '\0';
    local_37d6[iVar7 + 0x124] = '\0';
    local_37d6[iVar7 + 0x123] = '\0';
    if (iVar6 == 5) {
      local_37d6[0x30d0] = '\x01';
    }
    else if (iVar6 != 0) {
      pcVar10[-0x618] = '\x01';
    }
    pcVar10[-0x74] = '\x01';
    pcVar10[-0x60f] = '\x01';
    if (iVar6 == 0) {
      local_3bb0 = local_3bb0 & 0xffffff | 0x2a000000;
      local_3bb4 = local_3bb4 & 0xffffff00 | 9;
      local_37d6[0x57c] = 1;
      local_37d6[0x57d] = 1;
      local_3ba8._2_2_ = CONCAT11(2,(undefined1)local_3ba8);
      local_37d6[0x57a] = 0;
      local_386a = 30000;
      local_3865 = 1;
      local_37de = 0x15180;
      local_3826 = 2;
      local_37d6[0x510] = 3;
      local_37d6[0x516] = 1;
      local_3825 = 1;
      local_37d6[0x512] = 1;
      local_37d6[0x513] = 1;
      local_37d6[0x515] = 1;
      local_38 = local_6a70;
      local_3985 = 10;
      local_2c = 0;
      local_34 = 0x1c;
      local_30 = 10;
      iVar7 = 0;
      do {
        local_2c = local_2c + 1;
        (*(code *)PTR_sprintf_004234e0)(local_38 + iVar7 + 0x30ec,"rule_%d",local_2c);
        iVar7 = local_2c * local_34;
      } while (local_2c != local_30);
    }
    iVar6 = iVar6 + 1;
    *pcVar10 = (char)DAT_00423440;
    pcVar10[1] = '\0';
    pcVar10[-2] = '\x01';
    pcVar10[-3] = '\x01';
    pcVar10[-1] = '\0';
    pcVar10[-0x612] = '\x01';
    pcVar10 = pcVar10 + 0x9e1;
  } while (iVar6 != 6);
  local_2c = 1;
  (*(code *)PTR_strcpy_00423600)(auStack_602f,local_37d6 + 0x2d17);
  local_6030 = local_37d6[0x30d0] == '\0';
  local_6a70[0x10] = 200;
  local_6a70[0x14] = 0xdc;
  local_6a70[2] = (char)local_2c;
  local_6a70[0x11] = 0xc0;
  local_6a70[0] = -0x40;
  local_6a70[0xd] = 0xc0;
  local_6a70[0x12] = 0xa8;
  local_5fec = 2;
  local_6a70[1] = 0xa8;
  local_6a70[3] = 0xfe;
  local_6a70[4] = 0xff;
  local_6a70[5] = 0xff;
  local_6a70[6] = 0xff;
  local_6a70[7] = 0;
  local_6a70[0xe] = 0xa8;
  local_6a70[0xc] = 2;
  local_6a70[0xf] = local_6a70[2];
  local_6a70[0x13] = local_6a70[2];
  (*(code *)PTR_strcpy_00423600)(local_6a70 + 0x6c,"admin");
  (*(code *)PTR_strcpy_00423600)(local_6a70 + 0x8b,"000000");
  local_6a70[0xb0] = (char)local_2c;
  local_4258 = 0x200;
  local_4253 = 0x200;
  local_5fa8 = local_5fa8 & 0xffffff00 | 1;
  local_5fa4 = local_5fa4 & 0xffffff | 0x2c000000;
  local_61bc = local_61bc & 0xffffff00 | 1;
  local_61b8 = local_61b8 & 0xffffff | 0x2c000000;
  local_6a70[0x64c] = '\x01';
  local_6a70[0x64d] = ',';
  local_6a70[0xb1] = 0xac;
  local_6a70[0xb9] = 0xac;
  local_6a70[0xb5] = 0xff;
  local_6a70[0xb6] = 0xff;
  local_6a70[0xb7] = 0xff;
  local_6a70[0xb8] = 0;
  local_6a70[0xbc] = 0xfe;
  local_6a70[0x648] = '\0';
  local_6a70[0x649] = '\0';
  local_6a70[0x64a] = '\0';
  local_6a70[0x64b] = '\0';
  local_6a70[0xb2] = local_6a70[0xb0];
  local_6a70[0xb3] = local_6a70[0xb0];
  local_6a70[0xb4] = local_6a70[0xb0];
  local_6a70[0xba] = local_6a70[0xb0];
  local_6a70[0xbb] = local_6a70[0xb0];
  local_5fac = local_6a70[0xb0];
  local_5fab = local_6a70[0xb0];
  local_5faa = local_6a70[0xb0];
  local_4259 = local_6a70[0xb0];
  local_4254 = local_6a70[0xb0];
  (*(code *)PTR_strcpy_00423600)(auStack_6100,&DAT_00410f58);
  (*(code *)PTR_strcpy_00423600)(auStack_6105,&DAT_00410fac);
  uVar1 = (uint)_local_641c >> 8;
  uVar2 = (uint)_local_630c >> 8;
  local_6418 = (undefined1)local_2c;
  local_61b1 = 0xac;
  _local_641c = CONCAT31((uint3)uVar1 & 0xff0000 | 0x5ac,0xac);
  local_6411 = 0xac;
  _local_630c = CONCAT31((uint3)uVar2 & 0xff0000 | 0x5b4,0xac);
  local_6306 = 2;
  local_6303 = 0xff;
  local_61b2 = 0xfe;
  local_6416 = 2;
  local_6415 = 0xff;
  local_6414 = 0xff;
  local_6413 = 0xff;
  local_6412 = 0;
  local_61ae = 0xfe;
  local_61ad = 0;
  local_6305 = 0xff;
  local_6304 = 0xff;
  local_6302 = 0;
  local_61bc = local_61bc & 0xff0000ff | 0x5b400;
  local_6301 = 0xac;
  local_61b8 = CONCAT22(local_61b8._0_2_,0xac);
  local_6417 = local_6418;
  local_6410 = local_6418;
  local_640f = local_6418;
  local_640e = local_6418;
  local_6308 = local_6418;
  local_6307 = local_6418;
  local_6300 = local_6418;
  local_62ff = local_6418;
  local_62fe = local_6418;
  local_61b4 = local_6418;
  local_61b3 = local_6418;
  local_61b0 = local_6418;
  local_61af = local_6418;
  (*(code *)PTR_strcpy_00423600)(auStack_60fb,&DAT_00410f5c);
  local_605a = 0x5dc;
  local_605c = 0x5dc;
  local_60f6 = 0;
  local_60f5 = 0;
  (*(code *)PTR_strcpy_00423600)(auStack_60f3,&DAT_00410f64);
  local_60eb = 0;
  local_60ea = 0;
  local_60e9 = 0;
  local_60e8 = 0;
  local_60e7 = 0;
  local_60e6 = 0;
  local_60e5 = 0;
  local_60e4 = 0;
  local_60e3 = 0;
  local_60e2 = 0;
  (*(code *)PTR_strcpy_00423600)(auStack_60e1,"host.dyndns.org");
  local_4299 = 0;
  local_de = (undefined1)local_2c;
  local_4298 = 0;
  puVar5 = &local_5376;
  iVar6 = 0;
  do {
    iVar7 = iVar6 + 1;
    *puVar5 = 0;
    (&local_5362)[iVar6 * 0xb] = 1;
    puVar5[0x13] = 0;
    puVar5 = puVar5 + 0x16;
    iVar6 = iVar7;
  } while (iVar7 != 0x10);
  local_5377 = 0x10;
  local_5378 = 0;
  (*(code *)PTR_strcpy_00423600)(auStack_5375,&DAT_00410f7c);
  (*(code *)PTR_strcpy_00423600)(auStack_535f,&DAT_00410f84);
  (*(code *)PTR_strcpy_00423600)(auStack_5349,&DAT_00410f8c);
  (*(code *)PTR_strcpy_00423600)(auStack_5333,&DAT_00410f94);
  (*(code *)PTR_strcpy_00423600)(auStack_531d,"wlan0");
  (*(code *)PTR_strcpy_00423600)(auStack_5307,&DAT_00410fa4);
  (*(code *)PTR_strcpy_00423600)(auStack_52f1,"wlan0-va1");
  (*(code *)PTR_strcpy_00423600)(auStack_52db,"wlan0-va2");
  (*(code *)PTR_strcpy_00423600)(auStack_52c5,"wlan0-va3");
  (*(code *)PTR_strcpy_00423600)(auStack_52af,"wlan1");
  (*(code *)PTR_strcpy_00423600)(auStack_5299,"wlan1-va0");
  (*(code *)PTR_strcpy_00423600)(auStack_5283,"wlan1-va1");
  (*(code *)PTR_strcpy_00423600)(auStack_526d,"wlan1-va2");
  (*(code *)PTR_strcpy_00423600)(auStack_5257,"wlan1-va3");
  (*(code *)PTR_strcpy_00423600)(auStack_5241,&DAT_0041100c);
  local_5362 = 0xbce;
  local_534e = 7;
  local_534c = 0xbd6;
  local_5336 = 500;
  local_5322 = 3;
  local_4258 = 0x200;
  local_5338 = 0;
  local_4253 = 0x200;
  local_6058 = 1;
  local_5fa4._2_2_ = CONCAT11(2,(undefined1)local_5fa4);
  local_dd = 0;
  local_5bc4 = 0;
  local_5bc3 = 0;
  local_579e = 0;
  local_579d = 0;
  (*(code *)PTR_apmib_get_004235ac)(0xc9,auStack_6f10);
  (*(code *)PTR_sprintf_004234e0)(auStack_5a,"%s%02X%02X","Metering-Outlet",local_6f0c,local_6f0b);
  (*(code *)PTR_apmib_get_004235ac)(0x17,auStack_6f10);
  (*(code *)PTR_memcpy_004235d4)(local_6a70 + 0x19,auStack_6f10,6);
  local_6030 = 0;
  local_34 = (*(code *)PTR_mib_get_setting_len_0042359c)(2);
  local_34 = local_34 << 2;
  local_6f24 = 0;
  iVar6 = (*(code *)PTR_malloc_004235b8)(local_34);
  (*(code *)PTR_memset_0042350c)(iVar6,0,local_34);
  if ((iVar6 == 0) ||
     (iVar7 = (*(code *)PTR_mib_tlv_save_00423500)(2,local_6a70,iVar6,&local_6f24), iVar7 != 1)) {
LAB_004034c8:
    (*(code *)PTR_sprintf_004234e0)(auStack_6f20,"%s%02d",&DAT_00411014,1);
    local_6f1c = 0x6a36;
    pcVar10 = local_6a70;
    local_6f28[0] = '\0';
    do {
      cVar9 = *pcVar10;
      pcVar10 = pcVar10 + 1;
      local_6f28[0] = local_6f28[0] + cVar9;
    } while (pcVar10 != acStack_3b);
    pcVar10 = local_6a70;
    pcVar11 = (char *)0x0;
  }
  else {
    pcVar10 = (char *)(*(code *)PTR_malloc_004235b8)(local_6f24 + 1);
    if (pcVar10 != (char *)0x0) {
      (*(code *)PTR_memcpy_004235d4)(pcVar10,iVar6,local_6f24);
    }
    (*(code *)PTR_free_0042348c)(iVar6);
    if (pcVar10 == (char *)0x0) goto LAB_004034c8;
    (*(code *)PTR_sprintf_004234e0)(auStack_6f20,"%s%02d",&DAT_00411014,1);
    local_6f1c = (ushort)(local_6f24 + 1U);
    local_6f28[0] = '\0';
    for (iVar6 = 0; iVar6 < (int)((local_6f24 + 1U & 0xffff) - 1); iVar6 = iVar6 + 1) {
      local_6f28[0] = local_6f28[0] + pcVar10[iVar6];
    }
    cVar9 = '\0';
    for (iVar6 = 0; iVar6 < local_6f24; iVar6 = iVar6 + 1) {
      cVar9 = cVar9 + pcVar10[iVar6];
    }
    pcVar10[local_6f24] = -cVar9;
    pcVar11 = pcVar10;
  }
  local_6f28[0] = -local_6f28[0];
  (*(code *)PTR_lseek_00423598)(iVar4,0x8000,0);
  (*(code *)PTR_apmib_sem_lock_004234c8)();
  iVar6 = FUN_004014b0(2,pcVar10,auStack_6f20,local_6f28);
  if (iVar6 != 1) {
    iVar6 = (*(code *)PTR_write_00423568)(iVar4,auStack_6f20,6);
    if (iVar6 != 6) {
      pcVar3 = "write ds header failed!";
      goto LAB_00402560;
    }
    iVar6 = (*(code *)PTR_write_00423568)(iVar4,local_6a70,0x6a35);
    if (iVar6 != 0x6a35) {
      pcVar3 = "write ds MIB failed!";
      goto LAB_00402560;
    }
    iVar6 = (*(code *)PTR_write_00423568)(iVar4,local_6f28,1);
    if (iVar6 != 1) {
      pcVar3 = "write ds checksum failed!";
      goto LAB_00402560;
    }
  }
  (*(code *)PTR_close_00423490)(iVar4);
  (*(code *)PTR_sync_00423534)();
  (*(code *)PTR_apmib_sem_unlock_004234f8)();
  uVar8 = (*(code *)PTR_open_004234b0)("/dev/mtdblock0",2);
  if (pcVar11 == (char *)0x0) {
    (*(code *)PTR_sprintf_004234e0)(auStack_6f20,"%s%02d",&DAT_00411064,1);
    local_6f1c = 0x6a36;
  }
  else {
    (*(code *)PTR_sprintf_004234e0)(auStack_6f20,"%s%02d",&DAT_00411064,1);
    local_6f28[0] = '\0';
    local_6f1c = (ushort)(local_6f24 + 1U);
    for (iVar4 = 0; iVar4 < (int)((local_6f24 + 1U & 0xffff) - 1); iVar4 = iVar4 + 1) {
      local_6f28[0] = local_6f28[0] + pcVar10[iVar4];
    }
    local_6f28[0] = -local_6f28[0];
  }
  (*(code *)PTR_lseek_00423598)(uVar8,0xc000,0);
  (*(code *)PTR_apmib_sem_lock_004234c8)();
  iVar4 = FUN_004014b0(4,pcVar10,auStack_6f20,local_6f28);
  if (iVar4 != 1) {
    iVar4 = (*(code *)PTR_write_00423568)(uVar8,auStack_6f20,6);
    if (iVar4 != 6) {
      pcVar3 = "write cs header failed!";
      goto LAB_00402560;
    }
    iVar4 = (*(code *)PTR_write_00423568)(uVar8,local_6a70,0x6a35);
    if (iVar4 != 0x6a35) {
      pcVar3 = "write cs MIB failed!";
      goto LAB_00402560;
    }
    iVar4 = (*(code *)PTR_write_00423568)(uVar8,local_6f28,1);
    if (iVar4 != 1) {
      pcVar3 = "write cs checksum failed!";
      goto LAB_00402560;
    }
  }
  (*(code *)PTR_close_00423490)(uVar8);
  (*(code *)PTR_sync_00423534)();
  (*(code *)PTR_apmib_sem_unlock_004234f8)();
  iVar4 = FUN_004017c0(auStack_6f20,0x6000,6);
  if (iVar4 == 0) {
    pcVar3 = "read hs header failed!";
  }
  else {
    iVar4 = FUN_004017c0(pcVar3,0x6006,local_6f1c);
    if (iVar4 == 0) {
      pcVar3 = "read hs MIB failed!";
    }
    else {
      cVar9 = '\0';
      for (pcVar10 = pcVar3; pcVar10 != pcVar3 + local_6f1c; pcVar10 = pcVar10 + 1) {
        cVar9 = cVar9 + *pcVar10;
      }
      if (cVar9 == '\0') {
        iVar4 = FUN_0040188c(0x8000);
        if (iVar4 != 1) {
          iVar4 = FUN_004017c0(auStack_6f20,0x8000,6);
          if (iVar4 == 0) {
            pcVar3 = "read ds header failed!";
            goto LAB_00402560;
          }
          iVar4 = FUN_004017c0(pcVar3,0x8006,local_6f1c);
          cVar9 = '\0';
          if (iVar4 == 0) {
            pcVar3 = "read ds MIB failed!";
            goto LAB_00402560;
          }
          for (pcVar10 = pcVar3; pcVar10 != pcVar3 + local_6f1c; pcVar10 = pcVar10 + 1) {
            cVar9 = cVar9 + *pcVar10;
          }
          if (cVar9 != '\0') {
            pcVar3 = "ds Checksum error!";
            goto LAB_00402560;
          }
        }
        iVar4 = FUN_0040188c(0xc000);
        if (iVar4 == 1) {
LAB_004039b4:
          (*(code *)PTR_free_0042348c)(pcVar3);
          (*(code *)PTR_apmib_sem_lock_004234c8)();
          (*(code *)PTR_apmib_load_hwconf_004235ec)();
          (*(code *)PTR_apmib_load_dsconf_0042357c)();
          (*(code *)PTR_apmib_load_csconf_004235d8)();
          (*(code *)PTR_apmib_sem_unlock_004234f8)();
          return 0;
        }
        iVar4 = FUN_004017c0(auStack_6f20,0xc000,6);
        if (iVar4 == 0) {
          pcVar3 = "read cs header failed!";
        }
        else {
          iVar4 = FUN_004017c0(pcVar3,0xc006,local_6f1c);
          if (iVar4 == 0) {
            pcVar3 = "read cs MIB failed!";
          }
          else {
            cVar9 = '\0';
            for (pcVar10 = pcVar3; pcVar10 != pcVar3 + local_6f1c; pcVar10 = pcVar10 + 1) {
              cVar9 = cVar9 + *pcVar10;
            }
            if (cVar9 == '\0') goto LAB_004039b4;
            pcVar3 = "cs Checksum error!";
          }
        }
      }
      else {
        pcVar3 = "hs Checksum error!";
      }
    }
  }
LAB_00402560:
  (*(code *)PTR_puts_004235c4)(pcVar3);
  return 0xffffffff;
}


/* FUN_00403a94 @ 00403a94 */

undefined4 FUN_00403a94(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  char local_1c0 [100];
  char local_15c [100];
  char local_f8 [200];
  int local_30;
  
  local_30 = param_1;
  iVar2 = (*(code *)PTR_apmib_init_004234ac)();
  if (iVar2 == 0) {
    (*(code *)PTR_puts_004235c4)("Initialize AP MIB failed!");
  }
  else {
    if (local_30 == 0) {
      (*(code *)PTR_apmib_get_004235ac)(0x94,local_1c0);
      uVar4 = 0x95;
    }
    else {
      (*(code *)PTR_apmib_get_004235ac)(0x6a);
      uVar4 = 0x6b;
    }
    iVar5 = 0;
    (*(code *)PTR_apmib_get_004235ac)(uVar4,local_15c);
    for (iVar2 = 0; cVar1 = local_1c0[iVar2], cVar1 != '\0'; iVar2 = iVar2 + 1) {
      if (cVar1 == '\"') {
        local_f8[iVar5] = '\\';
        iVar5 = iVar5 + 1;
      }
      local_f8[iVar5] = cVar1;
      iVar5 = iVar5 + 1;
    }
    if (iVar5 != iVar2) {
      (*(code *)PTR_memcpy_004235d4)(local_1c0,local_f8,iVar5);
      local_1c0[iVar5] = '\0';
    }
    iVar5 = 0;
    for (iVar2 = 0; cVar1 = local_15c[iVar2], cVar1 != '\0'; iVar2 = iVar2 + 1) {
      if (cVar1 == '\"') {
        local_f8[iVar5] = '\\';
        iVar5 = iVar5 + 1;
      }
      local_f8[iVar5] = cVar1;
      iVar5 = iVar5 + 1;
    }
    if (iVar5 != iVar2) {
      (*(code *)PTR_memcpy_004235d4)(local_15c,local_f8,iVar5);
      local_15c[iVar5] = '\0';
    }
    iVar2 = (*(code *)PTR_fopen_00423510)(param_2,&DAT_0041318c);
    if (iVar2 != 0) {
      (*(code *)PTR_sprintf_004234e0)(local_f8,"name \"%s\"\n",local_1c0);
      (*(code *)PTR_fputs_004234a0)(local_f8,iVar2);
      uVar3 = (*(code *)PTR_strlen_004234b4)(local_15c);
      if (0x1f < uVar3) {
        (*(code *)PTR_strcpy_00423600)(local_f8,"-mschap\r\n");
        (*(code *)PTR_fputs_004234a0)(local_f8,iVar2);
        (*(code *)PTR_strcpy_00423600)(local_f8,"-mschap-v2\r\n");
        (*(code *)PTR_fputs_004234a0)(local_f8,iVar2);
      }
      (*(code *)PTR_fclose_004234fc)(iVar2);
      iVar2 = (*(code *)PTR_fopen_00423510)(param_3,&DAT_0041318c);
      param_2 = param_3;
      if (iVar2 != 0) {
        (*(code *)PTR_fputs_004234a0)("#################################################\n",iVar2);
        (*(code *)PTR_sprintf_004234e0)(local_f8,"\"%s\"\t*\t\"%s\"\n",local_1c0,local_15c);
        (*(code *)PTR_fputs_004234a0)(local_f8,iVar2);
        iVar2 = (*(code *)PTR_fopen_00423510)(param_4,&DAT_0041318c);
        param_2 = param_4;
        if (iVar2 != 0) {
          (*(code *)PTR_fputs_004234a0)("#################################################\n",iVar2)
          ;
          (*(code *)PTR_sprintf_004234e0)(local_f8,"\"%s\"\t*\t\"%s\"\n",local_1c0,local_15c);
          (*(code *)PTR_fputs_004234a0)(local_f8,iVar2);
          return 0;
        }
      }
    }
    (*(code *)PTR_printf_004235f4)("open file %s error!\n",param_2);
  }
  return 0xffffffff;
}


/* FUN_00403e9c @ 00403e9c */

void FUN_00403e9c(int param_1,int param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  int iVar2;
  undefined1 auStack_30 [20];
  
  *param_3 = 0;
  iVar2 = 0;
  while( true ) {
    puVar1 = (undefined1 *)(param_1 + iVar2);
    if (param_2 <= iVar2) break;
    iVar2 = iVar2 + 1;
    (*(code *)PTR_sprintf_004234e0)(auStack_30,"%02x",*puVar1);
    (*(code *)PTR_strcat_00423564)(param_3,auStack_30);
  }
  return;
}


/* FUN_00403f50 @ 00403f50 */

void FUN_00403f50(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = (*(code *)PTR_strlen_004234b4)(param_2);
  iVar2 = (*(code *)PTR_write_00423568)(param_1,param_2,uVar1);
  iVar3 = (*(code *)PTR_strlen_004234b4)(param_2);
  if (iVar2 != iVar3) {
    (*(code *)PTR_puts_004235c4)("Write WPA config file error!");
    (*(code *)PTR_close_00423490)(param_1);
    (*(code *)PTR_exit_004234c4)(1);
    return;
  }
  return;
}


/* FUN_00404014 @ 00404014 */

void FUN_00404014(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  code *pcVar6;
  int local_830;
  int local_82c;
  int local_828;
  int local_824;
  undefined4 local_820;
  undefined1 local_81c;
  undefined1 local_81b;
  undefined1 local_81a;
  undefined1 local_819;
  undefined1 local_818;
  undefined1 local_817;
  undefined1 local_816;
  undefined1 local_815;
  undefined1 local_814;
  char acStack_420 [1024];
  undefined4 *local_20;
  
  local_20 = param_1;
  iVar1 = (*(code *)PTR_apmib_init_004234ac)();
  if (iVar1 == 0) {
    pcVar3 = "Initialize AP MIB failed!";
    pcVar6 = (code *)PTR_puts_004235c4;
  }
  else {
    pcVar3 = (char *)(*(code *)PTR_open_004234b0)(local_20,0x302);
    if (pcVar3 == (char *)0xffffffff) {
      pcVar3 = "Create WPA config file error!";
      pcVar6 = (code *)PTR_puts_004235c4;
    }
    else {
      if (param_2 == 0) {
        (*(code *)PTR_apmib_get_004235ac)(0x19);
        (*(code *)PTR_sprintf_004234e0)(acStack_420,"encryption = %d\n",local_82c);
        FUN_00403f50(pcVar3,acStack_420);
        local_20 = &local_820;
        (*(code *)PTR_apmib_get_004235ac)(1,local_20);
        (*(code *)PTR_sprintf_004234e0)(acStack_420,"ssid = \"%s\"\n",local_20);
        FUN_00403f50(pcVar3,acStack_420);
        (*(code *)PTR_apmib_get_004235ac)(0x23,&local_828);
        (*(code *)PTR_sprintf_004234e0)(acStack_420,"enable1x = %d\n",local_828);
        FUN_00403f50(pcVar3,acStack_420);
        (*(code *)PTR_apmib_get_004235ac)(0x2d,&local_830);
        (*(code *)PTR_sprintf_004234e0)(acStack_420,"enableMacAuth = %d\n",local_830);
        FUN_00403f50(pcVar3,acStack_420);
        (*(code *)PTR_apmib_get_004235ac)(0x1a,&local_830);
        if (local_830 != 0) {
          (*(code *)PTR_apmib_get_004235ac)(0x1b,&local_830);
        }
        (*(code *)PTR_sprintf_004234e0)(acStack_420,"supportNonWpaClient = %d\n",local_830);
        FUN_00403f50(pcVar3,acStack_420);
        (*(code *)PTR_apmib_get_004235ac)(3,&local_824);
        (*(code *)PTR_sprintf_004234e0)(acStack_420,"wepKey = %d\n",local_824);
        FUN_00403f50(pcVar3,acStack_420);
        if ((local_82c == 1) && (local_828 != 0)) {
          if (local_824 == 1) {
            (*(code *)PTR_apmib_get_004235ac)(4);
            (*(code *)PTR_sprintf_004234e0)
                      (acStack_420,"wepGroupKey = \"%02x%02x%02x%02x%02x\"\n",local_820._0_1_,
                       local_820._1_1_,local_820 >> 8 & 0xff,local_820 & 0xff,local_81c);
          }
          else {
            (*(code *)PTR_apmib_get_004235ac)(8,&local_820);
            (*(code *)PTR_sprintf_004234e0)
                      (acStack_420,
                       "wepGroupKey = \"%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x\"\n",
                       local_820._0_1_,local_820._1_1_,local_820 >> 8 & 0xff,local_820 & 0xff,
                       local_81c,local_81b,local_81a,local_819,local_818,local_817,local_816,
                       local_815,local_814);
          }
        }
        else {
          (*(code *)PTR_strcpy_00423600)(acStack_420,"wepGroupKey = \"\"\n");
        }
        FUN_00403f50(pcVar3,acStack_420);
        (*(code *)PTR_apmib_get_004235ac)(0x1c,&local_830);
        (*(code *)PTR_sprintf_004234e0)(acStack_420,"authentication = %d\n",local_830);
        FUN_00403f50(pcVar3,acStack_420);
        (*(code *)PTR_apmib_get_004235ac)(0x1d,&local_830);
        (*(code *)PTR_sprintf_004234e0)(acStack_420,"unicastCipher = %d\n",local_830);
        FUN_00403f50(pcVar3,acStack_420);
        (*(code *)PTR_apmib_get_004235ac)(0x26,&local_830);
        (*(code *)PTR_sprintf_004234e0)(acStack_420,"wpa2UnicastCipher = %d\n",local_830);
        FUN_00403f50(pcVar3,acStack_420);
        (*(code *)PTR_apmib_get_004235ac)(0x25,&local_830);
        (*(code *)PTR_sprintf_004234e0)(acStack_420,"enablePreAuth = %d\n",local_830);
        FUN_00403f50(pcVar3,acStack_420);
        (*(code *)PTR_apmib_get_004235ac)(0x24,&local_830);
        if (local_830 == 0) {
          pcVar4 = "usePassphrase = 1\n";
        }
        else {
          pcVar4 = "usePassphrase = 0\n";
        }
        pcVar5 = acStack_420;
        (*(code *)PTR_strcpy_00423600)(acStack_420,pcVar4);
        FUN_00403f50(pcVar3,pcVar5);
        (*(code *)PTR_apmib_get_004235ac)(0x1e,&local_820);
        (*(code *)PTR_sprintf_004234e0)(acStack_420,"psk = \"%s\"\n",&local_820);
        FUN_00403f50(pcVar3,pcVar5);
        (*(code *)PTR_apmib_get_004235ac)(0x1f,&local_830);
        (*(code *)PTR_sprintf_004234e0)(acStack_420,"groupRekeyTime = %d\n",local_830);
        FUN_00403f50(pcVar3,pcVar5);
        (*(code *)PTR_apmib_get_004235ac)(0x5b6,&local_830);
        (*(code *)PTR_sprintf_004234e0)(acStack_420,"rsReAuthTO = %d\n",local_830);
        FUN_00403f50(pcVar3,pcVar5);
        (*(code *)PTR_apmib_get_004235ac)(0x21,&local_830);
        (*(code *)PTR_sprintf_004234e0)(acStack_420,"rsPort = %d\n",local_830);
        FUN_00403f50(pcVar3,pcVar5);
        (*(code *)PTR_apmib_get_004235ac)(0x20,&local_820);
        uVar2 = (*(code *)PTR_inet_ntoa_004234f4)(local_820);
        (*(code *)PTR_sprintf_004234e0)(acStack_420,"rsIP = %s\n",uVar2);
        FUN_00403f50(pcVar3,pcVar5);
        (*(code *)PTR_apmib_get_004235ac)(0x22,&local_820);
        (*(code *)PTR_sprintf_004234e0)(acStack_420,"rsPassword = \"%s\"\n",&local_820);
        FUN_00403f50(pcVar3,pcVar5);
        (*(code *)PTR_apmib_get_004235ac)(0x2e,&local_830);
        (*(code *)PTR_sprintf_004234e0)(acStack_420,"rsMaxReq = %d\n",local_830);
        FUN_00403f50(pcVar3,pcVar5);
        (*(code *)PTR_apmib_get_004235ac)(0x2f,&local_830);
        (*(code *)PTR_sprintf_004234e0)(acStack_420,"rsAWhile = %d\n",local_830);
        FUN_00403f50(pcVar3,pcVar5);
        (*(code *)PTR_apmib_get_004235ac)(0x27,&local_830);
        (*(code *)PTR_sprintf_004234e0)(acStack_420,"accountRsEnabled = %d\n",local_830);
        FUN_00403f50(pcVar3,pcVar5);
        (*(code *)PTR_apmib_get_004235ac)(0x29,&local_830);
        (*(code *)PTR_sprintf_004234e0)(acStack_420,"accountRsPort = %d\n",local_830);
        FUN_00403f50(pcVar3,pcVar5);
        (*(code *)PTR_apmib_get_004235ac)(0x28,&local_820);
        uVar2 = (*(code *)PTR_inet_ntoa_004234f4)(local_820);
        (*(code *)PTR_sprintf_004234e0)(acStack_420,"accountRsIP = %s\n",uVar2);
        FUN_00403f50(pcVar3,pcVar5);
        (*(code *)PTR_apmib_get_004235ac)(0x2a,&local_820);
        (*(code *)PTR_sprintf_004234e0)(acStack_420,"accountRsPassword = \"%s\"\n",&local_820);
        FUN_00403f50(pcVar3,pcVar5);
        (*(code *)PTR_apmib_get_004235ac)(0x2b,&local_830);
        (*(code *)PTR_sprintf_004234e0)(acStack_420,"accountRsUpdateEnabled = %d\n",local_830);
        FUN_00403f50(pcVar3,pcVar5);
        (*(code *)PTR_apmib_get_004235ac)(0x2c,&local_830);
        (*(code *)PTR_sprintf_004234e0)(acStack_420,"accountRsUpdateTime = %d\n",local_830);
        FUN_00403f50(pcVar3,pcVar5);
        (*(code *)PTR_apmib_get_004235ac)(0x30,&local_830);
        (*(code *)PTR_sprintf_004234e0)(acStack_420,"accountRsMaxReq = %d\n",local_830);
        FUN_00403f50(pcVar3,pcVar5);
        (*(code *)PTR_apmib_get_004235ac)(0x31,&local_830);
        (*(code *)PTR_sprintf_004234e0)(acStack_420,"accountRsAWhile = %d\n",local_830);
      }
      else {
        (*(code *)PTR_apmib_get_004235ac)(0x45,&local_82c);
        if (local_82c == 3) {
          local_82c = 2;
        }
        else if (local_82c != 4) {
          local_82c = 0;
        }
        (*(code *)PTR_sprintf_004234e0)(acStack_420,"encryption = %d\n",local_82c);
        FUN_00403f50(pcVar3,acStack_420);
        FUN_00403f50(pcVar3,"ssid = \"REALTEK\"\n");
        FUN_00403f50(pcVar3,"enable1x = 1\n");
        FUN_00403f50(pcVar3,"enableMacAuth = 0\n");
        FUN_00403f50(pcVar3,"supportNonWpaClient = 0\n");
        FUN_00403f50(pcVar3,"wepKey = 0\n");
        FUN_00403f50(pcVar3,"wepGroupKey = \"\"\n");
        FUN_00403f50(pcVar3,"authentication = 2\n");
        local_830 = 2;
        if (local_82c == 2) {
          local_830 = 1;
        }
        (*(code *)PTR_sprintf_004234e0)(acStack_420,"unicastCipher = %d\n",local_830);
        FUN_00403f50(pcVar3,acStack_420);
        (*(code *)PTR_sprintf_004234e0)(acStack_420,"wpa2UnicastCipher = %d\n",local_830);
        FUN_00403f50(pcVar3,acStack_420);
        FUN_00403f50(pcVar3,"enablePreAuth = 0\n");
        (*(code *)PTR_apmib_get_004235ac)(0x48,&local_830);
        if (local_830 == 0) {
          pcVar5 = "usePassphrase = 1\n";
        }
        else {
          pcVar5 = "usePassphrase = 0\n";
        }
        (*(code *)PTR_strcpy_00423600)(acStack_420,pcVar5);
        FUN_00403f50(pcVar3,acStack_420);
        local_20 = &local_820;
        (*(code *)PTR_apmib_get_004235ac)(0x49,local_20);
        (*(code *)PTR_sprintf_004234e0)(acStack_420,"psk = \"%s\"\n",local_20);
        FUN_00403f50(pcVar3,acStack_420);
        FUN_00403f50(pcVar3,"groupRekeyTime = 0\n");
        FUN_00403f50(pcVar3,"rsPort = 1812\n");
        FUN_00403f50(pcVar3,"rsIP = 192.168.1.1\n");
        FUN_00403f50(pcVar3,"rsPassword = \"\"\n");
        FUN_00403f50(pcVar3,"rsMaxReq = 3\n");
        FUN_00403f50(pcVar3,"rsAWhile = 10\n");
        FUN_00403f50(pcVar3,"accountRsEnabled = 0\n");
        FUN_00403f50(pcVar3,"accountRsPort = 1813\n");
        FUN_00403f50(pcVar3,"accountRsIP = 192.168.1.1\n");
        FUN_00403f50(pcVar3,"accountRsPassword = \"\"\n");
        FUN_00403f50(pcVar3,"accountRsUpdateEnabled = 0\n");
        FUN_00403f50(pcVar3,"accountRsUpdateTime = 1000\n");
        FUN_00403f50(pcVar3,"accountRsMaxReq = 3\n");
        pcVar5 = "accountRsAWhile = 1\n";
      }
      FUN_00403f50(pcVar3,pcVar5);
      pcVar6 = (code *)PTR_close_00423490;
    }
  }
  (*pcVar6)(pcVar3);
  return;
}


/* FUN_00404bf4 @ 00404bf4 */

undefined4 FUN_00404bf4(char *param_1,int param_2,int param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  int iVar3;
  char local_20;
  char local_1f;
  undefined1 local_1e;
  
  iVar3 = 0;
  while( true ) {
    if (param_3 <= iVar3 << 1) {
      return 1;
    }
    local_20 = *param_1;
    local_1f = param_1[1];
    if (((9 < (byte)(local_20 - 0x30U)) && (5 < (byte)(local_20 + 0xbfU))) &&
       (5 < (byte)(local_20 + 0x9fU))) break;
    param_1 = param_1 + 2;
    if (((9 < (byte)(local_1f - 0x30U)) && (5 < (byte)(local_1f + 0xbfU))) &&
       (5 < (byte)(local_1f + 0x9fU))) {
      return 0;
    }
    local_1e = 0;
    uVar1 = (*(code *)PTR_strtol_00423588)(&local_20,0,0x10);
    puVar2 = (undefined1 *)(param_2 + iVar3);
    iVar3 = iVar3 + 1;
    *puVar2 = uVar1;
  }
  return 0;
}


/* FUN_00404d14 @ 00404d14 */

undefined4 FUN_00404d14(int param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  undefined *puVar4;
  char *pcVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  uint uVar9;
  char *pcVar10;
  undefined4 uVar11;
  int *piVar12;
  undefined1 *puVar13;
  int iVar14;
  code *pcVar15;
  int local_990;
  int local_98c;
  int local_988;
  int local_984;
  int local_980;
  int local_97c;
  int local_978;
  int local_974;
  uint local_970;
  int local_96c;
  int local_968;
  uint local_964;
  undefined2 local_960;
  undefined1 auStack_95c [16];
  int *local_94c;
  undefined2 local_948;
  undefined1 auStack_93c [16];
  int *local_92c;
  undefined2 local_928;
  undefined1 local_91c [33];
  byte local_8fb;
  byte local_8fa;
  byte local_8f9;
  undefined1 auStack_8f8 [65];
  byte local_8b7;
  undefined1 auStack_8b6 [27];
  undefined1 auStack_89b [27];
  undefined1 auStack_880 [27];
  undefined1 auStack_865 [29];
  int local_848;
  undefined1 local_844;
  undefined4 local_842;
  undefined1 auStack_448 [1024];
  undefined1 *local_48;
  undefined1 *local_44;
  undefined1 *local_40;
  undefined1 *local_3c;
  undefined1 *local_38;
  int local_34;
  int local_30;
  
  local_97c = 0;
  local_978 = 0;
  local_974 = 0;
  pcVar5 = (char *)(*(code *)PTR_socket_004235a8)(2,1,0);
  if ((int)pcVar5 < 0) {
    pcVar5 = "socket() fail";
    pcVar15 = (code *)PTR_puts_004235c4;
    goto LAB_00404dec;
  }
  (*(code *)PTR_strncpy_0042353c)(auStack_95c,param_1,0x10);
  iVar6 = (*(code *)PTR_ioctl_004235f8)(pcVar5,0x8b01,auStack_95c);
  if (iVar6 < 0) {
    (*(code *)PTR_printf_004235f4)("Interface %s open failed!\n",param_1);
    pcVar15 = (code *)PTR_close_00423490;
    goto LAB_00404dec;
  }
  piVar7 = (int *)(*(code *)PTR_malloc_004235b8)(0x3340);
  if (piVar7 == (int *)0x0) {
    (*(code *)PTR_puts_004235c4)("MIB buffer allocation failed!");
    pcVar15 = (code *)PTR_close_00423490;
    goto LAB_00404dec;
  }
  iVar6 = (*(code *)PTR_apmib_init_004234ac)();
  if (iVar6 == 0) {
    pcVar10 = "Initialize AP MIB failed!";
    goto LAB_00406a8c;
  }
  (*(code *)PTR_sprintf_004234e0)(&local_848,"ifconfig %s down",param_1);
  (*(code *)PTR_system_004235bc)(&local_848);
  if (*(int *)PTR_vwlan_idx_0042355c == 0) {
    iVar6 = 0;
    do {
      (*(code *)PTR_sprintf_004234e0)(&local_848,"ifconfig %s-wds%d down",param_1,iVar6);
      iVar6 = iVar6 + 1;
      (*(code *)PTR_system_004235bc)(&local_848);
    } while (iVar6 != 8);
    (*(code *)PTR_sprintf_004234e0)(&local_848,"wlanapp.sh kill %s",param_1);
    (*(code *)PTR_system_004235bc)(&local_848);
LAB_00404fa4:
    if ((*(int *)PTR_vwlan_idx_0042355c == 0) &&
       ((*(code *)PTR_apmib_get_004235ac)(0xcd,&local_990), local_990 == 0)) {
      (*(code *)PTR_puts_004235c4)("RF type is NULL!");
      goto LAB_004051f8;
    }
    (*(code *)PTR_apmib_get_004235ac)(0x16,&local_990);
    if (local_990 == 1) goto LAB_004051f8;
    local_948 = 0x3340;
    if (*(int *)PTR_vwlan_idx_0042355c == 0) {
      puVar13 = auStack_95c;
    }
    else {
      local_928 = 0x3340;
      puVar13 = auStack_93c;
      local_92c = piVar7;
    }
    local_94c = piVar7;
    iVar6 = (*(code *)PTR_ioctl_004235f8)(pcVar5,0x8b42,puVar13);
    if (iVar6 < 0) {
      pcVar10 = "Get WLAN MIB failed!";
    }
    else if (*piVar7 == 0x16) {
      if (*(int *)PTR_vwlan_idx_0042355c < 1) {
LAB_004050d8:
        if (*(int *)PTR_vwlan_idx_0042355c == 0) {
          (*(code *)PTR_apmib_get_004235ac)(0xcc,&local_990);
          piVar7[0xf0] = local_990;
        }
        (*(code *)PTR_apmib_get_004235ac)(0x18,&local_964);
        iVar6 = (*(code *)PTR_memcmp_0042352c)(&local_964,&DAT_004132e0,6);
        if (iVar6 == 0) {
          iVar6 = *(int *)PTR_vwlan_idx_0042355c;
          if ((iVar6 < 1) || (iVar6 == 5)) {
            uVar11 = 0xcb;
          }
          else if (iVar6 == 2) {
            uVar11 = 0x130;
          }
          else if (iVar6 < 3) {
            if (iVar6 != 1) {
LAB_004051dc:
              (*(code *)PTR_printf_004235f4)("Fail to get MAC address of VAP%d!\n",iVar6 + -1);
LAB_004051f8:
              (*(code *)PTR_free_0042348c)(piVar7);
              (*(code *)PTR_close_00423490)(pcVar5);
              return 0;
            }
            uVar11 = 0x12f;
          }
          else if (iVar6 == 3) {
            uVar11 = 0x131;
          }
          else {
            if (iVar6 != 4) goto LAB_004051dc;
            uVar11 = 0x132;
          }
          (*(code *)PTR_apmib_get_004235ac)(uVar11,&local_964);
        }
        (*(code *)PTR_apmib_get_004235ac)(0xc0,&local_990);
        (*(code *)PTR_apmib_get_004235ac)(0xc1,&local_98c);
        (*(code *)PTR_sprintf_004234e0)(&local_848,"wlan%d",local_98c);
        iVar6 = *(int *)PTR_vwlan_idx_0042355c;
        if ((iVar6 != 5) &&
           (((local_990 != 2 ||
             (iVar8 = (*(code *)PTR_strcmp_004234ec)(&local_848,param_1), iVar8 != 0)) ||
            (0 < iVar6)))) {
          (*(code *)PTR_sprintf_004234e0)
                    (auStack_448,"ifconfig %s hw ether %02x%02x%02x%02x%02x%02x",param_1,
                     local_964._0_1_,local_964 >> 0x10 & 0xff,local_964 >> 8 & 0xff,local_964 & 0xff
                     ,local_960._0_1_,(undefined1)local_960);
          (*(code *)PTR_system_004235bc)(auStack_448);
          piVar7[0x1c3] = local_964;
          *(undefined2 *)(piVar7 + 0x1c4) = local_960;
        }
        if ((local_990 == 2) && (*(int *)PTR_vwlan_idx_0042355c == 0)) {
          piVar7[0x1d5] = 1;
        }
        (*(code *)PTR_apmib_get_004235ac)(0xd4,&local_990);
        puVar4 = PTR_apmib_get_004235ac;
        piVar7[0x1cc] = local_990;
        (*(code *)puVar4)(1,&local_848);
        local_98c = (*(code *)PTR_strlen_004234b4)(&local_848);
        piVar7[0xb] = local_98c;
        (*(code *)PTR_memset_0042350c)((int)piVar7 + 10,0,0x20);
        (*(code *)PTR_memcpy_004235d4)((int)piVar7 + 10,&local_848,local_98c);
        pcVar15 = (code *)PTR_memset_0042350c;
        if ((((piVar7[0xb] == 3) &&
             ((*(char *)((int)piVar7 + 10) == 'A' || (*(char *)((int)piVar7 + 10) == 'a')))) &&
            ((*(char *)((int)piVar7 + 0xb) == 'N' || (*(char *)((int)piVar7 + 0xb) == 'n')))) &&
           ((*(char *)(piVar7 + 3) == 'Y' || (*(char *)(piVar7 + 3) == 'y')))) {
          piVar7[0x1d] = 0;
          piVar12 = (int *)0x0;
          iVar6 = 0x20;
        }
        else {
          piVar7[0x1d] = local_98c;
          (*pcVar15)(piVar7 + 0x15,0,0x20);
          piVar12 = &local_848;
          iVar6 = local_98c;
          pcVar15 = (code *)PTR_memcpy_004235d4;
        }
        (*pcVar15)(piVar7 + 0x15,piVar12,iVar6);
        (*(code *)PTR_apmib_get_004235ac)(0x3b,&local_980);
        if (local_980 == 1) {
          (*(code *)PTR_apmib_get_004235ac)(0x3c,&local_98c);
          puVar4 = PTR_apmib_get_004235ac;
          if (local_98c == 0) {
            cVar1 = *(char *)(param_1 + 4);
            piVar7[0x1c5] = 8;
            iVar6 = cVar1 + -0x30;
            if (iVar6 == 0) {
              (*(code *)PTR_apmib_get_004235ac)(0x834);
              uVar11 = 0x835;
            }
            else {
              (*(code *)PTR_apmib_get_004235ac)(0x844,&local_96c);
              uVar11 = 0x847;
            }
            (*(code *)PTR_apmib_get_004235ac)(uVar11,&local_968);
            uVar9 = 0;
            if (local_96c != 0) {
              uVar9 = (uint)(local_968 != 0);
            }
            piVar7[0xa86] = uVar9;
            if ((local_96c != 0) && (local_968 != 0)) {
              (*(code *)PTR_printf_004235f4)("Init wireless[%d] profile...\r\n",iVar6);
              local_48 = auStack_8b6;
              local_44 = auStack_89b;
              local_40 = auStack_880;
              local_3c = auStack_865;
              local_38 = auStack_8f8;
              iVar8 = 1;
              piVar12 = piVar7;
              while( true ) {
                iVar14 = iVar8 + -1;
                uVar11 = 0x8836;
                if (local_968 <= iVar14) break;
                local_91c[0] = (undefined1)iVar8;
                if (iVar6 != 0) {
                  uVar11 = 0x8848;
                }
                iVar8 = iVar8 + 1;
                (*(code *)PTR_apmib_get_004235ac)(uVar11,local_91c);
                iVar3 = iVar14 * 0xb0;
                (*(code *)PTR_strcpy_00423600)(piVar7 + iVar14 * 0x2c + 0xa89,local_91c);
                piVar12[0xa93] = (uint)local_8fa;
                piVar12[0xa92] = (uint)local_8fb;
                piVar12[0xaa6] = (uint)local_8b7;
                (*(code *)PTR_memcpy_004235d4)(piVar7 + iVar14 * 0x2c + 0xaa7,local_48,0xd);
                (*(code *)PTR_memcpy_004235d4)((int)piVar7 + iVar3 + 0x2aa9,local_44,0xd);
                (*(code *)PTR_memcpy_004235d4)((int)piVar7 + iVar3 + 0x2ab6,local_40,0xd);
                (*(code *)PTR_memcpy_004235d4)((int)piVar7 + iVar3 + 0x2ac3,local_3c,0xd);
                piVar12[0xa94] = (uint)local_8f9;
                piVar12 = piVar12 + 0x2c;
                (*(code *)PTR_strcpy_00423600)(piVar7 + iVar14 * 0x2c + 0xa95,local_38);
              }
            }
            piVar7[0xa87] = local_968;
          }
          else {
            piVar7[0x1c5] = 0x20;
            (*(code *)puVar4)(0x3d,&local_848);
            local_98c = (*(code *)PTR_strlen_004234b4)(&local_848);
            piVar7[0x14] = local_98c;
            (*(code *)PTR_memset_0042350c)(piVar7 + 0xc,0,0x20);
            (*(code *)PTR_memcpy_004235d4)(piVar7 + 0xc,&local_848,local_98c);
          }
        }
        else {
          piVar7[0x1c5] = 0x10;
        }
        if (local_980 == 2) {
          piVar7[0x6dd] = 1;
        }
        else {
          piVar7[0x6dd] = 0;
        }
        puVar4 = PTR_apmib_get_004235ac;
        piVar7[0xed] = 0;
        (*(code *)puVar4)(0x34,&local_990);
        piVar7[0x2c] = local_990;
        if (local_990 != 0) {
          (*(code *)PTR_apmib_get_004235ac)(0x35,&local_990);
          iVar6 = 0;
          if (local_990 != 0) {
            piVar12 = piVar7 + 0x2d;
            while (bVar2 = iVar6 < local_990, iVar6 = iVar6 + 1, bVar2) {
              local_848 = CONCAT13((char)iVar6,local_848._1_3_);
              (*(code *)PTR_apmib_get_004235ac)(0x8036,&local_848);
              (*(code *)PTR_memcpy_004235d4)(piVar12,&local_848,6);
              piVar7[0xed] = piVar7[0xed] + 1;
              piVar12 = (int *)((int)piVar12 + 6);
            }
          }
        }
        if (*(int *)PTR_vwlan_idx_0042355c == 0) {
          (*(code *)PTR_apmib_get_004235ac)(0xcd,&local_990);
          puVar4 = PTR_apmib_get_004235ac;
          piVar7[0x1da] = local_990;
          (*(code *)puVar4)(200,&local_990);
          puVar4 = PTR_apmib_get_004235ac;
          iVar6 = 1;
          if (local_990 == 1) {
            iVar6 = 3;
          }
          else if (local_990 == 2) {
            iVar6 = 4;
          }
          piVar7[0x2f8] = iVar6;
          (*(code *)puVar4)(0x385,&local_848);
          (*(code *)PTR_memcpy_004235d4)(piVar7 + 0x1de,&local_848,0xe);
          (*(code *)PTR_apmib_get_004235ac)(0x386,&local_848);
          (*(code *)PTR_memcpy_004235d4)((int)piVar7 + 0x786,&local_848,0xe);
          (*(code *)PTR_apmib_get_004235ac)(0x387,&local_848);
          (*(code *)PTR_memcpy_004235d4)(piVar7 + 0x1e5,&local_848,0xe);
          (*(code *)PTR_apmib_get_004235ac)(0x388,&local_848);
          (*(code *)PTR_memcpy_004235d4)((int)piVar7 + 0x7a2,&local_848,0xe);
          (*(code *)PTR_apmib_get_004235ac)(0x389,&local_848);
          (*(code *)PTR_memcpy_004235d4)(piVar7 + 0x1ec,&local_848,0xe);
          (*(code *)PTR_apmib_get_004235ac)(0x38a,&local_848);
          (*(code *)PTR_memcpy_004235d4)((int)piVar7 + 0x7be,&local_848,0xe);
          (*(code *)PTR_apmib_get_004235ac)(0x38b,&local_848);
          (*(code *)PTR_memcpy_004235d4)(piVar7 + 499,&local_848,0xe);
          (*(code *)PTR_apmib_get_004235ac)(0x206,&local_990);
          puVar4 = PTR_apmib_get_004235ac;
          piVar7[0x2f3] = local_990;
          (*(code *)puVar4)(0x207,&local_990);
          puVar4 = PTR_apmib_get_004235ac;
          piVar7[0x2f4] = local_990;
          (*(code *)puVar4)(0x208,&local_990);
          puVar4 = PTR_apmib_get_004235ac;
          piVar7[0x2f5] = local_990;
          (*(code *)puVar4)(0x122,&local_990);
          puVar4 = PTR_apmib_get_004235ac;
          piVar7[0x2f2] = local_990;
          (*(code *)puVar4)(0x209,&local_990);
          puVar4 = PTR_apmib_get_004235ac;
          piVar7[0x2ef] = local_990;
          (*(code *)puVar4)(0x20a,&local_990);
          puVar4 = PTR_apmib_get_004235ac;
          *(char *)(piVar7 + 0x2fd) = (char)local_990;
          (*(code *)puVar4)(0x20b,&local_990);
          puVar4 = PTR_apmib_get_004235ac;
          *(char *)((int)piVar7 + 0xbf5) = (char)local_990;
          (*(code *)puVar4)(0x20c,&local_990);
          puVar4 = PTR_apmib_get_004235ac;
          piVar7[0x302] = local_990;
          (*(code *)puVar4)(0x20d,&local_990);
          piVar7[0x304] = local_990;
          if (piVar7[0x1da] == 10) {
            (*(code *)PTR_apmib_get_004235ac)(0x107,&local_990);
            if (local_990 == 1) {
              iVar6 = 3;
LAB_00405b88:
              local_990 = iVar6;
            }
            else {
              if (local_990 == 2) {
                iVar6 = 6;
                goto LAB_00405b88;
              }
              if (local_990 == 3) {
                iVar6 = 9;
                goto LAB_00405b88;
              }
              iVar6 = 0x11;
              if (local_990 == 4) goto LAB_00405b88;
            }
            if (local_990 != 0) {
              iVar6 = 0;
              piVar12 = piVar7;
              do {
                if (*(byte *)(piVar12 + 0x1de) != 0) {
                  iVar8 = (uint)*(byte *)(piVar12 + 0x1de) - local_990;
                  if (iVar8 < 1) {
                    *(undefined1 *)(piVar12 + 0x1de) = 1;
                  }
                  else {
                    *(char *)(piVar12 + 0x1de) = (char)iVar8;
                  }
                }
                if (*(byte *)((int)piVar12 + 0x786) != 0) {
                  iVar8 = (uint)*(byte *)((int)piVar12 + 0x786) - local_990;
                  if (iVar8 < 1) {
                    *(undefined1 *)((int)piVar12 + 0x786) = 1;
                  }
                  else {
                    *(char *)((int)piVar12 + 0x786) = (char)iVar8;
                  }
                }
                if (*(byte *)(piVar12 + 0x1e5) != 0) {
                  iVar8 = (uint)*(byte *)(piVar12 + 0x1e5) - local_990;
                  if (iVar8 < 1) {
                    *(undefined1 *)(piVar12 + 0x1e5) = 1;
                  }
                  else {
                    *(char *)(piVar12 + 0x1e5) = (char)iVar8;
                  }
                }
                if (*(byte *)((int)piVar12 + 0x7a2) != 0) {
                  iVar8 = (uint)*(byte *)((int)piVar12 + 0x7a2) - local_990;
                  if (iVar8 < 1) {
                    *(undefined1 *)((int)piVar12 + 0x7a2) = 1;
                  }
                  else {
                    *(char *)((int)piVar12 + 0x7a2) = (char)iVar8;
                  }
                }
                iVar6 = iVar6 + 1;
                piVar12 = (int *)((int)piVar12 + 1);
              } while (iVar6 != 0xe);
            }
          }
          (*(code *)PTR_apmib_get_004235ac)(0x10,&local_990);
          puVar4 = PTR_apmib_get_004235ac;
          piVar7[0x29] = local_990;
          (*(code *)puVar4)(2,&local_990);
          puVar4 = PTR_apmib_get_004235ac;
          *(char *)(piVar7 + 0x1db) = (char)local_990;
          (*(code *)puVar4)(0x13,&local_990);
          puVar4 = PTR_apmib_get_004235ac;
          piVar7[0x1c7] = local_990;
          (*(code *)puVar4)(0x8cc,&local_990);
          puVar4 = PTR_apmib_get_004235ac;
          piVar7[0x1c9] = local_990;
          (*(code *)puVar4)(0xe,&local_990);
          puVar4 = PTR_apmib_get_004235ac;
          piVar7[0x1c8] = local_990;
          (*(code *)puVar4)(0x32,&local_990);
          puVar4 = PTR_apmib_get_004235ac;
          piVar7[0x1cb] = local_990;
          (*(code *)puVar4)(0x11,&local_990);
          puVar4 = PTR_apmib_get_004235ac;
          piVar7[0x2ee] = local_990;
          (*(code *)puVar4)(0x3a,&local_990);
          puVar4 = PTR_apmib_get_004235ac;
          piVar7[0x2a] = local_990;
          (*(code *)puVar4)(0x286,&local_990);
          puVar4 = PTR_apmib_get_004235ac;
          piVar7[0x946] = local_990;
          (*(code *)puVar4)(0x288,&local_990);
          puVar4 = PTR_apmib_get_004235ac;
          piVar7[0x947] = local_990;
          (*(code *)puVar4)(0x287,&local_990);
          puVar4 = PTR_apmib_get_004235ac;
          piVar7[0x94f] = local_990;
          (*(code *)puVar4)(0x2ae,&local_990);
          puVar4 = PTR_apmib_get_004235ac;
          piVar7[0x76d] = local_990;
          (*(code *)puVar4)(0x1c2,&local_990);
          puVar4 = PTR_apmib_get_004235ac;
          piVar7[0x2ff] = local_990;
          (*(code *)puVar4)(0x3e,&local_990);
          if (local_990 == 0) {
            piVar7[0x1ce] = 1;
          }
          else {
            piVar7[0x1ce] = 0;
          }
          (*(code *)PTR_apmib_get_004235ac)(0x4e,&local_990);
          puVar4 = PTR_apmib_get_004235ac;
          piVar7[0xf5] = local_990;
          (*(code *)puVar4)(0x4c,&local_990);
          puVar4 = PTR_apmib_get_004235ac;
          piVar7[0x1cf] = local_990;
          (*(code *)puVar4)(0x104,&local_990);
          puVar4 = PTR_apmib_get_004235ac;
          piVar7[0x1d2] = local_990;
          (*(code *)puVar4)(0x3f,&local_990);
          (*(code *)PTR_apmib_get_004235ac)(0x40,&local_98c);
          piVar7[0x6f3] = 0;
          if (((local_980 - 2U < 2) && (local_990 != 0)) && (local_98c != 0)) {
            iVar6 = 0;
            while (iVar6 < local_98c) {
              local_848 = CONCAT13((char)(iVar6 + 1),local_848._1_3_);
              local_30 = iVar6;
              (*(code *)PTR_apmib_get_004235ac)(0x8041,&local_848);
              local_34 = iVar6 * 10;
              (*(code *)PTR_memcpy_004235d4)((int)piVar7 + local_34 + 0x1b7c,&local_848,6);
              *(undefined4 *)((int)piVar7 + local_34 + 0x1b82) = local_842;
              piVar7[0x6f3] = piVar7[0x6f3] + 1;
              (*(code *)PTR_sprintf_004234e0)
                        (auStack_448,"ifconfig %s-wds%d hw ether %02x%02x%02x%02x%02x%02x",param_1,
                         local_30,local_964 >> 0x18,local_964 >> 0x10 & 0xff,local_964 >> 8 & 0xff,
                         local_964 & 0xff,local_960._0_1_,(undefined1)local_960);
              (*(code *)PTR_system_004235bc)(auStack_448);
              iVar6 = iVar6 + 1;
            }
            piVar7[0x6dc] = local_990;
          }
          else {
            piVar7[0x6dc] = 0;
          }
          if ((local_980 - 2U < 2) && (local_990 != 0)) {
            (*(code *)PTR_apmib_get_004235ac)(0x45,&local_990);
            puVar4 = PTR_apmib_get_004235ac;
            if (local_990 == 0) {
              piVar7[0x6f4] = 0;
            }
            else {
              iVar6 = 2;
              if (local_990 == 1) {
                (*(code *)PTR_apmib_get_004235ac)(0x47,&local_848);
                uVar11 = 10;
                piVar7[0x6f4] = 1;
              }
              else {
                if (local_990 != 2) {
                  if (local_990 != 3) {
                    iVar6 = 4;
                  }
                  piVar7[0x6f4] = iVar6;
                  (*(code *)puVar4)(0x49,&local_848);
                  (*(code *)PTR_strcpy_00423600)(piVar7 + 0x746,&local_848);
                  goto LAB_004060d8;
                }
                (*(code *)PTR_apmib_get_004235ac)(0x47,&local_848);
                uVar11 = 0x1a;
                piVar7[0x6f4] = 5;
              }
              FUN_00404bf4(&local_848,piVar7 + 0x6f5,uVar11);
            }
          }
LAB_004060d8:
          (*(code *)PTR_apmib_get_004235ac)(0x3e,&local_990);
          if (local_990 == 0) {
            piVar7[0x1ce] = 1;
          }
          else {
            piVar7[0x1ce] = 0;
          }
          (*(code *)PTR_apmib_get_004235ac)(0x4d,&local_990);
          if ((local_990 == 1) && (local_980 == 1)) {
            piVar7[0x758] = 1;
          }
          else {
            piVar7[0x758] = 0;
          }
          (*(code *)PTR_apmib_get_004235ac)(0xc0,&local_990);
          if (local_990 == 2) {
            piVar7[0x757] = 0;
            piVar7[0x758] = 0;
          }
          puVar4 = PTR_apmib_get_004235ac;
          piVar7[0x7d7] = 0;
          (*(code *)puVar4)(0x11c,&local_97c);
          puVar4 = PTR_apmib_get_004235ac;
          piVar7[0x942] = local_97c;
          (*(code *)puVar4)(0x11d,&local_990);
          if (local_97c == 0) {
            piVar7[0x943] = 0;
          }
          else {
            if (local_990 == 0) {
              piVar7[0x943] = 1;
            }
            if (local_990 == 1) {
              piVar7[0x943] = 2;
            }
          }
          (*(code *)PTR_apmib_get_004235ac)(0x11f,&local_990);
          puVar4 = PTR_apmib_get_004235ac;
          piVar7[0x945] = local_990;
          piVar7[0x944] = local_990;
          (*(code *)puVar4)(0x11e,&local_978);
          if (local_978 == 0) {
            piVar7[0x948] = 0;
LAB_00406238:
            piVar7[0x949] = 0;
          }
          else {
            if (local_978 == 1) {
              piVar7[0x948] = 1;
              goto LAB_00406238;
            }
            if (local_978 == 2) {
              piVar7[0x949] = 1;
              piVar7[0x948] = 0;
            }
            else if (local_978 == 3) {
              piVar7[0x949] = 1;
              piVar7[0x948] = 1;
            }
          }
          puVar4 = PTR_vwlan_idx_0042355c;
          if ((piVar7[0x1c5] & 0x10U) == 0) {
LAB_004062fc:
            piVar7[0x781] = 0;
          }
          else {
            iVar6 = 0;
            *(undefined4 *)PTR_vwlan_idx_0042355c = 1;
            while (*(int *)puVar4 < 5) {
              (*(code *)PTR_apmib_get_004235ac)(0x16,&local_974);
              bVar2 = local_974 == 0;
              local_974 = 0;
              iVar6 = iVar6 + (uint)bVar2;
              *(int *)puVar4 = *(int *)puVar4 + 1;
            }
            *(undefined4 *)PTR_vwlan_idx_0042355c = 0;
            if ((iVar6 == 0) || ((local_980 != 0 && (local_980 != 3)))) goto LAB_004062fc;
            piVar7[0x781] = 1;
          }
          (*(code *)PTR_apmib_get_004235ac)(0x297,&local_990);
          piVar7[0xfa] = local_990;
        }
        if (*(int *)PTR_vwlan_idx_0042355c != 5) {
          (*(code *)PTR_apmib_get_004235ac)(0x12,&local_990);
          puVar4 = PTR_apmib_get_004235ac;
          piVar7[0xef] = local_990;
          (*(code *)puVar4)(0xf,&local_990);
          puVar4 = PTR_apmib_get_004235ac;
          piVar7[0xee] = local_990;
          (*(code *)puVar4)(0x33,&local_990);
          puVar4 = PTR_apmib_get_004235ac;
          if (local_990 == 0) {
            local_968 = 0;
            piVar7[0xf2] = 0;
            (*(code *)puVar4)(0x4b,&local_968);
            piVar7[0xf3] = local_968;
          }
          else {
            piVar7[0xf2] = 1;
          }
          (*(code *)PTR_apmib_get_004235ac)(0x15,&local_990);
          puVar4 = PTR_apmib_get_004235ac;
          piVar7[0x1c6] = local_990;
          (*(code *)puVar4)(0x4a,&local_990);
          if (((local_980 == 1) || (piVar7[0x1d2] != 1)) || (local_990 != 2)) {
            if (local_990 == 8) {
              iVar6 = 3;
            }
            else {
              if (local_990 == 2) {
                piVar7[0xf8] = 1;
                iVar6 = 3;
                goto LAB_00406490;
              }
              if (local_990 != 10) {
                iVar6 = local_990;
                if (local_990 != 0x40) goto LAB_00406474;
                iVar6 = 0xc;
                goto LAB_00406480;
              }
              iVar6 = 1;
            }
            piVar7[0xf8] = iVar6;
            iVar6 = 0xb;
          }
          else {
            iVar6 = 3;
LAB_00406474:
            if (iVar6 == 0x48) {
              iVar6 = 4;
LAB_00406480:
              piVar7[0xf8] = iVar6;
              iVar6 = 0x4c;
            }
            else {
              piVar7[0xf8] = 0;
            }
          }
LAB_00406490:
          puVar4 = PTR_apmib_get_004235ac;
          *(char *)(piVar7 + 0x6d4) = (char)iVar6;
          (*(code *)puVar4)(0x13b,&local_990);
          puVar4 = PTR_apmib_get_004235ac;
          piVar7[0x1d7] = local_990;
          (*(code *)puVar4)(0x59,&local_990);
          puVar4 = PTR_apmib_get_004235ac;
          piVar7[0x788] = local_990;
          (*(code *)puVar4)(0x8cd,&local_990);
          piVar7[0x789] = local_990;
        }
        (*(code *)PTR_apmib_get_004235ac)(0x14,&local_990);
        (*(code *)PTR_apmib_get_004235ac)(0x19,&local_988);
        if ((local_990 == 1) && (local_988 != 1)) {
          local_990 = 0;
        }
        piVar7[0x14b] = local_990;
        if (local_988 == 0) {
          *(undefined1 *)(piVar7 + 0x14c) = 0;
        }
        else if (local_988 == 1) {
          (*(code *)PTR_apmib_get_004235ac)(3,&local_984);
          puVar4 = PTR_apmib_get_004235ac;
          if (local_984 == 1) {
            *(undefined1 *)(piVar7 + 0x14c) = 1;
            (*(code *)puVar4)(4,&local_848);
            puVar4 = PTR_apmib_get_004235ac;
            piVar7[0x17b] = local_848;
            *(undefined1 *)(piVar7 + 0x17c) = local_844;
            (*(code *)puVar4)(5,&local_848);
            (*(code *)PTR_memcpy_004235d4)(piVar7 + 0x17f,&local_848,5);
            (*(code *)PTR_apmib_get_004235ac)(6,&local_848);
            (*(code *)PTR_memcpy_004235d4)(piVar7 + 0x183,&local_848,5);
            (*(code *)PTR_apmib_get_004235ac)(7,&local_848);
            uVar11 = 5;
          }
          else {
            *(undefined1 *)(piVar7 + 0x14c) = 5;
            (*(code *)puVar4)(8,&local_848);
            (*(code *)PTR_memcpy_004235d4)(piVar7 + 0x17b,&local_848,0xd);
            (*(code *)PTR_apmib_get_004235ac)(9,&local_848);
            (*(code *)PTR_memcpy_004235d4)(piVar7 + 0x17f,&local_848,0xd);
            (*(code *)PTR_apmib_get_004235ac)(10,&local_848);
            (*(code *)PTR_memcpy_004235d4)(piVar7 + 0x183,&local_848,0xd);
            (*(code *)PTR_apmib_get_004235ac)(0xb,&local_848);
            uVar11 = 0xd;
          }
          (*(code *)PTR_memcpy_004235d4)(piVar7 + 0x187,&local_848,uVar11);
          (*(code *)PTR_apmib_get_004235ac)(0xd,&local_990);
          piVar7[0x14d] = local_990;
        }
        else {
          *(undefined1 *)(piVar7 + 0x14c) = 2;
        }
        if ((0 < *(int *)PTR_vwlan_idx_0042355c) && (piVar7[0x1d7] != 0)) {
          piVar7[0x1cf] = 1;
        }
        iVar6 = 1;
        if (local_988 < 2) {
          (*(code *)PTR_apmib_get_004235ac)(0x23,&local_990);
          (*(code *)PTR_apmib_get_004235ac)(0x2d,&local_98c);
          if ((local_990 != 0) || (iVar6 = 0, local_98c != 0)) {
            iVar6 = 1;
          }
        }
        puVar4 = PTR_apmib_get_004235ac;
        piVar7[0x175] = iVar6;
        (*(code *)puVar4)(0x27,&local_990);
        puVar4 = PTR_apmib_get_004235ac;
        piVar7[0x178] = local_990;
        (*(code *)puVar4)(0x1c4,&local_968);
        (*(code *)PTR_apmib_get_004235ac)(0x1c5,&local_96c);
        puVar4 = PTR_apmib_get_004235ac;
        iVar6 = 5;
        if (local_968 == 0) {
          iVar6 = 4;
          if (local_96c == 0) {
            iVar6 = 0;
          }
        }
        else if (local_96c == 0) {
          iVar6 = 3;
        }
        piVar7[0x93e] = local_968 << 10;
        piVar7[0x8dc] = iVar6;
        piVar7[0x93f] = local_96c << 10;
        (*(code *)puVar4)(0x1c,&local_970);
        puVar4 = PTR_apmib_get_004235ac;
        if (((local_970 & 2) == 0) || (local_988 < 2)) {
          piVar7[0x14f] = 0;
        }
        else {
          if (local_988 == 2) {
            local_990 = 1;
          }
          else if (local_988 == 4) {
            local_990 = 2;
          }
          else {
            if (local_988 != 6) {
              pcVar5 = "invalid ENCRYPT value!";
              pcVar15 = (code *)PTR_puts_004235c4;
              goto LAB_00404dec;
            }
            local_990 = 3;
          }
          piVar7[0x14f] = local_990;
          (*(code *)puVar4)(0x1e,&local_848);
          (*(code *)PTR_strcpy_00423600)(piVar7 + 0x152,&local_848);
          (*(code *)PTR_apmib_get_004235ac)(0x1f,&local_990);
          piVar7[0x173] = local_990;
        }
        if ((local_970 != 0) && (1 < local_988)) {
          if ((local_988 == 2) || (local_988 == 6)) {
            (*(code *)PTR_apmib_get_004235ac)(0x1d,&local_98c);
            if (local_98c == 1) {
              local_990 = 2;
            }
            else if (local_98c == 2) {
              local_990 = 8;
            }
            else {
              if (local_98c != 3) {
                pcVar5 = "invalid WPA_CIPHER_SUITE value!";
                pcVar15 = (code *)PTR_puts_004235c4;
                goto LAB_00404dec;
              }
              local_990 = 10;
            }
            piVar7[0x150] = local_990;
          }
          if ((local_988 == 4) || (local_988 == 6)) {
            (*(code *)PTR_apmib_get_004235ac)(0x26,&local_98c);
            if (local_98c == 1) {
              local_990 = 2;
            }
            else if (local_98c == 2) {
              local_990 = 8;
            }
            else {
              if (local_98c != 3) {
                pcVar5 = "invalid WPA2_CIPHER_SUITE value!";
                pcVar15 = (code *)PTR_puts_004235c4;
                goto LAB_00404dec;
              }
              local_990 = 10;
            }
            piVar7[0x151] = local_990;
          }
        }
        local_948 = 0x3340;
        local_94c = piVar7;
        iVar6 = (*(code *)PTR_ioctl_004235f8)(pcVar5,0x8b43,auStack_95c);
        if (-1 < iVar6) {
          (*(code *)PTR_close_00423490)(pcVar5);
          (*(code *)PTR_free_0042348c)(piVar7);
          return 0;
        }
      }
      else {
        local_948 = 0x3340;
        local_94c = piVar7;
        iVar6 = (*(code *)PTR_ioctl_004235f8)(pcVar5,0x8b43,auStack_95c);
        if (-1 < iVar6) {
          piVar7[0x784] = 0;
          goto LAB_004050d8;
        }
      }
      pcVar10 = "Set WLAN MIB failed!";
    }
    else {
      pcVar10 = "WLAN MIB version mismatch!";
    }
LAB_00406a8c:
    (*(code *)PTR_puts_004235c4)(pcVar10);
  }
  else {
    (*(code *)PTR_sprintf_004234e0)(&local_848,"wlan%d",*(undefined4 *)PTR_wlan_idx_00423548);
    (*(code *)PTR_strncpy_0042353c)(auStack_93c,&local_848,0x10);
    iVar6 = (*(code *)PTR_ioctl_004235f8)(pcVar5,0x8b01,auStack_93c);
    if (-1 < iVar6) goto LAB_00404fa4;
    (*(code *)PTR_printf_004235f4)("Root Interface %s open failed!\n",&local_848);
  }
  (*(code *)PTR_free_0042348c)(piVar7);
  pcVar15 = (code *)PTR_close_00423490;
LAB_00404dec:
  (*pcVar15)(pcVar5);
  return 0xffffffff;
}


/* FUN_00406b10 @ 00406b10 */

undefined4 FUN_00406b10(uint param_1,undefined4 param_2)

{
  char *pcVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  uint uVar5;
  code *pcVar6;
  undefined4 local_188;
  uint local_184;
  undefined2 local_180;
  undefined2 local_17c;
  undefined2 local_17a;
  uint local_178;
  char local_171;
  undefined1 auStack_168 [11];
  byte local_15d;
  uint local_15c;
  undefined2 local_158;
  undefined1 auStack_154 [16];
  uint local_144;
  undefined4 local_134;
  uint local_130;
  undefined4 local_12c;
  char local_128 [8];
  char local_120 [240];
  uint local_30;
  
  pcVar1 = (char *)(*(code *)PTR_socket_004235a8)(0x11,1,0);
  if ((int)pcVar1 < 0) {
    pcVar1 = "\r\n  Get sock fail!";
    pcVar6 = (code *)PTR_printf_004235f4;
    goto LAB_00406fe4;
  }
  (*(code *)PTR_memset_0042350c)(auStack_154,0,0x20);
  (*(code *)PTR_strncpy_0042353c)(auStack_154,&DAT_0041100c,0xf);
  iVar2 = (*(code *)PTR_ioctl_004235f8)(pcVar1,0x8933,auStack_154);
  uVar5 = local_144;
  if (iVar2 < 0) {
    pcVar4 = "\r\n Interface %s not found";
LAB_00406c38:
    (*(code *)PTR_printf_004235f4)(pcVar4,&DAT_0041100c);
LAB_00406ff4:
    (*(code *)PTR_close_00423490)(pcVar1);
    uVar3 = 0;
  }
  else {
    iVar2 = (*(code *)PTR_ioctl_004235f8)(pcVar1,0x8913,auStack_154);
    if (iVar2 != 0) {
      pcVar4 = "\r\n SIOCGIFFLAGS";
      goto LAB_00406fcc;
    }
    if ((local_144 & 0x10000) == 0) {
      pcVar4 = "\r\n Interface %s is down";
      goto LAB_00406c38;
    }
    if ((local_144 & 0x880000) == 0) {
      pcVar4 = (char *)(*(code *)PTR_socket_004235a8)(2,1,0);
      if ((int)pcVar4 < 0) {
        pcVar4 = "\r\n socket";
        goto LAB_00406fcc;
      }
      iVar2 = (*(code *)PTR_setsockopt_00423558)(pcVar4,0xffff,0x19,&DAT_0041100c,5);
      if (iVar2 == -1) {
        (*(code *)PTR_printf_004235f4)("\r\n WARNING: interface %s is ignored",&DAT_0041100c);
      }
      local_130 = 0;
      local_12c = 0;
      local_128[0] = '\0';
      local_128[1] = '\0';
      local_128[2] = '\0';
      local_128[3] = '\0';
      local_134 = 0x20000;
      iVar2 = (*(code *)PTR_bind_00423560)(pcVar4,&local_134,0x10);
      if (iVar2 == -1) {
        (*(code *)PTR_fputs_004234a0)(&DAT_0041199c,*(undefined4 *)PTR_stderr_004234dc);
        (*(code *)PTR_close_00423490)(pcVar1);
        pcVar1 = pcVar4;
        pcVar6 = (code *)PTR_close_00423490;
        goto LAB_00406fe4;
      }
      (*(code *)PTR_close_00423490)(pcVar4);
      local_17c = 0x11;
      local_178 = uVar5;
      local_17a = 0x8864;
      iVar2 = (*(code *)PTR_bind_00423560)(pcVar1,&local_17c,0x14);
      if (iVar2 == -1) {
        pcVar4 = "\r\n bind";
      }
      else {
        local_188 = 0x14;
        iVar2 = (*(code *)PTR_getsockname_00423488)(pcVar1,&local_17c,&local_188);
        if (iVar2 != -1) {
          if (local_171 == '\0') {
            pcVar4 = "\r\n Interface \"%s\" is not ARPable (no ll address)";
            goto LAB_00406e08;
          }
          (*(code *)PTR_memcpy_004235d4)(auStack_168,&local_17c,0x14);
          (*(code *)PTR_memset_0042350c)(&local_15c,0xffffffff,local_15d);
          local_180 = 0;
          local_184 = 0;
          FUN_00404bf4(param_2,&local_184,0xc);
          uVar5 = (uint)local_15d;
          if ((uVar5 != 6) ||
             (local_30 = uVar5, iVar2 = (*(code *)PTR_memcmp_0042352c)(&local_184,&DAT_004132e0,6),
             uVar5 = local_30, iVar2 == 0)) {
            (*(code *)PTR_printf_004235f4)
                      ("%s(%d): wrong he.sll_halen(%d) or wrong peerMacAddr[%02x:%02x:%02x:%02x:%02x:%02x]!\n"
                       ,"send_ppp_msg",0x2dc7,uVar5,local_184 >> 0x18,local_184 >> 0x10 & 0xff,
                       local_184 >> 8 & 0xff,local_184 & 0xff,local_180._0_1_,(undefined1)local_180)
            ;
            pcVar6 = (code *)PTR_close_00423490;
            goto LAB_00406fe4;
          }
          local_15c = local_184;
          local_158 = local_180;
          local_120[0] = s_User_request_00411a4c[8];
          local_120[1] = s_User_request_00411a4c[9];
          local_120[2] = s_User_request_00411a4c[10];
          local_120[3] = s_User_request_00411a4c[0xb];
          local_134._1_3_ = (uint3)(byte)((param_1 & 0xffff) >> 8) << 8;
          local_134 = CONCAT13(0x11,local_134._1_3_);
          local_134 = CONCAT31(local_134._0_3_,(char)(param_1 & 0xffff));
          local_128[4] = s_User_request_00411a4c[4];
          local_128[5] = s_User_request_00411a4c[5];
          local_128[6] = s_User_request_00411a4c[6];
          local_128[7] = s_User_request_00411a4c[7];
          local_128[0] = s_User_request_00411a4c[0];
          local_128[1] = s_User_request_00411a4c[1];
          local_128[2] = s_User_request_00411a4c[2];
          local_128[3] = s_User_request_00411a4c[3];
          local_12c = CONCAT13(5,CONCAT12(2,DAT_004132e8));
          local_134._1_3_ = (uint3)local_134._2_2_;
          local_134 = CONCAT13(0x11,local_134._1_3_);
          local_130 = (uint)CONCAT12(0x12,DAT_00411a48);
          iVar2 = (*(code *)PTR_sendto_00423530)(pcVar1,&local_134,0x18,0,auStack_168,0x14);
          if ((iVar2 < 0) || (iVar2 != 0x18)) {
            (*(code *)PTR_printf_004235f4)("\r\n \r\n c = %d",iVar2);
            pcVar4 = "\r\n \r\n send_arp Fail!";
            goto LAB_00406fcc;
          }
          goto LAB_00406ff4;
        }
        pcVar4 = "\r\n getsockname";
      }
LAB_00406fcc:
      (*(code *)PTR_printf_004235f4)(pcVar4);
      pcVar6 = (code *)PTR_close_00423490;
    }
    else {
      pcVar4 = "\r\n Interface %s is not ARPable";
LAB_00406e08:
      (*(code *)PTR_printf_004235f4)(pcVar4,&DAT_0041100c);
      pcVar6 = (code *)PTR_close_00423490;
    }
LAB_00406fe4:
    (*pcVar6)(pcVar1);
    uVar3 = 0xffffffff;
  }
  return uVar3;
}


/* FUN_00407038 @ 00407038 */

undefined4
FUN_00407038(undefined2 param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined1 local_res0;
  undefined1 uStackX_1;
  int aiStack_68 [2];
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined2 local_44;
  undefined2 local_42;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined2 local_34;
  undefined2 local_32;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  iVar4 = -(param_2 + 0xeU & 0xfffffff8);
  local_48 = 1;
  local_58 = 0;
  FUN_00404bf4(param_4,&local_58,8);
  local_54 = 0;
  FUN_00404bf4(param_5,&local_54,8);
  local_50 = local_58;
  local_4c = local_54;
  FUN_00404bf4(param_3,&stack0xffffffa0 + iVar4,param_2 << 1);
  local_3c = 0;
  local_38 = 0;
  local_44 = 2;
  local_40 = 0;
  local_42 = 0x6a5;
  iVar1 = (*(code *)PTR_socket_004235a8)(2,1,0x11);
  *(undefined4 *)((int)aiStack_68 + iVar4) = 4;
  (*(code *)PTR_setsockopt_00423558)(iVar1,0xffff,4,&local_48);
  if (iVar1 < 0) {
    (*(code *)PTR_puts_004235c4)("Create Socket Failed!");
    uVar2 = (*(code *)PTR_exit_004234c4)(1);
    return uVar2;
  }
  iVar3 = (*(code *)PTR_bind_00423560)(iVar1,&local_44,0x10);
  if (iVar3 == -1) {
    (*(code *)PTR_perror_004235cc)(&DAT_0041199c);
    (*(code *)PTR_close_00423490)(iVar1);
  }
  else {
    local_res0 = (undefined1)((ushort)param_1 >> 8);
    *(undefined1 *)((int)&local_58 + iVar4) = local_res0;
    uStackX_1 = (undefined1)param_1;
    local_34 = 2;
    local_32 = 0x6a5;
    *(undefined1 *)((int)&local_58 + iVar4 + 1) = uStackX_1;
    uVar2 = local_4c;
    *(undefined2 **)((int)aiStack_68 + iVar4) = &local_34;
    local_30 = uVar2;
    *(undefined4 *)((int)aiStack_68 + iVar4 + 4) = 0x10;
    local_2c = 0;
    local_28 = 0;
    iVar4 = (*(code *)PTR_sendto_00423530)(iVar1,&stack0xffffffa0 + iVar4,param_2,0);
    if ((-1 < iVar4) && (iVar4 == param_2)) {
      (*(code *)PTR_close_00423490)(iVar1);
      return 0;
    }
    (*(code *)PTR_printf_004235f4)("\r\n \r\n l2tp sendto is failed: c = %d",iVar4);
  }
  return 0xffffffff;
}


/* FUN_0040727c @ 0040727c */

undefined4 FUN_0040727c(void)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  code *pcVar8;
  int local_1e0;
  int local_1dc;
  undefined1 auStack_1d8 [8];
  int local_1d0;
  int local_1cc;
  undefined1 auStack_1c8 [20];
  undefined1 auStack_1b4 [20];
  undefined1 auStack_1a0 [20];
  undefined1 auStack_18c [20];
  undefined1 auStack_178 [20];
  undefined1 auStack_164 [32];
  undefined1 auStack_144 [4];
  undefined1 auStack_140 [4];
  undefined1 auStack_13c [4];
  undefined4 local_138;
  int local_134;
  int local_130;
  undefined4 local_124;
  undefined4 local_118 [12];
  undefined1 auStack_e8 [200];
  int local_20;
  
  local_1e0 = 0;
  (*(code *)PTR_memcpy_004235d4)(local_118,&PTR_DAT_004233f8,0x30);
  iVar2 = (*(code *)PTR_apmib_init_004234ac)();
  if (iVar2 != 0) {
    (*(code *)PTR_set_timeZone_004235b0)();
    pcVar3 = (char *)(*(code *)PTR_fopen_00423510)("/proc/version","r");
    if (pcVar3 == (char *)0x0) {
      pcVar3 = "Read /proc/version failed!";
      pcVar8 = (code *)PTR_puts_004235c4;
    }
    else {
      (*(code *)PTR_fgets_004235dc)(auStack_e8,200,pcVar3);
      pcVar8 = (code *)PTR_fclose_004234fc;
    }
    (*pcVar8)(pcVar3);
    iVar2 = (*(code *)PTR_regcomp_00423518)(auStack_164,"#[0-9][0-9]* \\(.*\\)$",0);
    if (iVar2 == 0) {
      local_20 = (*(code *)PTR_regexec_004234f0)(auStack_164,auStack_e8,2,auStack_1d8,0);
      (*(code *)PTR_regfree_004234a8)(auStack_164);
      if ((local_20 == 0) && (-1 < local_1d0)) {
        auStack_e8[local_1cc] = 0;
      }
    }
    (*(code *)PTR_memset_0042350c)(auStack_144,0,0x2c);
    (*(code *)PTR_sscanf_00423524)
              (auStack_e8 + local_1d0,"%s %s %s %d:%d:%d %s %s",auStack_1c8,auStack_1b4,auStack_1a0,
               auStack_13c,auStack_140,auStack_144,auStack_178,auStack_18c);
    local_124 = 0xffffffff;
    puVar7 = local_118;
    iVar2 = 0;
    do {
      uVar5 = *puVar7;
      puVar7 = puVar7 + 1;
      iVar4 = (*(code *)PTR_strcmp_004234ec)(uVar5,auStack_1b4);
      iVar6 = iVar2 + 1;
      iVar1 = iVar2;
      if (iVar4 == 0) break;
      iVar2 = iVar6;
      iVar1 = local_134;
    } while (iVar6 != 0xc);
    local_134 = iVar1;
    local_130 = (*(code *)PTR_atoi_004234b8)(auStack_18c);
    local_130 = local_130 + -0x76c;
    local_138 = (*(code *)PTR_atoi_004234b8)(auStack_1a0);
    local_1dc = (*(code *)PTR_mktime_00423554)(auStack_144);
    if (local_1dc < 0) {
      (*(code *)PTR_fputs_004234a0)("set Time Error for tm!",*(undefined4 *)PTR_stderr_004234dc);
    }
    iVar2 = (*(code *)PTR_stime_004234bc)(&local_1dc);
    if (iVar2 < 0) {
      (*(code *)PTR_fputs_004234a0)("set system Time Error",*(undefined4 *)PTR_stderr_004234dc);
    }
    iVar2 = (*(code *)PTR_apmib_init_004234ac)();
    if (iVar2 != 0) {
      (*(code *)PTR_apmib_get_004235ac)(0x141,&local_1e0);
      if (local_1e0 != 0) {
        local_130 = local_1e0 + -0x76c;
        (*(code *)PTR_apmib_get_004235ac)(0x142,&local_134);
        (*(code *)PTR_apmib_get_004235ac)(0x143,&local_138);
        (*(code *)PTR_apmib_get_004235ac)(0x144,auStack_13c);
        (*(code *)PTR_apmib_get_004235ac)(0x145,auStack_140);
        (*(code *)PTR_apmib_get_004235ac)(0x146,auStack_144);
        local_1dc = (*(code *)PTR_mktime_00423554)(auStack_144);
        if (local_1dc < 0) {
          (*(code *)PTR_fputs_004234a0)("make Time Error!\n",*(undefined4 *)PTR_stderr_004234dc);
        }
        iVar2 = (*(code *)PTR_stime_004234bc)(&local_1dc);
        if (iVar2 < 0) {
          (*(code *)PTR_fputs_004234a0)
                    ("set system Time Error\n",*(undefined4 *)PTR_stderr_004234dc);
        }
      }
      (*(code *)PTR_system_004235bc)("echo done > /var/system/set_time");
      return 0;
    }
  }
  (*(code *)PTR_puts_004235c4)("Initialize AP MIB failed in setSystemTime_flash!");
  return 0xffffffff;
}


/* FUN_004076bc @ 004076bc */

/* WARNING: Removing unreachable block (ram,0x00407e68) */
/* WARNING: Removing unreachable block (ram,0x00407e30) */
/* WARNING: Removing unreachable block (ram,0x00407df8) */
/* WARNING: Removing unreachable block (ram,0x00407dbc) */
/* WARNING: Removing unreachable block (ram,0x00407d94) */
/* WARNING: Removing unreachable block (ram,0x00407d6c) */
/* WARNING: Removing unreachable block (ram,0x00407d44) */
/* WARNING: Removing unreachable block (ram,0x00407d14) */
/* WARNING: Removing unreachable block (ram,0x00407cd4) */
/* WARNING: Removing unreachable block (ram,0x00407ca4) */
/* WARNING: Removing unreachable block (ram,0x00407c78) */
/* WARNING: Removing unreachable block (ram,0x00407c50) */
/* WARNING: Removing unreachable block (ram,0x00407c28) */
/* WARNING: Removing unreachable block (ram,0x00407c00) */
/* WARNING: Removing unreachable block (ram,0x00407bd8) */
/* WARNING: Removing unreachable block (ram,0x00407b88) */
/* WARNING: Removing unreachable block (ram,0x00407bec) */
/* WARNING: Removing unreachable block (ram,0x00407c14) */
/* WARNING: Removing unreachable block (ram,0x00407c3c) */
/* WARNING: Removing unreachable block (ram,0x00407c64) */
/* WARNING: Removing unreachable block (ram,0x00407c90) */
/* WARNING: Removing unreachable block (ram,0x00407cc0) */
/* WARNING: Removing unreachable block (ram,0x00407cec) */
/* WARNING: Removing unreachable block (ram,0x00407d2c) */
/* WARNING: Removing unreachable block (ram,0x00407d58) */
/* WARNING: Removing unreachable block (ram,0x00407d80) */
/* WARNING: Removing unreachable block (ram,0x00407da8) */
/* WARNING: Removing unreachable block (ram,0x00407ddc) */
/* WARNING: Removing unreachable block (ram,0x00407e14) */
/* WARNING: Removing unreachable block (ram,0x00407e4c) */
/* WARNING: Removing unreachable block (ram,0x00407e84) */
/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_004076bc(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  undefined4 uVar8;
  undefined1 *puVar9;
  int local_6f8;
  int local_6f4;
  int local_6f0 [18];
  undefined1 auStack_6a8 [4];
  undefined1 auStack_6a4 [100];
  undefined1 auStack_640 [4];
  char local_63c;
  char local_63b;
  undefined1 local_636;
  undefined1 local_626;
  undefined1 auStack_5dc [100];
  undefined1 auStack_578 [100];
  undefined1 auStack_514 [100];
  undefined1 auStack_4b0 [100];
  undefined1 auStack_44c [100];
  undefined1 auStack_3e8 [100];
  undefined1 auStack_384 [100];
  undefined1 auStack_320 [100];
  undefined1 auStack_2bc [100];
  undefined1 auStack_258 [100];
  undefined1 auStack_1f4 [100];
  char local_190;
  char local_18f;
  char local_18e;
  char local_18d;
  char local_18c;
  char local_18b;
  char local_18a;
  char local_189;
  undefined1 local_188;
  int local_12c [25];
  undefined1 auStack_c8 [52];
  int local_94;
  int local_30;
  
  local_6f8 = 0;
  local_6f0[1] = 0;
  local_6f0[2] = 0;
  local_6f0[3] = 0;
  local_6f0[4] = 0;
  local_6f0[5] = 0;
  local_6f0[6] = 0;
  local_6f0[7] = 0;
  local_6f0[8] = 0;
  local_6f0[9] = 0;
  local_6f0[10] = 0;
  local_6f0[0xb] = 0;
  local_6f0[0xc] = 0;
  local_6f0[0xd] = 0;
  local_6f0[0xe] = 0;
  local_6f0[0xf] = 0;
  local_6f0[0x10] = 0;
  local_6f0[0x11] = 0;
  iVar1 = (*(code *)PTR_apmib_init_004234ac)();
  if (iVar1 == 0) {
    (*(code *)PTR_puts_004235c4)("Initialize AP MIB failed!");
    return 0xffffffff;
  }
  FUN_004021d4("wlan0");
  (*(code *)PTR_apmib_get_004235ac)(0x111,&local_190);
  (*(code *)PTR_apmib_get_004235ac)(0x118,local_6f0);
  (*(code *)PTR_apmib_get_004235ac)(0x117,local_6f0 + 3);
  (*(code *)PTR_apmib_get_004235ac)(0x10f,local_6f0 + 4);
  (*(code *)PTR_apmib_get_004235ac)(0x3c,local_6f0 + 7);
  (*(code *)PTR_apmib_get_004235ac)(0x114,local_6f0 + 8);
  (*(code *)PTR_apmib_get_004235ac)(2,local_6f0 + 0xb);
  (*(code *)PTR_apmib_get_004235ac)(0xba,auStack_1f4);
  (*(code *)PTR_apmib_get_004235ac)(0x517,auStack_6a8);
  if (param_4 != 0) {
    FUN_004021d4(param_4);
  }
  (*(code *)PTR_apmib_get_004235ac)(0x117,local_6f0 + 3);
  (*(code *)PTR_apmib_get_004235ac)(0x112,local_6f0 + 5);
  (*(code *)PTR_apmib_get_004235ac)(0x113,local_6f0 + 6);
  (*(code *)PTR_apmib_get_004235ac)(0x110,&local_6f4);
  (*(code *)PTR_apmib_get_004235ac)(0x119,local_6f0 + 0xc);
  (*(code *)PTR_apmib_get_004235ac)(1,auStack_258);
  (*(code *)PTR_apmib_get_004235ac)(0x3b,&local_6f8);
  (*(code *)PTR_apmib_get_004235ac)(0x19,local_6f0 + 9);
  (*(code *)PTR_apmib_get_004235ac)(3,local_6f0 + 10);
  (*(code *)PTR_apmib_get_004235ac)(0xc,local_6f0 + 1);
  (*(code *)PTR_apmib_get_004235ac)(0xd,local_6f0 + 2);
  (*(code *)PTR_apmib_get_004235ac)(4,auStack_5dc);
  (*(code *)PTR_apmib_get_004235ac)(5,auStack_578);
  (*(code *)PTR_apmib_get_004235ac)(6,auStack_514);
  (*(code *)PTR_apmib_get_004235ac)(7,auStack_4b0);
  (*(code *)PTR_apmib_get_004235ac)(8,auStack_44c);
  (*(code *)PTR_apmib_get_004235ac)(9,auStack_3e8);
  (*(code *)PTR_apmib_get_004235ac)(10,auStack_384);
  (*(code *)PTR_apmib_get_004235ac)(0xb,auStack_320);
  (*(code *)PTR_apmib_get_004235ac)(0x1e,auStack_2bc);
  (*(code *)PTR_apmib_get_004235ac)(0x10e,local_6f0 + 0xe);
  (*(code *)PTR_apmib_get_004235ac)(0x16,local_6f0 + 0xd);
  (*(code *)PTR_apmib_get_004235ac)(0x19,local_6f0 + 0xf);
  (*(code *)PTR_apmib_get_004235ac)(0x1d,local_6f0 + 0x10);
  (*(code *)PTR_apmib_get_004235ac)(0x26,local_6f0 + 0x11);
  if (local_6f0[0xd] != 0) {
    local_6f0[0xe] = 1;
  }
  if ((param_3 != 0) ||
     (iVar1 = (*(code *)PTR_memcmp_0042352c)(&local_190,&DAT_004132ec,8), iVar1 == 0)) {
    (*(code *)PTR_gettimeofday_00423514)(local_12c,0);
    (*(code *)PTR_apmib_get_004235ac)(0xc9,auStack_640);
    local_12c[0] = (int)local_63c + (int)local_63b + local_12c[0];
    (*(code *)PTR_srand_00423504)(local_12c[0]);
    iVar1 = (*(code *)PTR_rand_0042354c)();
    local_188 = 0;
    uVar2 = (iVar1 % 10000000) * 10;
    uVar2 = (int)(10 - ((uVar2 / 10000) % 10 + (uVar2 / 1000000) % 10 + (uVar2 / 100) % 10 +
                       ((uVar2 / 100000) % 10 + (uVar2 / 10000000) % 10 + (uVar2 / 1000) % 10 +
                       (uVar2 / 10) % 10) * 3) % 10) % 10 + uVar2;
    local_189 = (char)(uVar2 % 10) + '0';
    local_18a = (char)((uVar2 / 10) % 10) + '0';
    local_190 = (char)((uVar2 / 10000000) % 10) + '0';
    local_18f = (char)((uVar2 / 1000000) % 10) + '0';
    local_18e = (char)((uVar2 / 100000) % 10) + '0';
    local_18d = (char)((uVar2 / 10000) % 10) + '0';
    local_18c = (char)((uVar2 / 1000) % 10) + '0';
    local_18b = (char)((uVar2 / 100) % 10) + '0';
    (*(code *)PTR_apmib_set_00423574)(0x111,&local_190);
    (*(code *)PTR_apmib_update_00423578)(1);
    (*(code *)PTR_printf_004235f4)("Generated PIN = %s\n",&local_190);
    if (param_3 != 0) {
      return 0;
    }
  }
  iVar1 = (*(code *)PTR_stat_004234cc)(param_1,auStack_c8);
  if (iVar1 < 0) {
    pcVar7 = "stat() error [%s]!\n";
    goto LAB_00407f04;
  }
  iVar1 = (*(code *)PTR_malloc_004235b8)(local_94 + 0x800);
  if (iVar1 == 0) {
    pcVar7 = "malloc() error [%d]!\n";
    param_1 = local_94 + 0x800;
    goto LAB_00407f04;
  }
  uVar3 = 1;
  uVar8 = 5;
  if (local_6f8 == 1) {
    uVar8 = 2;
    if (local_6f0[0] != 0) {
      uVar8 = 3;
      uVar3 = 6;
      goto LAB_00407f74;
    }
  }
  else {
LAB_00407f74:
    if (local_6f4 == 0) {
      uVar8 = uVar3;
    }
  }
  (*(code *)PTR_sprintf_004234e0)(auStack_6a4,"mode = %d\n",uVar8);
  uVar8 = (*(code *)PTR_strlen_004234b4)(auStack_6a4);
  (*(code *)PTR_memcpy_004235d4)(iVar1,auStack_6a4,uVar8);
  iVar4 = (*(code *)PTR_strlen_004234b4)(auStack_6a4);
  iVar5 = 0;
  if (local_6f8 != 1) {
    iVar5 = local_6f0[3];
  }
  (*(code *)PTR_sprintf_004234e0)(auStack_6a4,"upnp = %d\n",iVar5);
  uVar8 = (*(code *)PTR_strlen_004234b4)(auStack_6a4);
  (*(code *)PTR_memcpy_004235d4)(iVar1 + iVar4,auStack_6a4,uVar8);
  iVar5 = (*(code *)PTR_strlen_004234b4)(auStack_6a4);
  iVar5 = iVar1 + iVar4 + iVar5;
  if (local_6f0[4] == 1) {
    iVar4 = 6;
  }
  else if (local_6f0[4] == 2) {
    iVar4 = 0x82;
  }
  else {
    iVar4 = local_6f0[4];
    if (local_6f0[4] == 3) {
      iVar4 = 0x86;
    }
  }
  (*(code *)PTR_sprintf_004234e0)(auStack_6a4,"config_method = %d\n",iVar4);
  uVar8 = (*(code *)PTR_strlen_004234b4)(auStack_6a4);
  (*(code *)PTR_memcpy_004235d4)(iVar5,auStack_6a4,uVar8);
  iVar4 = (*(code *)PTR_strlen_004234b4)(auStack_6a4);
  iVar5 = iVar5 + iVar4;
  (*(code *)PTR_sprintf_004234e0)(auStack_6a4,"wlan0_wsc_disabled = %d\n",local_6f0[0xe]);
  uVar8 = (*(code *)PTR_strlen_004234b4)(auStack_6a4);
  (*(code *)PTR_memcpy_004235d4)(iVar5,auStack_6a4,uVar8);
  iVar4 = (*(code *)PTR_strlen_004234b4)(auStack_6a4);
  iVar5 = iVar5 + iVar4;
  (*(code *)PTR_sprintf_004234e0)(auStack_6a4,"auth_type = %d\n",local_6f0[5]);
  uVar8 = (*(code *)PTR_strlen_004234b4)(auStack_6a4);
  (*(code *)PTR_memcpy_004235d4)(iVar5,auStack_6a4,uVar8);
  iVar4 = (*(code *)PTR_strlen_004234b4)(auStack_6a4);
  iVar5 = iVar5 + iVar4;
  (*(code *)PTR_sprintf_004234e0)(auStack_6a4,"encrypt_type = %d\n",local_6f0[6]);
  uVar8 = (*(code *)PTR_strlen_004234b4)(auStack_6a4);
  (*(code *)PTR_memcpy_004235d4)(iVar5,auStack_6a4,uVar8);
  iVar4 = (*(code *)PTR_strlen_004234b4)(auStack_6a4);
  iVar5 = iVar5 + iVar4;
  uVar2 = 0;
  if (local_6f0[0xf] == 6) {
    uVar2 = 1;
    if (((local_6f0[0x10] != 1) && (uVar2 = 2, local_6f0[0x10] != 2)) &&
       (uVar2 = 3, local_6f0[0x10] != 3)) {
      uVar2 = 0;
    }
    if (local_6f0[0x11] == 1) {
      uVar2 = uVar2 | 4;
    }
    else if (local_6f0[0x11] == 2) {
      uVar2 = uVar2 | 8;
    }
    else if (local_6f0[0x11] == 3) {
      uVar2 = uVar2 | 0xc;
    }
  }
  (*(code *)PTR_sprintf_004234e0)(auStack_6a4,"mixedmode = %d\n",uVar2);
  uVar8 = (*(code *)PTR_strlen_004234b4)(auStack_6a4);
  (*(code *)PTR_memcpy_004235d4)(iVar5,auStack_6a4,uVar8);
  iVar6 = (*(code *)PTR_strlen_004234b4)(auStack_6a4);
  iVar4 = local_6f0[6];
  iVar5 = iVar5 + iVar6;
  if (param_4 == 0) {
LAB_00408378:
    uVar8 = 1;
  }
  else {
    iVar6 = (*(code *)PTR_strcmp_004234ec)(param_4,"wlan0");
    if (iVar6 == 0) {
LAB_00408358:
      uVar8 = 1;
      if ((local_6f8 == 1) && (uVar8 = 2, local_6f0[7] == 0)) goto LAB_00408378;
    }
    else {
      iVar6 = (*(code *)PTR_strcmp_004234ec)(param_4,"wlan1");
      uVar8 = 1;
      if (iVar6 == 0) goto LAB_00408358;
    }
  }
  (*(code *)PTR_sprintf_004234e0)(auStack_6a4,"connection_type = %d\n",uVar8);
  uVar8 = (*(code *)PTR_strlen_004234b4)(auStack_6a4);
  (*(code *)PTR_memcpy_004235d4)(iVar5,auStack_6a4,uVar8);
  iVar6 = (*(code *)PTR_strlen_004234b4)(auStack_6a4);
  iVar5 = iVar5 + iVar6;
  (*(code *)PTR_sprintf_004234e0)(auStack_6a4,"manual_config = %d\n",local_6f0[8]);
  uVar8 = (*(code *)PTR_strlen_004234b4)(auStack_6a4);
  (*(code *)PTR_memcpy_004235d4)(iVar5,auStack_6a4,uVar8);
  iVar6 = (*(code *)PTR_strlen_004234b4)(auStack_6a4);
  iVar5 = iVar5 + iVar6;
  if (iVar4 == 2) {
    if (local_6f0[9] != 1) {
      pcVar7 = "WEP mismatched between WPS and host system";
LAB_004084a0:
      (*(code *)PTR_puts_004235c4)(pcVar7);
      (*(code *)PTR_free_0042348c)(iVar1);
      return 0xffffffff;
    }
    if (1 < local_6f0[10] - 1U) {
      pcVar7 = "WEP encrypt length error";
      goto LAB_004084a0;
    }
    local_6f0[2] = local_6f0[2] + 1;
    local_30 = local_6f0[9];
    (*(code *)PTR_sprintf_004234e0)(auStack_6a4,"wep_transmit_key = %d\n",local_6f0[2]);
    puVar9 = auStack_640;
    uVar8 = (*(code *)PTR_strlen_004234b4)(auStack_6a4);
    (*(code *)PTR_memcpy_004235d4)(iVar5,auStack_6a4,uVar8);
    iVar4 = (*(code *)PTR_strlen_004234b4)(auStack_6a4);
    iVar5 = iVar5 + iVar4;
    if (local_6f0[10] == local_30) {
      (*(code *)PTR_strcpy_00423600)(auStack_6a4,auStack_5dc);
      FUN_00403e9c(auStack_6a4,5,puVar9);
      local_636 = 0;
      (*(code *)PTR_sprintf_004234e0)(auStack_6a4,"network_key = %s\n",puVar9);
      uVar8 = (*(code *)PTR_strlen_004234b4)(auStack_6a4);
      (*(code *)PTR_memcpy_004235d4)(iVar5,auStack_6a4,uVar8);
      iVar4 = (*(code *)PTR_strlen_004234b4)(auStack_6a4);
      (*(code *)PTR_strcpy_00423600)(auStack_6a4,auStack_578);
      FUN_00403e9c(auStack_6a4,5,puVar9);
      local_636 = 0;
      (*(code *)PTR_sprintf_004234e0)(auStack_6a4,"wep_key2 = %s\n",puVar9);
      uVar8 = (*(code *)PTR_strlen_004234b4)(auStack_6a4);
      (*(code *)PTR_memcpy_004235d4)(iVar5 + iVar4,auStack_6a4,uVar8);
      iVar6 = (*(code *)PTR_strlen_004234b4)(auStack_6a4);
      iVar6 = iVar5 + iVar4 + iVar6;
      (*(code *)PTR_strcpy_00423600)(auStack_6a4,auStack_514);
      FUN_00403e9c(auStack_6a4,5,puVar9);
      local_636 = 0;
      (*(code *)PTR_sprintf_004234e0)(auStack_6a4,"wep_key3 = %s\n",puVar9);
      uVar8 = (*(code *)PTR_strlen_004234b4)(auStack_6a4);
      (*(code *)PTR_memcpy_004235d4)(iVar6,auStack_6a4,uVar8);
      iVar5 = (*(code *)PTR_strlen_004234b4)(auStack_6a4);
      iVar5 = iVar6 + iVar5;
      (*(code *)PTR_strcpy_00423600)(auStack_6a4,auStack_4b0);
      FUN_00403e9c(auStack_6a4,5,puVar9);
      pcVar7 = "wep_key4 = %s\n";
      local_636 = 0;
    }
    else {
      (*(code *)PTR_strcpy_00423600)(auStack_6a4,auStack_44c);
      FUN_00403e9c(auStack_6a4,0xd,puVar9);
      local_626 = 0;
      (*(code *)PTR_sprintf_004234e0)(auStack_6a4,"network_key = %s\n",puVar9);
      uVar8 = (*(code *)PTR_strlen_004234b4)(auStack_6a4);
      (*(code *)PTR_memcpy_004235d4)(iVar5,auStack_6a4,uVar8);
      iVar4 = (*(code *)PTR_strlen_004234b4)(auStack_6a4);
      (*(code *)PTR_strcpy_00423600)(auStack_6a4,auStack_3e8);
      FUN_00403e9c(auStack_6a4,0xd,puVar9);
      local_626 = 0;
      (*(code *)PTR_sprintf_004234e0)(auStack_6a4,"wep_key2 = %s\n",puVar9);
      uVar8 = (*(code *)PTR_strlen_004234b4)(auStack_6a4);
      (*(code *)PTR_memcpy_004235d4)(iVar5 + iVar4,auStack_6a4,uVar8);
      iVar6 = (*(code *)PTR_strlen_004234b4)(auStack_6a4);
      iVar6 = iVar5 + iVar4 + iVar6;
      (*(code *)PTR_strcpy_00423600)(auStack_6a4,auStack_384);
      FUN_00403e9c(auStack_6a4,0xd,puVar9);
      local_626 = 0;
      (*(code *)PTR_sprintf_004234e0)(auStack_6a4,"wep_key3 = %s\n",puVar9);
      uVar8 = (*(code *)PTR_strlen_004234b4)(auStack_6a4);
      (*(code *)PTR_memcpy_004235d4)(iVar6,auStack_6a4,uVar8);
      iVar5 = (*(code *)PTR_strlen_004234b4)(auStack_6a4);
      iVar5 = iVar6 + iVar5;
      (*(code *)PTR_strcpy_00423600)(auStack_6a4,auStack_384);
      FUN_00403e9c(auStack_6a4,0xd,puVar9);
      pcVar7 = "wep_key4 = %s\n";
      local_626 = 0;
    }
  }
  else {
    pcVar7 = "network_key = %s\n";
    puVar9 = auStack_2bc;
  }
  (*(code *)PTR_sprintf_004234e0)(auStack_6a4,pcVar7,puVar9);
  uVar8 = (*(code *)PTR_strlen_004234b4)(auStack_6a4);
  (*(code *)PTR_memcpy_004235d4)(iVar5,auStack_6a4,uVar8);
  iVar4 = (*(code *)PTR_strlen_004234b4)(auStack_6a4);
  (*(code *)PTR_sprintf_004234e0)(auStack_6a4,"ssid = \"%s\"\n",auStack_258);
  uVar8 = (*(code *)PTR_strlen_004234b4)(auStack_6a4);
  (*(code *)PTR_memcpy_004235d4)(iVar5 + iVar4,auStack_6a4,uVar8);
  iVar6 = (*(code *)PTR_strlen_004234b4)(auStack_6a4);
  iVar6 = iVar5 + iVar4 + iVar6;
  (*(code *)PTR_sprintf_004234e0)(auStack_6a4,"pin_code = %s\n",&local_190);
  uVar8 = (*(code *)PTR_strlen_004234b4)(auStack_6a4);
  (*(code *)PTR_memcpy_004235d4)(iVar6,auStack_6a4,uVar8);
  iVar5 = (*(code *)PTR_strlen_004234b4)(auStack_6a4);
  uVar8 = 1;
  if (0xe < local_6f0[0xb]) {
    uVar8 = 2;
  }
  iVar6 = iVar6 + iVar5;
  (*(code *)PTR_sprintf_004234e0)(auStack_6a4,"rf_band = %d\n",uVar8);
  uVar8 = (*(code *)PTR_strlen_004234b4)(auStack_6a4);
  (*(code *)PTR_memcpy_004235d4)(iVar6,auStack_6a4,uVar8);
  iVar5 = (*(code *)PTR_strlen_004234b4)(auStack_6a4);
  iVar6 = iVar6 + iVar5;
  (*(code *)PTR_sprintf_004234e0)(auStack_6a4,"device_name = \"%s\"\n",auStack_1f4);
  uVar8 = (*(code *)PTR_strlen_004234b4)(auStack_6a4);
  (*(code *)PTR_memcpy_004235d4)(iVar6,auStack_6a4,uVar8);
  iVar5 = (*(code *)PTR_strlen_004234b4)(auStack_6a4);
  iVar6 = iVar6 + iVar5;
  (*(code *)PTR_sprintf_004234e0)(auStack_6a4,"config_by_ext_reg = %d\n",local_6f0[0xc]);
  uVar8 = (*(code *)PTR_strlen_004234b4)(auStack_6a4);
  (*(code *)PTR_memcpy_004235d4)(iVar6,auStack_6a4,uVar8);
  iVar5 = (*(code *)PTR_strlen_004234b4)(auStack_6a4);
  iVar4 = (*(code *)PTR_open_004234b0)(param_1,0);
  if (iVar4 == -1) {
    pcVar7 = "open() error [%s]!\n";
  }
  else {
    (*(code *)PTR_lseek_00423598)(iVar4,0,0);
    iVar6 = iVar6 + iVar5;
    iVar5 = (*(code *)PTR_read_00423544)(iVar4,iVar6,local_94);
    if (iVar5 == local_94) {
      (*(code *)PTR_close_00423490)(iVar4);
      iVar5 = (*(code *)PTR_strstr_00423550)(iVar6,"uuid =");
      if (iVar5 != 0) {
        (*(code *)PTR_apmib_get_004235ac)(0xc9,auStack_640);
        FUN_00403e9c(auStack_640,6,local_12c);
        (*(code *)PTR_memcpy_004235d4)(iVar5 + 0x1b,local_12c,0xc);
      }
      iVar5 = (*(code *)PTR_open_004234b0)(param_2,0x302);
      param_1 = param_2;
      if (iVar5 == -1) {
        pcVar7 = "open() error [%s]!\n";
      }
      else {
        iVar4 = (*(code *)PTR_write_00423568)(iVar5,iVar1,(iVar6 - iVar1) + local_94);
        if (iVar4 == (iVar6 - iVar1) + local_94) {
          (*(code *)PTR_close_00423490)(iVar5);
          (*(code *)PTR_free_0042348c)(iVar1);
          return 0;
        }
        pcVar7 = "Write() file error [%s]!\n";
      }
    }
    else {
      pcVar7 = "read() error [%s]!\n";
    }
  }
LAB_00407f04:
  (*(code *)PTR_printf_004235f4)(pcVar7,param_1);
  return 0xffffffff;
}


/* FUN_00408db4 @ 00408db4 */

void FUN_00408db4(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = (code *)PTR_apmib_get_004235ac;
  if (DAT_00423630 - 3U < 2) {
    UNRECOVERED_JUMPTABLE = (code *)PTR_apmib_getDef_004234d0;
  }
                    /* WARNING: Could not recover jumptable at 0x00408de4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


/* FUN_00408dec @ 00408dec */

void FUN_00408dec(void)

{
  (*(code *)PTR_puts_004235c4)("Usage: flash cmd");
  (*(code *)PTR_puts_004235c4)("option:");
  (*(code *)PTR_puts_004235c4)(&DAT_00411e10);
  (*(code *)PTR_puts_004235c4)("      default -- write all flash parameters from hard code.");
  (*(code *)PTR_puts_004235c4)
            ("      get [wlan interface-index] mib-name -- get a specific mib from flash");
  (*(code *)PTR_puts_004235c4)("          memory.");
  (*(code *)PTR_puts_004235c4)
            ("      set [wlan interface-index] mib-name mib-value -- set a specific mib into");
  (*(code *)PTR_puts_004235c4)("          flash memory.");
  (*(code *)PTR_puts_004235c4)("      all -- dump all flash parameters.");
  (*(code *)PTR_puts_004235c4)("      gethw hw-mib-name -- get a specific mib from flash");
  (*(code *)PTR_puts_004235c4)("          memory.");
  (*(code *)PTR_puts_004235c4)("      sethw hw-mib-name mib-value -- set a specific mib into");
  (*(code *)PTR_puts_004235c4)("          flash memory.");
  (*(code *)PTR_puts_004235c4)("      allhw -- dump all hw flash parameters.");
  (*(code *)PTR_puts_004235c4)("      reset -- reset current setting to default.");
  (*(code *)PTR_puts_004235c4)("      set_mib -- get mib from flash and set to wlan interface.");
                    /* WARNING: Could not recover jumptable at 0x00408f9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_putchar_00423604)(10);
  return;
}


/* FUN_00408fa4 @ 00408fa4 */

void FUN_00408fa4(undefined4 param_1,int param_2,undefined4 param_3,uint param_4,int param_5,
                 int *param_6)

{
  bool bVar1;
  undefined1 uVar7;
  uint uVar2;
  uint uVar3;
  ushort uVar5;
  ushort uVar6;
  int iVar4;
  char cVar8;
  char *pcVar9;
  undefined4 uVar10;
  byte *pbVar11;
  uint uVar12;
  int iVar13;
  code *pcVar14;
  byte abStack_4c0 [4];
  int local_4bc;
  undefined4 local_4b8;
  int local_4b4;
  byte local_4b0;
  undefined1 auStack_4af [16];
  undefined1 local_49f;
  undefined1 local_49e;
  undefined1 local_49d;
  undefined2 local_49c;
  byte local_498 [4];
  undefined1 local_494;
  undefined1 local_493 [23];
  byte local_47c [6];
  undefined1 local_476 [22];
  undefined2 local_460;
  undefined2 local_45e;
  undefined1 local_45c;
  undefined1 local_45b [23];
  byte local_444 [6];
  undefined1 local_43e [22];
  byte local_428 [6];
  undefined4 local_422;
  undefined1 auStack_41e [22];
  undefined2 local_408;
  undefined2 local_406;
  uint local_404;
  undefined4 local_400;
  byte local_3e8 [31];
  undefined1 local_3c9;
  byte local_3c8 [4];
  undefined1 auStack_3c4 [6];
  undefined1 auStack_3be [34];
  byte local_39c [28];
  undefined1 auStack_380 [20];
  ushort local_36c;
  ushort local_36a;
  ushort local_368;
  ushort local_366;
  byte local_364 [4];
  undefined2 local_360;
  undefined2 local_35e;
  undefined1 local_35c;
  undefined4 local_344;
  undefined1 local_33c [24];
  byte local_324 [16];
  undefined1 local_314;
  undefined1 auStack_313 [6];
  undefined1 local_30d;
  undefined1 auStack_30c [4];
  undefined1 auStack_308 [4];
  undefined4 local_304;
  undefined4 local_300;
  byte local_290 [200];
  undefined1 auStack_1c8 [200];
  byte local_100 [33];
  char local_df;
  undefined1 local_de;
  undefined1 local_dd;
  undefined1 auStack_dc [65];
  undefined1 local_9b;
  undefined1 auStack_9a [27];
  undefined1 auStack_7f [27];
  undefined1 auStack_64 [27];
  undefined1 auStack_49 [37];
  
  local_4b8 = 0;
  (*(code *)PTR_memset_0042350c)(local_39c,0,0x38);
  switch(param_3) {
  case 0:
  case 1:
    pbVar11 = (byte *)&local_4bc;
    local_4bc = (*(code *)PTR_atoi_004234b8)(*param_6);
    break;
  case 2:
    pbVar11 = (byte *)*param_6;
    uVar12 = (*(code *)PTR_strlen_004234b4)(pbVar11);
    if (uVar12 <= param_4) break;
    pcVar9 = "string value too long!";
    pcVar14 = (code *)PTR_puts_004235c4;
    goto LAB_0040ab74;
  case 3:
    iVar13 = *param_6;
    iVar4 = (*(code *)PTR_strlen_004234b4)(iVar13);
    if (iVar4 == 10) {
      uVar10 = 10;
LAB_0040aa5c:
      pbVar11 = local_290;
      iVar4 = FUN_00404bf4(iVar13,pbVar11,uVar10);
      if (iVar4 != 0) break;
    }
    goto LAB_0040aa74;
  case 4:
    iVar13 = *param_6;
    iVar4 = (*(code *)PTR_strlen_004234b4)(iVar13);
    if (iVar4 == 0xc) {
      uVar10 = 0xc;
      goto LAB_0040aa5c;
    }
    goto LAB_0040aa74;
  case 5:
    iVar13 = *param_6;
    iVar4 = (*(code *)PTR_strlen_004234b4)(iVar13);
    if (iVar4 == 0x1a) {
      uVar10 = 0x1a;
      goto LAB_0040aa5c;
    }
LAB_0040aa74:
    pcVar9 = "invalid value!";
    pcVar14 = (code *)PTR_puts_004235c4;
    goto LAB_0040ab74;
  case 6:
    pbVar11 = abStack_4c0;
    iVar4 = (*(code *)PTR_inet_aton_0042351c)(*param_6,pbVar11);
    if (iVar4 != 0) break;
LAB_0040a00c:
    pcVar9 = "invalid internet address!";
    pcVar14 = (code *)PTR_puts_004235c4;
    goto LAB_0040ab74;
  case 7:
    local_4b8 = (*(code *)PTR_strtoul_004235b4)(*param_6,0,10);
    pbVar11 = (byte *)&local_4b8;
    break;
  case 8:
    uVar12 = 0xe;
    if ((6 < param_2 - 0x385U) && (uVar12 = 0xc4, 4 < param_2 - 0x38eU)) {
      if (param_2 == 0x3ae) {
        iVar13 = *param_6;
        iVar4 = (*(code *)PTR_strlen_004234b4)(iVar13);
        if (iVar4 == 0x4c) {
          uVar10 = 0x4c;
          goto LAB_0040aa5c;
        }
        goto LAB_0040aa74;
      }
      goto switchD_00409030_default;
    }
    uVar2 = 0;
    while (((int)uVar2 < (int)uVar12 && (*param_6 != 0))) {
      iVar4 = (*(code *)PTR_sscanf_00423524)(*param_6,"%d",&local_4bc);
      param_6 = param_6 + 1;
      if (iVar4 == 0) goto LAB_0040aa74;
      local_290[uVar2 + 1] = (byte)local_4bc;
      uVar2 = uVar2 + 1;
    }
    if ((1 < uVar2 - 1) && (pbVar11 = local_290 + 1, uVar2 != uVar12)) {
      (*(code *)PTR_memcpy_004235d4)(auStack_1c8,pbVar11,uVar2);
      FUN_00408db4(param_2,pbVar11);
      (*(code *)PTR_memcpy_004235d4)(pbVar11,auStack_1c8,uVar2);
    }
    iVar4 = 1;
    if (uVar2 == 1) {
      bVar1 = uVar12 == 0;
      while (pbVar11 = local_290 + iVar4, !bVar1) {
        iVar4 = iVar4 + 1;
        *pbVar11 = local_290[1];
        bVar1 = (int)uVar12 < iVar4;
      }
    }
    else if (uVar2 == 2) {
      uVar3 = (uint)local_290[1];
      if ((uVar3 == 0) ||
         ((uVar12 < uVar3 && ((param_2 - 0x385U < 7 || ((param_2 - 0x38eU < 5 && (0xd8 < uVar3))))))
         )) {
        pcVar9 = "invalid channel number";
        pcVar14 = (code *)PTR_puts_004235c4;
        goto LAB_0040ab74;
      }
      local_290[3] = 0xff;
    }
    pbVar11 = local_290;
    local_290[0] = (byte)uVar2;
    break;
  case 9:
  default:
switchD_00409030_default:
    pcVar9 = "invalid mib!";
    pcVar14 = (code *)PTR_puts_004235c4;
    goto LAB_0040ab74;
  case 10:
    iVar13 = *param_6;
    iVar4 = (*(code *)PTR_strcmp_004234ec)(iVar13,&DAT_004120b8);
    if (iVar4 == 0) {
      if (param_5 < 2) goto LAB_0040a92c;
      iVar13 = param_6[1];
      iVar4 = (*(code *)PTR_strlen_004234b4)(iVar13);
      if (iVar4 == 0xc) {
        pbVar11 = local_47c;
        iVar4 = FUN_00404bf4(iVar13,pbVar11,0xc);
        if (iVar4 != 0) {
          if (param_5 == 2) {
            local_476[0] = 0;
          }
          else {
            (*(code *)PTR_strcpy_00423600)(local_476,param_6[2]);
          }
          param_2 = 0x10037;
          break;
        }
      }
      goto LAB_0040aa74;
    }
    iVar4 = (*(code *)PTR_strcmp_004234ec)(iVar13,&DAT_004120dc);
    if (iVar4 == 0) {
      if (param_5 < 2) goto LAB_0040a92c;
      local_4bc = (*(code *)PTR_atoi_004234b8)(param_6[1]);
      iVar4 = FUN_00408db4(0x35,&local_4b4);
      if (iVar4 == 0) {
LAB_0040a390:
        pcVar9 = "Get port forwarding entry number error!";
        pcVar14 = (code *)PTR_printf_004235f4;
        goto LAB_0040ab74;
      }
      pbVar11 = local_47c;
      if (local_4b4 < local_4bc) goto LAB_0040a994;
      local_47c[0] = (byte)local_4bc;
      iVar4 = FUN_00408db4(0x8036,pbVar11);
      if (iVar4 == 0) goto LAB_0040a6f8;
      param_2 = 0x20038;
    }
    else {
      iVar4 = (*(code *)PTR_strcmp_004234ec)(iVar13,"delall");
      pbVar11 = local_47c;
      if (iVar4 == 0) {
        param_2 = 0x40039;
      }
    }
    break;
  case 0xb:
    iVar13 = *param_6;
    iVar4 = (*(code *)PTR_strcmp_004234ec)(iVar13,&DAT_004120b8);
    if (iVar4 == 0) {
      if (param_5 < 3) goto LAB_0040a92c;
      iVar13 = param_6[1];
      iVar4 = (*(code *)PTR_strlen_004234b4)(iVar13);
      if (iVar4 == 0xc) {
        iVar4 = FUN_00404bf4(iVar13,auStack_3c4,0xc);
        pbVar11 = local_3c8;
        if (iVar4 != 0) {
          iVar4 = (*(code *)PTR_inet_aton_0042351c)(param_6[2],pbVar11);
          if (iVar4 == 0) goto LAB_0040a00c;
          if (param_5 != 3) {
            (*(code *)PTR_strcpy_00423600)(auStack_3be,param_6[3]);
          }
          param_2 = 0x10127;
          break;
        }
      }
      goto LAB_0040aa74;
    }
    iVar4 = (*(code *)PTR_strcmp_004234ec)(iVar13,&DAT_004120dc);
    if (iVar4 == 0) {
      if (param_5 < 2) goto LAB_0040a92c;
      local_4bc = (*(code *)PTR_atoi_004234b8)(param_6[1]);
      iVar4 = FUN_00408db4(0x125,&local_4b4);
      if (iVar4 == 0) {
        pcVar9 = "Get DHCP resvd IP entry number error!";
        pcVar14 = (code *)PTR_printf_004235f4;
        goto LAB_0040ab74;
      }
      pbVar11 = local_3c8;
      if (local_4b4 < local_4bc) goto LAB_0040a994;
      local_3c8[0] = (byte)local_4bc;
      iVar4 = FUN_00408db4(0x8126,pbVar11);
      if (iVar4 == 0) goto LAB_0040a6f8;
      param_2 = 0x20128;
    }
    else {
      iVar4 = (*(code *)PTR_strcmp_004234ec)(iVar13,"delall");
      pbVar11 = local_3c8;
      if (iVar4 == 0) {
        param_2 = 0x40129;
      }
    }
    break;
  case 0xc:
    iVar13 = *param_6;
    iVar4 = (*(code *)PTR_strcmp_004234ec)(iVar13,&DAT_004120b8);
    if (iVar4 == 0) {
      pbVar11 = local_364;
      if (param_5 < 6) goto LAB_0040a92c;
      iVar4 = (*(code *)PTR_inet_aton_0042351c)(param_6[1],pbVar11);
      if (iVar4 == 0) goto LAB_0040a00c;
      local_360 = (*(code *)PTR_atoi_004234b8)(param_6[2]);
      local_35e = (*(code *)PTR_atoi_004234b8)(param_6[3]);
      local_35c = (*(code *)PTR_atoi_004234b8)(param_6[4]);
      local_344 = (*(code *)PTR_atoi_004234b8)(param_6[5]);
      if (param_5 == 6) {
        local_33c[0] = 0;
      }
      else {
        (*(code *)PTR_strcpy_00423600)(local_33c,param_6[6]);
      }
      param_2 = 0x10071;
    }
    else {
      iVar4 = (*(code *)PTR_strcmp_004234ec)(iVar13,&DAT_004120dc);
      if (iVar4 == 0) {
        if (param_5 < 2) goto LAB_0040a92c;
        local_4bc = (*(code *)PTR_atoi_004234b8)(param_6[1]);
        iVar4 = FUN_00408db4(0x6f,&local_4b4);
        if (iVar4 == 0) goto LAB_0040a390;
        pbVar11 = local_364;
        if (local_4b4 < local_4bc) goto LAB_0040a994;
        local_364[0] = (byte)local_4bc;
        iVar4 = FUN_00408db4(0x8070,pbVar11);
        if (iVar4 == 0) goto LAB_0040a6f8;
        param_2 = 0x20072;
      }
      else {
        iVar4 = (*(code *)PTR_strcmp_004234ec)(iVar13,"delall");
        pbVar11 = local_364;
        if (iVar4 == 0) {
          param_2 = 0x40073;
        }
      }
    }
    break;
  case 0xd:
    iVar13 = *param_6;
    iVar4 = (*(code *)PTR_strcmp_004234ec)(iVar13,&DAT_004120b8);
    if (iVar4 == 0) {
      pbVar11 = local_498;
      if (param_5 < 3) goto LAB_0040a92c;
      iVar4 = (*(code *)PTR_inet_aton_0042351c)(param_6[1],pbVar11);
      if (iVar4 == 0) goto LAB_0040a00c;
      local_494 = (*(code *)PTR_atoi_004234b8)(param_6[2]);
      if (param_5 == 3) {
        local_493[0] = 0;
      }
      else {
        (*(code *)PTR_strcpy_00423600)(local_493,param_6[3]);
      }
      param_2 = 0x10077;
    }
    else {
      iVar4 = (*(code *)PTR_strcmp_004234ec)(iVar13,&DAT_004120dc);
      if (iVar4 == 0) {
        if (param_5 < 2) goto LAB_0040a92c;
        local_4bc = (*(code *)PTR_atoi_004234b8)(param_6[1]);
        iVar4 = FUN_00408db4(0x75,&local_4b4);
        if (iVar4 == 0) goto LAB_0040a390;
        pbVar11 = local_498;
        if (local_4b4 < local_4bc) goto LAB_0040a994;
        local_498[0] = (byte)local_4bc;
        iVar4 = FUN_00408db4(0x8076,pbVar11);
        if (iVar4 == 0) goto LAB_0040a6f8;
        param_2 = 0x20078;
      }
      else {
        iVar4 = (*(code *)PTR_strcmp_004234ec)(iVar13,"delall");
        pbVar11 = local_498;
        if (iVar4 == 0) {
          param_2 = 0x40079;
        }
      }
    }
    break;
  case 0xe:
    iVar13 = *param_6;
    iVar4 = (*(code *)PTR_strcmp_004234ec)(iVar13,&DAT_004120b8);
    if (iVar4 == 0) {
      if (param_5 < 4) goto LAB_0040a92c;
      pbVar11 = (byte *)&local_460;
      local_460 = (*(code *)PTR_atoi_004234b8)(param_6[1]);
      local_45e = (*(code *)PTR_atoi_004234b8)(param_6[2]);
      local_45c = (*(code *)PTR_atoi_004234b8)(param_6[3]);
      if (param_5 == 4) {
        local_45b[0] = 0;
      }
      else {
        (*(code *)PTR_strcpy_00423600)(local_45b,param_6[4]);
      }
      param_2 = 0x10083;
    }
    else {
      iVar4 = (*(code *)PTR_strcmp_004234ec)(iVar13,&DAT_004120dc);
      if (iVar4 == 0) {
        if (param_5 < 2) goto LAB_0040a92c;
        local_4bc = (*(code *)PTR_atoi_004234b8)(param_6[1]);
        iVar4 = FUN_00408db4(0x81,&local_4b4);
        if (iVar4 == 0) {
          pcVar9 = "Get port filter entry number error!";
          pcVar14 = (code *)PTR_printf_004235f4;
          goto LAB_0040ab74;
        }
        pbVar11 = (byte *)&local_460;
        if (local_4b4 < local_4bc) goto LAB_0040a994;
        local_460 = CONCAT11((char)local_4bc,(undefined1)local_460);
        iVar4 = FUN_00408db4(0x8082,pbVar11);
        if (iVar4 == 0) goto LAB_0040a6f8;
        param_2 = 0x20084;
      }
      else {
        iVar4 = (*(code *)PTR_strcmp_004234ec)(iVar13,"delall");
        pbVar11 = (byte *)&local_460;
        if (iVar4 == 0) {
          param_2 = 0x40085;
        }
      }
    }
    break;
  case 0xf:
    iVar13 = *param_6;
    iVar4 = (*(code *)PTR_strcmp_004234ec)(iVar13,&DAT_004120b8);
    if (iVar4 == 0) {
      if (param_5 < 2) goto LAB_0040a92c;
      iVar13 = param_6[1];
      iVar4 = (*(code *)PTR_strlen_004234b4)(iVar13);
      if (iVar4 == 0xc) {
        pbVar11 = local_444;
        iVar4 = FUN_00404bf4(iVar13,pbVar11,0xc);
        if (iVar4 != 0) {
          if (param_5 == 2) {
            local_43e[0] = 0;
          }
          else {
            (*(code *)PTR_strcpy_00423600)(local_43e,param_6[2]);
          }
          param_2 = 0x1007d;
          break;
        }
      }
      goto LAB_0040aa74;
    }
    iVar4 = (*(code *)PTR_strcmp_004234ec)(iVar13,&DAT_004120dc);
    if (iVar4 == 0) {
      if (param_5 < 2) goto LAB_0040a92c;
      local_4bc = (*(code *)PTR_atoi_004234b8)(param_6[1]);
      iVar4 = FUN_00408db4(0x7b,&local_4b4);
      if (iVar4 == 0) goto LAB_0040a390;
      pbVar11 = local_444;
      if (local_4b4 < local_4bc) goto LAB_0040a994;
      local_444[0] = (byte)local_4bc;
      iVar4 = FUN_00408db4(0x807c,pbVar11);
      if (iVar4 == 0) goto LAB_0040a6f8;
      param_2 = 0x2007e;
    }
    else {
      iVar4 = (*(code *)PTR_strcmp_004234ec)(iVar13,"delall");
      pbVar11 = local_444;
      if (iVar4 == 0) {
        param_2 = 0x4007f;
      }
    }
    break;
  case 0x10:
    iVar13 = *param_6;
    iVar4 = (*(code *)PTR_strcmp_004234ec)(iVar13,&DAT_004120b8);
    if (iVar4 == 0) {
      if (param_5 < 2) goto LAB_0040a92c;
      iVar13 = param_6[1];
      iVar4 = (*(code *)PTR_strncmp_00423540)(iVar13,"http://",7);
      if (iVar4 == 0) {
        iVar13 = iVar13 + 7;
      }
      (*(code *)PTR_memcpy_004235d4)(local_3e8,iVar13,0x14);
      pbVar11 = local_3e8;
      if (param_6[2] != 0) {
        local_3c9 = (*(code *)PTR_atoi_004234b8)();
      }
      param_2 = 0x100f2;
    }
    else {
      iVar4 = (*(code *)PTR_strcmp_004234ec)(iVar13,&DAT_004120dc);
      if (iVar4 == 0) {
        if (param_5 < 2) goto LAB_0040a92c;
        local_4bc = (*(code *)PTR_atoi_004234b8)(param_6[1]);
        iVar4 = FUN_00408db4(0xf0,&local_4b4);
        if (iVar4 == 0) goto LAB_0040a390;
        pbVar11 = local_3e8;
        if (local_4b4 < local_4bc) goto LAB_0040a994;
        local_3e8[0] = (byte)local_4bc;
        iVar4 = FUN_00408db4(0x80f1,pbVar11);
        if (iVar4 == 0) goto LAB_0040a6f8;
        param_2 = 0x200f3;
      }
      else {
        iVar4 = (*(code *)PTR_strcmp_004234ec)(iVar13,"delall");
        pbVar11 = local_3e8;
        if (iVar4 == 0) {
          param_2 = 0x400f4;
        }
      }
    }
    break;
  case 0x11:
    iVar13 = *param_6;
    iVar4 = (*(code *)PTR_strcmp_004234ec)(iVar13,&DAT_004120b8);
    if (iVar4 == 0) {
      if (param_5 < 7) {
LAB_0040a92c:
        pcVar9 = "input argument is not enough!";
        pcVar14 = (code *)PTR_puts_004235c4;
        goto LAB_0040ab74;
      }
      local_408 = (*(code *)PTR_atoi_004234b8)(param_6[1]);
      pbVar11 = (byte *)&local_408;
      local_406 = (*(code *)PTR_atoi_004234b8)(param_6[2]);
      uVar7 = (*(code *)PTR_atoi_004234b8)(param_6[3]);
      local_404 = CONCAT13(uVar7,local_404._1_3_);
      uVar2 = (*(code *)PTR_atoi_004234b8)(param_6[4]);
      uVar12 = local_404;
      uVar2 = (uVar2 & 0xffff) << 8;
      local_404 = local_404 & 0xff0000ff | uVar2;
      uVar3 = (*(code *)PTR_atoi_004234b8)(param_6[5]);
      local_404 = uVar12 & 0xff000000 | uVar2 | (uVar3 & 0xffff) >> 8;
      local_400 = local_400 & 0xffffff | uVar3 << 0x18;
      uVar7 = (*(code *)PTR_atoi_004234b8)(param_6[6]);
      local_400._1_3_ = CONCAT12(uVar7,local_400._2_2_);
      if (param_5 == 7) {
        local_400 = CONCAT22(local_400._0_2_,local_400._2_2_) & 0xffff00ff;
      }
      else {
        (*(code *)PTR_strcpy_00423600)((int)&local_400 + 2,param_6[7]);
      }
      param_2 = 0x10089;
    }
    else {
      iVar4 = (*(code *)PTR_strcmp_004234ec)(iVar13,&DAT_004120dc);
      if (iVar4 == 0) {
        if (1 < param_5) {
          local_4bc = (*(code *)PTR_atoi_004234b8)(param_6[1]);
          iVar4 = FUN_00408db4(0x87,&local_4b4);
          if (iVar4 == 0) {
            pcVar9 = "Get trigger-port entry number error!";
            pcVar14 = (code *)PTR_printf_004235f4;
          }
          else {
            pbVar11 = (byte *)&local_408;
            if (local_4b4 < local_4bc) goto LAB_0040a994;
            local_408 = CONCAT11((char)local_4bc,(undefined1)local_408);
            iVar4 = FUN_00408db4(0x8088,pbVar11);
            if (iVar4 != 0) {
              param_2 = 0x2008a;
              break;
            }
            pcVar9 = "Get trigger-port table entry error!";
            pcVar14 = (code *)PTR_printf_004235f4;
          }
          goto LAB_0040ab74;
        }
        goto LAB_0040a92c;
      }
      iVar4 = (*(code *)PTR_strcmp_004234ec)(iVar13,"delall");
      pbVar11 = (byte *)&local_408;
      if (iVar4 == 0) {
        param_2 = 0x4008b;
      }
    }
    break;
  case 0x12:
    iVar13 = *param_6;
    iVar4 = (*(code *)PTR_strcmp_004234ec)(iVar13,&DAT_004120b8);
    if (iVar4 == 0) {
      if (param_5 < 3) goto LAB_0040a92c;
      iVar13 = param_6[1];
      iVar4 = (*(code *)PTR_strlen_004234b4)(iVar13);
      if (iVar4 == 0xc) {
        pbVar11 = local_428;
        iVar4 = FUN_00404bf4(iVar13,pbVar11,0xc);
        if (iVar4 != 0) {
          (*(code *)PTR_strcpy_00423600)(auStack_41e,param_6[2]);
          param_2 = 0x10042;
          local_422 = (*(code *)PTR_strtoul_004235b4)(param_6[3],0,10);
          break;
        }
      }
      goto LAB_0040aa74;
    }
    iVar4 = (*(code *)PTR_strcmp_004234ec)(iVar13,&DAT_004120dc);
    if (iVar4 == 0) {
      if (param_5 < 2) goto LAB_0040a92c;
      local_4bc = (*(code *)PTR_atoi_004234b8)(param_6[1]);
      iVar4 = FUN_00408db4(0x40,&local_4b4);
      if (iVar4 == 0) {
        pcVar9 = "Get wds number error!";
        pcVar14 = (code *)PTR_printf_004235f4;
        goto LAB_0040ab74;
      }
      pbVar11 = local_428;
      if (local_4b4 < local_4bc) goto LAB_0040a994;
      local_428[0] = (byte)local_4bc;
      iVar4 = FUN_00408db4(0x8041,pbVar11);
      if (iVar4 == 0) goto LAB_0040a6f8;
      param_2 = 0x20043;
    }
    else {
      iVar4 = (*(code *)PTR_strcmp_004234ec)(iVar13,"delall");
      pbVar11 = local_428;
      if (iVar4 == 0) {
        param_2 = 0x40044;
      }
    }
    break;
  case 0x13:
    iVar13 = *param_6;
    iVar4 = (*(code *)PTR_strcmp_004234ec)(iVar13,&DAT_004120b8);
    if (iVar4 == 0) {
      if (param_5 < 9) goto LAB_0040a92c;
      pbVar11 = local_324;
      local_314 = (*(code *)PTR_atoi_004234b8)(param_6[1]);
      iVar4 = (*(code *)PTR_inet_aton_0042351c)(param_6[4],auStack_30c);
      if ((iVar4 == 0) ||
         (iVar4 = (*(code *)PTR_inet_aton_0042351c)(param_6[5],auStack_308), iVar4 == 0))
      goto LAB_0040a00c;
      iVar13 = param_6[2];
      iVar4 = (*(code *)PTR_strlen_004234b4)(iVar13);
      if ((iVar4 != 0xc) || (iVar4 = FUN_00404bf4(iVar13,auStack_313,0xc), iVar4 == 0)) {
        pcVar9 = "invalid MAC address!";
        pcVar14 = (code *)PTR_puts_004235c4;
        goto LAB_0040ab74;
      }
      param_2 = 0x10138;
      local_30d = (*(code *)PTR_atoi_004234b8)(param_6[3]);
      local_304 = (*(code *)PTR_atoi_004234b8)(param_6[6]);
      (*(code *)PTR_strcpy_00423600)(pbVar11,param_6[7]);
      local_300 = (*(code *)PTR_atoi_004234b8)(param_6[8]);
    }
    else {
      iVar4 = (*(code *)PTR_strcmp_004234ec)(iVar13,&DAT_004120dc);
      if (iVar4 == 0) {
        if (param_5 < 2) goto LAB_0040a92c;
        local_4bc = (*(code *)PTR_atoi_004234b8)(param_6[1]);
        iVar4 = FUN_00408db4(0x136,&local_4b4);
        if (iVar4 == 0) {
          pcVar9 = "Get QoS entry number error!";
          pcVar14 = (code *)PTR_printf_004235f4;
          goto LAB_0040ab74;
        }
        pbVar11 = local_324;
        if (local_4b4 < local_4bc) goto LAB_0040a994;
        local_324[0] = (byte)local_4bc;
        iVar4 = FUN_00408db4(0x8137,pbVar11);
        if (iVar4 == 0) goto LAB_0040a6f8;
        param_2 = 0x20139;
      }
      else {
        iVar4 = (*(code *)PTR_strcmp_004234ec)(iVar13,"delall");
        pbVar11 = local_324;
        if (iVar4 == 0) {
          param_2 = 0x4013a;
        }
      }
    }
    break;
  case 0x14:
    iVar13 = *param_6;
    iVar4 = (*(code *)PTR_strcmp_004234ec)(iVar13,&DAT_004120b8);
    if (iVar4 == 0) {
      if (param_5 < 2) {
LAB_0040a4e0:
        pcVar9 = "Mesh Acl Addr input argument is not enough!";
        pcVar14 = (code *)PTR_puts_004235c4;
      }
      else {
        iVar13 = param_6[1];
        iVar4 = (*(code *)PTR_strlen_004234b4)(iVar13);
        if (iVar4 == 0xc) {
          pbVar11 = local_47c;
          iVar4 = FUN_00404bf4(iVar13,pbVar11,0xc);
          if (iVar4 != 0) {
            if (param_5 == 2) {
              local_476[0] = 0;
            }
            else {
              (*(code *)PTR_strcpy_00423600)(local_476,param_6[2]);
            }
            param_2 = 0x10247;
            break;
          }
        }
        pcVar9 = "Mesh Acl Addr invalid value!";
        pcVar14 = (code *)PTR_puts_004235c4;
      }
    }
    else {
      iVar4 = (*(code *)PTR_strcmp_004234ec)(iVar13,&DAT_004120dc);
      if (iVar4 != 0) {
        iVar4 = (*(code *)PTR_strcmp_004234ec)(iVar13,"delall");
        pbVar11 = local_47c;
        if (iVar4 == 0) {
          param_2 = 0x40249;
        }
        break;
      }
      if (param_5 < 2) goto LAB_0040a4e0;
      local_4bc = (*(code *)PTR_atoi_004234b8)(param_6[1]);
      iVar4 = FUN_00408db4(0x245,&local_4b4);
      if (iVar4 == 0) {
        pcVar9 = "Mesh Acl Addr get port forwarding entry number error!";
        pcVar14 = (code *)PTR_printf_004235f4;
      }
      else {
        pbVar11 = local_47c;
        if (local_4b4 < local_4bc) {
          pcVar9 = "Mesh Acl Addr element number is too large!";
          pcVar14 = (code *)PTR_puts_004235c4;
        }
        else {
          local_47c[0] = (byte)local_4bc;
          iVar4 = FUN_00408db4(0x8246,pbVar11);
          if (iVar4 != 0) {
            param_2 = 0x20248;
            break;
          }
          pcVar9 = "Mesh Acl Addr get table entry error!";
          pcVar14 = (code *)PTR_printf_004235f4;
        }
      }
    }
    goto LAB_0040ab74;
  case 0x15:
    iVar4 = (*(code *)PTR_strcmp_004234ec)(*param_6,&DAT_004121f4);
    if (iVar4 != 0) {
LAB_00409f60:
      (*(code *)PTR_printf_004235f4)
                ("cmd not support! try\n flash set [MIB] mod [index(1-%d)] [Enable(0/1)] [day(0-7)] [formTime(min,0-1440)] [toTime(min,0-1440)]\n"
                 ,10);
      return;
    }
    if (param_5 < 5) goto LAB_0040a92c;
    local_4bc = (*(code *)PTR_atoi_004234b8)(param_6[1]);
    iVar4 = FUN_00408db4(0x1f8,&local_4b4);
    if (iVar4 == 0) {
      pcVar9 = "Get WLAN_SCHEDULE entry number error!";
      pcVar14 = (code *)PTR_printf_004235f4;
    }
    else if ((local_4b4 < local_4bc) || (local_4bc < 1)) {
      pcVar9 = "Element number must be 1-10!";
      pcVar14 = (code *)PTR_puts_004235c4;
    }
    else {
      local_39c[0] = (byte)local_4bc;
      iVar4 = FUN_00408db4(0x81f9,local_39c);
      if (iVar4 != 0) {
        (*(code *)PTR_memcpy_004235d4)(auStack_380,local_39c,0x1c);
        local_36c = (*(code *)PTR_atoi_004234b8)(param_6[2]);
        bVar1 = 1 < local_36c;
        uVar5 = (*(code *)PTR_atoi_004234b8)(param_6[3]);
        local_366 = uVar5;
        uVar6 = (*(code *)PTR_atoi_004234b8)(param_6[4]);
        local_36a = uVar6;
        local_368 = (*(code *)PTR_atoi_004234b8)(param_6[5]);
        if ((((bVar1) || (7 < uVar5)) || (0x59f < uVar6)) ||
           ((0x59f < local_368 || (local_368 < uVar6)))) goto LAB_00409f60;
        param_2 = 0x1201fb;
        pbVar11 = local_39c;
        break;
      }
LAB_0040a6f8:
      pcVar9 = "Get table entry error!";
      pcVar14 = (code *)PTR_printf_004235f4;
    }
    goto LAB_0040ab74;
  case 0x16:
    iVar13 = *param_6;
    iVar4 = (*(code *)PTR_strcmp_004234ec)(iVar13,&DAT_004120b8);
    if (iVar4 == 0) {
      if (param_5 < 6) goto LAB_0040a92c;
      pbVar11 = &local_4b0;
      local_4b0 = (*(code *)PTR_atoi_004234b8)(param_6[1]);
      param_2 = 0x1026b;
      (*(code *)PTR_strcpy_00423600)(auStack_4af,param_6[2]);
      local_49f = (*(code *)PTR_atoi_004234b8)(param_6[3]);
      local_49e = (*(code *)PTR_atoi_004234b8)(param_6[4]);
      local_49d = (*(code *)PTR_atoi_004234b8)(param_6[5]);
      local_49c = (*(code *)PTR_atoi_004234b8)(param_6[6]);
    }
    else {
      iVar4 = (*(code *)PTR_strcmp_004234ec)(iVar13,&DAT_004120dc);
      if (iVar4 == 0) {
        if (param_5 < 8) goto LAB_0040a92c;
        local_4bc = (*(code *)PTR_atoi_004234b8)(param_6[1]);
        iVar4 = FUN_00408db4(0x269,&local_4b4);
        if (iVar4 == 0) {
          pcVar9 = "Get VLAN config entry number error!";
          pcVar14 = (code *)PTR_printf_004235f4;
          goto LAB_0040ab74;
        }
        pbVar11 = &local_4b0;
        if (local_4b4 < local_4bc) goto LAB_0040a994;
        local_4b0 = (byte)local_4bc;
        iVar4 = FUN_00408db4(0x826a,pbVar11);
        if (iVar4 == 0) goto LAB_0040a6f8;
        local_4b0 = 0;
        param_2 = 0x2026c;
      }
      else {
        iVar4 = (*(code *)PTR_strcmp_004234ec)(iVar13,"delall");
        pbVar11 = &local_4b0;
        if (iVar4 == 0) {
          param_2 = 0x4026d;
        }
      }
    }
    break;
  case 0x17:
    iVar13 = *param_6;
    iVar4 = (*(code *)PTR_strcmp_004234ec)(iVar13,&DAT_004120b8);
    if (iVar4 == 0) {
      iVar4 = (*(code *)PTR_strcmp_004234ec)(param_1,"PROFILE_TBL1");
      if (iVar4 == 0) {
        param_2 = 0x10837;
      }
      else {
        param_2 = 0x10849;
      }
      (*(code *)PTR_strcpy_00423600)(local_100,param_6[1]);
      cVar8 = (*(code *)PTR_atoi_004234b8)(param_6[2]);
      local_df = cVar8;
      local_de = (*(code *)PTR_atoi_004234b8)(param_6[3]);
      if ((byte)(cVar8 - 1U) < 2) {
        local_9b = (*(code *)PTR_atoi_004234b8)(param_6[4]);
        if (cVar8 == '\x01') {
          FUN_00404bf4(param_6[5],auStack_9a,10);
          FUN_00404bf4(param_6[6],auStack_7f,10);
          FUN_00404bf4(param_6[7],auStack_64,10);
          iVar4 = param_6[8];
          uVar10 = 10;
        }
        else {
          FUN_00404bf4(param_6[5],auStack_9a,0x1a);
          FUN_00404bf4(param_6[6],auStack_7f,0x1a);
          FUN_00404bf4(param_6[7],auStack_64,0x1a);
          iVar4 = param_6[8];
          uVar10 = 0x1a;
        }
        FUN_00404bf4(iVar4,auStack_49,uVar10);
      }
      else {
        if (1 < (byte)(cVar8 - 3U)) {
LAB_0040aac4:
          pbVar11 = local_100;
          break;
        }
        local_dd = (*(code *)PTR_atoi_004234b8)(param_6[4]);
        (*(code *)PTR_strcpy_00423600)(auStack_dc,param_6[5]);
      }
    }
    else {
      iVar4 = (*(code *)PTR_strcmp_004234ec)(iVar13,&DAT_004120dc);
      if (iVar4 != 0) {
        iVar4 = (*(code *)PTR_strcmp_004234ec)(iVar13,"delall");
        if (iVar4 != 0) goto LAB_0040aac4;
        iVar4 = (*(code *)PTR_strcmp_004234ec)(param_1,"PROFILE_TBL1");
        pbVar11 = local_100;
        if (iVar4 == 0) {
          param_2 = 0x40839;
        }
        else {
          param_2 = 0x4084b;
        }
        break;
      }
      iVar4 = (*(code *)PTR_strcmp_004234ec)(param_1,"PROFILE_TBL1");
      if (iVar4 == 0) {
        param_2 = 0x20838;
      }
      else {
        param_2 = 0x2084a;
      }
      if (param_5 < 2) goto LAB_0040a92c;
      local_4bc = (*(code *)PTR_atoi_004234b8)(param_6[1]);
      iVar4 = (*(code *)PTR_strcmp_004234ec)(param_1,"PROFILE_TBL1");
      uVar10 = 0x835;
      if (iVar4 != 0) {
        uVar10 = 0x847;
      }
      FUN_00408db4(uVar10,&local_4b4);
      if (local_4b4 < local_4bc) {
LAB_0040a994:
        pcVar9 = "Element number is too large!";
        pcVar14 = (code *)PTR_puts_004235c4;
        goto LAB_0040ab74;
      }
      local_100[0] = (byte)local_4bc;
      iVar4 = (*(code *)PTR_strcmp_004234ec)(param_1,"PROFILE_TBL1");
      uVar10 = 0x8836;
      if (iVar4 != 0) {
        uVar10 = 0x8848;
      }
      FUN_00408db4(uVar10,local_100);
    }
    pbVar11 = local_100;
  }
  pcVar14 = (code *)PTR_apmib_set_00423574;
  if (DAT_00423630 - 3U < 2) {
    pcVar14 = (code *)PTR_apmib_setDef_004235c8;
  }
  iVar4 = (*pcVar14)(param_2,pbVar11);
  if (iVar4 == 0) {
    (*(code *)PTR_puts_004235c4)("set MIB failed!");
  }
  (*(code *)PTR_puts_004235c4)("setMIB end...");
  if (DAT_00423630 != 0) {
    if (DAT_00423630 - 1U < 2) {
      pcVar9 = (char *)0x1;
      pcVar14 = (code *)PTR_apmib_update_00423578;
    }
    else {
      pcVar9 = (char *)0x2;
      pcVar14 = (code *)PTR_apmib_update_00423578;
      if (1 < DAT_00423630 - 3U) {
        pcVar9 = (char *)0x4;
        pcVar14 = (code *)PTR_apmib_update_00423578;
      }
    }
LAB_0040ab74:
    (*pcVar14)(pcVar9);
  }
  return;
}


/* FUN_0040aba8 @ 0040aba8 */

void FUN_0040aba8(undefined1 *param_1)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  undefined1 *puVar7;
  char *pcVar8;
  int iVar9;
  undefined *puVar10;
  undefined4 *puVar11;
  int iVar12;
  char *pcVar13;
  int iVar14;
  code *pcVar15;
  undefined1 *local_1a0 [2];
  undefined1 auStack_198 [40];
  undefined1 auStack_170 [100];
  char local_10c [204];
  int local_40;
  undefined1 *local_3c;
  undefined1 **local_38;
  char *local_34;
  int local_30;
  
  iVar6 = (*(code *)PTR_apmib_init_004234ac)();
  if (iVar6 == 0) {
    pcVar13 = "Initialize AP MIB failed!";
    pcVar15 = (code *)PTR_puts_004235c4;
  }
  else {
    iVar6 = (*(code *)PTR_fopen_00423510)(param_1,"r");
    puVar5 = PTR_mib_wlan_table_004235e8;
    puVar4 = PTR_mib_table_0042358c;
    if (iVar6 == 0) {
      pcVar13 = "read file [%s] failed!\n";
LAB_0040ae00:
      (*(code *)PTR_printf_004235f4)(pcVar13,param_1);
      return;
    }
    local_1a0[0] = auStack_170;
    local_38 = local_1a0;
    local_40 = 0;
    bVar3 = false;
    bVar2 = false;
    param_1 = auStack_198;
    local_3c = local_1a0[0];
LAB_0040aebc:
    iVar9 = (*(code *)PTR_fgets_004235dc)(local_10c,200,iVar6);
    iVar12 = 0;
    pcVar13 = local_10c;
    if (iVar9 != 0) {
      while( true ) {
        cVar1 = *pcVar13;
        if ((cVar1 == '\0') || (cVar1 == '\n')) goto LAB_0040aebc;
        if (cVar1 == '=') break;
        iVar12 = iVar12 + 1;
        pcVar13 = pcVar13 + 1;
      }
      if (1 < iVar12) {
        local_34 = pcVar13;
        local_30 = iVar12;
        (*(code *)PTR_memcpy_004235d4)(param_1,local_10c,iVar12);
        puVar7 = param_1 + local_30;
        iVar12 = local_30 + -1;
        goto LAB_0040acb8;
      }
      goto LAB_0040aebc;
    }
    (*(code *)PTR_fclose_004234fc)(iVar6);
    if (bVar2) {
      (*(code *)PTR_apmib_update_00423578)(1);
    }
    if (bVar3) {
      (*(code *)PTR_apmib_update_00423578)(2);
    }
    pcVar13 = (char *)0x4;
    pcVar15 = (code *)PTR_apmib_update_00423578;
    if (local_40 == 0) {
      return;
    }
  }
  (*pcVar15)(pcVar13);
  return;
  while (iVar12 = iVar12 + -1, -1 < iVar12) {
LAB_0040acb8:
    pcVar13 = puVar7 + -1;
    puVar7 = puVar7 + -1;
    if (*pcVar13 != ' ') break;
  }
  pcVar13 = local_34 + 1;
  auStack_198[iVar12 + 1] = 0;
  if (pcVar13 != (char *)0x0) {
    pcVar8 = pcVar13;
    iVar12 = 0;
    do {
      iVar9 = iVar12;
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
      if ((cVar1 == '\0') || (cVar1 == '\n')) break;
      iVar12 = iVar9 + 1;
    } while (cVar1 != '\r');
    for (iVar12 = 0; (0 < iVar9 && (pcVar13[iVar12] == ' ')); iVar12 = iVar12 + 1) {
      iVar9 = iVar9 + -1;
    }
    if (pcVar13[iVar12] == '\"') {
      iVar14 = iVar12 + iVar9 + -1;
      if ((iVar12 < iVar14) && (pcVar13[iVar14] == '\"')) {
        iVar12 = iVar12 + 1;
        iVar9 = iVar14 - iVar12;
      }
    }
    if (iVar9 < 1) {
      if (iVar9 == 0) goto LAB_0040aebc;
    }
    else {
      local_30 = iVar9;
      (*(code *)PTR_memcpy_004235d4)(local_3c,pcVar13 + iVar12,iVar9);
      local_3c[local_30] = 0;
    }
    iVar12 = FUN_00401c7c(param_1);
    if (iVar12 == -1) {
      pcVar13 = "invalid param [%s]!\n";
      goto LAB_0040ae00;
    }
    if (DAT_00423630 - 1U < 2) {
      bVar2 = true;
      puVar10 = PTR_hwmib_wlan_table_004234e8;
      if (DAT_00423630 == 1) {
        puVar10 = PTR_hwmib_table_00423580;
      }
    }
    else {
      puVar10 = puVar5;
      if (DAT_00423630 - 3U < 2) {
        if (DAT_00423630 == 3) {
          puVar10 = puVar4;
        }
        bVar3 = true;
      }
      else {
        if (DAT_00423630 == 5) {
          puVar10 = puVar4;
        }
        local_40 = 1;
      }
    }
    DAT_00423630 = 0;
    puVar11 = (undefined4 *)(puVar10 + iVar12 * 0x3c);
    FUN_00408fa4(param_1,*puVar11,puVar11[9],puVar11[0xb],1,local_38);
  }
  goto LAB_0040aebc;
}


/* FUN_0040af80 @ 0040af80 */

void FUN_0040af80(undefined4 param_1,int param_2,uint param_3,int param_4,int *param_5)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  char *pcVar6;
  uint uVar7;
  undefined4 uVar8;
  byte bVar9;
  undefined *puVar10;
  undefined *puVar11;
  uint uVar12;
  char *pcVar13;
  uint uVar14;
  byte *pbVar15;
  uint uVar16;
  uint uVar17;
  char *pcVar18;
  int iVar19;
  uint local_1290;
  uint local_128c;
  uint local_1288;
  int local_1284;
  undefined1 auStack_1280 [100];
  undefined auStack_121c [20];
  undefined4 auStack_1208 [95];
  char local_108c [1024];
  char local_c8c [1024];
  undefined1 local_88c [2];
  undefined1 uStack_88a;
  byte local_888;
  byte local_887;
  byte local_886;
  byte bStack_885;
  byte bStack_884;
  byte bStack_883;
  byte local_882;
  undefined1 local_881;
  undefined1 local_880;
  undefined1 local_87c;
  byte local_87b;
  byte local_87a;
  byte local_879;
  undefined2 local_878;
  undefined2 local_876;
  undefined2 local_874;
  undefined2 uStack_872;
  undefined4 local_870;
  undefined1 local_86c [4];
  undefined4 local_868;
  byte local_864 [61];
  undefined1 local_827;
  undefined1 local_826;
  byte local_825;
  undefined1 local_824;
  undefined1 local_823;
  undefined1 local_822;
  undefined1 local_821;
  undefined1 local_820;
  undefined1 local_81f;
  undefined1 local_81e;
  undefined1 local_81d;
  undefined1 local_81c;
  undefined1 local_81b;
  undefined1 local_81a;
  undefined1 local_80b;
  undefined1 local_80a;
  undefined1 local_809;
  undefined1 local_808;
  undefined1 local_807;
  undefined1 local_806;
  undefined1 local_805;
  undefined1 local_804;
  undefined1 local_803;
  undefined1 local_802;
  undefined1 local_801;
  undefined1 local_800;
  undefined1 local_7ff;
  undefined1 local_7f0;
  undefined1 local_7ef;
  undefined1 local_7ee;
  undefined1 local_7ed;
  byte local_7ec;
  undefined1 local_7eb;
  undefined1 local_7ea;
  undefined1 local_7e9;
  undefined1 local_7e8;
  undefined1 local_7e7;
  undefined1 local_7e6;
  undefined1 local_7e5;
  undefined1 local_7e4;
  byte local_7d5;
  byte local_7d4;
  byte local_7d3;
  byte local_7d2;
  byte local_7d1;
  undefined1 local_7d0;
  undefined1 local_7cf;
  undefined1 local_7ce;
  undefined1 local_7cd;
  undefined1 local_7cc;
  undefined1 local_7cb;
  undefined1 local_7ca;
  undefined1 local_7c9;
  undefined4 *local_88;
  undefined *local_84;
  uint *local_80;
  byte *local_7c;
  int local_78;
  byte *local_74;
  uint local_70;
  uint local_6c;
  uint local_68;
  uint local_64;
  uint local_60;
  byte *local_5c;
  undefined4 *local_58;
  undefined4 *local_54;
  undefined4 *local_50;
  undefined **local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  uint *local_3c;
  uint local_38;
  undefined *local_34;
  uint local_30;
  
  (*(code *)PTR_memset_0042350c)(local_108c,0,0x400);
  local_1288 = 0;
  (*(code *)PTR_memset_0042350c)(auStack_1280,0,100);
  if (param_4 == 0) {
LAB_0040bfcc:
    if (param_3 == 2) {
      pcVar18 = "%s=\"%s\"\n";
    }
    else {
      pcVar18 = "%s=%s\n";
    }
    (*(code *)PTR_printf_004235f4)(pcVar18,auStack_1280,local_108c);
  }
  else {
    (*(code *)PTR_strcat_00423564)(auStack_1280,param_1);
    local_4c = &switchD_0040b0b0::switchdataD_00413358 + param_3;
    local_7c = &local_887;
    local_80 = (uint *)(local_88c + 1);
    local_74 = local_864;
    local_5c = &bStack_885;
    local_58 = (undefined4 *)&local_874;
    local_54 = &local_870;
    local_50 = &local_868;
    local_78 = 0;
    iVar19 = 1;
    pcVar18 = (char *)0x0;
    while (iVar3 = (*(code *)PTR_strlen_004234b4)(local_108c), param_3 < 0x18) {
      switch((uint)*local_4c & 0xfffffffe) {
      case 0x40b0b8:
        pcVar18 = "%d";
        local_3c = &local_128c;
        goto LAB_0040b140;
      case 0x40b0c8:
        pcVar18 = "%s";
        local_3c = &local_1290;
        goto LAB_0040b140;
      case 0x40b0d8:
        pcVar18 = "%02x%02x%02x%02x%02x";
        break;
      case 0x40b0e4:
        pcVar18 = "%02x%02x%02x%02x%02x%02x";
        break;
      case 0x40b0f0:
        pcVar18 = "%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x";
        break;
      case 0x40b0fc:
        pcVar18 = "%s";
        break;
      case 0x40b108:
        pcVar18 = "%u";
        local_3c = &local_1288;
        goto LAB_0040b140;
      case 0x40b118:
        _local_88c = CONCAT13((char)iVar19,stack0xfffff775);
        local_78 = 1;
        iVar19 = iVar19 + 1;
        break;
      case 0x40b12c:
        goto switchD_0040b0b0_caseD_40b12c;
      }
      local_3c = (uint *)local_88c;
LAB_0040b140:
      iVar4 = FUN_00408db4(param_2,local_3c);
      if (iVar4 == 0) {
        pcVar18 = "Get MIB failed!";
        goto LAB_0040b4b4;
      }
      pcVar13 = local_108c + iVar3;
      if (param_3 == 6) {
        puVar5 = (uint *)(*(code *)PTR_inet_ntoa_004234f4)(local_1290);
LAB_0040b1c0:
        (*(code *)PTR_sprintf_004234e0)(pcVar13,pcVar18,puVar5);
        if (param_3 == 2) {
          puVar10 = (undefined *)0x0;
          puVar11 = (undefined *)0x0;
          for (pcVar6 = pcVar13; cVar1 = *pcVar6, cVar1 != '\0'; pcVar6 = pcVar6 + 1) {
            if ((((cVar1 == '\"') || (cVar1 == '\\')) || (cVar1 == '$')) ||
               ((cVar1 == '`' || (cVar1 == ' ')))) {
              local_c8c[(int)puVar10] = '\\';
              puVar10 = puVar10 + 1;
            }
            puVar11 = puVar11 + 1;
            local_c8c[(int)puVar10] = *pcVar6;
            puVar10 = puVar10 + 1;
          }
          if (puVar10 != puVar11) {
            local_34 = puVar10;
            (*(code *)PTR_memcpy_004235d4)(pcVar13,local_c8c,puVar10);
            pcVar13[(int)local_34] = '\0';
          }
        }
        goto LAB_0040bef8;
      }
      pcVar6 = pcVar18;
      uVar7 = local_128c;
      if (param_3 < 2) goto LAB_0040b4d8;
      puVar5 = local_3c;
      if (param_3 == 2) goto LAB_0040b1c0;
      uVar2 = local_88c[1];
      bVar9 = local_88c[0];
      if (param_3 == 3) {
        (*(code *)PTR_sprintf_004234e0)
                  (pcVar13,pcVar18,local_88c[0],local_88c[1],uStack_88a,_local_88c & 0xff,local_888,
                   local_887);
LAB_0040b324:
        FUN_00402158(pcVar13);
      }
      else {
        if (param_3 == 4) {
          (*(code *)PTR_sprintf_004234e0)
                    (pcVar13,pcVar18,local_88c[0],local_88c[1],uStack_88a,_local_88c & 0xff,
                     local_888,local_887,local_886);
          goto LAB_0040b324;
        }
        if (param_3 == 5) {
          (*(code *)PTR_sprintf_004234e0)
                    (pcVar13,pcVar18,local_88c[0],local_88c[1],uStack_88a,_local_88c & 0xff,
                     local_888,local_887,local_886,bStack_885,bStack_884,bStack_883,local_882,
                     local_881,local_880);
          goto LAB_0040b324;
        }
        if (param_3 == 8) {
          if ((param_2 - 0x385U < 7) ||
             ((local_34 = (undefined *)0xc4, 4 < param_2 - 0x38eU &&
              (local_34 = (undefined *)0x32, param_2 != 0x3ae)))) {
            local_34 = (undefined *)0xe;
          }
          if ((param_5 == (int *)0x0) || (*param_5 == 0)) {
            local_88 = (undefined4 *)local_88c;
            local_38 = 0;
            local_84 = auStack_121c;
            do {
              (*(code *)PTR_sprintf_004234e0)
                        (local_84,"%02x",*(undefined1 *)((int)local_88 + local_38));
              local_38 = local_38 + 1;
              (*(code *)PTR_strcat_00423564)(pcVar13,local_84);
            } while ((int)local_38 < (int)local_34);
            goto LAB_0040b324;
          }
          iVar3 = (*(code *)PTR_atoi_004234b8)();
          if ((0 < iVar3) && (iVar3 <= (int)local_34)) {
            pcVar6 = "%d";
            uVar7 = (uint)*(byte *)((int)local_3c + iVar3 + -1);
            goto LAB_0040b4d8;
          }
          pcVar18 = "invalid channel number";
          goto LAB_0040b4b4;
        }
        uVar7 = local_1288;
        if (param_3 == 7) {
LAB_0040b4d8:
          (*(code *)PTR_sprintf_004234e0)(pcVar13,pcVar6,uVar7);
          goto LAB_0040bef8;
        }
        if (param_3 == 0xb) {
          local_3c = (uint *)(uint)local_888;
          local_38 = (uint)local_887;
          local_48 = (uint)local_886;
          local_44 = (uint)bStack_885;
          local_40 = (uint)bStack_884;
          local_34 = (undefined *)(uint)bStack_883;
          uVar7 = (*(code *)PTR_inet_ntoa_004234f4)(_local_88c);
          pcVar6 = "%02x%02x%02x%02x%02x%02x,%s,%s";
          puVar5 = local_3c;
          uVar17 = local_38;
          uVar16 = local_48;
          uVar14 = local_44;
          uVar12 = local_40;
          puVar10 = local_34;
LAB_0040b67c:
          (*(code *)PTR_sprintf_004234e0)
                    (pcVar13,pcVar6,puVar5,uVar17,uVar16,uVar14,uVar12,puVar10,uVar7);
        }
        else {
          if (param_3 == 0x16) {
            local_1284 = -1;
            (*(code *)PTR_apmib_get_004235ac)(0xc0,&local_1284);
            iVar3 = (*(code *)PTR_strncmp_00423540)(local_80,&DAT_0041100c,4);
            if (iVar3 == 0) {
              uVar7 = (uint)(local_1284 - 1U < 2);
            }
            else {
              uVar8 = (*(code *)PTR_strlen_004234b4)(local_80);
              iVar3 = (*(code *)PTR_strncmp_00423540)("wlan0",local_80,uVar8);
              uVar7 = 1;
              if (iVar3 == 0) {
                uVar7 = (uint)(local_1284 != 2);
              }
            }
            uVar16 = (uint)local_87b;
            uVar14 = (uint)local_87a;
            uVar12 = (uint)local_879;
            uVar17 = _local_88c >> 0x18;
            puVar10 = (undefined *)(uint)local_878;
            pcVar6 = "%s,%d,%d,%d,%d,%d,%d";
            puVar5 = local_80;
            goto LAB_0040b67c;
          }
          if (param_3 == 0x15) {
            (*(code *)PTR_sprintf_004234e0)
                      (pcVar13,"%d,%d,%d,%d",local_878,uStack_872,local_876,local_874);
            goto LAB_0040bef8;
          }
          if (param_3 == 0xc) {
            uVar8 = (*(code *)PTR_inet_ntoa_004234f4)(_local_88c);
            uVar7 = (uint)(local_86c + 3) & 3;
            (*(code *)PTR_sprintf_004234e0)
                      (pcVar13,"%s, %d, %d, %d, %d",uVar8,CONCAT11(local_888,local_887),
                       CONCAT11(local_886,bStack_885),bStack_884,
                       (uint)local_86c & -1 << (uVar7 + 1) * 8 |
                       *(uint *)(local_86c + 3 + -uVar7) >> (3 - uVar7) * 8);
            if (*local_74 == 0) goto LAB_0040bef8;
            pcVar6 = ", %s";
            pbVar15 = local_74;
LAB_0040baf4:
            local_34 = auStack_121c;
            (*(code *)PTR_sprintf_004234e0)(local_34,pcVar6,pbVar15);
            puVar10 = local_34;
LAB_0040beec:
            (*(code *)PTR_strcat_00423564)(pcVar13,puVar10);
          }
          else {
            if (param_3 != 0xe) {
              if (param_3 == 0xd) {
                uVar8 = (*(code *)PTR_inet_ntoa_004234f4)(_local_88c);
                (*(code *)PTR_sprintf_004234e0)(pcVar13,"%s, %d",uVar8,local_888);
                bVar9 = *local_7c;
                goto LAB_0040b83c;
              }
              if (param_3 == 0xf) {
                pcVar6 = "%02x:%02x:%02x:%02x:%02x:%02x";
LAB_0040bac8:
                (*(code *)PTR_sprintf_004234e0)
                          (pcVar13,pcVar6,bVar9,uVar2,uStack_88a,_local_88c & 0xff,local_888,
                           local_887);
                if (local_886 != 0) {
                  pcVar6 = ", %s";
                  pbVar15 = &local_886;
                  goto LAB_0040baf4;
                }
                goto LAB_0040bef8;
              }
              if (param_3 == 0x10) {
                iVar3 = (*(code *)PTR_strncmp_00423540)(local_88c,"http://",7);
                pbVar15 = local_88c;
                if (iVar3 == 0) {
                  pbVar15 = local_5c;
                }
                (*(code *)PTR_strcpy_00423600)(pcVar13,pbVar15);
                pcVar6 = ", %d";
                pbVar15 = (byte *)(uint)(byte)local_870;
                goto LAB_0040baf4;
              }
              if (param_3 == 0x11) {
                (*(code *)PTR_sprintf_004234e0)
                          (pcVar13,"%d, %d, %d, %d, %d, %d",local_88c,_local_88c & 0xffff,local_888,
                           CONCAT11(local_887,local_886),CONCAT11(bStack_885,bStack_884),bStack_883)
                ;
LAB_0040bb5c:
                if (local_882 != 0) {
                  pcVar6 = ", %s";
                  pbVar15 = &local_882;
                  goto LAB_0040baf4;
                }
                goto LAB_0040bef8;
              }
              if (param_3 == 0x13) {
                local_84 = auStack_121c;
                local_88 = auStack_1208;
                uVar8 = (*(code *)PTR_inet_ntoa_004234f4)(*local_58);
                (*(code *)PTR_strcpy_00423600)(local_84,uVar8);
                uVar8 = (*(code *)PTR_inet_ntoa_004234f4)(*local_54);
                (*(code *)PTR_strcpy_00423600)(local_88,uVar8);
                (*(code *)PTR_sprintf_004234e0)
                          (pcVar13,"%d, %02x%02x%02x%02x%02x%02x, %d, %s, %s, %d, %d, %s, %s",
                           local_87c,local_87b,local_87a,local_879,local_878._0_1_,
                           (undefined1)local_878,local_876._0_1_,(undefined1)local_876,local_84,
                           local_88,local_86c,local_868,local_88c);
                goto LAB_0040bef8;
              }
              if ((param_3 == 10) || (param_3 == 0x14)) {
                pcVar6 = "%02x%02x%02x%02x%02x%02x";
                goto LAB_0040bac8;
              }
              if (param_3 == 0x12) {
                (*(code *)PTR_sprintf_004234e0)
                          (pcVar13,"%02x%02x%02x%02x%02x%02x,%u",bVar9,uVar2,uStack_88a,
                           _local_88c & 0xff,local_888,local_887,
                           CONCAT31(CONCAT21(CONCAT11(local_886,bStack_885),bStack_884),bStack_883))
                ;
                goto LAB_0040bb5c;
              }
              if (param_3 != 0x17) goto LAB_0040bef8;
              (*(code *)PTR_sprintf_004234e0)
                        (pcVar13,"%s,enc=%d,auth=%d",local_88c,local_86c[1],
                         (uint)local_86c >> 8 & 0xff);
              if ((byte)(local_86c[1] - 1U) < 2) {
                local_84 = PTR_sprintf_004234e0;
                local_88 = (undefined4 *)(uint)local_825;
                local_30 = (uint)local_7ec;
                local_70 = (uint)local_7d5;
                local_6c = (uint)local_7d4;
                local_68 = (uint)local_7d3;
                local_64 = (uint)local_7d2;
                local_60 = (uint)local_7d1;
                if (local_86c[1] == '\x01') {
                  (*(code *)PTR_sprintf_004234e0)
                            (auStack_121c,
                             ",id=%d,key1=%02x%02x%02x%02x%02x,key2=%02x%02x%02x%02x%02x,key3=%02x%02x%02x%02x%02x,key4=%02x%02x%02x%02x%02x"
                             ,local_827,local_826,local_88,local_824,local_823,local_822,local_80b,
                             local_80a,local_809,local_808,local_807,local_7f0,local_7ef,local_7ee,
                             local_7ed,local_30,local_70,local_6c,local_68,local_64,local_60);
                }
                else {
                  (*(code *)PTR_sprintf_004234e0)
                            (auStack_121c,
                             ",id=%d,key1=%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x,key2=%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x,key3=%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x,key4=%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x"
                             ,local_827,local_826,local_88,local_824,local_823,local_822,local_821,
                             local_820,local_81f,local_81e,local_81d,local_81c,local_81b,local_81a,
                             local_80b,local_80a,local_809,local_808,local_807,local_806,local_805,
                             local_804,local_803,local_802,local_801,local_800,local_7ff,local_7f0,
                             local_7ef,local_7ee,local_7ed,local_30,local_7eb,local_7ea,local_7e9,
                             local_7e8,local_7e7,local_7e6,local_7e5,local_7e4,local_70,local_6c,
                             local_68,local_64,local_60,local_7d0,local_7cf,local_7ce,local_7cd,
                             local_7cc,local_7cb,local_7ca,local_7c9);
                }
                puVar10 = auStack_121c;
              }
              else {
                if (1 < (byte)(local_86c[1] - 3U)) goto LAB_0040bef8;
                local_34 = auStack_121c;
                (*(code *)PTR_sprintf_004234e0)
                          (auStack_121c,",wpa_cipher=%d,psk=%s",(uint)local_86c & 0xff,local_50);
                puVar10 = local_34;
              }
              goto LAB_0040beec;
            }
            (*(code *)PTR_sprintf_004234e0)
                      (pcVar13,"%d, %d, %d",local_88c,_local_88c & 0xffff,local_888);
            bVar9 = *local_7c;
LAB_0040b83c:
            if (bVar9 != 0) {
              pcVar6 = ", %s";
              pbVar15 = local_7c;
              goto LAB_0040baf4;
            }
          }
        }
      }
LAB_0040bef8:
      param_4 = param_4 + -1;
      if (param_4 < 1) {
        if (local_78 != 0) {
          if (param_3 == 2) {
            pcVar18 = "%s%d=\"%s\"\n";
          }
          else {
            pcVar18 = "%s%d=%s\n";
          }
          (*(code *)PTR_printf_004235f4)(pcVar18,auStack_1280,iVar19 + -1,local_108c);
          return;
        }
        goto LAB_0040bfcc;
      }
      if (local_78 == 0) {
        if (param_3 == 2) {
          pcVar13 = "%s=\"%s\"\n";
        }
        else {
          pcVar13 = "%s=%s\n";
        }
        (*(code *)PTR_printf_004235f4)(pcVar13,auStack_1280,local_108c);
      }
      else {
        if (param_3 == 2) {
          pcVar13 = "%s%d=\"%s\"\n";
        }
        else {
          pcVar13 = "%s%d=%s\n";
        }
        (*(code *)PTR_printf_004235f4)(pcVar13,auStack_1280,iVar19 + -1,local_108c);
      }
      local_108c[0] = '\0';
    }
switchD_0040b0b0_caseD_40b12c:
    pcVar18 = "invalid mib!";
LAB_0040b4b4:
    (*(code *)PTR_puts_004235c4)(pcVar18);
  }
  return;
}


/* FUN_0040c02c @ 0040c02c */

void FUN_0040c02c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  int local_38 [2];
  int *local_30;
  
  iVar3 = (*(code *)PTR_apmib_init_004234ac)();
  puVar2 = PTR_vwlan_idx_0042355c;
  puVar1 = PTR_wlan_idx_00423548;
  if (iVar3 == 0) {
    (*(code *)PTR_puts_004235c4)("Initialize AP MIB failed!");
    uVar4 = DAT_00423630;
  }
  else {
    *(undefined4 *)PTR_vwlan_idx_0042355c = 0;
    DAT_00423630 = 0;
    puVar7 = (undefined *)0x0;
LAB_0040c0b0:
    uVar4 = DAT_00423630 + 1;
    if (uVar4 < 7) {
      puVar8 = PTR_hwmib_table_00423580;
      if (((((DAT_00423630 != 0) && (puVar8 = PTR_hwmib_wlan_table_004234e8, uVar4 != 2)) &&
           (puVar8 = PTR_mib_table_0042358c, uVar4 != 3)) && (uVar4 != 5)) &&
         ((uVar4 == 4 || (puVar8 = puVar7, uVar4 == 6)))) {
        puVar8 = PTR_mib_wlan_table_004235e8;
      }
      iVar3 = 0;
      DAT_00423630 = uVar4;
      do {
        while( true ) {
          local_30 = (int *)(puVar8 + iVar3 * 0x3c);
          iVar5 = *local_30;
          if (iVar5 == 0) break;
          uVar6 = 0x35;
          if ((((((iVar5 == 0x8036) || (uVar6 = 0x835, iVar5 == 0x8836)) ||
                (uVar6 = 0x847, iVar5 == 0x8848)) ||
               (((uVar6 = 0x6f, iVar5 == 0x8070 || (uVar6 = 0x40, iVar5 == 0x8041)) ||
                ((uVar6 = 0x1f8, iVar5 == 0x81f9 ||
                 ((uVar6 = 0x269, iVar5 == 0x826a || (uVar6 = 0x81, iVar5 == 0x8082)))))))) ||
              (uVar6 = 0x75, iVar5 == 0x8076)) ||
             ((((uVar6 = 0x7b, iVar5 == 0x807c || (uVar6 = 0xf0, iVar5 == 0x80f1)) ||
               (uVar6 = 0x87, iVar5 == 0x8088)) || (uVar6 = 0x136, iVar5 == 0x8137)))) {
LAB_0040c1e8:
            FUN_00408db4(uVar6,local_38);
          }
          else {
            if (iVar5 == 0x8126) {
              uVar6 = 0x125;
              goto LAB_0040c1e8;
            }
            local_38[0] = 1;
          }
          if ((0 < local_38[0]) && (local_30[9] != 9)) {
            if (DAT_00423630 - 1 < 2) {
              puVar7 = &DAT_00410dd4;
LAB_0040c264:
              (*(code *)PTR_printf_004235f4)(puVar7);
            }
            else if (DAT_00423630 - 3 < 2) {
              puVar7 = &DAT_00410de0;
              goto LAB_0040c264;
            }
            if (DAT_00423630 == 2) {
LAB_0040c2bc:
              (*(code *)PTR_printf_004235f4)("WLAN%d_",*(undefined4 *)puVar1);
            }
            else if ((DAT_00423630 == 4) || (DAT_00423630 == 6)) {
              if (*(int *)puVar2 < 1) goto LAB_0040c2bc;
              (*(code *)PTR_printf_004235f4)
                        ("WLAN%d_VAP%d_",*(undefined4 *)puVar1,*(int *)puVar2 + -1);
            }
            FUN_0040af80(local_30 + 1,*local_30,local_30[9],local_38[0],0);
          }
          iVar3 = iVar3 + 1;
        }
        puVar7 = puVar8;
        if (DAT_00423630 == 2) {
LAB_0040c35c:
          iVar3 = *(int *)puVar1;
          *(int *)puVar1 = iVar3 + 1;
          if (0 < iVar3 + 1) goto code_r0x0040c370;
        }
        else {
          if ((DAT_00423630 != 4) && (DAT_00423630 != 6)) goto LAB_0040c0b0;
          iVar3 = *(int *)puVar2;
          *(int *)puVar2 = iVar3 + 1;
          if (5 < iVar3 + 1) {
            *(undefined4 *)puVar2 = 0;
            goto LAB_0040c35c;
          }
        }
        iVar3 = 0;
      } while( true );
    }
  }
  DAT_00423630 = uVar4;
  return;
code_r0x0040c370:
  *(undefined4 *)PTR_wlan_idx_00423548 = 0;
  goto LAB_0040c0b0;
}


/* FUN_0040c3ac @ 0040c3ac */

void FUN_0040c3ac(undefined4 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  int local_40 [2];
  int *local_38;
  int *local_34;
  int local_30;
  
  iVar3 = (*(code *)PTR_apmib_init_004234ac)();
  puVar2 = PTR_vwlan_idx_0042355c;
  puVar1 = PTR_wlan_idx_00423548;
  if (iVar3 == 0) {
    (*(code *)PTR_puts_004235c4)("Initialize AP MIB failed!");
    uVar4 = DAT_00423630;
  }
  else {
    *(undefined4 *)PTR_vwlan_idx_0042355c = 0;
    DAT_00423630 = 0;
    puVar7 = (undefined *)0x0;
LAB_0040c430:
    uVar4 = DAT_00423630 + 1;
    if (uVar4 < 7) {
      puVar8 = PTR_hwmib_table_00423580;
      if (((((DAT_00423630 != 0) && (puVar8 = PTR_hwmib_wlan_table_004234e8, uVar4 != 2)) &&
           (puVar8 = PTR_mib_table_0042358c, uVar4 != 3)) && (uVar4 != 5)) &&
         ((uVar4 == 4 || (puVar8 = puVar7, uVar4 == 6)))) {
        puVar8 = PTR_mib_wlan_table_004235e8;
      }
      iVar3 = 0;
      DAT_00423630 = uVar4;
      do {
        while( true ) {
          local_38 = (int *)(puVar8 + iVar3 * 0x3c);
          local_30 = *local_38;
          if (local_30 == 0) break;
          local_34 = local_38 + 1;
          iVar5 = (*(code *)PTR_strstr_00423550)(local_34,param_1);
          if (iVar5 != 0) {
            uVar6 = 0x35;
            if (local_30 == 0x8036) {
LAB_0040c504:
              FUN_00408db4(uVar6,local_40);
            }
            else {
              if (local_30 == 0x8041) {
                uVar6 = 0x40;
                goto LAB_0040c504;
              }
              uVar6 = 0x1f8;
              if ((((((local_30 == 0x81f9) || (uVar6 = 0x269, local_30 == 0x826a)) ||
                    (uVar6 = 0x6f, local_30 == 0x8070)) ||
                   (((uVar6 = 0x81, local_30 == 0x8082 || (uVar6 = 0x75, local_30 == 0x8076)) ||
                    ((uVar6 = 0x7b, local_30 == 0x807c ||
                     ((uVar6 = 0xf0, local_30 == 0x80f1 || (uVar6 = 0x87, local_30 == 0x8088))))))))
                  || (uVar6 = 0x136, local_30 == 0x8137)) || (uVar6 = 0x125, local_30 == 0x8126))
              goto LAB_0040c504;
              local_40[0] = 1;
            }
            if ((0 < local_40[0]) && (local_38[9] != 9)) {
              if (DAT_00423630 - 1 < 2) {
                puVar7 = &DAT_00410dd4;
LAB_0040c5f8:
                (*(code *)PTR_printf_004235f4)(puVar7);
              }
              else if (DAT_00423630 - 3 < 2) {
                puVar7 = &DAT_00410de0;
                goto LAB_0040c5f8;
              }
              if (DAT_00423630 == 2) {
LAB_0040c650:
                (*(code *)PTR_printf_004235f4)("WLAN%d_",*(undefined4 *)puVar1);
              }
              else if ((DAT_00423630 == 4) || (DAT_00423630 == 6)) {
                if (*(int *)puVar2 < 1) goto LAB_0040c650;
                (*(code *)PTR_printf_004235f4)
                          ("WLAN%d_VAP%d_",*(undefined4 *)puVar1,*(int *)puVar2 + -1);
              }
              FUN_0040af80(local_34,*local_38,local_38[9],local_40[0],0);
            }
          }
          iVar3 = iVar3 + 1;
        }
        puVar7 = puVar8;
        if (DAT_00423630 == 2) {
LAB_0040c6f0:
          iVar3 = *(int *)puVar1;
          *(int *)puVar1 = iVar3 + 1;
          if (0 < iVar3 + 1) goto code_r0x0040c704;
        }
        else {
          if ((DAT_00423630 != 4) && (DAT_00423630 != 6)) goto LAB_0040c430;
          iVar3 = *(int *)puVar2;
          *(int *)puVar2 = iVar3 + 1;
          if (5 < iVar3 + 1) {
            *(undefined4 *)puVar2 = 0;
            goto LAB_0040c6f0;
          }
        }
        iVar3 = 0;
      } while( true );
    }
  }
  DAT_00423630 = uVar4;
  return;
code_r0x0040c704:
  *(undefined4 *)PTR_wlan_idx_00423548 = 0;
  goto LAB_0040c430;
}


/* main @ 0040c740 */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

undefined4 main(int param_1,undefined4 *param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  undefined2 uVar8;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar9;
  char cVar12;
  int *piVar10;
  undefined4 *puVar11;
  char *pcVar13;
  bool bVar15;
  undefined *puVar14;
  undefined4 uVar16;
  undefined4 uVar17;
  char *pcVar18;
  undefined4 uVar19;
  int iVar20;
  undefined4 uVar21;
  undefined *puVar22;
  undefined1 *puVar23;
  int *piVar24;
  code *pcVar25;
  undefined4 local_4f20;
  int *local_4f1c;
  int local_4f18;
  int iStack_4f14;
  undefined2 local_4f10;
  int local_4f08;
  undefined1 auStack_4f04 [20];
  char local_4ef0 [120];
  char acStack_4e78 [100];
  char acStack_4e14 [100];
  char local_4db0 [100];
  int local_4d4c [171];
  undefined1 auStack_4aa0 [52];
  uint local_4a6c;
  undefined4 local_46a0;
  char local_469c;
  char local_469b;
  char local_469a;
  char local_4699;
  char local_4698;
  char local_4697;
  char local_4696;
  char local_4695;
  undefined1 auStack_42a0 [17000];
  undefined1 *local_38;
  undefined1 *local_34;
  int *local_30;
  int *local_2c;
  
  (*(code *)PTR_memset_0042350c)(local_4ef0 + 0x14,0,100);
  if (param_1 < 2) {
LAB_0040fa38:
    FUN_00408dec();
LAB_0040fa40:
    uVar21 = 0xffffffff;
    goto LAB_004106cc;
  }
  uVar21 = param_2[1];
  iVar2 = (*(code *)PTR_strcmp_004234ec)(uVar21,&DAT_00412788);
  if (iVar2 != 0) {
    iVar2 = (*(code *)PTR_strcmp_004234ec)(uVar21,&DAT_00412794);
    if (iVar2 == 0) {
      if (param_1 != 2) {
        (*(code *)PTR_sscanf_00423524)(param_2[2],"%s",local_4ef0 + 0x14);
      }
      FUN_0040c3ac(local_4ef0 + 0x14);
      return 0;
    }
    iVar2 = (*(code *)PTR_strcmp_004234ec)(uVar21,&DAT_0041279c);
    if (iVar2 == 0) {
      iVar2 = 0;
      if (param_1 != 2) {
        if (param_1 < 5) {
LAB_0040cb54:
          iVar20 = 2;
        }
        else {
          iVar20 = param_2[2];
          iVar2 = (*(code *)PTR_memcmp_0042352c)(iVar20,&DAT_0041278c,4);
          if (iVar2 != 0) goto LAB_0040cb54;
          uVar3 = (*(code *)PTR_strlen_004234b4)(iVar20);
          if ((((8 < uVar3) && (*(char *)(iVar20 + 5) == '-')) && (*(char *)(iVar20 + 6) == 'v')) &&
             (*(char *)(iVar20 + 7) == 'a')) {
            iVar2 = (*(code *)PTR_atoi_004234b8)(iVar20 + 8);
            if (4 < iVar2) goto LAB_0040f4f8;
            *(int *)PTR_vwlan_idx_0042355c = iVar2 + 1;
          }
          iVar2 = param_2[2];
          uVar3 = (*(code *)PTR_strlen_004234b4)(iVar2);
          if (((8 < uVar3) && (*(char *)(iVar2 + 5) == '-')) &&
             (iVar2 = (*(code *)PTR_memcmp_0042352c)(iVar2 + 6,&DAT_00410e48,3), iVar2 == 0)) {
            *(undefined4 *)PTR_vwlan_idx_0042355c = 5;
          }
          iVar2 = (*(code *)PTR_atoi_004234b8)(param_2[2] + 4);
          iVar20 = 3;
          if (0 < iVar2) goto LAB_0040f3ac;
          *(int *)PTR_wlan_idx_00423548 = iVar2;
        }
        pcVar13 = local_4ef0 + 0x14;
        (*(code *)PTR_sscanf_00423524)(param_2[iVar20],"%s",pcVar13);
        iVar2 = (*(code *)PTR_strcmp_004234ec)(pcVar13,&DAT_004127a0);
        piVar9 = (int *)0x1;
        if (iVar2 != 0) {
          iVar2 = (*(code *)PTR_strcmp_004234ec)(pcVar13,"WLAN0_SSID");
          piVar9 = (int *)0x1;
          if (iVar2 != 0) {
            iVar2 = (*(code *)PTR_strcmp_004234ec)(pcVar13,"WLAN0_WSC_SSID");
            piVar9 = (int *)0x1;
            if (iVar2 != 0) {
              iVar2 = (*(code *)PTR_strcmp_004234ec)(pcVar13,"WLAN0_VAP0_SSID");
              piVar9 = (int *)0x1;
              if (iVar2 != 0) {
                iVar2 = (*(code *)PTR_strcmp_004234ec)(pcVar13,"WLAN0_VAP1_SSID");
                piVar9 = (int *)0x1;
                if (iVar2 != 0) {
                  iVar2 = (*(code *)PTR_strcmp_004234ec)(pcVar13,"WLAN0_VAP2_SSID");
                  piVar9 = (int *)0x1;
                  if (iVar2 != 0) {
                    iVar2 = (*(code *)PTR_strcmp_004234ec)(pcVar13,"WLAN0_VAP3_SSID");
                    piVar9 = (int *)0x1;
                    if (iVar2 != 0) {
                      iVar2 = (*(code *)PTR_strcmp_004234ec)(pcVar13,"WLAN0_VAP4_SSID");
                      piVar9 = (int *)0x1;
                      if (iVar2 != 0) {
                        iVar2 = (*(code *)PTR_strcmp_004234ec)(pcVar13,"REPEATER_SSID1");
                        piVar9 = (int *)0x1;
                        if (iVar2 != 0) {
                          iVar2 = (*(code *)PTR_strcmp_004234ec)(pcVar13,"REPEATER_SSID2");
                          if (iVar2 == 0) {
                            piVar9 = (int *)0x1;
                          }
                          else {
                            iVar2 = (*(code *)PTR_strcmp_004234ec)(local_4ef0 + 0x14,"NTP_TIMEZONE")
                            ;
                            piVar9 = (int *)(uint)(iVar2 == 0);
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        puVar11 = param_2 + iVar20 + 1;
        puVar23 = auStack_42a0;
        piVar24 = local_4d4c;
        piVar10 = (int *)0x1;
        iVar5 = 0;
        while (iVar20 = iVar20 + 1, iVar2 = iVar5, iVar20 < param_1) {
          iVar2 = iVar5 + 1;
          if (piVar9 == piVar10) {
            (*(code *)PTR_strcpy_00423600)(auStack_42a0 + iVar5 * 100,param_2[iVar20]);
            local_4d4c[iVar5] = (int)(auStack_42a0 + iVar5 * 100);
            break;
          }
          local_30 = piVar9;
          local_2c = piVar10;
          (*(code *)PTR_sscanf_00423524)(*puVar11,"%s",puVar23);
          *piVar24 = (int)puVar23;
          puVar11 = puVar11 + 1;
          puVar23 = puVar23 + 100;
          piVar24 = piVar24 + 1;
          piVar9 = local_30;
          piVar10 = local_2c;
          iVar5 = iVar2;
        }
        local_4d4c[iVar2] = 0;
      }
      iVar20 = 2;
      goto LAB_00410740;
    }
    iVar2 = (*(code *)PTR_strcmp_004234ec)(uVar21,"virtual_flash_init");
    if (iVar2 == 0) {
      return 1;
    }
    iVar2 = (*(code *)PTR_strcmp_004234ec)(uVar21,&DAT_00412858);
    if (iVar2 == 0) {
      iVar2 = 0;
      iVar20 = 3;
      goto LAB_00410740;
    }
    iVar2 = (*(code *)PTR_strcmp_004234ec)(uVar21,"default");
    uVar17 = 1;
    if (iVar2 == 0) {
LAB_0040ce40:
      uVar21 = FUN_004024b4(uVar17);
      return uVar21;
    }
    iVar2 = (*(code *)PTR_strcmp_004234ec)(uVar21,"default-sw");
    if (iVar2 == 0) {
      uVar17 = 0;
      goto LAB_0040ce40;
    }
    iVar2 = (*(code *)PTR_strcmp_004234ec)(uVar21,"reset");
    if (iVar2 == 0) {
      local_4f1c = (int *)0x0;
      uVar21 = (*(code *)PTR_open_004234b0)("/dev/mtdblock0",2);
      (*(code *)PTR_apmib_sem_lock_004234c8)();
      pcVar13 = (char *)(*(code *)PTR_apmib_dsconf_00423594)();
      if (pcVar13 == (char *)0x0) {
        (*(code *)PTR_puts_004235c4)("Default configuration invalid!");
        goto LAB_0040d21c;
      }
      iVar2 = (*(code *)PTR_mib_get_setting_len_0042359c)(2);
      local_30 = (int *)(iVar2 << 2);
      local_4f1c = (int *)0x0;
      iVar2 = (*(code *)PTR_malloc_004235b8)(local_30);
      (*(code *)PTR_memset_0042350c)(iVar2,0,local_30);
      if ((iVar2 == 0) ||
         (iVar20 = (*(code *)PTR_mib_tlv_save_00423500)(2,pcVar13,iVar2,&local_4f1c), iVar20 != 1))
      {
LAB_0040d090:
        (*(code *)PTR_sprintf_004234e0)(&iStack_4f14,"%s%02d",&DAT_00411014,1);
        local_4f10 = 0x6a36;
        cVar12 = '\0';
        pcVar4 = pcVar13;
        do {
          cVar1 = *pcVar4;
          pcVar4 = pcVar4 + 1;
          cVar12 = cVar12 + cVar1;
        } while (pcVar4 != pcVar13 + 0x6a35);
        local_4f18 = CONCAT13(-cVar12,local_4f18._1_3_);
        (*(code *)PTR_sprintf_004234e0)(&iStack_4f14,"%s%02d",&DAT_00411064,1);
        local_4f10 = 0x6a36;
        pcVar4 = pcVar13;
      }
      else {
        pcVar4 = (char *)(*(code *)PTR_malloc_004235b8)((undefined *)((int)local_4f1c + 1));
        if (pcVar4 != (char *)0x0) {
          (*(code *)PTR_memcpy_004235d4)(pcVar4,iVar2,local_4f1c);
        }
        (*(code *)PTR_free_0042348c)(iVar2);
        if (pcVar4 == (char *)0x0) goto LAB_0040d090;
        (*(code *)PTR_sprintf_004234e0)(&iStack_4f14,"%s%02d",&DAT_00411014,1);
        puVar14 = PTR_sprintf_004234e0;
        local_4f10 = SUB42((undefined *)((int)local_4f1c + 1),0);
        cVar12 = '\0';
        for (iVar2 = 0; iVar2 < (int)(((uint)((int)local_4f1c + 1) & 0xffff) - 1); iVar2 = iVar2 + 1
            ) {
          cVar12 = cVar12 + pcVar4[iVar2];
        }
        local_4f18 = CONCAT13(-cVar12,local_4f18._1_3_);
        cVar12 = '\0';
        for (iVar2 = 0; iVar2 < (int)local_4f1c; iVar2 = iVar2 + 1) {
          cVar12 = cVar12 + pcVar4[iVar2];
        }
        pcVar4[(int)local_4f1c] = -cVar12;
        (*(code *)puVar14)(&iStack_4f14,"%s%02d",&DAT_00411064,1);
        cVar12 = '\0';
        local_4f10 = SUB42((undefined *)((int)local_4f1c + 1),0);
        for (iVar2 = 0; iVar2 < (int)(((uint)((int)local_4f1c + 1) & 0xffff) - 1); iVar2 = iVar2 + 1
            ) {
          cVar12 = cVar12 + pcVar4[iVar2];
        }
        local_4f18 = CONCAT13(-cVar12,local_4f18._1_3_);
      }
      (*(code *)PTR_lseek_00423598)(uVar21,0xc000,0);
      iVar2 = FUN_004014b0(4,pcVar4,&iStack_4f14,&local_4f18);
      if (iVar2 != 1) {
        iVar2 = (*(code *)PTR_write_00423568)(uVar21,PTR_dsHeader_004234c0,6);
        puVar14 = PTR_dsHeader_004234c0;
        if (iVar2 == 6) {
          uVar3 = (*(code *)PTR_write_00423568)
                            (uVar21,pcVar13,*(undefined2 *)(PTR_dsHeader_004234c0 + 4));
          if (uVar3 == *(ushort *)(puVar14 + 4)) goto LAB_0040d234;
          pcVar4 = "write cs MIB failed!";
        }
        else {
          pcVar4 = "write cs header failed!";
        }
        (*(code *)PTR_puts_004235c4)(pcVar4);
        (*(code *)PTR_apmib_shm_free_00423584)(pcVar13,1);
LAB_0040d21c:
        (*(code *)PTR_apmib_sem_unlock_004234f8)();
        return 0xffffffff;
      }
LAB_0040d234:
      (*(code *)PTR_close_00423490)(uVar21);
      (*(code *)PTR_sync_00423534)();
      FUN_0040188c(0xc000);
      (*(code *)PTR_apmib_load_csconf_004235d8)();
LAB_0040ef20:
      uVar21 = 1;
LAB_0040ef80:
      (*(code *)PTR_apmib_shm_free_00423584)(pcVar13,uVar21);
      (*(code *)PTR_apmib_sem_unlock_004234f8)();
      return 0;
    }
    iVar2 = (*(code *)PTR_strcmp_004234ec)(uVar21,"hostapd");
    if (iVar2 == 0) {
      iVar2 = (*(code *)PTR_apmib_init_004234ac)();
      if (iVar2 != 0) {
        pcVar13 = (char *)(*(code *)PTR_fopen_00423510)("/etc/hostapd.conf",&DAT_0041318c);
        if (pcVar13 == (char *)0x0) {
          pcVar13 = "Create hostapd config file error!";
          pcVar25 = (code *)PTR_puts_004235c4;
          goto LAB_0040d2d4;
        }
        (*(code *)PTR_strcpy_00423600)(auStack_4aa0,"interface=wlan0\n");
        (*(code *)PTR_fputs_004234a0)(auStack_4aa0,pcVar13);
        (*(code *)PTR_strcpy_00423600)(auStack_4aa0,"logger_syslog=-1\n");
        (*(code *)PTR_fputs_004234a0)(auStack_4aa0,pcVar13);
        (*(code *)PTR_strcpy_00423600)(auStack_4aa0,"logger_stdout=-1\n");
        (*(code *)PTR_fputs_004234a0)(auStack_4aa0,pcVar13);
        (*(code *)PTR_strcpy_00423600)(auStack_4aa0,"logger_syslog_level=2\n");
        (*(code *)PTR_fputs_004234a0)(auStack_4aa0,pcVar13);
        (*(code *)PTR_strcpy_00423600)(auStack_4aa0,"logger_stdout_level=2\n");
        (*(code *)PTR_fputs_004234a0)(auStack_4aa0,pcVar13);
        (*(code *)PTR_strcpy_00423600)(auStack_4aa0,"dump_file=/tmp/hostapd.dump\n");
        (*(code *)PTR_fputs_004234a0)(auStack_4aa0,pcVar13);
        (*(code *)PTR_strcpy_00423600)(auStack_4aa0,"ctrl_interface=/var/run/hostapd\n");
        (*(code *)PTR_fputs_004234a0)(auStack_4aa0,pcVar13);
        (*(code *)PTR_strcpy_00423600)(auStack_4aa0,"ctrl_interface_group=0\n");
        (*(code *)PTR_fputs_004234a0)(auStack_4aa0,pcVar13);
        local_30 = &local_46a0;
        (*(code *)PTR_apmib_get_004235ac)(1,local_30);
        (*(code *)PTR_sprintf_004234e0)(auStack_4aa0,"ssid=%s\n",local_30);
        (*(code *)PTR_fputs_004234a0)(auStack_4aa0,pcVar13);
        (*(code *)PTR_apmib_get_004235ac)(0x4a,&local_4f1c);
        if (local_4f1c == (int *)0x1) {
          pcVar4 = "hw_mode=b\n";
        }
        else {
          pcVar4 = "hw_mode=g\n";
        }
        (*(code *)PTR_strcpy_00423600)(auStack_4aa0,pcVar4);
        (*(code *)PTR_fputs_004234a0)(auStack_4aa0,pcVar13);
        if ((int)local_4f1c < 7) {
          (*(code *)PTR_strcpy_00423600)(auStack_4aa0,"ieee80211n=0");
        }
        else {
          (*(code *)PTR_strcpy_00423600)(auStack_4aa0,"ieee80211n=1\n");
          (*(code *)PTR_sprintf_004234e0)(auStack_4aa0,"%sht_capab=",auStack_4aa0);
          (*(code *)PTR_apmib_get_004235ac)(0x11c,&local_4f1c);
          if (local_4f1c == (int *)0x0) {
            (*(code *)PTR_apmib_get_004235ac)(0x11f,&local_4f1c);
            if (local_4f1c != (int *)0x0) {
              pcVar4 = "%s%s";
              pcVar18 = "[SHORT-GI-20]";
              goto LAB_0040d690;
            }
          }
          else {
            (*(code *)PTR_apmib_get_004235ac)(0x11d);
            if (local_4f1c == (int *)0x0) {
              pcVar4 = "[40-]";
            }
            else {
              pcVar4 = "[40+]";
            }
            (*(code *)PTR_sprintf_004234e0)(auStack_4aa0,&DAT_004129e0,auStack_4aa0,pcVar4);
            (*(code *)PTR_apmib_get_004235ac)(0x11f,&local_4f1c);
            if (local_4f1c != (int *)0x0) {
              pcVar4 = "%s %s";
              pcVar18 = "[SHORT-GI-40]";
LAB_0040d690:
              (*(code *)PTR_sprintf_004234e0)(auStack_4aa0,pcVar4,auStack_4aa0,pcVar18);
            }
          }
          (*(code *)PTR_apmib_get_004235ac)(0x11e,&local_4f1c);
          if (0 < (int)local_4f1c) {
            (*(code *)PTR_sprintf_004234e0)(auStack_4aa0,"%s %s",auStack_4aa0,"[MAX-AMSDU-7935]");
          }
        }
        (*(code *)PTR_sprintf_004234e0)(auStack_4aa0,"%s\n",auStack_4aa0);
        (*(code *)PTR_fputs_004234a0)(auStack_4aa0,pcVar13);
        (*(code *)PTR_apmib_get_004235ac)(2,&local_4f1c);
        if (local_4f1c != (int *)0x0) {
          (*(code *)PTR_sprintf_004234e0)(auStack_4aa0,"channel=%d\n");
          (*(code *)PTR_fputs_004234a0)(auStack_4aa0,pcVar13);
        }
        (*(code *)PTR_apmib_get_004235ac)(0x10,&local_4f1c);
        (*(code *)PTR_sprintf_004234e0)(auStack_4aa0,"beacon_int=%d\n",local_4f1c);
        (*(code *)PTR_fputs_004234a0)(auStack_4aa0,pcVar13);
        (*(code *)PTR_apmib_get_004235ac)(0x3a,&local_4f1c);
        iVar2 = (*(code *)PTR_atoi_004234b8)(&local_46a0);
        if (iVar2 == 0) {
          (*(code *)PTR_strcpy_00423600)(auStack_4aa0,"dtim_period=2\n");
        }
        else {
          (*(code *)PTR_sprintf_004234e0)(auStack_4aa0,"dtim_period=%d\n",local_4f1c);
        }
        (*(code *)PTR_fputs_004234a0)(auStack_4aa0,pcVar13);
        (*(code *)PTR_strcpy_00423600)(auStack_4aa0,"max_num_sta=255\n");
        (*(code *)PTR_fputs_004234a0)(auStack_4aa0,pcVar13);
        (*(code *)PTR_apmib_get_004235ac)(0x13,&local_4f1c);
        if (local_4f1c == (int *)0x0) {
          (*(code *)PTR_strcpy_00423600)(auStack_4aa0,"rts_threshold=2347\n");
        }
        else {
          (*(code *)PTR_sprintf_004234e0)(auStack_4aa0,"rts_threshold=%d\n");
        }
        (*(code *)PTR_fputs_004234a0)(auStack_4aa0,pcVar13);
        (*(code *)PTR_apmib_get_004235ac)(0xe,&local_4f1c);
        if (local_4f1c == (int *)0x0) {
          (*(code *)PTR_strcpy_00423600)(auStack_4aa0,"fragm_threshold=2346\n");
        }
        else {
          (*(code *)PTR_sprintf_004234e0)(auStack_4aa0,"fragm_threshold=%d\n");
        }
        (*(code *)PTR_fputs_004234a0)(auStack_4aa0,pcVar13);
        (*(code *)PTR_apmib_get_004235ac)(0x11,&local_4f1c);
        (*(code *)PTR_sprintf_004234e0)(auStack_4aa0,"preamble=%d\n",local_4f1c);
        (*(code *)PTR_fputs_004234a0)(auStack_4aa0,pcVar13);
        (*(code *)PTR_apmib_get_004235ac)(0x34,&local_4f1c);
        (*(code *)PTR_apmib_get_004235ac)(0x35,&local_4f18);
        if (local_4f1c == (int *)0x1) {
          (*(code *)PTR_strcpy_00423600)(auStack_4aa0,"macaddr_acl=1\n");
          (*(code *)PTR_fputs_004234a0)(auStack_4aa0,pcVar13);
          iVar2 = (*(code *)PTR_fopen_00423510)("/etc/hostapd.accept",&DAT_0041318c);
          if (iVar2 != 0) {
            for (; local_4f18 != 0; local_4f18 = local_4f18 + -1) {
              (*(code *)PTR_apmib_get_004235ac)(0x8036,&local_46a0);
              (*(code *)PTR_sprintf_004234e0)
                        (auStack_4aa0,"%c%c:%c%c:%c%c:%c%c:%c%c:%c%c\n",(int)local_46a0._0_1_,
                         (int)local_46a0._1_1_,(int)local_46a0._2_1_,(int)(char)local_46a0,
                         (int)local_469c,(int)local_469b,(int)local_469a,(int)local_4699,
                         (int)local_4698,(int)local_4697,(int)local_4696,(int)local_4695);
              (*(code *)PTR_fputs_004234a0)(auStack_4aa0,iVar2);
            }
LAB_0040dc54:
            (*(code *)PTR_fclose_004234fc)(iVar2);
          }
        }
        else if (local_4f1c == (int *)0x2) {
          (*(code *)PTR_strcpy_00423600)(auStack_4aa0,"macaddr_acl=0\n");
          (*(code *)PTR_fputs_004234a0)(auStack_4aa0,pcVar13);
          iVar2 = (*(code *)PTR_fopen_00423510)("/etc/hostapd.deny",&DAT_0041318c);
          if (iVar2 != 0) {
            for (; local_4f18 != 0; local_4f18 = local_4f18 + -1) {
              (*(code *)PTR_apmib_get_004235ac)(0x8036,&local_46a0);
              (*(code *)PTR_sprintf_004234e0)
                        (auStack_4aa0,"%c%c:%c%c:%c%c:%c%c:%c%c:%c%c\n",(int)local_46a0._0_1_,
                         (int)local_46a0._1_1_,(int)local_46a0._2_1_,(int)(char)local_46a0,
                         (int)local_469c,(int)local_469b,(int)local_469a,(int)local_4699,
                         (int)local_4698,(int)local_4697,(int)local_4696,(int)local_4695);
              (*(code *)PTR_fputs_004234a0)(auStack_4aa0,iVar2);
            }
            goto LAB_0040dc54;
          }
        }
        else {
          (*(code *)PTR_strcpy_00423600)(auStack_4aa0,"#macaddr_acl=0\n");
          (*(code *)PTR_fputs_004234a0)(auStack_4aa0,pcVar13);
        }
        (*(code *)PTR_apmib_get_004235ac)(0x19,&local_4f1c);
        if (local_4f1c == (int *)0x1) {
          (*(code *)PTR_strcpy_00423600)(auStack_4aa0,"auth_algs=2\n");
          (*(code *)PTR_apmib_get_004235ac)(3,&local_4f1c);
          local_2c = &local_46a0;
          if (local_4f1c == (int *)0x1) {
            (*(code *)PTR_apmib_get_004235ac)(4,local_2c);
            if (local_46a0._0_1_ != '\0') {
              (*(code *)PTR_sprintf_004234e0)(auStack_4aa0,"%swep_key0=%s\n",auStack_4aa0,local_2c);
            }
            local_2c = &local_46a0;
            (*(code *)PTR_apmib_get_004235ac)(5,local_2c);
            if (local_46a0._0_1_ != '\0') {
              (*(code *)PTR_sprintf_004234e0)(auStack_4aa0,"%swep_key1=%s\n",auStack_4aa0,local_2c);
            }
            local_2c = &local_46a0;
            (*(code *)PTR_apmib_get_004235ac)(6,local_2c);
            if (local_46a0._0_1_ != '\0') {
              (*(code *)PTR_sprintf_004234e0)(auStack_4aa0,"%swep_key2=%s\n",auStack_4aa0,local_2c);
            }
            uVar21 = 7;
          }
          else {
            (*(code *)PTR_apmib_get_004235ac)(8,local_2c);
            if (local_46a0._0_1_ != '\0') {
              (*(code *)PTR_sprintf_004234e0)(auStack_4aa0,"%swep_key0=%s\n",auStack_4aa0,local_2c);
            }
            local_2c = &local_46a0;
            (*(code *)PTR_apmib_get_004235ac)(9,local_2c);
            if (local_46a0._0_1_ != '\0') {
              (*(code *)PTR_sprintf_004234e0)(auStack_4aa0,"%swep_key1=%s\n",auStack_4aa0,local_2c);
            }
            local_2c = &local_46a0;
            (*(code *)PTR_apmib_get_004235ac)(10,local_2c);
            if (local_46a0._0_1_ != '\0') {
              (*(code *)PTR_sprintf_004234e0)(auStack_4aa0,"%swep_key2=%s\n",auStack_4aa0,local_2c);
            }
            uVar21 = 0xb;
          }
          local_2c = &local_46a0;
          (*(code *)PTR_apmib_get_004235ac)(uVar21,local_2c);
          if (local_46a0._0_1_ != '\0') {
            pcVar4 = "%swep_key3=%s\n";
            piVar9 = local_2c;
            goto LAB_0040e284;
          }
        }
        else {
          if ((int)local_4f1c < 2) {
            (*(code *)PTR_strcpy_00423600)(auStack_4aa0,"wpa=0\n");
            goto LAB_0040e2ac;
          }
          (*(code *)PTR_strcpy_00423600)(auStack_4aa0,"auth_algs=1\n");
          (*(code *)PTR_sprintf_004234e0)
                    (auStack_4aa0,"%swpa=%d\n",auStack_4aa0,(int)local_4f1c >> 1);
          piVar9 = local_4f1c;
          local_2c = &local_46a0;
          (*(code *)PTR_apmib_get_004235ac)(0x1e,local_2c);
          if (local_46a0._0_1_ != '\0') {
            (*(code *)PTR_sprintf_004234e0)
                      (auStack_4aa0,"%swpa_passphrase=%s\n",auStack_4aa0,local_2c);
          }
          (*(code *)PTR_apmib_get_004235ac)(0x1c,&local_4f1c);
          if (local_4f1c == (int *)0x1) {
            (*(code *)PTR_sprintf_004234e0)(auStack_4aa0,"%swpa_key_mgmt=WPA-EAP\n",auStack_4aa0);
            (*(code *)PTR_apmib_get_004235ac)(0x20,&local_4f1c);
            (*(code *)PTR_sprintf_004234e0)
                      (auStack_4aa0,"%sauth_server_addr=%u.%u.%u.%u\n",auStack_4aa0,local_4f1c._0_1_
                       ,(uint)local_4f1c >> 0x10 & 0xff,(uint)local_4f1c >> 8 & 0xff,
                       (uint)local_4f1c & 0xff);
            (*(code *)PTR_apmib_get_004235ac)(0x21,&local_4f1c);
            (*(code *)PTR_sprintf_004234e0)
                      (auStack_4aa0,"%sauth_server_port=%d\n",auStack_4aa0,local_4f1c);
            local_2c = &local_46a0;
            (*(code *)PTR_apmib_get_004235ac)(0x22,local_2c);
            if (local_46a0._0_1_ == '\0') {
              pcVar4 = "%sauth_server_shared_secret=\n";
              goto LAB_0040e0b0;
            }
            (*(code *)PTR_sprintf_004234e0)
                      (auStack_4aa0,"%sauth_server_shared_secret=%s\n",auStack_4aa0,local_2c);
          }
          else {
            pcVar4 = "%swpa_key_mgmt=WPA-PSK\n";
LAB_0040e0b0:
            (*(code *)PTR_sprintf_004234e0)(auStack_4aa0,pcVar4,auStack_4aa0);
          }
          (*(code *)PTR_apmib_get_004235ac)(0x1d,&local_4f1c);
          if ((0 < (int)local_4f1c) && (((uint)piVar9 & 2) != 0)) {
            (*(code *)PTR_sprintf_004234e0)(auStack_4aa0,"%swpa_pairwise=",auStack_4aa0);
            if (local_4f1c == (int *)0x1) {
              pcVar4 = "%sTKIP\n";
            }
            else if (local_4f1c == (int *)0x3) {
              pcVar4 = "%sTKIP CCMP\n";
            }
            else {
              pcVar4 = "%sCCMP\n";
            }
            (*(code *)PTR_sprintf_004234e0)(auStack_4aa0,pcVar4,auStack_4aa0);
          }
          (*(code *)PTR_apmib_get_004235ac)(0x26,&local_4f1c);
          if ((0 < (int)local_4f1c) && (((uint)piVar9 & 4) != 0)) {
            (*(code *)PTR_sprintf_004234e0)(auStack_4aa0,"%srsn_pairwise=",auStack_4aa0);
            if (local_4f1c == (int *)0x1) {
              pcVar4 = "%sTKIP\n";
            }
            else if (local_4f1c == (int *)0x3) {
              pcVar4 = "%sTKIP CCMP\n";
            }
            else {
              pcVar4 = "%sCCMP\n";
            }
            (*(code *)PTR_sprintf_004234e0)(auStack_4aa0,pcVar4,auStack_4aa0);
          }
          (*(code *)PTR_apmib_get_004235ac)(0x1f,&local_4f1c);
          (*(code *)PTR_sprintf_004234e0)
                    (auStack_4aa0,"%swpa_group_rekey=%d\n",auStack_4aa0,local_4f1c);
          (*(code *)PTR_sprintf_004234e0)
                    (auStack_4aa0,"%swpa_ptk_rekey=%d\n",auStack_4aa0,local_4f1c);
          (*(code *)PTR_apmib_get_004235ac)(0x25,&local_4f1c);
          pcVar4 = "%srsn_preauth=%d\n";
          piVar9 = local_4f1c;
LAB_0040e284:
          (*(code *)PTR_sprintf_004234e0)(auStack_4aa0,pcVar4,auStack_4aa0,piVar9);
        }
LAB_0040e2ac:
        (*(code *)PTR_fputs_004234a0)(auStack_4aa0,pcVar13);
        (*(code *)PTR_apmib_get_004235ac)(0x15,&local_4f1c);
        (*(code *)PTR_sprintf_004234e0)(auStack_4aa0,"ignore_broadcast_ssid=%d\n",local_4f1c);
        (*(code *)PTR_fputs_004234a0)(auStack_4aa0,pcVar13);
        (*(code *)PTR_apmib_get_004235ac)(0x59,&local_4f1c);
        (*(code *)PTR_sprintf_004234e0)(auStack_4aa0,"wme_enabled=%d\n",local_4f1c);
        (*(code *)PTR_fputs_004234a0)(auStack_4aa0,pcVar13);
        (*(code *)PTR_apmib_get_004235ac)(0x32,&local_4f1c);
        (*(code *)PTR_sprintf_004234e0)(auStack_4aa0,"ap_max_inactivity=%d\n",local_4f1c);
        (*(code *)PTR_fputs_004234a0)(auStack_4aa0,pcVar13);
        (*(code *)PTR_apmib_get_004235ac)(0x23,&local_4f1c);
        if (local_4f1c != (int *)0x0) {
          (*(code *)PTR_sprintf_004234e0)(auStack_4aa0,"ieee8021x=%d\n");
          (*(code *)PTR_apmib_get_004235ac)(0x20,&local_4f1c);
          (*(code *)PTR_sprintf_004234e0)
                    (auStack_4aa0,"%sauth_server_addr=%u.%u.%u.%u\n",auStack_4aa0,local_4f1c._0_1_,
                     (uint)local_4f1c >> 0x10 & 0xff,(uint)local_4f1c >> 8 & 0xff,
                     (uint)local_4f1c & 0xff);
          (*(code *)PTR_apmib_get_004235ac)(0x21,&local_4f1c);
          (*(code *)PTR_sprintf_004234e0)
                    (auStack_4aa0,"%sauth_server_port=%d\n",auStack_4aa0,local_4f1c);
          local_2c = &local_46a0;
          (*(code *)PTR_apmib_get_004235ac)(0x22,local_2c);
          if (local_46a0._0_1_ == '\0') {
            (*(code *)PTR_sprintf_004234e0)
                      (auStack_4aa0,"%sauth_server_shared_secret=\n",auStack_4aa0,local_2c);
          }
          else {
            (*(code *)PTR_sprintf_004234e0)
                      (auStack_4aa0,"%sauth_server_shared_secret=%s\n",auStack_4aa0);
          }
          (*(code *)PTR_apmib_get_004235ac)(0x27,&local_4f1c);
          if (local_4f1c != (int *)0x0) {
            (*(code *)PTR_apmib_get_004235ac)(0x28,&local_4f1c);
            (*(code *)PTR_sprintf_004234e0)
                      (auStack_4aa0,"%sacct_server_addr=%u.%u.%u.%u\n",auStack_4aa0,local_4f1c._0_1_
                       ,(uint)local_4f1c >> 0x10 & 0xff,(uint)local_4f1c >> 8 & 0xff,
                       (uint)local_4f1c & 0xff);
            (*(code *)PTR_apmib_get_004235ac)(0x29,&local_4f1c);
            (*(code *)PTR_sprintf_004234e0)
                      (auStack_4aa0,"%sacct_server_port=%d\n",auStack_4aa0,local_4f1c);
          }
          (*(code *)PTR_apmib_get_004235ac)(0x2e,&local_4f1c);
          (*(code *)PTR_sprintf_004234e0)
                    (auStack_4aa0,"%sradius_retry_primary_interval=%d\n",auStack_4aa0,local_4f1c);
          (*(code *)PTR_apmib_get_004235ac)(0x2f,&local_4f1c);
          (*(code *)PTR_sprintf_004234e0)
                    (auStack_4aa0,"%sradius_acct_interim_interval=%d\n",auStack_4aa0,local_4f1c);
          (*(code *)PTR_fputs_004234a0)(auStack_4aa0,pcVar13);
        }
        (*(code *)PTR_apmib_get_004235ac)(0x3e,&local_4f1c);
        pcVar25 = (code *)PTR_fclose_004234fc;
        if (local_4f1c == (int *)0x0) {
          (*(code *)PTR_strcpy_00423600)(auStack_4aa0,"iapp_interface=br0\n");
          (*(code *)PTR_fputs_004234a0)(auStack_4aa0,pcVar13);
          pcVar25 = (code *)PTR_fclose_004234fc;
        }
LAB_0040f96c:
        (*pcVar25)(pcVar13);
        return 0;
      }
      goto LAB_0040d2c8;
    }
    iVar2 = (*(code *)PTR_strcmp_004234ec)(uVar21,&DAT_00412e0c);
    if (iVar2 == 0) {
      if (param_1 == 2) {
        pcVar4 = (char *)*param_2;
        pcVar13 = "Usage: %s web prefix\n";
        goto LAB_0040e7b4;
      }
      local_4ef0[0] = '\0';
      local_4ef0[1] = '\0';
      local_4ef0[2] = '\0';
      local_4ef0[3] = '\0';
      local_4ef0[4] = '\0';
      local_4ef0[5] = '\0';
      local_4ef0[6] = '\0';
      local_4ef0[7] = '\0';
      local_4ef0[8] = '\0';
      local_4ef0[9] = '\0';
      local_4ef0[10] = '\0';
      local_4ef0[0xb] = '\0';
      local_4ef0[0xc] = '\0';
      local_4ef0[0xd] = '\0';
      local_4ef0[0xe] = '\0';
      local_4ef0[0xf] = '\0';
      local_4ef0[0x10] = '\0';
      local_4ef0[0x11] = '\0';
      local_4ef0[0x12] = '\0';
      local_4ef0[0x13] = '\0';
      (*(code *)PTR_sscanf_00423524)(param_2[2],"%s",auStack_4f04);
      if (param_1 != 3) {
        (*(code *)PTR_sscanf_00423524)(param_2[3],"%s",local_4ef0);
      }
      pcVar4 = local_4ef0;
      if (local_4ef0[0] == '\0') {
        iVar2 = FUN_004017c0(&iStack_4f14,0x10000,0x10);
        pcVar4 = (char *)0x0;
        if (iVar2 == 0) {
          pcVar13 = "Read web header failed!";
          pcVar25 = (code *)PTR_puts_004235c4;
          goto LAB_0040d2d4;
        }
        pcVar13 = (char *)0x0;
      }
      else {
        pcVar13 = (char *)(*(code *)PTR_open_004234b0)(pcVar4,0);
        if ((int)pcVar13 < 0) {
          pcVar13 = "Can\'t open file %s\n";
          goto LAB_0040e7b4;
        }
        (*(code *)PTR_lseek_00423598)(pcVar13,0,0);
        iVar2 = (*(code *)PTR_read_00423544)(pcVar13,&iStack_4f14,0x10);
        if (iVar2 != 0x10) {
          (*(code *)PTR_printf_004235f4)("Read web header failed %s!\n",pcVar4);
          pcVar25 = (code *)PTR_close_00423490;
          goto LAB_0040d2d4;
        }
      }
      iVar2 = (*(code *)PTR_memcmp_0042352c)(&iStack_4f14,&DAT_00412e5c,4);
      if (iVar2 != 0) {
        pcVar13 = "Invalid web image! Expect %s\n";
        pcVar4 = "w6cg";
        goto LAB_0040e7b4;
      }
      iVar2 = (*(code *)PTR_malloc_004235b8)(local_4f08);
      if (iVar2 == 0) {
        (*(code *)PTR_sprintf_004234e0)(local_4db0,"Allocate buffer failed %d!\n",local_4f08);
        pcVar13 = local_4db0;
        pcVar25 = (code *)PTR_printf_004235f4;
        goto LAB_0040d2d4;
      }
      if (pcVar4 == (char *)0x0) {
        iVar20 = FUN_004017c0(iVar2,0x10010);
        if (iVar20 != 0) goto LAB_0040e884;
LAB_0040e864:
        pcVar13 = "Read web image failed!";
      }
      else {
        iVar20 = (*(code *)PTR_read_00423544)(pcVar13,iVar2,local_4f08);
        if (iVar20 != local_4f08) goto LAB_0040e864;
        (*(code *)PTR_close_00423490)(pcVar13);
LAB_0040e884:
        cVar12 = '\0';
        for (iVar20 = 0; iVar20 < local_4f08; iVar20 = iVar20 + 1) {
          cVar12 = cVar12 + *(char *)(iVar2 + iVar20);
        }
        if (cVar12 == '\0') {
          pcVar18 = acStack_4e78;
          (*(code *)PTR_strcpy_00423600)(pcVar18,"flashweb.bz2");
          pcVar13 = (char *)(*(code *)PTR_open_004234b0)(pcVar18,0x302);
          if (pcVar13 == (char *)0xffffffff) {
            (*(code *)PTR_printf_004235f4)("Create output file error %s!\n",pcVar18);
            goto LAB_0041072c;
          }
          iVar20 = (*(code *)PTR_write_00423568)(pcVar13,iVar2,local_4f08 + -1);
          if (iVar20 != local_4f08 + -1) {
            (*(code *)PTR_printf_004235f4)("write file error %s!\n",pcVar18);
            (*(code *)PTR_free_0042348c)(iVar2);
            pcVar25 = (code *)PTR_close_00423490;
            goto LAB_0040d2d4;
          }
          (*(code *)PTR_close_00423490)(pcVar13);
          pcVar4 = local_4db0;
          (*(code *)PTR_free_0042348c)(iVar2);
          (*(code *)PTR_sync_00423534)();
          (*(code *)PTR_sprintf_004234e0)(acStack_4e14,"%sXXXXXX",pcVar18);
          (*(code *)PTR_mkstemp_004234d8)(acStack_4e14);
          (*(code *)PTR_sprintf_004234e0)(pcVar4,"bunzip2 -c %s > %s",pcVar18,acStack_4e14);
          (*(code *)PTR_system_004235bc)(pcVar4);
          (*(code *)PTR_unlink_00423538)(pcVar18);
          (*(code *)PTR_sync_00423534)();
          iVar2 = (*(code *)PTR_stat_004234cc)(acStack_4e14,auStack_4aa0);
          if (iVar2 != 0) {
            pcVar13 = "Stat file error %s!\n";
            pcVar4 = acStack_4e14;
LAB_0040e7b4:
            (*(code *)PTR_printf_004235f4)(pcVar13,pcVar4);
            return 0xffffffff;
          }
          if (0x3f < local_4a6c) {
            iVar2 = (*(code *)PTR_malloc_004235b8)();
            if (iVar2 == 0) {
              (*(code *)PTR_sprintf_004234e0)(pcVar4,"Allocate buffer failed %ld!\n",local_4a6c);
              pcVar13 = pcVar4;
              pcVar25 = (code *)PTR_printf_004235f4;
              goto LAB_0040d2d4;
            }
            pcVar13 = (char *)(*(code *)PTR_open_004234b0)(acStack_4e14,0);
            if ((int)pcVar13 < 0) {
              pcVar13 = "Can\'t open file %s\n";
              pcVar18 = acStack_4e14;
LAB_0040ed78:
              (*(code *)PTR_printf_004235f4)(pcVar13,pcVar18);
              goto LAB_0041072c;
            }
            (*(code *)PTR_lseek_00423598)(pcVar13,0,0);
            uVar3 = (*(code *)PTR_read_00423544)(pcVar13,iVar2,local_4a6c);
            if (uVar3 != local_4a6c) {
              (*(code *)PTR_printf_004235f4)("Read file error %ld!\n");
              (*(code *)PTR_free_0042348c)(iVar2);
              pcVar25 = (code *)PTR_close_00423490;
              goto LAB_0040d2d4;
            }
            (*(code *)PTR_close_00423490)(pcVar13);
            iVar20 = 0;
            (*(code *)PTR_unlink_00423538)(acStack_4e14);
            local_34 = auStack_4aa0;
            (*(code *)PTR_sync_00423534)();
            local_38 = auStack_4f04;
LAB_0040ee2c:
            if (iVar20 < (int)local_4a6c) {
              iVar5 = iVar2 + iVar20;
              (*(code *)PTR_strcpy_00423600)(pcVar18,local_38);
              piVar9 = (int *)0x0;
              (*(code *)PTR_strcat_00423564)(pcVar18,&DAT_00412f94);
              (*(code *)PTR_strcat_00423564)(pcVar18,iVar5);
              do {
                (*(code *)PTR_strcpy_00423600)(&local_46a0,pcVar18);
                piVar9 = (int *)((int)piVar9 + 1);
                local_4db0[0] = '\0';
                piVar10 = piVar9;
                pcVar13 = (char *)&local_46a0;
                do {
                  local_30 = piVar10;
                  puVar23 = (undefined1 *)(*(code *)PTR_strchr_004234a4)(pcVar13,0x2f);
                  puVar14 = PTR_strcpy_00423600;
                  piVar10 = (int *)((int)local_30 + -1);
                  if (puVar23 == (undefined1 *)0x0) {
                    pcVar13 = (char *)(*(code *)PTR_open_004234b0)(pcVar18,0x302);
                    if (pcVar13 == (char *)0xffffffff) {
                      pcVar13 = "Create output file error %s!\n";
                      goto LAB_0040ed78;
                    }
                    iVar6 = (*(code *)PTR_write_00423568)
                                      (pcVar13,iVar2 + iVar20 + 0x40,*(undefined4 *)(iVar5 + 0x3c));
                    if (iVar6 == *(int *)(iVar5 + 0x3c)) {
                      (*(code *)PTR_close_00423490)(pcVar13);
                      iVar20 = *(int *)(iVar5 + 0x3c) + 0x40 + iVar20;
                      goto LAB_0040ee2c;
                    }
                    (*(code *)PTR_printf_004235f4)("Write file error %s, len=%d!\n",pcVar18);
                    (*(code *)PTR_free_0042348c)(iVar2);
                    pcVar25 = (code *)PTR_close_00423490;
                    goto LAB_0040d2d4;
                  }
                  pcVar13 = puVar23 + 1;
                } while (piVar10 != (int *)0x0);
                *puVar23 = 0;
                (*(code *)puVar14)(pcVar4,&local_46a0);
              } while (((local_4db0[0] == '\0') ||
                       (iVar6 = (*(code *)PTR_stat_004234cc)(pcVar4,local_34), -1 < iVar6)) ||
                      (iVar6 = (*(code *)PTR_mkdir_00423498)(pcVar4,0x180), -1 < iVar6));
              pcVar13 = "Create directory %s failed!\n";
              goto LAB_0040e7b4;
            }
            (*(code *)PTR_free_0042348c)(iVar2);
            pcVar13 = local_4ef0;
            pcVar25 = (code *)PTR_unlink_00423538;
            goto LAB_0040f96c;
          }
          (*(code *)PTR_sprintf_004234e0)(pcVar4,"Invalid decompress file size %ld!\n",local_4a6c);
          (*(code *)PTR_printf_004235f4)(pcVar4);
          pcVar13 = acStack_4e14;
          pcVar25 = (code *)PTR_unlink_00423538;
          goto LAB_0040d2d4;
        }
        pcVar13 = "Web image invalid!";
      }
      (*(code *)PTR_puts_004235c4)(pcVar13);
LAB_0041072c:
      (*(code *)PTR_free_0042348c)(iVar2);
      return 0xffffffff;
    }
    iVar2 = (*(code *)PTR_strcmp_004234ec)(uVar21,"test-hwconf");
    if (iVar2 == 0) {
      (*(code *)PTR_apmib_sem_lock_004234c8)();
      pcVar13 = (char *)(*(code *)PTR_apmib_hwconf_004235f0)();
      if (pcVar13 == (char *)0x0) goto LAB_0040d21c;
      uVar21 = 0;
      goto LAB_0040ef80;
    }
    iVar2 = (*(code *)PTR_strcmp_004234ec)(uVar21,"test-dsconf");
    if (iVar2 == 0) {
      (*(code *)PTR_apmib_sem_lock_004234c8)();
      pcVar13 = (char *)(*(code *)PTR_apmib_dsconf_00423594)();
      if (pcVar13 == (char *)0x0) goto LAB_0040d21c;
      goto LAB_0040ef20;
    }
    iVar2 = (*(code *)PTR_strcmp_004234ec)(uVar21,"test-csconf");
    if (iVar2 == 0) {
      (*(code *)PTR_apmib_sem_lock_004234c8)();
      pcVar13 = (char *)(*(code *)PTR_apmib_csconf_004235a4)();
      if (pcVar13 != (char *)0x0) {
        uVar21 = 2;
        goto LAB_0040ef80;
      }
      goto LAB_0040d21c;
    }
    iVar2 = (*(code *)PTR_strcmp_004234ec)(uVar21,"default-fc");
    if (iVar2 == 0) {
      local_4f18 = 0;
      (*(code *)PTR_apmib_init_004234ac)();
      local_4f18 = 1;
      (*(code *)PTR_apmib_set_00423574)(0xc0,&local_4f18);
      (*(code *)PTR_apmib_get_004235ac)(0xad,&local_4f18);
      if (1 < local_4f18) {
        local_4f18 = 0;
      }
      (*(code *)PTR_apmib_set_00423574)(0xad,&local_4f18);
      local_4f18 = -0x3f57fe06;
      (*(code *)PTR_apmib_set_00423574)(0xaa,&local_4f18);
      local_4f18 = 3;
      (*(code *)PTR_apmib_set_00423574)(0x517,&local_4f18);
      local_4f18 = 0;
      FUN_004021d4("wlan0");
      (*(code *)PTR_apmib_set_00423574)(0x516,&local_4f18);
      pcVar13 = (char *)0x4;
      pcVar25 = (code *)PTR_apmib_update_00423578;
      goto LAB_0040f96c;
    }
    iVar2 = (*(code *)PTR_strcmp_004234ec)(uVar21,&DAT_00413020);
    if (iVar2 == 0) {
      if (param_1 < 4) {
        pcVar13 = "Miss arguments [wlan_interface config_filename]!";
        pcVar25 = (code *)PTR_puts_004235c4;
        goto LAB_0040f96c;
      }
      iVar20 = param_2[2];
      iVar2 = (*(code *)PTR_memcmp_0042352c)(iVar20,&DAT_0041278c,4);
      if (iVar2 != 0) {
LAB_0040f298:
        pcVar13 = "Miss wlan_interface argument!";
        pcVar25 = (code *)PTR_puts_004235c4;
        goto LAB_0040f96c;
      }
      uVar3 = (*(code *)PTR_strlen_004234b4)(iVar20);
      if (((8 < uVar3) && (*(char *)(iVar20 + 5) == '-')) &&
         ((*(char *)(iVar20 + 6) == 'v' && (*(char *)(iVar20 + 7) == 'a')))) {
        iVar2 = (*(code *)PTR_atoi_004234b8)(iVar20 + 8);
        if (4 < iVar2) {
LAB_0040f4f8:
          pcVar13 = "invalid virtual wlan interface index number!";
          pcVar25 = (code *)PTR_puts_004235c4;
          goto LAB_0040f96c;
        }
        *(int *)PTR_vwlan_idx_0042355c = iVar2 + 1;
      }
      iVar2 = param_2[2];
      uVar3 = (*(code *)PTR_strlen_004234b4)(iVar2);
      if (((8 < uVar3) && (*(char *)(iVar2 + 5) == '-')) &&
         (iVar2 = (*(code *)PTR_memcmp_0042352c)(iVar2 + 6,&DAT_00410e48,3), iVar2 == 0)) {
        *(undefined4 *)PTR_vwlan_idx_0042355c = 5;
      }
      iVar2 = (*(code *)PTR_atoi_004234b8)(param_2[2] + 4);
      *(int *)PTR_wlan_idx_00423548 = iVar2;
      if (0 < iVar2) goto LAB_0040f3ac;
      bVar15 = false;
      if (param_1 != 4) {
        iVar2 = (*(code *)PTR_strcmp_004234ec)(param_2[4],&DAT_00413044);
        bVar15 = iVar2 == 0;
      }
      FUN_00404014(param_2[3],bVar15);
      goto LAB_0041057c;
    }
    iVar2 = (*(code *)PTR_strcmp_004234ec)(uVar21,"-param_file");
    if (iVar2 == 0) {
      *(undefined4 *)PTR_vwlan_idx_0042355c = 0;
      if (param_1 < 4) {
        pcVar13 = "Miss arguments [wlan_interface param_file]!";
        pcVar25 = (code *)PTR_puts_004235c4;
        goto LAB_0040f96c;
      }
      iVar20 = param_2[2];
      iVar2 = (*(code *)PTR_memcmp_0042352c)(iVar20,&DAT_0041278c,4);
      if (iVar2 != 0) goto LAB_0040f298;
      uVar3 = (*(code *)PTR_strlen_004234b4)(iVar20);
      if ((((8 < uVar3) && (*(char *)(iVar20 + 5) == '-')) && (*(char *)(iVar20 + 6) == 'v')) &&
         (*(char *)(iVar20 + 7) == 'a')) {
        iVar2 = (*(code *)PTR_atoi_004234b8)(iVar20 + 8);
        if (4 < iVar2) goto LAB_0040f4f8;
        *(int *)PTR_vwlan_idx_0042355c = iVar2 + 1;
      }
      iVar2 = param_2[2];
      uVar3 = (*(code *)PTR_strlen_004234b4)(iVar2);
      if (((8 < uVar3) && (*(char *)(iVar2 + 5) == '-')) &&
         (iVar2 = (*(code *)PTR_memcmp_0042352c)(iVar2 + 6,&DAT_00410e48,3), iVar2 == 0)) {
        *(undefined4 *)PTR_vwlan_idx_0042355c = 5;
      }
      iVar2 = (*(code *)PTR_atoi_004234b8)(param_2[2] + 4);
      *(int *)PTR_wlan_idx_00423548 = iVar2;
      if (iVar2 < 1) {
        FUN_0040aba8(param_2[3]);
        return 0;
      }
LAB_0040f3ac:
      pcVar13 = "invalid wlan interface index number!";
      goto LAB_00410574;
    }
    iVar2 = (*(code *)PTR_strcmp_004234ec)(uVar21,"tblchk");
    if (iVar2 == 0) {
      uVar21 = (*(code *)PTR_mibtbl_check_004234d4)();
      return uVar21;
    }
    iVar2 = (*(code *)PTR_strcmp_004234ec)(uVar21,"wapi-check");
    if (iVar2 == 0) {
      return 0;
    }
    iVar2 = (*(code *)PTR_strcmp_004234ec)(uVar21,"set_mib");
    if (iVar2 != 0) {
      iVar2 = (*(code *)PTR_strcmp_004234ec)(uVar21,"gen-pppoe");
      if (iVar2 == 0) {
        if (4 < param_1) {
          uVar19 = param_2[4];
          uVar17 = param_2[2];
          uVar16 = param_2[3];
          uVar21 = 1;
LAB_0040f648:
          uVar21 = FUN_00403a94(uVar21,uVar17,uVar16,uVar19);
          return uVar21;
        }
      }
      else {
        iVar2 = (*(code *)PTR_strcmp_004234ec)(uVar21,"gen-pptp");
        if (iVar2 != 0) {
          iVar2 = (*(code *)PTR_strcmp_004234ec)(uVar21,"clearppp");
          if (iVar2 == 0) {
            uVar21 = (*(code *)PTR_atoi_004234b8)(param_2[2]);
            uVar21 = FUN_00406b10(uVar21,param_2[3]);
            return uVar21;
          }
          iVar2 = (*(code *)PTR_strcmp_004234ec)(uVar21,"clearl2tp");
          if (iVar2 == 0) {
            uVar8 = (*(code *)PTR_atoi_004234b8)(param_2[2]);
            uVar21 = (*(code *)PTR_atoi_004234b8)(param_2[3]);
            uVar21 = FUN_00407038(uVar8,uVar21,param_2[6],param_2[4],param_2[5]);
            return uVar21;
          }
          iVar2 = (*(code *)PTR_strcmp_004234ec)(uVar21,"settime");
          if (iVar2 == 0) {
            uVar21 = FUN_0040727c();
            return uVar21;
          }
          iVar2 = (*(code *)PTR_strcmp_004234ec)(uVar21,"upd-wsc-conf");
          uVar17 = 0;
          if (iVar2 == 0) {
            uVar21 = param_2[2];
            uVar16 = param_2[3];
            piVar9 = (int *)param_2[4];
LAB_0040f7c4:
            uVar21 = FUN_004076bc(uVar21,uVar16,uVar17,piVar9);
            return uVar21;
          }
          iVar2 = (*(code *)PTR_strcmp_004234ec)(uVar21,"gen-pin",0);
          if (iVar2 == 0) {
            local_2c = &iStack_4f14;
            (*(code *)PTR_sprintf_004234e0)(local_2c,"wlan%d",*(undefined4 *)PTR_wlan_idx_00423548);
            uVar21 = 0;
            uVar16 = 0;
            uVar17 = 1;
            piVar9 = local_2c;
            goto LAB_0040f7c4;
          }
          iVar2 = (*(code *)PTR_strcmp_004234ec)(uVar21,"gethw");
          if (iVar2 == 0) {
            iVar2 = 0;
            if (param_1 != 2) {
              iVar20 = 2;
              if (param_1 != 3) {
                iVar5 = param_2[2];
                iVar2 = (*(code *)PTR_memcmp_0042352c)(iVar5,&DAT_0041278c,4);
                iVar20 = 2;
                if (iVar2 == 0) {
                  iVar2 = (*(code *)PTR_atoi_004234b8)(iVar5 + 4);
                  iVar20 = 3;
                  if (0 < iVar2) {
LAB_0040f960:
                    pcVar13 = "invalid wlan interface index number!";
                    pcVar25 = (code *)PTR_puts_004235c4;
                    goto LAB_0040f96c;
                  }
                  *(int *)PTR_wlan_idx_00423548 = iVar2;
                }
              }
              (*(code *)PTR_sscanf_00423524)(param_2[iVar20],"%s",local_4ef0 + 0x14);
              param_2 = param_2 + iVar20 + 1;
              puVar23 = auStack_42a0;
              piVar9 = local_4d4c;
              iVar2 = 0;
              while (iVar20 = iVar20 + 1, iVar20 < param_1) {
                (*(code *)PTR_sscanf_00423524)(*param_2,"%s",puVar23);
                iVar2 = iVar2 + 1;
                *piVar9 = (int)puVar23;
                param_2 = param_2 + 1;
                puVar23 = puVar23 + 100;
                piVar9 = piVar9 + 1;
              }
              local_4d4c[iVar2] = 0;
            }
            iVar20 = 4;
          }
          else {
            iVar2 = (*(code *)PTR_strcmp_004234ec)(uVar21,"sethw");
            if (iVar2 != 0) {
              iVar20 = (*(code *)PTR_strcmp_004234ec)(uVar21,&DAT_00413188);
              iVar2 = 0;
              if (iVar20 != 0) goto LAB_0040fa38;
              iVar20 = 6;
              goto LAB_00410740;
            }
            iVar2 = 0;
            if (param_1 != 2) {
              iVar20 = 2;
              if (4 < param_1) {
                iVar5 = param_2[2];
                iVar2 = (*(code *)PTR_memcmp_0042352c)(iVar5,&DAT_0041278c,4);
                iVar20 = 2;
                if (iVar2 == 0) {
                  iVar2 = (*(code *)PTR_atoi_004234b8)(iVar5 + 4);
                  iVar20 = 3;
                  if (0 < iVar2) goto LAB_0040f960;
                  *(int *)PTR_wlan_idx_00423548 = iVar2;
                }
              }
              (*(code *)PTR_sscanf_00423524)(param_2[iVar20],"%s",local_4ef0 + 0x14);
              param_2 = param_2 + iVar20 + 1;
              puVar23 = auStack_42a0;
              piVar9 = local_4d4c;
              iVar2 = 0;
              while (iVar20 = iVar20 + 1, iVar20 < param_1) {
                (*(code *)PTR_sscanf_00423524)(*param_2,"%s",puVar23);
                iVar2 = iVar2 + 1;
                *piVar9 = (int)puVar23;
                param_2 = param_2 + 1;
                puVar23 = puVar23 + 100;
                piVar9 = piVar9 + 1;
              }
              local_4d4c[iVar2] = 0;
            }
            iVar20 = 5;
          }
          goto LAB_00410740;
        }
        if (4 < param_1) {
          uVar19 = param_2[4];
          uVar17 = param_2[2];
          uVar16 = param_2[3];
          uVar21 = 0;
          goto LAB_0040f648;
        }
      }
      pcVar13 = "Miss arguments [option-file pap-file chap-file]!";
      pcVar25 = (code *)PTR_puts_004235c4;
      goto LAB_0040d2d4;
    }
    if (param_1 == 2) {
      pcVar13 = "Miss arguments [wlan_interface]!";
      pcVar25 = (code *)PTR_puts_004235c4;
      goto LAB_0040d2d4;
    }
    iVar20 = param_2[2];
    iVar2 = (*(code *)PTR_memcmp_0042352c)(iVar20,&DAT_0041278c,4);
    if (iVar2 != 0) {
      pcVar13 = "Miss wlan_interface argument!";
      pcVar25 = (code *)PTR_puts_004235c4;
      goto LAB_0040d2d4;
    }
    uVar3 = (*(code *)PTR_strlen_004234b4)(iVar20);
    if (((8 < uVar3) && (*(char *)(iVar20 + 5) == '-')) &&
       ((*(char *)(iVar20 + 6) == 'v' && (*(char *)(iVar20 + 7) == 'a')))) {
      iVar2 = (*(code *)PTR_atoi_004234b8)(iVar20 + 8);
      if (4 < iVar2) goto LAB_0040f4f8;
      *(int *)PTR_vwlan_idx_0042355c = iVar2 + 1;
    }
    iVar2 = param_2[2];
    uVar3 = (*(code *)PTR_strlen_004234b4)(iVar2);
    if (((8 < uVar3) && (*(char *)(iVar2 + 5) == '-')) &&
       (iVar2 = (*(code *)PTR_memcmp_0042352c)(iVar2 + 6,&DAT_00410e48,3), iVar2 == 0)) {
      *(undefined4 *)PTR_vwlan_idx_0042355c = 5;
    }
    iVar2 = (*(code *)PTR_atoi_004234b8)(param_2[2] + 4);
    *(int *)PTR_wlan_idx_00423548 = iVar2;
    if (iVar2 < 1) {
      uVar21 = FUN_00404d14(param_2[2]);
      goto LAB_004106cc;
    }
    pcVar13 = "invalid wlan interface index number!";
LAB_004100e0:
    (*(code *)PTR_puts_004235c4)(pcVar13);
    goto LAB_0040fa40;
  }
  iVar2 = 0;
  if (param_1 != 2) {
    if (param_1 == 3) {
LAB_0040c914:
      iVar20 = 2;
    }
    else {
      iVar20 = param_2[2];
      iVar2 = (*(code *)PTR_memcmp_0042352c)(iVar20,&DAT_0041278c,4);
      if (iVar2 != 0) goto LAB_0040c914;
      uVar3 = (*(code *)PTR_strlen_004234b4)(iVar20);
      if (((8 < uVar3) && (*(char *)(iVar20 + 5) == '-')) &&
         ((*(char *)(iVar20 + 6) == 'v' && (*(char *)(iVar20 + 7) == 'a')))) {
        iVar2 = (*(code *)PTR_atoi_004234b8)(iVar20 + 8);
        if (4 < iVar2) goto LAB_0040f4f8;
        *(int *)PTR_vwlan_idx_0042355c = iVar2 + 1;
      }
      iVar2 = param_2[2];
      uVar3 = (*(code *)PTR_strlen_004234b4)(iVar2);
      if (((8 < uVar3) && (*(char *)(iVar2 + 5) == '-')) &&
         (iVar2 = (*(code *)PTR_memcmp_0042352c)(iVar2 + 6,&DAT_00410e48,3), iVar2 == 0)) {
        *(undefined4 *)PTR_vwlan_idx_0042355c = 5;
      }
      iVar2 = (*(code *)PTR_atoi_004234b8)(param_2[2] + 4);
      if (0 < iVar2) goto LAB_0040f3ac;
      iVar20 = 3;
      *(int *)PTR_wlan_idx_00423548 = iVar2;
    }
    (*(code *)PTR_sscanf_00423524)(param_2[iVar20],"%s",local_4ef0 + 0x14);
    param_2 = param_2 + iVar20 + 1;
    puVar23 = auStack_42a0;
    piVar9 = local_4d4c;
    iVar2 = 0;
    while (iVar20 = iVar20 + 1, iVar20 < param_1) {
      (*(code *)PTR_sscanf_00423524)(*param_2,"%s",puVar23);
      iVar2 = iVar2 + 1;
      *piVar9 = (int)puVar23;
      param_2 = param_2 + 1;
      puVar23 = puVar23 + 100;
      piVar9 = piVar9 + 1;
    }
    local_4d4c[iVar2] = 0;
  }
  iVar20 = 1;
LAB_00410740:
  if (iVar20 - 1U < 2) {
    if (local_4ef0[0x14] != '\0') {
      if (iVar20 != 2) goto LAB_0041008c;
      iVar5 = (*(code *)PTR_strcmp_004234ec)(local_4ef0 + 0x14,"MACAC_ADDR");
      if ((iVar5 == 0) ||
         (iVar5 = (*(code *)PTR_strcmp_004234ec)(local_4ef0 + 0x14,"DEF_MACAC_ADDR"), iVar5 == 0)) {
        iVar5 = local_4d4c[0];
        if (iVar2 != 0) {
          iVar6 = (*(code *)PTR_strcmp_004234ec)(local_4d4c[0],&DAT_004120b8);
          if ((iVar6 != 0) &&
             (iVar7 = (*(code *)PTR_strcmp_004234ec)(iVar5,&DAT_004120dc), iVar7 != 0)) {
            iVar7 = (*(code *)PTR_strcmp_004234ec)(iVar5,"delall");
            uVar21 = 0xffffffff;
            if (iVar7 != 0) goto LAB_004106cc;
          }
          iVar5 = (*(code *)PTR_strcmp_004234ec)(iVar5,&DAT_004120dc);
          if (((iVar5 == 0) || (iVar6 == 0)) && (uVar21 = 0xffffffff, local_4d4c[1] == 0))
          goto LAB_004106cc;
          goto LAB_0040fb44;
        }
      }
      else {
LAB_0040fb44:
        iVar5 = (*(code *)PTR_strcmp_004234ec)(local_4ef0 + 0x14,"VLANCONFIG_TBL");
        if ((iVar5 == 0) ||
           (iVar5 = (*(code *)PTR_strcmp_004234ec)(local_4ef0 + 0x14,"DEF_VLANCONFIG_TBL"),
           iVar5 == 0)) {
          iVar5 = local_4d4c[0];
          if (iVar2 == 0) goto LAB_004106c8;
          iVar6 = (*(code *)PTR_strcmp_004234ec)(local_4d4c[0],&DAT_004120b8);
          if ((iVar6 != 0) &&
             (iVar6 = (*(code *)PTR_strcmp_004234ec)(iVar5,&DAT_004120dc), iVar6 != 0)) {
            iVar5 = (*(code *)PTR_strcmp_004234ec)(iVar5,"delall");
            uVar21 = 0xffffffff;
            if (iVar5 != 0) goto LAB_004106cc;
          }
        }
        iVar5 = (*(code *)PTR_strcmp_004234ec)(local_4ef0 + 0x14,&DAT_004131b8);
        if ((iVar5 == 0) ||
           (iVar5 = (*(code *)PTR_strcmp_004234ec)(local_4ef0 + 0x14,&DAT_004131b4), iVar5 == 0)) {
          iVar5 = local_4d4c[0];
          if (iVar2 == 0) goto LAB_004106c8;
          iVar6 = (*(code *)PTR_strcmp_004234ec)(local_4d4c[0],&DAT_004120b8);
          if ((iVar6 != 0) &&
             (iVar7 = (*(code *)PTR_strcmp_004234ec)(iVar5,&DAT_004120dc), iVar7 != 0)) {
            iVar7 = (*(code *)PTR_strcmp_004234ec)(iVar5,"delall");
            uVar21 = 0xffffffff;
            if (iVar7 != 0) goto LAB_004106cc;
          }
          iVar5 = (*(code *)PTR_strcmp_004234ec)(iVar5,&DAT_004120dc);
          if (((iVar5 == 0) || (iVar6 == 0)) && (uVar21 = 0xffffffff, local_4d4c[1] == 0))
          goto LAB_004106cc;
        }
        iVar5 = (*(code *)PTR_strcmp_004234ec)(local_4ef0 + 0x14,"PORTFW_TBL");
        if ((iVar5 == 0) ||
           (iVar5 = (*(code *)PTR_strcmp_004234ec)(local_4ef0 + 0x14,"DEF_PORTFW_TBL"), iVar5 == 0))
        {
          iVar5 = local_4d4c[0];
          if (iVar2 == 0) goto LAB_004106c8;
          iVar6 = (*(code *)PTR_strcmp_004234ec)(local_4d4c[0],&DAT_004120b8);
          if ((iVar6 != 0) &&
             (iVar6 = (*(code *)PTR_strcmp_004234ec)(iVar5,&DAT_004120dc), iVar6 != 0)) {
            iVar5 = (*(code *)PTR_strcmp_004234ec)(iVar5,"delall");
            uVar21 = 0xffffffff;
            if (iVar5 != 0) goto LAB_004106cc;
          }
        }
        iVar5 = (*(code *)PTR_strcmp_004234ec)(local_4ef0 + 0x14,"PORTFILTER_TBL");
        if ((iVar5 == 0) ||
           (iVar5 = (*(code *)PTR_strcmp_004234ec)(local_4ef0 + 0x14,"DEF_PORTFILTER_TBL"),
           iVar5 == 0)) {
          iVar5 = local_4d4c[0];
          if (iVar2 == 0) goto LAB_004106c8;
          iVar6 = (*(code *)PTR_strcmp_004234ec)(local_4d4c[0],&DAT_004120b8);
          if ((iVar6 != 0) &&
             (iVar6 = (*(code *)PTR_strcmp_004234ec)(iVar5,&DAT_004120dc), iVar6 != 0)) {
            iVar5 = (*(code *)PTR_strcmp_004234ec)(iVar5,"delall");
            uVar21 = 0xffffffff;
            if (iVar5 != 0) goto LAB_004106cc;
          }
        }
        iVar5 = (*(code *)PTR_strcmp_004234ec)(local_4ef0 + 0x14,"IPFILTER_TBL");
        if ((iVar5 == 0) ||
           (iVar5 = (*(code *)PTR_strcmp_004234ec)(local_4ef0 + 0x14,"DEF_IPFILTER_TBL"), iVar5 == 0
           )) {
          iVar5 = local_4d4c[0];
          if (iVar2 == 0) goto LAB_004106c8;
          iVar6 = (*(code *)PTR_strcmp_004234ec)(local_4d4c[0],&DAT_004120b8);
          if ((iVar6 != 0) &&
             (iVar6 = (*(code *)PTR_strcmp_004234ec)(iVar5,&DAT_004120dc), iVar6 != 0)) {
            iVar5 = (*(code *)PTR_strcmp_004234ec)(iVar5,"delall");
            uVar21 = 0xffffffff;
            if (iVar5 != 0) goto LAB_004106cc;
          }
        }
        iVar5 = (*(code *)PTR_strcmp_004234ec)(local_4ef0 + 0x14,"MACFILTER_TBL");
        if ((iVar5 == 0) ||
           (iVar5 = (*(code *)PTR_strcmp_004234ec)(local_4ef0 + 0x14,"DEF_MACFILTER_TBL"),
           iVar5 == 0)) {
          iVar5 = local_4d4c[0];
          if (iVar2 == 0) goto LAB_004106c8;
          iVar6 = (*(code *)PTR_strcmp_004234ec)(local_4d4c[0],&DAT_004120b8);
          if ((iVar6 != 0) &&
             (iVar6 = (*(code *)PTR_strcmp_004234ec)(iVar5,&DAT_004120dc), iVar6 != 0)) {
            iVar5 = (*(code *)PTR_strcmp_004234ec)(iVar5,"delall");
            uVar21 = 0xffffffff;
            if (iVar5 != 0) goto LAB_004106cc;
          }
        }
        iVar5 = (*(code *)PTR_strcmp_004234ec)(local_4ef0 + 0x14,"URLFILTER_TBL");
        if ((iVar5 == 0) ||
           (iVar5 = (*(code *)PTR_strcmp_004234ec)(local_4ef0 + 0x14,"DEF_URLFILTER_TBL"),
           iVar5 == 0)) {
          iVar5 = local_4d4c[0];
          if (iVar2 == 0) goto LAB_004106c8;
          iVar6 = (*(code *)PTR_strcmp_004234ec)(local_4d4c[0],&DAT_004120b8);
          if ((iVar6 != 0) &&
             (iVar6 = (*(code *)PTR_strcmp_004234ec)(iVar5,&DAT_004120dc), iVar6 != 0)) {
            iVar5 = (*(code *)PTR_strcmp_004234ec)(iVar5,"delall");
            uVar21 = 0xffffffff;
            if (iVar5 != 0) goto LAB_004106cc;
          }
        }
        iVar5 = (*(code *)PTR_strcmp_004234ec)(local_4ef0 + 0x14,"TRIGGERPORT_TBL");
        if (((iVar5 != 0) &&
            (iVar5 = (*(code *)PTR_strcmp_004234ec)(local_4ef0 + 0x14,"DEF_TRIGGERPORT_TBL"),
            iVar5 != 0)) ||
           ((iVar2 != 0 &&
            (((iVar5 = (*(code *)PTR_strcmp_004234ec)(local_4d4c[0],&DAT_004120b8), iVar5 == 0 ||
              (iVar5 = (*(code *)PTR_strcmp_004234ec)(local_4d4c[0],&DAT_004120dc), iVar5 == 0)) ||
             (iVar5 = (*(code *)PTR_strcmp_004234ec)(local_4d4c[0],"delall"), iVar5 == 0))))))
        goto LAB_0041008c;
      }
LAB_004106c8:
      uVar21 = 0xffffffff;
      goto LAB_004106cc;
    }
LAB_00410388:
    FUN_00402374();
    goto LAB_0040fa40;
  }
LAB_0041008c:
  switch(iVar20) {
  case 2:
    iVar20 = (*(code *)PTR_apmib_init_004234ac)();
    if (iVar20 == 0) {
LAB_004100d4:
      pcVar13 = "Initialize AP MIB failed!";
      goto LAB_004100e0;
    }
    iVar20 = FUN_00401c7c(local_4ef0 + 0x14);
    if (iVar20 == -1) {
LAB_00410380:
      FUN_00408dec();
      goto LAB_00410388;
    }
    if (iVar2 == 0) goto LAB_0040fa38;
    puVar14 = PTR_hwmib_table_00423580;
    if (((DAT_00423630 != 1) && (puVar14 = PTR_hwmib_wlan_table_004234e8, DAT_00423630 != 2)) &&
       ((DAT_00423630 == 3 || (puVar14 = PTR_mib_wlan_table_004235e8, DAT_00423630 == 5)))) {
      puVar14 = PTR_mib_table_0042358c;
    }
    goto LAB_00410518;
  case 3:
    FUN_0040c02c();
    break;
  case 4:
    iVar2 = (*(code *)PTR_apmib_init_HW_004235fc)();
    if (iVar2 == 0) {
      pcVar13 = "Initialize AP HW MIB failed!";
      pcVar25 = (code *)PTR_puts_004235c4;
      goto LAB_0040d2d4;
    }
    iVar2 = FUN_00401c7c(local_4ef0 + 0x14);
    if (iVar2 == -1) {
LAB_004104c0:
      FUN_00408dec();
      FUN_004013e8();
      return 0xffffffff;
    }
    local_4f20 = 1;
    puVar14 = PTR_hwmib_table_00423580;
    if ((DAT_00423630 != 1) && (puVar14 = PTR_hwmib_wlan_table_004234e8, DAT_00423630 != 2)) {
      puVar14 = (undefined *)0x0;
    }
    uVar17 = *(undefined4 *)((int)(puVar14 + iVar2 * 0x3c) + 0x24);
    uVar21 = *(undefined4 *)(puVar14 + iVar2 * 0x3c);
    goto LAB_00410478;
  case 5:
    iVar20 = (*(code *)PTR_apmib_init_HW_004235fc)();
    if (iVar20 == 0) {
LAB_0040d2c8:
      pcVar13 = "Initialize AP MIB failed!";
      pcVar25 = (code *)PTR_puts_004235c4;
LAB_0040d2d4:
      (*pcVar25)(pcVar13);
      return 0xffffffff;
    }
    iVar20 = FUN_00401c7c(local_4ef0 + 0x14);
    if (iVar20 == -1) goto LAB_004104c0;
    if (iVar2 == 0) {
      FUN_00408dec();
      return 0xffffffff;
    }
    puVar14 = PTR_hwmib_table_00423580;
    if ((DAT_00423630 != 1) && (puVar14 = PTR_hwmib_wlan_table_004234e8, DAT_00423630 != 2)) {
      puVar14 = (undefined *)0x0;
    }
LAB_00410518:
    puVar11 = (undefined4 *)(puVar14 + iVar20 * 0x3c);
    FUN_00408fa4(local_4ef0 + 0x14,*puVar11,puVar11[9],puVar11[0xb],iVar2,local_4d4c);
    break;
  case 6:
    iVar2 = (*(code *)PTR_apmib_init_HW_004235fc)();
    puVar14 = PTR_wlan_idx_00423548;
    if (iVar2 != 0) {
      *(undefined4 *)PTR_vwlan_idx_0042355c = 0;
      DAT_00423630 = 0;
      puVar22 = (undefined *)0x0;
LAB_004105b4:
      uVar3 = DAT_00423630 + 1;
      if (uVar3 < 3) {
        if (DAT_00423630 != 0) {
          DAT_00423630 = uVar3;
          if (uVar3 != 2) goto LAB_004106b0;
          puVar22 = PTR_hwmib_wlan_table_004234e8;
          goto LAB_004106b0;
        }
        iVar2 = 0;
        puVar22 = PTR_hwmib_table_00423580;
        DAT_00423630 = uVar3;
        while( true ) {
          while (piVar9 = (int *)(puVar22 + iVar2 * 0x3c), *piVar9 != 0) {
            if ((DAT_00423630 - 1 < 2) &&
               (local_30 = piVar9, (*(code *)PTR_printf_004235f4)(&DAT_00410dd4), piVar9 = local_30,
               DAT_00423630 == 2)) {
              (*(code *)PTR_printf_004235f4)("WLAN%d_",*(undefined4 *)puVar14);
              piVar9 = local_30;
            }
            iVar2 = iVar2 + 1;
            if (piVar9[9] != 9) {
              FUN_0040af80(piVar9 + 1,*piVar9,piVar9[9],1,0);
            }
          }
          if (DAT_00423630 != 2) goto LAB_004105b4;
          iVar2 = *(int *)puVar14;
          *(int *)puVar14 = iVar2 + 1;
          if (0 < iVar2 + 1) break;
LAB_004106b0:
          iVar2 = 0;
        }
        *(undefined4 *)puVar14 = 0;
        goto LAB_004105b4;
      }
      uVar21 = 0;
      DAT_00423630 = uVar3;
      goto LAB_004106cc;
    }
    pcVar13 = "Initialize AP MIB failed!";
LAB_00410574:
    (*(code *)PTR_puts_004235c4)(pcVar13);
    break;
  default:
    iVar2 = (*(code *)PTR_apmib_init_004234ac)();
    pcVar13 = local_4ef0 + 0x14;
    if (iVar2 == 0) goto LAB_004100d4;
    iVar2 = FUN_00401c7c(pcVar13);
    if (iVar2 == -1) goto LAB_00410380;
    local_4f20 = 1;
    if ((DAT_00423630 == 4) || (DAT_00423630 == 6)) {
      iVar20 = *(int *)(PTR_mib_wlan_table_004235e8 + iVar2 * 0x3c);
      uVar21 = 0x35;
      if ((iVar20 == 0x8036) ||
         ((uVar21 = 0x40, iVar20 == 0x8041 || (uVar21 = 0x1f8, iVar20 == 0x81f9))))
      goto LAB_004102d4;
    }
    else {
      iVar20 = (*(code *)PTR_strcmp_004234ec)(pcVar13,"PORTFW_TBL");
      uVar21 = 0x6f;
      if (iVar20 != 0) {
        iVar20 = (*(code *)PTR_strcmp_004234ec)(pcVar13,"PORTFILTER_TBL");
        uVar21 = 0x81;
        if (iVar20 != 0) {
          iVar20 = (*(code *)PTR_strcmp_004234ec)(pcVar13,"IPFILTER_TBL");
          uVar21 = 0x75;
          if (iVar20 != 0) {
            iVar20 = (*(code *)PTR_strcmp_004234ec)(pcVar13,"MACFILTER_TBL");
            uVar21 = 0x7b;
            if (iVar20 != 0) {
              iVar20 = (*(code *)PTR_strcmp_004234ec)(pcVar13,"URLFILTER_TBL");
              uVar21 = 0xf0;
              if (iVar20 != 0) {
                pcVar13 = local_4ef0 + 0x14;
                iVar20 = (*(code *)PTR_strcmp_004234ec)(pcVar13,"TRIGGERPORT_TBL");
                uVar21 = 0x87;
                if (iVar20 != 0) {
                  iVar20 = (*(code *)PTR_strcmp_004234ec)(pcVar13,"QOS_RULE_TBL");
                  uVar21 = 0x136;
                  if (iVar20 != 0) {
                    iVar20 = (*(code *)PTR_strcmp_004234ec)(pcVar13,"DHCPRSVDIP_TBL");
                    uVar21 = 0x125;
                    if (iVar20 != 0) {
                      iVar20 = (*(code *)PTR_strcmp_004234ec)(pcVar13,"VLANCONFIG_TBL");
                      uVar21 = 0x269;
                      if (iVar20 != 0) {
                        iVar20 = (*(code *)PTR_strcmp_004234ec)(pcVar13,"PROFILE_TBL1");
                        uVar21 = 0x835;
                        if (iVar20 != 0) {
                          iVar20 = (*(code *)PTR_strcmp_004234ec)(pcVar13,"PROFILE_TBL2");
                          if (iVar20 != 0) goto LAB_004102e4;
                          uVar21 = 0x847;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
LAB_004102d4:
      FUN_00408db4(uVar21,&local_4f20);
    }
LAB_004102e4:
    puVar14 = PTR_hwmib_table_00423580;
    if (((DAT_00423630 != 1) && (puVar14 = PTR_hwmib_wlan_table_004234e8, DAT_00423630 != 2)) &&
       ((DAT_00423630 == 3 || (puVar14 = PTR_mib_wlan_table_004235e8, DAT_00423630 == 5)))) {
      puVar14 = PTR_mib_table_0042358c;
    }
    uVar17 = *(undefined4 *)((int)(puVar14 + iVar2 * 0x3c) + 0x24);
    uVar21 = *(undefined4 *)(puVar14 + iVar2 * 0x3c);
LAB_00410478:
    FUN_0040af80(local_4ef0 + 0x14,uVar21,uVar17,local_4f20,local_4d4c);
  }
LAB_0041057c:
  uVar21 = 0;
LAB_004106cc:
  *(undefined4 *)PTR_vwlan_idx_0042355c = 0;
  return uVar21;
}


/* FUN_00410780 @ 00410780 */

void FUN_00410780(void)

{
  undefined4 *puVar1;
  code *pcVar2;
  
  puVar1 = (undefined4 *)(PTR_DAT_00423468 + 0x33e4);
  while( true ) {
    pcVar2 = (code *)*puVar1;
    puVar1 = puVar1 + -1;
    if (pcVar2 == (code *)0xffffffff) break;
    (*pcVar2)();
  }
  return;
}


/* _fini @ 00410cf0 */

void _fini(void)

{
  FUN_00401220();
  return;
}


