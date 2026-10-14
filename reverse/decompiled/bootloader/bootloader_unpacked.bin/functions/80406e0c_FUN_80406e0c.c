/* FUN_80406e0c @ 80406e0c */

int FUN_80406e0c(char *param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  
  iVar3 = 0;
  do {
    cVar2 = *param_1;
LAB_80406e54:
    if (cVar2 == '\0') {
      iVar1 = 0x13;
      if (iVar3 < 0x14) {
        iVar1 = iVar3;
      }
      return iVar1;
    }
    if (cVar2 != ' ') {
      iVar3 = iVar3 + 1;
      do {
        param_1 = param_1 + 1;
        cVar2 = *param_1;
        if (cVar2 == ' ') break;
      } while (cVar2 != '\0');
      goto LAB_80406e54;
    }
    param_1 = param_1 + 1;
  } while( true );
}

