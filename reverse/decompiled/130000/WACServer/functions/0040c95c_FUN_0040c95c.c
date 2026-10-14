/* FUN_0040c95c @ 0040c95c */

undefined4 FUN_0040c95c(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  code *pcVar1;
  
  (*(code *)PTR_aes_init_00433090)();
  pcVar1 = (code *)PTR_aes_decrypt_key128_00433104;
  if ((param_4 & 0xff) != 0) {
    pcVar1 = (code *)PTR_aes_encrypt_key128_00433258;
  }
  (*pcVar1)(param_2,param_1);
  *(uint *)(param_1 + 0xf4) = param_4 & 0xff;
  (*(code *)PTR_memcpy_004332a8)(param_1 + 0xf8,param_3,0x10);
  return 0;
}

