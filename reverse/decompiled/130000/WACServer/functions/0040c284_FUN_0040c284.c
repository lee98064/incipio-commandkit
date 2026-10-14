/* FUN_0040c284 @ 0040c284 */

undefined4 FUN_0040c284(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  
  local_68 = 0x67452301;
  local_64 = 0xefcdab89;
  local_60 = 0x98badcfe;
  local_5c = 0x10325476;
  local_58 = 0xc3d2e1f0;
  local_6c = 0;
  local_70 = 0;
  local_54 = 0;
  SHA1_Update_compat(&local_70,param_1,param_2);
  SHA1_Final_compat(param_3,&local_70);
  return param_3;
}

