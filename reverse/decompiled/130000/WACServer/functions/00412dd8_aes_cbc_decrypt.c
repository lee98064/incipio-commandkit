/* aes_cbc_decrypt @ 00412dd8 */

undefined4 aes_cbc_decrypt(int param_1,uint *param_2,uint param_3,uint *param_4,undefined4 param_5)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 auStack_30 [20];
  
  if ((param_3 & 0xf) == 0) {
    iVar4 = (int)param_3 >> 4;
    if ((((uint)param_2 & 3) == 0) && (((uint)param_4 & 3) == 0)) {
      while (iVar4 != 0) {
        iVar4 = iVar4 + -1;
        (*(code *)PTR_memcpy_004332a8)(auStack_30,param_1,0x10);
        iVar2 = (*(code *)PTR_aes_decrypt_0043326c)(param_1,param_2,param_5);
        puVar1 = PTR_memcpy_004332a8;
        if (iVar2 != 0) goto LAB_00413070;
        *param_2 = *param_2 ^ *param_4;
        param_2[1] = param_2[1] ^ param_4[1];
        param_1 = param_1 + 0x10;
        param_2[2] = param_2[2] ^ param_4[2];
        param_2[3] = param_2[3] ^ param_4[3];
        (*(code *)puVar1)(param_4,auStack_30,0x10);
        param_2 = param_2 + 4;
      }
      uVar3 = 0;
    }
    else {
      while (iVar4 != 0) {
        iVar4 = iVar4 + -1;
        (*(code *)PTR_memcpy_004332a8)(auStack_30,param_1,0x10);
        iVar2 = (*(code *)PTR_aes_decrypt_0043326c)(param_1,param_2,param_5);
        puVar1 = PTR_memcpy_004332a8;
        param_1 = param_1 + 0x10;
        if (iVar2 != 0) goto LAB_00413070;
        *(byte *)param_2 = *(byte *)param_4 ^ *(byte *)param_2;
        *(byte *)((int)param_2 + 1) = *(byte *)((int)param_4 + 1) ^ *(byte *)((int)param_2 + 1);
        *(byte *)((int)param_2 + 2) = *(byte *)((int)param_4 + 2) ^ *(byte *)((int)param_2 + 2);
        *(byte *)((int)param_2 + 3) = (byte)*param_4 ^ (byte)*param_2;
        *(byte *)(param_2 + 1) = *(byte *)(param_4 + 1) ^ *(byte *)(param_2 + 1);
        *(byte *)((int)param_2 + 5) = *(byte *)((int)param_4 + 5) ^ *(byte *)((int)param_2 + 5);
        *(byte *)((int)param_2 + 6) = *(byte *)((int)param_4 + 6) ^ *(byte *)((int)param_2 + 6);
        *(byte *)((int)param_2 + 7) = *(byte *)((int)param_4 + 7) ^ *(byte *)((int)param_2 + 7);
        *(byte *)(param_2 + 2) = *(byte *)(param_4 + 2) ^ *(byte *)(param_2 + 2);
        *(byte *)((int)param_2 + 9) = *(byte *)((int)param_4 + 9) ^ *(byte *)((int)param_2 + 9);
        *(byte *)((int)param_2 + 10) = *(byte *)((int)param_4 + 10) ^ *(byte *)((int)param_2 + 10);
        *(byte *)((int)param_2 + 0xb) =
             *(byte *)((int)param_4 + 0xb) ^ *(byte *)((int)param_2 + 0xb);
        *(byte *)(param_2 + 3) = *(byte *)(param_4 + 3) ^ *(byte *)(param_2 + 3);
        *(byte *)((int)param_2 + 0xd) =
             *(byte *)((int)param_4 + 0xd) ^ *(byte *)((int)param_2 + 0xd);
        *(byte *)((int)param_2 + 0xe) =
             *(byte *)((int)param_4 + 0xe) ^ *(byte *)((int)param_2 + 0xe);
        *(byte *)((int)param_2 + 0xf) =
             *(byte *)((int)param_4 + 0xf) ^ *(byte *)((int)param_2 + 0xf);
        (*(code *)puVar1)(param_4,auStack_30,0x10);
        param_2 = param_2 + 4;
      }
      uVar3 = 0;
    }
  }
  else {
LAB_00413070:
    uVar3 = 1;
  }
  return uVar3;
}

