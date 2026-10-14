/* hwInfoDel @ 00403fc0 */

void hwInfoDel(void)

{
  int iVar1;
  undefined1 auStack_44 [60];
  
  (*(code *)PTR_memset_004162b8)(auStack_44,0,0x35);
  iVar1 = (*(code *)PTR_open_0041628c)("/dev/mtdblock5",2);
  if (0 < iVar1) {
    (*(code *)PTR_lseek_004162ec)(iVar1,0x18000,0);
    (*(code *)PTR_write_004162dc)(iVar1,auStack_44,0x35);
    (*(code *)PTR_close_00416284)(iVar1);
  }
  return;
}

