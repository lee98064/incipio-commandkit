/* HKUpdateValueToPrivateEventTable @ 0042f0f8 */

undefined4 HKUpdateValueToPrivateEventTable(int *param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  
  if ((int *)*param_1 != param_1) {
    piVar1 = *(int **)param_1[5];
    piVar4 = (int *)param_1[5];
    while (piVar3 = piVar1, piVar4 != param_1 + 5) {
      if (piVar4[-4] == param_2) {
        switch(piVar4[-2]) {
        case 0:
        case 1:
          piVar4[-3] = param_3;
          break;
        case 2:
          piVar4[-3] = param_3;
          break;
        case 3:
        case 4:
        case 5:
          iVar5 = piVar4[-3];
          if (iVar5 != 0) {
            iVar2 = (*(code *)PTR_strcmp_00611bec)(iVar5,param_3);
            if (iVar2 == 0) {
              return 0;
            }
            (*(code *)PTR_free_006119dc)(iVar5);
          }
          iVar5 = (*(code *)PTR_strlen_006130b4)(param_3);
          iVar5 = (*(code *)PTR_calloc_00613a18)(1,iVar5 + 1);
          piVar4[-3] = iVar5;
          (*(code *)PTR_strcpy_006115d0)(iVar5,param_3);
          return 0;
        }
        return 0;
      }
      piVar1 = (int *)*piVar3;
      piVar4 = piVar3;
    }
  }
  return 0xffffe595;
}

