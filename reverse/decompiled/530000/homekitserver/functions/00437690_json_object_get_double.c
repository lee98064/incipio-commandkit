/* json_object_get_double @ 00437690 */

uint json_object_get_double(uint *param_1)

{
  uint uVar1;
  int iVar2;
  uint local_10 [2];
  
  if (param_1 == (uint *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *param_1;
    if (uVar1 == 2) {
      uVar1 = param_1[6];
    }
    else {
      if (uVar1 < 3) {
        if (uVar1 == 1) {
          uVar1 = (*(code *)PTR___floatsidf_006137a8)(param_1[6]);
          return uVar1;
        }
      }
      else {
        if (uVar1 == 3) {
          uVar1 = (*(code *)PTR___floatdidf_00614abc)(param_1[6],param_1[7]);
          return uVar1;
        }
        if ((uVar1 == 6) &&
           (iVar2 = (*(code *)PTR_sscanf_00613470)
                              (param_1[6],PTR_s_bfPjPmmrJagyc0JnT6m8oXWXV3AGNaOk_00612340 + -0x16e8,
                               local_10), iVar2 == 1)) {
          return local_10[0];
        }
      }
      uVar1 = 0;
    }
  }
  return uVar1;
}

