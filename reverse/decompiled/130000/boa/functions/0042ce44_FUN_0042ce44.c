/* FUN_0042ce44 @ 0042ce44 */

void FUN_0042ce44(char *param_1)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  char local_d0 [204];
  
  pcVar2 = local_d0;
  for (pcVar3 = param_1; cVar1 = *pcVar3, cVar1 != '\0'; pcVar3 = pcVar3 + 1) {
    if (cVar1 == '%') {
      *pcVar2 = DAT_0045215c;
      pcVar2[1] = DAT_0045215d;
      pcVar2 = pcVar2 + 2;
    }
    else {
      *pcVar2 = cVar1;
      pcVar2 = pcVar2 + 1;
    }
  }
  *pcVar2 = '\0';
  (*(code *)PTR_strcpy_0046ac60)(param_1,local_d0);
  return;
}

