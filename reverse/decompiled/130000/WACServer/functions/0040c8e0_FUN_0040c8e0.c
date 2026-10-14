/* FUN_0040c8e0 @ 0040c8e0 */

undefined4 FUN_0040c8e0(int param_1,int param_2,undefined4 param_3)

{
  code *pcVar1;
  
  (*(code *)PTR_aes_init_00433090)();
  pcVar1 = (code *)PTR_aes_decrypt_key128_00433104;
  if (param_2 == 1) {
    pcVar1 = (code *)PTR_aes_encrypt_key128_00433258;
  }
  (*pcVar1)(param_3,param_1);
  *(int *)(param_1 + 0xf4) = param_2;
  return 0;
}

