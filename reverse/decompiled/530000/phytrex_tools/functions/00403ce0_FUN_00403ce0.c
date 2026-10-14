/* FUN_00403ce0 @ 00403ce0 */

void FUN_00403ce0(void)

{
  int iVar1;
  int iVar2;
  undefined4 local_14;
  undefined1 local_10;
  
  local_14 = 100;
  local_10 = 0;
  iVar1 = (*(code *)PTR_open_0041628c)("/dev/mtdblock5",2);
  if (iVar1 < 1) {
    (*(code *)PTR_puts_00416300)("open initFd fail");
  }
  else {
    (*(code *)PTR_lseek_004162ec)(iVar1,0x10000,0);
    iVar2 = (*(code *)PTR_write_004162dc)(iVar1,&local_14,8);
    if (iVar2 == -1) {
      (*(code *)PTR_puts_00416300)("Initial hksettinginfo to flash fail.......");
    }
    (*(code *)PTR_puts_00416300)("Initial hksettinginfo done");
  }
  (*(code *)PTR_close_00416284)(iVar1);
  return;
}

