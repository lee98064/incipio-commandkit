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
  
  iVar3 = (*(code *)PTR_memcmp_004234fc)(param_1,&DAT_00410da4,3);
  if (iVar3 == 0) {
    DAT_00423600 = 1;
    iVar3 = (*(code *)PTR_memcmp_004234fc)(param_1 + 3,&DAT_00410da8,4);
    if ((iVar3 == 0) && (*(char *)(param_1 + 8) == '_')) {
      iVar3 = *(char *)(param_1 + 7) + -0x30;
      *(int *)PTR_wlan_idx_00423518 = iVar3;
      if (0 < iVar3) {
        return -1;
      }
      (*(code *)PTR_strcpy_004235d0)(auStack_88,param_1 + 9);
      iVar3 = DAT_00423600 + 1;
      goto LAB_00401f80;
    }
    param_1 = param_1 + 3;
LAB_00401e4c:
    (*(code *)PTR_strcpy_004235d0)(auStack_88,param_1);
    iVar3 = 0;
  }
  else {
    iVar3 = (*(code *)PTR_memcmp_004234fc)(param_1,&DAT_00410db0,4);
    if (iVar3 == 0) {
      DAT_00423600 = 3;
      iVar3 = (*(code *)PTR_memcmp_004234fc)(param_1 + 4,&DAT_00410da8,4);
      if ((iVar3 != 0) || (*(char *)(param_1 + 9) != '_')) {
        param_1 = param_1 + 4;
        goto LAB_00401e4c;
      }
      iVar3 = *(char *)(param_1 + 8) + -0x30;
      *(int *)PTR_wlan_idx_00423518 = iVar3;
      if (0 < iVar3) {
        return -1;
      }
      iVar3 = (*(code *)PTR_memcmp_004234fc)(param_1 + 10,&DAT_00410db8,3);
      pcVar9 = (code *)PTR_strcpy_004235d0;
      if ((iVar3 == 0) && (*(char *)(param_1 + 0xe) == '_')) {
        if (4 < *(char *)(param_1 + 0xd) + -0x30) {
LAB_00401efc:
          *(undefined4 *)PTR_vwlan_idx_0042352c = 0;
          return -1;
        }
        *(int *)PTR_vwlan_idx_0042352c = *(char *)(param_1 + 0xd) + -0x2f;
        param_1 = param_1 + 0xf;
      }
      else {
LAB_00401e24:
        param_1 = param_1 + 10;
      }
    }
    else {
      DAT_00423600 = 5;
      iVar3 = (*(code *)PTR_memcmp_004234fc)(param_1,&DAT_00410da8,4);
      if ((iVar3 != 0) || (*(char *)(param_1 + 5) != '_')) {
        (*(code *)PTR_strcpy_004235d0)(auStack_88,param_1);
        iVar3 = 0;
        goto LAB_00401f80;
      }
      iVar3 = *(char *)(param_1 + 4) + -0x30;
      *(int *)PTR_wlan_idx_00423518 = iVar3;
      if (0 < iVar3) {
        return -1;
      }
      iVar3 = (*(code *)PTR_memcmp_004234fc)(param_1 + 6,&DAT_00410db8,3);
      pcVar9 = (code *)PTR_strcpy_004235d0;
      if ((iVar3 == 0) && (*(char *)(param_1 + 10) == '_')) {
        if (4 < *(char *)(param_1 + 9) + -0x30) goto LAB_00401efc;
        *(int *)PTR_vwlan_idx_0042352c = *(char *)(param_1 + 9) + -0x2f;
        param_1 = param_1 + 0xb;
      }
      else {
        iVar3 = (*(code *)PTR_memcmp_004234fc)(param_1 + 6,&DAT_00410dbc,3);
        pcVar9 = (code *)PTR_strcpy_004235d0;
        if ((iVar3 == 0) && (*(char *)(param_1 + 9) == '_')) {
          *(undefined4 *)PTR_vwlan_idx_0042352c = 5;
          goto LAB_00401e24;
        }
        param_1 = param_1 + 6;
      }
    }
    (*pcVar9)(auStack_88,param_1);
    iVar3 = DAT_00423600 + 1;
  }
LAB_00401f80:
  iVar8 = DAT_00423600;
  puVar1 = PTR_mib_table_0042355c;
  puVar2 = PTR_hwmib_table_00423550;
  if (DAT_00423600 == 1) {
    iVar8 = 0;
    piVar7 = (int *)PTR_hwmib_table_00423550;
    do {
      iVar6 = iVar8;
      puVar1 = PTR_hwmib_wlan_table_004234b8;
      iVar8 = *piVar7;
      piVar7 = piVar7 + 0xf;
      if (iVar8 == 0) {
        iVar8 = 0;
        piVar7 = (int *)PTR_hwmib_wlan_table_004234b8;
        do {
          iVar6 = iVar8;
          iVar8 = *piVar7;
          piVar7 = piVar7 + 0xf;
          if (iVar8 == 0) {
            return -1;
          }
          iVar4 = (*(code *)PTR_strcmp_004234bc)(puVar1 + iVar6 * 0x3c + 4,auStack_88);
          iVar8 = iVar6 + 1;
        } while (iVar4 != 0);
        iVar8 = 2;
        DAT_00423600 = 2;
        goto joined_r0x00402048;
      }
      iVar4 = (*(code *)PTR_strcmp_004234bc)(puVar2 + iVar6 * 0x3c + 4,auStack_88);
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
  piVar7 = (int *)PTR_mib_table_0042355c;
  while (puVar2 = PTR_mib_wlan_table_004235b8, iVar4 = *piVar7, piVar7 = piVar7 + 0xf, iVar4 != 0) {
    iVar4 = (*(code *)PTR_strcmp_004234bc)(puVar1 + iVar6 * 0x3c + 4,auStack_88);
    if (iVar4 == 0) goto LAB_004020fc;
    iVar6 = iVar6 + 1;
  }
  iVar4 = 0;
  piVar7 = (int *)PTR_mib_wlan_table_004235b8;
  do {
    iVar6 = iVar4;
    iVar4 = *piVar7;
    piVar7 = piVar7 + 0xf;
    if (iVar4 == 0) {
      return -1;
    }
    iVar5 = (*(code *)PTR_strcmp_004234bc)(puVar2 + iVar6 * 0x3c + 4,auStack_88);
    iVar4 = iVar6 + 1;
  } while (iVar5 != 0);
  iVar8 = iVar8 + 1;
  DAT_00423600 = iVar8;
LAB_004020fc:
  if (iVar3 == 0) {
    return iVar6;
  }
  if (iVar8 == iVar3) {
    return iVar6;
  }
  return -1;
}

