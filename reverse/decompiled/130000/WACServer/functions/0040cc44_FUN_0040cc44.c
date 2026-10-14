/* FUN_0040cc44 @ 0040cc44 */

undefined4 FUN_0040cc44(int param_1,undefined1 *param_2,uint param_3,undefined1 *param_4)

{
  uint uVar1;
  undefined1 *puVar2;
  code *pcVar3;
  undefined1 auStack_30 [16];
  undefined1 *local_20;
  
  uVar1 = param_3 & 0xfffffff0;
  puVar2 = param_2 + param_3;
  if (uVar1 != 0) {
    local_20 = auStack_30;
    (*(code *)PTR_memcpy_004332a8)(local_20,param_1 + 0xf8,0x10);
    pcVar3 = (code *)PTR_aes_cbc_decrypt_00433154;
    if (*(int *)(param_1 + 0xf4) != 0) {
      pcVar3 = (code *)PTR_aes_cbc_encrypt_0043311c;
    }
    (*pcVar3)(param_2,param_4,uVar1,local_20,param_1);
    param_4 = param_4 + uVar1;
    param_2 = param_2 + uVar1;
  }
  for (; param_2 != puVar2; param_2 = param_2 + 1) {
    *param_4 = *param_2;
    param_4 = param_4 + 1;
  }
  return 0;
}

