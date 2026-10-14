/* Identify_LEDSetup @ 00432274 */

undefined4 Identify_LEDSetup(char param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if (param_1 == '\x01') {
    uVar1 = (*(code *)PTR_fopen_00612ac0)("/proc/wlan0/gpio_ctrl","w");
    uVar2 = 0;
  }
  else {
    if (param_1 != '\0') {
      return 0xffffffff;
    }
    uVar1 = (*(code *)PTR_fopen_00612ac0)("/proc/wlan0/gpio_ctrl","w");
    uVar2 = 1;
  }
  (*(code *)PTR_fprintf_006120cc)(uVar1,"set %d %d",0,uVar2);
  (*(code *)PTR_fclose_00612ba0)(uVar1);
  return 0;
}

