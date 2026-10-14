/* killDaemon @ 0041eb18 */

void killDaemon(void)

{
  if (DAT_0046f1c0 == 0) {
    DAT_0046f1c0 = 1;
    (*(code *)PTR_system_0046ab18)("killall -9 sleep 2> /dev/null");
    (*(code *)PTR_system_0046ab18)("killsh.sh");
    (*(code *)PTR_system_0046ab18)("killall -9 routed 2> /dev/null");
    (*(code *)PTR_system_0046ab18)("killall -9 pppoe 2> /dev/null");
    (*(code *)PTR_system_0046ab18)("killall -9 pppd 2> /dev/null");
    (*(code *)PTR_system_0046ab18)("killall -9 pptp 2> /dev/null");
    (*(code *)PTR_system_0046ab18)("killall -9 dnrd 2> /dev/null");
    (*(code *)PTR_system_0046ab18)("killall -9 ntpclient 2> /dev/null");
    (*(code *)PTR_system_0046ab18)("killall -9 miniigd 2> /dev/null");
    (*(code *)PTR_system_0046ab18)("killall -9 lld2d 2> /dev/null");
    (*(code *)PTR_system_0046ab18)("killall -9 l2tpd 2> /dev/null");
    (*(code *)PTR_system_0046ab18)("killall -9 udhcpc 2> /dev/null");
    (*(code *)PTR_system_0046ab18)("killall -9 udhcpd 2> /dev/null");
    (*(code *)PTR_system_0046ab18)("killall -9 reload 2> /dev/null");
    (*(code *)PTR_system_0046ab18)("killall -9 iapp 2> /dev/null");
    (*(code *)PTR_system_0046ab18)("killall -9 wscd 2> /dev/null");
    (*(code *)PTR_system_0046ab18)("killall -9 mini_upnpd 2> /dev/null");
    (*(code *)PTR_system_0046ab18)("killall -9 iwcontrol 2> /dev/null");
    (*(code *)PTR_system_0046ab18)("killall -9 auth 2> /dev/null");
    (*(code *)PTR_system_0046ab18)("killall -9 disc_server 2> /dev/null");
    (*(code *)PTR_system_0046ab18)("killall -9 igmpproxy 2> /dev/null");
    (*(code *)PTR_system_0046ab18)("killall -9 mldproxy 2> /dev/null");
    (*(code *)PTR_system_0046ab18)("echo 1,0 > /proc/br_mCastFastFwd ");
    (*(code *)PTR_system_0046ab18)("killall -9 syslogd 2> /dev/null");
    (*(code *)PTR_system_0046ab18)("killall -9 klogd 2> /dev/null");
                    /* WARNING: Could not recover jumptable at 0x0041eda8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR_system_0046ab18)("killall -9 ntfs-3g 2> /dev/null");
    return;
  }
  return;
}

