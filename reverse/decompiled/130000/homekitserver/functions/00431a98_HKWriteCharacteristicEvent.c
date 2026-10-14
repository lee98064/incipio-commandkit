/* HKWriteCharacteristicEvent @ 00431a98 */

void HKWriteCharacteristicEvent
               (undefined4 param_1,int param_2,uint param_3,undefined4 *param_4,undefined4 param_5,
               undefined4 param_6)

{
  undefined4 uVar1;
  
  if ((param_2 == 9) || (param_2 == 10)) {
    (*(code *)PTR_HKUpdateEnableToPrivateEventTable_00611e88)(param_6,param_2,param_3 >> 0x18);
    *param_4 = 0;
  }
  else if (((param_2 == 0xe) || (param_2 == 0xf)) || (param_2 == 0xd)) goto LAB_00431b54;
  if (param_2 == 0x13) {
    uVar1 = 0x13;
  }
  else {
    if (param_2 != 0x14) {
      return;
    }
    uVar1 = 0x14;
  }
  (*(code *)PTR_HKUpdateEnableToPrivateEventTable_00611e88)(param_6,uVar1,param_3 >> 0x18);
LAB_00431b54:
  *param_4 = 0;
  return;
}

