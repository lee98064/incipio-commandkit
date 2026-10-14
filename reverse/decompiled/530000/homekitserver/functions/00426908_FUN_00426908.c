/* FUN_00426908 @ 00426908 */

int FUN_00426908(int param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint unaff_s1;
  uint uVar3;
  char local_5a0;
  undefined1 local_59f [3];
  undefined1 *local_59c;
  undefined4 local_598;
  uint local_594;
  undefined4 local_590 [2];
  undefined1 auStack_588 [4];
  int local_584;
  undefined1 auStack_580 [32];
  undefined1 auStack_560 [100];
  undefined1 auStack_4fc [100];
  undefined1 auStack_498 [300];
  undefined1 auStack_36c [300];
  undefined1 auStack_240 [32];
  undefined1 auStack_220 [480];
  undefined1 *local_40;
  uint *local_3c;
  undefined1 **local_38;
  undefined1 **local_34;
  char *local_30;
  byte *local_2c;
  
  local_59c = *(undefined1 **)(param_1 + 0x104);
  local_40 = local_59c + *(int *)(param_1 + 0x10c);
  local_3c = &local_594;
  local_38 = &local_59c;
  local_34 = (undefined1 **)auStack_498;
  uVar3 = 0;
  while( true ) {
    iVar1 = (*(code *)PTR_TLVGetNext_00613da4)
                      (local_59c,local_40,&local_5a0,&local_598,local_3c,local_38);
    if (iVar1 != 0) {
      iVar1 = (*(code *)PTR_crypto_aead_chacha20poly1305_decrypt_00613a28)
                        (auStack_36c,auStack_588,0,auStack_498,0,uVar3,0);
      if (iVar1 != 0) {
        return iVar1;
      }
      local_38 = (undefined1 **)&local_594;
      local_40 = auStack_36c + local_584;
      local_34 = &local_59c;
      local_59c = auStack_36c;
      local_3c = &local_598;
      local_30 = &local_5a0;
      while( true ) {
        do {
          while( true ) {
            iVar1 = (*(code *)PTR_TLVGetNext_00613da4)
                              (local_59c,local_40,local_30,local_3c,local_38,local_34);
            if (iVar1 != 0) {
              (*(code *)PTR_memcpy_00614674)(auStack_240,*(undefined4 *)(param_2 + 0xc),0x20);
              (*(code *)PTR_memcpy_00614674)(auStack_220,auStack_560,unaff_s1);
              uVar3 = unaff_s1 + 0x20 & 0xff;
              (*(code *)PTR_memcpy_00614674)
                        (auStack_240 + uVar3,*(undefined4 *)(param_2 + 0x10),0x20);
              iVar1 = (*(code *)PTR_Phytrex_HMSearchLTPK_00612a34)
                                (auStack_560,auStack_580,local_590);
              if (iVar1 == 0) {
                iVar1 = (*(code *)PTR_Phytrex_HMGetPairListPermission_00612a68)
                                  (local_590[0],local_59f);
                if (iVar1 == 0) {
                  *(undefined1 *)(param_4 + 4) = local_59f[0];
                }
                iVar1 = (*(code *)PTR_crypto_sign_ed25519_verify_detached_00613b78)
                                  (auStack_4fc,auStack_240,0,uVar3 + 0x20 & 0xff,auStack_580);
                if (iVar1 == 0) {
                  uVar2 = (*(code *)PTR_pthread_self_006134a8)();
                  (*(code *)PTR_pthread_list_updateControllerName_00612630)(uVar2,auStack_560);
                }
              }
              return iVar1;
            }
            if (local_5a0 != '\x01') break;
            (*(code *)PTR_memset_006130cc)(auStack_560,0,100);
            (*(code *)PTR_memcpy_00614674)(auStack_560,local_598,local_594);
            unaff_s1 = local_594 & 0xff;
          }
        } while (local_5a0 != '\n');
        if (local_594 != 0x40) break;
        (*(code *)PTR_memset_006130cc)(auStack_4fc,0,100);
        (*(code *)PTR_memcpy_00614674)(auStack_4fc,local_598,local_594);
      }
      return 0;
    }
    local_2c = (byte *)(*(code *)PTR_calloc_006148c0)(local_594 + 1,1);
    if (local_2c == (byte *)0x0) break;
    (*(code *)PTR_memcpy_00614674)(local_2c,local_598,local_594);
    if (local_5a0 == '\x05') {
      (*(code *)PTR_memcpy_00614674)(local_34,local_598,local_594);
      uVar3 = local_594;
      if (local_594 == 0) {
        return -0x1a51;
      }
    }
    else if (local_5a0 == '\x06') {
      if (*(uint *)(param_2 + 4) != (uint)*local_2c) {
        return -0x1a51;
      }
      (*(code *)PTR_free_0061286c)(local_2c);
    }
  }
  return -0x1a48;
}

