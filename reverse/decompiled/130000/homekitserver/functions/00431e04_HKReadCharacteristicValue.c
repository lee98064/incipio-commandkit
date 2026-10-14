/* HKReadCharacteristicValue @ 00431e04 */

undefined4 HKReadCharacteristicValue(undefined4 param_1,int param_2,uint *param_3,uint param_4)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  code *pcVar4;
  
  switch(param_2) {
  case 2:
    *param_3 = param_4;
    goto LAB_00431ed8;
  case 3:
    uVar3 = param_4 + 0x40;
    break;
  case 4:
    uVar3 = param_4 + 0x80;
    break;
  case 5:
    uVar3 = param_4 + 0x9e;
    break;
  case 6:
    *(undefined1 *)param_3 = 1;
    goto LAB_00431ed8;
  default:
    pcVar4 = (code *)PTR_Relay_SwitchState_00612d6c;
    if ((param_2 != 9) && (pcVar4 = (code *)PTR_outlet_InusedRead_00612dd4, param_2 != 10))
    goto LAB_00431ed8;
    iVar2 = (*pcVar4)();
    *param_3 = (uint)(iVar2 == 1);
    goto LAB_00431f3c;
  }
  *param_3 = uVar3;
LAB_00431ed8:
  pcVar4 = (code *)PTR_Get_Irms_value_00611b20;
  if (((param_2 == 0xe) || (pcVar4 = (code *)PTR_Get_Power_value_00612480, param_2 == 0xf)) ||
     (pcVar4 = (code *)PTR_Get_Vrms_value_00611654, param_2 == 0xd)) {
    uVar3 = (*pcVar4)();
    puVar1 = PTR_Get_Relay_State_00612918;
    *param_3 = uVar3;
    (*(code *)puVar1)();
  }
  else {
LAB_00431f3c:
    if (param_2 == 0x13) {
      *param_3 = *(uint *)(*(int *)(param_4 + 0x154) + 0x80c);
    }
    else if (param_2 == 0x14) {
      *param_3 = *(uint *)(*(int *)(param_4 + 0x154) + 0x810);
    }
    else if (param_2 == 0x12) {
      *param_3 = *(uint *)(*(int *)(param_4 + 0x154) + 0x808);
    }
  }
  return 0;
}

