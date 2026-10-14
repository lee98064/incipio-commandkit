/* HKReadCharacteristicValue @ 0043275c */

undefined4 HKReadCharacteristicValue(undefined4 param_1,int param_2,uint *param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  code *pcVar3;
  
  switch(param_2) {
  case 2:
    *param_3 = param_4;
    goto LAB_00432830;
  case 3:
    uVar2 = param_4 + 0x40;
    break;
  case 4:
    uVar2 = param_4 + 0x80;
    break;
  case 5:
    uVar2 = param_4 + 0x9e;
    break;
  case 6:
    *(undefined1 *)param_3 = 1;
    goto LAB_00432830;
  default:
    pcVar3 = (code *)PTR_Relay_SwitchState_00613c04;
    if ((param_2 != 9) && (pcVar3 = (code *)PTR_outlet_InusedRead_00613c6c, param_2 != 10))
    goto LAB_00432830;
    iVar1 = (*pcVar3)();
    *param_3 = (uint)(iVar1 == 1);
    goto LAB_0043287c;
  }
  *param_3 = uVar2;
LAB_00432830:
  pcVar3 = (code *)PTR_get_current_value_006146f8;
  if (((param_2 == 0xe) || (pcVar3 = (code *)PTR_get_power_value_006129ac, param_2 == 0xf)) ||
     (pcVar3 = (code *)PTR_get_voltage_value_006131b4, param_2 == 0xd)) {
    uVar2 = (*pcVar3)();
    *param_3 = uVar2;
  }
  else {
LAB_0043287c:
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

