/* FUN_0043499c @ 0043499c */

void FUN_0043499c(void)

{
  (*(code *)PTR_Get_product_info_00612a00)(&DAT_00615ee4);
  (*(code *)PTR_Get_hksettinginfo_00613364)(&DAT_00615ee0);
  if (1 < DAT_00615ee0) {
    DAT_00615ee0 = 0;
  }
  Relay_SwitchSetup((int)(char)DAT_00615ee0);
  Relay_SwitchSetup((int)(char)DAT_00615ee0);
  Relay_SwitchSetup((int)(char)DAT_00615ee0);
                    /* WARNING: Could not recover jumptable at 0x00434a34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_HKUpdateValueToGlobalEventTable_006149fc)(9,(int)(char)DAT_00615ee0);
  return;
}

