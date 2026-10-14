/* FUN_0041b218 @ 0041b218 */

void FUN_0041b218(undefined4 param_1)

{
  uint uVar1;
  
  uVar1 = (*(code *)PTR_fcntl_00612fec)(param_1,3);
  if (uVar1 != 0xffffffff) {
                    /* WARNING: Could not recover jumptable at 0x0041b268. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR_fcntl_00612fec)(param_1,4,uVar1 & 0xffffff7f);
    return;
  }
  return;
}

