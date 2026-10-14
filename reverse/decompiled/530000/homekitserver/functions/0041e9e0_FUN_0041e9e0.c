/* FUN_0041e9e0 @ 0041e9e0 */

int * FUN_0041e9e0(undefined4 param_1,int param_2,int param_3,int param_4,int param_5)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  undefined1 *puVar7;
  undefined4 *puVar8;
  int ***pppiVar9;
  undefined1 *puVar10;
  undefined1 uVar14;
  int *piVar11;
  int *piVar12;
  int iVar13;
  int ****ppppiVar15;
  int ***pppiVar16;
  char *pcVar17;
  int unaff_s3;
  undefined1 *puVar18;
  int iVar19;
  int ****ppppiVar20;
  undefined4 ****ppppuVar21;
  byte *pbVar22;
  undefined4 ***pppuVar23;
  code *pcVar24;
  undefined8 uVar25;
  char *pcVar26;
  undefined4 uVar27;
  undefined4 ***local_1c8;
  undefined4 local_1c4;
  int local_1c0;
  undefined4 local_1bc;
  int local_1b8;
  undefined4 **local_1b4 [2];
  int ***local_1ac;
  int ***local_1a8;
  int local_1a4;
  undefined4 **local_1a0;
  byte local_19c;
  undefined1 *local_198;
  undefined4 local_194;
  char local_190;
  undefined1 auStack_15c [100];
  undefined4 auStack_f8 [16];
  undefined1 auStack_b8 [32];
  undefined1 local_98;
  int *local_50;
  undefined4 *local_4c;
  undefined1 *local_48;
  undefined1 *local_44;
  undefined4 **local_40;
  int *local_3c;
  undefined4 *local_38;
  int *local_34;
  byte *local_30;
  
  piVar4 = (int *)(*(code *)PTR_HKSocketReadHTTPHeader_006146cc)
                            (param_1,param_2,*(undefined4 *)(param_3 + 0xc));
  if (piVar4 == (int *)0xffffe59f) {
    uVar6 = (*(code *)PTR_pthread_self_006134a8)();
    (*(code *)PTR_pthread_kill_00613d24)(uVar6,3);
    goto LAB_0041fd04;
  }
  if ((piVar4 != (int *)0x0) ||
     (piVar4 = (int *)(*(code *)PTR_HKSocketReadHTTPBody_006138bc)
                                (param_1,param_2,*(undefined4 *)(param_3 + 0xc)),
     piVar4 != (int *)0x0)) goto LAB_0041fd04;
  iVar5 = (*(code *)PTR_HTTPHeaderMatchURL_00612574)(param_2,"/pair-setup");
  if (iVar5 == 0) {
    piVar4 = (int *)(*(code *)PTR_HKPairSetupEngine_00613918)
                              (param_1,param_2,param_3,param_4,param_5);
    if (piVar4 == (int *)0x0) {
      piVar4 = (int *)0xffffe59f;
      if (*(char *)(param_4 + 0x110) != '\0') {
        piVar4 = (int *)0x0;
      }
    }
    else {
      FUN_0041c9b8(param_1,400,"application/pairing+tlv8",0xfffeecf3,0,0);
    }
    goto LAB_0041fd04;
  }
  iVar5 = (*(code *)PTR_HTTPHeaderMatchURL_00612574)(param_2,"/pair-verify");
  if (iVar5 == 0) {
    if (*(int *)(param_3 + 4) == 0) {
      iVar5 = (*(code *)PTR_HKCreatePairVerifyInfo_00613394)();
      *(int *)(param_3 + 4) = iVar5;
      if (iVar5 == 0) {
LAB_0041fd00:
        piVar4 = (int *)0xffffe5b8;
        goto LAB_0041fd04;
      }
    }
    piVar4 = (int *)(*(code *)PTR_HKPairVerifyEngine_0061499c)
                              (param_1,param_2,*(undefined4 *)(param_3 + 4),param_4,param_5);
    puVar3 = PTR_memcpy_00614674;
    if (piVar4 == (int *)0x0) {
      if (**(char **)(param_3 + 4) == '\0') goto LAB_0041fd04;
      **(undefined1 **)(param_3 + 0xc) = 1;
      (*(code *)puVar3)(*(int *)(param_3 + 0xc) + 0x21,*(undefined4 *)(*(int *)(param_3 + 4) + 0x24)
                        ,0x20);
      (*(code *)PTR_memcpy_00614674)
                (*(int *)(param_3 + 0xc) + 1,*(undefined4 *)(*(int *)(param_3 + 4) + 0x20),0x20);
    }
    (*(code *)PTR_HKCleanPairVerifyInfo_00612dc8)(param_3 + 4);
    goto LAB_0041fd04;
  }
  iVar5 = (*(code *)PTR_HTTPHeaderMatchURL_00612574)(param_2,"/accessories");
  if (iVar5 == 0) {
    (*(code *)PTR_puts_00612670)("[discovery]");
    piVar4 = (int *)FUN_0041d478(param_4);
    if (piVar4 != (int *)0x0) goto LAB_0041fd04;
    local_34 = (int *)(*(code *)PTR_json_object_to_json_string_00612474)(DAT_00614be4);
    uVar6 = (*(code *)PTR_strlen_00613f4c)(local_34);
    pcVar17 = "Read Data base Error";
    pbVar22 = (byte *)0x0;
    piVar4 = local_34;
LAB_0041f310:
    piVar4 = (int *)FUN_0041caf4(param_1,pbVar22,pcVar17,piVar4,uVar6,param_3);
    (*(code *)PTR_json_object_put_00612524)(DAT_00614be4);
    DAT_00614be4 = 0;
    goto LAB_0041fd04;
  }
  iVar5 = (*(code *)PTR_HTTPHeaderMatchPartialURL_00613e74)(param_2,"/characteristics");
  if (iVar5 == 0) {
    iVar5 = (*(code *)PTR_HTTPHeaderMatchURL_00612574)(param_2,"/pairings");
    if (iVar5 == 0) {
      (*(code *)PTR_puts_00612670)("[HTTP Header] Get kPAIRINGS");
      if (**(char **)(param_3 + 0xc) != '\0') {
        if (*(int *)(param_3 + 8) != 0) {
LAB_0041f3b8:
          local_1c0 = *(int *)(param_2 + 0x104);
          local_50 = (int *)(local_1c0 + *(int *)(param_2 + 0x10c));
          local_4c = &local_1bc;
          iVar5 = *(int *)(param_3 + 8);
switchD_0041f450_caseD_2:
          iVar19 = (*(code *)PTR_TLVGetNext_00613da4)
                             (local_1c0,local_50,&local_1c8,local_4c,&local_1b8,&local_1c0);
          if (iVar19 != 0) goto code_r0x0041f4f0;
          pbVar22 = (byte *)(*(code *)PTR_calloc_006148c0)(local_1b8 + 1,1);
          if (pbVar22 == (byte *)0x0) {
            piVar4 = (int *)0xffffe5b8;
            goto LAB_0041fbd0;
          }
          local_30 = pbVar22;
          (*(code *)PTR_memcpy_00614674)(pbVar22,local_1bc,local_1b8);
          puVar3 = PTR_free_0061286c;
          switch((uint)local_1c8 >> 0x18) {
          case 0:
            *(uint *)(iVar5 + 8) = (uint)*local_30;
            break;
          case 1:
            *(byte **)(iVar5 + 0xc) = local_30;
          default:
            goto switchD_0041f450_caseD_2;
          case 3:
            *(byte **)(iVar5 + 0x10) = local_30;
            goto switchD_0041f450_caseD_2;
          case 6:
            if (*(uint *)(iVar5 + 4) != (uint)*local_30) {
              piVar4 = (int *)0xffffe5af;
              goto LAB_0041fbd0;
            }
            break;
          case 0xb:
            *(byte *)(iVar5 + 0x14) = *local_30;
          }
          (*(code *)puVar3)(local_30);
          goto switchD_0041f450_caseD_2;
        }
        iVar5 = FUN_0041c630();
        *(int *)(param_3 + 8) = iVar5;
        if (iVar5 != 0) goto LAB_0041f3b8;
        goto LAB_0041fd00;
      }
LAB_0041fca0:
      pbVar22 = (byte *)0xfffeecf3;
    }
    else {
      iVar5 = (*(code *)PTR_HTTPHeaderMatchURL_00612574)(param_2,"/identify");
      if (iVar5 != 0) goto LAB_0041fca0;
      if (**(char **)(param_3 + 0xc) == '\0') {
        iVar5 = (*(code *)PTR_Phytrex_HMPairListIsEmpty_00614aa0)(param_1);
        if (iVar5 == 0) {
          (*(code *)PTR_HKUserTriggerIdentify_00613c44)();
          pcVar17 = "application/pairing+tlv8";
          uVar6 = 0xcc;
          pcVar26 = (char *)0x0;
          uVar27 = 0;
        }
        else {
          pcVar26 = "{\"status\":-70401}";
          pcVar17 = "application/hap+json";
          uVar6 = 400;
          uVar27 = 0x11;
        }
        piVar4 = (int *)FUN_0041c9b8(param_1,uVar6,pcVar17,0,pcVar26,uVar27);
        goto LAB_0041fd04;
      }
      pbVar22 = (byte *)0xfffeecff;
    }
    pcVar17 = "Unsupport HTTP method";
  }
  else {
    iVar5 = (*(code *)PTR_HTTPHeaderMatchMethod_00613a98)(param_2,&DAT_005ac558);
    if (iVar5 != -0x1a47) {
      local_1ac = (int ***)&local_1ac;
      local_1a8 = (int ***)&local_1ac;
      iVar5 = (*(code *)PTR_HTTPHeaderMatchPartialURL_00613e74)(param_2,"/characteristics");
      iVar19 = iVar5 + 0x14;
      if (iVar5 == 0) {
        iVar19 = 0;
      }
      puVar7 = (undefined1 *)(*(code *)PTR_strchr_006127e8)(iVar19,0x20);
      if (puVar7 != (undefined1 *)0x0) {
        *puVar7 = 0;
      }
      iVar5 = (*(code *)PTR_strtok_0061379c)(iVar19,",");
      while (iVar5 != 0) {
        (*(code *)PTR_memset_006130cc)(auStack_15c,0,100);
        (*(code *)PTR_strcpy_00612464)(auStack_15c,iVar5);
        local_30 = (byte *)(*(code *)PTR_strchr_006127e8)(iVar5,0x2e);
        (*(code *)PTR_memset_006130cc)(auStack_15c,0,100);
        puVar8 = (undefined4 *)(*(code *)PTR_calloc_006148c0)(0x10,1);
        uVar6 = (*(code *)PTR_atoi_00612850)(iVar5);
        *puVar8 = uVar6;
        uVar6 = (*(code *)PTR_atoi_00612850)(local_30 + 1);
        puVar3 = PTR_strtok_0061379c;
        puVar8[1] = uVar6;
        local_1ac[1] = (int **)(puVar8 + 2);
        puVar8[2] = local_1ac;
        puVar8[3] = &local_1ac;
        local_1ac = (int ***)(puVar8 + 2);
        iVar5 = (*(code *)puVar3)(0,",");
      }
      local_1c8 = local_1b4;
      pbVar22 = (byte *)0x0;
      if ((undefined4 ****)local_1c8 != &local_1c8) {
        local_4c = (undefined4 *)0x0;
        DAT_00614be4 = (*(code *)PTR_json_object_new_object_0061278c)();
        local_44 = (undefined1 *)(*(code *)PTR_json_object_new_array_00613184)();
        local_38 = &local_1c4;
        local_3c = &local_1a4;
        for (ppppuVar21 = (undefined4 ****)local_1c8[2];
            ppppuVar21 != (undefined4 ****)(local_1c8 + 2);
            ppppuVar21 = (undefined4 ****)*ppppuVar21) {
          local_40 = ppppuVar21[-2];
          iVar5 = 0;
          local_50 = (int *)(PTR_hapObjects_006149e4 + 4);
          pppuVar23 = ppppuVar21[-1];
          while (*local_50 != 0) {
            piVar4 = (int *)0x0;
            pbVar22 = PTR_hapObjects_006149e4 + (iVar5 * 0xb5 + 1) * 8 + 4;
            do {
              local_34 = piVar4;
              local_30 = pbVar22;
              (*(code *)PTR_memcpy_00614674)(local_3c,pbVar22,0x48);
              local_48 = local_198;
              if ((local_1a4 != 0) && ((undefined4 ***)local_1a0 == pppuVar23)) {
                if (local_190 == '\0') {
                  unaff_s3 = (*(code *)PTR_json_object_new_object_0061278c)();
                  uVar6 = (*(code *)PTR_json_object_new_int_00613484)(1);
                  (*(code *)PTR_json_object_object_add_006137b4)(unaff_s3,&DAT_005ac40c,uVar6);
                  uVar6 = (*(code *)PTR_json_object_new_int_00613484)(pppuVar23);
                  (*(code *)PTR_json_object_object_add_006137b4)(unaff_s3,&DAT_005ac41c,uVar6);
                  pbVar22 = (byte *)0xfffeecfb;
                  uVar6 = (*(code *)PTR_json_object_new_int_00613484)();
                  (*(code *)PTR_json_object_object_add_006137b4)(unaff_s3,"status",uVar6);
                  goto LAB_0041f144;
                }
                local_34 = (int *)(uint)local_19c;
                unaff_s3 = (*(code *)PTR_json_object_new_object_0061278c)();
                uVar6 = (*(code *)PTR_json_object_new_int_00613484)(1);
                (*(code *)PTR_json_object_object_add_006137b4)(unaff_s3,&DAT_005ac40c,uVar6);
                uVar6 = (*(code *)PTR_json_object_new_int_00613484)(pppuVar23);
                (*(code *)PTR_json_object_object_add_006137b4)(unaff_s3,&DAT_005ac41c,uVar6);
                if (local_34 == (int *)0x0) {
                  (*(code *)PTR_HKReadCharacteristicValue_006149a4)
                            (local_40,pppuVar23,local_38,param_4);
                }
                else {
                  local_1c4 = local_194;
                }
                switch(local_48) {
                case (undefined1 *)0x0:
                case (undefined1 *)0x1:
                  pcVar24 = (code *)PTR_json_object_new_int_00613484;
                  break;
                case (undefined1 *)0x2:
                  uVar25 = (*(code *)PTR___extendsfdf2_00612dc0)(local_1c4);
                  uVar6 = (*(code *)PTR_json_object_new_double_00612d04)
                                    ((int)((ulonglong)uVar25 >> 0x20),(int)uVar25);
                  goto LAB_0041f0f0;
                case (undefined1 *)0x3:
                case (undefined1 *)0x4:
                case (undefined1 *)0x5:
                  pcVar24 = (code *)PTR_json_object_new_string_00614508;
                  break;
                default:
                  goto switchD_0041f094_default;
                }
                uVar6 = (*pcVar24)(local_1c4);
LAB_0041f0f0:
                (*(code *)PTR_json_object_object_add_006137b4)(unaff_s3,"value",uVar6);
                break;
              }
              piVar4 = (int *)((int)local_34 + 1);
              pbVar22 = local_30 + 0x48;
            } while (piVar4 != (int *)0x14);
switchD_0041f094_default:
            iVar5 = iVar5 + 1;
            local_50 = local_50 + 0x16a;
            if (iVar5 == 10) break;
          }
          pbVar22 = (byte *)0x0;
LAB_0041f144:
          if (unaff_s3 == 0) goto LAB_0041f1a4;
          (*(code *)PTR_json_object_array_add_00613278)(local_44,unaff_s3);
          local_4c = (undefined4 *)((int)local_4c + (uint)(pbVar22 != (byte *)0x0));
        }
        (*(code *)PTR_json_object_object_add_006137b4)(DAT_00614be4,"characteristics",local_44);
LAB_0041f1a4:
        if (local_4c != (undefined4 *)0x0) {
          pbVar22 = (byte *)0xfffeecfe;
        }
      }
      piVar4 = (int *)(*(code *)PTR_json_object_to_json_string_00612474)(DAT_00614be4);
      ppppiVar15 = (int ****)local_1ac;
      ppppiVar20 = (int ****)*local_1ac;
      while (puVar3 = PTR_free_0061286c, ppppiVar15 != &local_1ac) {
        pppiVar9 = ppppiVar15[1];
        pppiVar16 = *ppppiVar15;
        pppiVar16[1] = (int **)pppiVar9;
        *pppiVar9 = (int **)pppiVar16;
        *ppppiVar15 = (int ***)ppppiVar15;
        ppppiVar15[1] = (int ***)ppppiVar15;
        (*(code *)puVar3)(ppppiVar15 + -2);
        ppppiVar15 = ppppiVar20;
        ppppiVar20 = (int ****)*ppppiVar20;
      }
      uVar6 = (*(code *)PTR_strlen_00613f4c)(piVar4);
      pcVar17 = "Read characteristic Error";
      goto LAB_0041f310;
    }
    iVar5 = (*(code *)PTR_HTTPHeaderMatchMethod_00613a98)(param_2,&DAT_005ac578);
    if (iVar5 == -0x1a47) goto LAB_0041fca0;
    DAT_00614be0 = (*(code *)PTR_json_tokener_parse_00613ae4)(*(undefined4 *)(param_2 + 0x104));
    if (DAT_00614be0 == 0) goto LAB_0041fd04;
    local_30 = (byte *)FUN_0041dee0(DAT_00614be0,param_4,param_5);
    (*(code *)PTR_json_object_put_00612524)(DAT_00614be0);
    if (DAT_00614be4 != 0) {
      local_34 = (int *)(*(code *)PTR_json_object_to_json_string_00612474)();
      if (local_30 == (byte *)0x0) {
        local_30 = (byte *)0x10;
      }
      uVar6 = (*(code *)PTR_strlen_00613f4c)(local_34);
      pcVar17 = "Write characteristic Error";
      pbVar22 = local_30;
      piVar4 = local_34;
      goto LAB_0041f310;
    }
    pcVar17 = "Write characteristic Error";
    pbVar22 = local_30;
  }
  piVar4 = (int *)FUN_0041caf4(param_1,pbVar22,pcVar17,0,0,param_3);
  goto LAB_0041fd04;
