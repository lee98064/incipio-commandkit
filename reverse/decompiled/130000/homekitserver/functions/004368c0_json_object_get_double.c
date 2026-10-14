/* json_object_get_double @ 004368c0 */

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
          uVar1 = (*(code *)PTR___floatsidf_00612908)(param_1[6]);
          return uVar1;
        }
      }
      else {
        if (uVar1 == 3) {
          uVar1 = (*(code *)PTR___floatdidf_00613c14)(param_1[6],param_1[7]);
          return uVar1;
        }
        if ((uVar1 == 6) &&
           (iVar2 = (*(code *)PTR_sscanf_006125dc)(param_1[6],PTR_PTR_006114b0 + -0x2588,local_10),
           iVar2 == 1)) {
          return local_10[0];
        }
      }
      uVar1 = 0;
    }
  }
  return uVar1;
}

