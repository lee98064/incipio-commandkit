/* FUN_0042fb24 @ 0042fb24 */

undefined4 * FUN_0042fb24(undefined4 *param_1)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  undefined4 uVar6;
  undefined4 local_20 [2];
  
  iVar2 = (*(code *)PTR_open_006138f8)("/dev/mtdblock5",2);
  if (iVar2 < 1) {
    uVar4 = *(undefined4 *)PTR_stderr_0061292c;
    uVar6 = 0x55;
    pcVar5 = "\nFILE %s FUNCTION %s LINE %d: read hksettinginfo from flash open fail......\n\n";
  }
  else {
    iVar3 = (*(code *)PTR_lseek_00612fd4)(iVar2,0x10000,0);
    if (iVar3 == -1) {
      (*(code *)PTR_fprintf_006120cc)
                (*(undefined4 *)PTR_stderr_0061292c,
                 "\nFILE %s FUNCTION %s LINE %d: locate hksettinginfo to flash by lseek fail......\n\n"
                 ,
                 "/home/vendor/rtl819x_v3464_homekit/users/phytrex-homekit/customize/Incipio_Socket_Meter/homekitdatasave.c"
                 ,"Get_hksettinginfo",0x44);
    }
    iVar3 = (*(code *)PTR_read_00612ef0)(iVar2,local_20,4);
    if (iVar3 == -1) {
      (*(code *)PTR_fprintf_006120cc)
                (*(undefined4 *)PTR_stderr_0061292c,
                 "\nFILE %s FUNCTION %s LINE %d: read hksettinginfo from flash fail.......\n\n",
                 "/home/vendor/rtl819x_v3464_homekit/users/phytrex-homekit/customize/Incipio_Socket_Meter/homekitdatasave.c"
                 ,"Get_hksettinginfo",0x4a);
    }
    puVar1 = PTR_stderr_0061292c;
    (*(code *)PTR_fprintf_006120cc)
              (*(undefined4 *)PTR_stderr_0061292c,
               "\nFILE %s FUNCTION %s LINE %d: \n Get hksetting info :\n",
               "/home/vendor/rtl819x_v3464_homekit/users/phytrex-homekit/customize/Incipio_Socket_Meter/homekitdatasave.c"
               ,"Get_hksettinginfo",0x4e);
    uVar4 = *(undefined4 *)puVar1;
    uVar6 = 0x4f;
    pcVar5 = "\nFILE %s FUNCTION %s LINE %d: \n brightness value : %d\n";
  }
  (*(code *)PTR_fprintf_006120cc)
            (uVar4,pcVar5,
             "/home/vendor/rtl819x_v3464_homekit/users/phytrex-homekit/customize/Incipio_Socket_Meter/homekitdatasave.c"
             ,"Get_hksettinginfo",uVar6);
  (*(code *)PTR_close_0061276c)(iVar2);
  *param_1 = local_20[0];
  return param_1;
}

