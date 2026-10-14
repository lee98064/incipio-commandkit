/* FUN_0042fcfc @ 0042fcfc */

void FUN_0042fcfc(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined4 local_res0 [4];
  undefined4 uVar5;
  
  local_res0[0] = param_1;
  iVar1 = (*(code *)PTR_open_006138f8)("/dev/mtdblock5",2);
  if (iVar1 < 1) {
    uVar3 = *(undefined4 *)PTR_stderr_0061292c;
    uVar5 = 0x33;
    pcVar4 = "\nFILE %s FUNCTION %s LINE %d: write hksettinginfo to flash open fail......\n\n";
  }
  else {
    iVar2 = (*(code *)PTR_lseek_00612fd4)(iVar1,0x10000,0);
    if (iVar2 == -1) {
      (*(code *)PTR_fprintf_006120cc)
                (*(undefined4 *)PTR_stderr_0061292c,
                 "\nFILE %s FUNCTION %s LINE %d: locate hksettinginfo to flash by lseek fail......\n\n"
                 ,
                 "/home/vendor/rtl819x_v3464_homekit/users/phytrex-homekit/customize/Incipio_Socket_Meter/homekitdatasave.c"
                 ,"Store_hksettinginfo",0x2a);
    }
    iVar2 = (*(code *)PTR_write_00612898)(iVar1,local_res0,4);
    if (iVar2 != -1) goto LAB_0042fe08;
    uVar3 = *(undefined4 *)PTR_stderr_0061292c;
    uVar5 = 0x2e;
    pcVar4 = "\nFILE %s FUNCTION %s LINE %d: write hksettinginfo to flash fail.......\n\n";
  }
  (*(code *)PTR_fprintf_006120cc)
            (uVar3,pcVar4,
             "/home/vendor/rtl819x_v3464_homekit/users/phytrex-homekit/customize/Incipio_Socket_Meter/homekitdatasave.c"
             ,"Store_hksettinginfo",uVar5);
LAB_0042fe08:
  (*(code *)PTR_close_0061276c)(iVar1);
  return;
}

