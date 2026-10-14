/* HKUserTriggerIdentify @ 0043247c */

void HKUserTriggerIdentify(void)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    iVar1 = iVar1 + 1;
    (*(code *)PTR_sleep_0061454c)(1);
    (*(code *)PTR_Identify_LEDSetup_006126f4)(1);
    (*(code *)PTR_sleep_0061454c)(1);
    (*(code *)PTR_Identify_LEDSetup_006126f4)(0);
  } while (iVar1 != 3);
  return;
}

