/* write_productInfo_parce @ 00403230 */

void write_productInfo_parce(int param_1)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_44 [13];
  undefined1 auStack_37 [20];
  undefined1 auStack_23 [27];
  
  (*(code *)PTR_memset_00415ec8)(auStack_44,0,0x35);
  if (((*(int *)(param_1 + 0xc) == 0) || (*(int *)(param_1 + 0x10) == 0)) ||
     (*(int *)(param_1 + 0x14) == 0)) {
    (*(code *)PTR_puts_00415f10)("argv 3, 4, 5 error.");
  }
  else {
    iVar1 = (*(code *)PTR_memcmp_00415edc)(*(undefined4 *)(param_1 + 0xc),"hardwareInfo",0xd);
    if (iVar1 == 0) {
      (*(code *)PTR_strcpy_00415f38)(auStack_44,*(undefined4 *)(param_1 + 0xc));
      (*(code *)PTR_strcpy_00415f38)(auStack_37,*(undefined4 *)(param_1 + 0x10));
      (*(code *)PTR_strcpy_00415f38)(auStack_23,*(undefined4 *)(param_1 + 0x14));
      (*(code *)PTR_puts_00415f10)("[METER] write production info:");
      (*(code *)PTR_printf_00415f30)("              signature : [%s] \n",auStack_44);
      (*(code *)PTR_printf_00415f30)("              Serial NUM : [%s] \n",auStack_37);
      (*(code *)PTR_printf_00415f30)("              Write perimt : [%s] \n",auStack_23);
      iVar1 = (*(code *)PTR_open_00415e9c)("/dev/mtdblock5",2);
      if (iVar1 < 1) {
        (*(code *)PTR_puts_00415f10)("write production to flash open fail......");
      }
      else {
        iVar2 = (*(code *)PTR_lseek_00415efc)(iVar1,0x18000,0);
        if (iVar2 == -1) {
          (*(code *)PTR_puts_00415f10)("write production to flash lseek fail......");
        }
        iVar2 = (*(code *)PTR_write_00415eec)(iVar1,auStack_44,0x35);
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

