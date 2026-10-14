/* bind_server @ 004094f8 */

void bind_server(undefined4 param_1)

{
  undefined2 local_28;
  undefined2 local_26;
  undefined1 auStack_20 [24];
  
  local_28 = 10;
  (*(code *)PTR_memcpy_0046ab5c)(auStack_20,PTR_in6addr_any_0046ac6c,0x10);
  local_26 = (undefined2)*(undefined4 *)PTR_server_port_0046a7c0;
  (*(code *)PTR_bind_0046a9c0)(param_1,&local_28,0x1c);
  return;
}

