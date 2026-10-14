/* FUN_00433c3c @ 00433c3c */

void FUN_00433c3c(void)

{
  (*(code *)PTR_system_0046ab18)("killall -9 sleep 2> /dev/null");
  (*(code *)PTR_system_0046ab18)("killall -9 routed 2> /dev/null");
  (*(code *)PTR_system_0046ab18)("killall -9 dnrd 2> /dev/null");
  (*(code *)PTR_system_0046ab18)("killall -9 ntpclient 2> /dev/null");
  (*(code *)PTR_system_0046ab18)("killall -9 lld2d 2> /dev/null");
  (*(code *)PTR_system_0046ab18)("killall -9 reload 2> /dev/null");
  (*(code *)PTR_system_0046ab18)("killall -9 iapp 2> /dev/null");
  (*(code *)PTR_system_0046ab18)("killall -9 wscd 2> /dev/null");
  (*(code *)PTR_system_0046ab18)("killall -9 mini_upnpd 2> /dev/null");
  (*(code *)PTR_system_0046ab18)("killall -9 iwcontrol 2> /dev/null");
  (*(code *)PTR_system_0046ab18)("killall -9 auth 2> /dev/null");
  (*(code *)PTR_system_0046ab18)("killall -9 disc_server 2> /dev/null");
  (*(code *)PTR_system_0046ab18)("killall -9 igmpproxy 2> /dev/null");
  (*(code *)PTR_system_0046ab18)("echo 1,0 > /proc/br_mCastFastFwd");
  (*(code *)PTR_system_0046ab18)("killall -9 syslogd 2> /dev/null");
  (*(code *)PTR_system_0046ab18)("killall -9 klogd 2> /dev/null");
                    /* WARNING: Could not recover jumptable at 0x00433ddc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_system_0046ab18)("killall -9 ppp_inet 2> /dev/null");
  return;
}

