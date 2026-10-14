/* FUN_00408d78 @ 00408d78 */

void FUN_00408d78(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  piVar1 = &DAT_0046c600;
  iVar4 = 0;
  do {
    iVar2 = *piVar1;
    iVar3 = 0;
    if (iVar2 != 0) {
      do {
        iVar2 = *(int *)(iVar2 + 8);
        iVar3 = iVar3 + 1;
      } while (iVar2 != 0);
      iVar4 = iVar4 + iVar3;
    }
    piVar1 = piVar1 + 1;
  } while (piVar1 != &DAT_0046c6bc);
  (*(code *)PTR_fprintf_0046a9ec)
            (*(undefined4 *)PTR_stderr_0046a7f0,"mime_hashtable has %d total entries\n",iVar4);
  piVar1 = &DAT_0046c6bc;
  iVar4 = 0;
  do {
    iVar2 = *piVar1;
    iVar3 = 0;
    if (iVar2 != 0) {
      do {
        iVar2 = *(int *)(iVar2 + 8);
        iVar3 = iVar3 + 1;
      } while (iVar2 != 0);
      iVar4 = iVar4 + iVar3;
    }
    piVar1 = piVar1 + 1;
  } while (piVar1 != (int *)0x46c778);
  (*(code *)PTR_fprintf_0046a9ec)
            (*(undefined4 *)PTR_stderr_0046a7f0,"passwd_hashtable has %d total entries\n",iVar4);
  return;
}

