/* URLParseComponents @ 004078e8 */

undefined4 URLParseComponents(char *param_1,char *param_2,undefined4 *param_3,undefined4 *param_4)

{
  int iVar1;
  char cVar3;
  char *pcVar2;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  char *pcVar14;
  char *pcVar15;
  
  if (param_2 == (char *)0x0) {
    iVar1 = (*(code *)PTR_strlen_004330cc)();
    param_2 = param_1 + iVar1;
  }
  cVar3 = '\0';
  pcVar4 = param_1;
  while (pcVar4 < param_2) {
    cVar3 = *pcVar4;
    if (cVar3 == ':') goto LAB_0040798c;
    pcVar13 = (char *)0x0;
    if (cVar3 == '/') goto LAB_0040799c;
    pcVar14 = (char *)0x0;
    if ((cVar3 == '?') || (pcVar4 = pcVar4 + 1, cVar3 == '#')) goto LAB_004079a4;
  }
  if (cVar3 == ':') {
LAB_0040798c:
    pcVar13 = pcVar4;
    pcVar14 = param_1;
    param_1 = pcVar4 + 1;
  }
  else {
LAB_0040799c:
    pcVar13 = (char *)0x0;
    pcVar14 = (char *)0x0;
  }
LAB_004079a4:
  pcVar4 = (char *)0x0;
  if ((int)param_2 - (int)param_1 < 2) {
    pcVar11 = (char *)0x0;
LAB_00407a9c:
    pcVar10 = (char *)0x0;
    pcVar9 = (char *)0x0;
    pcVar6 = (char *)0x0;
    pcVar7 = (char *)0x0;
  }
  else {
    pcVar11 = (char *)0x0;
    if ((*param_1 != '/') || (param_1[1] != '/')) goto LAB_00407a9c;
    pcVar7 = param_1 + 2;
    pcVar4 = pcVar7;
    do {
      param_1 = pcVar4;
      pcVar11 = pcVar7;
      if (((param_2 <= param_1) || (cVar3 = *param_1, cVar3 == '/')) || (cVar3 == '?')) break;
      pcVar4 = param_1 + 1;
    } while (cVar3 != '#');
    do {
      pcVar8 = pcVar11;
      pcVar11 = pcVar7;
      pcVar4 = param_1;
      if (param_1 <= pcVar8) goto LAB_00407a9c;
      pcVar11 = pcVar8 + 1;
      pcVar9 = pcVar7;
    } while (*pcVar8 != '@');
    do {
      pcVar6 = pcVar9;
      pcVar9 = (char *)0x0;
      if (pcVar8 <= pcVar6) {
        pcVar10 = (char *)0x0;
        break;
      }
      pcVar9 = pcVar6 + 1;
      pcVar10 = pcVar8;
    } while (*pcVar6 != ':');
    pcVar11 = pcVar8 + 1;
  }
  cVar3 = '\0';
  pcVar8 = param_1;
  do {
    pcVar2 = pcVar8;
    if (param_2 <= pcVar2) break;
    cVar3 = *pcVar2;
    if (cVar3 == '?') {
      pcVar12 = pcVar2 + 1;
      pcVar8 = pcVar12;
      goto LAB_00407af0;
    }
    pcVar8 = pcVar2 + 1;
  } while (cVar3 != '#');
  pcVar12 = (char *)0x0;
  pcVar5 = pcVar2;
  pcVar15 = (char *)0x0;
LAB_00407b1c:
  pcVar8 = (char *)0x0;
  if (cVar3 != '#') {
    param_2 = pcVar5;
    pcVar5 = (char *)0x0;
    goto LAB_00407b38;
  }
  goto LAB_00407b30;
  while( true ) {
    cVar3 = *pcVar5;
    pcVar8 = pcVar5 + 1;
    if (cVar3 == '#') break;
LAB_00407af0:
    pcVar5 = pcVar8;
    pcVar15 = pcVar5;
    if (param_2 <= pcVar5) goto LAB_00407b1c;
  }
LAB_00407b30:
  pcVar8 = pcVar5 + 1;
  pcVar5 = param_2;
LAB_00407b38:
  param_3[1] = (int)pcVar13 - (int)pcVar14;
  param_3[3] = (int)pcVar6 - (int)pcVar7;
  param_3[5] = (int)pcVar10 - (int)pcVar9;
  param_3[7] = (int)pcVar4 - (int)pcVar11;
  param_3[9] = (int)pcVar2 - (int)param_1;
  param_3[0xb] = (int)pcVar15 - (int)pcVar12;
  param_3[0xd] = (int)pcVar5 - (int)pcVar8;
  *param_3 = pcVar14;
  param_3[2] = pcVar7;
  param_3[4] = pcVar9;
  param_3[6] = pcVar11;
  param_3[8] = param_1;
  param_3[10] = pcVar12;
  param_3[0xc] = pcVar8;
  if ((pcVar2 <= param_1) || (pcVar4 = param_1 + 1, *param_1 != '/')) {
    pcVar4 = param_1;
  }
  param_3[0xe] = pcVar4;
  if ((pcVar2 <= param_1) || (pcVar4 = pcVar2 + -1, pcVar2[-1] != '/')) {
    pcVar4 = pcVar2;
  }
  param_3[0xf] = pcVar4;
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = param_2;
  }
  return 0;
}

