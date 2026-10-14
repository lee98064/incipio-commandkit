/* FUN_00411c40 @ 00411c40 */

undefined4 FUN_00411c40(uint *param_1,uint *param_2,int param_3,uint *param_4,int param_5)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  uVar3 = (uint)*(byte *)(param_5 + 0xf2);
  if (uVar3 == 0) {
    iVar7 = 0;
    iVar6 = 0;
  }
  else {
    pbVar4 = (byte *)((int)param_4 + uVar3);
    iVar6 = 0;
    while( true ) {
      iVar7 = iVar6 + uVar3;
      if (0xf < iVar7) break;
      if (param_3 <= iVar6) goto LAB_00411cfc;
      bVar1 = *(byte *)param_1;
      param_1 = (uint *)((int)param_1 + 1);
      iVar6 = iVar6 + 1;
      *(byte *)param_2 = bVar1 ^ *pbVar4;
      *pbVar4 = bVar1;
      param_2 = (uint *)((int)param_2 + 1);
      pbVar4 = pbVar4 + 1;
    }
    if (iVar7 == 0x10) {
      iVar7 = 0;
    }
  }
LAB_00411cfc:
  bVar2 = iVar6 < param_3;
  if (param_3 - iVar6 >> 4 != 0) {
    if (((((uint)param_1 & 3) == 0) && (((uint)param_2 & 3) == 0)) && (((uint)param_4 & 3) == 0)) {
      while( true ) {
        bVar2 = iVar6 < param_3;
        if (param_3 < iVar6 + 0x10) break;
        if (iVar7 != 0) {
          (*(code *)PTR___assert_004330c0)
                    ("b_pos == 0",
                     "/home/vendor/rtl819x_v3464_homekit/users/mfi_wac/WACServer-1.14/External/GladmanAES/aes_modes.c"
                     ,0x293,"aes_cfb_decrypt");
        }
        iVar5 = (*(code *)PTR_aes_encrypt_00433084)(param_4,param_4,param_5);
        if (iVar5 != 0) {
          return 1;
        }
        uVar3 = *param_1;
        *param_2 = *param_4 ^ uVar3;
        *param_4 = uVar3;
        uVar3 = param_1[1];
        param_2[1] = param_4[1] ^ uVar3;
        param_4[1] = uVar3;
        uVar3 = param_1[2];
        param_2[2] = param_4[2] ^ uVar3;
        param_4[2] = uVar3;
        uVar3 = param_1[3];
        param_1 = param_1 + 4;
        param_2[3] = param_4[3] ^ uVar3;
        param_4[3] = uVar3;
        param_2 = param_2 + 4;
        iVar6 = iVar6 + 0x10;
      }
    }
    else {
      while (iVar6 + 0x10 <= param_3) {
        if (iVar7 != 0) {
          (*(code *)PTR___assert_004330c0)
                    ("b_pos == 0",
                     "/home/vendor/rtl819x_v3464_homekit/users/mfi_wac/WACServer-1.14/External/GladmanAES/aes_modes.c"
                     ,0x2a3,"aes_cfb_decrypt");
        }
        iVar5 = (*(code *)PTR_aes_encrypt_00433084)(param_4,param_4,param_5);
        if (iVar5 != 0) {
          return 1;
        }
        bVar1 = *(byte *)param_1;
        *(byte *)param_2 = bVar1 ^ *(byte *)param_4;
        *(byte *)param_4 = bVar1;
        bVar1 = *(byte *)((int)param_1 + 1);
        *(byte *)((int)param_2 + 1) = bVar1 ^ *(byte *)((int)param_4 + 1);
        *(byte *)((int)param_4 + 1) = bVar1;
        bVar1 = *(byte *)((int)param_1 + 2);
        *(byte *)((int)param_2 + 2) = bVar1 ^ *(byte *)((int)param_4 + 2);
        *(byte *)((int)param_4 + 2) = bVar1;
        uVar3 = *param_1;
        *(byte *)((int)param_2 + 3) = (byte)uVar3 ^ *(byte *)((int)param_4 + 3);
        *(byte *)((int)param_4 + 3) = (byte)uVar3;
        bVar1 = *(byte *)(param_1 + 1);
        *(byte *)(param_2 + 1) = bVar1 ^ *(byte *)(param_4 + 1);
        *(byte *)(param_4 + 1) = bVar1;
        bVar1 = *(byte *)((int)param_1 + 5);
        *(byte *)((int)param_2 + 5) = bVar1 ^ *(byte *)((int)param_4 + 5);
        *(byte *)((int)param_4 + 5) = bVar1;
        bVar1 = *(byte *)((int)param_1 + 6);
        *(byte *)((int)param_2 + 6) = bVar1 ^ *(byte *)((int)param_4 + 6);
        *(byte *)((int)param_4 + 6) = bVar1;
        bVar1 = *(byte *)((int)param_1 + 7);
        *(byte *)((int)param_2 + 7) = bVar1 ^ *(byte *)((int)param_4 + 7);
        *(byte *)((int)param_4 + 7) = bVar1;
        bVar1 = *(byte *)(param_1 + 2);
        *(byte *)(param_2 + 2) = bVar1 ^ *(byte *)(param_4 + 2);
        *(byte *)(param_4 + 2) = bVar1;
        bVar1 = *(byte *)((int)param_1 + 9);
        *(byte *)((int)param_2 + 9) = bVar1 ^ *(byte *)((int)param_4 + 9);
        *(byte *)((int)param_4 + 9) = bVar1;
        bVar1 = *(byte *)((int)param_1 + 10);
        *(byte *)((int)param_2 + 10) = bVar1 ^ *(byte *)((int)param_4 + 10);
        *(byte *)((int)param_4 + 10) = bVar1;
        bVar1 = *(byte *)((int)param_1 + 0xb);
        *(byte *)((int)param_2 + 0xb) = bVar1 ^ *(byte *)((int)param_4 + 0xb);
        *(byte *)((int)param_4 + 0xb) = bVar1;
        bVar1 = *(byte *)(param_1 + 3);
        *(byte *)(param_2 + 3) = bVar1 ^ *(byte *)(param_4 + 3);
        *(byte *)(param_4 + 3) = bVar1;
        bVar1 = *(byte *)((int)param_1 + 0xd);
        *(byte *)((int)param_2 + 0xd) = bVar1 ^ *(byte *)((int)param_4 + 0xd);
        *(byte *)((int)param_4 + 0xd) = bVar1;
        bVar1 = *(byte *)((int)param_1 + 0xe);
        *(byte *)((int)param_2 + 0xe) = bVar1 ^ *(byte *)((int)param_4 + 0xe);
        *(byte *)((int)param_4 + 0xe) = bVar1;
        bVar1 = *(byte *)((int)param_1 + 0xf);
        param_1 = param_1 + 4;
        *(byte *)((int)param_2 + 0xf) = bVar1 ^ *(byte *)((int)param_4 + 0xf);
        *(byte *)((int)param_4 + 0xf) = bVar1;
        param_2 = param_2 + 4;
        iVar6 = iVar6 + 0x10;
      }
      bVar2 = iVar6 < param_3;
    }
  }
  do {
    if (!bVar2) {
      *(char *)(param_5 + 0xf2) = (char)iVar7;
      return 0;
    }
    if ((iVar7 == 0) &&
       (iVar5 = (*(code *)PTR_aes_encrypt_00433084)(param_4,param_4,param_5), iVar5 != 0)) {
      return 1;
    }
    pbVar4 = (byte *)((int)param_4 + iVar7);
    do {
      if (0xf < iVar7) break;
      bVar1 = *(byte *)param_1;
      iVar6 = iVar6 + 1;
      *(byte *)param_2 = bVar1 ^ *pbVar4;
      param_1 = (uint *)((int)param_1 + 1);
      *pbVar4 = bVar1;
      param_2 = (uint *)((int)param_2 + 1);
      iVar7 = iVar7 + 1;
      pbVar4 = pbVar4 + 1;
    } while (iVar6 < param_3);
    if (iVar7 == 0x10) {
      iVar7 = 0;
    }
    bVar2 = iVar6 < param_3;
  } while( true );
}

