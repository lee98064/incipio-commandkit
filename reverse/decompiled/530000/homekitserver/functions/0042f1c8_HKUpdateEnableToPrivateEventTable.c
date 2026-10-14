/* HKUpdateEnableToPrivateEventTable @ 0042f1c8 */

undefined4 HKUpdateEnableToPrivateEventTable(int *param_1,int param_2,undefined1 param_3)

{
  int *piVar1;
  int *piVar2;
  
  if ((int *)*param_1 != param_1) {
    piVar1 = (int *)param_1[5];
    piVar2 = *(int **)param_1[5];
    while (piVar1 != param_1 + 5) {
      if (piVar1[-4] == param_2) {
        *(undefined1 *)(piVar1 + -5) = param_3;
        return 0;
      }
      piVar1 = piVar2;
      piVar2 = (int *)*piVar2;
    }
  }
  return 0;
}

