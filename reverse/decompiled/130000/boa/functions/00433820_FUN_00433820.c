/* FUN_00433820 @ 00433820 */

void FUN_00433820(undefined4 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  char *pcVar3;
  char *pcVar4;
  undefined4 uVar5;
  
  pcVar3 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)(param_1,"redirect-url",&DAT_0044b32c)
  ;
  pcVar4 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)(param_1,"wlan_id",&DAT_0044b32c);
  if (*pcVar4 != '\0') {
    uVar5 = (*(code *)PTR_atoi_0046a73c)(pcVar4);
    puVar2 = PTR_WLAN_IF_0046a890;
    puVar1 = PTR_sprintf_0046a808;
    *(undefined4 *)PTR_wlan_idx_0046a93c = uVar5;
    (*(code *)puVar1)(puVar2,"wlan%d",uVar5);
  }
  *(undefined4 *)PTR_mssid_idx_0046a88c = 0;
  if (*pcVar3 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x004338f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR_send_redirect_perm_0046ac78)(param_1,pcVar3);
    return;
  }
  return;
}

