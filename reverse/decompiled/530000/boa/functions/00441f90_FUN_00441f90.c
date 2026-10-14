/* FUN_00441f90 @ 00441f90 */

void FUN_00441f90(undefined4 param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)(param_1,"submit-url",&DAT_0044b32c);
  if (*pcVar1 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x00441fe4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR_send_redirect_perm_0046ac78)(param_1,pcVar1);
    return;
  }
  return;
}