code_r0x0041f4f0:
  if (*(int *)(iVar5 + 8) - 3U < 3) {
    puVar7 = *(undefined1 **)(param_3 + 8);
    iVar5 = *(int *)(puVar7 + 8);
    if (iVar5 == 3) {
      if (*(char *)(param_5 + 4) == '\x01') {
        (*(code *)PTR_memset_006130cc)(auStack_f8,0,0x40);
        (*(code *)PTR_strcpy_00612464)(auStack_f8,*(undefined4 *)(puVar7 + 0xc));
        (*(code *)PTR_memcpy_00614674)(auStack_b8,*(undefined4 *)(puVar7 + 0x10),0x20);
        local_98 = puVar7[0x14];
        iVar5 = (*(code *)PTR_Phytrex_HMAddPairKey_00612cd4)(auStack_f8);
        if (iVar5 == -0x1a48) goto LAB_0041f5a8;
        piVar11 = (int *)(*(code *)PTR_Phytrex_HMSavePairList_00612ccc)();
        if (piVar11 == (int *)0x0) {
          local_30 = (byte *)0x0;
          uVar6 = 3;
          iVar5 = 0;
          goto LAB_0041f5d8;
        }
      }
      else {
        *puVar7 = 2;
        iVar5 = 0;
LAB_0041f5a8:
        local_30 = (byte *)0x1;
        uVar6 = 6;
LAB_0041f5d8:
        puVar10 = (undefined1 *)(*(code *)PTR_calloc_006148c0)(uVar6,1);
        if (puVar10 == (undefined1 *)0x0) {
          piVar11 = (int *)0xffffe5b8;
        }
        else {
          *puVar10 = 6;
          puVar10[1] = 1;
          puVar10[2] = 2;
          if (local_30 != (byte *)0x0) {
            cVar1 = *(char *)(param_5 + 4);
            puVar10[3] = 7;
            puVar10[4] = 1;
            if (cVar1 == '\x01') {
              uVar14 = 1;
              if (iVar5 == -0x1a48) {
                uVar14 = 4;
              }
              puVar10[5] = uVar14;
            }
            else {
              puVar10[5] = 2;
            }
          }
          *puVar7 = 1;
          piVar11 = (int *)FUN_0041c860(param_1,0,"Add Pairing Error",puVar10,uVar6,param_3);
          (*(code *)PTR_free_0061286c)(puVar10);
          if (piVar11 == (int *)0x0) goto LAB_0041fbb8;
        }
      }
      FUN_0041c7c0(param_3 + 8);
      iVar5 = *(int *)(param_3 + 8);
    }
    else {
      if (iVar5 != 4) {
        if (iVar5 == 5) {
          if (*(char *)(param_5 + 4) == '\x01') {
            piVar11 = (int *)(*(code *)PTR_Phytrex_HMGetNoOfPairList_006149a0)();
            if (piVar11 == (int *)0x0) goto LAB_0041f990;
            local_30 = (byte *)0x0;
            iVar5 = (int)piVar11 * 0x4d + 1;
          }
          else {
            *puVar7 = 2;
            piVar11 = (int *)0x0;
LAB_0041f990:
            local_30 = (byte *)0x1;
            iVar5 = 6;
          }
          local_34 = (int *)(iVar5 + 1);
          puVar10 = (undefined1 *)(*(code *)PTR_calloc_006148c0)(local_34,1);
          piVar12 = (int *)0xffffe5b8;
          if (puVar10 != (undefined1 *)0x0) {
            if (local_30 == (byte *)0x0) {
              local_48 = (undefined1 *)(*(code *)PTR_realloc_00614534)(puVar10,local_34);
              local_44 = auStack_b8;
              local_4c = auStack_f8;
              local_50 = (int *)0x0;
              for (iVar19 = 0; iVar13 = (*(code *)PTR_Phytrex_HMGetMaxPairList_006130dc)(),
                  puVar18 = puVar10, iVar19 < iVar13; iVar19 = iVar19 + 1) {
                iVar13 = (*(code *)PTR_Phytrex_HMReadPairList_006136d4)(local_4c,iVar19);
                if (iVar13 == 0) {
                  *puVar10 = 1;
                  puVar10[1] = 0x24;
                  (*(code *)PTR_memcpy_00614674)(puVar10 + 2,local_4c,0x24);
                  puVar10[0x27] = 0x20;
                  puVar10[0x26] = 3;
                  (*(code *)PTR_memcpy_00614674)(puVar10 + 0x28,local_44,0x20);
                  puVar10[0x48] = 0xb;
                  puVar10[0x49] = 1;
                  local_50 = (int *)((int)local_50 + 1);
                  puVar10[0x4a] = local_98;
                  puVar18 = puVar10 + 0x4b;
                  if (local_50 == piVar11) break;
                  *puVar18 = 0xff;
                  puVar10[0x4c] = 0;
                  puVar10 = puVar10 + 0x4d;
                }
              }
              puVar18[2] = 2;
              *puVar18 = 6;
              puVar18[1] = 1;
              puVar10 = local_48;
            }
            else {
              *puVar10 = 6;
              puVar10[3] = 7;
              puVar10[4] = 1;
              puVar10[1] = 1;
              puVar10[2] = 1;
              uVar14 = 1;
              if (*(char *)(param_5 + 4) != '\x01') {
                uVar14 = 2;
              }
              puVar10[5] = uVar14;
            }
            *puVar7 = 1;
            piVar12 = (int *)FUN_0041c860(param_1,0,"Remove Pairing Error",puVar10,iVar5,param_3);
            if (puVar10 != (undefined1 *)0x0) {
              local_34 = piVar12;
              (*(code *)PTR_free_0061286c)(puVar10);
              piVar12 = local_34;
            }
            if (piVar12 == (int *)0x0) goto LAB_0041fbb8;
          }
          *(undefined4 *)(*(int *)(param_3 + 8) + 4) = 1;
          piVar4 = piVar12;
          goto LAB_0041fd04;
        }
LAB_0041fbb8:
        if (**(char **)(param_3 + 8) == '\0') goto LAB_0041fd04;
        goto LAB_0041fbd0;
      }
      local_1c8 = (undefined4 ***)((uint)local_1c8 & 0xffffff);
      uVar6 = (*(code *)PTR_pthread_self_006134a8)();
      bVar2 = false;
      iVar5 = (*(code *)PTR_pthread_list_GetControllerName_00613450)(uVar6,auStack_f8);
      if (iVar5 == 0) {
        iVar5 = (*(code *)PTR_memcmp_00612e6c)(auStack_f8,*(undefined4 *)(puVar7 + 0xc),0x24);
        bVar2 = iVar5 == 0;
      }
      if ((*(char *)(param_5 + 4) == '\x01') || (bVar2)) {
        uVar6 = 3;
        iVar5 = (*(code *)PTR_Phytrex_HMRemovePairKey_0061295c)
                          (*(undefined4 *)(puVar7 + 0xc),&local_1c8);
        if (iVar5 != 0) {
          uVar6 = 6;
        }
        local_4c = (undefined4 *)(uint)(iVar5 != 0);
        local_50 = (int *)(*(code *)PTR_Phytrex_HMSavePairList_00612ccc)();
        if (local_50 == (int *)0x0) goto LAB_0041f778;
      }
      else {
        *puVar7 = 2;
        uVar6 = 6;
        local_4c = (undefined4 *)0x1;
LAB_0041f778:
        puVar10 = (undefined1 *)(*(code *)PTR_calloc_006148c0)(uVar6,1);
        if (puVar10 == (undefined1 *)0x0) {
          local_50 = (int *)0xffffe5b8;
        }
        else {
          uVar14 = 2;
          *puVar10 = 6;
          puVar10[1] = 1;
          puVar10[2] = 2;
          if (local_4c != (undefined4 *)0x0) {
            cVar1 = *(char *)(param_5 + 4);
            puVar10[4] = 1;
            puVar10[3] = 7;
            if ((cVar1 == '\x01') || (bVar2)) {
              uVar14 = 1;
            }
            puVar10[5] = uVar14;
          }
          *puVar7 = 1;
          local_50 = (int *)FUN_0041c860(param_1,0,"Remove Pairing Error",puVar10,uVar6,param_3);
          if ((local_50 == (int *)0x0) && ((*(char *)(param_5 + 4) == '\x01' || (bVar2)))) {
            if ((local_1c8._0_1_ == '\0') ||
               (iVar5 = (*(code *)PTR_Phytrex_HMPairListIsEmpty_00614aa0)(), iVar5 == 0)) {
              (*(code *)PTR_pthread_list_terminal_byControllerName_00613e58)
                        (*(undefined4 *)(puVar7 + 0xc));
            }
            iVar5 = (*(code *)PTR_Phytrex_HMPairListIsEmpty_00614aa0)();
            if (iVar5 == 0) {
LAB_0041f900:
              pcVar17 = "1";
            }
            else {
              if (local_1c8._0_1_ != '\0') {
                (*(code *)PTR_pthread_list_terminal_AllThread_006146f4)();
                (*(code *)PTR_Phytrex_HMRemoveAllPairKey_006144cc)();
                local_50 = (int *)(*(code *)PTR_Phytrex_HMSavePairList_00612ccc)();
                if (local_50 != (int *)0x0) goto LAB_0041fd8c;
                goto LAB_0041f900;
              }
              pcVar17 = "0";
            }
            (*(code *)PTR_mdnsPhytrex_HomekitUpdate_00612f60)(&DAT_005ac3f4,pcVar17);
          }
LAB_0041fd8c:
          (*(code *)PTR_free_0061286c)(puVar10);
          if (local_50 == (int *)0x0) goto LAB_0041fbb8;
        }
      }
      FUN_0041c7c0(param_3 + 8);
      iVar5 = *(int *)(param_3 + 8);
      piVar11 = local_50;
    }
    *(undefined4 *)(iVar5 + 4) = 1;
    piVar4 = piVar11;
  }
  else {
    piVar4 = (int *)0xffffe5c3;
LAB_0041fbd0:
    FUN_0041c7c0(param_3 + 8);
  }
LAB_0041fd04:
  (*(code *)PTR_HTTPHeaderClear_00614320)(param_2);
  if (DAT_00614be4 != 0) {
    (*(code *)PTR_json_object_put_00612524)();
  }
  return piVar4;
}

