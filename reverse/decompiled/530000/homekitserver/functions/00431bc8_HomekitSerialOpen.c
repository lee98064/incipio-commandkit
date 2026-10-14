/* HomekitSerialOpen @ 00431bc8 */

undefined4 HomekitSerialOpen(void)

{
  undefined4 uVar1;
  
  if (DAT_00615e60 == (code *)0x0) {
    return 0xffffffff;
  }
                    /* WARNING: Could not recover jumptable at 0x00431be4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*DAT_00615e60)();
  return uVar1;
}

