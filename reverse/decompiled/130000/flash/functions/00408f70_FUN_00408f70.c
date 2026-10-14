/* FUN_00408f70 @ 00408f70 */

void FUN_00408f70(undefined4 param_1,int param_2,undefined4 param_3,uint param_4,int param_5,
                 int *param_6)

{
  bool bVar1;
  undefined1 uVar7;
  uint uVar2;
  uint uVar3;
  ushort uVar5;
  ushort uVar6;
  int iVar4;
  char cVar8;
  char *pcVar9;
  undefined4 uVar10;
  byte *pbVar11;
  uint uVar12;
  int iVar13;
  code *pcVar14;
  byte abStack_4c0 [4];
  int local_4bc;
  undefined4 local_4b8;
  int local_4b4;
  byte local_4b0;
  undefined1 auStack_4af [16];
  undefined1 local_49f;
  undefined1 local_49e;
  undefined1 local_49d;
  undefined2 local_49c;
  byte local_498 [4];
  undefined1 local_494;
  undefined1 local_493 [23];
  byte local_47c [6];
  undefined1 local_476 [22];
  undefined2 local_460;
  undefined2 local_45e;
  undefined1 local_45c;
  undefined1 local_45b [23];
  byte local_444 [6];
  undefined1 local_43e [22];
  byte local_428 [6];
  undefined4 local_422;
  undefined1 auStack_41e [22];
  undefined2 local_408;
  undefined2 local_406;
  uint local_404;
  undefined4 local_400;
  byte local_3e8 [31];
  undefined1 local_3c9;
  byte local_3c8 [4];
  undefined1 auStack_3c4 [6];
  undefined1 auStack_3be [34];
  byte local_39c [28];
  undefined1 auStack_380 [20];
  ushort local_36c;
  ushort local_36a;
  ushort local_368;
  ushort local_366;
  byte local_364 [4];
  undefined2 local_360;
  undefined2 local_35e;
  undefined1 local_35c;
  undefined4 local_344;
  undefined1 local_33c [24];
  byte local_324 [16];
  undefined1 local_314;
  undefined1 auStack_313 [6];
  undefined1 local_30d;
  undefined1 auStack_30c [4];
  undefined1 auStack_308 [4];
  undefined4 local_304;
  undefined4 local_300;
  byte local_290 [200];
  undefined1 auStack_1c8 [200];
  byte local_100 [33];
  char local_df;
  undefined1 local_de;
  undefined1 local_dd;
  undefined1 auStack_dc [65];
  undefined1 local_9b;
  undefined1 auStack_9a [27];
  undefined1 auStack_7f [27];
  undefined1 auStack_64 [27];
  undefined1 auStack_49 [37];
  
  local_4b8 = 0;
  (*(code *)PTR_memset_004234dc)(local_39c,0,0x38);
  switch(param_3) {
  case 0:
  case 1:
    pbVar11 = (byte *)&local_4bc;
    local_4bc = (*(code *)PTR_atoi_00423488)(*param_6);
    break;
  case 2:
    pbVar11 = (byte *)*param_6;
    uVar12 = (*(code *)PTR_strlen_00423484)(pbVar11);
    if (uVar12 <= param_4) break;
    pcVar9 = "string value too long!";
    pcVar14 = (code *)PTR_puts_00423594;
    goto LAB_0040ab40;
  case 3:
    iVar13 = *param_6;
    iVar4 = (*(code *)PTR_strlen_00423484)(iVar13);
    if (iVar4 == 10) {
      uVar10 = 10;
LAB_0040aa28:
      pbVar11 = local_290;
      iVar4 = FUN_00404bc0(iVar13,pbVar11,uVar10);
      if (iVar4 != 0) break;
    }
    goto LAB_0040aa40;
  case 4:
    iVar13 = *param_6;
    iVar4 = (*(code *)PTR_strlen_00423484)(iVar13);
    if (iVar4 == 0xc) {
      uVar10 = 0xc;
      goto LAB_0040aa28;
    }
    goto LAB_0040aa40;
  case 5:
    iVar13 = *param_6;
    iVar4 = (*(code *)PTR_strlen_00423484)(iVar13);
    if (iVar4 == 0x1a) {
      uVar10 = 0x1a;
      goto LAB_0040aa28;
    }
LAB_0040aa40:
    pcVar9 = "invalid value!";
    pcVar14 = (code *)PTR_puts_00423594;
    goto LAB_0040ab40;
  case 6:
    pbVar11 = abStack_4c0;
    iVar4 = (*(code *)PTR_inet_aton_004234ec)(*param_6,pbVar11);
    if (iVar4 != 0) break;
LAB_00409fd8:
    pcVar9 = "invalid internet address!";
    pcVar14 = (code *)PTR_puts_00423594;
    goto LAB_0040ab40;
  case 7:
    local_4b8 = (*(code *)PTR_strtoul_00423584)(*param_6,0,10);
    pbVar11 = (byte *)&local_4b8;
    break;
  case 8:
    uVar12 = 0xe;
    if ((6 < param_2 - 0x385U) && (uVar12 = 0xc4, 4 < param_2 - 0x38eU)) {
      if (param_2 == 0x3ae) {
        iVar13 = *param_6;
        iVar4 = (*(code *)PTR_strlen_00423484)(iVar13);
        if (iVar4 == 0x4c) {
          uVar10 = 0x4c;
          goto LAB_0040aa28;
        }
        goto LAB_0040aa40;
      }
      goto switchD_00408ffc_default;
    }
    uVar2 = 0;
    while (((int)uVar2 < (int)uVar12 && (*param_6 != 0))) {
      iVar4 = (*(code *)PTR_sscanf_004234f4)(*param_6,"%d",&local_4bc);
      param_6 = param_6 + 1;
      if (iVar4 == 0) goto LAB_0040aa40;
      local_290[uVar2 + 1] = (byte)local_4bc;
      uVar2 = uVar2 + 1;
    }
    if ((1 < uVar2 - 1) && (pbVar11 = local_290 + 1, uVar2 != uVar12)) {
      (*(code *)PTR_memcpy_004235a4)(auStack_1c8,pbVar11,uVar2);
      FUN_00408d80(param_2,pbVar11);
      (*(code *)PTR_memcpy_004235a4)(pbVar11,auStack_1c8,uVar2);
    }
    iVar4 = 1;
    if (uVar2 == 1) {
      bVar1 = uVar12 == 0;
      while (pbVar11 = local_290 + iVar4, !bVar1) {
        iVar4 = iVar4 + 1;
        *pbVar11 = local_290[1];
        bVar1 = (int)uVar12 < iVar4;
      }
    }
    else if (uVar2 == 2) {
      uVar3 = (uint)local_290[1];
      if ((uVar3 == 0) ||
         ((uVar12 < uVar3 && ((param_2 - 0x385U < 7 || ((param_2 - 0x38eU < 5 && (0xd8 < uVar3))))))
         )) {
        pcVar9 = "invalid channel number";
        pcVar14 = (code *)PTR_puts_00423594;
        goto LAB_0040ab40;
      }
      local_290[3] = 0xff;
    }
    pbVar11 = local_290;
    local_290[0] = (byte)uVar2;
    break;
  case 9:
  default:
switchD_00408ffc_default:
    pcVar9 = "invalid mib!";
    pcVar14 = (code *)PTR_puts_00423594;
    goto LAB_0040ab40;
  case 10:
    iVar13 = *param_6;
    iVar4 = (*(code *)PTR_strcmp_004234bc)(iVar13,&DAT_00412088);
    if (iVar4 == 0) {
      if (param_5 < 2) goto LAB_0040a8f8;
      iVar13 = param_6[1];
      iVar4 = (*(code *)PTR_strlen_00423484)(iVar13);
      if (iVar4 == 0xc) {
        pbVar11 = local_47c;
        iVar4 = FUN_00404bc0(iVar13,pbVar11,0xc);
        if (iVar4 != 0) {
          if (param_5 == 2) {
            local_476[0] = 0;
          }
          else {
            (*(code *)PTR_strcpy_004235d0)(local_476,param_6[2]);
          }
          param_2 = 0x10037;
          break;
        }
      }
      goto LAB_0040aa40;
    }
    iVar4 = (*(code *)PTR_strcmp_004234bc)(iVar13,&DAT_004120ac);
    if (iVar4 == 0) {
      if (param_5 < 2) goto LAB_0040a8f8;
      local_4bc = (*(code *)PTR_atoi_00423488)(param_6[1]);
      iVar4 = FUN_00408d80(0x35,&local_4b4);
      if (iVar4 == 0) {
LAB_0040a35c:
        pcVar9 = "Get port forwarding entry number error!";
        pcVar14 = (code *)PTR_printf_004235c4;
        goto LAB_0040ab40;
      }
      pbVar11 = local_47c;
      if (local_4b4 < local_4bc) goto LAB_0040a960;
      local_47c[0] = (byte)local_4bc;
      iVar4 = FUN_00408d80(0x8036,pbVar11);
      if (iVar4 == 0) goto LAB_0040a6c4;
      param_2 = 0x20038;
    }
    else {
      iVar4 = (*(code *)PTR_strcmp_004234bc)(iVar13,"delall");
      pbVar11 = local_47c;
      if (iVar4 == 0) {
        param_2 = 0x40039;
      }
    }
    break;
  case 0xb:
    iVar13 = *param_6;
    iVar4 = (*(code *)PTR_strcmp_004234bc)(iVar13,&DAT_00412088);
    if (iVar4 == 0) {
      if (param_5 < 3) goto LAB_0040a8f8;
      iVar13 = param_6[1];
      iVar4 = (*(code *)PTR_strlen_00423484)(iVar13);
      if (iVar4 == 0xc) {
        iVar4 = FUN_00404bc0(iVar13,auStack_3c4,0xc);
        pbVar11 = local_3c8;
        if (iVar4 != 0) {
          iVar4 = (*(code *)PTR_inet_aton_004234ec)(param_6[2],pbVar11);
          if (iVar4 == 0) goto LAB_00409fd8;
          if (param_5 != 3) {
            (*(code *)PTR_strcpy_004235d0)(auStack_3be,param_6[3]);
          }
          param_2 = 0x10127;
          break;
        }
      }
      goto LAB_0040aa40;
    }
    iVar4 = (*(code *)PTR_strcmp_004234bc)(iVar13,&DAT_004120ac);
    if (iVar4 == 0) {
      if (param_5 < 2) goto LAB_0040a8f8;
      local_4bc = (*(code *)PTR_atoi_00423488)(param_6[1]);
      iVar4 = FUN_00408d80(0x125,&local_4b4);
      if (iVar4 == 0) {
        pcVar9 = "Get DHCP resvd IP entry number error!";
        pcVar14 = (code *)PTR_printf_004235c4;
        goto LAB_0040ab40;
      }
      pbVar11 = local_3c8;
      if (local_4b4 < local_4bc) goto LAB_0040a960;
      local_3c8[0] = (byte)local_4bc;
      iVar4 = FUN_00408d80(0x8126,pbVar11);
      if (iVar4 == 0) goto LAB_0040a6c4;
      param_2 = 0x20128;
    }
    else {
      iVar4 = (*(code *)PTR_strcmp_004234bc)(iVar13,"delall");
      pbVar11 = local_3c8;
      if (iVar4 == 0) {
        param_2 = 0x40129;
      }
    }
    break;
  case 0xc:
    iVar13 = *param_6;
    iVar4 = (*(code *)PTR_strcmp_004234bc)(iVar13,&DAT_00412088);
    if (iVar4 == 0) {
      pbVar11 = local_364;
      if (param_5 < 6) goto LAB_0040a8f8;
      iVar4 = (*(code *)PTR_inet_aton_004234ec)(param_6[1],pbVar11);
      if (iVar4 == 0) goto LAB_00409fd8;
      local_360 = (*(code *)PTR_atoi_00423488)(param_6[2]);
      local_35e = (*(code *)PTR_atoi_00423488)(param_6[3]);
      local_35c = (*(code *)PTR_atoi_00423488)(param_6[4]);
      local_344 = (*(code *)PTR_atoi_00423488)(param_6[5]);
      if (param_5 == 6) {
        local_33c[0] = 0;
      }
      else {
        (*(code *)PTR_strcpy_004235d0)(local_33c,param_6[6]);
      }
      param_2 = 0x10071;
    }
    else {
      iVar4 = (*(code *)PTR_strcmp_004234bc)(iVar13,&DAT_004120ac);
      if (iVar4 == 0) {
        if (param_5 < 2) goto LAB_0040a8f8;
        local_4bc = (*(code *)PTR_atoi_00423488)(param_6[1]);
        iVar4 = FUN_00408d80(0x6f,&local_4b4);
        if (iVar4 == 0) goto LAB_0040a35c;
        pbVar11 = local_364;
        if (local_4b4 < local_4bc) goto LAB_0040a960;
        local_364[0] = (byte)local_4bc;
        iVar4 = FUN_00408d80(0x8070,pbVar11);
        if (iVar4 == 0) goto LAB_0040a6c4;
        param_2 = 0x20072;
      }
      else {
        iVar4 = (*(code *)PTR_strcmp_004234bc)(iVar13,"delall");
        pbVar11 = local_364;
        if (iVar4 == 0) {
          param_2 = 0x40073;
        }
      }
    }
    break;
  case 0xd:
    iVar13 = *param_6;
    iVar4 = (*(code *)PTR_strcmp_004234bc)(iVar13,&DAT_00412088);
    if (iVar4 == 0) {
      pbVar11 = local_498;
      if (param_5 < 3) goto LAB_0040a8f8;
      iVar4 = (*(code *)PTR_inet_aton_004234ec)(param_6[1],pbVar11);
      if (iVar4 == 0) goto LAB_00409fd8;
      local_494 = (*(code *)PTR_atoi_00423488)(param_6[2]);
      if (param_5 == 3) {
        local_493[0] = 0;
      }
      else {
        (*(code *)PTR_strcpy_004235d0)(local_493,param_6[3]);
      }
      param_2 = 0x10077;
    }
    else {
      iVar4 = (*(code *)PTR_strcmp_004234bc)(iVar13,&DAT_004120ac);
      if (iVar4 == 0) {
        if (param_5 < 2) goto LAB_0040a8f8;
        local_4bc = (*(code *)PTR_atoi_00423488)(param_6[1]);
        iVar4 = FUN_00408d80(0x75,&local_4b4);
        if (iVar4 == 0) goto LAB_0040a35c;
        pbVar11 = local_498;
        if (local_4b4 < local_4bc) goto LAB_0040a960;
        local_498[0] = (byte)local_4bc;
        iVar4 = FUN_00408d80(0x8076,pbVar11);
        if (iVar4 == 0) goto LAB_0040a6c4;
        param_2 = 0x20078;
      }
      else {
        iVar4 = (*(code *)PTR_strcmp_004234bc)(iVar13,"delall");
        pbVar11 = local_498;
        if (iVar4 == 0) {
          param_2 = 0x40079;
        }
      }
    }
    break;
  case 0xe:
    iVar13 = *param_6;
    iVar4 = (*(code *)PTR_strcmp_004234bc)(iVar13,&DAT_00412088);
    if (iVar4 == 0) {
      if (param_5 < 4) goto LAB_0040a8f8;
      pbVar11 = (byte *)&local_460;
      local_460 = (*(code *)PTR_atoi_00423488)(param_6[1]);
      local_45e = (*(code *)PTR_atoi_00423488)(param_6[2]);
      local_45c = (*(code *)PTR_atoi_00423488)(param_6[3]);
      if (param_5 == 4) {
        local_45b[0] = 0;
      }
      else {
        (*(code *)PTR_strcpy_004235d0)(local_45b,param_6[4]);
      }
      param_2 = 0x10083;
    }
    else {
      iVar4 = (*(code *)PTR_strcmp_004234bc)(iVar13,&DAT_004120ac);
      if (iVar4 == 0) {
        if (param_5 < 2) goto LAB_0040a8f8;
        local_4bc = (*(code *)PTR_atoi_00423488)(param_6[1]);
        iVar4 = FUN_00408d80(0x81,&local_4b4);
        if (iVar4 == 0) {
          pcVar9 = "Get port filter entry number error!";
          pcVar14 = (code *)PTR_printf_004235c4;
          goto LAB_0040ab40;
        }
        pbVar11 = (byte *)&local_460;
        if (local_4b4 < local_4bc) goto LAB_0040a960;
        local_460 = CONCAT11((char)local_4bc,(undefined1)local_460);
        iVar4 = FUN_00408d80(0x8082,pbVar11);
        if (iVar4 == 0) goto LAB_0040a6c4;
        param_2 = 0x20084;
      }
      else {
        iVar4 = (*(code *)PTR_strcmp_004234bc)(iVar13,"delall");
        pbVar11 = (byte *)&local_460;
        if (iVar4 == 0) {
          param_2 = 0x40085;
        }
      }
    }
    break;
  case 0xf:
    iVar13 = *param_6;
    iVar4 = (*(code *)PTR_strcmp_004234bc)(iVar13,&DAT_00412088);
    if (iVar4 == 0) {
      if (param_5 < 2) goto LAB_0040a8f8;
      iVar13 = param_6[1];
      iVar4 = (*(code *)PTR_strlen_00423484)(iVar13);
      if (iVar4 == 0xc) {
        pbVar11 = local_444;
        iVar4 = FUN_00404bc0(iVar13,pbVar11,0xc);
        if (iVar4 != 0) {
          if (param_5 == 2) {
            local_43e[0] = 0;
          }
          else {
            (*(code *)PTR_strcpy_004235d0)(local_43e,param_6[2]);
          }
          param_2 = 0x1007d;
          break;
        }
      }
      goto LAB_0040aa40;
    }
    iVar4 = (*(code *)PTR_strcmp_004234bc)(iVar13,&DAT_004120ac);
    if (iVar4 == 0) {
      if (param_5 < 2) goto LAB_0040a8f8;
      local_4bc = (*(code *)PTR_atoi_00423488)(param_6[1]);
      iVar4 = FUN_00408d80(0x7b,&local_4b4);
      if (iVar4 == 0) goto LAB_0040a35c;
      pbVar11 = local_444;
      if (local_4b4 < local_4bc) goto LAB_0040a960;
      local_444[0] = (byte)local_4bc;
      iVar4 = FUN_00408d80(0x807c,pbVar11);
      if (iVar4 == 0) goto LAB_0040a6c4;
      param_2 = 0x2007e;
    }
    else {
      iVar4 = (*(code *)PTR_strcmp_004234bc)(iVar13,"delall");
      pbVar11 = local_444;
      if (iVar4 == 0) {
        param_2 = 0x4007f;
      }
    }
    break;
  case 0x10:
    iVar13 = *param_6;
    iVar4 = (*(code *)PTR_strcmp_004234bc)(iVar13,&DAT_00412088);
    if (iVar4 == 0) {
      if (param_5 < 2) goto LAB_0040a8f8;
      iVar13 = param_6[1];
      iVar4 = (*(code *)PTR_strncmp_00423510)(iVar13,"http://",7);
      if (iVar4 == 0) {
        iVar13 = iVar13 + 7;
      }
      (*(code *)PTR_memcpy_004235a4)(local_3e8,iVar13,0x14);
      pbVar11 = local_3e8;
      if (param_6[2] != 0) {
        local_3c9 = (*(code *)PTR_atoi_00423488)();
      }
      param_2 = 0x100f2;
    }
    else {
      iVar4 = (*(code *)PTR_strcmp_004234bc)(iVar13,&DAT_004120ac);
      if (iVar4 == 0) {
        if (param_5 < 2) goto LAB_0040a8f8;
        local_4bc = (*(code *)PTR_atoi_00423488)(param_6[1]);
        iVar4 = FUN_00408d80(0xf0,&local_4b4);
        if (iVar4 == 0) goto LAB_0040a35c;
        pbVar11 = local_3e8;
        if (local_4b4 < local_4bc) goto LAB_0040a960;
        local_3e8[0] = (byte)local_4bc;
        iVar4 = FUN_00408d80(0x80f1,pbVar11);
        if (iVar4 == 0) goto LAB_0040a6c4;
        param_2 = 0x200f3;
      }
      else {
        iVar4 = (*(code *)PTR_strcmp_004234bc)(iVar13,"delall");
        pbVar11 = local_3e8;
        if (iVar4 == 0) {
          param_2 = 0x400f4;
        }
      }
    }
    break;
  case 0x11:
    iVar13 = *param_6;
    iVar4 = (*(code *)PTR_strcmp_004234bc)(iVar13,&DAT_00412088);
    if (iVar4 == 0) {
      if (param_5 < 7) {
LAB_0040a8f8:
        pcVar9 = "input argument is not enough!";
        pcVar14 = (code *)PTR_puts_00423594;
        goto LAB_0040ab40;
      }
      local_408 = (*(code *)PTR_atoi_00423488)(param_6[1]);
      pbVar11 = (byte *)&local_408;
      local_406 = (*(code *)PTR_atoi_00423488)(param_6[2]);
      uVar7 = (*(code *)PTR_atoi_00423488)(param_6[3]);
      local_404 = CONCAT13(uVar7,local_404._1_3_);
      uVar2 = (*(code *)PTR_atoi_00423488)(param_6[4]);
      uVar12 = local_404;
      uVar2 = (uVar2 & 0xffff) << 8;
      local_404 = local_404 & 0xff0000ff | uVar2;
      uVar3 = (*(code *)PTR_atoi_00423488)(param_6[5]);
      local_404 = uVar12 & 0xff000000 | uVar2 | (uVar3 & 0xffff) >> 8;
      local_400 = local_400 & 0xffffff | uVar3 << 0x18;
      uVar7 = (*(code *)PTR_atoi_00423488)(param_6[6]);
      local_400._1_3_ = CONCAT12(uVar7,local_400._2_2_);
      if (param_5 == 7) {
        local_400 = CONCAT22(local_400._0_2_,local_400._2_2_) & 0xffff00ff;
      }
      else {
        (*(code *)PTR_strcpy_004235d0)((int)&local_400 + 2,param_6[7]);
      }
      param_2 = 0x10089;
    }
    else {
      iVar4 = (*(code *)PTR_strcmp_004234bc)(iVar13,&DAT_004120ac);
      if (iVar4 == 0) {
        if (1 < param_5) {
          local_4bc = (*(code *)PTR_atoi_00423488)(param_6[1]);
          iVar4 = FUN_00408d80(0x87,&local_4b4);
          if (iVar4 == 0) {
            pcVar9 = "Get trigger-port entry number error!";
            pcVar14 = (code *)PTR_printf_004235c4;
          }
          else {
            pbVar11 = (byte *)&local_408;
            if (local_4b4 < local_4bc) goto LAB_0040a960;
            local_408 = CONCAT11((char)local_4bc,(undefined1)local_408);
            iVar4 = FUN_00408d80(0x8088,pbVar11);
            if (iVar4 != 0) {
              param_2 = 0x2008a;
              break;
            }
            pcVar9 = "Get trigger-port table entry error!";
            pcVar14 = (code *)PTR_printf_004235c4;
          }
          goto LAB_0040ab40;
        }
        goto LAB_0040a8f8;
      }
      iVar4 = (*(code *)PTR_strcmp_004234bc)(iVar13,"delall");
      pbVar11 = (byte *)&local_408;
      if (iVar4 == 0) {
        param_2 = 0x4008b;
      }
    }
    break;
  case 0x12:
    iVar13 = *param_6;
    iVar4 = (*(code *)PTR_strcmp_004234bc)(iVar13,&DAT_00412088);
    if (iVar4 == 0) {
      if (param_5 < 3) goto LAB_0040a8f8;
      iVar13 = param_6[1];
      iVar4 = (*(code *)PTR_strlen_00423484)(iVar13);
      if (iVar4 == 0xc) {
        pbVar11 = local_428;
        iVar4 = FUN_00404bc0(iVar13,pbVar11,0xc);
        if (iVar4 != 0) {
          (*(code *)PTR_strcpy_004235d0)(auStack_41e,param_6[2]);
          param_2 = 0x10042;
          local_422 = (*(code *)PTR_strtoul_00423584)(param_6[3],0,10);
          break;
        }
      }
      goto LAB_0040aa40;
    }
    iVar4 = (*(code *)PTR_strcmp_004234bc)(iVar13,&DAT_004120ac);
    if (iVar4 == 0) {
      if (param_5 < 2) goto LAB_0040a8f8;
      local_4bc = (*(code *)PTR_atoi_00423488)(param_6[1]);
      iVar4 = FUN_00408d80(0x40,&local_4b4);
      if (iVar4 == 0) {
        pcVar9 = "Get wds number error!";
        pcVar14 = (code *)PTR_printf_004235c4;
        goto LAB_0040ab40;
      }
      pbVar11 = local_428;
      if (local_4b4 < local_4bc) goto LAB_0040a960;
      local_428[0] = (byte)local_4bc;
      iVar4 = FUN_00408d80(0x8041,pbVar11);
      if (iVar4 == 0) goto LAB_0040a6c4;
      param_2 = 0x20043;
    }
    else {
      iVar4 = (*(code *)PTR_strcmp_004234bc)(iVar13,"delall");
      pbVar11 = local_428;
      if (iVar4 == 0) {
        param_2 = 0x40044;
      }
    }
    break;
  case 0x13:
    iVar13 = *param_6;
    iVar4 = (*(code *)PTR_strcmp_004234bc)(iVar13,&DAT_00412088);
    if (iVar4 == 0) {
      if (param_5 < 9) goto LAB_0040a8f8;
      pbVar11 = local_324;
      local_314 = (*(code *)PTR_atoi_00423488)(param_6[1]);
      iVar4 = (*(code *)PTR_inet_aton_004234ec)(param_6[4],auStack_30c);
      if ((iVar4 == 0) ||
         (iVar4 = (*(code *)PTR_inet_aton_004234ec)(param_6[5],auStack_308), iVar4 == 0))
      goto LAB_00409fd8;
      iVar13 = param_6[2];
      iVar4 = (*(code *)PTR_strlen_00423484)(iVar13);
      if ((iVar4 != 0xc) || (iVar4 = FUN_00404bc0(iVar13,auStack_313,0xc), iVar4 == 0)) {
        pcVar9 = "invalid MAC address!";
        pcVar14 = (code *)PTR_puts_00423594;
        goto LAB_0040ab40;
      }
      param_2 = 0x10138;
      local_30d = (*(code *)PTR_atoi_00423488)(param_6[3]);
      local_304 = (*(code *)PTR_atoi_00423488)(param_6[6]);
      (*(code *)PTR_strcpy_004235d0)(pbVar11,param_6[7]);
      local_300 = (*(code *)PTR_atoi_00423488)(param_6[8]);
    }
    else {
      iVar4 = (*(code *)PTR_strcmp_004234bc)(iVar13,&DAT_004120ac);
      if (iVar4 == 0) {
        if (param_5 < 2) goto LAB_0040a8f8;
        local_4bc = (*(code *)PTR_atoi_00423488)(param_6[1]);
        iVar4 = FUN_00408d80(0x136,&local_4b4);
        if (iVar4 == 0) {
          pcVar9 = "Get QoS entry number error!";
          pcVar14 = (code *)PTR_printf_004235c4;
          goto LAB_0040ab40;
        }
        pbVar11 = local_324;
        if (local_4b4 < local_4bc) goto LAB_0040a960;
        local_324[0] = (byte)local_4bc;
        iVar4 = FUN_00408d80(0x8137,pbVar11);
        if (iVar4 == 0) goto LAB_0040a6c4;
        param_2 = 0x20139;
      }
      else {
        iVar4 = (*(code *)PTR_strcmp_004234bc)(iVar13,"delall");
        pbVar11 = local_324;
        if (iVar4 == 0) {
          param_2 = 0x4013a;
        }
      }
    }
    break;
  case 0x14:
    iVar13 = *param_6;
    iVar4 = (*(code *)PTR_strcmp_004234bc)(iVar13,&DAT_00412088);
    if (iVar4 == 0) {
      if (param_5 < 2) {
LAB_0040a4ac:
        pcVar9 = "Mesh Acl Addr input argument is not enough!";
        pcVar14 = (code *)PTR_puts_00423594;
      }
      else {
        iVar13 = param_6[1];
        iVar4 = (*(code *)PTR_strlen_00423484)(iVar13);
        if (iVar4 == 0xc) {
          pbVar11 = local_47c;
          iVar4 = FUN_00404bc0(iVar13,pbVar11,0xc);
          if (iVar4 != 0) {
            if (param_5 == 2) {
              local_476[0] = 0;
            }
            else {
              (*(code *)PTR_strcpy_004235d0)(local_476,param_6[2]);
            }
            param_2 = 0x10247;
            break;
          }
        }
        pcVar9 = "Mesh Acl Addr invalid value!";
        pcVar14 = (code *)PTR_puts_00423594;
      }
    }
    else {
      iVar4 = (*(code *)PTR_strcmp_004234bc)(iVar13,&DAT_004120ac);
      if (iVar4 != 0) {
        iVar4 = (*(code *)PTR_strcmp_004234bc)(iVar13,"delall");
        pbVar11 = local_47c;
        if (iVar4 == 0) {
          param_2 = 0x40249;
        }
        break;
      }
      if (param_5 < 2) goto LAB_0040a4ac;
      local_4bc = (*(code *)PTR_atoi_00423488)(param_6[1]);
      iVar4 = FUN_00408d80(0x245,&local_4b4);
      if (iVar4 == 0) {
        pcVar9 = "Mesh Acl Addr get port forwarding entry number error!";
        pcVar14 = (code *)PTR_printf_004235c4;
      }
      else {
        pbVar11 = local_47c;
        if (local_4b4 < local_4bc) {
          pcVar9 = "Mesh Acl Addr element number is too large!";
          pcVar14 = (code *)PTR_puts_00423594;
        }
        else {
          local_47c[0] = (byte)local_4bc;
          iVar4 = FUN_00408d80(0x8246,pbVar11);
          if (iVar4 != 0) {
            param_2 = 0x20248;
            break;
          }
          pcVar9 = "Mesh Acl Addr get table entry error!";
          pcVar14 = (code *)PTR_printf_004235c4;
        }
      }
    }
    goto LAB_0040ab40;
  case 0x15:
    iVar4 = (*(code *)PTR_strcmp_004234bc)(*param_6,&DAT_004121c4);
    if (iVar4 != 0) {
LAB_00409f2c:
      (*(code *)PTR_printf_004235c4)
                ("cmd not support! try\n flash set [MIB] mod [index(1-%d)] [Enable(0/1)] [day(0-7)] [formTime(min,0-1440)] [toTime(min,0-1440)]\n"
                 ,10);
      return;
    }
    if (param_5 < 5) goto LAB_0040a8f8;
    local_4bc = (*(code *)PTR_atoi_00423488)(param_6[1]);
    iVar4 = FUN_00408d80(0x1f8,&local_4b4);
    if (iVar4 == 0) {
      pcVar9 = "Get WLAN_SCHEDULE entry number error!";
      pcVar14 = (code *)PTR_printf_004235c4;
    }
    else if ((local_4b4 < local_4bc) || (local_4bc < 1)) {
      pcVar9 = "Element number must be 1-10!";
      pcVar14 = (code *)PTR_puts_00423594;
    }
    else {
      local_39c[0] = (byte)local_4bc;
      iVar4 = FUN_00408d80(0x81f9,local_39c);
      if (iVar4 != 0) {
        (*(code *)PTR_memcpy_004235a4)(auStack_380,local_39c,0x1c);
        local_36c = (*(code *)PTR_atoi_00423488)(param_6[2]);
        bVar1 = 1 < local_36c;
        uVar5 = (*(code *)PTR_atoi_00423488)(param_6[3]);
        local_366 = uVar5;
        uVar6 = (*(code *)PTR_atoi_00423488)(param_6[4]);
        local_36a = uVar6;
        local_368 = (*(code *)PTR_atoi_00423488)(param_6[5]);
        if ((((bVar1) || (7 < uVar5)) || (0x59f < uVar6)) ||
           ((0x59f < local_368 || (local_368 < uVar6)))) goto LAB_00409f2c;
        param_2 = 0x1201fb;
        pbVar11 = local_39c;
        break;
      }
LAB_0040a6c4:
      pcVar9 = "Get table entry error!";
      pcVar14 = (code *)PTR_printf_004235c4;
    }
    goto LAB_0040ab40;
  case 0x16:
    iVar13 = *param_6;
    iVar4 = (*(code *)PTR_strcmp_004234bc)(iVar13,&DAT_00412088);
    if (iVar4 == 0) {
      if (param_5 < 6) goto LAB_0040a8f8;
      pbVar11 = &local_4b0;
      local_4b0 = (*(code *)PTR_atoi_00423488)(param_6[1]);
      param_2 = 0x1026b;
      (*(code *)PTR_strcpy_004235d0)(auStack_4af,param_6[2]);
      local_49f = (*(code *)PTR_atoi_00423488)(param_6[3]);
      local_49e = (*(code *)PTR_atoi_00423488)(param_6[4]);
      local_49d = (*(code *)PTR_atoi_00423488)(param_6[5]);
      local_49c = (*(code *)PTR_atoi_00423488)(param_6[6]);
    }
    else {
      iVar4 = (*(code *)PTR_strcmp_004234bc)(iVar13,&DAT_004120ac);
      if (iVar4 == 0) {
        if (param_5 < 8) goto LAB_0040a8f8;
        local_4bc = (*(code *)PTR_atoi_00423488)(param_6[1]);
        iVar4 = FUN_00408d80(0x269,&local_4b4);
        if (iVar4 == 0) {
          pcVar9 = "Get VLAN config entry number error!";
          pcVar14 = (code *)PTR_printf_004235c4;
          goto LAB_0040ab40;
        }
        pbVar11 = &local_4b0;
        if (local_4b4 < local_4bc) goto LAB_0040a960;
        local_4b0 = (byte)local_4bc;
        iVar4 = FUN_00408d80(0x826a,pbVar11);
        if (iVar4 == 0) goto LAB_0040a6c4;
        local_4b0 = 0;
        param_2 = 0x2026c;
      }
      else {
        iVar4 = (*(code *)PTR_strcmp_004234bc)(iVar13,"delall");
        pbVar11 = &local_4b0;
        if (iVar4 == 0) {
          param_2 = 0x4026d;
        }
      }
    }
    break;
  case 0x17:
    iVar13 = *param_6;
    iVar4 = (*(code *)PTR_strcmp_004234bc)(iVar13,&DAT_00412088);
    if (iVar4 == 0) {
      iVar4 = (*(code *)PTR_strcmp_004234bc)(param_1,"PROFILE_TBL1");
      if (iVar4 == 0) {
        param_2 = 0x10837;
      }
      else {
        param_2 = 0x10849;
      }
      (*(code *)PTR_strcpy_004235d0)(local_100,param_6[1]);
      cVar8 = (*(code *)PTR_atoi_00423488)(param_6[2]);
      local_df = cVar8;
      local_de = (*(code *)PTR_atoi_00423488)(param_6[3]);
      if ((byte)(cVar8 - 1U) < 2) {
        local_9b = (*(code *)PTR_atoi_00423488)(param_6[4]);
        if (cVar8 == '\x01') {
          FUN_00404bc0(param_6[5],auStack_9a,10);
          FUN_00404bc0(param_6[6],auStack_7f,10);
          FUN_00404bc0(param_6[7],auStack_64,10);
          iVar4 = param_6[8];
          uVar10 = 10;
        }
        else {
          FUN_00404bc0(param_6[5],auStack_9a,0x1a);
          FUN_00404bc0(param_6[6],auStack_7f,0x1a);
          FUN_00404bc0(param_6[7],auStack_64,0x1a);
          iVar4 = param_6[8];
          uVar10 = 0x1a;
        }
        FUN_00404bc0(iVar4,auStack_49,uVar10);
      }
      else {
        if (1 < (byte)(cVar8 - 3U)) {
LAB_0040aa90:
          pbVar11 = local_100;
          break;
        }
        local_dd = (*(code *)PTR_atoi_00423488)(param_6[4]);
        (*(code *)PTR_strcpy_004235d0)(auStack_dc,param_6[5]);
      }
    }
    else {
      iVar4 = (*(code *)PTR_strcmp_004234bc)(iVar13,&DAT_004120ac);
      if (iVar4 != 0) {
        iVar4 = (*(code *)PTR_strcmp_004234bc)(iVar13,"delall");
        if (iVar4 != 0) goto LAB_0040aa90;
        iVar4 = (*(code *)PTR_strcmp_004234bc)(param_1,"PROFILE_TBL1");
        pbVar11 = local_100;
        if (iVar4 == 0) {
          param_2 = 0x40839;
        }
        else {
          param_2 = 0x4084b;
        }
        break;
      }
      iVar4 = (*(code *)PTR_strcmp_004234bc)(param_1,"PROFILE_TBL1");
      if (iVar4 == 0) {
        param_2 = 0x20838;
      }
      else {
        param_2 = 0x2084a;
      }
      if (param_5 < 2) goto LAB_0040a8f8;
      local_4bc = (*(code *)PTR_atoi_00423488)(param_6[1]);
      iVar4 = (*(code *)PTR_strcmp_004234bc)(param_1,"PROFILE_TBL1");
      uVar10 = 0x835;
      if (iVar4 != 0) {
        uVar10 = 0x847;
      }
      FUN_00408d80(uVar10,&local_4b4);
      if (local_4b4 < local_4bc) {
LAB_0040a960:
        pcVar9 = "Element number is too large!";
        pcVar14 = (code *)PTR_puts_00423594;
        goto LAB_0040ab40;
      }
      local_100[0] = (byte)local_4bc;
      iVar4 = (*(code *)PTR_strcmp_004234bc)(param_1,"PROFILE_TBL1");
      uVar10 = 0x8836;
      if (iVar4 != 0) {
        uVar10 = 0x8848;
      }
      FUN_00408d80(uVar10,local_100);
    }
    pbVar11 = local_100;
  }
  pcVar14 = (code *)PTR_apmib_set_00423544;
  if (DAT_00423600 - 3U < 2) {
    pcVar14 = (code *)PTR_apmib_setDef_00423598;
  }
  iVar4 = (*pcVar14)(param_2,pbVar11);
  if (iVar4 == 0) {
    (*(code *)PTR_puts_00423594)("set MIB failed!");
  }
  (*(code *)PTR_puts_00423594)("setMIB end...");
  if (DAT_00423600 != 0) {
    if (DAT_00423600 - 1U < 2) {
      pcVar9 = (char *)0x1;
      pcVar14 = (code *)PTR_apmib_update_00423548;
    }
    else {
      pcVar9 = (char *)0x2;
      pcVar14 = (code *)PTR_apmib_update_00423548;
      if (1 < DAT_00423600 - 3U) {
        pcVar9 = (char *)0x4;
        pcVar14 = (code *)PTR_apmib_update_00423548;
      }
    }
LAB_0040ab40:
    (*pcVar14)(pcVar9);
  }
  return;
}

