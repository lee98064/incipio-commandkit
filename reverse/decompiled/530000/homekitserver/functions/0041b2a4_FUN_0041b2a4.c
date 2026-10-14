/* FUN_0041b2a4 @ 0041b2a4 */

void FUN_0041b2a4(undefined4 param_1)

{
  uint uVar1;
  
  uVar1 = (*(code *)PTR_fcntl_00613e84)(param_1,3);
  if (uVar1 != 0xffffffff) {
                    /* WARNING: Could not recover jumptable at 0x0041b2f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR_fcntl_00613e84)(param_1,4,uVar1 | 0x80);
    return;
  }
  return;
}

