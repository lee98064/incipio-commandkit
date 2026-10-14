/* FUN_00405ee4 @ 00405ee4 */

int FUN_00405ee4(char *param_1)

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
  
  puVar2 = PTR_memset_00433190;
  if (0x7ff < *(uint *)(param_1 + 0x800)) {
    return -0x1a31;
  }
  *(undefined **)(param_1 + 0x80c) = &DAT_0041d3d4;
  param_1[0x810] = '\0';
  param_1[0x811] = '\0';
  param_1[0x812] = '\0';
  param_1[0x813] = '\0';
  *(undefined **)(param_1 + 0x814) = &DAT_0041d3d4;
  param_1[0x818] = '\0';
  param_1[0x819] = '\0';
  param_1[0x81a] = '\0';
  param_1[0x81b] = '\0';
  (*(code *)puVar2)(param_1 + 0x81c,0,0x40);
  param_1[0x864] = -1;
  param_1[0x865] = -1;
  param_1[0x866] = -1;
  param_1[0x867] = -1;
  param_1[0x878] = '\0';
  param_1[0x879] = '\0';
  param_1[0x87a] = '\0';
  param_1[0x87b] = '\0';
  *(undefined **)(param_1 + 0x868) = &DAT_0041d3d4;
  *(undefined **)(param_1 + 0x85c) = &DAT_0041d3d4;
  param_1[0x860] = '\0';
  param_1[0x861] = '\0';
  param_1[0x862] = '\0';
  param_1[0x863] = '\0';
  param_1[0x86c] = '\0';
  param_1[0x86d] = '\0';
  param_1[0x86e] = '\0';
  param_1[0x86f] = '\0';
  param_1[0x870] = '\0';
  param_1[0x87c] = '\0';
  param_1[0x87d] = '\0';
  param_1[0x87e] = '\0';
  param_1[0x87f] = '\0';
  param_1[0x880] = '\0';
  if ((*(int *)(param_1 + 0x800) == 4) && (*param_1 == '$')) {
    param_1[0x810] = '\0';
    param_1[0x811] = '\0';
    param_1[0x812] = '\0';
    param_1[0x813] = '\x01';
    param_1[0x870] = param_1[1];
    *(uint *)(param_1 + 0x87c) = (uint)*(ushort *)(param_1 + 2);
    param_1[0x878] = '\0';
    param_1[0x879] = '\0';
    param_1[0x87a] = '\0';
    param_1[0x87b] = '\0';
    *(char **)(param_1 + 0x80c) = param_1;
    return 0;
  }
  pcVar7 = param_1 + *(int *)(param_1 + 0x800);
  pcVar6 = param_1;
  do {
    if (pcVar7 <= pcVar6) {
      return -0x1a56;
    }
    cVar1 = *pcVar6;
    pcVar3 = pcVar6 + 1;
    if (cVar1 == ' ') {
      pcVar3 = pcVar6 + 1;
      *(int *)(param_1 + 0x810) = (int)pcVar6 - (int)param_1;
      *(char **)(param_1 + 0x80c) = param_1;
      *(char **)(param_1 + 0x814) = pcVar3;
      pcVar6 = pcVar3;
      goto LAB_00406010;
    }
    pcVar6 = pcVar3;
  } while (cVar1 != '/');
  *(char **)(param_1 + 0x85c) = param_1;
  do {
    pcVar6 = pcVar3;
    if (pcVar7 <= pcVar6) break;
    pcVar3 = pcVar6 + 1;
  } while (*pcVar6 != ' ');
  *(int *)(param_1 + 0x860) = (int)pcVar6 - (int)param_1;
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
  *(int *)(param_1 + 0x864) = iVar5;
  *(char **)(param_1 + 0x868) = pcVar6;
  pcVar8 = pcVar6;
  do {
    pcVar3 = pcVar8;
    if ((pcVar7 <= pcVar3) || (*pcVar3 == '\r')) break;
    pcVar8 = pcVar3 + 1;
  } while (*pcVar3 != '\n');
  *(int *)(param_1 + 0x86c) = (int)pcVar3 - (int)pcVar6;
  if (pcVar7 <= pcVar3) {
    return -0x1a56;
  }
LAB_00406188:
  if (pcVar3 + 1 < pcVar7) {
    iVar4 = FUN_00405b7c(param_1,*(undefined4 *)(param_1 + 0x800),"Connection",0,0,&local_20,
                         local_1c,0);
    if (iVar4 == 0) {
      pcVar6 = "close";
    }
    else {
      local_20 = *(undefined4 *)(param_1 + 0x85c);
      local_1c[0] = *(undefined4 *)(param_1 + 0x860);
      pcVar6 = "HTTP/1.0";
    }
    iVar4 = (*(code *)PTR_strnicmpx_004330f4)(local_20,local_1c[0],pcVar6);
    param_1[0x880] = iVar4 != 0;
    FUN_00405e74(param_1,*(undefined4 *)(param_1 + 0x800),"Content-Length",&DAT_0041d448,
                 param_1 + 0x878);
    return 0;
  }
  return -0x1a56;
  while (pcVar6 = pcVar8 + 1, *pcVar8 != ' ') {
LAB_00406010:
    pcVar8 = pcVar6;
    if (pcVar7 <= pcVar8) break;
  }
  *(int *)(param_1 + 0x818) = (int)pcVar8 - (int)pcVar3;
  if (pcVar7 <= pcVar8) {
    return -0x1a56;
  }
  iVar4 = (*(code *)PTR_URLParseComponents_004332a4)
                    (pcVar3,pcVar3 + ((int)pcVar8 - (int)pcVar3),param_1 + 0x81c,0);
  pcVar8 = pcVar8 + 1;
  if (iVar4 != 0) {
    return iVar4;
  }
  *(char **)(param_1 + 0x85c) = pcVar8;
  pcVar6 = pcVar8;
  do {
    pcVar3 = pcVar6;
    if ((pcVar7 <= pcVar3) || (*pcVar3 == '\r')) break;
    pcVar6 = pcVar3 + 1;
  } while (*pcVar3 != '\n');
  *(int *)(param_1 + 0x860) = (int)pcVar3 - (int)pcVar8;
  if (pcVar7 <= pcVar3) {
    return -0x1a56;
  }
  goto LAB_00406188;
}

