/* FUN_00412018 @ 00412018 */

undefined4 FUN_00412018(uint *param_1,uint *param_2,int param_3,uint *param_4,int param_5)

{
  uint *puVar1;
  byte bVar2;
  bool bVar3;
  uint uVar4;
  byte bVar7;
  byte *pbVar5;
  int iVar6;
  uint uVar8;
  int iVar9;
  int iVar10;
  
  uVar4 = (uint)*(byte *)(param_5 + 0xf2);
  if (uVar4 == 0) {
    iVar10 = 0;
    iVar9 = 0;
  }
  else {
    pbVar5 = (byte *)((int)param_4 + uVar4);
    iVar9 = 0;
    while( true ) {
      iVar10 = iVar9 + uVar4;
      if (0xf < iVar10) break;
      if (param_3 <= iVar9) goto LAB_004120d8;
      bVar7 = *(byte *)param_1;
      bVar2 = *pbVar5;
      param_1 = (uint *)((int)param_1 + 1);
      iVar9 = iVar9 + 1;
      *pbVar5 = bVar7 ^ bVar2;
      *(byte *)param_2 = bVar7 ^ bVar2;
      pbVar5 = pbVar5 + 1;
      param_2 = (uint *)((int)param_2 + 1);
    }
    if (iVar10 == 0x10) {
      iVar10 = 0;
    }
  }
LAB_004120d8:
  bVar3 = iVar9 < param_3;
  if (param_3 - iVar9 >> 4 != 0) {
    if (((((uint)param_1 & 3) == 0) && (((uint)param_2 & 3) == 0)) && (((uint)param_4 & 3) == 0)) {
      while( true ) {
        bVar3 = iVar9 < param_3;
        if (param_3 < iVar9 + 0x10) break;
        if (iVar10 != 0) {
          (*(code *)PTR___assert_004330c0)
                    ("b_pos == 0",
                     "/home/vendor/rtl819x_v3464_homekit/users/mfi_wac/WACServer-1.14/External/GladmanAES/aes_modes.c"
                     ,0x212,"aes_cfb_encrypt");
        }
        iVar6 = (*(code *)PTR_aes_encrypt_00433084)(param_4,param_4,param_5);
        if (iVar6 != 0) {
          return 1;
        }
        uVar4 = *param_1;
        uVar8 = *param_4;
        *param_4 = uVar8 ^ uVar4;
        *param_2 = uVar8 ^ uVar4;
        uVar4 = param_4[1] ^ param_1[1];
        param_4[1] = uVar4;
        param_2[1] = uVar4;
        uVar4 = param_4[2] ^ param_1[2];
        param_4[2] = uVar4;
        param_2[2] = uVar4;
        puVar1 = param_1 + 3;
        param_1 = param_1 + 4;
        uVar4 = param_4[3] ^ *puVar1;
        param_4[3] = uVar4;
        param_2[3] = uVar4;
        param_2 = param_2 + 4;
        iVar9 = iVar9 + 0x10;
      }
    }
    else {
      while (iVar9 + 0x10 <= param_3) {
        if (iVar10 != 0) {
          (*(code *)PTR___assert_004330c0)
                    ("b_pos == 0",
                     "/home/vendor/rtl819x_v3464_homekit/users/mfi_wac/WACServer-1.14/External/GladmanAES/aes_modes.c"
                     ,0x221,"aes_cfb_encrypt");
        }
        iVar6 = (*(code *)PTR_aes_encrypt_00433084)(param_4,param_4,param_5);
        if (iVar6 != 0) {
          return 1;
        }
        bVar7 = *(byte *)param_1;
        bVar2 = *(byte *)param_4;
        *(byte *)param_4 = bVar2 ^ bVar7;
        *(byte *)param_2 = bVar2 ^ bVar7;
        bVar7 = *(byte *)((int)param_4 + 1) ^ *(byte *)((int)param_1 + 1);
        *(byte *)((int)param_4 + 1) = bVar7;
        *(byte *)((int)param_2 + 1) = bVar7;
        bVar7 = *(byte *)((int)param_4 + 2) ^ *(byte *)((int)param_1 + 2);
        *(byte *)((int)param_4 + 2) = bVar7;
        *(byte *)((int)param_2 + 2) = bVar7;
        bVar7 = *(byte *)((int)param_4 + 3) ^ (byte)*param_1;
        *(byte *)((int)param_4 + 3) = bVar7;
        *(byte *)((int)param_2 + 3) = bVar7;
        bVar7 = *(byte *)(param_4 + 1) ^ *(byte *)(param_1 + 1);
        *(byte *)(param_4 + 1) = bVar7;
        *(byte *)(param_2 + 1) = bVar7;
        bVar7 = *(byte *)((int)param_4 + 5) ^ *(byte *)((int)param_1 + 5);
        *(byte *)((int)param_4 + 5) = bVar7;
        *(byte *)((int)param_2 + 5) = bVar7;
        bVar7 = *(byte *)((int)param_4 + 6) ^ *(byte *)((int)param_1 + 6);
        *(byte *)((int)param_4 + 6) = bVar7;
        *(byte *)((int)param_2 + 6) = bVar7;
        bVar7 = *(byte *)((int)param_4 + 7) ^ *(byte *)((int)param_1 + 7);
        *(byte *)((int)param_4 + 7) = bVar7;
        *(byte *)((int)param_2 + 7) = bVar7;
        bVar7 = *(byte *)(param_4 + 2) ^ *(byte *)(param_1 + 2);
        *(byte *)(param_4 + 2) = bVar7;
        *(byte *)(param_2 + 2) = bVar7;
        bVar7 = *(byte *)((int)param_4 + 9) ^ *(byte *)((int)param_1 + 9);
        *(byte *)((int)param_4 + 9) = bVar7;
        *(byte *)((int)param_2 + 9) = bVar7;
        bVar7 = *(byte *)((int)param_4 + 10) ^ *(byte *)((int)param_1 + 10);
        *(byte *)((int)param_4 + 10) = bVar7;
        *(byte *)((int)param_2 + 10) = bVar7;
        bVar7 = *(byte *)((int)param_4 + 0xb) ^ *(byte *)((int)param_1 + 0xb);
        *(byte *)((int)param_4 + 0xb) = bVar7;
        *(byte *)((int)param_2 + 0xb) = bVar7;
        bVar7 = *(byte *)(param_4 + 3) ^ *(byte *)(param_1 + 3);
        *(byte *)(param_4 + 3) = bVar7;
        *(byte *)(param_2 + 3) = bVar7;
        bVar7 = *(byte *)((int)param_4 + 0xd) ^ *(byte *)((int)param_1 + 0xd);
        *(byte *)((int)param_4 + 0xd) = bVar7;
        *(byte *)((int)param_2 + 0xd) = bVar7;
        bVar7 = *(byte *)((int)param_4 + 0xe) ^ *(byte *)((int)param_1 + 0xe);
        *(byte *)((int)param_4 + 0xe) = bVar7;
        *(byte *)((int)param_2 + 0xe) = bVar7;
        pbVar5 = (byte *)((int)param_1 + 0xf);
        param_1 = param_1 + 4;
        bVar7 = *(byte *)((int)param_4 + 0xf) ^ *pbVar5;
        *(byte *)((int)param_4 + 0xf) = bVar7;
        *(byte *)((int)param_2 + 0xf) = bVar7;
        param_2 = param_2 + 4;
        iVar9 = iVar9 + 0x10;
      }
      bVar3 = iVar9 < param_3;
    }
  }
  do {
    if (!bVar3) {
      *(char *)(param_5 + 0xf2) = (char)iVar10;
      return 0;
    }
    if ((iVar10 == 0) &&
       (iVar6 = (*(code *)PTR_aes_encrypt_00433084)(param_4,param_4,param_5), iVar6 != 0)) {
      return 1;
    }
    pbVar5 = (byte *)((int)param_4 + iVar10);
    do {
      if (0xf < iVar10) break;
      bVar7 = *(byte *)param_1;
      bVar2 = *pbVar5;
      iVar9 = iVar9 + 1;
      *pbVar5 = bVar7 ^ bVar2;
      iVar10 = iVar10 + 1;
      *(byte *)param_2 = bVar7 ^ bVar2;
      param_1 = (uint *)((int)param_1 + 1);
      param_2 = (uint *)((int)param_2 + 1);
      pbVar5 = pbVar5 + 1;
    } while (iVar9 < param_3);
    if (iVar10 == 0x10) {
      iVar10 = 0;
    }
    bVar3 = iVar9 < param_3;
  } while( true );
}

