/* FUN_0041b370 @ 0041b370 */

void FUN_0041b370(undefined4 param_1)

{
  undefined2 local_28;
  undefined2 uStack_26;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  uStack_26 = 0;
  local_28 = 10;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  (*(code *)PTR_memcpy_00614674)(&local_20,PTR_in6addr_any_0061340c,0x10);
  _local_28 = CONCAT22(local_28,(short)*(undefined4 *)PTR_server_port_006134f0);
  (*(code *)PTR_bind_006149f0)(param_1,&local_28,0x1c);
  return;
}

