/* aes_cbc_encrypt @ 00412758 */

undefined4 aes_cbc_encrypt(uint *param_1,int param_2,uint param_3,uint *param_4,undefined4 param_5)

{
  uint *puVar1;
  byte *pbVar2;
  undefined *puVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  
  if ((param_3 & 0xf) == 0) {
    iVar6 = (int)param_3 >> 4;
    if ((((uint)param_1 & 3) == 0) && (((uint)param_4 & 3) == 0)) {
      while (puVar3 = PTR_aes_encrypt_00433084, iVar6 != 0) {
        iVar6 = iVar6 + -1;
        *param_4 = *param_4 ^ *param_1;
        param_4[1] = param_4[1] ^ param_1[1];
        param_4[2] = param_4[2] ^ param_1[2];
        puVar1 = param_1 + 3;
        param_1 = param_1 + 4;
        param_4[3] = param_4[3] ^ *puVar1;
        iVar4 = (*(code *)puVar3)(param_4,param_4,param_5);
        if (iVar4 != 0) goto LAB_00412a7c;
        (*(code *)PTR_memcpy_004332a8)(param_2,param_4,0x10);
        param_2 = param_2 + 0x10;
      }
      uVar5 = 0;
    }
    else {
      while (puVar3 = PTR_aes_encrypt_00433084, iVar6 != 0) {
        iVar6 = iVar6 + -1;
        *(byte *)param_4 = *(byte *)param_4 ^ *(byte *)param_1;
        *(byte *)((int)param_4 + 1) = *(byte *)((int)param_4 + 1) ^ *(byte *)((int)param_1 + 1);
        *(byte *)((int)param_4 + 2) = *(byte *)((int)param_4 + 2) ^ *(byte *)((int)param_1 + 2);
        *(byte *)((int)param_4 + 3) = *(byte *)((int)param_4 + 3) ^ (byte)*param_1;
        *(byte *)(param_4 + 1) = *(byte *)(param_4 + 1) ^ *(byte *)(param_1 + 1);
        *(byte *)((int)param_4 + 5) = *(byte *)((int)param_4 + 5) ^ *(byte *)((int)param_1 + 5);
        *(byte *)((int)param_4 + 6) = *(byte *)((int)param_4 + 6) ^ *(byte *)((int)param_1 + 6);
        *(byte *)((int)param_4 + 7) = *(byte *)((int)param_4 + 7) ^ *(byte *)((int)param_1 + 7);
        *(byte *)(param_4 + 2) = *(byte *)(param_4 + 2) ^ *(byte *)(param_1 + 2);
        *(byte *)((int)param_4 + 9) = *(byte *)((int)param_4 + 9) ^ *(byte *)((int)param_1 + 9);
        *(byte *)((int)param_4 + 10) = *(byte *)((int)param_4 + 10) ^ *(byte *)((int)param_1 + 10);
        *(byte *)((int)param_4 + 0xb) =
             *(byte *)((int)param_4 + 0xb) ^ *(byte *)((int)param_1 + 0xb);
        *(byte *)(param_4 + 3) = *(byte *)(param_4 + 3) ^ *(byte *)(param_1 + 3);
        *(byte *)((int)param_4 + 0xd) =
             *(byte *)((int)param_4 + 0xd) ^ *(byte *)((int)param_1 + 0xd);
        *(byte *)((int)param_4 + 0xe) =
             *(byte *)((int)param_4 + 0xe) ^ *(byte *)((int)param_1 + 0xe);
        pbVar2 = (byte *)((int)param_1 + 0xf);
        param_1 = param_1 + 4;
        *(byte *)((int)param_4 + 0xf) = *(byte *)((int)param_4 + 0xf) ^ *pbVar2;
        iVar4 = (*(code *)puVar3)(param_4,param_4,param_5);
        if (iVar4 != 0) goto LAB_00412a7c;
        (*(code *)PTR_memcpy_004332a8)(param_2,param_4,0x10);
        param_2 = param_2 + 0x10;
      }
      uVar5 = 0;
    }
  }
  else {
LAB_00412a7c:
    uVar5 = 1;
  }
  return uVar5;
}

