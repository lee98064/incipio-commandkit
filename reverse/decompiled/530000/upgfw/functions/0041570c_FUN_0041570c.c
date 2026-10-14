/* FUN_0041570c @ 0041570c */

undefined4 FUN_0041570c(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 == 2) {
    uVar1 = (*(code *)PTR_SSLv2_client_method_0057e45c)();
  }
  else if (param_1 == 0x300) {
    uVar1 = (*(code *)PTR_SSLv3_client_method_0057e0fc)();
  }
  else {
    uVar1 = 0;
    if (param_1 == 0x301) {
      uVar1 = (*(code *)PTR_TLSv1_client_method_0057e8d0)();
    }
  }
  return uVar1;
}

