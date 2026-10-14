/* HKUpdateValueToGlobalEventTable @ 0042f250 */

undefined4 HKUpdateValueToGlobalEventTable(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  
  if ((undefined4 **)DAT_00614840 != &DAT_00614840) {
    puVar1 = (undefined4 *)*DAT_0061484c;
    puVar5 = DAT_0061484c;
    while (puVar4 = puVar1, (undefined4 **)puVar5 != &DAT_0061484c) {
      if (puVar5[-3] == param_1) {
        switch(puVar5[-1]) {
        case 0:
        case 1:
          goto switchD_0042f2d0_caseD_0;
        case 2:
          iVar6 = (*(code *)PTR___nesf2_00611970)(puVar5[-2],param_2);
          if (iVar6 != 0) {
            puVar5[-2] = param_2;
            return 0;
          }
          return 0;
        case 3:
        case 4:
        case 5:
          iVar6 = puVar5[-2];
          if (iVar6 != 0) {
            iVar2 = (*(code *)PTR_strcmp_00611bec)(iVar6,param_2);
            if (iVar2 == 0) {
              return 0;
            }
            (*(code *)PTR_free_006119dc)(iVar6);
          }
          iVar6 = (*(code *)PTR_strlen_006130b4)(param_2);
          uVar3 = (*(code *)PTR_calloc_00613a18)(1,iVar6 + 1);
          puVar5[-2] = uVar3;
          (*(code *)PTR_strcpy_006115d0)(uVar3,param_2);
          return 0;
        default:
          return 0;
        }
      }
      puVar1 = (undefined4 *)*puVar4;
      puVar5 = puVar4;
    }
  }
  return 0xffffe5b7;
switchD_0042f2d0_caseD_0:
  if (puVar5[-2] != param_2) {
    puVar5[-2] = param_2;
    return 0;
  }
  return 0;
}

