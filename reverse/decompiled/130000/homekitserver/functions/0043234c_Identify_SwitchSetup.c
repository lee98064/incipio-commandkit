/* Identify_SwitchSetup @ 0043234c */

undefined4 Identify_SwitchSetup(char param_1)

{
  undefined4 uVar1;
  
  if (param_1 == '\0') {
    (*(code *)PTR_fprintf_006120cc)
              (*(undefined4 *)PTR_stderr_0061292c,
               "\nFILE %s FUNCTION %s LINE %d: identify LED Off\n\n",
               "/home/vendor/rtl819x_v3464_homekit/users/phytrex-homekit/customize/Incipio_Socket_Meter/Socket_Meter.c"
               ,"Identify_SwitchSetup",0x422);
    uVar1 = (*(code *)PTR_fopen_00612ac0)("/proc/wlan0/gpio_ctrl","w");
    (*(code *)PTR_fprintf_006120cc)(uVar1,"set %d %d",0,1);
    (*(code *)PTR_fclose_00612ba0)(uVar1);
  }
  else {
    if (param_1 != '\x01') {
      (*(code *)PTR_fprintf_006120cc)
                (*(undefined4 *)PTR_stderr_0061292c,"\nFILE %s FUNCTION %s LINE %d: bad request\n\n"
                 ,
                 "/home/vendor/rtl819x_v3464_homekit/users/phytrex-homekit/customize/Incipio_Socket_Meter/Socket_Meter.c"
                 ,"Identify_SwitchSetup",0x42b);
      return 0xffffffff;
    }
    (*(code *)PTR_fprintf_006120cc)
              (*(undefined4 *)PTR_stderr_0061292c,
               "\nFILE %s FUNCTION %s LINE %d: identify LED blink\n\n",
               "/home/vendor/rtl819x_v3464_homekit/users/phytrex-homekit/customize/Incipio_Socket_Meter/Socket_Meter.c"
               ,"Identify_SwitchSetup",0x41c);
    (*(code *)PTR_HKUserTriggerIdentify_00612dac)();
  }
  return 0;
}

