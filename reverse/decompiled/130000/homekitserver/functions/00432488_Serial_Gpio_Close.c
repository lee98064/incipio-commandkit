/* Serial_Gpio_Close @ 00432488 */

undefined4 Serial_Gpio_Close(void)

{
  undefined4 uVar1;
  
  (*(code *)PTR_fprintf_006120cc)
            (*(undefined4 *)PTR_stderr_0061292c,"\nFILE %s FUNCTION %s LINE %d: Do serial close\n\n"
             ,
             "/home/vendor/rtl819x_v3464_homekit/users/phytrex-homekit/customize/Incipio_Socket_Meter/Socket_Meter.c"
             ,"Serial_Gpio_Close",0x3f5);
  uVar1 = 0xffffffff;
  if (DAT_0061505c != -1) {
    (*(code *)PTR_tcsetattr_006124e0)(DAT_0061505c,0x540e,PTR_serial_options_orig_00611dd8);
    (*(code *)PTR_close_0061276c)(DAT_0061505c);
    uVar1 = 0;
  }
  return uVar1;
}

