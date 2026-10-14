/* gcm_init_and_key @ 0041b760 */

undefined4 gcm_init_and_key(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  int iVar2;
  
  puVar1 = PTR_aes_encrypt_key_004330e8;
  iVar2 = param_3 + 0x1040;
  *(undefined4 *)(param_3 + 0x1040) = 0;
  *(undefined4 *)(param_3 + 0x1044) = 0;
  *(undefined4 *)(param_3 + 0x1048) = 0;
  *(undefined4 *)(param_3 + 0x104c) = 0;
  (*(code *)puVar1)(param_1,param_2,param_3 + 0x1050);
  (*(code *)PTR_aes_encrypt_00433084)(iVar2,iVar2,param_3 + 0x1050);
  (*(code *)PTR_init_4k_table_00433184)(iVar2,param_3);
  return 0;
}

