/* FUN_004442e0 @ 004442e0 */

undefined4 FUN_004442e0(void)

{
  int iVar1;
  undefined4 uVar2;
  int local_10;
  int local_c;
  
  local_10 = 0;
  local_c = 0;
  get_bank_info(1,&local_10,&local_c);
  iVar1 = FUN_004434f4(local_c);
  uVar2 = 0xfffffffe;
  if (iVar1 != 0) {
    uVar2 = FUN_004437ec((&PTR_s__dev_mtdblock0_0046a610)[local_10 + -1],1);
    uVar2 = FUN_0044421c((&PTR_s__dev_mtdblock0_0046a610)[local_c + -1],uVar2);
  }
  return uVar2;
}

