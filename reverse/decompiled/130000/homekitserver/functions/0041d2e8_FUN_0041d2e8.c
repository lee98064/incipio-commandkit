/* FUN_0041d2e8 @ 0041d2e8 */

/* WARNING: Restarted to delay deadcode elimination for space: ram */

undefined4 FUN_0041d2e8(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  char *pcVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  code *pcVar12;
  undefined8 uVar13;
  undefined4 local_c8;
  int local_c4;
  undefined4 local_c0;
  byte local_bc;
  byte local_bb;
  int local_b8;
  undefined4 local_b4;
  byte local_b0;
  byte local_af;
  byte local_ae;
  byte local_ad;
  undefined4 local_ac;
  byte local_a8;
  undefined4 local_a4;
  byte local_a0;
  undefined4 local_9c;
  byte local_98;
  undefined4 local_94;
  byte local_90;
  int local_8c;
  int local_88;
  int local_84;
  int local_80;
  uint local_78;
  uint local_74;
  undefined *local_70;
  int local_6c;
  int local_68;
  undefined4 local_64;
  uint local_60;
  uint local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  int local_30;
  
  local_54 = (*(code *)PTR_json_object_new_object_006118fc)();
  iVar10 = 0;
  uVar3 = (*(code *)PTR_json_object_new_array_006122f4)();
  (*(code *)PTR_json_object_object_add_00612914)(local_54,"accessories",uVar3);
  uVar4 = (*(code *)PTR_json_object_new_object_006118fc)();
  (*(code *)PTR_json_object_array_add_006123e4)(uVar3,uVar4);
  uVar3 = (*(code *)PTR_json_object_new_int_006125f0)(1);
  (*(code *)PTR_json_object_object_add_00612914)(uVar4,&DAT_005ab5dc,uVar3);
  local_50 = (*(code *)PTR_json_object_new_array_006122f4)();
  (*(code *)PTR_json_object_object_add_00612914)(uVar4,"services",local_50);
  piVar9 = (int *)(PTR_hapObjects_00613b3c + 4);
  do {
    if (*piVar9 == 0) {
      DAT_00613d44 = local_54;
      return 0;
    }
    iVar11 = 0;
    uVar3 = (*(code *)PTR_json_object_new_object_006118fc)();
    uVar4 = (*(code *)PTR_json_object_new_string_00613664)(*piVar9);
    (*(code *)PTR_json_object_object_add_00612914)(uVar3,"type",uVar4);
    uVar4 = (*(code *)PTR_json_object_new_int_006125f0)(piVar9[1]);
    (*(code *)PTR_json_object_object_add_00612914)(uVar3,&DAT_005ab5ec,uVar4);
    local_4c = (*(code *)PTR_json_object_new_array_006122f4)();
    (*(code *)PTR_json_object_object_add_00612914)(uVar3,"characteristics",local_4c);
    local_70 = PTR_hapObjects_00613b3c + (iVar10 * 0xb5 + 1) * 8 + 4;
    do {
      (*(code *)PTR_memcpy_006137d0)(&local_c4,local_70,0x48);
      iVar2 = local_80;
      iVar1 = local_84;
      iVar7 = local_b8;
      local_78 = (uint)local_bc;
      local_58 = local_c0;
      local_74 = (uint)local_bb;
      local_34 = (uint)local_b0;
      local_38 = (uint)local_af;
      local_3c = (uint)local_ae;
      local_40 = (uint)local_ad;
      local_5c = (uint)local_a8;
      local_60 = (uint)local_a0;
      local_64 = local_94;
      local_68 = local_8c;
      local_6c = local_88;
      local_44 = (uint)local_98;
      local_48 = (uint)local_90;
      if (local_c4 == 0) goto LAB_0041dcd4;
      local_30 = local_c4;
      uVar4 = (*(code *)PTR_json_object_new_object_006118fc)();
      uVar5 = (*(code *)PTR_json_object_new_string_00613664)(local_30);
      (*(code *)PTR_json_object_object_add_00612914)(uVar4,"type",uVar5);
      uVar5 = (*(code *)PTR_json_object_new_int_006125f0)(local_58);
      (*(code *)PTR_json_object_object_add_00612914)(uVar4,&DAT_005ab5ec,uVar5);
      if (local_78 == 0) {
        (*(code *)PTR_HKReadCharacteristicValue_00613afc)(0,local_58,&local_c8,param_1);
      }
      else {
        local_c8 = local_b4;
      }
      switch(iVar7) {
      case 0:
        pcVar8 = "bool";
        goto LAB_0041d698;
      case 1:
        pcVar8 = "int";
LAB_0041d698:
        uVar5 = (*(code *)PTR_json_object_new_string_00613664)(pcVar8);
        (*(code *)PTR_json_object_object_add_00612914)(uVar4,"format",uVar5);
        pcVar12 = (code *)PTR_json_object_new_int_006125f0;
        if (local_74 == 0) goto joined_r0x0041d7d0;
        goto LAB_0041d7e4;
      case 2:
        uVar5 = (*(code *)PTR_json_object_new_string_00613664)("float");
        (*(code *)PTR_json_object_object_add_00612914)(uVar4,"format",uVar5);
        if ((local_74 != 0) || (local_78 != 0)) {
          uVar13 = (*(code *)PTR___extendsfdf2_00611f30)(local_c8);
          uVar5 = (*(code *)PTR_json_object_new_double_00611e74)
                            ((int)((ulonglong)uVar13 >> 0x20),(int)uVar13);
          goto LAB_0041d7ec;
        }
        goto LAB_0041d868;
      case 3:
        pcVar8 = "string";
        break;
      case 4:
        pcVar8 = "tlv8";
        break;
      case 5:
        pcVar8 = "data";
        break;
      default:
        if (iVar7 != 8) goto LAB_0041d868;
        goto LAB_0041d950;
      case 8:
        if ((local_74 == 0) && (local_78 == 0)) goto LAB_0041d950;
        uVar6 = (*(code *)PTR_json_object_new_string_00613664)(local_c8);
        pcVar8 = "value";
        goto LAB_0041d944;
      }
      uVar5 = (*(code *)PTR_json_object_new_string_00613664)(pcVar8);
      (*(code *)PTR_json_object_object_add_00612914)(uVar4,"format",uVar5);
      pcVar12 = (code *)PTR_json_object_new_string_00613664;
      if (local_74 == 0) {
joined_r0x0041d7d0:
        if (local_78 != 0) goto LAB_0041d7e4;
      }
      else {
LAB_0041d7e4:
        uVar5 = (*pcVar12)(local_c8);
LAB_0041d7ec:
        (*(code *)PTR_json_object_object_add_00612914)(uVar4,"value",uVar5);
      }
LAB_0041d868:
      local_78 = (*(code *)PTR_json_object_new_array_006122f4)();
      if (local_34 != 0) {
        uVar5 = (*(code *)PTR_json_object_new_string_00613664)(&DAT_005ab610);
        (*(code *)PTR_json_object_array_add_006123e4)(local_78,uVar5);
      }
      if (local_38 != 0) {
        uVar5 = (*(code *)PTR_json_object_new_string_00613664)(&DAT_005ab614);
        (*(code *)PTR_json_object_array_add_006123e4)(local_78,uVar5);
      }
      if (local_3c != 0) {
        uVar5 = (*(code *)PTR_json_object_new_string_00613664)(&DAT_005ab618);
        (*(code *)PTR_json_object_array_add_006123e4)(local_78,uVar5);
      }
      pcVar8 = "perms";
      uVar6 = local_78;
LAB_0041d944:
      (*(code *)PTR_json_object_object_add_00612914)(uVar4,pcVar8,uVar6);
LAB_0041d950:
      if (local_40 == 0) {
        if (local_5c != 0) {
LAB_0041da64:
          if (iVar7 == 1) {
            uVar5 = (*(code *)PTR_json_object_new_int_006125f0)(local_a4);
          }
          else {
            if (iVar7 != 2) goto LAB_0041daec;
            uVar13 = (*(code *)PTR___extendsfdf2_00611f30)(local_a4);
            uVar5 = (*(code *)PTR_json_object_new_double_00611e74)
                              ((int)((ulonglong)uVar13 >> 0x20),(int)uVar13);
          }
          (*(code *)PTR_json_object_object_add_00612914)(uVar4,"maxValue",uVar5);
          goto LAB_0041daec;
        }
        if (local_60 != 0) goto LAB_0041daec;
        iVar7 = (*(code *)PTR___nesf2_00611970)(local_64,0);
        if ((iVar7 != 0) || (local_68 != 0)) goto LAB_0041db74;
      }
      else {
        if (iVar7 == 1) {
          uVar5 = (*(code *)PTR_json_object_new_int_006125f0)(local_ac);
LAB_0041da48:
          (*(code *)PTR_json_object_object_add_00612914)(uVar4,"minValue",uVar5);
        }
        else if (iVar7 == 2) {
          uVar13 = (*(code *)PTR___extendsfdf2_00611f30)(local_ac);
          uVar5 = (*(code *)PTR_json_object_new_double_00611e74)
                            ((int)((ulonglong)uVar13 >> 0x20),(int)uVar13);
          goto LAB_0041da48;
        }
        if (local_5c != 0) goto LAB_0041da64;
LAB_0041daec:
        if (local_60 != 0) {
          if (iVar7 == 1) {
            uVar5 = (*(code *)PTR_json_object_new_int_006125f0)(local_9c);
          }
          else {
            if (iVar7 != 2) goto LAB_0041db74;
            uVar13 = (*(code *)PTR___extendsfdf2_00611f30)(local_9c);
            uVar5 = (*(code *)PTR_json_object_new_double_00611e74)
                              ((int)((ulonglong)uVar13 >> 0x20),(int)uVar13);
          }
          (*(code *)PTR_json_object_object_add_00612914)(uVar4,"minStep",uVar5);
        }
LAB_0041db74:
        if (local_44 != 0) {
          uVar13 = (*(code *)PTR___extendsfdf2_00611f30)(local_64);
          uVar5 = (*(code *)PTR_json_object_new_double_00611e74)
                            ((int)((ulonglong)uVar13 >> 0x20),(int)uVar13);
          (*(code *)PTR_json_object_object_add_00612914)(uVar4,"precision",uVar5);
        }
        if (local_48 != 0) {
          uVar5 = (*(code *)PTR_json_object_new_int_006125f0)(local_68);
          (*(code *)PTR_json_object_object_add_00612914)(uVar4,"maxLen",uVar5);
        }
      }
      if (local_6c != 0) {
        uVar5 = (*(code *)PTR_json_object_new_string_00613664)(local_6c);
        (*(code *)PTR_json_object_object_add_00612914)(uVar4,"description",uVar5);
      }
      if (iVar1 != 0) {
        uVar5 = (*(code *)PTR_json_object_new_string_00613664)(iVar1);
        (*(code *)PTR_json_object_object_add_00612914)(uVar4,"format",uVar5);
      }
      if (iVar2 != 0) {
        uVar5 = (*(code *)PTR_json_object_new_string_00613664)(iVar2);
        (*(code *)PTR_json_object_object_add_00612914)(uVar4,&DAT_005ab664,uVar5);
      }
      (*(code *)PTR_json_object_array_add_006123e4)(local_4c,uVar4);
LAB_0041dcd4:
      iVar11 = iVar11 + 1;
      local_70 = local_70 + 0x48;
    } while (iVar11 != 0x14);
    iVar10 = iVar10 + 1;
    (*(code *)PTR_json_object_array_add_006123e4)(local_50,uVar3);
    piVar9 = piVar9 + 0x16a;
    if (iVar10 == 10) {
      DAT_00613d44 = local_54;
      return 0;
    }
  } while( true );
}

