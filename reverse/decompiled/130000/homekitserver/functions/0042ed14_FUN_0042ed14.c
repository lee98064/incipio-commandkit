/* FUN_0042ed14 @ 0042ed14 */

undefined4 FUN_0042ed14(void)

{
  undefined *puVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  
  if ((undefined4 **)DAT_00614840 != &DAT_00614840) {
    piVar4 = DAT_0061484c;
    piVar5 = (int *)*DAT_0061484c;
    while ((int **)piVar4 != &DAT_0061484c) {
      iVar2 = piVar4[-1];
      if ((((iVar2 == 4) || (iVar2 == 5)) || (iVar2 == 3)) && (piVar4[-2] != 0)) {
        (*(code *)PTR_free_006119dc)();
      }
      puVar1 = PTR_free_006119dc;
      piVar3 = (int *)piVar4[1];
      iVar2 = *piVar4;
      *(int **)(iVar2 + 4) = piVar3;
      *piVar3 = iVar2;
      piVar4[1] = (int)piVar4;
      *piVar4 = (int)piVar4;
      (*(code *)puVar1)(piVar4 + -3);
      piVar4 = piVar5;
      piVar5 = (int *)*piVar5;
    }
  }
  return 0;
}

