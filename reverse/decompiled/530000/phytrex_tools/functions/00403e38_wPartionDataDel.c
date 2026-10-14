/* wPartionDataDel @ 00403e38 */

void wPartionDataDel(void)

{
  int iVar1;
  undefined1 auStack_800c [32772];
  
  (*(code *)PTR_memset_004162b8)(auStack_800c,0,0x8000);
  iVar1 = (*(code *)PTR_open_0041628c)("/dev/mtdblock5",2);
  if (iVar1 < 1) {
    (*(code *)PTR_puts_00416300)("open keyFd fail");
  }
  else {
    (*(code *)PTR_lseek_004162ec)(iVar1,0x10000,0);
    (*(code *)PTR_write_004162dc)(iVar1,auStack_800c,0x8000);
    (*(code *)PTR_puts_00416300)("clean parce write key");
    (*(code *)PTR_system_004162f8)("echo 1 > /var/cleanWriteablePartition");
  }
  (*(code *)PTR_close_00416284)(iVar1);
  FUN_00403ce0();
  return;
}

