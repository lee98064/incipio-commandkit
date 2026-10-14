/* FUN_0044275c @ 0044275c */

undefined4 FUN_0044275c(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1 + param_2 == 0) {
    (*(code *)PTR_puts_0046ab3c)("can\'t get SIGN_HEADER!");
    uVar2 = 0;
  }
  else {
    iVar1 = (*(code *)PTR_memcmp_0046a8d0)(param_1 + param_2,&DAT_004567b0,4);
    uVar2 = 1;
    if (iVar1 != 0) {
      (*(code *)PTR_printf_0046ac28)("memcmp SIGN_HEADER(%s) fail!\n",&DAT_004567b0);
      uVar2 = 0;
    }
  }
  return uVar2;
}

