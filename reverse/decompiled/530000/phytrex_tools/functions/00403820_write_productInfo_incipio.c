/* write_productInfo_incipio @ 00403820 */

void write_productInfo_incipio(int param_1)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_2c [14];
  undefined1 auStack_1e [22];
  
  (*(code *)PTR_memset_004162b8)(auStack_2c,0,0x22);
  if ((*(int *)(param_1 + 0xc) == 0) || (*(int *)(param_1 + 0x10) == 0)) {
    (*(code *)PTR_puts_00416300)("argv 3, 4 error.");
  }
  else {
    iVar1 = (*(code *)PTR_memcmp_004162cc)(*(undefined4 *)(param_1 + 0xc),"AccessoryInfo",0xe);
    if (iVar1 == 0) {
      (*(code *)PTR_strcpy_0041632c)(auStack_2c,*(undefined4 *)(param_1 + 0xc));
      (*(code *)PTR_strcpy_0041632c)(auStack_1e,*(undefined4 *)(param_1 + 0x10));
      (*(code *)PTR_puts_00416300)("[METER] write production info:");
      (*(code *)PTR_printf_00416324)("              signature : [%s] \n",auStack_2c);
      (*(code *)PTR_printf_00416324)("              Serial NUM : [%s] \n",auStack_1e);
      iVar1 = (*(code *)PTR_open_0041628c)("/dev/mtdblock5",2);
      if (iVar1 < 1) {
        (*(code *)PTR_puts_00416300)("write production to flash open fail......");
      }
      else {
        iVar2 = (*(code *)PTR_lseek_004162ec)(iVar1,0x18000,0);
        if (iVar2 == -1) {
          (*(code *)PTR_puts_00416300)("write production to flash lseek fail......");
        }
        iVar2 = (*(code *)PTR_write_004162dc)(iVar1,auStack_2c,0x22);
        if (iVar2 == -1) {
          (*(code *)PTR_puts_00416300)("write production to flash fail.......");
        }
      }
      (*(code *)PTR_close_00416284)(iVar1);
    }
    else {
      (*(code *)PTR_puts_00416300)("signature fail");
    }
  }
  return;
}

