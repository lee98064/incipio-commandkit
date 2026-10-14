/* FUN_0043a7c8 @ 0043a7c8 */

void FUN_0043a7c8(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 local_50;
  undefined1 auStack_4c [12];
  undefined1 auStack_40 [44];
  
  (*(code *)PTR_apmib_save_wlanIdx_0046a8ec)();
  (*(code *)PTR_sprintf_0046a808)(auStack_4c,"wlan%d-vxd",param_1);
  (*(code *)PTR_SetWlan_idx_0046ab70)(auStack_4c);
  (*(code *)PTR_apmib_get_0046aadc)(1,auStack_40);
  iVar1 = (*(code *)PTR_strcmp_0046a824)(auStack_40,param_3);
  if (iVar1 != 0) {
    iVar1 = (*(code *)PTR_strcmp_0046a824)(param_3,auStack_40);
    if (iVar1 != 0) {
      local_50 = 1;
      (*(code *)PTR_apmib_set_0046aa28)(0x110,&local_50);
      (*(code *)PTR_strcpy_0046ac60)(auStack_40,param_3);
      (*(code *)PTR_apmib_set_0046aa28)(1,auStack_40);
      (*(code *)PTR_apmib_set_0046aa28)(0x116,auStack_40);
      (*(code *)PTR_apmib_set_0046aa28)(param_2,auStack_40);
    }
  }
  (*(code *)PTR_sprintf_0046a808)(auStack_4c,"wlan%d",param_1);
  (*(code *)PTR_SetWlan_idx_0046ab70)(auStack_4c);
  (*(code *)PTR_apmib_recov_wlanIdx_0046aa00)();
  return;
}

