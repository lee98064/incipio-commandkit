/* FUN_0041e850 @ 0041e850 */

uint FUN_0041e850(undefined4 param_1,int param_2,int param_3,int param_4,int param_5)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined1 *puVar7;
  undefined4 *puVar8;
  int ***pppiVar9;
  undefined1 *puVar10;
  undefined1 uVar13;
  uint uVar11;
  int iVar12;
  int ****ppppiVar14;
  int ***pppiVar15;
  char *pcVar16;
  int unaff_s3;
  undefined1 *puVar17;
  int iVar18;
  int ****ppppiVar19;
  undefined4 ****ppppuVar20;
  byte *pbVar21;
  undefined4 ***pppuVar22;
  code *pcVar23;
  int *piVar24;
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
  uint local_34;
  byte *local_30;
  
  uVar4 = (*(code *)PTR_HKSocketReadHTTPHeader_00613828)
                    (param_1,param_2,*(undefined4 *)(param_3 + 0xc));
  if (uVar4 == 0xffffe59f) {
    uVar6 = (*(code *)PTR_pthread_self_00612614)();
    (*(code *)PTR_pthread_kill_00612e8c)(uVar6,3);
    goto LAB_0041fae4;
  }
  if ((uVar4 != 0) ||
     (uVar4 = (*(code *)PTR_HKSocketReadHTTPBody_00612a20)
                        (param_1,param_2,*(undefined4 *)(param_3 + 0xc)), uVar4 != 0))
  goto LAB_0041fae4;
  iVar5 = (*(code *)PTR_HTTPHeaderMatchURL_006116e4)(param_2,"/pair-setup");
  if (iVar5 == 0) {
    uVar4 = (*(code *)PTR_HKPairSetupEngine_00612a7c)(param_1,param_2,param_3,param_4,param_5);
    if (uVar4 == 0) {
      uVar4 = 0xffffe59f;
      if (*(char *)(param_4 + 0x110) != '\0') {
        uVar4 = 0;
      }
    }
    else {
      FUN_0041c828(param_1,400,"application/pairing+tlv8",0xfffeecf3,0,0);
    }
    goto LAB_0041fae4;
  }
  iVar5 = (*(code *)PTR_HTTPHeaderMatchURL_006116e4)(param_2,"/pair-verify");
  if (iVar5 == 0) {
    if (*(int *)(param_3 + 4) == 0) {
      iVar5 = (*(code *)PTR_HKCreatePairVerifyInfo_00612500)();
      *(int *)(param_3 + 4) = iVar5;
      if (iVar5 == 0) {
LAB_0041fae0:
        uVar4 = 0xffffe5b8;
        goto LAB_0041fae4;
      }
    }
    uVar4 = (*(code *)PTR_HKPairVerifyEngine_00613af4)
                      (param_1,param_2,*(undefined4 *)(param_3 + 4),param_4,param_5);
    puVar3 = PTR_memcpy_006137d0;
    if (uVar4 == 0) {
      if (**(char **)(param_3 + 4) == '\0') goto LAB_0041fae4;
      **(undefined1 **)(param_3 + 0xc) = 1;
      (*(code *)puVar3)(*(int *)(param_3 + 0xc) + 0x21,*(undefined4 *)(*(int *)(param_3 + 4) + 0x24)
                        ,0x20);
      (*(code *)PTR_memcpy_006137d0)
                (*(int *)(param_3 + 0xc) + 1,*(undefined4 *)(*(int *)(param_3 + 4) + 0x20),0x20);
    }
    (*(code *)PTR_HKCleanPairVerifyInfo_00611f38)(param_3 + 4);
    goto LAB_0041fae4;
  }
  iVar5 = (*(code *)PTR_HTTPHeaderMatchURL_006116e4)(param_2,"/accessories");
  if (iVar5 == 0) {
    (*(code *)PTR_puts_006117e4)("[discovery]");
    uVar4 = FUN_0041d2e8(param_4);
    if (uVar4 != 0) goto LAB_0041fae4;
    local_34 = (*(code *)PTR_json_object_to_json_string_006115e0)(DAT_00613d44);
    uVar6 = (*(code *)PTR_strlen_006130b4)(local_34);
    pcVar16 = "Read Data base Error";
    pbVar21 = (byte *)0x0;
    uVar4 = local_34;
LAB_0041f180:
    uVar4 = FUN_0041c964(param_1,pbVar21,pcVar16,uVar4,uVar6,param_3);
    (*(code *)PTR_json_object_put_00611694)(DAT_00613d44);
    DAT_00613d44 = 0;
    goto LAB_0041fae4;
  }
  iVar5 = (*(code *)PTR_HTTPHeaderMatchPartialURL_00612fdc)(param_2,"/characteristics");
  if (iVar5 == 0) {
    iVar5 = (*(code *)PTR_HTTPHeaderMatchURL_006116e4)(param_2,"/pairings");
    if (iVar5 == 0) {
      (*(code *)PTR_puts_006117e4)("[HTTP Header] Get kPAIRINGS");
      if (**(char **)(param_3 + 0xc) != '\0') {
        if (*(int *)(param_3 + 8) != 0) {
LAB_0041f228:
          local_1c0 = *(int *)(param_2 + 0x104);
          local_50 = (int *)(local_1c0 + *(int *)(param_2 + 0x10c));
          local_4c = &local_1bc;
          iVar5 = *(int *)(param_3 + 8);
switchD_0041f2c0_caseD_2:
          iVar18 = (*(code *)PTR_TLVGetNext_00612f0c)
                             (local_1c0,local_50,&local_1c8,local_4c,&local_1b8,&local_1c0);
          if (iVar18 != 0) goto code_r0x0041f360;
          pbVar21 = (byte *)(*(code *)PTR_calloc_00613a18)(local_1b8 + 1,1);
          if (pbVar21 == (byte *)0x0) {
            uVar4 = 0xffffe5b8;
            goto LAB_0041f9b0;
          }
          local_30 = pbVar21;
          (*(code *)PTR_memcpy_006137d0)(pbVar21,local_1bc,local_1b8);
          puVar3 = PTR_free_006119dc;
          switch((uint)local_1c8 >> 0x18) {
          case 0:
            *(uint *)(iVar5 + 8) = (uint)*local_30;
            break;
          case 1:
            *(byte **)(iVar5 + 0xc) = local_30;
          default:
            goto switchD_0041f2c0_caseD_2;
          case 3:
            *(byte **)(iVar5 + 0x10) = local_30;
            goto switchD_0041f2c0_caseD_2;
          case 6:
            if (*(uint *)(iVar5 + 4) != (uint)*local_30) {
              uVar4 = 0xffffe5af;
              goto LAB_0041f9b0;
            }
            break;
          case 0xb:
            *(byte *)(iVar5 + 0x14) = *local_30;
          }
          (*(code *)puVar3)(local_30);
          goto switchD_0041f2c0_caseD_2;
        }
        iVar5 = FUN_0041c4a0();
        *(int *)(param_3 + 8) = iVar5;
        if (iVar5 != 0) goto LAB_0041f228;
        goto LAB_0041fae0;
      }
LAB_0041fa80:
      pbVar21 = (byte *)0xfffeecf3;
    }
    else {
      iVar5 = (*(code *)PTR_HTTPHeaderMatchURL_006116e4)(param_2,"/identify");
      if (iVar5 != 0) goto LAB_0041fa80;
      if (**(char **)(param_3 + 0xc) == '\0') {
        (*(code *)PTR_HKUserTriggerIdentify_00612dac)(param_1);
        iVar5 = (*(code *)PTR_Phytrex_HMPairListIsEmpty_00613bf8)();
        if (iVar5 == 0) {
          pcVar16 = "application/pairing+tlv8";
          uVar6 = 0xcc;
          pcVar26 = (char *)0x0;
          uVar27 = 0;
        }
        else {
          pcVar26 = "{\"status\":-70401}";
          pcVar16 = "application/hap+json";
          uVar6 = 400;
          uVar27 = 0x11;
        }
        uVar4 = FUN_0041c828(param_1,uVar6,pcVar16,0,pcVar26,uVar27);
        goto LAB_0041fae4;
      }
      pbVar21 = (byte *)0xfffeecff;
    }
    pcVar16 = "Unsupport HTTP method";
  }
  else {
    iVar5 = (*(code *)PTR_HTTPHeaderMatchMethod_00612bfc)(param_2,&DAT_005ab728);
    if (iVar5 != -0x1a47) {
      local_1ac = (int ***)&local_1ac;
      local_1a8 = (int ***)&local_1ac;
      iVar5 = (*(code *)PTR_HTTPHeaderMatchPartialURL_00612fdc)(param_2,"/characteristics");
      iVar18 = iVar5 + 0x14;
      if (iVar5 == 0) {
        iVar18 = 0;
      }
      puVar7 = (undefined1 *)(*(code *)PTR_strchr_00611958)(iVar18,0x20);
      if (puVar7 != (undefined1 *)0x0) {
        *puVar7 = 0;
      }
      iVar5 = (*(code *)PTR_strtok_006128fc)(iVar18,",");
      while (iVar5 != 0) {
        (*(code *)PTR_memset_0061223c)(auStack_15c,0,100);
        (*(code *)PTR_strcpy_006115d0)(auStack_15c,iVar5);
        local_30 = (byte *)(*(code *)PTR_strchr_00611958)(iVar5,0x2e);
        (*(code *)PTR_memset_0061223c)(auStack_15c,0,100);
        puVar8 = (undefined4 *)(*(code *)PTR_calloc_00613a18)(0x10,1);
        uVar6 = (*(code *)PTR_atoi_006119c0)(iVar5);
        *puVar8 = uVar6;
        uVar6 = (*(code *)PTR_atoi_006119c0)(local_30 + 1);
        puVar3 = PTR_strtok_006128fc;
        puVar8[1] = uVar6;
        local_1ac[1] = (int **)(puVar8 + 2);
        puVar8[2] = local_1ac;
        puVar8[3] = &local_1ac;
        local_1ac = (int ***)(puVar8 + 2);
        iVar5 = (*(code *)puVar3)(0,",");
      }
      local_1c8 = local_1b4;
      pbVar21 = (byte *)0x0;
      if ((undefined4 ****)local_1c8 != &local_1c8) {
        local_4c = (undefined4 *)0x0;
        DAT_00613d44 = (*(code *)PTR_json_object_new_object_006118fc)();
        local_44 = (undefined1 *)(*(code *)PTR_json_object_new_array_006122f4)();
        local_38 = &local_1c4;
        local_3c = &local_1a4;
        for (ppppuVar20 = (undefined4 ****)local_1c8[2];
            ppppuVar20 != (undefined4 ****)(local_1c8 + 2);
            ppppuVar20 = (undefined4 ****)*ppppuVar20) {
          local_40 = ppppuVar20[-2];
          iVar5 = 0;
          local_50 = (int *)(PTR_hapObjects_00613b3c + 4);
          pppuVar22 = ppppuVar20[-1];
          while (*local_50 != 0) {
            uVar4 = 0;
            pbVar21 = PTR_hapObjects_00613b3c + (iVar5 * 0xb5 + 1) * 8 + 4;
            do {
              local_34 = uVar4;
              local_30 = pbVar21;
              (*(code *)PTR_memcpy_006137d0)(local_3c,pbVar21,0x48);
              local_48 = local_198;
              if ((local_1a4 != 0) && ((undefined4 ***)local_1a0 == pppuVar22)) {
                if (local_190 == '\0') {
                  unaff_s3 = (*(code *)PTR_json_object_new_object_006118fc)();
                  uVar6 = (*(code *)PTR_json_object_new_int_006125f0)(1);
                  (*(code *)PTR_json_object_object_add_00612914)(unaff_s3,&DAT_005ab5dc,uVar6);
                  uVar6 = (*(code *)PTR_json_object_new_int_006125f0)(pppuVar22);
                  (*(code *)PTR_json_object_object_add_00612914)(unaff_s3,&DAT_005ab5ec,uVar6);
                  pbVar21 = (byte *)0xfffeecfb;
                  uVar6 = (*(code *)PTR_json_object_new_int_006125f0)();
                  (*(code *)PTR_json_object_object_add_00612914)(unaff_s3,"status",uVar6);
                  goto LAB_0041efb4;
                }
                local_34 = (uint)local_19c;
                unaff_s3 = (*(code *)PTR_json_object_new_object_006118fc)();
                uVar6 = (*(code *)PTR_json_object_new_int_006125f0)(1);
                (*(code *)PTR_json_object_object_add_00612914)(unaff_s3,&DAT_005ab5dc,uVar6);
                uVar6 = (*(code *)PTR_json_object_new_int_006125f0)(pppuVar22);
                (*(code *)PTR_json_object_object_add_00612914)(unaff_s3,&DAT_005ab5ec,uVar6);
                if (local_34 == 0) {
                  (*(code *)PTR_HKReadCharacteristicValue_00613afc)
                            (local_40,pppuVar22,local_38,param_4);
                }
                else {
                  local_1c4 = local_194;
                }
                switch(local_48) {
                case (undefined1 *)0x0:
                case (undefined1 *)0x1:
                  pcVar23 = (code *)PTR_json_object_new_int_006125f0;
                  break;
                case (undefined1 *)0x2:
                  uVar25 = (*(code *)PTR___extendsfdf2_00611f30)(local_1c4);
                  uVar6 = (*(code *)PTR_json_object_new_double_00611e74)
                                    ((int)((ulonglong)uVar25 >> 0x20),(int)uVar25);
                  goto LAB_0041ef60;
                case (undefined1 *)0x3:
                case (undefined1 *)0x4:
                case (undefined1 *)0x5:
                  pcVar23 = (code *)PTR_json_object_new_string_00613664;
                  break;
                default:
                  goto switchD_0041ef04_default;
                }
                uVar6 = (*pcVar23)(local_1c4);
LAB_0041ef60:
                (*(code *)PTR_json_object_object_add_00612914)(unaff_s3,"value",uVar6);
                break;
              }
              uVar4 = local_34 + 1;
              pbVar21 = local_30 + 0x48;
            } while (uVar4 != 0x14);
switchD_0041ef04_default:
            iVar5 = iVar5 + 1;
            local_50 = local_50 + 0x16a;
            if (iVar5 == 10) break;
          }
          pbVar21 = (byte *)0x0;
LAB_0041efb4:
          if (unaff_s3 == 0) goto LAB_0041f014;
          (*(code *)PTR_json_object_array_add_006123e4)(local_44,unaff_s3);
          local_4c = (undefined4 *)((int)local_4c + (uint)(pbVar21 != (byte *)0x0));
        }
        (*(code *)PTR_json_object_object_add_00612914)(DAT_00613d44,"characteristics",local_44);
LAB_0041f014:
        if (local_4c != (undefined4 *)0x0) {
          pbVar21 = (byte *)0xfffeecfe;
        }
      }
      uVar4 = (*(code *)PTR_json_object_to_json_string_006115e0)(DAT_00613d44);
      ppppiVar14 = (int ****)local_1ac;
      ppppiVar19 = (int ****)*local_1ac;
      while (puVar3 = PTR_free_006119dc, ppppiVar14 != &local_1ac) {
        pppiVar9 = ppppiVar14[1];
        pppiVar15 = *ppppiVar14;
        pppiVar15[1] = (int **)pppiVar9;
        *pppiVar9 = (int **)pppiVar15;
        *ppppiVar14 = (int ***)ppppiVar14;
        ppppiVar14[1] = (int ***)ppppiVar14;
        (*(code *)puVar3)(ppppiVar14 + -2);
        ppppiVar14 = ppppiVar19;
        ppppiVar19 = (int ****)*ppppiVar19;
      }
      uVar6 = (*(code *)PTR_strlen_006130b4)(uVar4);
      pcVar16 = "Read characteristic Error";
      goto LAB_0041f180;
    }
    iVar5 = (*(code *)PTR_HTTPHeaderMatchMethod_00612bfc)(param_2,&DAT_005ab748);
    if (iVar5 == -0x1a47) goto LAB_0041fa80;
    DAT_00613d40 = (*(code *)PTR_json_tokener_parse_00612c48)(*(undefined4 *)(param_2 + 0x104));
    if (DAT_00613d40 == 0) goto LAB_0041fae4;
    local_30 = (byte *)FUN_0041dd50(DAT_00613d40,param_4,param_5);
    (*(code *)PTR_json_object_put_00611694)(DAT_00613d40);
    if (DAT_00613d44 != 0) {
      local_34 = (*(code *)PTR_json_object_to_json_string_006115e0)();
      if (local_30 == (byte *)0x0) {
        local_30 = (byte *)0x10;
      }
      uVar6 = (*(code *)PTR_strlen_006130b4)(local_34);
      pcVar16 = "Write characteristic Error";
      pbVar21 = local_30;
      uVar4 = local_34;
      goto LAB_0041f180;
    }
    pcVar16 = "Write characteristic Error";
    pbVar21 = local_30;
  }
  uVar4 = FUN_0041c964(param_1,pbVar21,pcVar16,0,0,param_3);
  goto LAB_0041fae4;
