/* json_object_get_int @ 0043620c */

uint json_object_get_int(int *param_1)

{
  int iVar1;
  int local_18;
  int local_10;
  uint local_c;
  
  if (param_1 == (int *)0x0) {
    local_c = 0;
  }
  else {
    local_18 = *param_1;
    local_c = param_1[7];
    local_10 = param_1[6];
    if (local_18 == 6) {
      iVar1 = (*(code *)PTR_json_parse_int64_006123b4)(param_1[6],&local_10);
      if (iVar1 != 0) {
        return 0;
      }
      local_18 = 3;
    }
    if (local_18 == 2) {
      local_c = (*(code *)PTR___fixdfsi_00613c28)(param_1[6],param_1[7]);
    }
    else if (local_18 == 3) {
      if ((local_10 < -1) || ((local_10 == -1 && (local_c < 0x80000001)))) {
        local_c = 0x80000000;
      }
      else if ((0 < local_10) || ((local_10 == 0 && (0x7ffffffe < local_c)))) {
        local_c = 0x7fffffff;
      }
    }
    else if (local_18 == 1) {
      local_c = param_1[6];
    }
    else {
      local_c = 0;
    }
  }
  return local_c;
}

