/* FUN_00410da0 @ 00410da0 */

int FUN_00410da0(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  int iVar6;
  
  iVar2 = (*(code *)PTR_strlen_0057e310)();
  iVar3 = (*(code *)PTR_strlen_0057e310)(param_2);
  iVar6 = iVar2 - iVar3;
  if (iVar3 <= iVar2) {
    pcVar4 = (char *)(param_1 + iVar6);
    for (; 0 < iVar6; iVar6 = iVar6 + -1) {
      pcVar5 = pcVar4;
      for (iVar2 = 0;
          (iVar2 < iVar3 &&
          (cVar1 = *pcVar5, pcVar5 = pcVar5 + 1, *(char *)(param_2 + iVar2) == cVar1));
          iVar2 = iVar2 + 1) {
      }
      pcVar4 = pcVar4 + -1;
      if (iVar2 == iVar3) {
        return param_1 + iVar6;
      }
    }
  }
  return 0;
}

