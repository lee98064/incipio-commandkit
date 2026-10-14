/* FUN_00427150 @ 00427150 */

/* WARNING: Removing unreachable block (ram,0x004272b8) */
/* WARNING: Removing unreachable block (ram,0x00427508) */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

int FUN_00427150(undefined4 param_1,int param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  byte bVar5;
  undefined1 *puVar4;
  undefined *puVar6;
  int extraout_v1;
  int iVar7;
  int extraout_v1_00;
  uint uVar8;
  int unaff_s1;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  uint uVar14;
  longlong lVar15;
  int local_6d8;
  int local_6d4;
  int local_6d0;
  int local_6cc;
  int local_6c8;
  undefined *local_6c4;
  uint local_6c0;
  uint local_6bc;
  undefined1 auStack_6b8 [20];
  undefined1 auStack_6a4 [36];
  undefined1 auStack_680 [96];
  undefined1 auStack_620 [1520];
  undefined4 local_30;
  undefined *local_2c;
  
  local_6d8 = 0;
  local_6d4 = 0;
  local_6d0 = 0;
  local_6c8 = 0;
  *(undefined4 *)(param_2 + 0x2c) = 0;
  if (*(int *)(param_2 + 0x1c) == 0) {
    iVar2 = (*(code *)PTR_calloc_006148c0)(0x40,1);
    puVar9 = (undefined1 *)0x0;
    *(int *)(param_2 + 0x1c) = iVar2;
    if (iVar2 != 0) goto LAB_004271cc;
  }
  else {
LAB_004271cc:
    puVar6 = PTR_SRP_compute_key_006144f0;
    puVar9 = *(undefined1 **)(param_2 + 0x1c);
    puVar9[3] = 0;
    *puVar9 = 0;
    puVar9[1] = 0;
    puVar9[2] = 0;
    (*(code *)puVar6)(*(undefined4 *)(param_2 + 0x24),param_2 + 0x2c,*(undefined4 *)(param_2 + 0xc),
                      *(undefined4 *)(param_2 + 0x10));
    puVar6 = PTR_calloc_006148c0;
    *(undefined4 *)(*(int *)(param_2 + 8) + 0x4c) = *(undefined4 *)(*(int *)(param_2 + 0x2c) + 4);
    iVar2 = *(int *)(param_2 + 8);
    uVar3 = (*(code *)puVar6)(*(undefined4 *)(iVar2 + 0x4c),1);
    *(undefined4 *)(iVar2 + 0x48) = uVar3;
    (*(code *)PTR_memcpy_00614674)
              (*(undefined4 *)(*(int *)(param_2 + 8) + 0x48),**(undefined4 **)(param_2 + 0x2c),
               *(undefined4 *)(*(int *)(param_2 + 8) + 0x4c));
    iVar2 = (*(code *)PTR_SRP_verify_00613f54)
                      (*(undefined4 *)(param_2 + 0x24),*(undefined4 *)(param_2 + 0x14),
                       *(undefined4 *)(param_2 + 0x18));
    puVar6 = PTR_strlen_00613f4c;
    if ((iVar2 == 0) && (DAT_00615650 < 100)) {
      puVar9 = *(undefined1 **)(param_2 + 0x1c);
      puVar9[3] = 0;
      *puVar9 = 0;
      puVar9[1] = 0;
      puVar9[2] = 0;
      local_2c = PTR_s_Pair_Setup_Encrypt_Salt_00600a64;
      local_30 = (*(code *)puVar6)(PTR_s_Pair_Setup_Encrypt_Salt_00600a64);
      puVar6 = PTR_s_Pair_Setup_Encrypt_Info_00600a80;
      iVar2 = *(int *)(param_2 + 8);
      uVar3 = (*(code *)PTR_strlen_00613f4c)(PTR_s_Pair_Setup_Encrypt_Info_00600a80);
      (*(code *)PTR_hkdf_00613044)
                (4,local_2c,local_30,*(undefined4 *)(iVar2 + 0x48),*(undefined4 *)(iVar2 + 0x4c),
                 puVar6,uVar3,*(undefined4 *)(param_2 + 0x1c),0x20);
      local_2c = PTR_s_MFi_Pair_Setup_Salt_00600a68;
      local_30 = (*(code *)PTR_strlen_00613f4c)(PTR_s_MFi_Pair_Setup_Salt_00600a68);
      puVar6 = PTR_s_MFi_Pair_Setup_Info_00600a84;
      iVar2 = *(int *)(param_2 + 8);
      uVar3 = (*(code *)PTR_strlen_00613f4c)(PTR_s_MFi_Pair_Setup_Info_00600a84);
      puVar10 = auStack_6a4;
      iVar2 = (*(code *)PTR_hkdf_00613044)
                        (4,local_2c,local_30,*(undefined4 *)(iVar2 + 0x48),
                         *(undefined4 *)(iVar2 + 0x4c),puVar6,uVar3,auStack_6a4,0x20);
      if (iVar2 == 0) {
        (*(code *)PTR_SHA1_Init_compat_00614984)(auStack_680);
        (*(code *)PTR_SHA1_Update_compat_00613558)(auStack_680,auStack_6a4,0x20);
        (*(code *)PTR_SHA1_Final_compat_00613764)(auStack_6b8,auStack_680);
        iVar2 = (*(code *)PTR_MFiAuthCreateSignature_00612840)
                          (auStack_6b8,0x14,&local_6d0,&local_6cc);
        if ((iVar2 == 0) &&
           (iVar2 = (*(code *)PTR_MFiAuthCopyCertificate_006146a8)(&local_6c8,&local_6c4),
           iVar2 == 0)) {
          (*(code *)PTR_SRP_respond_00614958)(*(undefined4 *)(param_2 + 0x24),param_2 + 0x2c);
          *(undefined4 *)(*(int *)(param_2 + 8) + 0x5c) =
               *(undefined4 *)(*(int *)(param_2 + 0x2c) + 4);
          uVar14 = (uint)local_6c4 / 0xff;
          if ((uint)local_6c4 % 0xff != 0) {
            uVar14 = uVar14 + 1;
          }
          puVar13 = local_6c4 + uVar14 * 2 + local_6cc + 2;
          puVar9 = (undefined1 *)(*(code *)PTR_calloc_006148c0)(puVar13,1);
          puVar6 = PTR_memcpy_00614674;
          if (puVar9 != (undefined1 *)0x0) {
            *puVar9 = 10;
            puVar9[1] = (char)local_6cc;
            (*(code *)puVar6)(puVar9 + 2,local_6d0);
            puVar12 = (undefined *)0x0;
            puVar4 = puVar9 + 2 + local_6cc;
            puVar6 = (undefined *)0xff;
            uVar3 = 9;
            while( true ) {
              puVar1 = PTR_memcpy_00614674;
              if (local_6c4 <= puVar12) break;
              *puVar4 = (char)uVar3;
              puVar11 = local_6c4 + -(int)puVar12;
              if ((undefined *)0xff < local_6c4 + -(int)puVar12) {
                puVar11 = puVar6;
              }
              puVar4[1] = (char)puVar11;
              local_30 = uVar3;
              local_2c = puVar6;
              (*(code *)puVar1)(puVar4 + 2,puVar12 + local_6c8,puVar11);
              puVar12 = puVar12 + (int)puVar11;
              puVar4 = puVar4 + 2 + (int)puVar11;
              puVar6 = local_2c;
              uVar3 = local_30;
            }
            iVar2 = (*(code *)PTR_crypto_aead_chacha20poly1305_encrypt_00613840)
                              (auStack_620,&local_6c0,puVar9,uVar3,0,puVar13,0,puVar10,0,0,0,
                               PTR_s_PS_Msg04_00600a9c,*(undefined4 *)(param_2 + 0x1c));
            if (iVar2 != 0) goto LAB_00427884;
            (*(code *)PTR_free_0061286c)(puVar9);
            uVar8 = local_6bc;
            uVar14 = local_6c0;
            iVar2 = *(int *)(*(int *)(param_2 + 8) + 0x5c);
            lVar15 = (*(code *)PTR___umoddi3_006139e4)(local_6c0,local_6bc,0,0xff);
            if (lVar15 == 0) {
              (*(code *)PTR___udivdi3_0061294c)(uVar14,uVar8,0,0xff);
              iVar7 = extraout_v1_00;
            }
            else {
              (*(code *)PTR___udivdi3_0061294c)(uVar14,uVar8,0,0xff);
              iVar7 = extraout_v1 + 1;
            }
            iVar2 = iVar2 + 5 + uVar8 + iVar7 * 2;
            puVar9 = (undefined1 *)(*(code *)PTR_calloc_006148c0)(iVar2,1);
            if (puVar9 != (undefined1 *)0x0) {
              *puVar9 = 6;
              puVar9[1] = 1;
              puVar9[3] = 4;
              puVar9[2] = 4;
              puVar6 = PTR_memcpy_00614674;
              iVar7 = *(int *)(param_2 + 8);
              uVar14 = 0;
              puVar9[4] = (char)*(undefined4 *)(iVar7 + 0x5c);
              (*(code *)puVar6)(puVar9 + 5,**(undefined4 **)(param_2 + 0x2c),
                                *(undefined4 *)(iVar7 + 0x5c));
              puVar10 = puVar9 + 5 + *(int *)(*(int *)(param_2 + 8) + 0x5c);
              while( true ) {
                puVar6 = PTR_memcpy_00614674;
                if ((local_6c0 == 0) && (local_6bc <= uVar14)) break;
                *puVar10 = 5;
                uVar8 = local_6bc - uVar14;
                if ((local_6c0 != local_6bc < uVar8) || (0xff < uVar8)) {
                  uVar8 = 0xff;
                }
                puVar10[1] = (char)uVar8;
                (*(code *)puVar6)(puVar10 + 2,auStack_620 + uVar14,uVar8);
                uVar14 = uVar14 + uVar8;
                puVar10 = puVar10 + 2 + uVar8;
              }
              DAT_00600a50 = 5;
              goto LAB_004277e0;
            }
          }
          goto LAB_00427878;
        }
      }
      puVar9 = (undefined1 *)0x0;
      goto LAB_00427884;
    }
    bVar5 = DAT_00615650 + 1;
    if ((DAT_00615650 < 100) && (DAT_00615650 = bVar5, (uint)bVar5 % 3 == 0)) {
      (*(code *)PTR_sleep_0061454c)(3);
    }
    puVar9 = (undefined1 *)(*(code *)PTR_calloc_006148c0)(6,1);
    if (puVar9 != (undefined1 *)0x0) {
      *puVar9 = 6;
      puVar9[2] = 4;
      puVar9[3] = 7;
      puVar9[4] = 1;
      puVar9[5] = 2;
      puVar9[1] = 1;
      DAT_00600a50 = 1;
      iVar2 = 6;
LAB_004277e0:
      (*(code *)PTR_CreateSimpleHTTPMessageNoCopy_006131a4)
                ("application/pairing+tlv8",iVar2,&local_6d8,&local_6d4);
      unaff_s1 = (*(code *)PTR_calloc_006148c0)(iVar2 + local_6d4,1);
      (*(code *)PTR_memcpy_00614674)(unaff_s1,local_6d8,local_6d4);
      (*(code *)PTR_memcpy_00614674)(unaff_s1 + local_6d4,puVar9,iVar2);
      iVar2 = (*(code *)PTR_SocketSend_00612dcc)(param_1,unaff_s1,iVar2 + local_6d4);
      goto LAB_00427884;
    }
  }
LAB_00427878:
  iVar2 = -0x1a48;
LAB_00427884:
  (*(code *)PTR_SRP_free_00612de4)(*(undefined4 *)(param_2 + 0x24));
  (*(code *)PTR_cstr_free_00613448)(*(undefined4 *)(param_2 + 0x2c));
  if (local_6c8 != 0) {
    (*(code *)PTR_free_0061286c)();
  }
  if (local_6d0 != 0) {
    (*(code *)PTR_free_0061286c)();
  }
  if (unaff_s1 != 0) {
    (*(code *)PTR_free_0061286c)(unaff_s1);
  }
  if (puVar9 != (undefined1 *)0x0) {
    (*(code *)PTR_free_0061286c)(puVar9);
  }
  if (local_6d8 != 0) {
    (*(code *)PTR_free_0061286c)();
  }
  return iVar2;
}

