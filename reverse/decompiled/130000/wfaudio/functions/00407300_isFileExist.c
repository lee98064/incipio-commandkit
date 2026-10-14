/* isFileExist @ 00407300 */

uint isFileExist(undefined4 param_1)

{
  uint uVar1;
  undefined1 auStack_a0 [156];
  
  uVar1 = (*(code *)PTR_stat_00423144)(param_1,auStack_a0);
  return ~uVar1 >> 0x1f;
}

