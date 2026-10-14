/* FUN_80406b90 @ 80406b90 */

int FUN_80406b90(char *param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  
  do {
    pcVar4 = param_1;
    cVar1 = *pcVar4;
    iVar2 = FUN_8040691c((int)cVar1);
    param_1 = pcVar4 + 1;
  } while (iVar2 != 0);
  iVar2 = 0;
  if (cVar1 == 0x2d) {
    pcVar4 = pcVar4 + 1;
    iVar2 = -1;
  }
  iVar3 = FUN_80406c50(pcVar4,param_2,param_3);
  if (iVar3 < 0) {
    if (iVar3 != -0x80000000) {
      iVar3 = -0x80000000;
    }
    if (iVar2 == 0) {
      iVar3 = 0x7fffffff;
    }
  }
  else if (iVar2 != 0) {
    iVar3 = -iVar3;
  }
  return iVar3;
}

