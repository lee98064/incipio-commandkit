/* FUN_00410534 @ 00410534 */

void FUN_00410534(undefined4 param_1)

{
  uint uVar1;
  
  uVar1 = (*(code *)PTR_fcntl_0046a6cc)(param_1,3);
  if (uVar1 != 0xffffffff) {
                    /* WARNING: Could not recover jumptable at 0x00410584. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR_fcntl_0046a6cc)(param_1,4,uVar1 & 0xffffff7f);
    return;
  }
  return;
}

