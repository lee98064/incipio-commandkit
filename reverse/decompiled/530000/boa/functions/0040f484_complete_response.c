/* complete_response @ 0040f484 */

undefined4 complete_response(undefined4 *param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  
  puVar1 = PTR_range_pool_push_0046a86c;
  param_1[8] = *(undefined4 *)(param_1[8] + 8);
  (*(code *)puVar1)();
  if ((param_1[4] == 0xce) && (1 < (int)param_1[9])) {
    if (param_1[8] == 0) {
      FUN_0040d3c0(param_1);
      *param_1 = 10;
      (*(code *)PTR_req_flush_0046a698)(param_1);
    }
    else {
      FUN_0040f2e0(param_1);
      (*(code *)PTR_req_write_0046abec)(param_1,"\r\n");
    }
    uVar2 = 1;
  }
  else {
    *param_1 = 10;
    uVar2 = 0;
  }
  return uVar2;
}

