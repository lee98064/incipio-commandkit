/* json_object_get_boolean @ 00435f50 */

uint json_object_get_boolean(uint *param_1)

{
  int iVar1;
  uint uVar2;
  
  if (param_1 == (uint *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *param_1;
    if (uVar2 == 2) {
      uVar2 = 0;
      iVar1 = (*(code *)PTR___nedf2_00612170)(param_1[6],param_1[7],0,0);
      if (iVar1 != 0) {
        uVar2 = 1;
      }
    }
    else {
      if (uVar2 < 3) {
        if (uVar2 == 1) {
          return param_1[6];
        }
      }
      else {
        if (uVar2 == 3) {
          if (param_1[6] == 0 && param_1[7] == 0) {
            return 0;
          }
          return 1;
        }
        if (uVar2 == 6) {
          return (uint)(param_1[7] != 0);
        }
      }
      uVar2 = 0;
    }
  }
  return uVar2;
}

