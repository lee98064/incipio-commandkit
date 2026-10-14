/* FUN_00433364 @ 00433364 */

undefined4 FUN_00433364(undefined4 param_1,int param_2,int param_3)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  
  puVar1 = PTR_vwlan_idx_0046a9b0;
  iVar2 = (*(code *)PTR_atoi_0046a73c)(*(undefined4 *)(param_3 + (param_2 + -1) * 4));
  uVar3 = *(undefined4 *)puVar1;
  *(int *)puVar1 = iVar2;
  if (iVar2 < 6) {
    if (0 < iVar2) {
      local_20 = auStack_48;
      (*(code *)PTR_strcpy_0046ac60)(auStack_48,PTR_WLAN_IF_0046a890);
      (*(code *)PTR_sprintf_0046a808)(PTR_WLAN_IF_0046a890,"%s-va%d",local_20,*(int *)puVar1 + -1);
    }
    uVar4 = FUN_0042cecc(param_1,param_2 + -1,param_3);
    if (0 < *(int *)PTR_vwlan_idx_0046a9b0) {
      (*(code *)PTR_strcpy_0046ac60)(PTR_WLAN_IF_0046a890,auStack_48);
    }
    *(undefined4 *)PTR_vwlan_idx_0046a9b0 = uVar3;
  }
  else {
    (*(code *)PTR_req_format_write_0046a95c)(param_1,&DAT_00450acc);
    *(undefined4 *)puVar1 = uVar3;
    uVar4 = 0;
  }
  return uVar4;
}

