/* FUN_00430a14 @ 00430a14 */

void FUN_00430a14(char *param_1,undefined1 *param_2,undefined1 *param_3,undefined4 *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  param_3[3] = 0;
  *param_4 = 0;
  if (*param_1 != '\0') {
    iVar1 = (*(code *)PTR_strncmp_006140c8)(param_1,"http://",7);
    if (iVar1 == 0) {
      *param_4 = 0x50;
      param_1 = param_1 + 7;
    }
    else {
      iVar1 = (*(code *)PTR_strncmp_006140c8)(param_1,"https://",8);
      if (iVar1 == 0) {
        *param_4 = 0x1bb;
        param_1 = param_1 + 8;
      }
    }
    iVar1 = (*(code *)PTR_strchr_006127e8)(param_1,0x2f);
    if (iVar1 == 0) {
      uVar4 = (*(code *)PTR_strlen_00613f4c)(param_1);
      (*(code *)PTR_memcpy_00614674)(param_2,param_1,uVar4);
      iVar1 = (*(code *)PTR_strlen_00613f4c)(param_1);
      param_2[iVar1] = 0;
    }
    else {
      iVar2 = (*(code *)PTR_strlen_00613f4c)(param_1);
      iVar3 = (*(code *)PTR_strlen_00613f4c)(iVar1);
      (*(code *)PTR_memcpy_00614674)(param_2,param_1,iVar2 - iVar3);
      if (iVar1 + 1 != 0) {
        iVar2 = (*(code *)PTR_strlen_00613f4c)(iVar1);
        (*(code *)PTR_memcpy_00614674)(param_3,iVar1 + 1,iVar2 + -1);
        iVar2 = (*(code *)PTR_strlen_00613f4c)(iVar1);
        param_3[iVar2 + -1] = 0;
      }
      iVar2 = (*(code *)PTR_strlen_00613f4c)(param_1);
      iVar1 = (*(code *)PTR_strlen_00613f4c)(iVar1);
      param_2[iVar2 - iVar1] = 0;
    }
  }
  return;
}

