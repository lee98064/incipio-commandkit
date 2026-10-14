/* lh_abort @ 0043f670 */

void lh_abort(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 local_res4;
  undefined4 local_res8;
  undefined4 local_resc;
  
  local_res4 = param_2;
  local_res8 = param_3;
  local_resc = param_4;
  (*(code *)PTR_vprintf_00613738)(param_1,&local_res4);
  (*(code *)PTR_exit_00612bd8)(1);
  return;
}

