/* FUN_004076ac @ 004076ac */

int FUN_004076ac(int param_1,int param_2)

{
  int iVar1;
  
  if (param_1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = 0;
    if (param_2 != 0) {
      iVar1 = (*(code *)PTR_malloc_00433280)(param_2 + 1);
      if (iVar1 != 0) {
        (*(code *)PTR_memcpy_004332a8)(iVar1,param_1,param_2);
        *(undefined1 *)(iVar1 + param_2) = 0;
      }
    }
  }
  return iVar1;
}

