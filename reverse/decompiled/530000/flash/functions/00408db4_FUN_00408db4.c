/* FUN_00408db4 @ 00408db4 */

void FUN_00408db4(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = (code *)PTR_apmib_get_004235ac;
  if (DAT_00423630 - 3U < 2) {
    UNRECOVERED_JUMPTABLE = (code *)PTR_apmib_getDef_004234d0;
  }
                    /* WARNING: Could not recover jumptable at 0x00408de4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}

