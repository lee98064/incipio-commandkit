/* FUN_00414bf0 @ 00414bf0 */

void FUN_00414bf0(void)

{
  (*(code *)PTR_puts_0057d338)("upgrade: killing tasks...");
  (*(code *)PTR_kill_0057d1fc)(1,0x18);
  (*(code *)PTR_kill_0057d1fc)(1,0x17);
  (*(code *)PTR_kill_0057d1fc)(2,0x17);
  (*(code *)PTR_kill_0057d1fc)(3,0x17);
  (*(code *)PTR_kill_0057d1fc)(4,0x17);
  (*(code *)PTR_kill_0057d1fc)(5,0x17);
  (*(code *)PTR_kill_0057d1fc)(6,0x17);
  (*(code *)PTR_kill_0057d1fc)(7,0x17);
  (*(code *)PTR_sync_0057da18)();
  (*(code *)PTR_signal_0057d2e4)(0xf,1);
  (*(code *)PTR_setpgrp_0057de48)();
  (*(code *)PTR_sleep_0057e70c)(1);
                    /* WARNING: Could not recover jumptable at 0x00414d48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_signal_0057d2e4)(1,1);
  return;
}

