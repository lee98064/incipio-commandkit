/* FUN_00408db8 @ 00408db8 */

void FUN_00408db8(void)

{
  (*(code *)PTR_puts_00423594)("Usage: flash cmd");
  (*(code *)PTR_puts_00423594)("option:");
  (*(code *)PTR_puts_00423594)(&DAT_00411de0);
  (*(code *)PTR_puts_00423594)("      default -- write all flash parameters from hard code.");
  (*(code *)PTR_puts_00423594)
            ("      get [wlan interface-index] mib-name -- get a specific mib from flash");
  (*(code *)PTR_puts_00423594)("          memory.");
  (*(code *)PTR_puts_00423594)
            ("      set [wlan interface-index] mib-name mib-value -- set a specific mib into");
  (*(code *)PTR_puts_00423594)("          flash memory.");
  (*(code *)PTR_puts_00423594)("      all -- dump all flash parameters.");
  (*(code *)PTR_puts_00423594)("      gethw hw-mib-name -- get a specific mib from flash");
  (*(code *)PTR_puts_00423594)("          memory.");
  (*(code *)PTR_puts_00423594)("      sethw hw-mib-name mib-value -- set a specific mib into");
  (*(code *)PTR_puts_00423594)("          flash memory.");
  (*(code *)PTR_puts_00423594)("      allhw -- dump all hw flash parameters.");
  (*(code *)PTR_puts_00423594)("      reset -- reset current setting to default.");
  (*(code *)PTR_puts_00423594)("      set_mib -- get mib from flash and set to wlan interface.");
                    /* WARNING: Could not recover jumptable at 0x00408f68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_putchar_004235d4)(10);
  return;
}

