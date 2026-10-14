/* FUN_00401d9c @ 00401d9c */

void FUN_00401d9c(void)

{
  (*(code *)PTR_system_00423270)("killall -9 udhcpd 2> /dev/null");
  (*(code *)PTR_system_00423270)("rm -f /var/run/udhcpd.pid 2> /dev/null");
                    /* WARNING: Could not recover jumptable at 0x00401dec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_system_00423270)("rm -f /var/lib/misc/udhcpd-br0.leases");
  return;
}

