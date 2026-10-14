/* kill_processes @ 0041f66c */

void kill_processes(void)

{
  (*(code *)PTR_puts_0046ab3c)("upgrade: killing tasks...");
  (*(code *)PTR_kill_0046a9e4)(1,0x18);
  (*(code *)PTR_kill_0046a9e4)(1,0x17);
  (*(code *)PTR_kill_0046a9e4)(2,0x17);
  (*(code *)PTR_kill_0046a9e4)(3,0x17);
  (*(code *)PTR_kill_0046a9e4)(4,0x17);
  (*(code *)PTR_kill_0046a9e4)(5,0x17);
  (*(code *)PTR_kill_0046a9e4)(6,0x17);
  (*(code *)PTR_kill_0046a9e4)(7,0x17);
  (*(code *)PTR_sync_0046a8fc)();
  (*(code *)PTR_signal_0046a938)(0xf,1);
  (*(code *)PTR_setpgrp_0046a90c)();
  (*(code *)PTR_sleep_0046ab0c)(1);
                    /* WARNING: Could not recover jumptable at 0x0041f7c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_signal_0046a938)(1,1);
  return;
}

