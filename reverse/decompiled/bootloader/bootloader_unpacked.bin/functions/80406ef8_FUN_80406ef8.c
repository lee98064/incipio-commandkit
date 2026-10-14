/* FUN_80406ef8 @ 80406ef8 */

undefined4 * FUN_80406ef8(char *param_1)

{
  char cVar1;
  undefined4 *puVar2;
  char *pcVar3;
  
  puVar2 = &DAT_8040fd50;
  FUN_80406a30(&DAT_8040fd50,0,0x50);
  do {
    if (*param_1 == '\0') break;
    *puVar2 = param_1;
    cVar1 = *param_1;
    pcVar3 = param_1;
    while ((cVar1 != ' ' && (cVar1 != '\0'))) {
      pcVar3 = pcVar3 + 1;
      cVar1 = *pcVar3;
    }
    *pcVar3 = '\0';
    param_1 = pcVar3 + 1;
    if (*param_1 == ' ') {
      pcVar3 = pcVar3 + 2;
      do {
        param_1 = pcVar3;
        pcVar3 = param_1 + 1;
      } while (*param_1 == ' ');
    }
    puVar2 = puVar2 + 1;
  } while (puVar2 != &DAT_8040fda0);
  return &DAT_8040fd50;
}

