/* FUN_00424338 @ 00424338 */

int FUN_00424338(undefined1 *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  uint uVar5;
  
  if ((param_1 == (undefined1 *)0x0) || (param_2 == 0)) {
    iVar1 = 0;
  }
  else {
    iVar1 = (*(code *)PTR_malloc_006132d8)(param_2 * 3 + 1);
    if (iVar1 != 0) {
      iVar4 = iVar1;
      for (uVar5 = 0; uVar5 < param_2; uVar5 = uVar5 + 1) {
        pcVar3 = "%02X:";
        if (uVar5 == param_2 - 1) {
          pcVar3 = "%02X";
        }
        iVar2 = (*(code *)PTR_sprintf_00611f90)(iVar4,pcVar3,*param_1);
        iVar4 = iVar4 + iVar2;
        param_1 = param_1 + 1;
      }
      *(undefined1 *)(iVar4 + 1) = 0;
    }
  }
  return iVar1;
}

