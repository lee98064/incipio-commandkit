/* lh_table_lookup_entry @ 0043f45c */

int lh_table_lookup_entry(uint *param_1,undefined4 param_2)

{
  int iVar1;
  int local_18;
  uint local_14;
  
  local_14 = (*(code *)param_1[0xc])(param_2);
  local_14 = local_14 % *param_1;
  if (*param_1 == 0) {
    trap(0x1c00);
  }
  local_18 = 0;
  param_1[4] = param_1[4] + 1;
  while( true ) {
    if ((int)*param_1 <= local_18) {
      return 0;
    }
    if (*(int *)(param_1[10] + local_14 * 0x10) == -1) break;
    if ((*(int *)(param_1[10] + local_14 * 0x10) != -2) &&
       (iVar1 = (*(code *)param_1[0xd])(*(undefined4 *)(param_1[10] + local_14 * 0x10),param_2),
       iVar1 != 0)) {
      return param_1[10] + local_14 * 0x10;
    }
    local_14 = local_14 + 1;
    if (local_14 == *param_1) {
      local_14 = 0;
    }
    local_18 = local_18 + 1;
  }
  return 0;
}

