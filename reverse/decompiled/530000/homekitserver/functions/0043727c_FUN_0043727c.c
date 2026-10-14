/* FUN_0043727c @ 0043727c */

uint FUN_0043727c(uint *param_1)

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
      uVar1 = (*(code *)PTR___fixdfdi_006143a4)(param_1[6],param_1[7]);
    }
    else {
      if (uVar1 < 3) {
        if (uVar1 == 1) {
          return (int)param_1[6] >> 0x1f;
        }
      }
      else {
        if (uVar1 == 3) {
          return param_1[6];
        }
        if ((uVar1 == 6) &&
           (iVar2 = (*(code *)PTR_json_parse_int64_00613248)(param_1[6],local_10), iVar2 == 0)) {
          return local_10[0];
        }
      }
      uVar1 = 0;
    }
  }
  return uVar1;
}

