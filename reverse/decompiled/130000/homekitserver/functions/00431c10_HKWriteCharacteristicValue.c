/* HKWriteCharacteristicValue @ 00431c10 */

void HKWriteCharacteristicValue
               (undefined4 param_1,int param_2,uint param_3,undefined4 *param_4,int param_5)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_a18 [512];
  undefined1 auStack_818 [2052];
  
  switch(param_2) {
  case 2:
    iVar2 = param_5;
    break;
  case 3:
    iVar2 = param_5 + 0x40;
    break;
  case 4:
    iVar2 = param_5 + 0x80;
    goto LAB_00431ca4;
  case 5:
    iVar2 = param_5 + 0x9e;
LAB_00431ca4:
    uVar3 = 0x1e;
    goto LAB_00431cac;
  case 6:
    (*(code *)PTR_Identify_SwitchSetup_006131b0)((int)(char)param_3);
    goto LAB_00431d10;
  default:
    if (param_2 != 9) goto LAB_00431d10;
    if (param_3 < 2) {
      (*(code *)PTR_Relay_SwitchSetup_00612708)((int)(char)param_3);
      *param_4 = 0;
      return;
    }
    goto LAB_00431de0;
  }
  uVar3 = 0x40;
LAB_00431cac:
  (*(code *)PTR_strncpy_00612580)(iVar2,param_3,uVar3);
  *param_4 = 0;
LAB_00431d10:
  puVar1 = PTR_checkFWInfo_00612cb0;
  if (param_2 == 0x12) {
    if (0 < (int)param_3) {
      *(uint *)(*(int *)(param_5 + 0x154) + 0x808) = param_3;
      iVar2 = (*(code *)puVar1)(auStack_a18);
      if (0 < iVar2) {
        (*(code *)PTR_puts_006117e4)("Set Firmware start!!!");
        (*(code *)PTR_sprintf_00611f90)(auStack_818,"upgfw %s&",auStack_a18);
        (*(code *)PTR_system_00613870)(auStack_818);
        (*(code *)PTR_printf_0061185c)("Create thread for OTA progress=>%d!\n\n",0);
        (*(code *)PTR_HKUpdateValueToGlobalEventTable_00613b54)(0x13,0);
        (*(code *)PTR_HomekitOTAThreadStart_00613c00)(*(int *)(param_5 + 0x154) + 8);
        return;
      }
    }
LAB_00431de0:
    *param_4 = 0xfffeecf6;
  }
  return;
}

