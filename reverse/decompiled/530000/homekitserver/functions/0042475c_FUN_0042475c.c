/* FUN_0042475c @ 0042475c */

void FUN_0042475c(char *param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  
  iVar2 = (*(code *)PTR_strlen_00613f4c)();
  iVar2 = iVar2 + 1;
  pcVar3 = param_1;
  while( true ) {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
    if (cVar1 == '\0') break;
    iVar2 = iVar2 + (uint)(cVar1 == '.');
  }
  pcVar3 = (char *)(*(code *)PTR_malloc_00614174)(iVar2);
  while( true ) {
    cVar1 = *param_1;
    if (cVar1 == '\0') break;
    if (cVar1 == '.') {
      *pcVar3 = '/';
      pcVar3[1] = '.';
      pcVar3 = pcVar3 + 2;
      param_1 = param_1 + 1;
    }
    else {
      *pcVar3 = cVar1;
      pcVar3 = pcVar3 + 1;
      param_1 = param_1 + 1;
    }
  }
  *pcVar3 = '\0';
  return;
}

