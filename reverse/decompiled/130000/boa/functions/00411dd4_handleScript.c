/* handleScript @ 00411dd4 */

void handleScript(undefined4 param_1,int param_2,int param_3)

{
  bool bVar1;
  undefined **ppuVar2;
  char cVar6;
  char *pcVar3;
  int iVar4;
  int iVar5;
  int iVar7;
  char *pcVar8;
  char *pcVar9;
  undefined **ppuVar10;
  undefined *puVar11;
  int iVar12;
  int *piVar13;
  int local_50 [8];
  char *local_30;
  
  pcVar8 = (char *)(param_2 + 2);
  pcVar9 = (char *)(param_3 + -1);
LAB_00411e2c:
  do {
    while( true ) {
      cVar6 = *pcVar8;
      if (cVar6 != ' ') goto LAB_00411e58;
      if (pcVar9 <= pcVar8) break;
      pcVar8 = pcVar8 + 1;
    }
    while( true ) {
      cVar6 = *pcVar8;
LAB_00411e58:
      bVar1 = pcVar8 < pcVar9;
      if (cVar6 != ';') goto LAB_00411e80;
      if (!bVar1) break;
      pcVar8 = pcVar8 + 1;
    }
    while( true ) {
      cVar6 = *pcVar8;
      bVar1 = pcVar8 < pcVar9;
LAB_00411e80:
      if ((cVar6 != '(') || (!bVar1)) break;
      pcVar8 = pcVar8 + 1;
    }
    for (; (*pcVar8 == ')' && (pcVar8 < pcVar9)); pcVar8 = pcVar8 + 1) {
    }
    while (bVar1 = pcVar9 <= pcVar8, *pcVar8 == ',') {
      pcVar8 = pcVar8 + 1;
      if (bVar1) {
        return;
      }
    }
    if (bVar1) {
      return;
    }
    iVar12 = 0;
    pcVar3 = pcVar8;
    do {
      cVar6 = *pcVar3;
      pcVar3 = pcVar3 + 1;
      if ((cVar6 == '(') || (cVar6 == ' ')) break;
      iVar12 = iVar12 + 1;
    } while (pcVar3 < pcVar9);
    ppuVar2 = &PTR_s_getInfo_004685d0;
    do {
      while( true ) {
        ppuVar10 = ppuVar2;
        puVar11 = *ppuVar10;
        if (puVar11 == (undefined *)0x0) {
          pcVar8 = pcVar8 + 1;
          goto LAB_00411e2c;
        }
        iVar4 = (*(code *)PTR_strlen_0046a714)(puVar11);
        if (iVar4 == iVar12) break;
        ppuVar2 = ppuVar10 + 2;
      }
      iVar4 = (*(code *)PTR_memcmp_0046a8d0)(pcVar8,puVar11,iVar12);
      ppuVar2 = ppuVar10 + 2;
    } while (iVar4 != 0);
    local_50[0] = 0;
    local_50[1] = 0;
    local_50[2] = 0;
    local_50[3] = 0;
    local_50[4] = 0;
    local_50[5] = 0;
    local_50[6] = 0;
    local_50[7] = 0;
    iVar12 = (*(code *)PTR_strlen_0046a714)(puVar11);
    pcVar8 = pcVar8 + iVar12;
    iVar12 = 0;
    piVar13 = local_50;
    while( true ) {
      if (*pcVar8 == ')') break;
      if (*pcVar8 == '\"') {
        local_30 = pcVar8 + 1;
        iVar4 = (*(code *)PTR_strchr_0046a6e8)(local_30,0x22);
        iVar7 = iVar4 - (int)local_30;
        if (iVar4 == 0) break;
        iVar5 = (*(code *)PTR_malloc_0046ab14)(iVar7 + 1);
        pcVar3 = local_30;
        *piVar13 = iVar5;
        if (iVar5 == 0) break;
        iVar12 = iVar12 + 1;
        (*(code *)PTR_memcpy_0046ab5c)(iVar5,pcVar3,iVar7);
        pcVar8 = (char *)(iVar4 + 1);
        *(undefined1 *)(*piVar13 + iVar7) = 0;
        piVar13 = piVar13 + 1;
      }
      else {
        if (pcVar9 < pcVar8) break;
        pcVar8 = pcVar8 + 1;
      }
    }
    (*(code *)ppuVar10[1])(param_1,iVar12,local_50);
    piVar13 = local_50;
    for (iVar4 = 0; iVar4 < iVar12; iVar4 = iVar4 + 1) {
      iVar7 = *piVar13;
      piVar13 = piVar13 + 1;
      (*(code *)PTR_free_0046a680)(iVar7);
    }
    pcVar8 = pcVar8 + 1;
  } while( true );
}

