/* FUN_00432e0c @ 00432e0c */

undefined4 FUN_00432e0c(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (*(code *)PTR_fopen_0061395c)("/proc/wlan0/gpio_ctrl","w");
  uVar2 = 0xffffffff;
  if (iVar1 != 0) {
    (*(code *)PTR_fprintf_00612f5c)(iVar1,"set %d %d",5,param_1);
    DAT_00615f2c = param_1;
    (*(code *)PTR_fclose_00613a3c)(iVar1);
    uVar2 = 0;
  }
  return uVar2;
}

