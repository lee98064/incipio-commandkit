/* FUN_00424724 @ 00424724 */

int FUN_00424724(char *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if ((param_1 != (char *)0x0) && (*param_1 != '\0')) {
    iVar1 = (*(code *)PTR_strlen_006130b4)();
    iVar2 = (*(code *)PTR_malloc_006132d8)(iVar1 + 1);
    if (iVar2 != 0) {
      (*(code *)PTR_memcpy_006137d0)(iVar2,param_1,iVar1 + 1);
    }
  }
  return iVar2;
}

