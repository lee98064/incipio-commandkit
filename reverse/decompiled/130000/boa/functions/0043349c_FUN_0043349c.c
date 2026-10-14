/* FUN_0043349c @ 0043349c */

undefined4 FUN_0043349c(undefined4 param_1)

{
  undefined *puVar1;
  undefined4 local_10 [2];
  
  puVar1 = PTR_inner_req_buff_0046abf8;
  local_10[0] = param_1;
  (*(code *)PTR_memset_0046a87c)(PTR_inner_req_buff_0046abf8,0,0x428);
  FUN_0042cecc(PTR_inner_req_0046aba4,1,local_10);
  if (*puVar1 == '\0') {
    (*(code *)PTR_strcpy_0046ac60)(puVar1,&DAT_00452158);
  }
  return 0;
}

