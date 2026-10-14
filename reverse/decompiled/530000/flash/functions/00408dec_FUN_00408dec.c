/* FUN_00408dec @ 00408dec */

void FUN_00408dec(void)

{
  (*(code *)PTR_puts_004235c4)("Usage: flash cmd");
  (*(code *)PTR_puts_004235c4)("option:");
  (*(code *)PTR_puts_004235c4)(&DAT_00411e10);
  (*(code *)PTR_puts_004235c4)("      default -- write all flash parameters from hard code.");
  (*(code *)PTR_puts_004235c4)
            ("      get [wlan interface-index] mib-name -- get a specific mib from flash");
  (*(code *)PTR_puts_004235c4)("          memory.");
  (*(code *)PTR_puts_004235c4)
            ("      set [wlan interface-index] mib-name mib-value -- set a specific mib into");
  (*(code *)PTR_puts_004235c4)("          flash memory.");
  (*(code *)PTR_puts_004235c4)("      all -- dump all flash parameters.");
  (*(code *)PTR_puts_004235c4)("      gethw hw-mib-name -- get a specific mib from flash");
  (*(code *)PTR_puts_004235c4)("          memory.");
  (*(code *)PTR_puts_004235c4)("      sethw hw-mib-name mib-value -- set a specific mib into");
  (*(code *)PTR_puts_004235c4)("          flash memory.");
  (*(code *)PTR_puts_004235c4)("      allhw -- dump all hw flash parameters.");
  (*(code *)PTR_puts_004235c4)("      reset -- reset current setting to default.");
  (*(code *)PTR_puts_004235c4)("      set_mib -- get mib from flash and set to wlan interface.");
                    /* WARNING: Could not recover jumptable at 0x00408f9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_putchar_00423604)(10);
  return;
}

