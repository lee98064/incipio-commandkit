/* write_productInfo_phytrex @ 004036a0 */

void write_productInfo_phytrex(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_1c [20];
  
  (*(code *)PTR_strcpy_0041632c)(auStack_1c,*(undefined4 *)(param_2 + 0xc));
  iVar1 = (*(code *)PTR_open_0041628c)("/dev/mtdblock5",2);
  if (iVar1 < 1) {
    (*(code *)PTR_puts_00416300)("write production to flash open fail......");
  }
  else {
    iVar2 = (*(code *)PTR_lseek_004162ec)(iVar1,0x10000,0);
    if (iVar2 == -1) {
      (*(code *)PTR_puts_00416300)("write production to flash lseek fail......");
    }
    iVar1 = (*(code *)PTR_write_004162dc)(iVar1,auStack_1c,0x14);
    if (iVar1 == -1) {
      (*(code *)PTR_puts_00416300)("write production to flash write fail.......");
    }
  }
  return;
}

