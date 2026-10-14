/* HKUserTriggerIdentify @ 00431b74 */

void HKUserTriggerIdentify(void)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    iVar1 = iVar1 + 1;
    (*(code *)PTR_sleep_006136a8)(1);
    (*(code *)PTR_Identify_LEDSetup_00611868)(1);
    (*(code *)PTR_sleep_006136a8)(1);
    (*(code *)PTR_Identify_LEDSetup_00611868)(0);
  } while (iVar1 != 3);
  return;
}

