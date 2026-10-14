/* FUN_80406a00 @ 80406a00 */

int FUN_80406a00(char *param_1)

{
  char cVar1;
  char *pcVar2;
  
  cVar1 = *param_1;
  pcVar2 = param_1;
  while (cVar1 != '\0') {
    pcVar2 = pcVar2 + 1;
    cVar1 = *pcVar2;
  }
  return (int)pcVar2 - (int)param_1;
}

