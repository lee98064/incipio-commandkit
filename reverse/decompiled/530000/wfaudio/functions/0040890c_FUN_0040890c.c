/* FUN_0040890c @ 0040890c */

void FUN_0040890c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  (*(code *)PTR_strncpy_004234dc)(param_4,param_2,0x10);
                    /* WARNING: Could not recover jumptable at 0x00408968. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_ioctl_004235d0)(param_1,param_3,param_4);
  return;
}

