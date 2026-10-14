/* formWlanRedirect2 @ 0043377c */

void formWlanRedirect2(undefined4 param_1,int param_2,int param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  
  if (param_3 != 0) {
    uVar3 = (*(code *)PTR_atoi_0046a73c)(param_3);
    puVar2 = PTR_WLAN_IF_0046a890;
    puVar1 = PTR_sprintf_0046a808;
    *(undefined4 *)PTR_wlan_idx_0046a93c = uVar3;
    (*(code *)puVar1)(puVar2,"wlan%d",uVar3);
  }
  *(undefined4 *)PTR_mssid_idx_0046a88c = 0;
  if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00433804. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR_send_redirect_perm_0046ac78)(param_1,param_2);
    return;
  }
  return;
}

