/* Store_hksettinginfo @ 00430574 */

undefined4 Store_hksettinginfo(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = (*(code *)PTR_open_0061479c)("/dev/mtdblock5",2);
  if (iVar1 < 1) {
    (*(code *)PTR_fprintf_00612f5c)
              (*(undefined4 *)PTR_stderr_006137c8,
               "\nFILE %s FUNCTION %s LINE %d: write hksettinginfo to flash open fail......\n\n",
               "/home/vendor/rtl819x_v3464_homekit/users/phytrex-homekit/customize/Incipio_Socket_Meter/homekitdatasave.c"
               ,"Store_hksettinginfo",0x36);
    uVar3 = 0xffffffff;
    if (iVar1 == 0) {
      return 0xffffffff;
    }
  }
  else {
    iVar2 = (*(code *)PTR_lseek_00613e6c)(iVar1,0x10000,0);
    uVar3 = 0;
    if (iVar2 == -1) {
      (*(code *)PTR_fprintf_00612f5c)
                (*(undefined4 *)PTR_stderr_006137c8,
                 "\nFILE %s FUNCTION %s LINE %d: locate hksettinginfo to flash by lseek fail......\n\n"
                 ,
                 "/home/vendor/rtl819x_v3464_homekit/users/phytrex-homekit/customize/Incipio_Socket_Meter/homekitdatasave.c"
                 ,"Store_hksettinginfo",0x2b);
      uVar3 = 0xffffffff;
    }
    iVar2 = (*(code *)PTR_write_00613734)(iVar1,param_1,1);
    if (iVar2 == -1) {
      (*(code *)PTR_fprintf_00612f5c)
                (*(undefined4 *)PTR_stderr_006137c8,
                 "\nFILE %s FUNCTION %s LINE %d: write hksettinginfo to flash fail.......\n\n",
                 "/home/vendor/rtl819x_v3464_homekit/users/phytrex-homekit/customize/Incipio_Socket_Meter/homekitdatasave.c"
                 ,"Store_hksettinginfo",0x30);
      uVar3 = 0xffffffff;
    }
  }
  (*(code *)PTR_close_00613604)(iVar1);
  return uVar3;
}

