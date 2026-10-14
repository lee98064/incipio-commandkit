/* hwInfoDel @ 00403f20 */

void hwInfoDel(void)

{
  int iVar1;
  undefined1 auStack_44 [60];
  
  (*(code *)PTR_memset_00415ec8)(auStack_44,0,0x35);
  iVar1 = (*(code *)PTR_open_00415e9c)("/dev/mtdblock5",2);
  if (0 < iVar1) {
    (*(code *)PTR_lseek_00415efc)(iVar1,0x18000,0);
    (*(code *)PTR_write_00415eec)(iVar1,auStack_44,0x35);
    (*(code *)PTR_close_00415e94)(iVar1);
  }
  return;
}

