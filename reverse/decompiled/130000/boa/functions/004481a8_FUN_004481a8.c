/* FUN_004481a8 @ 004481a8 */

char * FUN_004481a8(char *param_1,undefined4 *param_2)

{
  char cVar1;
  char *pcVar2;
  undefined4 uVar3;
  char *pcVar4;
  char local_18 [8];
  undefined4 *local_10;
  
  pcVar4 = (char *)0x0;
  if (*param_1 == '/') {
    pcVar2 = local_18;
    pcVar4 = param_1;
    while( true ) {
      pcVar4 = pcVar4 + 1;
      cVar1 = *pcVar4;
      if ((cVar1 == '\0') || (cVar1 == '/')) break;
      *pcVar2 = cVar1;
      pcVar2 = pcVar2 + 1;
    }
    *pcVar2 = '\0';
    local_10 = param_2;
    uVar3 = (*(code *)PTR_atoi_0046a73c)(local_18);
    *local_10 = uVar3;
  }
  return pcVar4;
}

