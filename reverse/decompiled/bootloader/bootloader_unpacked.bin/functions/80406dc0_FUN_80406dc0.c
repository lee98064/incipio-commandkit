/* FUN_80406dc0 @ 80406dc0 */

char * FUN_80406dc0(char *param_1)

{
  char cVar1;
  char *pcVar2;
  
  cVar1 = *param_1;
  pcVar2 = param_1;
  while (cVar1 != '\0') {
    if ((byte)(cVar1 + 0x9fU) < 0x1a) {
      *pcVar2 = cVar1 + -0x20;
    }
    pcVar2 = pcVar2 + 1;
    cVar1 = *pcVar2;
  }
  return param_1;
}

