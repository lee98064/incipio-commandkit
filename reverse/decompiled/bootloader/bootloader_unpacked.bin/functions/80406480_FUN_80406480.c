/* FUN_80406480 @ 80406480 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80406480(void)

{
  undefined4 uVar1;
  char *pcVar2;
  
  if (_DAT_b8000000 == -0x7e692000) {
    FUN_8040922c(0,2,0);
  }
  uVar1 = FUN_804093ac();
  if ((_DAT_b8000008 & 0x800000) == 0) {
    pcVar2 = &DAT_8040db68;
  }
  else {
    pcVar2 = s_Reboot_Result_from_Watchdog_Time_8040da84;
  }
  FUN_804079cc(s_Flash_Write_Successed___s_8040d464 + 0x18,pcVar2);
  FUN_804079cc(s____RealTek_RTL8196E_at__s__s___s_8040daac,&DAT_8040dad8,&DAT_8040ec90,
               s_16bit_8040daf0,uVar1);
  return;
}

