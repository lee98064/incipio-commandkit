/* json_object_object_get_ex @ 00435c94 */

undefined4 json_object_object_get_ex(int *param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = 0;
  }
  if (param_1 == (int *)0x0) {
    uVar1 = 0;
  }
  else if (*param_1 == 4) {
    uVar1 = (*(code *)PTR_lh_table_lookup_ex_0061290c)(param_1[6],param_2,param_3);
  }
  else {
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = 0;
    }
    uVar1 = 0;
  }
  return uVar1;
}

