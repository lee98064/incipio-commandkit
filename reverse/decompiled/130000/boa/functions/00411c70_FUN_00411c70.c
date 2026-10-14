/* FUN_00411c70 @ 00411c70 */

char * FUN_00411c70(char *param_1,char *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  
  if (*param_2 != '\0') {
    while (pcVar3 = param_1, 0 < param_3) {
      param_3 = param_3 + -1;
      param_1 = pcVar3 + 1;
      if (*pcVar3 == *param_2) {
        iVar4 = 0;
        iVar5 = param_3;
        do {
          iVar1 = iVar4 + 1;
          if (param_2[iVar1] == '\0') {
            return pcVar3;
          }
          if (iVar5 == 0) goto LAB_00411ce4;
          iVar2 = iVar4 + 1;
          iVar5 = iVar5 + -1;
          iVar4 = iVar4 + 1;
        } while (pcVar3[iVar2] == param_2[iVar1]);
      }
    }
LAB_00411ce4:
    param_1 = (char *)0x0;
  }
  return param_1;
}

