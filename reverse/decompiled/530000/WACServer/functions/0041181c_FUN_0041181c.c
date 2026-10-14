/* FUN_0041181c @ 0041181c */

undefined4 FUN_0041181c(uint *param_1,uint *param_2,int param_3,uint *param_4,int param_5)

{
  uint *puVar1;
  byte bVar2;
  bool bVar3;
  uint uVar4;
  byte *pbVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  uVar4 = (uint)*(byte *)(param_5 + 0xf2);
  if (uVar4 == 0) {
    iVar8 = 0;
    iVar7 = 0;
  }
  else {
    pbVar5 = (byte *)((int)param_4 + uVar4);
    iVar7 = 0;
    while( true ) {
      iVar8 = iVar7 + uVar4;
      if (0xf < iVar8) break;
      if (param_3 <= iVar7) goto LAB_004118d4;
      bVar2 = *(byte *)param_1;
      param_1 = (uint *)((int)param_1 + 1);
      iVar7 = iVar7 + 1;
      *(byte *)param_2 = bVar2 ^ *pbVar5;
      pbVar5 = pbVar5 + 1;
      param_2 = (uint *)((int)param_2 + 1);
    }
    if (iVar8 == 0x10) {
      iVar8 = 0;
    }
  }
LAB_004118d4:
  bVar3 = iVar7 < param_3;
  if (param_3 - iVar7 >> 4 != 0) {
    if (((((uint)param_1 & 3) == 0) && (((uint)param_2 & 3) == 0)) && (((uint)param_4 & 3) == 0)) {
      while( true ) {
        bVar3 = iVar7 < param_3;
        if (param_3 < iVar7 + 0x10) break;
        if (iVar8 != 0) {
          (*(code *)PTR___assert_004330c0)
                    ("b_pos == 0",
                     "/home/vendor/rtl819x_v3464_homekit/users/mfi_wac/WACServer-1.14/External/GladmanAES/aes_modes.c"
                     ,0x31c,"aes_ofb_crypt");
        }
        iVar6 = (*(code *)PTR_aes_encrypt_00433084)(param_4,param_4,param_5);
        if (iVar6 != 0) {
          return 1;
        }
        *param_2 = *param_4 ^ *param_1;
        param_2[1] = param_4[1] ^ param_1[1];
        param_2[2] = param_4[2] ^ param_1[2];
        puVar1 = param_1 + 3;
        param_1 = param_1 + 4;
        param_2[3] = param_4[3] ^ *puVar1;
        param_2 = param_2 + 4;
        iVar7 = iVar7 + 0x10;
      }
    }
    else {
      while( true ) {
        bVar3 = iVar7 < param_3;
        if (param_3 < iVar7 + 0x10) break;
        if (iVar8 != 0) {
          (*(code *)PTR___assert_004330c0)
                    ("b_pos == 0",
                     "/home/vendor/rtl819x_v3464_homekit/users/mfi_wac/WACServer-1.14/External/GladmanAES/aes_modes.c"
                     ,0x32b,"aes_ofb_crypt");
        }
        iVar6 = (*(code *)PTR_aes_encrypt_00433084)(param_4,param_4,param_5);
        if (iVar6 != 0) {
          return 1;
        }
        *(byte *)param_2 = *(byte *)param_4 ^ *(byte *)param_1;
        *(byte *)((int)param_2 + 1) = *(byte *)((int)param_4 + 1) ^ *(byte *)((int)param_1 + 1);
        *(byte *)((int)param_2 + 2) = *(byte *)((int)param_4 + 2) ^ *(byte *)((int)param_1 + 2);
        *(byte *)((int)param_2 + 3) = (byte)*param_4 ^ (byte)*param_1;
        *(byte *)(param_2 + 1) = *(byte *)(param_4 + 1) ^ *(byte *)(param_1 + 1);
        *(byte *)((int)param_2 + 5) = *(byte *)((int)param_4 + 5) ^ *(byte *)((int)param_1 + 5);
        *(byte *)((int)param_2 + 6) = *(byte *)((int)param_4 + 6) ^ *(byte *)((int)param_1 + 6);
        *(byte *)((int)param_2 + 7) = *(byte *)((int)param_4 + 7) ^ *(byte *)((int)param_1 + 7);
        *(byte *)(param_2 + 2) = *(byte *)(param_4 + 2) ^ *(byte *)(param_1 + 2);
        *(byte *)((int)param_2 + 9) = *(byte *)((int)param_4 + 9) ^ *(byte *)((int)param_1 + 9);
        *(byte *)((int)param_2 + 10) = *(byte *)((int)param_4 + 10) ^ *(byte *)((int)param_1 + 10);
        *(byte *)((int)param_2 + 0xb) =
             *(byte *)((int)param_4 + 0xb) ^ *(byte *)((int)param_1 + 0xb);
        *(byte *)(param_2 + 3) = *(byte *)(param_4 + 3) ^ *(byte *)(param_1 + 3);
        *(byte *)((int)param_2 + 0xd) =
             *(byte *)((int)param_4 + 0xd) ^ *(byte *)((int)param_1 + 0xd);
        *(byte *)((int)param_2 + 0xe) =
             *(byte *)((int)param_4 + 0xe) ^ *(byte *)((int)param_1 + 0xe);
        pbVar5 = (byte *)((int)param_1 + 0xf);
        param_1 = param_1 + 4;
        *(byte *)((int)param_2 + 0xf) = *(byte *)((int)param_4 + 0xf) ^ *pbVar5;
        param_2 = param_2 + 4;
        iVar7 = iVar7 + 0x10;
      }
    }
  }
  do {
    if (!bVar3) {
      *(char *)(param_5 + 0xf2) = (char)iVar8;
      return 0;
    }
    if ((iVar8 == 0) &&
       (iVar6 = (*(code *)PTR_aes_encrypt_00433084)(param_4,param_4,param_5), iVar6 != 0)) {
      return 1;
    }
    pbVar5 = (byte *)((int)param_4 + iVar8);
    do {
      if (0xf < iVar8) break;
      iVar7 = iVar7 + 1;
      *(byte *)param_2 = *(byte *)param_1 ^ *pbVar5;
      iVar8 = iVar8 + 1;
      param_2 = (uint *)((int)param_2 + 1);
      param_1 = (uint *)((int)param_1 + 1);
      pbVar5 = pbVar5 + 1;
    } while (iVar7 < param_3);
    if (iVar8 == 0x10) {
      iVar8 = 0;
    }
    bVar3 = iVar7 < param_3;
  } while( true );
}

