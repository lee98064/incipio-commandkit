/* FUN_00405e00 @ 00405e00 */

char * FUN_00405e00(char *param_1,char *param_2)

{
  char cVar1;
  undefined *puVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  uint uVar6;
  int iVar7;
  
  puVar2 = PTR___ctype_b_004232b8;
  do {
    pcVar3 = param_2;
    param_2 = pcVar3 + 1;
  } while ((*(ushort *)(*(int *)PTR___ctype_b_004232b8 + *pcVar3 * 2) & 0x20) != 0);
  while( true ) {
    iVar7 = (int)*pcVar3;
    pcVar4 = pcVar3 + 1;
    pcVar5 = param_1 + 1;
    if ((iVar7 == 0) || ((*(ushort *)(*(int *)puVar2 + iVar7 * 2) & 0x20) != 0)) goto LAB_00405efc;
    if (iVar7 == 0x3a) break;
    *param_1 = *pcVar3;
    pcVar3 = pcVar4;
    param_1 = pcVar5;
  }
  *param_1 = ':';
  puVar2 = PTR___ctype_b_004232b8;
  while( true ) {
    cVar1 = *pcVar4;
    if ((*(ushort *)(*(int *)puVar2 + cVar1 * 2) & 8) == 0) break;
    *pcVar5 = cVar1;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar6 = (int)cVar1 ^ 0x3a;
  if (uVar6 != 0) {
    pcVar4 = pcVar3;
  }
  if (uVar6 != 0) {
    pcVar5 = param_1;
  }
  param_1 = pcVar5;
  pcVar3 = (char *)0x0;
  if (*pcVar4 != '\0') {
    pcVar3 = pcVar4 + 1;
LAB_00405efc:
    *param_1 = '\0';
  }
  return pcVar3;
}

