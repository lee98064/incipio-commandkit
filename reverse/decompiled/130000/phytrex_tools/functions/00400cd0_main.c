/* main @ 00400cd0 */

void main(int param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strcmp_00415ebc)(param_2[1],&DAT_004050c0);
  if (iVar1 == 0) {
    iVar1 = (*(code *)PTR_backup_partitin_00415f18)(param_2[2]);
    if (iVar1 == 0) {
      (*(code *)PTR_fprintf_00415ee8)
                (*(undefined4 *)PTR_stderr_00415eb0,"%s:Backup partition fail!\n",*param_2);
    }
  }
  else {
    iVar1 = (*(code *)PTR_strcmp_00415ebc)(param_2[1],&DAT_004050e0);
    if (iVar1 == 0) {
      (*(code *)PTR_one_time_init_00415eac)();
    }
    else {
      iVar1 = (*(code *)PTR_strcmp_00415ebc)(param_2[1],&DAT_004050e8);
      if (iVar1 == 0) {
        (*(code *)PTR_writeProductInfo_handler_00415ed0)(param_2);
      }
      else {
        iVar1 = (*(code *)PTR_strcmp_00415ebc)(param_2[1],&DAT_004050f0);
        if (iVar1 == 0) {
          (*(code *)PTR_productInfoDel_handler_00415f28)(param_2);
        }
        else {
          iVar1 = (*(code *)PTR_strcmp_00415ebc)(param_2[1],&DAT_004050f8);
          if (iVar1 == 0) {
            (*(code *)PTR_productInfoDel_handler_00415f28)(param_2);
          }
          else {
            iVar1 = (*(code *)PTR_strcmp_00415ebc)(param_2[1],"-wsetupcode");
            if ((iVar1 == 0) && (param_1 == 3)) {
              iVar1 = (*(code *)PTR_strlen_00415ea0)(param_2[2]);
              if (iVar1 != 10) {
                (*(code *)PTR_printf_00415f30)
                          ("\n setup code\'s length is not 8 and format is xxx-xx-xxx ");
                return;
              }
              iVar1 = (*(code *)PTR_writeHomeKitSetupCode_00415f34)(param_2[2]);
              if (iVar1 == 0) {
                (*(code *)PTR_printf_00415f30)("\n setup code write failed");
                return;
              }
            }
            iVar1 = (*(code *)PTR_strcmp_00415ebc)(param_2[1],"-rsetupcode");
            if ((iVar1 == 0) && (iVar1 = (*(code *)PTR_readHomeKitSetupCode_00415eb4)(), iVar1 == 0)
               ) {
              (*(code *)PTR_printf_00415f30)("\n setup code read failed");
            }
          }
        }
      }
    }
  }
  return;
}

