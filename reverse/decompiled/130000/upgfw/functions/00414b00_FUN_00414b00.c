/* FUN_00414b00 @ 00414b00 */

void FUN_00414b00(void)

{
  (*(code *)PTR_puts_0057d208)("upgrade: killing tasks...");
  (*(code *)PTR_kill_0057d0cc)(1,0x18);
  (*(code *)PTR_kill_0057d0cc)(1,0x17);
  (*(code *)PTR_kill_0057d0cc)(2,0x17);
  (*(code *)PTR_kill_0057d0cc)(3,0x17);
  (*(code *)PTR_kill_0057d0cc)(4,0x17);
  (*(code *)PTR_kill_0057d0cc)(5,0x17);
  (*(code *)PTR_kill_0057d0cc)(6,0x17);
  (*(code *)PTR_kill_0057d0cc)(7,0x17);
  (*(code *)PTR_sync_0057d8e8)();
  (*(code *)PTR_signal_0057d1b4)(0xf,1);
  (*(code *)PTR_setpgrp_0057dd18)();
  (*(code *)PTR_sleep_0057e5d8)(1);
                    /* WARNING: Could not recover jumptable at 0x00414c58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_signal_0057d1b4)(1,1);
  return;
}

