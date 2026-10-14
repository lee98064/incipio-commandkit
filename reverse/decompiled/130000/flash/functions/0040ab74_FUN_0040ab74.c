/* FUN_0040ab74 @ 0040ab74 */

void FUN_0040ab74(undefined1 *param_1)

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
  
  iVar6 = (*(code *)PTR_apmib_init_0042347c)();
  if (iVar6 == 0) {
    pcVar13 = "Initialize AP MIB failed!";
    pcVar15 = (code *)PTR_puts_00423594;
  }
  else {
    iVar6 = (*(code *)PTR_fopen_004234e0)(param_1,"r");
    puVar5 = PTR_mib_wlan_table_004235b8;
    puVar4 = PTR_mib_table_0042355c;
    if (iVar6 == 0) {
      pcVar13 = "read file [%s] failed!\n";
LAB_0040adcc:
      (*(code *)PTR_printf_004235c4)(pcVar13,param_1);
      return;
    }
    local_1a0[0] = auStack_170;
    local_38 = local_1a0;
    local_40 = 0;
    bVar3 = false;
    bVar2 = false;
    param_1 = auStack_198;
    local_3c = local_1a0[0];
LAB_0040ae88:
    iVar9 = (*(code *)PTR_fgets_004235ac)(local_10c,200,iVar6);
    iVar12 = 0;
    pcVar13 = local_10c;
    if (iVar9 != 0) {
      while( true ) {
        cVar1 = *pcVar13;
        if ((cVar1 == '\0') || (cVar1 == '\n')) goto LAB_0040ae88;
        if (cVar1 == '=') break;
        iVar12 = iVar12 + 1;
        pcVar13 = pcVar13 + 1;
      }
      if (1 < iVar12) {
        local_34 = pcVar13;
        local_30 = iVar12;
        (*(code *)PTR_memcpy_004235a4)(param_1,local_10c,iVar12);
        puVar7 = param_1 + local_30;
        iVar12 = local_30 + -1;
        goto LAB_0040ac84;
      }
      goto LAB_0040ae88;
    }
    (*(code *)PTR_fclose_004234cc)(iVar6);
    if (bVar2) {
      (*(code *)PTR_apmib_update_00423548)(1);
    }
    if (bVar3) {
      (*(code *)PTR_apmib_update_00423548)(2);
    }
    pcVar13 = (char *)0x4;
    pcVar15 = (code *)PTR_apmib_update_00423548;
    if (local_40 == 0) {
      return;
    }
  }
  (*pcVar15)(pcVar13);
  return;
  while (iVar12 = iVar12 + -1, -1 < iVar12) {
LAB_0040ac84:
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
      if (iVar9 == 0) goto LAB_0040ae88;
    }
    else {
      local_30 = iVar9;
      (*(code *)PTR_memcpy_004235a4)(local_3c,pcVar13 + iVar12,iVar9);
      local_3c[local_30] = 0;
    }
    iVar12 = FUN_00401c7c(param_1);
    if (iVar12 == -1) {
      pcVar13 = "invalid param [%s]!\n";
      goto LAB_0040adcc;
    }
    if (DAT_00423600 - 1U < 2) {
      bVar2 = true;
      puVar10 = PTR_hwmib_wlan_table_004234b8;
      if (DAT_00423600 == 1) {
        puVar10 = PTR_hwmib_table_00423550;
      }
    }
    else {
      puVar10 = puVar5;
      if (DAT_00423600 - 3U < 2) {
        if (DAT_00423600 == 3) {
          puVar10 = puVar4;
        }
        bVar3 = true;
      }
      else {
        if (DAT_00423600 == 5) {
          puVar10 = puVar4;
        }
        local_40 = 1;
      }
    }
    DAT_00423600 = 0;
    puVar11 = (undefined4 *)(puVar10 + iVar12 * 0x3c);
    FUN_00408f70(param_1,*puVar11,puVar11[9],puVar11[0xb],1,local_38);
  }
  goto LAB_0040ae88;
}

