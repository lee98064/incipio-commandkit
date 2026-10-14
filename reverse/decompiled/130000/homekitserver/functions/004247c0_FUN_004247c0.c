/* FUN_004247c0 @ 004247c0 */

bool FUN_004247c0(int param_1)

{
  bool bVar1;
  undefined4 local_78;
  char local_74 [112];
  
  bVar1 = false;
  if (0 < param_1) {
    local_78 = 0x68;
    (*(code *)PTR_getsockopt_00612874)(param_1,6,0xb,local_74,&local_78);
    bVar1 = local_74[0] == '\x01';
  }
  return bVar1;
}

