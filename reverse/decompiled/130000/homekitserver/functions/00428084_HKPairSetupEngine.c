/* HKPairSetupEngine @ 00428084 */

/* WARNING: Removing unreachable block (ram,0x00428694) */
/* WARNING: Removing unreachable block (ram,0x00428570) */
/* WARNING: Removing unreachable block (ram,0x00428548) */
/* WARNING: Removing unreachable block (ram,0x0042860c) */
/* WARNING: Removing unreachable block (ram,0x004286bc) */

int HKPairSetupEngine(undefined4 param_1,int param_2,int *param_3,int param_4,undefined4 param_5)

{
  bool bVar1;
  undefined *puVar2;
  int iVar3;
  byte *pbVar4;
  undefined4 uVar5;
  int iVar6;
  undefined1 *puVar7;
  int iVar8;
  undefined1 uVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  int iVar12;
  char local_48 [4];
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int *local_34;
  char *local_30;
  byte *local_2c;
  
  if (DAT_005ffbb0 == 3) {
    local_44 = *(int *)(param_2 + 0x104);
    iVar3 = *param_3;
    local_30 = local_48;
    local_38 = local_44 + *(int *)(param_2 + 0x10c);
    local_34 = &local_40;
    while (iVar6 = (*(code *)PTR_TLVGetNext_00612f0c)
                             (local_44,local_38,local_30,local_34,&local_3c,&local_44), iVar6 == 0)
    {
      if (local_48[0] == '\x04') {
        if (*(int *)(iVar3 + 0x10) == 0) {
          iVar6 = (*(code *)PTR_calloc_00613a18)(local_3c,1);
          *(int *)(iVar3 + 0x10) = iVar6;
          if (iVar6 == 0) goto LAB_00428af4;
          (*(code *)PTR_memcpy_006137d0)(iVar6,local_40,local_3c);
          *(int *)(iVar3 + 0x14) = local_3c;
        }
        else {
          iVar6 = (*(code *)PTR_realloc_00613690)
                            (*(int *)(iVar3 + 0x10),*(int *)(iVar3 + 0x14) + local_3c);
          *(int *)(iVar3 + 0x10) = iVar6;
          if (iVar6 == 0) goto LAB_00428af4;
          (*(code *)PTR_memcpy_006137d0)(iVar6 + *(int *)(iVar3 + 0x14),local_40,local_3c);
          *(int *)(iVar3 + 0x14) = *(int *)(iVar3 + 0x14) + local_3c;
        }
      }
      else if (local_48[0] == '\x06') {
        local_2c = (byte *)(*(code *)PTR_calloc_00613a18)(local_3c,1);
        if (local_2c == (byte *)0x0) goto LAB_00428af4;
        (*(code *)PTR_memcpy_006137d0)(local_2c,local_40,local_3c);
        pbVar4 = (byte *)0xffffe5af;
        if (DAT_005ffbb0 != *local_2c) goto LAB_00428ab0;
        (*(code *)PTR_free_006119dc)(local_2c);
      }
      else if (local_48[0] == '\x03') {
        if (*(int *)(iVar3 + 8) == 0) {
          iVar6 = (*(code *)PTR_calloc_00613a18)(local_3c,1);
          *(int *)(iVar3 + 8) = iVar6;
          if (iVar6 == 0) goto LAB_00428af4;
          (*(code *)PTR_memcpy_006137d0)(iVar6,local_40,local_3c);
          *(int *)(iVar3 + 0xc) = local_3c;
        }
        else {
          iVar6 = (*(code *)PTR_realloc_00613690)
                            (*(int *)(iVar3 + 8),*(int *)(iVar3 + 0xc) + local_3c);
          *(int *)(iVar3 + 8) = iVar6;
          if (iVar6 == 0) goto LAB_00428af4;
          (*(code *)PTR_memcpy_006137d0)(iVar6 + *(int *)(iVar3 + 0xc),local_40,local_3c);
          *(int *)(iVar3 + 0xc) = *(int *)(iVar3 + 0xc) + local_3c;
        }
      }
    }
    DAT_005ffbb0 = 4;
    pbVar4 = (byte *)FUN_00426bd0(param_1,*param_3,param_4);
  }
  else if (DAT_005ffbb0 == 5) {
    pbVar4 = (byte *)FUN_00427400(param_2,*param_3,param_4,param_5);
    if (pbVar4 != (byte *)0x0) goto LAB_00428ab0;
    pbVar4 = (byte *)FUN_00427998(param_1,param_3,param_4);
  }
  else {
    if (DAT_005ffbb0 != 1) {
      return 0;
    }
    local_3c = *(int *)(param_2 + 0x104);
    local_38 = local_3c + *(int *)(param_2 + 0x10c);
    HKCleanPairSetupInfo(param_3,param_4);
    if (*param_3 == 0) {
      iVar3 = (*(code *)PTR_calloc_00613a18)(1,0x2c);
      *param_3 = iVar3;
      if (iVar3 == 0) {
LAB_00428af4:
        pbVar4 = (byte *)0xffffe5b8;
        goto LAB_00428ab0;
      }
    }
    *(undefined1 *)(param_4 + 0x110) = 1;
    while (iVar3 = (*(code *)PTR_TLVGetNext_00612f0c)
                             (local_3c,local_38,local_48,&local_44,&local_40,&local_3c), iVar3 == 0)
    {
      local_2c = (byte *)(*(code *)PTR_calloc_00613a18)(local_40 + 1,1);
      if (local_2c == (byte *)0x0) goto LAB_00428af4;
      (*(code *)PTR_memcpy_006137d0)(local_2c,local_44,local_40);
      if (((local_48[0] != '\0') && (local_48[0] == '\x06')) &&
         (pbVar4 = (byte *)0xffffe5af, DAT_005ffbb0 != *local_2c)) goto LAB_00428ab0;
      (*(code *)PTR_free_006119dc)(local_2c);
    }
    DAT_005ffbb0 = 2;
    iVar3 = *param_3;
    local_40 = 0;
    local_44 = 0;
    if (*(int *)(iVar3 + 4) == 0) {
      uVar5 = (*(code *)PTR_calloc_00613a18)(1,0x60);
      *(undefined4 *)(iVar3 + 4) = uVar5;
    }
    iVar6 = (*(code *)PTR_Phytrex_HMPairListIsEmpty_00613bf8)();
    if (iVar6 == 0) {
      if (DAT_006147b0 < 100) {
        **(undefined4 **)(iVar3 + 4) = 4;
        iVar8 = *(int *)(iVar3 + 4);
        iVar6 = (*(code *)PTR_strlen_006130b4)(PTR_s_Pair_Setup_005ffbc0);
        uVar5 = (*(code *)PTR_calloc_00613a18)(iVar6 + 2,1);
        *(undefined4 *)(iVar8 + 0x24) = uVar5;
        iVar6 = (*(code *)PTR_strlen_006130b4)(PTR_s_Pair_Setup_005ffbc0);
        (*(code *)PTR_memset_0061223c)(*(undefined4 *)(*(int *)(iVar3 + 4) + 0x24),0,iVar6 + 2);
        (*(code *)PTR_strcpy_006115d0)
                  (*(undefined4 *)(*(int *)(iVar3 + 4) + 0x24),PTR_s_Pair_Setup_005ffbc0);
        *(undefined4 *)(*(int *)(iVar3 + 4) + 0x2c) = 0x10;
        iVar6 = *(int *)(iVar3 + 4);
        uVar5 = (*(code *)PTR_calloc_00613a18)(*(undefined4 *)(iVar6 + 0x2c),1);
        *(undefined4 *)(iVar6 + 0x28) = uVar5;
        (*(code *)PTR_t_random_0061166c)
                  (*(undefined4 *)(*(int *)(iVar3 + 4) + 0x28),
                   *(undefined4 *)(*(int *)(iVar3 + 4) + 0x2c));
        (*(code *)PTR_SRP_initialize_library_00611b60)();
        *(undefined4 *)(*(int *)(iVar3 + 4) + 0x18) = 0x180;
        *(undefined **)(*(int *)(iVar3 + 4) + 0x14) = &DAT_005ac060;
        puVar2 = PTR_SRP6a_server_method_006126a8;
        *(undefined4 *)(*(int *)(iVar3 + 4) + 0x20) = 1;
        *(undefined **)(*(int *)(iVar3 + 4) + 0x1c) = &DAT_005ac1e0;
        uVar5 = (*(code *)puVar2)();
        uVar5 = (*(code *)PTR_SRP_new_00611ddc)(uVar5);
        *(undefined4 *)(iVar3 + 0x20) = uVar5;
        (*(code *)PTR_SRP_set_username_006120d8)(uVar5,*(undefined4 *)(*(int *)(iVar3 + 4) + 0x24));
        iVar6 = *(int *)(iVar3 + 4);
        (*(code *)PTR_SRP_set_params_00612e18)
                  (*(undefined4 *)(iVar3 + 0x20),*(undefined4 *)(iVar6 + 0x14),
                   *(undefined4 *)(iVar6 + 0x18),*(undefined4 *)(iVar6 + 0x1c),
                   *(undefined4 *)(iVar6 + 0x20),*(undefined4 *)(iVar6 + 0x28),
                   *(undefined4 *)(iVar6 + 0x2c));
        (*(code *)PTR_SRP_set_auth_password_00611ff0)(*(undefined4 *)(iVar3 + 0x20),DAT_006147b4);
        (*(code *)PTR_SRP_gen_pub_00612f58)(*(undefined4 *)(iVar3 + 0x20),iVar3 + 0x24);
        puVar2 = PTR_calloc_00613a18;
        *(undefined4 *)(*(int *)(iVar3 + 4) + 0x34) = *(undefined4 *)(*(int *)(iVar3 + 0x24) + 4);
        iVar6 = *(int *)(iVar3 + 4);
        uVar5 = (*(code *)puVar2)(*(undefined4 *)(iVar6 + 0x34),1);
        *(undefined4 *)(iVar6 + 0x30) = uVar5;
        (*(code *)PTR_memcpy_006137d0)
                  (*(undefined4 *)(*(int *)(iVar3 + 4) + 0x30),**(undefined4 **)(iVar3 + 0x24),
                   *(undefined4 *)(*(int *)(iVar3 + 4) + 0x34));
        iVar8 = *(int *)(*(int *)(iVar3 + 4) + 0x34);
        iVar6 = 3;
        iVar12 = iVar8 / 0xff;
        while (bVar1 = 0 < iVar12, iVar12 = iVar12 + -1, bVar1) {
          iVar6 = iVar6 + 0x101;
        }
        iVar6 = *(int *)(*(int *)(iVar3 + 4) + 0x2c) + 4 + iVar8 % 0xff + iVar6;
        puVar7 = (undefined1 *)(*(code *)PTR_calloc_00613a18)(iVar6,1);
        if (puVar7 != (undefined1 *)0x0) {
          *puVar7 = 6;
          puVar7[1] = 1;
          puVar7[3] = 2;
          puVar7[2] = 2;
          puVar2 = PTR_memcpy_006137d0;
          puVar7[4] = (char)*(undefined4 *)(*(int *)(iVar3 + 4) + 0x2c);
          (*(code *)puVar2)(puVar7 + 5,*(undefined4 *)(*(int *)(iVar3 + 4) + 0x28),
                            *(undefined4 *)(*(int *)(iVar3 + 4) + 0x2c));
          iVar12 = *(int *)(*(int *)(iVar3 + 4) + 0x34) / 0xff;
          puVar11 = puVar7 + 5 + *(int *)(*(int *)(iVar3 + 4) + 0x2c);
          for (iVar8 = 0; puVar2 = PTR_memcpy_006137d0, puVar10 = puVar11 + 2, iVar8 < iVar12;
              iVar8 = iVar8 + 1) {
            *puVar11 = 3;
            puVar11[1] = 0xff;
            puVar11 = puVar11 + 0x101;
            (*(code *)puVar2)(puVar10,*(int *)(*(int *)(iVar3 + 4) + 0x30) + iVar8 * 0xff,0xff);
          }
          *puVar11 = 3;
          puVar11[1] = (char)(*(int *)(*(int *)(iVar3 + 4) + 0x34) % 0xff);
          (*(code *)puVar2)(puVar10,*(int *)(*(int *)(iVar3 + 4) + 0x30) + iVar12 * 0xff,
                            *(int *)(*(int *)(iVar3 + 4) + 0x34) % 0xff);
          goto LAB_004286d4;
        }
      }
      else {
        puVar7 = (undefined1 *)(*(code *)PTR_calloc_00613a18)(6,1);
        if (puVar7 != (undefined1 *)0x0) {
          *puVar7 = 6;
          puVar7[2] = 2;
          puVar7[3] = 7;
          puVar7[4] = 1;
          uVar9 = 5;
          goto LAB_004282f4;
        }
      }
LAB_0042877c:
      iVar12 = 0;
      iVar8 = -0x1a48;
    }
    else {
      puVar7 = (undefined1 *)(*(code *)PTR_calloc_00613a18)(6,1);
      if (puVar7 == (undefined1 *)0x0) goto LAB_0042877c;
      *puVar7 = 6;
      puVar7[2] = 2;
      puVar7[3] = 7;
      puVar7[4] = 1;
      uVar9 = 4;
LAB_004282f4:
      puVar7[5] = uVar9;
      puVar7[1] = 1;
      iVar6 = 6;
LAB_004286d4:
      iVar8 = (*(code *)PTR_CreateSimpleHTTPMessageNoCopy_00612314)
                        ("application/pairing+tlv8",iVar6,&local_40,&local_44);
      iVar12 = 0;
      if (iVar8 == 0) {
        iVar12 = (*(code *)PTR_calloc_00613a18)(iVar6 + local_44,1);
        (*(code *)PTR_memcpy_006137d0)(iVar12,local_40,local_44);
        (*(code *)PTR_memcpy_006137d0)(iVar12 + local_44,puVar7,iVar6);
        iVar8 = (*(code *)PTR_SocketSend_00611f3c)(param_1,iVar12,iVar6 + local_44);
        if (iVar8 == 0) {
          DAT_005ffbb0 = 3;
        }
      }
    }
    local_2c = (byte *)iVar8;
    if (*(int *)(iVar3 + 0x24) != 0) {
      (*(code *)PTR_cstr_free_006125b4)();
    }
    if (puVar7 != (undefined1 *)0x0) {
      (*(code *)PTR_free_006119dc)(puVar7);
    }
    if (local_40 != 0) {
      (*(code *)PTR_free_006119dc)();
    }
    pbVar4 = local_2c;
    if (iVar12 != 0) {
      (*(code *)PTR_free_006119dc)(iVar12);
      pbVar4 = local_2c;
    }
  }
  if (pbVar4 == (byte *)0x0) {
    return 0;
  }
LAB_00428ab0:
  DAT_005ffbb0 = 1;
  local_2c = pbVar4;
  HKCleanPairSetupInfo(param_3,param_4);
  return (int)local_2c;
}

