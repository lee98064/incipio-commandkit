/* FUN_00427998 @ 00427998 */

int FUN_00427998(undefined4 param_1,int *param_2,int param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 uVar6;
  int iVar5;
  int iVar7;
  undefined1 *puVar8;
  int unaff_s5;
  int local_4b0;
  int local_4ac;
  undefined1 auStack_4a8 [4];
  int local_4a4;
  int local_4a0;
  int local_49c;
  undefined1 auStack_498 [32];
  undefined1 auStack_478 [32];
  undefined1 auStack_458 [224];
  undefined1 auStack_378 [300];
  undefined1 auStack_24c [516];
  undefined1 *local_48;
  undefined1 *local_44;
  int local_40;
  int local_3c;
  undefined4 local_38;
  undefined1 *local_34;
  undefined *local_30;
  
  local_4b0 = 0;
  local_4ac = 0;
  (*(code *)PTR_memset_0061223c)(auStack_24c,0,100);
  if (*(char *)(*param_2 + 0x1c) == '\0') {
    if (*(char *)(param_3 + 0xbc) == '\0') {
      iVar5 = (*(code *)PTR_crypto_sign_keypair_0061195c)(auStack_498,param_3 + 0xbd);
      if (iVar5 == 0) goto LAB_00427aa4;
    }
    else {
      (*(code *)PTR_memcpy_006137d0)(auStack_498,param_3 + 0xdd,0x20);
LAB_00427aa4:
      uVar3 = (*(code *)PTR_Phytrex_HMGetAccessoryName_0061288c)();
      local_30 = PTR_s_Pair_Setup_Accessory_Sign_Salt_005ffbd4;
      local_38 = (*(code *)PTR_strlen_006130b4)(PTR_s_Pair_Setup_Accessory_Sign_Salt_005ffbd4);
      puVar1 = PTR_s_Pair_Setup_Accessory_Sign_Info_005ffbf0;
      iVar5 = *param_2;
      iVar7 = *(int *)(iVar5 + 4);
      uVar4 = (*(code *)PTR_strlen_006130b4)(PTR_s_Pair_Setup_Accessory_Sign_Info_005ffbf0);
      iVar5 = (*(code *)PTR_hkdf_006121b4)
                        (4,local_30,local_38,*(undefined4 *)(iVar7 + 0x48),
                         *(undefined4 *)(iVar7 + 0x4c),puVar1,uVar4,*(undefined4 *)(iVar5 + 0x18),
                         0x20);
      if (iVar5 == 0) {
        (*(code *)PTR_memcpy_006137d0)(auStack_478,*(undefined4 *)(*param_2 + 0x18),0x20);
        local_48 = auStack_498;
        uVar4 = (*(code *)PTR_strlen_006130b4)(uVar3);
        (*(code *)PTR_memcpy_006137d0)(auStack_458,uVar3,uVar4);
        local_44 = auStack_378;
        iVar5 = (*(code *)PTR_strlen_006130b4)(uVar3);
        (*(code *)PTR_memcpy_006137d0)(auStack_478 + iVar5 + 0x20,local_48,0x20);
        iVar5 = (*(code *)PTR_crypto_sign_detached_006119a0)(local_44,&local_4a0,auStack_478);
        if ((iVar5 == 0) && (local_4a0 == 0)) {
          local_40 = local_49c;
          puVar2 = (undefined1 *)0x0;
          if (local_49c == 0x40) {
            iVar5 = (*(code *)PTR_strlen_006130b4)(uVar3);
            puVar2 = (undefined1 *)(*(code *)PTR_calloc_00613a18)(iVar5 + 0x66,1);
            puVar1 = PTR_strlen_006130b4;
            if (puVar2 != (undefined1 *)0x0) {
              *puVar2 = 1;
              uVar6 = (*(code *)puVar1)(uVar3);
              puVar2[1] = uVar6;
              iVar5 = -0x1a31;
              uVar4 = (*(code *)PTR_strlen_006130b4)(uVar3);
              local_34 = puVar2 + 2;
              (*(code *)PTR_memcpy_006137d0)(local_34,uVar3,uVar4);
              iVar7 = (*(code *)PTR_strlen_006130b4)(uVar3);
              puVar8 = local_34 + iVar7;
              *puVar8 = 3;
              puVar1 = PTR_memcpy_006137d0;
              puVar8[1] = 0x20;
              (*(code *)puVar1)(puVar8 + 2,local_48,0x20);
              puVar8[0x22] = 10;
              puVar1 = PTR_memcpy_006137d0;
              puVar8[0x23] = (char)local_40;
              (*(code *)puVar1)(puVar8 + 0x24,local_44,local_49c);
              local_30 = PTR_s_Pair_Setup_Encrypt_Salt_005ffbc4;
              local_38 = (*(code *)PTR_strlen_006130b4)(PTR_s_Pair_Setup_Encrypt_Salt_005ffbc4);
              iVar7 = *param_2;
              local_3c = *(int *)(iVar7 + 4);
              local_34 = PTR_s_Pair_Setup_Encrypt_Info_005ffbe0;
              uVar3 = (*(code *)PTR_strlen_006130b4)(PTR_s_Pair_Setup_Encrypt_Info_005ffbe0);
              (*(code *)PTR_hkdf_006121b4)
                        (4,local_30,local_38,*(undefined4 *)(local_3c + 0x48),
                         *(undefined4 *)(local_3c + 0x4c),local_34,uVar3,
                         *(undefined4 *)(iVar7 + 0x18),0x20);
              if (*(int *)(*param_2 + 0x18) == 0) goto LAB_00427ff8;
              iVar5 = (*(code *)PTR_crypto_aead_chacha20poly1305_encrypt_006129a4)
                                (auStack_24c,auStack_4a8,puVar2);
              if (iVar5 != 0) goto LAB_00427ff8;
              (*(code *)PTR_free_006119dc)(puVar2);
              iVar7 = local_4a4 + 5;
              puVar2 = (undefined1 *)(*(code *)PTR_calloc_00613a18)(iVar7,1);
              if (puVar2 != (undefined1 *)0x0) {
                puVar2[1] = 1;
                puVar2[2] = 6;
                puVar2[3] = 5;
                *puVar2 = 6;
                puVar1 = PTR_memcpy_006137d0;
                puVar2[4] = (char)local_4a4;
                (*(code *)puVar1)(puVar2 + 5,auStack_24c);
                goto LAB_00427e84;
              }
            }
          }
        }
        else {
          puVar2 = (undefined1 *)0x0;
        }
        goto LAB_00427ff4;
      }
    }
    puVar2 = (undefined1 *)0x0;
  }
  else {
    puVar2 = (undefined1 *)(*(code *)PTR_calloc_00613a18)(6,1);
    if (puVar2 != (undefined1 *)0x0) {
      puVar2[3] = 7;
      puVar2[2] = 6;
      puVar2[4] = 1;
      puVar2[5] = 4;
      *puVar2 = 6;
      puVar2[1] = 1;
      iVar7 = 6;
LAB_00427e84:
      DAT_005ffbb0 = 1;
      iVar5 = (*(code *)PTR_CreateSimpleHTTPMessageNoCopy_00612314)
                        ("application/pairing+tlv8",iVar7,&local_4b0,&local_4ac);
      if (iVar5 == 0) {
        unaff_s5 = (*(code *)PTR_calloc_00613a18)(iVar7 + local_4ac,1);
        (*(code *)PTR_memcpy_006137d0)(unaff_s5,local_4b0,local_4ac);
        (*(code *)PTR_memcpy_006137d0)(unaff_s5 + local_4ac,puVar2,iVar7);
        iVar5 = (*(code *)PTR_SocketSend_00611f3c)(param_1,unaff_s5,iVar7 + local_4ac);
        puVar1 = PTR_Phytrex_HMSaveAppConfig_00612da4;
        if (iVar5 == 0) {
          if (*(char *)(*param_2 + 0x1c) == '\0') {
            *(undefined1 *)(param_3 + 0xbc) = 1;
            (*(code *)puVar1)(param_3 + 0xbc);
            (*(code *)PTR_Phytrex_HMSavePairList_00611e3c)();
            iVar7 = (*(code *)PTR_Phytrex_HMPairListIsEmpty_00613bf8)();
            if (iVar7 == 0) {
              (*(code *)PTR_mdnsPhytrex_HomekitUpdate_006120d0)(&DAT_005ab5c4,"1");
            }
            else {
              (*(code *)PTR_mdnsPhytrex_HomekitUpdate_006120d0)(&DAT_005ab5c4,"0");
              DAT_006147b0 = 0;
            }
          }
          DAT_005ffbb0 = 1;
          HKCleanPairSetupInfo(param_2,param_3);
          *(undefined1 *)(param_3 + 0x110) = 0;
        }
      }
      goto LAB_00427ff8;
    }
LAB_00427ff4:
    iVar5 = -0x1a48;
  }
LAB_00427ff8:
  if (unaff_s5 != 0) {
    (*(code *)PTR_free_006119dc)(unaff_s5);
  }
  if (puVar2 != (undefined1 *)0x0) {
    (*(code *)PTR_free_006119dc)(puVar2);
  }
  if (local_4b0 != 0) {
    (*(code *)PTR_free_006119dc)();
  }
  return iVar5;
}

