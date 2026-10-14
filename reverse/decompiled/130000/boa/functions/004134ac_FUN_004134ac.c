/* FUN_004134ac @ 004134ac */

void FUN_004134ac(void)

{
  (*(code *)PTR_system_0046ab18)("killall -15 ppp_inet 2> /dev/null");
  (*(code *)PTR_system_0046ab18)("killall -15 pppd 2> /dev/null");
  (*(code *)PTR_system_0046ab18)("rm /etc/ppp/connectfile >/dev/null 2>&1");
                    /* WARNING: Could not recover jumptable at 0x00413514. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_system_0046ab18)("rm /etc/ppp/link >/dev/null 2>&1");
  return;
}

