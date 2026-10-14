/* HKPairSetupEngine @ 00428600 */

/* WARNING: Removing unreachable block (ram,0x00428dc4) */
/* WARNING: Removing unreachable block (ram,0x00428ca0) */
/* WARNING: Removing unreachable block (ram,0x00428c78) */
/* WARNING: Removing unreachable block (ram,0x00428d3c) */
/* WARNING: Removing unreachable block (ram,0x00428dec) */

int HKPairSetupEngine(undefined4 param_1,int param_2,int *param_3,int param_4,undefined4 param_5)

{
  bool bVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined1 *puVar7;
  int iVar8;
  int iVar9;
  undefined1 *puVar10;
  code *pcVar11;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int *local_34;
  int *local_30;
  byte *local_2c;
  
  if ((*(char *)(param_4 + 0x110) != '\0') &&
     (((char *)*param_3 == (char *)0x0 || (*(char *)*param_3 == '\0')))) {
    (*(code *)PTR_sleep_0061454c)(2);
    local_48 = 0;
    local_3c = 0;
    puVar3 = (undefined1 *)(*(code *)PTR_calloc_006148c0)(6,1);
    puVar2 = PTR_CreateSimpleHTTPMessageNoCopy_006131a4;
    if (puVar3 == (undefined1 *)0x0) {
      local_2c = (byte *)0xffffe5b8;
      iVar8 = 0;
    }
    else {
      *puVar3 = 6;
      puVar3[2] = 2;
      puVar3[4] = 1;
      puVar3[5] = 7;
      puVar3[1] = 1;
      puVar3[3] = 7;
      local_2c = (byte *)(*(code *)puVar2)("application/pairing+tlv8",6,&local_48,&local_3c);
      iVar8 = 0;
      if (local_2c == (byte *)0x0) {
        iVar8 = (*(code *)PTR_calloc_006148c0)(local_3c + 6,1);
        (*(code *)PTR_memcpy_00614674)(iVar8,local_48,local_3c);
        (*(code *)PTR_memcpy_00614674)(iVar8 + local_3c,puVar3,6);
        local_2c = (byte *)(*(code *)PTR_SocketSend_00612dcc)(param_1,iVar8,local_3c + 6);
      }
      (*(code *)PTR_free_0061286c)(puVar3);
    }
    if (local_48 != 0) {
      (*(code *)PTR_free_0061286c)();
    }
    if (iVar8 != 0) {
      (*(code *)PTR_free_0061286c)(iVar8);
    }
    iVar5 = (int)local_2c;
    if (local_2c == (byte *)0x0) {
      return 0;
    }
    goto LAB_004291e8;
  }
  if (DAT_00600a50 == 3) {
    local_44 = *(int *)(param_2 + 0x104);
    iVar8 = *param_3;
    local_30 = &local_48;
    local_38 = local_44 + *(int *)(param_2 + 0x10c);
    local_34 = &local_40;
    while (iVar5 = (*(code *)PTR_TLVGetNext_00613da4)
                             (local_44,local_38,local_30,local_34,&local_3c,&local_44), iVar5 == 0)
    {
      if (local_48._0_1_ == '\x04') {
        if (*(int *)(iVar8 + 0x14) == 0) {
          iVar5 = (*(code *)PTR_calloc_006148c0)(local_3c,1);
          *(int *)(iVar8 + 0x14) = iVar5;
          if (iVar5 == 0) goto LAB_0042924c;
          (*(code *)PTR_memcpy_00614674)(iVar5,local_40,local_3c);
          *(int *)(iVar8 + 0x18) = local_3c;
        }
        else {
          iVar5 = (*(code *)PTR_realloc_00614534)
                            (*(int *)(iVar8 + 0x14),*(int *)(iVar8 + 0x18) + local_3c);
          *(int *)(iVar8 + 0x14) = iVar5;
          if (iVar5 == 0) goto LAB_0042924c;
          (*(code *)PTR_memcpy_00614674)(iVar5 + *(int *)(iVar8 + 0x18),local_40,local_3c);
          *(int *)(iVar8 + 0x18) = *(int *)(iVar8 + 0x18) + local_3c;
        }
      }
      else if (local_48._0_1_ == '\x06') {
        local_2c = (byte *)(*(code *)PTR_calloc_006148c0)(local_3c,1);
        if (local_2c == (byte *)0x0) goto LAB_0042924c;
        (*(code *)PTR_memcpy_00614674)(local_2c,local_40,local_3c);
        iVar5 = -0x1a51;
        if (DAT_00600a50 != *local_2c) goto LAB_00429258;
        (*(code *)PTR_free_0061286c)(local_2c);
      }
      else if (local_48._0_1_ == '\x03') {
        if (*(int *)(iVar8 + 0xc) == 0) {
          iVar5 = (*(code *)PTR_calloc_006148c0)(local_3c,1);
          *(int *)(iVar8 + 0xc) = iVar5;
          if (iVar5 == 0) goto LAB_0042924c;
          (*(code *)PTR_memcpy_00614674)(iVar5,local_40,local_3c);
          *(int *)(iVar8 + 0x10) = local_3c;
        }
        else {
          iVar5 = (*(code *)PTR_realloc_00614534)
                            (*(int *)(iVar8 + 0xc),*(int *)(iVar8 + 0x10) + local_3c);
          *(int *)(iVar8 + 0xc) = iVar5;
          if (iVar5 == 0) goto LAB_0042924c;
          (*(code *)PTR_memcpy_00614674)(iVar5 + *(int *)(iVar8 + 0x10),local_40,local_3c);
          *(int *)(iVar8 + 0x10) = *(int *)(iVar8 + 0x10) + local_3c;
        }
      }
    }
    DAT_00600a50 = 4;
    iVar5 = FUN_00427150(param_1,*param_3,param_4);
LAB_004291d0:
    if (iVar5 == 0) {
      return 0;
    }
  }
  else {
    if (DAT_00600a50 != 5) {
      if (DAT_00600a50 != 1) {
        return 0;
      }
      local_3c = *(int *)(param_2 + 0x104);
      local_38 = local_3c + *(int *)(param_2 + 0x10c);
      HKCleanPairSetupInfo(param_3,param_4);
      if (*param_3 == 0) {
        iVar8 = (*(code *)PTR_calloc_006148c0)(1,0x30);
        *param_3 = iVar8;
        if (iVar8 != 0) goto LAB_00428830;
LAB_0042924c:
        iVar5 = -0x1a48;
      }
      else {
LAB_00428830:
        *(undefined1 *)*param_3 = 1;
        *(undefined1 *)(param_4 + 0x110) = 1;
        while (iVar8 = (*(code *)PTR_TLVGetNext_00613da4)
                                 (local_3c,local_38,&local_48,&local_44,&local_40,&local_3c),
              iVar8 == 0) {
          local_2c = (byte *)(*(code *)PTR_calloc_006148c0)(local_40 + 1,1);
          if (local_2c == (byte *)0x0) goto LAB_0042924c;
          (*(code *)PTR_memcpy_00614674)(local_2c,local_44,local_40);
          if (((local_48._0_1_ != '\0') && (local_48._0_1_ == '\x06')) &&
             (iVar5 = -0x1a51, DAT_00600a50 != *local_2c)) goto LAB_00429258;
          (*(code *)PTR_free_0061286c)(local_2c);
        }
        DAT_00600a50 = 2;
        iVar8 = *param_3;
        local_40 = 0;
        local_44 = 0;
        if (*(int *)(iVar8 + 8) == 0) {
          uVar4 = (*(code *)PTR_calloc_006148c0)(1,0x60);
          *(undefined4 *)(iVar8 + 8) = uVar4;
        }
        iVar5 = (*(code *)PTR_Phytrex_HMPairListIsEmpty_00614aa0)();
        if (iVar5 == 0) {
          if (DAT_00615650 < 100) {
            **(undefined4 **)(iVar8 + 8) = 4;
            iVar9 = *(int *)(iVar8 + 8);
            iVar5 = (*(code *)PTR_strlen_00613f4c)(PTR_s_Pair_Setup_00600a60);
            uVar4 = (*(code *)PTR_calloc_006148c0)(iVar5 + 2,1);
            *(undefined4 *)(iVar9 + 0x24) = uVar4;
            iVar5 = (*(code *)PTR_strlen_00613f4c)(PTR_s_Pair_Setup_00600a60);
            (*(code *)PTR_memset_006130cc)(*(undefined4 *)(*(int *)(iVar8 + 8) + 0x24),0,iVar5 + 2);
            (*(code *)PTR_strcpy_00612464)
                      (*(undefined4 *)(*(int *)(iVar8 + 8) + 0x24),PTR_s_Pair_Setup_00600a60);
            *(undefined4 *)(*(int *)(iVar8 + 8) + 0x2c) = 0x10;
            iVar5 = *(int *)(iVar8 + 8);
            uVar4 = (*(code *)PTR_calloc_006148c0)(*(undefined4 *)(iVar5 + 0x2c),1);
            *(undefined4 *)(iVar5 + 0x28) = uVar4;
            (*(code *)PTR_t_random_006124fc)
                      (*(undefined4 *)(*(int *)(iVar8 + 8) + 0x28),
                       *(undefined4 *)(*(int *)(iVar8 + 8) + 0x2c));
            (*(code *)PTR_SRP_initialize_library_006129f0)();
            *(undefined4 *)(*(int *)(iVar8 + 8) + 0x18) = 0x180;
            *(undefined **)(*(int *)(iVar8 + 8) + 0x14) = &DAT_005aceb0;
            puVar2 = PTR_SRP6a_server_method_0061353c;
            *(undefined4 *)(*(int *)(iVar8 + 8) + 0x20) = 1;
            *(undefined **)(*(int *)(iVar8 + 8) + 0x1c) = &DAT_005ad030;
            uVar4 = (*(code *)puVar2)();
            uVar4 = (*(code *)PTR_SRP_new_00612c6c)(uVar4);
            *(undefined4 *)(iVar8 + 0x24) = uVar4;
            (*(code *)PTR_SRP_set_username_00612f68)
                      (uVar4,*(undefined4 *)(*(int *)(iVar8 + 8) + 0x24));
            iVar5 = *(int *)(iVar8 + 8);
            (*(code *)PTR_SRP_set_params_00613cb0)
                      (*(undefined4 *)(iVar8 + 0x24),*(undefined4 *)(iVar5 + 0x14),
                       *(undefined4 *)(iVar5 + 0x18),*(undefined4 *)(iVar5 + 0x1c),
                       *(undefined4 *)(iVar5 + 0x20),*(undefined4 *)(iVar5 + 0x28),
                       *(undefined4 *)(iVar5 + 0x2c));
            (*(code *)PTR_SRP_set_auth_password_00612e80)
                      (*(undefined4 *)(iVar8 + 0x24),DAT_00615654);
            (*(code *)PTR_SRP_gen_pub_00613df0)(*(undefined4 *)(iVar8 + 0x24),iVar8 + 0x28);
            puVar2 = PTR_calloc_006148c0;
            *(undefined4 *)(*(int *)(iVar8 + 8) + 0x34) =
                 *(undefined4 *)(*(int *)(iVar8 + 0x28) + 4);
            iVar5 = *(int *)(iVar8 + 8);
            uVar4 = (*(code *)puVar2)(*(undefined4 *)(iVar5 + 0x34),1);
            *(undefined4 *)(iVar5 + 0x30) = uVar4;
            (*(code *)PTR_memcpy_00614674)
                      (*(undefined4 *)(*(int *)(iVar8 + 8) + 0x30),**(undefined4 **)(iVar8 + 0x28),
                       *(undefined4 *)(*(int *)(iVar8 + 8) + 0x34));
            iVar9 = *(int *)(*(int *)(iVar8 + 8) + 0x34);
            iVar5 = 3;
            iVar6 = iVar9 / 0xff;
            while (bVar1 = 0 < iVar6, iVar6 = iVar6 + -1, bVar1) {
              iVar5 = iVar5 + 0x101;
            }
            iVar5 = *(int *)(*(int *)(iVar8 + 8) + 0x2c) + 4 + iVar9 % 0xff + iVar5;
            puVar3 = (undefined1 *)(*(code *)PTR_calloc_006148c0)(iVar5,1);
            if (puVar3 != (undefined1 *)0x0) {
              *puVar3 = 6;
              puVar3[1] = 1;
              puVar3[3] = 2;
              puVar3[2] = 2;
              puVar2 = PTR_memcpy_00614674;
              puVar3[4] = (char)*(undefined4 *)(*(int *)(iVar8 + 8) + 0x2c);
              (*(code *)puVar2)(puVar3 + 5,*(undefined4 *)(*(int *)(iVar8 + 8) + 0x28),
                                *(undefined4 *)(*(int *)(iVar8 + 8) + 0x2c));
              iVar6 = *(int *)(*(int *)(iVar8 + 8) + 0x34) / 0xff;
              puVar10 = puVar3 + 5 + *(int *)(*(int *)(iVar8 + 8) + 0x2c);
              for (iVar9 = 0; puVar2 = PTR_memcpy_00614674, puVar7 = puVar10 + 2, iVar9 < iVar6;
                  iVar9 = iVar9 + 1) {
                *puVar10 = 3;
                puVar10[1] = 0xff;
                puVar10 = puVar10 + 0x101;
                (*(code *)puVar2)(puVar7,*(int *)(*(int *)(iVar8 + 8) + 0x30) + iVar9 * 0xff,0xff);
              }
              *puVar10 = 3;
              puVar10[1] = (char)(*(int *)(*(int *)(iVar8 + 8) + 0x34) % 0xff);
              (*(code *)puVar2)(puVar7,*(int *)(*(int *)(iVar8 + 8) + 0x30) + iVar6 * 0xff,
                                *(int *)(*(int *)(iVar8 + 8) + 0x34) % 0xff);
              iVar6 = (*(code *)PTR_CreateSimpleHTTPMessageNoCopy_006131a4)
                                ("application/pairing+tlv8",iVar5,&local_40,&local_44);
              iVar9 = 0;
              if (iVar6 == 0) goto LAB_00428e28;
              goto LAB_00428eb0;
            }
          }
          else {
            puVar3 = (undefined1 *)(*(code *)PTR_calloc_006148c0)(6,1);
            if (puVar3 != (undefined1 *)0x0) {
              *puVar3 = 6;
              puVar3[2] = 2;
              pcVar11 = (code *)PTR_CreateHTTPRespondMessageNoCopy_00613b88;
              puVar3[3] = 7;
              puVar3[4] = 1;
              puVar3[5] = 5;
              goto LAB_004289fc;
            }
          }
LAB_00428ea8:
          iVar9 = 0;
          iVar6 = -0x1a48;
        }
        else {
          puVar3 = (undefined1 *)(*(code *)PTR_calloc_006148c0)(6,1);
          if (puVar3 == (undefined1 *)0x0) goto LAB_00428ea8;
          puVar3[2] = 2;
          pcVar11 = (code *)PTR_CreateHTTPRespondMessageNoCopy_00613b88;
          puVar3[3] = 7;
          puVar3[4] = 1;
          puVar3[5] = 6;
          *puVar3 = 6;
LAB_004289fc:
          puVar3[1] = 1;
          iVar6 = (*pcVar11)(0x1ad,"application/pairing+tlv8",6,&local_40,&local_44);
          iVar9 = 0;
          if (iVar6 == 0) {
            iVar5 = 6;
LAB_00428e28:
            iVar9 = (*(code *)PTR_calloc_006148c0)(iVar5 + local_44,1);
            (*(code *)PTR_memcpy_00614674)(iVar9,local_40,local_44);
            (*(code *)PTR_memcpy_00614674)(iVar9 + local_44,puVar3,iVar5);
            iVar6 = (*(code *)PTR_SocketSend_00612dcc)(param_1,iVar9,iVar5 + local_44);
            if (iVar6 == 0) {
              DAT_00600a50 = 3;
            }
          }
        }
LAB_00428eb0:
        local_2c = (byte *)iVar6;
        if (*(int *)(iVar8 + 0x28) != 0) {
          (*(code *)PTR_cstr_free_00613448)();
        }
        if (puVar3 != (undefined1 *)0x0) {
          (*(code *)PTR_free_0061286c)(puVar3);
        }
        if (local_40 != 0) {
          (*(code *)PTR_free_0061286c)();
        }
        if (iVar9 != 0) {
          (*(code *)PTR_free_0061286c)(iVar9);
        }
        iVar5 = (int)local_2c;
        if (local_2c == (byte *)0x0) {
          return 0;
        }
      }
LAB_00429258:
      DAT_00600a50 = 1;
      goto LAB_004291e8;
    }
    iVar5 = FUN_00427980(param_2,*param_3,param_4,param_5);
    if (iVar5 == 0) {
      iVar5 = FUN_00427f14(param_1,param_3,param_4);
      goto LAB_004291d0;
    }
  }
  DAT_00600a50 = 1;
LAB_004291e8:
  local_2c = (byte *)iVar5;
  HKCleanPairSetupInfo(param_3,param_4);
  return (int)local_2c;
}

