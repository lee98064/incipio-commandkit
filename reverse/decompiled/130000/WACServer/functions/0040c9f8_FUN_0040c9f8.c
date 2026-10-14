/* FUN_0040c9f8 @ 0040c9f8 */

undefined4
FUN_0040c9f8(int param_1,undefined1 *param_2,uint param_3,undefined1 *param_4,int param_5,
            undefined1 *param_6)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  uint uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  code *pcVar8;
  undefined1 auStack_50 [16];
  undefined1 local_40 [16];
  undefined1 *local_30;
  
  local_30 = auStack_50;
  uVar4 = param_3 & 0xfffffff0;
  puVar6 = param_4 + param_5;
  puVar7 = param_2 + param_3;
  (*(code *)PTR_memcpy_004332a8)(local_30,param_1 + 0xf8,0x10);
  if (uVar4 != 0) {
    pcVar8 = (code *)PTR_aes_cbc_decrypt_00433154;
    if (*(int *)(param_1 + 0xf4) != 0) {
      pcVar8 = (code *)PTR_aes_cbc_encrypt_0043311c;
    }
    (*pcVar8)(param_2,param_6,uVar4,local_30,param_1);
    param_6 = param_6 + uVar4;
    param_2 = param_2 + uVar4;
  }
  if ((param_2 != puVar7) && (0xf < (int)(puVar7 + (int)(puVar6 + (-(int)param_2 - (int)param_4)))))
  {
    puVar2 = local_40;
    puVar5 = param_2;
    do {
      uVar1 = *puVar5;
      puVar5 = puVar5 + 1;
      *puVar2 = uVar1;
      puVar2 = puVar2 + 1;
    } while (puVar5 != puVar7);
    uVar4 = (int)puVar5 - (int)param_2;
    puVar2 = local_40 + uVar4;
    for (; (uVar4 < 0x10 && (param_4 != puVar6)); param_4 = param_4 + 1) {
      uVar4 = uVar4 + 1;
      *puVar2 = *param_4;
      puVar2 = puVar2 + 1;
    }
    pcVar8 = (code *)PTR_aes_cbc_decrypt_00433154;
    if (*(int *)(param_1 + 0xf4) != 0) {
      pcVar8 = (code *)PTR_aes_cbc_encrypt_0043311c;
    }
    (*pcVar8)(local_40,param_6,uVar4,auStack_50,param_1);
    param_6 = param_6 + uVar4;
    param_2 = puVar5;
  }
  uVar4 = (int)puVar6 - (int)param_4 & 0xfffffff0;
  puVar5 = param_2;
  puVar2 = param_6;
  puVar3 = param_4;
  if (uVar4 != 0) {
    pcVar8 = (code *)PTR_aes_cbc_decrypt_00433154;
    if (*(int *)(param_1 + 0xf4) != 0) {
      pcVar8 = (code *)PTR_aes_cbc_encrypt_0043311c;
    }
    puVar2 = param_6 + uVar4;
    puVar3 = param_4 + uVar4;
    (*pcVar8)(param_4,param_6,uVar4,auStack_50,param_1);
    param_6 = puVar2;
  }
  for (; puVar5 != puVar7; puVar5 = puVar5 + 1) {
    *puVar2 = *puVar5;
    puVar2 = puVar2 + 1;
  }
  param_6 = param_6 + ((int)puVar5 - (int)param_2);
  for (; puVar3 != puVar6; puVar3 = puVar3 + 1) {
    *param_6 = *puVar3;
    param_6 = param_6 + 1;
  }
  return 0;
}

