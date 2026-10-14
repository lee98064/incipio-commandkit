/* FUN_00433de4 @ 00433de4 */

void FUN_00433de4(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 local_res4 [3];
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  iVar1 = 0;
  local_res4[0] = param_2;
  do {
    local_38 = 0;
    local_34 = 0;
    local_30 = 0;
    local_2c = 0;
    local_28 = 0;
    (*(code *)PTR_sprintf_0046a808)(&local_38,"wlan%d-va%d",param_1,iVar1);
    iVar1 = iVar1 + 1;
    (*(code *)PTR_SetWlan_idx_0046ab70)(&local_38);
    (*(code *)PTR_apmib_set_0046aa28)(0x10e,local_res4);
  } while (iVar1 != 4);
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  (*(code *)PTR_sprintf_0046a808)(&local_38,"wlan%d-vxd",param_1);
  (*(code *)PTR_SetWlan_idx_0046ab70)(&local_38);
  (*(code *)PTR_apmib_set_0046aa28)(0x10e,local_res4);
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  (*(code *)PTR_sprintf_0046a808)(&local_38,"wlan%d",param_1);
  (*(code *)PTR_SetWlan_idx_0046ab70)(&local_38);
  return;
}

