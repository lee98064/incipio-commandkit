/* FUN_0041dd50 @ 0041dd50 */

/* WARNING: Restarted to delay deadcode elimination for space: ram */

uint FUN_0041dd50(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  int iVar5;
  uint uVar6;
  char *pcVar7;
  uint uVar8;
  int *piVar9;
  undefined *puVar10;
  uint unaff_s0;
  undefined4 *puVar11;
  int unaff_s3;
  int iVar12;
  int unaff_s6;
  code *pcVar13;
  undefined8 uVar14;
  int local_140;
  undefined4 local_13c;
  int local_138;
  int local_134;
  undefined1 auStack_f0 [4];
  int local_ec;
  undefined4 local_e4;
  int local_a8;
  undefined4 local_a4;
  undefined4 local_9c;
  byte local_93;
  byte local_92;
  int *local_60;
  undefined1 *local_5c;
  int local_58;
  int local_54;
  int local_50;
  uint local_4c;
  uint local_48;
  undefined4 local_44;
  int local_40;
  undefined *local_3c;
  undefined4 local_38;
  int *local_34;
  uint local_30;
  uint local_2c;
  
  DAT_00613d44 = (undefined *)0x0;
  iVar1 = (*(code *)PTR_json_object_get_object_00612cf8)();
  puVar11 = *(undefined4 **)(iVar1 + 0x20);
  iVar1 = 0;
  while (puVar11 != (undefined4 *)0x0) {
    iVar12 = puVar11[1];
    iVar2 = (*(code *)PTR_strcmp_00611bec)(*puVar11,"characteristics");
    puVar11 = (undefined4 *)puVar11[2];
    if (iVar2 == 0) {
      iVar1 = iVar12;
    }
  }
  if ((iVar1 == 0) || (iVar2 = (*(code *)PTR_json_object_get_type_006133dc)(iVar1), iVar2 != 5)) {
    uVar6 = 0xfffeecf5;
  }
  else {
    local_50 = 0;
    local_40 = (*(code *)PTR_json_object_array_length_006138ec)(iVar1);
    DAT_00613d44 = (undefined *)(*(code *)PTR_json_object_new_object_006118fc)();
    local_3c = DAT_00613d44;
    local_44 = (*(code *)PTR_json_object_new_array_006122f4)();
    (*(code *)PTR_json_object_object_add_00612914)(local_3c,"characteristics",local_44);
    uVar6 = 0;
    for (iVar2 = 0; iVar2 < local_40; iVar2 = iVar2 + 1) {
      uVar3 = (*(code *)PTR_json_object_array_get_idx_00613274)(iVar1,iVar2);
      local_54 = 0;
      iVar12 = (*(code *)PTR_json_object_get_object_00612cf8)(uVar3);
      local_60 = *(int **)(iVar12 + 0x20);
      puVar4 = (undefined1 *)0;
      while (local_60 != (int *)0x0) {
        local_58 = *local_60;
        iVar12 = (*(code *)PTR_strcmp_00611bec)(local_58,&DAT_005ab5ec);
        local_5c = (undefined1 *)local_60[1];
        local_60 = (int *)local_60[2];
        if (iVar12 == 0) {
          local_54 = (*(code *)PTR_json_object_get_int_006129e4)(local_5c);
        }
        else {
          iVar12 = (*(code *)PTR_strcmp_00611bec)(local_58,"value");
          if (iVar12 == 0) {
            unaff_s6 = 0;
            puVar4 = local_5c;
          }
          else {
            iVar12 = (*(code *)PTR_strcmp_00611bec)(local_58,&DAT_005ab5dc);
            if (iVar12 == 0) {
              (*(code *)PTR_json_object_get_int_006129e4)(local_5c);
            }
            else {
              iVar12 = (*(code *)PTR_strcmp_00611bec)(local_58,&DAT_005ab618);
              if (iVar12 == 0) {
                unaff_s6 = 1;
                puVar4 = local_5c;
              }
            }
          }
        }
      }
      local_60 = &local_138;
      local_5c = auStack_f0;
      uVar3 = 0;
      uVar6 = 0;
      piVar9 = (int *)(PTR_hapObjects_00613b3c + 4);
      do {
        if (*piVar9 == 0) break;
        uVar8 = 0;
        puVar10 = PTR_hapObjects_00613b3c + (uVar6 * 0xb5 + 1) * 8 + 4;
        local_2c = uVar6;
        local_38 = uVar3;
        local_34 = piVar9;
        do {
          local_3c = puVar10;
          local_30 = uVar8;
          (*(code *)PTR_memcpy_006137d0)(local_60,puVar10,0x48);
          if ((local_138 != 0) && (local_134 == local_54)) {
            local_48 = local_30;
            local_4c = local_2c;
            (*(code *)PTR_memcpy_006137d0)
                      (local_5c,PTR_hapObjects_00613b3c + local_30 * 0x48 + local_2c * 0x5a8 + 0xc,
                       0x48);
            uVar3 = local_e4;
            unaff_s3 = local_ec;
            break;
          }
          uVar8 = local_30 + 1;
          puVar10 = local_3c + 0x48;
          uVar3 = local_38;
        } while (uVar8 != 0x14);
        uVar6 = local_2c + 1;
        piVar9 = local_34 + 0x16a;
      } while (uVar6 != 10);
      if (unaff_s3 == 0) {
        (*(code *)PTR_json_object_put_00611694)(local_44);
        uVar6 = 0xfffeecf9;
        break;
      }
      if (unaff_s6 == 0) {
        switch(uVar3) {
        case 0:
        case 1:
          unaff_s0 = (*(code *)PTR_json_object_get_int_006129e4)(puVar4);
          break;
        case 2:
          uVar14 = (*(code *)PTR_json_object_get_double_00612d40)(puVar4);
          unaff_s0 = (*(code *)PTR___truncdfsf2_00613a98)
                               ((int)((ulonglong)uVar14 >> 0x20),(int)uVar14);
          break;
        case 3:
        case 4:
        case 5:
          unaff_s0 = (*(code *)PTR_json_object_get_string_00613160)(puVar4);
          (*(code *)PTR_json_object_get_string_len_006136f0)(puVar4);
        }
      }
      else if (unaff_s6 == 1) {
        iVar12 = (*(code *)PTR_json_object_get_boolean_006137c4)(puVar4);
        unaff_s0 = unaff_s0 & 0xffffff | (uint)(iVar12 != 0) << 0x18;
      }
      local_140 = 0;
      if ((PTR_hapObjects_00613b3c[local_48 * 0x48 + local_4c * 0x5a8 + 0x22] == '\0') ||
         (unaff_s6 != 1)) {
        if (PTR_hapObjects_00613b3c[local_48 * 0x48 + local_4c * 0x5a8 + 0x21] == '\0') {
          local_140 = -0x11304;
        }
        else {
          (*(code *)PTR_HKWriteCharacteristicValue_006123ec)(0,unaff_s3,unaff_s0,&local_140,param_2)
          ;
          if (local_140 == 0) {
            (*(code *)PTR_pthread_mutex_lock_0061308c)(&DAT_00613d28);
            (*(code *)PTR_HKUpdateValueToGlobalEventTable_00613b54)(unaff_s3,unaff_s0);
            (*(code *)PTR_pthread_mutex_unlock_00611c8c)(&DAT_00613d28);
            (*(code *)PTR_HKUpdateValueToPrivateEventTable_00612acc)(*param_3,unaff_s3,unaff_s0);
          }
        }
      }
      else {
        (*(code *)PTR_HKWriteCharacteristicEvent_006117dc)
                  (0,unaff_s3,unaff_s0,&local_140,param_2,*param_3);
      }
      local_58 = local_140;
      iVar12 = (*(code *)PTR_json_object_new_object_006118fc)();
      local_5c = (undefined1 *)(*(code *)PTR_json_object_new_object_006118fc)();
      (*(code *)PTR_memcpy_006137d0)
                (&local_a8,PTR_hapObjects_00613b3c + local_48 * 0x48 + local_4c * 0x5a8 + 0xc,0x48);
      local_60 = (int *)local_a4;
      local_54 = local_9c;
      if (local_a8 == 0) {
        uVar3 = (*(code *)PTR_json_object_new_int_006125f0)(1);
        (*(code *)PTR_json_object_object_add_00612914)(iVar12,&DAT_005ab5dc,uVar3);
        local_30 = 0xfffe0000;
        uVar3 = (*(code *)PTR_json_object_new_int_006125f0)(local_60);
        (*(code *)PTR_json_object_object_add_00612914)(iVar12,&DAT_005ab5ec,uVar3);
        local_2c = local_30 | 0xecf9;
        uVar3 = (*(code *)PTR_json_object_new_int_006125f0)(local_30 | 0xecfe);
        (*(code *)PTR_json_object_object_add_00612914)(iVar12,"status",uVar3);
        uVar3 = (*(code *)PTR_json_object_new_string_00613664)
                          ("Write a characteristic that is not existed");
        (*(code *)PTR_json_object_object_add_00612914)(local_5c,"developerMessage",uVar3);
        uVar3 = (*(code *)PTR_json_object_new_int_006125f0)(local_30 | 0xecf9);
        (*(code *)PTR_json_object_object_add_00612914)(local_5c,"errorCode",uVar3);
        pcVar7 = "response";
        puVar4 = local_5c;
LAB_0041e5f0:
        (*(code *)PTR_json_object_object_add_00612914)(iVar12,pcVar7,puVar4);
        uVar6 = local_2c;
LAB_0041e83c:
        local_50 = local_50 + 1;
      }
      else {
        local_30 = (uint)local_92;
        local_2c = (uint)local_93;
        uVar3 = (*(code *)PTR_json_object_new_int_006125f0)(1);
        (*(code *)PTR_json_object_object_add_00612914)(iVar12,&DAT_005ab5dc,uVar3);
        uVar3 = (*(code *)PTR_json_object_new_int_006125f0)(local_60);
        (*(code *)PTR_json_object_object_add_00612914)(iVar12,&DAT_005ab5ec,uVar3);
        if ((local_2c == 0) && (local_30 == 0)) {
          uVar3 = (*(code *)PTR_json_object_new_int_006125f0)(1);
          (*(code *)PTR_json_object_object_add_00612914)(iVar12,&DAT_005ab5dc,uVar3);
          local_2c = 0xfffeecfc;
          uVar3 = (*(code *)PTR_json_object_new_int_006125f0)(local_60);
          (*(code *)PTR_json_object_object_add_00612914)(iVar12,&DAT_005ab5ec,uVar3);
          puVar4 = (undefined1 *)(*(code *)PTR_json_object_new_int_006125f0)(0xfffeecfc);
          pcVar7 = "status";
          goto LAB_0041e5f0;
        }
        iVar5 = (*(code *)PTR_HKReadCharacteristicValue_00613afc)(0,unaff_s3,&local_13c,param_2);
        if ((iVar5 != 0) || (local_58 != 0)) {
          uVar3 = (*(code *)PTR_json_object_new_int_006125f0)(1);
          (*(code *)PTR_json_object_object_add_00612914)(iVar12,&DAT_005ab5dc,uVar3);
          uVar3 = (*(code *)PTR_json_object_new_int_006125f0)(local_60);
          (*(code *)PTR_json_object_object_add_00612914)(iVar12,&DAT_005ab5ec,uVar3);
          uVar3 = (*(code *)PTR_json_object_new_int_006125f0)(local_58);
          (*(code *)PTR_json_object_object_add_00612914)(iVar12,"status",uVar3);
          uVar6 = 0xfffeecfe;
          goto LAB_0041e83c;
        }
        switch(local_54) {
        case 0:
        case 1:
          pcVar13 = (code *)PTR_json_object_new_int_006125f0;
          break;
        case 2:
          uVar14 = (*(code *)PTR___extendsfdf2_00611f30)(local_13c);
          uVar3 = (*(code *)PTR_json_object_new_double_00611e74)
                            ((int)((ulonglong)uVar14 >> 0x20),(int)uVar14);
          goto LAB_0041e764;
        case 3:
        case 4:
        case 5:
          pcVar13 = (code *)PTR_json_object_new_string_00613664;
          break;
        default:
          goto switchD_0041e708_default;
        }
        uVar3 = (*pcVar13)(local_13c);
LAB_0041e764:
        (*(code *)PTR_json_object_object_add_00612914)(iVar12,"value",uVar3);
switchD_0041e708_default:
        uVar6 = 0;
      }
      if (iVar12 != 0) {
        local_2c = uVar6;
        (*(code *)PTR_json_object_array_add_006123e4)(local_44,iVar12);
        uVar6 = local_2c;
      }
    }
  }
  if (local_50 != 0) {
    uVar6 = 0xfffeecfe;
  }
  return uVar6;
}

