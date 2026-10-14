/* FUN_00441f08 @ 00441f08 */

void FUN_00441f08(undefined4 param_1)

{
  char *pcVar1;
  undefined4 uVar2;
  
  pcVar1 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)(param_1,"logout",&DAT_0044b32c);
  if (*pcVar1 != '\0') {
    DAT_0046f470 = 1;
  }
  uVar2 = (*(code *)PTR_req_get_cstream_var_0046a674)(param_1,"return-url",&DAT_0044b32c);
                    /* WARNING: Could not recover jumptable at 0x00441f88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_send_redirect_perm_0046ac78)(param_1,uVar2);
  return;
}

