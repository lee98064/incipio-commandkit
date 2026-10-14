/* FUN_0041b280 @ 0041b280 */

void FUN_0041b280(undefined4 param_1)

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
  (*(code *)PTR_memcpy_006137d0)(&local_20,PTR_in6addr_any_00612578,0x10);
  _local_28 = CONCAT22(local_28,(short)*(undefined4 *)PTR_server_port_0061265c);
  (*(code *)PTR_bind_00613b48)(param_1,&local_28,0x1c);
  return;
}

