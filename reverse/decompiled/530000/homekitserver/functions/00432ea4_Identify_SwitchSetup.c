/* Identify_SwitchSetup @ 00432ea4 */

undefined4 Identify_SwitchSetup(char param_1)

{
  int iVar1;
  
  if (param_1 == '\0') {
    (*(code *)PTR_fprintf_00612f5c)
              (*(undefined4 *)PTR_stderr_006137c8,
               "\nFILE %s FUNCTION %s LINE %d: identify LED Off\n\n",
               "/home/vendor/rtl819x_v3464_homekit/users/phytrex-homekit/customize/Incipio_Socket_Meter/Socket_Meter.c"
               ,"Identify_SwitchSetup",0x378);
    iVar1 = (*(code *)PTR_fopen_0061395c)("/proc/wlan0/gpio_ctrl","w");
    if (iVar1 == 0) {
      return 1;
    }
    (*(code *)PTR_fprintf_00612f5c)(iVar1,"set %d %d",6,1);
    (*(code *)PTR_fclose_00613a3c)(iVar1);
  }
  else {
    if (param_1 != '\x01') {
      (*(code *)PTR_fprintf_00612f5c)
                (*(undefined4 *)PTR_stderr_006137c8,"\nFILE %s FUNCTION %s LINE %d: bad request\n\n"
                 ,
                 "/home/vendor/rtl819x_v3464_homekit/users/phytrex-homekit/customize/Incipio_Socket_Meter/Socket_Meter.c"
                 ,"Identify_SwitchSetup",0x388);
      return 0xffffffff;
    }
    (*(code *)PTR_fprintf_00612f5c)
              (*(undefined4 *)PTR_stderr_006137c8,
               "\nFILE %s FUNCTION %s LINE %d: identify LED blink\n\n",
               "/home/vendor/rtl819x_v3464_homekit/users/phytrex-homekit/customize/Incipio_Socket_Meter/Socket_Meter.c"
               ,"Identify_SwitchSetup",0x372);
    (*(code *)PTR_HKUserTriggerIdentify_00613c44)();
  }
  return 0;
}

