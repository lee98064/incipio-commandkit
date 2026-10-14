/* Get_product_info @ 00430050 */

undefined4 Get_product_info(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined4 uVar5;
  char *pcVar6;
  undefined1 auStack_38 [28];
  
  iVar1 = (*(code *)PTR_open_0061479c)("/dev/mtdblock5",2);
  if (iVar1 < 1) {
    (*(code *)PTR_fprintf_00612f5c)
              (*(undefined4 *)PTR_stderr_006137c8,
               "\nFILE %s FUNCTION %s LINE %d: read production from flash open fail......\n\n",
               "/home/vendor/rtl819x_v3464_homekit/users/phytrex-homekit/customize/Incipio_Socket_Meter/homekitdatasave.c"
               ,"Get_product_info",0xac);
    uVar5 = 0xffffffff;
    if (iVar1 == 0) {
      return 0xffffffff;
    }
    goto LAB_004303a4;
  }
  iVar2 = (*(code *)PTR_lseek_00613e6c)(iVar1,0x18000,0);
  uVar5 = 0;
  if (iVar2 == -1) {
    (*(code *)PTR_fprintf_00612f5c)
              (*(undefined4 *)PTR_stderr_006137c8,
               "\nFILE %s FUNCTION %s LINE %d: locate production to flash by lseek fail......\n\n",
               "/home/vendor/rtl819x_v3464_homekit/users/phytrex-homekit/customize/Incipio_Socket_Meter/homekitdatasave.c"
               ,"Get_product_info",0x76);
    uVar5 = 0xffffffff;
  }
  iVar2 = (*(code *)PTR_read_00613d88)(iVar1,param_1,0x22);
  if (iVar2 == -1) {
    (*(code *)PTR_fprintf_00612f5c)
              (*(undefined4 *)PTR_stderr_006137c8,
               "\nFILE %s FUNCTION %s LINE %d: read production from flash fail.......\n\n",
               "/home/vendor/rtl819x_v3464_homekit/users/phytrex-homekit/customize/Incipio_Socket_Meter/homekitdatasave.c"
               ,"Get_product_info",0x7d);
    uVar5 = 0xffffffff;
  }
  (*(code *)PTR_puts_00612670)("[METER DEBUG] Read Product Info :");
  pcVar6 = (char *)(param_1 + 0xe);
  (*(code *)PTR_printf_006126e8)("              Serial NUM : [%s] \n",pcVar6);
  iVar2 = (*(code *)PTR_memcmp_00612e6c)(param_1,"AccessoryInfo",0xe);
  if (iVar2 == 0) {
    iVar2 = (*(code *)PTR_memcmp_00612e6c)(pcVar6,&DAT_005ad98c,4);
    if (iVar2 == 0) {
      pcVar4 = "SN format right";
    }
    else {
      (*(code *)PTR_puts_00612670)("SN wrong format");
      (*(code *)PTR_memcpy_00614674)(auStack_38,pcVar6,0x14);
      uVar3 = (*(code *)PTR_strchr_006127e8)(auStack_38,0x2d);
      (*(code *)PTR_sprintf_00612e20)(pcVar6,"%s%s",&DAT_005ad98c,uVar3);
      iVar2 = (*(code *)PTR_lseek_00613e6c)(iVar1,0x18000,0);
      if (iVar2 == -1) {
        (*(code *)PTR_fprintf_00612f5c)
                  (*(undefined4 *)PTR_stderr_006137c8,
                   "\nFILE %s FUNCTION %s LINE %d: locate production to flash by lseek fail......\n\n"
                   ,
                   "/home/vendor/rtl819x_v3464_homekit/users/phytrex-homekit/customize/Incipio_Socket_Meter/homekitdatasave.c"
                   ,"Get_product_info",0x9c);
        uVar5 = 0xffffffff;
      }
      iVar2 = (*(code *)PTR_write_00613734)(iVar1,param_1,0x22);
      if (iVar2 == -1) {
        (*(code *)PTR_fprintf_00612f5c)
                  (*(undefined4 *)PTR_stderr_006137c8,
                   "\nFILE %s FUNCTION %s LINE %d: rewrite production SN to flash fail.......\n\n",
                   "/home/vendor/rtl819x_v3464_homekit/users/phytrex-homekit/customize/Incipio_Socket_Meter/homekitdatasave.c"
                   ,"Get_product_info",0xa1);
        uVar5 = 0xffffffff;
        goto LAB_00430354;
      }
      pcVar4 = "Corrcet SN rewrite successful!!";
    }
    (*(code *)PTR_puts_00612670)(pcVar4);
  }
  else {
    (*(code *)PTR_puts_00612670)("signature fail");
    pcVar6 = "HKMO-0000001";
  }
LAB_00430354:
  (*(code *)PTR_strcpy_00612464)(&DAT_00615710,pcVar6);
LAB_004303a4:
  (*(code *)PTR_close_00613604)(iVar1);
  return uVar5;
}

