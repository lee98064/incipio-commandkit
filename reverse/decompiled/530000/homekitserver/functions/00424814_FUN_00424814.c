/* FUN_00424814 @ 00424814 */

int FUN_00424814(int param_1,int param_2)

{
  int iVar1;
  
  if (param_1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = 0;
    if (param_2 != 0) {
      iVar1 = (*(code *)PTR_malloc_00614174)(param_2 + 1);
      if (iVar1 != 0) {
        (*(code *)PTR_memcpy_00614674)(iVar1,param_1,param_2);
        *(undefined1 *)(iVar1 + param_2) = 0;
      }
    }
  }
  return iVar1;
}

