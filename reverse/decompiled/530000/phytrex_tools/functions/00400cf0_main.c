/* main @ 00400cf0 */

void main(int param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strcmp_004162ac)(param_2[1],&DAT_00405390);
  if (iVar1 == 0) {
    iVar1 = (*(code *)PTR_backup_partitin_00416308)(param_2[2]);
    if (iVar1 == 0) {
      (*(code *)PTR_fprintf_004162d8)
                (*(undefined4 *)PTR_stderr_004162a0,"%s:Backup partition fail!\n",*param_2);
    }
  }
  else {
    iVar1 = (*(code *)PTR_strcmp_004162ac)(param_2[1],&DAT_004053b0);
    if (iVar1 == 0) {
      (*(code *)PTR_one_time_init_0041629c)();
    }
    else {
      iVar1 = (*(code *)PTR_strcmp_004162ac)(param_2[1],&DAT_004053b8);
      if (iVar1 == 0) {
        (*(code *)PTR_writeProductInfo_handler_004162c0)(param_2);
      }
      else {
        iVar1 = (*(code *)PTR_strcmp_004162ac)(param_2[1],&DAT_004053c0);
        if (iVar1 == 0) {
          (*(code *)PTR_read_productInfo_0041630c)(param_2);
        }
        else {
          iVar1 = (*(code *)PTR_strcmp_004162ac)(param_2[1],&DAT_004053c8);
          if (iVar1 == 0) {
            (*(code *)PTR_productInfoDel_handler_0041631c)(param_2);
          }
          else {
            iVar1 = (*(code *)PTR_strcmp_004162ac)(param_2[1],"-dwpi");
            if (iVar1 == 0) {
              (*(code *)PTR_productInfoDel_handler_0041631c)(param_2);
            }
            else {
              iVar1 = (*(code *)PTR_strcmp_004162ac)(param_2[1],"-wsetupcode");
              if ((iVar1 == 0) && (param_1 == 3)) {
                iVar1 = (*(code *)PTR_strlen_00416290)(param_2[2]);
                if (iVar1 != 10) {
                  (*(code *)PTR_printf_00416324)
                            ("\n setup code\'s length is not 8 and format is xxx-xx-xxx ");
                  return;
                }
                iVar1 = (*(code *)PTR_writeHomeKitSetupCode_00416328)(param_2[2]);
                if (iVar1 == 0) {
                  (*(code *)PTR_printf_00416324)("\n setup code write failed");
                  return;
                }
              }
              iVar1 = (*(code *)PTR_strcmp_004162ac)(param_2[1],"-rsetupcode");
              if ((iVar1 == 0) &&
                 (iVar1 = (*(code *)PTR_readHomeKitSetupCode_004162a4)(), iVar1 == 0)) {
                (*(code *)PTR_printf_00416324)("\n setup code read failed");
              }
            }
          }
        }
      }
    }
  }
  return;
}

