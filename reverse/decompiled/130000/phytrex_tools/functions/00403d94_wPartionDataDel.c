/* wPartionDataDel @ 00403d94 */

void wPartionDataDel(void)

{
  int iVar1;
  undefined1 auStack_800c [32772];
  
  (*(code *)PTR_memset_00415ec8)(auStack_800c,0,0x8000);
  iVar1 = (*(code *)PTR_open_00415e9c)("/dev/mtdblock5",2);
  if (iVar1 < 1) {
    (*(code *)PTR_puts_00415f10)("open keyFd fail");
  }
  else {
    (*(code *)PTR_lseek_00415efc)(iVar1,0x10000,0);
    (*(code *)PTR_write_00415eec)(iVar1,auStack_800c,0x8000);
    (*(code *)PTR_puts_00415f10)("clean parce write key");
    (*(code *)PTR_system_00415f08)("echo 1 > /var/cleanWriteablePartition");
  }
  (*(code *)PTR_close_00415e94)(iVar1);
  FUN_00403c40();
  return;
}

