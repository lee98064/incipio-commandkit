/* FUN_004136b4 @ 004136b4 */

undefined4 FUN_004136b4(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = (*(code *)PTR_strlen_0046a714)();
  iVar3 = 0;
  do {
    if (iVar2 <= iVar3) {
      return 1;
    }
    cVar1 = *(char *)(param_1 + iVar3);
    iVar3 = iVar3 + 1;
  } while ((((cVar1 != ' ') && (cVar1 != '\"')) && (cVar1 != '\'')) &&
          ((cVar1 != '\\' && (cVar1 != '$'))));
  return 0;
}

