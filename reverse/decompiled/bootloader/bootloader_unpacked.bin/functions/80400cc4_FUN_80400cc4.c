/* FUN_80400cc4 @ 80400cc4 */

void FUN_80400cc4(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(&DAT_8040ee84 + param_1 * 4);
  if (puVar1 != (undefined4 *)0x0) {
    (*(code *)*puVar1)(param_1,puVar1[4],param_2);
    return;
  }
  FUN_804079cc(s_cp0_cause__X__cp0_epc__X_8040d200,Cause,EPC);
  FUN_804079cc(s_you_got_irq__X_8040d21c,param_1);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

