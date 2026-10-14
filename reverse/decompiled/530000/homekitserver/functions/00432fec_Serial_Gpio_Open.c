/* Serial_Gpio_Open @ 00432fec */

undefined4 Serial_Gpio_Open(void)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fopen_0061395c)("/proc/wlan0/gpio_ctrl","w");
  if (iVar1 != 0) {
    (*(code *)PTR_fprintf_00612f5c)(iVar1,"config %d w",6);
    (*(code *)PTR_fclose_00613a3c)(iVar1);
  }
  iVar1 = (*(code *)PTR_fopen_0061395c)("/proc/wlan0/gpio_ctrl","w");
  if (iVar1 != 0) {
    (*(code *)PTR_fprintf_00612f5c)(iVar1,"config %d r",0);
    (*(code *)PTR_fclose_00613a3c)(iVar1);
  }
  iVar1 = (*(code *)PTR_fopen_0061395c)("/proc/wlan0/gpio_ctrl","w");
  if (iVar1 != 0) {
    (*(code *)PTR_fprintf_00612f5c)(iVar1,"config %d w",5);
    (*(code *)PTR_fclose_00613a3c)(iVar1);
  }
  (*(code *)PTR_printf_006126e8)("FW Version is %s\n","10219");
  Identify_LEDSetup(0);
  return 0;
}

