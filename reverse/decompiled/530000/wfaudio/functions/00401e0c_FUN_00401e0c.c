/* FUN_00401e0c @ 00401e0c */

void FUN_00401e0c(void)

{
  (*(code *)PTR_system_00423558)("killall -9 udhcpd 2> /dev/null");
  (*(code *)PTR_system_00423558)("rm -f /var/run/udhcpd.pid 2> /dev/null");
                    /* WARNING: Could not recover jumptable at 0x00401e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_system_00423558)("rm -f /var/lib/misc/udhcpd-br0.leases");
  return;
}