code_r0x0041f360:
  if (*(int *)(iVar5 + 8) - 3U < 3) {
    puVar7 = *(undefined1 **)(param_3 + 8);
    iVar5 = *(int *)(puVar7 + 8);
    if (iVar5 == 3) {
      if (*(char *)(param_5 + 4) == '\x01') {
        (*(code *)PTR_memset_0061223c)(auStack_f8,0,0x40);
        (*(code *)PTR_strcpy_006115d0)(auStack_f8,*(undefined4 *)(puVar7 + 0xc));
        (*(code *)PTR_memcpy_006137d0)(auStack_b8,*(undefined4 *)(puVar7 + 0x10),0x20);
        local_98 = puVar7[0x14];
        iVar5 = (*(code *)PTR_Phytrex_HMAddPairKey_00611e44)(auStack_f8);
        if (iVar5 == -0x1a48) goto LAB_0041f418;
        uVar11 = (*(code *)PTR_Phytrex_HMSavePairList_00611e3c)();
        if (uVar11 == 0) {
          local_30 = (byte *)0x0;
          uVar6 = 3;
          iVar5 = 0;
          goto LAB_0041f448;
        }
      }
      else {
        *puVar7 = 2;
        iVar5 = 0;
LAB_0041f418:
        local_30 = (byte *)0x1;
        uVar6 = 6;
LAB_0041f448:
        puVar10 = (undefined1 *)(*(code *)PTR_calloc_00613a18)(uVar6,1);
        if (puVar10 == (undefined1 *)0x0) {
          uVar11 = 0xffffe5b8;
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
              uVar13 = 1;
              if (iVar5 == -0x1a48) {
                uVar13 = 4;
              }
              puVar10[5] = uVar13;
            }
            else {
              puVar10[5] = 2;
            }
          }
          *puVar7 = 1;
          uVar11 = FUN_0041c6d0(param_1,0,"Add Pairing Error",puVar10,uVar6,param_3);
          (*(code *)PTR_free_006119dc)(puVar10);
          if (uVar11 == 0) goto LAB_0041f998;
        }
      }
      FUN_0041c630(param_3 + 8);
      *(undefined4 *)(*(int *)(param_3 + 8) + 4) = 1;
      uVar4 = uVar11;
      goto LAB_0041fae4;
    }
    if (iVar5 == 4) {
      bVar2 = false;
      uVar6 = (*(code *)PTR_pthread_self_00612614)();
      iVar5 = (*(code *)PTR_pthread_list_GetControllerName_006125bc)(uVar6,auStack_f8);
      if (iVar5 == 0) {
        iVar5 = (*(code *)PTR_memcmp_00611fdc)(auStack_f8,*(undefined4 *)(puVar7 + 0xc),0x24);
        bVar2 = iVar5 == 0;
      }
      if ((*(char *)(param_5 + 4) == '\x01') || (bVar2)) {
        uVar6 = 3;
        iVar5 = (*(code *)PTR_Phytrex_HMRemovePairKey_00611acc)(*(undefined4 *)(puVar7 + 0xc));
        if (iVar5 != 0) {
          uVar6 = 6;
        }
        local_50 = (int *)(uint)(iVar5 != 0);
        local_34 = (*(code *)PTR_Phytrex_HMSavePairList_00611e3c)();
        if (local_34 == 0) {
          (*(code *)PTR_pthread_list_terminal_byControllerName_00612fc0)
                    (*(undefined4 *)(puVar7 + 0xc));
          iVar5 = (*(code *)PTR_Phytrex_HMPairListIsEmpty_00613bf8)();
          if (iVar5 == 0) {
            pcVar16 = "1";
          }
          else {
            pcVar16 = "0";
          }
          (*(code *)PTR_mdnsPhytrex_HomekitUpdate_006120d0)(&DAT_005ab5c4,pcVar16);
          goto LAB_0041f650;
        }
      }
      else {
        *puVar7 = 2;
        uVar6 = 6;
        local_50 = (int *)0x1;
LAB_0041f650:
        puVar10 = (undefined1 *)(*(code *)PTR_calloc_00613a18)(uVar6,1);
        if (puVar10 == (undefined1 *)0x0) {
          local_34 = 0xffffe5b8;
        }
        else {
          uVar13 = 2;
          *puVar10 = 6;
          puVar10[1] = 1;
          puVar10[2] = 2;
          if (local_50 != (int *)0x0) {
            cVar1 = *(char *)(param_5 + 4);
            puVar10[4] = 1;
            puVar10[3] = 7;
            if ((cVar1 == '\x01') || (bVar2)) {
              uVar13 = 1;
            }
            puVar10[5] = uVar13;
          }
          *puVar7 = 1;
          local_34 = FUN_0041c6d0(param_1,0,"Remove Pairing Error",puVar10,uVar6,param_3);
          (*(code *)PTR_free_006119dc)(puVar10);
          if (local_34 == 0) goto LAB_0041f998;
        }
      }
      FUN_0041c630(param_3 + 8);
      iVar5 = *(int *)(param_3 + 8);
      uVar11 = local_34;
    }
    else {
      if (iVar5 != 5) {
LAB_0041f998:
        if (**(char **)(param_3 + 8) == '\0') goto LAB_0041fae4;
        goto LAB_0041f9b0;
      }
      if (*(char *)(param_5 + 4) == '\x01') {
        piVar24 = (int *)(*(code *)PTR_Phytrex_HMGetNoOfPairList_00613af8)();
        if (piVar24 == (int *)0x0) goto LAB_0041f770;
        local_30 = (byte *)0x0;
        iVar5 = (int)piVar24 * 0x4d + 1;
      }
      else {
        *puVar7 = 2;
        piVar24 = (int *)0x0;
LAB_0041f770:
        local_30 = (byte *)0x1;
        iVar5 = 6;
      }
      local_34 = iVar5 + 1;
      puVar10 = (undefined1 *)(*(code *)PTR_calloc_00613a18)(local_34,1);
      uVar11 = 0xffffe5b8;
      if (puVar10 != (undefined1 *)0x0) {
        if (local_30 == (byte *)0x0) {
          local_48 = (undefined1 *)(*(code *)PTR_realloc_00613690)(puVar10,local_34);
          local_44 = auStack_b8;
          local_4c = auStack_f8;
          local_50 = (int *)0x0;
          for (iVar18 = 0; iVar12 = (*(code *)PTR_Phytrex_HMGetMaxPairList_0061224c)(),
              puVar17 = puVar10, iVar18 < iVar12; iVar18 = iVar18 + 1) {
            iVar12 = (*(code *)PTR_Phytrex_HMReadPairList_0061283c)(local_4c,iVar18);
            if (iVar12 == 0) {
              *puVar10 = 1;
              puVar10[1] = 0x24;
              (*(code *)PTR_memcpy_006137d0)(puVar10 + 2,local_4c,0x24);
              puVar10[0x27] = 0x20;
              puVar10[0x26] = 3;
              (*(code *)PTR_memcpy_006137d0)(puVar10 + 0x28,local_44,0x20);
              puVar10[0x48] = 0xb;
              puVar10[0x49] = 1;
              local_50 = (int *)((int)local_50 + 1);
              puVar10[0x4a] = local_98;
              puVar17 = puVar10 + 0x4b;
              if (local_50 == piVar24) break;
              *puVar17 = 0xff;
              puVar10[0x4c] = 0;
              puVar10 = puVar10 + 0x4d;
            }
          }
          puVar17[2] = 2;
          *puVar17 = 6;
          puVar17[1] = 1;
          puVar10 = local_48;
        }
        else {
          *puVar10 = 6;
          puVar10[3] = 7;
          puVar10[4] = 1;
          puVar10[1] = 1;
          puVar10[2] = 1;
          uVar13 = 1;
          if (*(char *)(param_5 + 4) != '\x01') {
            uVar13 = 2;
          }
          puVar10[5] = uVar13;
        }
        *puVar7 = 1;
        uVar11 = FUN_0041c6d0(param_1,0,"Remove Pairing Error",puVar10,iVar5,param_3);
        if (puVar10 != (undefined1 *)0x0) {
          local_34 = uVar11;
          (*(code *)PTR_free_006119dc)(puVar10);
          uVar11 = local_34;
        }
        if (uVar11 == 0) goto LAB_0041f998;
      }
      iVar5 = *(int *)(param_3 + 8);
    }
    *(undefined4 *)(iVar5 + 4) = 1;
    uVar4 = uVar11;
  }
  else {
    uVar4 = 0xffffe5c3;
LAB_0041f9b0:
    FUN_0041c630(param_3 + 8);
  }
LAB_0041fae4:
  (*(code *)PTR_HTTPHeaderClear_0061347c)(param_2);
  if (DAT_00613d44 != 0) {
    (*(code *)PTR_json_object_put_00611694)();
  }
  return uVar4;
}

