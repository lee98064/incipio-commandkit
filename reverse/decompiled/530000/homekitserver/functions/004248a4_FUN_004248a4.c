/* FUN_004248a4 @ 004248a4 */

int FUN_004248a4(char *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if ((param_1 != (char *)0x0) && (*param_1 != '\0')) {
    iVar1 = (*(code *)PTR_strlen_00613f4c)();
    iVar2 = (*(code *)PTR_malloc_00614174)(iVar1 + 1);
    if (iVar2 != 0) {
      (*(code *)PTR_memcpy_00614674)(iVar2,param_1,iVar1 + 1);
    }
  }
  return iVar2;
}

