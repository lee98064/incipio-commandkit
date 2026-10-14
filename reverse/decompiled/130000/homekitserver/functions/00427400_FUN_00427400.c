/* FUN_00427400 @ 00427400 */

int FUN_00427400(int param_1,int param_2,undefined4 param_3,int param_4)

{
  undefined *puVar1;
  byte *pbVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined1 *puVar8;
  int unaff_s0;
  int iVar9;
  char local_3c8 [4];
  int *local_3c4;
  undefined4 local_3c0;
  int local_3bc;
  undefined1 auStack_3b8 [4];
  int local_3b4;
  undefined1 auStack_3b0 [100];
  undefined1 auStack_34c [32];
  undefined1 auStack_32c [224];
  int aiStack_24c [129];
  undefined1 *local_48;
  int *local_44;
  undefined4 *local_40;
  int *local_3c;
  int **local_38;
  char *local_34;
  byte *local_30;
  undefined *local_2c;
  
  local_3c4 = *(int **)(param_1 + 0x104);
  local_48 = (undefined1 *)((int)local_3c4 + *(int *)(param_1 + 0x10c));
  local_44 = &local_3bc;
  iVar9 = 0;
  while (iVar3 = (*(code *)PTR_TLVGetNext_00612f0c)
                           (local_3c4,local_48,local_3c8,&local_3c0,local_44,&local_3c4),
        puVar1 = PTR_strlen_006130b4, iVar3 == 0) {
    if (local_3c8[0] == '\x05') {
      iVar9 = (*(code *)PTR_calloc_00613a18)(local_3bc,1);
      if (iVar9 == 0) {
        return -0x1a48;
      }
      (*(code *)PTR_memcpy_006137d0)(iVar9,local_3c0,local_3bc);
      unaff_s0 = local_3bc;
    }
    else if (local_3c8[0] == '\x06') {
      pbVar2 = (byte *)(*(code *)PTR_calloc_00613a18)(local_3bc,1);
      if (pbVar2 == (byte *)0x0) {
        puVar4 = (undefined1 *)0x0;
        iVar3 = -0x1a48;
        goto LAB_00427930;
      }
      local_30 = pbVar2;
      (*(code *)PTR_memcpy_006137d0)(pbVar2,local_3c0,local_3bc);
      if (DAT_005ffbb0 != *local_30) {
        puVar4 = (undefined1 *)0x0;
        iVar3 = -0x1a51;
        goto LAB_00427930;
      }
      (*(code *)PTR_free_006119dc)(local_30);
    }
  }
  puVar4 = *(undefined1 **)(param_2 + 0x18);
  puVar4[3] = 0;
  *puVar4 = 0;
  puVar4[1] = 0;
  puVar4[2] = 0;
  puVar4 = (undefined1 *)0x0;
  local_2c = PTR_s_Pair_Setup_Encrypt_Salt_005ffbc4;
  local_30 = (byte *)(*(code *)puVar1)(PTR_s_Pair_Setup_Encrypt_Salt_005ffbc4);
  puVar1 = PTR_s_Pair_Setup_Encrypt_Info_005ffbe0;
  iVar3 = *(int *)(param_2 + 4);
  uVar5 = (*(code *)PTR_strlen_006130b4)(PTR_s_Pair_Setup_Encrypt_Info_005ffbe0);
  uVar7 = *(undefined4 *)(param_2 + 0x18);
  (*(code *)PTR_hkdf_006121b4)
            (4,local_2c,local_30,*(undefined4 *)(iVar3 + 0x48),*(undefined4 *)(iVar3 + 0x4c),puVar1,
             uVar5,uVar7,0x20);
  iVar3 = (*(code *)PTR_crypto_aead_chacha20poly1305_decrypt_00612b8c)
                    (aiStack_24c,auStack_3b8,0,iVar9,0,unaff_s0,0,uVar7,0,0,PTR_s_PS_Msg05_005ffc00,
                     *(undefined4 *)(param_2 + 0x18));
  if (iVar3 == 0) {
    puVar4 = (undefined1 *)(*(code *)PTR_calloc_00613a18)(1,0xa1);
    iVar3 = -0x1a48;
    if (puVar4 != (undefined1 *)0x0) {
      iVar3 = (*(code *)PTR_Phytrex_HMReadPairList_0061283c)(puVar4,0);
      if (iVar3 == -0x1a48) {
        local_44 = (int *)((int)aiStack_24c + local_3b4);
        local_48 = auStack_3b0;
        local_38 = &local_3c4;
        local_3c4 = aiStack_24c;
        local_40 = &local_3c0;
        local_3c = &local_3bc;
        local_34 = local_3c8;
LAB_0042779c:
        iVar6 = (*(code *)PTR_TLVGetNext_00612f0c)
                          (local_3c4,local_44,local_34,local_40,local_3c,local_38);
        if (iVar6 == 0) {
          if (local_3c8[0] == '\x03') {
            iVar6 = 0x20;
            puVar8 = puVar4 + 0x40;
            if (local_3bc == 0x20) goto LAB_00427790;
          }
          else {
            if (local_3c8[0] != '\n') goto code_r0x0042770c;
            if (local_3bc == 0x40) {
              (*(code *)PTR_memset_0061223c)(local_48,0,100);
              puVar8 = local_48;
              iVar6 = local_3bc;
              goto LAB_00427790;
            }
          }
        }
        else {
          local_2c = PTR_s_Pair_Setup_Controller_Sign_Salt_005ffbd0;
          local_30 = (byte *)(*(code *)PTR_strlen_006130b4)
                                       (PTR_s_Pair_Setup_Controller_Sign_Salt_005ffbd0);
          puVar1 = PTR_s_Pair_Setup_Controller_Sign_Info_005ffbec;
          iVar3 = *(int *)(param_2 + 4);
          uVar5 = (*(code *)PTR_strlen_006130b4)(PTR_s_Pair_Setup_Controller_Sign_Info_005ffbec);
          (*(code *)PTR_hkdf_006121b4)
                    (4,local_2c,local_30,*(undefined4 *)(iVar3 + 0x48),*(undefined4 *)(iVar3 + 0x4c)
                     ,puVar1,uVar5,*(undefined4 *)(param_2 + 0x18),0x20);
          (*(code *)PTR_memcpy_006137d0)(auStack_34c,*(undefined4 *)(param_2 + 0x18),0x20);
          uVar5 = (*(code *)PTR_strlen_006130b4)(puVar4);
          (*(code *)PTR_memcpy_006137d0)(auStack_32c,puVar4,uVar5);
          iVar3 = (*(code *)PTR_strlen_006130b4)(puVar4);
          (*(code *)PTR_memcpy_006137d0)(auStack_34c + iVar3 + 0x20,puVar4 + 0x40,0x20);
          iVar3 = (*(code *)PTR_crypto_sign_ed25519_verify_detached_00612ce0)
                            (auStack_3b0,auStack_34c,0,iVar3 + 0x40,puVar4 + 0x40);
          puVar1 = PTR_Phytrex_HMUpdatePairList_0061247c;
          if (iVar3 == 0) {
            puVar4[0x60] = 1;
            iVar3 = (*(code *)puVar1)(puVar4,0);
            *(undefined1 *)(param_4 + 4) = 1;
            DAT_005ffbb0 = 6;
          }
        }
      }
    }
  }
LAB_00427930:
  if (iVar9 != 0) {
    (*(code *)PTR_free_006119dc)(iVar9);
  }
  if (puVar4 != (undefined1 *)0x0) {
    (*(code *)PTR_free_006119dc)(puVar4);
  }
  return iVar3;
code_r0x0042770c:
  if (local_3c8[0] == '\x01') {
    (*(code *)PTR_memset_0061223c)(puVar4,0,0x50);
    puVar8 = puVar4;
    iVar6 = local_3bc;
LAB_00427790:
    (*(code *)PTR_memcpy_006137d0)(puVar8,local_3c0,iVar6);
  }
  goto LAB_0042779c;
}

