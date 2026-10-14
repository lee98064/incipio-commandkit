/* FUN_0040c7b4 @ 0040c7b4 */

undefined4 FUN_0040c7b4(int param_1,int param_2,uint param_3,int param_4)

{
  code *pcVar1;
  
  for (param_3 = param_3 >> 4; param_3 != 0; param_3 = param_3 - 1) {
    pcVar1 = (code *)PTR_aes_ecb_decrypt_004330f0;
    if (*(int *)(param_1 + 0xf4) != 0) {
      pcVar1 = (code *)PTR_aes_ecb_encrypt_00433248;
    }
    (*pcVar1)(param_2,param_4,0x10,param_1);
    param_4 = param_4 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return 0;
}

