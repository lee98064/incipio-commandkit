/* HomekitSerialOpen @ 004312e8 */

undefined4 HomekitSerialOpen(void)

{
  undefined4 uVar1;
  
  if (DAT_00614fb0 == (code *)0x0) {
    return 0xffffffff;
  }
                    /* WARNING: Could not recover jumptable at 0x00431304. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*DAT_00614fb0)();
  return uVar1;
}

