/* Serial_Gpio_Write @ 00432c38 */

undefined4 Serial_Gpio_Write(void)

{
  if (DAT_00615f31 == '\0') {
    if (DAT_00615f22 != DAT_00615f30) {
      DAT_00615f31 = '\x01';
    }
  }
  else {
    if (DAT_00615f31 == '\x01') {
      DAT_00615f21 = DAT_00615f22;
      DAT_00615f30 = DAT_00615f22;
      (*(code *)PTR_HKUpdateValueToGlobalEventTable_006149fc)(10);
    }
    DAT_00615f31 = '\0';
  }
  return 0;
}

