/* FUN_00444378 @ 00444378 */

int FUN_00444378(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int local_res0 [4];
  int local_10;
  int local_c;
  
  local_10 = 0;
  local_c = 0;
  local_res0[0] = param_1;
  get_bank_info(param_1,&local_10,&local_c);
  if (local_res0[0] == 0) {
    uVar1 = 0xfffffff0;
  }
  else {
    uVar1 = FUN_004437ec((&PTR_s__dev_mtdblock0_0046a610)[local_c + -1]);
  }
  iVar2 = FUN_0044421c((&PTR_s__dev_mtdblock0_0046a610)[local_10 + -1],uVar1);
  if (iVar2 == 0) {
    (*(code *)PTR_apmib_set_0046aa28)(0x514,local_res0);
  }
  return iVar2;
}

