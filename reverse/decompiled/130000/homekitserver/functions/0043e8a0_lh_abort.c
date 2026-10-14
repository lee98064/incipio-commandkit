/* lh_abort @ 0043e8a0 */

void lh_abort(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 local_res4;
  undefined4 local_res8;
  undefined4 local_resc;
  
  local_res4 = param_2;
  local_res8 = param_3;
  local_resc = param_4;
  (*(code *)PTR_vprintf_0061289c)(param_1,&local_res4);
  (*(code *)PTR_exit_00611d48)(1);
  return;
}

