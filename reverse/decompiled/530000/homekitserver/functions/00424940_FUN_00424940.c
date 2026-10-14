/* FUN_00424940 @ 00424940 */

bool FUN_00424940(int param_1)

{
  bool bVar1;
  undefined4 local_78;
  char local_74 [112];
  
  bVar1 = false;
  if (0 < param_1) {
    local_78 = 0x68;
    (*(code *)PTR_getsockopt_00613710)(param_1,6,0xb,local_74,&local_78);
    bVar1 = local_74[0] == '\x01';
  }
  return bVar1;
}

