/* FUN_00403c40 @ 00403c40 */

void FUN_00403c40(void)

{
  int iVar1;
  int iVar2;
  undefined4 local_c;
  
  local_c = 100;
  iVar1 = (*(code *)PTR_open_00415e9c)("/dev/mtdblock5",2);
  if (iVar1 < 1) {
    (*(code *)PTR_puts_00415f10)("open initFd fail");
  }
  else {
    (*(code *)PTR_lseek_00415efc)(iVar1,0x10000,0);
    iVar2 = (*(code *)PTR_write_00415eec)(iVar1,&local_c,4);
    if (iVar2 == -1) {
      (*(code *)PTR_puts_00415f10)("Initial hksettinginfo to flash fail.......");
    }
    (*(code *)PTR_puts_00415f10)("Initial hksettinginfo done");
  }
  (*(code *)PTR_close_00415e94)(iVar1);
  return;
}

