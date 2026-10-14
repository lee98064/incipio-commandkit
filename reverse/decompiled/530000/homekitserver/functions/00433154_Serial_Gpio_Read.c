/* Serial_Gpio_Read @ 00433154 */

undefined4 Serial_Gpio_Read(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined2 local_c;
  undefined1 local_a;
  
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  local_c = 0;
  local_a = 0;
  iVar1 = (*(code *)PTR_fopen_0061395c)("/proc/wlan0/gpio_ctrl","r");
  if (iVar1 != 0) {
    (*(code *)PTR_fseek_00612d1c)(iVar1,0,0);
    iVar2 = (*(code *)PTR_fread_006139f4)(&local_18,1,0xf,iVar1);
    if (iVar2 == 0) {
      (*(code *)PTR_fclose_00613a3c)(iVar1);
      Serial_Gpio_Close();
      Serial_Gpio_Open();
      (*(code *)PTR_fprintf_00612f5c)
                (*(undefined4 *)PTR_stderr_006137c8,
                 "\nFILE %s FUNCTION %s LINE %d: gpio re-config...\n\n",
                 "/home/vendor/rtl819x_v3464_homekit/users/phytrex-homekit/customize/Incipio_Socket_Meter/Socket_Meter.c"
                 ,"Serial_Gpio_Read",0x31d);
      return 1;
    }
    (*(code *)PTR_fclose_00613a3c)(iVar1);
    if (local_14._2_1_ == '1') {
      DAT_00615f22 = 0;
    }
    else {
      DAT_00615f22 = 1;
    }
  }
  if (DAT_00615f24 == 1) {
    if (DAT_00615f28 < 2) {
      DAT_00615f28 = DAT_00615f28 + 1;
      return 0;
    }
    uVar3 = 1;
    if (DAT_00615f2c != 0) {
      if (DAT_00615f2c != 1) {
        DAT_00615f28 = 0;
        return 0;
      }
      uVar3 = 0;
    }
    FUN_00432e0c(uVar3);
    DAT_00615f28 = 0;
    return 0;
  }
  if (DAT_00615f24 != 0) {
    return 0;
  }
  if (DAT_00615f2c != 0) {
    return 0;
  }
  FUN_00432e0c(1);
  return 0;
}

