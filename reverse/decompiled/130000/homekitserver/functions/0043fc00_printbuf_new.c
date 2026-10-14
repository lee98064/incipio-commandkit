/* printbuf_new @ 0043fc00 */

int * printbuf_new(void)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)(*(code *)PTR_calloc_00613a18)(1,0xc);
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1[2] = 0x20;
    piVar1[1] = 0;
    iVar2 = (*(code *)PTR_malloc_006132d8)(piVar1[2]);
    *piVar1 = iVar2;
    if (*piVar1 == 0) {
      (*(code *)PTR_free_006119dc)(piVar1);
      piVar1 = (int *)0x0;
    }
  }
  return piVar1;
}

