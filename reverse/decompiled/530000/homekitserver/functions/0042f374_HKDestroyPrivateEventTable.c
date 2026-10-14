/* HKDestroyPrivateEventTable @ 0042f374 */

undefined4 HKDestroyPrivateEventTable(int *param_1)

{
  undefined *puVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  
  if ((int *)*param_1 != param_1) {
    piVar4 = (int *)param_1[5];
    piVar5 = *(int **)param_1[5];
    while (piVar4 != param_1 + 5) {
      iVar2 = piVar4[-2];
      if ((((iVar2 == 4) || (iVar2 == 5)) || (iVar2 == 3)) && (piVar4[-3] != 0)) {
        (*(code *)PTR_free_0061286c)();
      }
      puVar1 = PTR_free_0061286c;
      piVar3 = (int *)piVar4[1];
      iVar2 = *piVar4;
      *(int **)(iVar2 + 4) = piVar3;
      *piVar3 = iVar2;
      piVar4[1] = (int)piVar4;
      *piVar4 = (int)piVar4;
      (*(code *)puVar1)(piVar4 + -5);
      piVar4 = piVar5;
      piVar5 = (int *)*piVar5;
    }
  }
  return 0;
}

