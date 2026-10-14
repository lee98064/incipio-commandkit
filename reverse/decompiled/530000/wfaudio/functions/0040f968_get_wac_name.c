/* get_wac_name @ 0040f968 */

void get_wac_name(int param_1)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0040f980. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR_strcpy_004235e0)(param_1,"Metering-Outlet");
    return;
  }
  return;
}

