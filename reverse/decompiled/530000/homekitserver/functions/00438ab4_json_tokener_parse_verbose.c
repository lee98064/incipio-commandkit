/* json_tokener_parse_verbose @ 00438ab4 */

int json_tokener_parse_verbose(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 local_10;
  
  iVar1 = (*(code *)PTR_json_tokener_new_00614544)();
  if (iVar1 == 0) {
    local_10 = 0;
  }
  else {
    local_10 = (*(code *)PTR_json_tokener_parse_ex_00614a10)(iVar1,param_1,0xffffffff);
    *param_2 = *(undefined4 *)(iVar1 + 0x1c);
    if (*(int *)(iVar1 + 0x1c) != 0) {
      if (local_10 != 0) {
        (*(code *)PTR_json_object_put_00612524)(local_10);
      }
      local_10 = 0;
    }
    (*(code *)PTR_json_tokener_free_006145d8)(iVar1);
  }
  return local_10;
}

