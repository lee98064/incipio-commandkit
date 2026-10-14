/* FUN_004249a0 @ 004249a0 */

void FUN_004249a0(undefined4 *param_1)

{
  undefined *UNRECOVERED_JUMPTABLE;
  undefined4 uVar1;
  
  UNRECOVERED_JUMPTABLE = PTR_close_00613604;
  uVar1 = *param_1;
  *param_1 = 0xffffffff;
                    /* WARNING: Could not recover jumptable at 0x004249bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)(uVar1);
  return;
}

