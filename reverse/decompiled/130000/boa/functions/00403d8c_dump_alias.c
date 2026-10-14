/* dump_alias @ 00403d8c */

void dump_alias(void)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  
  puVar3 = &DAT_0046c56c;
  do {
    piVar2 = (int *)*puVar3;
    if ((int *)*puVar3 != (int *)0x0) {
      do {
        if (*piVar2 != 0) {
          (*(code *)PTR_free_0046a680)();
        }
        if (piVar2[1] != 0) {
          (*(code *)PTR_free_0046a680)();
        }
        piVar1 = (int *)piVar2[5];
        (*(code *)PTR_free_0046a680)(piVar2);
        piVar2 = piVar1;
      } while (piVar1 != (int *)0x0);
      *puVar3 = 0;
    }
    puVar3 = puVar3 + 1;
  } while (puVar3 != &debug_level);
  return;
}

