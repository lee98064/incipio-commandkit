/* write_productInfo_incipio @ 00403780 */

void write_productInfo_incipio(int param_1)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_2c [14];
  undefined1 auStack_1e [22];
  
  (*(code *)PTR_memset_00415ec8)(auStack_2c,0,0x22);
  if ((*(int *)(param_1 + 0xc) == 0) || (*(int *)(param_1 + 0x10) == 0)) {
    (*(code *)PTR_puts_00415f10)("argv 3, 4 error.");
  }
  else {
    iVar1 = (*(code *)PTR_memcmp_00415edc)(*(undefined4 *)(param_1 + 0xc),"AccessoryInfo",0xe);
    if (iVar1 == 0) {
      (*(code *)PTR_strcpy_00415f38)(auStack_2c,*(undefined4 *)(param_1 + 0xc));
      (*(code *)PTR_strcpy_00415f38)(auStack_1e,*(undefined4 *)(param_1 + 0x10));
      (*(code *)PTR_puts_00415f10)("[METER] write production info:");
      (*(code *)PTR_printf_00415f30)("              signature : [%s] \n",auStack_2c);
      (*(code *)PTR_printf_00415f30)("              Serial NUM : [%s] \n",auStack_1e);
      iVar1 = (*(code *)PTR_open_00415e9c)("/dev/mtdblock5",2);
      if (iVar1 < 1) {
        (*(code *)PTR_puts_00415f10)("write production to flash open fail......");
      }
      else {
        iVar2 = (*(code *)PTR_lseek_00415efc)(iVar1,0x18000,0);
        if (iVar2 == -1) {
          (*(code *)PTR_puts_00415f10)("write production to flash lseek fail......");
        }
        iVar2 = (*(code *)PTR_write_00415eec)(iVar1,auStack_2c,0x22);
        if (iVar2 == -1) {
          (*(code *)PTR_puts_00415f10)("write production to flash fail.......");
        }
      }
      (*(code *)PTR_close_00415e94)(iVar1);
    }
    else {
      (*(code *)PTR_puts_00415f10)("signature fail");
    }
  }
  return;
}

