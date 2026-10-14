/* FUN_00425d78 @ 00425d78 */

int FUN_00425d78(undefined4 param_1,int param_2,int param_3)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined1 uVar7;
  undefined1 *puVar6;
  undefined1 *puVar8;
  int iVar9;
  int unaff_s3;
  int local_3c0;
  int local_3bc;
  undefined1 auStack_3b8 [4];
  int local_3b4;
  undefined1 auStack_3b0 [4];
  int local_3ac;
  undefined1 auStack_3a8 [64];
  undefined1 auStack_368 [256];
  undefined1 auStack_268 [32];
  undefined1 auStack_248 [224];
  undefined1 auStack_168 [304];
  int local_38;
  undefined1 *local_34;
  undefined *local_30;
  
  local_3c0 = 0;
  local_3bc = 0;
  iVar2 = (*(code *)PTR_calloc_00613a18)(0x20,1);
  *(int *)(param_2 + 0x10) = iVar2;
  if (iVar2 != 0) {
    iVar2 = (*(code *)PTR_calloc_00613a18)(0x20,1);
    *(int *)(param_2 + 0x14) = iVar2;
    if (iVar2 != 0) {
      iVar2 = (*(code *)PTR_calloc_00613a18)(0x20,1);
      *(int *)(param_2 + 0x18) = iVar2;
      if (iVar2 != 0) {
        iVar2 = (*(code *)PTR_calloc_00613a18)(0x20,1);
        *(int *)(param_2 + 0x1c) = iVar2;
        if (iVar2 != 0) {
          iVar2 = (*(code *)PTR_calloc_00613a18)(0x90,1);
          if (iVar2 != 0) {
            if (*(int *)(param_2 + 0x14) == 0) {
              uVar3 = (*(code *)PTR_calloc_00613a18)(0x20,1);
              *(undefined4 *)(param_2 + 0x14) = uVar3;
            }
            (*(code *)PTR_t_random_0061166c)(*(undefined4 *)(param_2 + 0x14),0x20);
            (*(code *)PTR_memset_0061223c)(&DAT_005ffb90,0,0x20);
            DAT_005ffb90 = 9;
            (*(code *)PTR_curve25519_donna_0061190c)
                      (*(undefined4 *)(param_2 + 0x10),*(undefined4 *)(param_2 + 0x14),&DAT_005ffb90
                      );
            (*(code *)PTR_curve25519_donna_0061190c)
                      (*(undefined4 *)(param_2 + 0x18),*(undefined4 *)(param_2 + 0x14),
                       *(undefined4 *)(param_2 + 0xc));
            uVar3 = (*(code *)PTR_Phytrex_HMGetAccessoryName_0061288c)();
            (*(code *)PTR_memcpy_006137d0)(auStack_268,*(undefined4 *)(param_2 + 0x10),0x20);
            uVar4 = (*(code *)PTR_strlen_006130b4)(uVar3);
            (*(code *)PTR_memcpy_006137d0)(auStack_248,uVar3,uVar4);
            local_34 = (undefined1 *)(*(code *)PTR_strlen_006130b4)(uVar3);
            (*(code *)PTR_memcpy_006137d0)
                      (auStack_268 + (int)local_34 + 0x20,*(undefined4 *)(param_2 + 0xc),0x20);
            (*(code *)PTR_memcpy_006137d0)(auStack_3a8,param_3 + 0xbd,0x40);
            iVar5 = (*(code *)PTR_crypto_sign_detached_006119a0)
                              (auStack_368,auStack_3b8,auStack_268);
            puVar8 = (undefined1 *)0x0;
            if (iVar5 == 0) {
              local_30 = PTR_s_Pair_Verify_Encrypt_Salt_005ffbcc;
              local_34 = (undefined1 *)
                         (*(code *)PTR_strlen_006130b4)(PTR_s_Pair_Verify_Encrypt_Salt_005ffbcc);
              puVar1 = PTR_s_Pair_Verify_Encrypt_Info_005ffbe8;
              uVar4 = (*(code *)PTR_strlen_006130b4)(PTR_s_Pair_Verify_Encrypt_Info_005ffbe8);
              iVar5 = (*(code *)PTR_hkdf_006121b4)
                                (4,local_30,local_34,*(undefined4 *)(param_2 + 0x18),0x20,puVar1,
                                 uVar4,*(undefined4 *)(param_2 + 0x1c),0x20);
              puVar8 = (undefined1 *)0x0;
              if (iVar5 == 0) {
                local_38 = (*(code *)PTR_strlen_006130b4)(uVar3);
                local_38 = local_3b4 + 4 + local_38;
                puVar8 = (undefined1 *)(*(code *)PTR_calloc_00613a18)(local_38,1);
                puVar1 = PTR_strlen_006130b4;
                if (puVar8 == (undefined1 *)0x0) {
LAB_00426364:
                  iVar5 = -0x1a48;
                }
                else {
                  *puVar8 = 1;
                  uVar7 = (*(code *)puVar1)(uVar3);
                  puVar8[1] = uVar7;
                  uVar4 = (*(code *)PTR_strlen_006130b4)(uVar3);
                  local_34 = puVar8 + 2;
                  (*(code *)PTR_memcpy_006137d0)(local_34,uVar3,uVar4);
                  iVar5 = (*(code *)PTR_strlen_006130b4)(uVar3);
                  puVar6 = local_34 + iVar5;
                  *puVar6 = 10;
                  puVar1 = PTR_memcpy_006137d0;
                  puVar6[1] = (char)local_3b4;
                  (*(code *)puVar1)(puVar6 + 2,auStack_368,local_3b4);
                  iVar5 = (*(code *)PTR_crypto_aead_chacha20poly1305_encrypt_006129a4)
                                    (auStack_168,auStack_3b0,puVar8);
                  if (iVar5 == 0) {
                    (*(code *)PTR_free_006119dc)(puVar8);
                    iVar9 = local_3ac + 0x27;
                    puVar8 = (undefined1 *)(*(code *)PTR_calloc_00613a18)(iVar9,1);
                    if (puVar8 == (undefined1 *)0x0) goto LAB_00426364;
                    *puVar8 = 6;
                    puVar8[2] = 2;
                    puVar8[1] = 1;
                    puVar8[3] = 3;
                    puVar8[4] = 0x20;
                    (*(code *)PTR_memcpy_006137d0)(puVar8 + 5,*(undefined4 *)(param_2 + 0x10),0x20);
                    puVar8[0x25] = 5;
                    puVar1 = PTR_memcpy_006137d0;
                    puVar8[0x26] = (char)local_3ac;
                    (*(code *)puVar1)(puVar8 + 0x27,auStack_168,local_3ac);
                    iVar5 = (*(code *)PTR_CreateSimpleHTTPMessageNoCopy_00612314)
                                      ("application/pairing+tlv8",iVar9,&local_3c0,&local_3bc);
                    if (iVar5 == 0) {
                      unaff_s3 = (*(code *)PTR_calloc_00613a18)(iVar9 + local_3bc,1);
                      (*(code *)PTR_memcpy_006137d0)(unaff_s3,local_3c0,local_3bc);
                      (*(code *)PTR_memcpy_006137d0)(unaff_s3 + local_3bc,puVar8,iVar9);
                      iVar5 = (*(code *)PTR_SocketSend_00611f3c)(param_1,unaff_s3,iVar9 + local_3bc)
                      ;
                      if (iVar5 == 0) {
                        *(undefined4 *)(param_2 + 4) = 3;
                      }
                    }
                  }
                }
              }
            }
            local_34 = (undefined1 *)iVar5;
            (*(code *)PTR_free_006119dc)(iVar2);
            goto LAB_004262d0;
          }
        }
      }
    }
  }
  puVar8 = (undefined1 *)0x0;
  local_34 = (undefined1 *)0xffffe5b8;
LAB_004262d0:
  if (unaff_s3 != 0) {
    (*(code *)PTR_free_006119dc)(unaff_s3);
  }
  if (puVar8 != (undefined1 *)0x0) {
    (*(code *)PTR_free_006119dc)(puVar8);
  }
  if (local_3c0 != 0) {
    (*(code *)PTR_free_006119dc)();
  }
  return (int)local_34;
}

