/* HKWriteCharacteristicValue @ 00432518 */

void HKWriteCharacteristicValue
               (undefined4 param_1,int param_2,uint param_3,undefined4 *param_4,int param_5)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  code *pcVar4;
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
    goto LAB_004325ac;
  case 5:
    iVar2 = param_5 + 0x9e;
LAB_004325ac:
    uVar3 = 0x1e;
    goto LAB_004325b4;
  case 6:
    if (param_3 < 2) {
      (*(code *)PTR_Identify_SwitchSetup_0061404c)((int)(char)param_3);
      goto LAB_004325bc;
    }
    *param_4 = 0xfffeecf6;
    goto LAB_00432624;
  default:
    if (param_2 != 9) goto LAB_00432624;
    if (1 < param_3) goto LAB_00432738;
    iVar2 = (int)(char)param_3;
    pcVar4 = (code *)PTR_Relay_SwitchSetup_0061359c;
    goto LAB_004326e4;
  }
  uVar3 = 0x40;
LAB_004325b4:
  (*(code *)PTR_strncpy_00613414)(iVar2,param_3,uVar3);
LAB_004325bc:
  *param_4 = 0;
LAB_00432624:
  puVar1 = PTR_checkFWInfo_00613b48;
  if (param_2 == 0x12) {
    if (param_3 == 1) {
      *(undefined4 *)(*(int *)(param_5 + 0x154) + 0x808) = 1;
      iVar2 = (*(code *)puVar1)(auStack_a18);
      if (iVar2 < 1) {
        (*(code *)PTR_puts_00612670)("download fw fail, check WiFi connection");
        puVar1 = PTR_HKUpdateValueToGlobalEventTable_006149fc;
        *(undefined4 *)(*(int *)(param_5 + 0x154) + 0x810) = 2;
        (*(code *)puVar1)(0x14,2);
      }
      else {
        (*(code *)PTR_puts_00612670)("Set Firmware start!!!");
        (*(code *)PTR_sprintf_00612e20)(auStack_818,"upgfw %s&",auStack_a18);
        (*(code *)PTR_system_00614714)(auStack_818);
        (*(code *)PTR_printf_006126e8)("Create thread for OTA progress=>%d!\n\n",0);
        (*(code *)PTR_HKUpdateValueToGlobalEventTable_006149fc)(0x13,0);
        iVar2 = *(int *)(param_5 + 0x154) + 8;
        pcVar4 = (code *)PTR_HomekitOTAThreadStart_00614aa8;
LAB_004326e4:
        (*pcVar4)(iVar2);
      }
      *param_4 = 0;
    }
    else if (param_3 == 0) {
      *param_4 = 0;
    }
    else {
LAB_00432738:
      *param_4 = 0xfffeecf6;
    }
  }
  return;
}

