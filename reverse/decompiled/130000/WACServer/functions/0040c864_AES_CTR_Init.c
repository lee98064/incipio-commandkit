/* AES_CTR_Init @ 0040c864 */

undefined4 AES_CTR_Init(int param_1,undefined4 param_2,undefined4 param_3)

{
  (*(code *)PTR_aes_init_00433090)();
  (*(code *)PTR_aes_encrypt_key128_00433258)(param_2,param_1);
  (*(code *)PTR_memcpy_004332a8)(param_1 + 0xf4,param_3,0x10);
  *(undefined1 *)(param_1 + 0x118) = 0;
  *(undefined4 *)(param_1 + 0x114) = 0;
  return 0;
}

