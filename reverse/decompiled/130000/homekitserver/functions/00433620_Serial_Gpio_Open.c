/* Serial_Gpio_Open @ 00433620 */

undefined4 Serial_Gpio_Open(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  undefined1 auStack_68 [40];
  undefined1 auStack_40 [40];
  undefined1 *local_18;
  
  (*(code *)PTR_memset_0061223c)(auStack_68,0,0x22);
  uVar2 = (*(code *)PTR_fopen_00612ac0)("/proc/wlan0/gpio_ctrl","w");
  (*(code *)PTR_fprintf_006120cc)(uVar2,"config %d w",0);
  puVar1 = PTR_stdout_00612c98;
  (*(code *)PTR_fclose_00612ba0)(uVar2);
  uVar2 = (*(code *)PTR_fopen_00612ac0)("/proc/wlan0/gpio_ctrl","w");
  (*(code *)PTR_fprintf_006120cc)(uVar2,"config %d r",6);
  (*(code *)PTR_fclose_00612ba0)(uVar2);
  (*(code *)PTR_fputs_00612428)("USB to UART Enable...\n",*(undefined4 *)puVar1);
  DAT_0061505c = FUN_00433178(1);
  if (DAT_0061505c < 0) {
    uVar2 = *(undefined4 *)puVar1;
    pcVar4 = "open_port error\n";
  }
  else {
    iVar3 = FUN_0043334c(DAT_0061505c,0x4b00,8,0x4e,1);
    if (-1 < iVar3) goto LAB_00433790;
    uVar2 = *(undefined4 *)puVar1;
    pcVar4 = "set_opt error\n";
  }
  (*(code *)PTR_fputs_00612428)(pcVar4,uVar2);
LAB_00433790:
  (*(code *)PTR_printf_0061185c)("serialport fd=%d\n",DAT_0061505c);
  (*(code *)PTR_printf_0061185c)("FW Version is %s\n","10206");
  Relay_SwitchSetup(0);
  Identify_LEDSetup(0);
  local_18 = auStack_40;
  (*(code *)PTR_Get_product_info_00611b70)(local_18);
  (*(code *)PTR_memcpy_006137d0)(auStack_68,local_18,0x22);
  return 0;
}

