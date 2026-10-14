/* FUN_0040c0ec @ 0040c0ec */

undefined4 FUN_0040c0ec(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 auStack_e8 [208];
  undefined4 local_18;
  
  local_18 = param_1;
  SHA512_Init_compat(auStack_e8);
  SHA512_Update_compat(auStack_e8,local_18,param_2);
  SHA512_Final_compat(param_3,auStack_e8);
  return param_3;
}

