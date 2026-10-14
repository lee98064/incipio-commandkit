/* Get_product_info @ 0042f8f0 */

undefined4 Get_product_info(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined1 auStack_40 [14];
  char acStack_32 [30];
  
  (*(code *)PTR_memset_0061223c)(auStack_40,0,0x22);
  iVar1 = (*(code *)PTR_open_006138f8)("/dev/mtdblock5",2);
  if (iVar1 < 1) {
    (*(code *)PTR_fprintf_006120cc)
              (*(undefined4 *)PTR_stderr_0061292c,
               "\nFILE %s FUNCTION %s LINE %d: read production from flash open fail......\n\n",
               "/home/vendor/rtl819x_v3464_homekit/users/phytrex-homekit/customize/Incipio_Socket_Meter/homekitdatasave.c"
               ,"Get_product_info",0x8d);
  }
  else {
    iVar2 = (*(code *)PTR_lseek_00612fd4)(iVar1,0x18000,0);
    if (iVar2 == -1) {
      (*(code *)PTR_fprintf_006120cc)
                (*(undefined4 *)PTR_stderr_0061292c,
                 "\nFILE %s FUNCTION %s LINE %d: locate production to flash by lseek fail......\n\n"
                 ,
                 "/home/vendor/rtl819x_v3464_homekit/users/phytrex-homekit/customize/Incipio_Socket_Meter/homekitdatasave.c"
                 ,"Get_product_info",0x6d);
    }
    iVar2 = (*(code *)PTR_read_00612ef0)(iVar1,auStack_40,0x22);
    if (iVar2 == -1) {
      (*(code *)PTR_fprintf_006120cc)
                (*(undefined4 *)PTR_stderr_0061292c,
                 "\nFILE %s FUNCTION %s LINE %d: read production from flash fail.......\n\n",
                 "/home/vendor/rtl819x_v3464_homekit/users/phytrex-homekit/customize/Incipio_Socket_Meter/homekitdatasave.c"
                 ,"Get_product_info",0x73);
    }
    (*(code *)PTR_puts_006117e4)("[METER DEBUG] Read Product Info :");
    pcVar3 = acStack_32;
    (*(code *)PTR_printf_0061185c)("              Serial NUM : [%s] \n",pcVar3);
    iVar2 = (*(code *)PTR_memcmp_00611fdc)(auStack_40,"AccessoryInfo",0xe);
    if (iVar2 != 0) {
      (*(code *)PTR_puts_006117e4)("signature fail");
      pcVar3 = "HKMO-0000001";
    }
    (*(code *)PTR_strcpy_006115d0)(&DAT_00614860,pcVar3);
  }
  (*(code *)PTR_close_0061276c)(iVar1);
  (*(code *)PTR_memcpy_006137d0)(param_1,auStack_40,0x22);
  return param_1;
}

