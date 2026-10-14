/* Identify_LEDSetup @ 00432d24 */

undefined4 Identify_LEDSetup(char param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1 == '\x01') {
    iVar1 = (*(code *)PTR_fopen_0061395c)("/proc/wlan0/gpio_ctrl","w");
    if (iVar1 == 0) {
      return 0xffffffff;
    }
    uVar2 = 0;
  }
  else {
    if (param_1 != '\0') {
      return 0xffffffff;
    }
    iVar1 = (*(code *)PTR_fopen_0061395c)("/proc/wlan0/gpio_ctrl","w");
    if (iVar1 == 0) {
      return 0xffffffff;
    }
    uVar2 = 1;
  }
  (*(code *)PTR_fprintf_00612f5c)(iVar1,"set %d %d",6,uVar2);
  (*(code *)PTR_fclose_00613a3c)(iVar1);
  return 0;
}

