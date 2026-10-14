/* FUN_00408d80 @ 00408d80 */

void FUN_00408d80(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = (code *)PTR_apmib_get_0042357c;
  if (DAT_00423600 - 3U < 2) {
    UNRECOVERED_JUMPTABLE = (code *)PTR_apmib_getDef_004234a0;
  }
                    /* WARNING: Could not recover jumptable at 0x00408db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}

