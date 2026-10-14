/* get_ssid_name @ 0040f690 */

void get_ssid_name(int param_1)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0040f6a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR_strcpy_004232f4)(param_1,"Metering-Outlet");
    return;
  }
  return;
}

