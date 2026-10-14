/* write_productInfo_phytrex @ 00403600 */

void write_productInfo_phytrex(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_1c [20];
  
  (*(code *)PTR_strcpy_00415f38)(auStack_1c,*(undefined4 *)(param_2 + 0xc));
  iVar1 = (*(code *)PTR_open_00415e9c)("/dev/mtdblock5",2);
  if (iVar1 < 1) {
    (*(code *)PTR_puts_00415f10)("write production to flash open fail......");
  }
  else {
    iVar2 = (*(code *)PTR_lseek_00415efc)(iVar1,0x10000,0);
    if (iVar2 == -1) {
      (*(code *)PTR_puts_00415f10)("write production to flash lseek fail......");
    }
    iVar1 = (*(code *)PTR_write_00415eec)(iVar1,auStack_1c,0x14);
    if (iVar1 == -1) {
      (*(code *)PTR_puts_00415f10)("write production to flash write fail.......");
    }
  }
  return;
}

