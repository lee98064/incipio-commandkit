/* HKGetValueFromGlobalEventTable @ 0042e9c0 */

undefined4 HKGetValueFromGlobalEventTable(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  if ((undefined4 **)DAT_00614840 != &DAT_00614840) {
    puVar1 = (undefined4 *)*DAT_0061484c;
    puVar3 = DAT_0061484c;
    while (puVar2 = puVar1, (undefined4 **)puVar3 != &DAT_0061484c) {
      if (puVar3[-3] == param_1) {
        switch(puVar3[-1]) {
        case 0:
        case 1:
        case 3:
        case 4:
          *param_2 = puVar3[-2];
          return 0;
        case 2:
          *param_2 = puVar3[-2];
          return 0;
        default:
          return 0;
        }
      }
      puVar1 = (undefined4 *)*puVar2;
      puVar3 = puVar2;
    }
  }
  return 0xffffe5b7;
}

