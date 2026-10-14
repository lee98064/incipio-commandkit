/* FUN_00424820 @ 00424820 */

void FUN_00424820(undefined4 *param_1)

{
  undefined *UNRECOVERED_JUMPTABLE;
  undefined4 uVar1;
  
  UNRECOVERED_JUMPTABLE = PTR_close_0061276c;
  uVar1 = *param_1;
  *param_1 = 0xffffffff;
                    /* WARNING: Could not recover jumptable at 0x0042483c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)(uVar1);
  return;
}

