/* HTTPHeaderParse @ 004223a0 */

int HTTPHeaderParse(char *param_1)

{
  char cVar1;
  undefined *puVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  undefined4 local_20;
  undefined4 local_1c [2];
  
  puVar2 = PTR_memset_006130cc;
  if (0xff < *(uint *)(param_1 + 0x100)) {
    return -0x1a31;
  }
  *(char **)(param_1 + 0x110) = "";
  param_1[0x114] = '\0';
  param_1[0x115] = '\0';
  param_1[0x116] = '\0';
  param_1[0x117] = '\0';
  *(char **)(param_1 + 0x118) = "";
  param_1[0x11c] = '\0';
  param_1[0x11d] = '\0';
  param_1[0x11e] = '\0';
  param_1[0x11f] = '\0';
  (*(code *)puVar2)(param_1 + 0x120,0,0x40);
  param_1[0x168] = -1;
  param_1[0x169] = -1;
  param_1[0x16a] = -1;
  param_1[0x16b] = -1;
  param_1[0x178] = '\0';
  param_1[0x179] = '\0';
  param_1[0x17a] = '\0';
  param_1[0x17b] = '\0';
  *(char **)(param_1 + 0x16c) = "";
  *(char **)(param_1 + 0x160) = "";
  param_1[0x164] = '\0';
  param_1[0x165] = '\0';
  param_1[0x166] = '\0';
  param_1[0x167] = '\0';
  param_1[0x170] = '\0';
  param_1[0x171] = '\0';
  param_1[0x172] = '\0';
  param_1[0x173] = '\0';
  param_1[0x174] = '\0';
  param_1[0x17c] = '\0';
  param_1[0x17d] = '\0';
  param_1[0x17e] = '\0';
  param_1[0x17f] = '\0';
  param_1[0x180] = '\0';
  if ((*(int *)(param_1 + 0x100) == 4) && (*param_1 == '$')) {
    param_1[0x114] = '\0';
    param_1[0x115] = '\0';
    param_1[0x116] = '\0';
    param_1[0x117] = '\x01';
    param_1[0x174] = param_1[1];
    *(uint *)(param_1 + 0x17c) = (uint)*(ushort *)(param_1 + 2);
    param_1[0x178] = '\0';
    param_1[0x179] = '\0';
    param_1[0x17a] = '\0';
    param_1[0x17b] = '\0';
    *(char **)(param_1 + 0x110) = param_1;
    return 0;
  }
  pcVar7 = param_1 + *(int *)(param_1 + 0x100);
  pcVar6 = param_1;
  do {
    if (pcVar7 <= pcVar6) {
      return -0x1a56;
    }
    cVar1 = *pcVar6;
    pcVar3 = pcVar6 + 1;
    if (cVar1 == ' ') {
      pcVar3 = pcVar6 + 1;
      *(int *)(param_1 + 0x114) = (int)pcVar6 - (int)param_1;
      *(char **)(param_1 + 0x110) = param_1;
      *(char **)(param_1 + 0x118) = pcVar3;
      pcVar6 = pcVar3;
      goto LAB_004224cc;
    }
    pcVar6 = pcVar3;
  } while (cVar1 != '/');
  *(char **)(param_1 + 0x160) = param_1;
  do {
    pcVar6 = pcVar3;
    if (pcVar7 <= pcVar6) break;
    pcVar3 = pcVar6 + 1;
  } while (*pcVar6 != ' ');
  *(int *)(param_1 + 0x164) = (int)pcVar6 - (int)param_1;
  if (pcVar7 <= pcVar6) {
    return -0x1a56;
  }
  iVar5 = 0;
  iVar4 = 0;
  while (pcVar3 = pcVar6 + 1, pcVar3 < pcVar7) {
    iVar4 = (int)*pcVar3;
    if ((iVar4 < 0x30) || (0x39 < iVar4)) break;
    iVar5 = iVar4 + -0x30 + iVar5 * 10;
    pcVar6 = pcVar3;
  }
  pcVar6 = pcVar6 + 2;
  if (iVar4 != 0x20) {
    pcVar6 = pcVar3;
  }
  *(int *)(param_1 + 0x168) = iVar5;
  *(char **)(param_1 + 0x16c) = pcVar6;
  pcVar8 = pcVar6;
  do {
    pcVar3 = pcVar8;
    if ((pcVar7 <= pcVar3) || (*pcVar3 == '\r')) break;
    pcVar8 = pcVar3 + 1;
  } while (*pcVar3 != '\n');
  *(int *)(param_1 + 0x170) = (int)pcVar3 - (int)pcVar6;
joined_r0x0042255c:
  if (pcVar7 <= pcVar3) {
    return -0x1a56;
  }
  if (pcVar3 + 1 < pcVar7) {
    iVar4 = HTTPGetHeaderField(param_1,*(undefined4 *)(param_1 + 0x100),"Connection",0,0,&local_20,
                               local_1c,0);
    if (iVar4 == 0) {
      pcVar6 = "close";
    }
    else {
      local_20 = *(undefined4 *)(param_1 + 0x160);
      local_1c[0] = *(undefined4 *)(param_1 + 0x164);
      pcVar6 = "HTTP/1.0";
    }
    iVar4 = (*(code *)PTR_strnicmpx_00613ea0)(local_20,local_1c[0],pcVar6);
    param_1[0x180] = iVar4 != 0;
    FUN_00422330(param_1,*(undefined4 *)(param_1 + 0x100),"Content-Length",&DAT_005ac884,
                 param_1 + 0x178);
    return 0;
  }
  return -0x1a56;
  while (pcVar6 = pcVar8 + 1, *pcVar8 != ' ') {
LAB_004224cc:
    pcVar8 = pcVar6;
    if (pcVar7 <= pcVar8) break;
  }
  *(int *)(param_1 + 0x11c) = (int)pcVar8 - (int)pcVar3;
  if (pcVar7 <= pcVar8) {
    return -0x1a56;
  }
  iVar4 = (*(code *)PTR_URLParseComponents_00613674)
                    (pcVar3,pcVar3 + ((int)pcVar8 - (int)pcVar3),param_1 + 0x120,0);
  pcVar8 = pcVar8 + 1;
  if (iVar4 != 0) {
    return iVar4;
  }
  *(char **)(param_1 + 0x160) = pcVar8;
  pcVar6 = pcVar8;
  do {
    pcVar3 = pcVar6;
    if ((pcVar7 <= pcVar3) || (*pcVar3 == '\r')) break;
    pcVar6 = pcVar3 + 1;
  } while (*pcVar3 != '\n');
  *(int *)(param_1 + 0x164) = (int)pcVar3 - (int)pcVar8;
  goto joined_r0x0042255c;
}

