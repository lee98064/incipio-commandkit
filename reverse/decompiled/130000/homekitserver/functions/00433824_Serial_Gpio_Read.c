/* Serial_Gpio_Read @ 00433824 */

/* WARNING: Restarted to delay deadcode elimination for space: ram */

undefined4 Serial_Gpio_Read(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_90 [128];
  
  (*(code *)PTR_memset_0061223c)(auStack_90,0,0x80);
  uVar1 = (*(code *)PTR_fopen_00612ac0)("/proc/wlan0/gpio_ctrl","r");
  (*(code *)PTR_fseek_00611e8c)(uVar1,0,0);
  iVar2 = (*(code *)PTR_fread_00612b58)(auStack_90,1,0xf,uVar1);
  (*(code *)PTR_fclose_00612ba0)(uVar1);
  if (iVar2 == 0) {
    Serial_Gpio_Close();
    Serial_Gpio_Open();
    (*(code *)PTR_fprintf_006120cc)
              (*(undefined4 *)PTR_stderr_0061292c,
               "\nFILE %s FUNCTION %s LINE %d: gpio re-config...\n\n",
               "/home/vendor/rtl819x_v3464_homekit/users/phytrex-homekit/customize/Incipio_Socket_Meter/Socket_Meter.c"
               ,"Serial_Gpio_Read",0x3cb);
    uVar1 = 1;
  }
  else {
    iVar2 = (*(code *)PTR_memcmp_00611fdc)(auStack_90,"GPIO6 1",7);
    if (iVar2 == 0) {
      DAT_0061504a = 0;
    }
    else {
      iVar2 = (*(code *)PTR_memcmp_00611fdc)(auStack_90,"GPIO6 0",7);
      if (iVar2 == 0) {
        DAT_0061504a = 1;
      }
    }
    uVar1 = 0;
    if (DAT_0061504c == 0) {
      (*(code *)PTR_memset_0061223c)(PTR_receivebuffer_00612828,0,0x32);
      iVar2 = (*(code *)PTR_read_00612ef0)(DAT_0061505c,PTR_receivebuffer_00612828,0x32);
      uVar1 = 1;
      if (0 < iVar2) {
        uVar1 = 0;
        DAT_00615050 = iVar2;
      }
    }
  }
  return uVar1;
}

