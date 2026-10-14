/* Ghidra-generated pseudo-C; not original source or a buildable project. */
/* boot_entry @ 80400408 */

/* WARNING: This function may have set the stack pointer */

void boot_entry(void)

{
  undefined4 *puVar1;
  
  setCopReg(0,Status,0);
  setCopReg(0,Status,Status & 0xfffffffc);
  setCopReg(0,Cause,0);
  FUN_80400498();
  FUN_80400568();
  DAT_8040ee70 = &DAT_80422ed4;
  setCopReg(0,Status,Status | 0x80000000);
  puVar1 = &DAT_8040ee40;
  DAT_8040ee40 = 0;
  do {
    puVar1 = puVar1 + 1;
    *puVar1 = 0;
  } while (puVar1 != (undefined4 *)&UNK_80422ef0);
  FUN_804063b0(Status | 0x80000000);
  (*(code *)&LAB_a04004ac)();
  return;
}


/* FUN_80400498 @ 80400498 */

void FUN_80400498(void)

{
  (*(code *)&LAB_a04004ac)();
  return;
}


/* FUN_80400568 @ 80400568 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80400568(void)

{
  return;
}


/* FUN_804009f8 @ 804009f8 */

undefined4 FUN_804009f8(int param_1,undefined4 param_2)

{
  setCopReg(0,Status,(Status | 1) ^ 1);
  *(undefined4 *)(&DAT_8040ee84 + param_1 * 4) = param_2;
  setCopReg(0,Status,Status & 1 | (Status | 1) ^ 1);
  return 0;
}


/* FUN_80400a54 @ 80400a54 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_80400a54(uint param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if (param_1 < 0x40) {
    *(undefined4 *)(param_2 + 0x10) = param_3;
    uVar1 = FUN_804009f8();
    _DAT_b8003000 = _DAT_b8003000 | 1 << (param_1 & 0x1f);
  }
  else {
    uVar1 = 0xffffffea;
  }
  return uVar1;
}


/* FUN_80400ae4 @ 80400ae4 */

void FUN_80400ae4(int param_1,undefined4 param_2)

{
  *(undefined4 *)(&DAT_8040fdd0 + param_1 * 4) = param_2;
  return;
}


/* FUN_80400afc @ 80400afc */

/* WARNING: Control flow encountered bad instruction data */

void FUN_80400afc(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* FUN_80400c8c @ 80400c8c */

void FUN_80400c8c(int param_1)

{
  FUN_804079cc(s_cp0_cause__X__cp0_epc__X__ra__X_8040d1c4,Cause,EPC,*(undefined4 *)(param_1 + 0x94))
  ;
  FUN_804079cc(s_Undefined_Exception_happen__8040d1e4);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* FUN_80400cc4 @ 80400cc4 */

void FUN_80400cc4(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(&DAT_8040ee84 + param_1 * 4);
  if (puVar1 != (undefined4 *)0x0) {
    (*(code *)*puVar1)(param_1,puVar1[4],param_2);
    return;
  }
  FUN_804079cc(s_cp0_cause__X__cp0_epc__X_8040d200,Cause,EPC);
  FUN_804079cc(s_you_got_irq__X_8040d21c,param_1);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* FUN_80400d40 @ 80400d40 */

void FUN_80400d40(uint param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if ((param_1 & 1) != 0) {
      FUN_80400cc4(iVar1,param_2);
    }
    iVar1 = iVar1 + 1;
    param_1 = (int)param_1 >> 1;
  } while (iVar1 != 0x20);
  return;
}


/* FUN_80400dd8 @ 80400dd8 */

void FUN_80400dd8(void)

{
  DAT_80410050 = 0xc0a80106;
  DAT_8041005c = 0xc0a20174;
  DAT_80410059 = DAT_8040e8f5;
  DAT_80410058 = DAT_8040e8f4;
  DAT_80410057 = DAT_8040e8f3;
  DAT_80410056 = DAT_8040e8f2;
  DAT_80410055 = DAT_8040e8f1;
  DAT_80410054 = DAT_8040e8f0;
  DAT_8040ee54 = 0;
  DAT_8040ee48 = &DAT_80410074;
  DAT_8040ee4c = 0;
  DAT_8040ee44 = 0;
  DAT_8040ef9c = 0;
  DAT_8040efa0 = 0;
  DAT_8040ee40 = DAT_8040e5d8;
  DAT_8040ee60 = 0;
  DAT_8040ee58 = 0;
  DAT_8040ee50 = 0x832;
  DAT_8040ef94 = 1;
  return;
}


/* FUN_80400ebc @ 80400ebc */

uint FUN_80400ebc(ushort *param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = 0;
  for (param_2 = param_2 >> 1; param_2 != 0; param_2 = param_2 + -1) {
    uVar1 = uVar1 + *param_1;
    if (0xffff < uVar1) {
      uVar1 = uVar1 - 0xffff;
    }
    param_1 = param_1 + 1;
  }
  return ~uVar1 & 0xffff;
}


/* FUN_80400f08 @ 80400f08 */

void FUN_80400f08(void)

{
  int iVar1;
  ushort uVar2;
  int iVar3;
  
  iVar1 = DAT_8040ee48;
  if (0x29 < DAT_8040ee4c) {
    uVar2 = (short)*(char *)(DAT_8040ee48 + 0xc) << 8 | (short)*(char *)(DAT_8040ee48 + 0xd);
    if (uVar2 == 0x800) {
      if ((((0x2a < DAT_8040ee4c) && (*(char *)(DAT_8040ee48 + 0xe) == 'E')) &&
          (((uint)*(byte *)(DAT_8040ee48 + 0x1e) << 0x18 |
            (uint)*(byte *)(DAT_8040ee48 + 0x1f) << 0x10 | (uint)*(byte *)(DAT_8040ee48 + 0x20) << 8
           | (uint)*(byte *)(DAT_8040ee48 + 0x21)) == DAT_80410050)) &&
         ((iVar3 = FUN_80400ebc((char *)(DAT_8040ee48 + 0xe),0x14), iVar3 == 0 &&
          (*(char *)(iVar1 + 0x17) == '\x11')))) {
        switch(*(undefined2 *)(DAT_8040ee48 + 0x2a)) {
        default:
          goto switchD_80401054_caseD_0;
        case 1:
          iVar1 = 2;
          if (DAT_8040ef9c != '\0') {
            return;
          }
          break;
        case 2:
          if (DAT_8040ef9c == '\0') {
            DAT_8040ef98 = FUN_80409050();
            iVar1 = 3;
          }
          else {
            if ((DAT_8040ee44 != 1) && (iVar1 = FUN_80409050(), iVar1 - DAT_8040ef98 < 0x7d1)) {
              return;
            }
            DAT_8040ef98 = FUN_80409050();
            iVar1 = 3;
          }
          break;
        case 3:
          DAT_8040ef98 = FUN_80409050();
          iVar1 = 4;
          break;
        case 4:
          iVar1 = 5;
          break;
        case 5:
          iVar1 = 6;
          break;
        case 6:
          iVar1 = 7;
        }
        (*(code *)(&PTR_LAB_8040a6fc)[DAT_8040ee54 * 8 + iVar1])();
      }
    }
    else if (uVar2 == 0x806) {
      if (*(short *)(DAT_8040ee48 + 0x14) == 1) {
        iVar1 = FUN_80406a80(DAT_8040ee48 + 0x26,&DAT_80410050,4);
        iVar3 = 0;
        if (iVar1 != 0) {
          return;
        }
      }
      else {
        iVar3 = 1;
        if (*(short *)(DAT_8040ee48 + 0x14) != 2) {
          return;
        }
      }
      (*(code *)(&PTR_LAB_8040a6fc)[DAT_8040ee54 * 8 + iVar3])();
    }
  }
switchD_80401054_caseD_0:
  return;
}


/* FUN_804011a4 @ 804011a4 */

void FUN_804011a4(void)

{
  if (DAT_8040ef94 != 0) {
    FUN_804077a4(s_Boot_state_error__d__d_8040d248,DAT_8040ee54,DAT_8040ee64);
  }
  return;
}


/* FUN_804011e8 @ 804011e8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_804011e8(void)

{
  DAT_8040ee5c = 0xbfc00000;
  _DAT_b8003000 = 0;
  setCopReg(0,Status,(Status | 1) ^ 1);
  FUN_80406454();
  FUN_804077a4(s_reboot________8040d260);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* FUN_80401340 @ 80401340 */

void FUN_80401340(undefined4 param_1,ushort param_2)

{
  uint uVar1;
  uint uVar2;
  undefined1 local_5c8;
  undefined1 local_5c7;
  undefined2 local_5c6;
  undefined2 local_5c4;
  undefined2 local_5c2;
  undefined1 local_5c0;
  undefined1 local_5bf;
  undefined2 local_5be;
  undefined4 local_5bc;
  undefined4 local_5b8;
  undefined2 local_5b4;
  undefined2 local_5b2;
  short local_5b0;
  undefined2 local_5ae;
  undefined2 local_5ac;
  ushort local_5aa;
  undefined1 auStack_5a8 [1432];
  
  uVar1 = (uint)param_2;
  if (uVar1 << 9 == DAT_8040ee58 + 0x200) {
    DAT_8040efa0 = 1;
    uVar2 = 0;
  }
  else if (DAT_8040ee58 < uVar1 << 9) {
    uVar2 = (1 - uVar1) * 0x200 + DAT_8040ee58;
    DAT_8040efa0 = 1;
  }
  else {
    uVar2 = 0x200;
  }
  local_5ac = 3;
  FUN_80406a54(auStack_5a8,(uVar1 - 1) * 0x200 + DAT_8040e5d8,uVar2);
  local_5c8 = 0x45;
  local_5c7 = 0;
  uVar1 = (uVar2 & 0xffff) + 0x20;
  local_5c6 = (undefined2)uVar1;
  local_5c4 = 0;
  local_5c2 = 0;
  local_5c0 = 0x3c;
  local_5bf = 0x11;
  local_5be = 0;
  local_5bc = DAT_80410050;
  local_5b8 = DAT_8041005c;
  local_5aa = param_2;
  local_5be = FUN_80400ebc(&local_5c8,0x14);
  local_5b4 = DAT_8040ee50;
  local_5b2 = DAT_8040ee52;
  local_5b0 = (short)uVar2 + 0xc;
  local_5ae = 0;
  FUN_80407434();
  FUN_80402380(0,0x800,&DAT_80410060,&local_5c8,uVar1 & 0xffff);
  return;
}


/* FUN_804014ac @ 804014ac */

void FUN_804014ac(void)

{
  if (DAT_8040ef94 != 0) {
    if (*(short *)(DAT_8040ee48 + 0x24) == DAT_8040ee50) {
      DAT_8040ee52 = *(undefined2 *)(DAT_8040ee48 + 0x22);
      if (*(short *)(DAT_8040ee48 + 0x2c) == DAT_8040ee44) {
        DAT_8040ee44 = DAT_8040ee44 + 1;
        if (DAT_8040efa0 == 0) {
          FUN_80401340(&DAT_8040fe50,DAT_8040ee44);
        }
        else {
          DAT_8040ee54 = 0;
          DAT_8040ef9c = 0;
          FUN_804077a4(s__TFTP_Client_Download_Success__F_8040d27c,DAT_8040ee58);
          FUN_804077a4(s__Success___s_8040d2b4,s_<RealTek>_8040d2c4);
          DAT_8040ee48 = &DAT_80410074;
          DAT_8040ee4c = 0;
          DAT_8040ee44 = 0;
          DAT_8040efa0 = 0;
        }
      }
      else {
        FUN_804077a4(s___TFTP___8040d270);
        FUN_80401340(&DAT_8040fe50,DAT_8040ee44);
      }
    }
  }
  return;
}


/* FUN_804015f8 @ 804015f8 */

void FUN_804015f8(void)

{
  char *pcVar1;
  char *pcVar2;
  undefined2 *puVar3;
  int iVar4;
  
  if ((DAT_8040ef94 != 0) &&
     (puVar3 = (undefined2 *)(DAT_8040ee48 + 0x22), *(short *)(DAT_8040ee48 + 0x24) == 0x45)) {
    FUN_804077a4(s_File_Start___x_length__x_8040d2d0,DAT_8040e5d8,DAT_8040ee58);
    DAT_8041005c = *(undefined4 *)(DAT_8040ee48 + 0x1a);
    DAT_80410060 = *(undefined4 *)(DAT_8040ee48 + 6);
    DAT_80410064 = *(undefined1 *)(DAT_8040ee48 + 10);
    DAT_80410065 = *(undefined1 *)(DAT_8040ee48 + 0xb);
    DAT_8040ee52 = *puVar3;
    pcVar2 = (char *)(DAT_8040ee48 + 0x2c);
    if (*pcVar2 == '\0') {
      iVar4 = 0;
    }
    else {
      iVar4 = 1;
      pcVar1 = (char *)(DAT_8040ee48 + 0x2d);
      do {
        if (*pcVar1 == '\0') break;
        iVar4 = iVar4 + 1;
        pcVar1 = pcVar2 + iVar4;
      } while (iVar4 != 0x200);
    }
    FUN_80406a54(&DAT_8040fe50,pcVar2,iVar4);
    (&DAT_8040fe50)[iVar4] = 0;
    DAT_80410060 = *(undefined4 *)(DAT_8040ee48 + 6);
    DAT_80410064 = *(undefined1 *)(DAT_8040ee48 + 10);
    DAT_80410065 = *(undefined1 *)(DAT_8040ee48 + 0xb);
    FUN_804077a4(s___TFTP_GET_File__s_Size__X_Byte_8040d2ec,&DAT_8040fe50,DAT_8040ee58);
    DAT_8040ef9c = 1;
    FUN_80401340(&DAT_8040fe50,1);
    DAT_8040ee44 = 1;
    DAT_8040ee54 = 1;
  }
  return;
}


/* FUN_804017b4 @ 804017b4 */

void FUN_804017b4(undefined2 param_1)

{
  undefined1 local_5c0;
  undefined1 local_5bf;
  undefined2 local_5be;
  undefined2 local_5bc;
  undefined2 local_5ba;
  undefined1 local_5b8;
  undefined1 local_5b7;
  undefined2 local_5b6;
  undefined4 local_5b4;
  undefined4 local_5b0;
  undefined2 local_5ac;
  undefined2 local_5aa;
  undefined2 local_5a8;
  undefined2 local_5a6;
  undefined2 local_5a4;
  undefined2 local_5a2;
  
  local_5a4 = 4;
  local_5c0 = 0x45;
  local_5bf = 0;
  local_5be = 0x20;
  local_5bc = 0;
  local_5ba = 0;
  local_5b8 = 0x3c;
  local_5b7 = 0x11;
  local_5b6 = 0;
  local_5b4 = DAT_80410050;
  local_5b0 = DAT_8041005c;
  local_5a2 = param_1;
  local_5b6 = FUN_80400ebc(&local_5c0,0x14);
  local_5ac = DAT_8040ee50;
  local_5aa = DAT_8040ee52;
  local_5a8 = 0xc;
  local_5a6 = 0;
  FUN_80402380(0,0x800,&DAT_80410060,&local_5c0,0x20);
  return;
}


/* FUN_8040188c @ 8040188c */

void FUN_8040188c(void)

{
  int iVar1;
  int iVar2;
  
  if (DAT_8040ef94 == 0) {
    return;
  }
  if (*(short *)(DAT_8040ee48 + 0x24) != 0x45) {
    return;
  }
  DAT_8040ee52 = *(undefined2 *)(DAT_8040ee48 + 0x22);
  DAT_80410060 = *(undefined4 *)(DAT_8040ee48 + 6);
  DAT_80410064 = *(undefined1 *)(DAT_8040ee48 + 10);
  DAT_80410065 = *(undefined1 *)(DAT_8040ee48 + 0xb);
  DAT_8041005c = *(undefined4 *)(DAT_8040ee48 + 0x1a);
  iVar2 = DAT_8040ee48 + 0x2c;
  FUN_804077a4(s___TFTP_Client_Upload__File_Name__8040d310,iVar2);
  iVar1 = FUN_80406ae8(iVar2,s_nfjrom_8040d338);
  if (iVar1 == 0) {
    iVar1 = FUN_80406978(iVar2,s_boot_img_8040d340);
    if (iVar1 != 0) goto LAB_8040199c;
    DAT_8040e5d8 = 0x80000000;
  }
  DAT_8040ef90 = 1;
LAB_8040199c:
  DAT_8040ee40 = DAT_8040e5d8;
  DAT_8040ee60 = 0;
  FUN_804017b4(0);
  DAT_8040ef9c = 1;
  DAT_8040ee54 = 2;
  DAT_8040ee44 = 1;
  return;
}


/* FUN_804019e8 @ 804019e8 */

void FUN_804019e8(int param_1,uint param_2)

{
  int iVar1;
  short sVar2;
  char cVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined **ppuVar6;
  undefined4 *puVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  undefined4 local_88;
  undefined4 local_84;
  int local_80;
  uint local_7c;
  short local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined **local_60;
  int local_5c;
  uint local_58;
  undefined *local_54;
  int local_50;
  char *local_4c;
  char *local_48;
  undefined4 *local_44;
  char *local_40;
  char *local_3c;
  char *local_38;
  undefined4 *local_34;
  undefined *local_30;
  
  select_boot_bank(0);
  local_50 = 0;
  iVar12 = 0;
  local_5c = 0;
  local_58 = 0;
  local_4c = s_checksum_Ok___8040d3c0;
  local_48 = s_burn_Addr__0x_x__srcAddr_0x_x_le_8040d40c;
  local_44 = &DAT_8040d438;
  local_54 = &DAT_80410e64;
  local_40 = s_Flash_Write_Successed___s_8040d464;
  local_3c = s_<RealTek>_8040d2c4;
  local_38 = s_burn_offset____x___8040d448;
  local_34 = &DAT_8040d440;
  local_30 = &DAT_8040d45c;
  local_60 = &PTR_DAT_8040e5dc;
  uVar11 = 0;
LAB_80402070:
  do {
    do {
      while( true ) {
        uVar10 = uVar11;
        uVar11 = uVar10 + 0x10;
        puVar5 = (undefined4 *)(uVar10 + param_1);
        if (param_2 <= uVar11) {
          if (local_58 != 0) {
            FUN_804011e8();
          }
          return;
        }
        local_88 = *puVar5;
        local_84 = puVar5[1];
        local_80 = puVar5[2];
        local_7c = puVar5[3];
        if (local_5c != 0) break;
        iVar8 = 0;
        ppuVar6 = local_60;
        do {
          iVar1 = FUN_80406a80(&local_88,*ppuVar6,ppuVar6[2]);
          if (iVar1 == 0) {
            if (iVar8 != 10) {
              puVar7 = puVar5 + 4;
              uVar9 = local_7c;
              if (local_60[(iVar8 * 3 + 1) * 2 + 1] == (undefined *)0x0) {
                puVar7 = puVar5;
                uVar9 = local_7c + 0x10;
              }
              local_58 = local_58 | (uint)local_60[iVar8 * 6 + 5];
              FUN_804077a4(s__s_upgrade__8040d34c,local_60[iVar8 * 6 + 1]);
              iVar8 = FUN_80406a80(&local_88,&DAT_8040d35c,3);
              if (iVar8 != 0) {
                iVar8 = FUN_80406a80(&local_88,&DAT_8040d374,4);
                if (iVar8 != 0) {
                  iVar8 = FUN_80406a80(&local_88,&DAT_8040d37c,4);
                  if ((iVar8 != 0) && (iVar8 = FUN_80406a80(&local_88,&DAT_8040d384,4), iVar8 != 0))
                  goto LAB_80401cb0;
                }
              }
              uVar11 = 0;
              if (local_7c != 0) {
                cVar3 = '\0';
                do {
                  cVar3 = cVar3 + *(char *)((int)puVar5 + uVar11 + 0x10);
                  uVar11 = uVar11 + 1;
                } while (uVar11 < local_7c);
                if (cVar3 != '\0') {
                  FUN_804077a4(s__s_imgage_checksum_error_at__X__8040d39c,&local_88,puVar5);
                  return;
                }
              }
              goto LAB_80401e4c;
            }
            break;
          }
          iVar8 = iVar8 + 1;
          ppuVar6 = ppuVar6 + 6;
        } while (iVar8 != 10);
        uVar11 = local_7c + 0x10 + uVar10;
      }
      iVar8 = FUN_80406a80(&local_88,&DAT_8040d364,4);
      if ((iVar8 == 0) || (iVar8 = FUN_80406a80(puVar5 + 4,&DAT_8040d36c,4), iVar8 == 0)) {
        puVar7 = puVar5 + 4;
        uVar9 = local_7c;
      }
      else {
        uVar9 = local_7c + 0x10;
        puVar7 = puVar5;
      }
LAB_80401cb0:
      iVar8 = FUN_80406a80(&local_88,&DAT_8040d38c,4);
      if ((iVar8 == 0) || (iVar8 = FUN_80406a80(&local_88,&DAT_8040d394,4), iVar8 == 0)) {
        sVar2 = 0;
        if (local_7c != 0xfffffff0) {
          uVar4 = 0;
          do {
            sVar2 = sVar2 + *(short *)(uVar4 + (int)puVar5);
            uVar4 = uVar4 + 2;
          } while (uVar4 < local_7c + 0x10);
          goto LAB_80401da0;
        }
      }
      else {
        local_78 = 0;
        uVar4 = 0;
        if (local_7c != 0) {
          sVar2 = 0;
          do {
            local_78 = *(short *)((int)puVar5 + uVar4 + 0x10);
            sVar2 = sVar2 + local_78;
            uVar4 = uVar4 + 2;
          } while (uVar4 < local_7c);
LAB_80401da0:
          if (sVar2 != 0) {
            FUN_804077a4(s__s_imgage_checksum_error_at__X__8040d39c,&local_88,puVar5);
            return;
          }
        }
      }
      iVar8 = FUN_80406a80(&local_88,&DAT_8040d38c,4);
    } while (iVar8 == 0);
    iVar8 = FUN_80406a80(&local_88,&DAT_8040d394,4);
    if (iVar8 != 0) {
LAB_80401e4c:
      FUN_804077a4(local_4c);
      if (((uVar9 & 0xfff) == 0) && (*(int *)(uVar9 + param_1) == -0x21523f22)) {
        FUN_804077a4(s_it_s_special_wrt_image_need_add_4_8040d3d0,uVar9);
        uVar9 = uVar9 + 4;
      }
      FUN_804077a4(local_48,local_80,puVar7,uVar9);
      iVar8 = FUN_80406a80(&local_88,local_44,4);
      if (iVar8 == 0) {
LAB_80401ec8:
        iVar12 = FUN_80407a10();
        FUN_804077a4(local_38,iVar12);
        local_74 = *puVar7;
        local_70 = puVar7[1];
        local_6c = puVar7[2];
        local_68 = puVar7[3];
        local_6c = FUN_80407a70();
        *puVar7 = local_74;
        puVar7[1] = local_70;
        puVar7[2] = local_6c;
        puVar7[3] = local_68;
      }
      else {
        iVar8 = FUN_80406a80(&local_88,local_34,4);
        if (iVar8 == 0) goto LAB_80401ec8;
        iVar8 = FUN_80406a80(&local_88,local_30,4);
        if (iVar8 == 0) {
          iVar12 = FUN_80407a10();
          FUN_804077a4(local_38,iVar12);
        }
      }
      iVar8 = iVar12 + local_80;
      if (*(uint *)(local_54 + 0xc) < iVar8 + uVar9) {
        iVar8 = FUN_80404b40(0,iVar8,puVar7,*(uint *)(local_54 + 0xc) - iVar8);
        if ((iVar8 != 0) &&
           (iVar8 = FUN_80404b40(1,0,(int)puVar7 + (*(int *)(local_54 + 0xc) - (iVar12 + local_80)),
                                 (uVar9 - *(int *)(local_54 + 0xc)) + iVar12 + local_80), iVar8 != 0
           )) goto LAB_804020a8;
LAB_8040201c:
        if (local_50 == 0) {
          FUN_804077a4(s_Flash_Write_Failed___s_8040d480,s_<RealTek>_8040d2c4);
          return;
        }
      }
      else {
        iVar8 = FUN_80404b40(0,iVar8,puVar7,uVar9);
        if (iVar8 == 0) goto LAB_8040201c;
LAB_804020a8:
        local_50 = 1;
      }
      FUN_804077a4(local_40,local_3c);
      uVar11 = local_7c + 0x10 + uVar10;
      goto LAB_80402070;
    }
    local_5c = 1;
  } while( true );
}


/* FUN_804020e0 @ 804020e0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_804020e0(void)

{
  uint uVar1;
  
  if (DAT_8040ef94 != 0) {
    if (*(short *)(DAT_8040ee48 + 0x24) == DAT_8040ee50) {
      DAT_8040ee52 = *(undefined2 *)(DAT_8040ee48 + 0x22);
      if (*(short *)(DAT_8040ee48 + 0x2c) == DAT_8040ee44) {
        uVar1 = *(ushort *)(DAT_8040ee48 + 0x26) - 0xc;
        FUN_80406a54(DAT_8040ee40,DAT_8040ee48 + 0x2e,uVar1);
        DAT_8040ee40 = DAT_8040ee40 + uVar1;
        DAT_8040ee60 = uVar1 + DAT_8040ee60;
        FUN_80407434();
        FUN_804017b4(DAT_8040ee44);
        DAT_8040ee44 = DAT_8040ee44 + 1;
        if (uVar1 < 0x200) {
          FUN_804077a4(s___TFTP_Client_Upload_File_Size___8040d4a0,DAT_8040ee60,DAT_8040e5d8);
          DAT_8040ee48 = &DAT_80410074;
          DAT_8040ee4c = 0;
          DAT_8040ee44 = 0;
          DAT_8040ee40 = DAT_8040e5d8;
          DAT_8040ee58 = DAT_8040ee60;
          DAT_8040efa0 = 0;
          DAT_8040ee54 = 0;
          DAT_8040ef9c = 0;
          DAT_8040ee50 = DAT_8040ee50 + 1;
          FUN_804077a4(s_Success___s_8040d4d4,s_<RealTek>_8040d2c4);
          if (DAT_8040ef90 == 1) {
            _DAT_b8000010 = _DAT_b8000010 & 0xfffff7ff;
            DAT_8040ef90 = 0;
            DAT_8040ee5c = DAT_8040e5d8;
            _DAT_b8003000 = 0;
            setCopReg(0,Status,(Status | 1) ^ 1);
            FUN_804077a4(s_Jump_to_0x_x_8040d4e4,DAT_8040e5d8);
            FUN_80406454();
            (*DAT_8040ee5c)();
          }
          else if (DAT_8040e6cc != 0) {
            FUN_804019e8(DAT_8040e5d8,DAT_8040ee60);
          }
        }
      }
      else {
        FUN_804077a4(s_TFTP___8040d498);
        FUN_804017b4(DAT_8040ee44 + -1);
      }
    }
  }
  return;
}


/* FUN_80402380 @ 80402380 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80402380(undefined4 param_1,uint param_2,undefined4 *param_3,undefined4 param_4,
                 ushort param_5)

{
  DAT_8040efbc = *param_3;
  DAT_8040efc0 = *(undefined1 *)(param_3 + 1);
  DAT_8040efc1 = *(undefined1 *)((int)param_3 + 5);
  DAT_8040efc2 = _DAT_8040e8f0;
  DAT_8040efc6 = DAT_8040e8f4;
  DAT_8040efc7 = DAT_8040e8f5;
  DAT_8040efc8 = (undefined1)((param_2 & 0xffff) >> 8);
  DAT_8040efc9 = (undefined1)(param_2 & 0xffff);
  FUN_80406a54(&DAT_8040efca,param_4,(uint)param_5);
  FUN_80403e2c(&DAT_8040efbc,param_5 + 0xe);
  return;
}


/* FUN_80402448 @ 80402448 */

void FUN_80402448(byte *param_1)

{
  int iVar1;
  char *pcVar2;
  char cVar3;
  uint uVar4;
  char *pcVar5;
  char local_18 [4];
  ushort local_14;
  ushort local_12;
  
  iVar1 = FUN_80404a94(local_18,0x6000,6);
  if (iVar1 == 0) {
    return;
  }
  if (local_18[0] != 'h') {
    return;
  }
  local_12 = local_14;
  if (0x2000 < local_14) {
    return;
  }
  pcVar2 = (char *)FUN_80406604();
  if (pcVar2 == (char *)0x0) {
    return;
  }
  FUN_80404a94(pcVar2,0x6006,local_12);
  uVar4 = (uint)local_12;
  if ((uVar4 - 1 & 0xffff) < 0x2000) {
    if (uVar4 != 0) {
      cVar3 = '\0';
      pcVar5 = pcVar2;
      do {
        cVar3 = cVar3 + *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (pcVar5 != pcVar2 + uVar4);
      if (cVar3 != '\0') goto LAB_8040258c;
    }
    *(undefined4 *)param_1 = *(undefined4 *)(pcVar2 + 1);
    param_1[4] = pcVar2[5];
    param_1[5] = pcVar2[6];
    iVar1 = FUN_80406a80(param_1,&DAT_8040a760,6);
    if ((iVar1 == 0) || ((*param_1 & 1) != 0)) {
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[4] = 0;
      param_1[5] = 0;
    }
  }
LAB_8040258c:
  FUN_804066ec(pcVar2);
  return;
}


/* FUN_804025ac @ 804025ac */

void FUN_804025ac(byte *param_1,undefined4 *param_2)

{
  int iVar1;
  char *pcVar2;
  uint uVar3;
  char cVar4;
  char *pcVar5;
  char local_20 [4];
  ushort local_1c;
  ushort local_1a;
  
  iVar1 = FUN_80404a94(local_20,0xc000,6);
  if (iVar1 == 0) {
    return;
  }
  if (local_20[0] != '6') {
    return;
  }
  local_1a = local_1c;
  if (0x4000 < local_1c) {
    return;
  }
  pcVar2 = (char *)FUN_80406604();
  if (pcVar2 == (char *)0x0) {
    return;
  }
  FUN_80404a94(pcVar2,0xc006,local_1a);
  uVar3 = (uint)local_1a;
  if ((uVar3 != 0) && (uVar3 < 0x4001)) {
    if (uVar3 != 0) {
      cVar4 = '\0';
      pcVar5 = pcVar2;
      do {
        cVar4 = cVar4 + *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (pcVar5 != pcVar2 + uVar3);
      if (cVar4 != '\0') goto LAB_804027a8;
    }
    *param_2 = *(undefined4 *)pcVar2;
    *(undefined4 *)param_1 = *(undefined4 *)(pcVar2 + 0x15);
    param_1[4] = pcVar2[0x19];
    param_1[5] = pcVar2[0x1a];
    iVar1 = FUN_80406a80(param_2,&DAT_8040a768,4);
    if ((iVar1 == 0) || (0xfd < (byte)(*(char *)((int)param_2 + 3) - 1U))) {
      *(undefined1 *)param_2 = 0;
      *(undefined1 *)((int)param_2 + 1) = 0;
      *(undefined1 *)((int)param_2 + 2) = 0;
      *(undefined1 *)((int)param_2 + 3) = 0;
    }
    else {
      iVar1 = FUN_80406a80(param_1,&DAT_8040a760,6);
      if ((iVar1 == 0) || ((*param_1 & 1) != 0)) {
        FUN_80402448(param_1);
      }
      iVar1 = FUN_80406a80(param_2,&DAT_8040a770,4);
      if (iVar1 == 0) {
        FUN_80402448(&DAT_8040e8f0);
      }
      else {
        DAT_8040e8f0 = 0x56;
        DAT_8040e8f1 = 0xaa;
        DAT_8040e8f2 = 0xa5;
        DAT_8040e8f3 = 0x5a;
        DAT_8040e8f4 = 0x7d;
        DAT_8040e8f5 = 0xe8;
      }
    }
  }
LAB_804027a8:
  FUN_804066ec(pcVar2);
  return;
}


/* FUN_804027cc @ 804027cc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_804027cc(void)

{
  int iVar1;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  int local_28;
  undefined2 local_24;
  undefined2 local_22;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  FUN_804025ac(&DAT_8040efb0,&DAT_8040efb8);
  iVar1 = FUN_80403268();
  if (iVar1 == 0) {
    local_60 = 4;
    local_5c = 0;
    local_58 = 0;
    local_54 = 0;
    local_50 = 0;
    local_4c = 0;
    local_48 = 4;
    local_44 = 2;
    local_40 = 2;
    local_3c = 2;
    iVar1 = FUN_80403708(&local_60,4,&local_48,0x800);
    if (iVar1 == 0) {
      local_22 = 8;
      local_c = 0x40000000;
      local_1c = 0;
      local_20 = 0;
      local_14 = 0;
      local_18 = 0;
      local_2c = _DAT_8040e8f0;
      local_28 = (uint)_DAT_8040e8f4 << 0x10;
      local_24 = 1;
      local_10 = 0x5dc;
      iVar1 = FUN_80404760(0);
      if (iVar1 == 0) {
        local_30 = 0;
        local_34 = 0x3f;
        local_38 = 0x3f;
        iVar1 = FUN_80404650(8);
        if (iVar1 == 0) {
          _DAT_b800300c = _DAT_b800300c | 0x30000000;
          FUN_80400a54(0xf,&PTR_FUN_8040e8f8,&DAT_8040fc3c);
        }
        else {
          FUN_804077a4(s_Creating_vlan_fails__d_8040d5f4,iVar1);
        }
      }
      else {
        FUN_804077a4(s_Creating_intif_fails__d_8040d5d8,iVar1);
      }
    }
    else {
      FUN_804077a4(s_Switch_nic_initialization_failed_8040d5b4);
    }
  }
  else {
    FUN_804077a4(s_Switch_core_initialization_faile_8040d58c);
  }
  return;
}


/* FUN_80402958 @ 80402958 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80402958(void)

{
  int iVar1;
  
  while (DAT_8040ee4c = 0, iVar1 = FUN_80403fe4(&DAT_8040ee48,&DAT_8040ee4c), iVar1 == 0) {
    FUN_80403698();
    FUN_80400f08();
  }
  FUN_80403698();
  return;
}


/* FUN_804029e0 @ 804029e0 */

byte FUN_804029e0(byte *param_1,uint param_2)

{
  return param_1[1] ^ *param_1 ^ param_1[2] ^ param_1[3] ^ param_1[4] ^ param_1[5] ^
         (&DAT_8040a780)[param_2 & 0xffff];
}


/* FUN_80402a40 @ 80402a40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_80402a40(int param_1,int param_2,uint param_3)

{
  _DAT_bb804004 = param_1 << 0x18 | 0x80000000U | param_2 << 0x10 | param_3;
  do {
  } while (_DAT_bb804008 < 0);
  return 0;
}


/* FUN_80402a84 @ 80402a84 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_80402a84(void)

{
  return ((_DAT_b8000008 & 0x40) >> 6) * 2 + ((_DAT_b8000008 & 0x80) >> 7);
}


/* FUN_80402ab4 @ 80402ab4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_80402ab4(void)

{
  return _DAT_b8000008 >> 0x1b & 3;
}


/* FUN_80402ad0 @ 80402ad0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_80402ad0(void)

{
  return _DAT_b8000008 >> 0x1d;
}


/* FUN_80402ae4 @ 80402ae4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_80402ae4(void)

{
  return _DAT_b8000008 >> 0x11 & 1;
}


/* FUN_80402b00 @ 80402b00 */

void FUN_80402b00(undefined4 param_1,uint param_2)

{
  uint uVar1;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  if (param_2 != 0) {
    uVar1 = 0;
    do {
      FUN_804044a8(param_1,uVar1,&local_38);
      uVar1 = uVar1 + 1;
    } while (uVar1 < param_2);
  }
  return;
}


/* FUN_80402b88 @ 80402b88 */

/* WARNING: Removing unreachable block (ram,0x80402d44) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_80402b88(byte *param_1,uint param_2)

{
  uint uVar1;
  undefined1 local_30 [32];
  
  uVar1 = FUN_804029e0(param_1,0);
  if (((uVar1 < 0x100) && (param_2 < 4)) &&
     ((uint)param_1[5] ==
      (((byte)(param_1[1] ^ *param_1 ^ param_1[2] ^ param_1[3] ^ param_1[4]) ^ uVar1) & 0xff))) {
    FUN_80406a30(local_30,0,0x20);
    do {
    } while ((_DAT_bb804418 & 0x80000) == 0);
    do {
    } while ((_DAT_bb804d00 & 1) != 0);
    do {
    } while( true );
  }
  return 0xffffffff;
}


/* FUN_80402d78 @ 80402d78 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_80402d78(int param_1,int param_2,uint *param_3)

{
  _DAT_bb804004 = param_2 << 0x10 | param_1 << 0x18;
  _DAT_b8003000 = _DAT_b8003000 | 0x100;
  FUN_80407318(10);
  do {
  } while ((int)_DAT_bb804008 < 0);
  *param_3 = _DAT_bb804008 & 0xffff;
  return 0;
}


/* FUN_80402df0 @ 80402df0 */

void FUN_80402df0(int param_1)

{
  int iVar1;
  uint local_28 [2];
  
  iVar1 = 0;
  do {
    FUN_80402d78(iVar1,0x18,local_28);
    if (param_1 == 1) {
      FUN_80402a40(iVar1,0x18,local_28[0] | 0x8000);
    }
    else {
      FUN_80402a40(iVar1,0x18,local_28[0] & 0xffff7fff);
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 != 5);
  return;
}


/* FUN_80402ea4 @ 80402ea4 */

void FUN_80402ea4(uint param_1,uint param_2,undefined4 param_3,uint param_4,uint param_5)

{
  uint uVar1;
  uint local_30 [3];
  
  local_30[0] = 0;
  if (param_1 == 999) {
    uVar1 = 5;
    param_1 = 0;
  }
  else {
    uVar1 = param_1 + 1;
    if (uVar1 <= param_1) {
      return;
    }
  }
  do {
    if (param_2 < 0x1f) {
      FUN_80402a40(param_1,0x1f,param_2);
    }
    else {
      FUN_80402a40(param_1,0x1f,7);
      FUN_80402a40(param_1,0x1e,param_2);
    }
    if (param_4 != 0) {
      FUN_80402d78(param_1,param_3,local_30);
      local_30[0] = local_30[0] & param_4;
    }
    FUN_80402a40(param_1,param_3,param_5 | local_30[0]);
    FUN_80402a40(param_1,0x1f,0);
    param_1 = param_1 + 1;
  } while (param_1 < uVar1);
  return;
}


/* FUN_80402fc8 @ 80402fc8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_80402fc8(void)

{
  uint *puVar1;
  
  puVar1 = (uint *)&DAT_bb804104;
  do {
    *puVar1 = *puVar1 | 0x2000000;
    puVar1 = puVar1 + 1;
  } while (puVar1 != (uint *)0xbb804118);
  FUN_80402ea4(999,1,0x10,0x1fff,0xc000);
  if (_DAT_b8000000 == -0x7e692000) {
    FUN_80402ea4(999,0,0x18,0x7fff,0);
  }
  else {
    FUN_80402ea4(999,0,0x16,0xff8f,0x40);
    FUN_80402ea4(999,0,0x15,0xff00,0xc2);
    FUN_80402ea4(999,1,0x13,0xfffe,0);
    FUN_80402ea4(999,0,0x16,0xfff7,0);
  }
  _DAT_bb804000 = _DAT_bb804000 & 0xfff3fff0 | 0x80005;
  puVar1 = (uint *)&DAT_bb804104;
  do {
    *puVar1 = *puVar1 & 0xfdffffff;
    puVar1 = puVar1 + 1;
  } while (puVar1 != (uint *)0xbb804118);
  return 0;
}


/* FUN_8040311c @ 8040311c */

undefined4 FUN_8040311c(undefined4 param_1,undefined4 param_2)

{
  uint local_10 [2];
  
  FUN_80402d78(param_2,0,local_10);
  local_10[0] = local_10[0] | 0x200;
  FUN_80402a40(param_2,0);
  return 0;
}


/* FUN_8040316c @ 8040316c */

undefined4 FUN_8040316c(undefined4 param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  uint local_18 [2];
  
  FUN_80402d78(param_3,4,local_18);
  if (param_2 == 0) {
    if ((local_18[0] & 0x400) == 0) {
      return 0;
    }
    local_18[0] = local_18[0] & 0xfffffbff;
  }
  else {
    uVar1 = local_18[0] & 0x400;
    local_18[0] = local_18[0] | 0x400;
    if (uVar1 != 0) {
      return 0;
    }
  }
  FUN_80402a40(param_3,4,local_18[0]);
  FUN_8040311c(param_1,param_3);
  return 0;
}


/* FUN_80403214 @ 80403214 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80403214(void)

{
  _DAT_b8000010 = _DAT_b8000010 & 0xfffff7ff;
  FUN_80409010(5000);
  _DAT_b8000010 = _DAT_b8000010 | 0x800;
  FUN_80409010(1000);
  return;
}


/* FUN_80403268 @ 80403268 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_80403268(void)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  FUN_80403214();
  FUN_80402fc8();
  _DAT_bb804234 = 0x7f;
  FUN_80402b00(3,0x40);
  FUN_80402b00(4,8);
  _DAT_b8000044 = 0;
  _DAT_bb804104 = _DAT_bb804104 & 0xfffffff7;
  _DAT_bb804108 = _DAT_bb804108 & 0xfffffff7 | 0x4000009;
  _DAT_bb80410c = _DAT_bb80410c & 0xfffffff7 | 0x8000009;
  _DAT_bb804110 = _DAT_bb804110 & 0xfffffff7 | 0xc000009;
  _DAT_bb804114 = _DAT_bb804114 & 0xfffffff7 | 0x10000009;
  FUN_804077a4(s_P0phymode__02x___s_phy_8040d790,1,s_embedded_8040d7a8);
  _DAT_bb804104 = _DAT_bb804104 | 9;
  if ((_DAT_b800000c & 0xf) != 0xd) goto LAB_80403588;
  iVar2 = FUN_80402a84();
  if (iVar2 == 1) {
    _DAT_bb804104 = _DAT_bb804104 | 9;
    goto LAB_80403588;
  }
  _DAT_bb804104 = _DAT_bb804104 | 0x18002009;
  uVar3 = FUN_80402ab4();
  if (uVar3 == 0) {
    _DAT_bb80414c = _DAT_bb80414c & 0xfe7fffff | 0x1000000;
LAB_804034f0:
    _DAT_bb804104 = _DAT_bb804104 & 0xfd03ffff | 0x28c0000;
  }
  else {
    if (uVar3 - 1 < 2) {
      _DAT_bb80414c = _DAT_bb80414c & 0xfe7fffff | 0x800000;
      if (uVar3 != 3) goto LAB_804034e4;
LAB_804034a8:
      iVar2 = FUN_80402ae4();
      uVar4 = FUN_80402ad0();
      _DAT_bb80414c = uVar4 | _DAT_bb80414c & 0xffffffec | iVar2 << 4;
    }
    else {
      if (uVar3 == 3) {
        _DAT_bb80414c = _DAT_bb80414c & 0xfe7fffff;
        goto LAB_804034a8;
      }
LAB_804034e4:
      if (uVar3 < 2) goto LAB_804034f0;
    }
    if (uVar3 - 2 < 2) {
      _DAT_bb804104 = _DAT_bb804104 & 0xfd03ffff | 0x2940000;
      _DAT_bb804000 = _DAT_bb804000 | 0x1000;
    }
  }
  _DAT_bb804100 = _DAT_bb804100 | 1;
  _DAT_bb80414c = _DAT_bb80414c | 0x40;
LAB_80403588:
  _DAT_bb804a08 = 0x80008;
  _DAT_bb804a0c = 0x80008;
  _DAT_bb804a10 = 0x80008;
  _DAT_bb804a14 = 0x80008;
  _DAT_bb804410 = 1;
  _DAT_bb804754 = 0x1249;
  _DAT_bb804204 = _DAT_bb804204 | 1;
  _DAT_b8000040 = _DAT_b8000040 & 0xffff70e7;
  _DAT_b8000044 = _DAT_b8000044 & 0xfffc4924;
  _DAT_bb804300 = 0x200000;
  iVar2 = 1;
  do {
    FUN_8040311c(iVar2,iVar2 + -1);
    bVar1 = iVar2 != 6;
    iVar2 = iVar2 + 1;
  } while (bVar1);
  FUN_80402b88(&DAT_8040e8f0,0);
  FUN_80402b88(&DAT_8040efb0,1);
  _DAT_bb804428 = 3;
  return 0;
}


/* FUN_80403698 @ 80403698 */

void FUN_80403698(void)

{
  int iVar1;
  uint *puVar2;
  
  do {
    puVar2 = (uint *)(DAT_8040fd04 + DAT_8040fd34 * 4);
    do {
      if (DAT_8040fd30 == DAT_8040fd34) {
        return;
      }
      iVar1 = DAT_8040fd34 + 1;
      if ((*puVar2 & 1) != 0) {
        return;
      }
      puVar2 = puVar2 + 1;
      DAT_8040fd34 = iVar1;
    } while (DAT_8040fd14 != iVar1);
    DAT_8040fd34 = 0;
  } while( true );
}


/* FUN_80403708 @ 80403708 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_80403708(int param_1,int param_2,int param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int iVar9;
  uint *puVar10;
  int iVar11;
  uint *puVar12;
  
  DAT_8040fd24 = 0x800;
  puVar12 = &DAT_8040fcec;
  iVar6 = 0;
  iVar11 = 0;
  puVar1 = puVar12;
  do {
    uVar3 = *(uint *)(param_1 + iVar6);
    *puVar1 = uVar3;
    if (uVar3 != 0) {
      uVar3 = FUN_80406604(uVar3 << 2);
      *(uint *)((int)&DAT_8040fcd4 + iVar6) = uVar3 | 0xa0000000;
      if ((uVar3 & 0xfffffff) == 0) {
        FUN_804077a4(s_Assertion_fail_at_file_8040d7b4);
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
      FUN_80406a30(uVar3 | 0xa0000000,0,*puVar1 << 2);
      iVar11 = iVar11 + *puVar1;
    }
    iVar6 = iVar6 + 4;
    puVar1 = puVar1 + 1;
  } while (iVar6 != 0x18);
  if (iVar11 != 0) {
    puVar10 = &DAT_8040fd14;
    iVar6 = 0;
    iVar9 = 0;
    puVar1 = puVar10;
    do {
      uVar3 = *(uint *)(param_3 + iVar6);
      *puVar1 = uVar3;
      if (uVar3 != 0) {
        uVar3 = FUN_80406604(uVar3 << 2);
        *(uint *)((int)&DAT_8040fd04 + iVar6) = uVar3 | 0xa0000000;
        if ((uVar3 & 0xfffffff) == 0) {
          FUN_804077a4(s_Assertion_fail_at_file_8040d7b4);
          do {
                    /* WARNING: Do nothing block with infinite loop */
          } while( true );
        }
        FUN_80406a30(uVar3 | 0xa0000000,0,*puVar1 << 2);
        iVar9 = iVar9 + *puVar1;
      }
      iVar6 = iVar6 + 4;
      puVar1 = puVar1 + 1;
    } while (iVar6 != 0x10);
    if ((iVar9 != 0) && (DAT_8040ee68 = param_2, param_2 != 0)) {
      uVar3 = FUN_80406604(param_2 << 2);
      DAT_8040fcd0 = uVar3 | 0xa0000000;
      if ((uVar3 & 0xfffffff) == 0) {
        FUN_804077a4(s_Assertion_fail_at_file_8040d7b4);
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
      FUN_80406a30(DAT_8040fcd0,0,param_2 << 2);
      iVar6 = (iVar9 + iVar11) * 0x18;
      uVar3 = FUN_80406604(iVar6);
      puVar7 = (undefined4 *)(uVar3 | 0xa0000000);
      if ((uVar3 & 0xfffffff) == 0) {
        FUN_804077a4(s_Assertion_fail_at_file_8040d7b4);
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
      FUN_80406a30(puVar7,0,iVar6);
      uVar3 = FUN_80406604((iVar9 + DAT_8040ee68) * 0x18);
      puVar8 = (undefined4 *)(uVar3 | 0xa0000000);
      if ((uVar3 & 0xfffffff) == 0) {
        FUN_804077a4(s_Assertion_fail_at_file_8040d7b4);
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
      FUN_80406a30(puVar8,0,(iVar9 + DAT_8040ee68) * 0x18);
      uVar3 = FUN_80406604((DAT_8040fd24 + 2) * DAT_8040ee68 + 7);
      if ((uVar3 & 0xfffffff) != 0) {
        FUN_80406a30(uVar3 | 0xa0000000,0,(DAT_8040fd24 + 2) * DAT_8040ee68 + 7);
        DAT_8040fd3c = 0;
        DAT_8040fd38 = 0;
        DAT_8040fd30 = 0;
        DAT_8040fd34 = 0;
        piVar4 = &DAT_8040fd04;
        uVar5 = 0;
        do {
          for (; uVar2 = *puVar10, uVar5 < uVar2; uVar5 = uVar5 + 1) {
            *puVar7 = 0;
            puVar7[1] = 0;
            puVar7[2] = 0;
            puVar7[3] = 0;
            puVar7[4] = 0;
            puVar7[5] = 0;
            *puVar8 = 0;
            puVar8[1] = 0;
            puVar8[2] = 0;
            puVar8[3] = 0;
            puVar8[4] = 0;
            puVar8[5] = 0;
            *puVar7 = puVar8;
            *(undefined2 *)(puVar7 + 1) = 0;
            *(undefined2 *)(puVar7 + 3) = 0x8800;
            puVar7[2] = puVar7[2] & 0x1fffffff;
            *(undefined1 *)((int)puVar7 + 0xf) = 0;
            *puVar8 = 0;
            puVar8[1] = puVar7;
            *(undefined2 *)((int)puVar8 + 10) = 0x9c;
            puVar8[3] = 0;
            puVar8[4] = 0;
            *(undefined2 *)(puVar8 + 5) = 0;
            *(undefined4 **)(*piVar4 + uVar5 * 4) = puVar7;
            puVar7 = puVar7 + 6;
            puVar8 = puVar8 + 6;
          }
          if (uVar2 != 0) {
            puVar1 = (uint *)(*piVar4 + (uVar2 - 1) * 4);
            *puVar1 = *puVar1 | 2;
          }
          piVar4 = piVar4 + 1;
          puVar10 = puVar10 + 1;
          uVar5 = 0;
        } while (piVar4 != &DAT_8040fd14);
        uVar3 = (uVar3 | 0xa0000000) + 7 & 0xfffffff8;
        _DAT_b8010020 = DAT_8040fd04;
        _DAT_b8010024 = DAT_8040fd08;
        _DAT_b8010060 = DAT_8040fd0c;
        _DAT_b8010064 = DAT_8040fd10;
        DAT_8040fd28 = 0;
        DAT_8040fd2c = 0;
        piVar4 = &DAT_8040fcd4;
        iVar6 = 0;
        do {
          iVar11 = iVar6 << 2;
          uVar5 = 0;
          while( true ) {
            uVar2 = *puVar12;
            if (uVar2 <= uVar5) break;
            *puVar7 = 0;
            puVar7[1] = 0;
            puVar7[2] = 0;
            puVar7[3] = 0;
            puVar7[4] = 0;
            puVar7[5] = 0;
            *puVar8 = 0;
            puVar8[1] = 0;
            puVar8[2] = 0;
            puVar8[3] = 0;
            puVar8[4] = 0;
            puVar8[5] = 0;
            *puVar7 = puVar8;
            *(undefined2 *)(puVar7 + 1) = 0;
            *(undefined2 *)(puVar7 + 3) = 0x9000;
            puVar7[2] = puVar7[2] & 0x1fffffff;
            *(undefined1 *)((int)puVar7 + 0xf) = 0;
            *puVar8 = 0;
            puVar8[1] = puVar7;
            *(undefined2 *)(puVar8 + 2) = 0;
            *(undefined2 *)((int)puVar8 + 10) = 0x9c;
            puVar8[3] = 0;
            *(short *)(puVar8 + 5) = (short)DAT_8040fd24;
            puVar8[4] = uVar3 + 2;
            puVar8[3] = uVar3 + 2;
            uVar3 = uVar3 + DAT_8040fd24;
            *(uint *)(*piVar4 + uVar5 * 4) = (uint)puVar7 | 1;
            *(uint *)(DAT_8040fcd0 + iVar11) = (uint)puVar8 | 1;
            uVar5 = uVar5 + 1;
            puVar7 = puVar7 + 6;
            puVar8 = puVar8 + 6;
            iVar11 = iVar11 + 4;
          }
          if (uVar2 != 0) {
            puVar1 = (uint *)(*piVar4 + (uVar2 - 1) * 4);
            *puVar1 = *puVar1 | 2;
          }
          piVar4 = piVar4 + 1;
          puVar12 = puVar12 + 1;
          iVar6 = uVar5 + iVar6;
        } while (piVar4 != &DAT_8040fcec);
        puVar1 = (uint *)(DAT_8040fcd0 + (DAT_8040ee68 + -1) * 4);
        *puVar1 = *puVar1 | 2;
        _DAT_b8010000 = 0xc4000000;
        _DAT_b8010004 = DAT_8040fcd4;
        _DAT_b8010008 = DAT_8040fcd8;
        _DAT_b801000c = DAT_8040fcdc;
        _DAT_b8010010 = DAT_8040fce0;
        _DAT_b8010014 = DAT_8040fce4;
        _DAT_b8010018 = DAT_8040fce8;
        _DAT_b801001c = DAT_8040fcd0;
        _DAT_b8010028 = 0x7f8;
        _DAT_bb804004 = 0x96181441;
        return 0;
      }
      FUN_804077a4(s_Assertion_fail_at_file_8040d7b4);
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
  }
  return 0x16;
}


/* FUN_80403e2c @ 80403e2c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_80403e2c(undefined4 param_1,uint param_2)

{
  undefined4 uVar1;
  uint uVar2;
  int *piVar3;
  uint *puVar4;
  int iVar5;
  
  iVar5 = DAT_8040fd30 + 1;
  if (iVar5 == DAT_8040fd14) {
    iVar5 = 0;
  }
  if (iVar5 == DAT_8040fd34) {
    FUN_804077a4(s_Tx_Desc_full__8040d7cc);
    uVar1 = 0xffffffff;
  }
  else {
    FUN_80406a54(0xa0410664,param_1,param_2);
    uVar2 = *(uint *)(DAT_8040fd04 + DAT_8040fd30 * 4);
    if ((uVar2 & 1) != 0) {
      FUN_804077a4(s_Assertion_fail_at_file_8040d7b4);
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
    piVar3 = (int *)(uVar2 & 0xfffffffc);
    if (param_2 < 0x3c) {
      *(undefined2 *)(piVar3 + 1) = 0x40;
    }
    else {
      *(short *)(piVar3 + 1) = (short)param_2 + 4;
    }
    *(undefined2 *)(*piVar3 + 8) = *(undefined2 *)(piVar3 + 1);
    *(undefined2 *)(*piVar3 + 0x14) = *(undefined2 *)(piVar3 + 1);
    *(undefined4 *)(*piVar3 + 0xc) = 0xa0410664;
    *(undefined4 *)(*piVar3 + 0x10) = 0xa0410664;
    piVar3[5] = piVar3[5] & 0xfeffffff;
    *(undefined1 *)((int)piVar3 + 0xf) = 0x3f;
    puVar4 = (uint *)(DAT_8040fd04 + DAT_8040fd30 * 4);
    *puVar4 = *puVar4 | 1;
    _DAT_b8010000 = _DAT_b8010000 | 0x800000;
    DAT_8040fd3c = DAT_8040fd3c + 1;
    uVar1 = 0;
    DAT_8040fd30 = iVar5;
  }
  return uVar1;
}


/* FUN_80403fe4 @ 80403fe4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_80403fe4(undefined4 *param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  uint *puVar4;
  uint uVar5;
  int *piVar6;
  byte *pbVar7;
  
  uVar1 = *(uint *)(DAT_8040fcd4 + DAT_8040fd28 * 4);
  if ((uVar1 & 1) != 0) {
    return 0xffffffff;
  }
  piVar6 = (int *)(uVar1 & 0xfffffffc);
  DAT_8040fd38 = DAT_8040fd38 + 1;
  pbVar7 = *(byte **)(*piVar6 + 0xc);
  if (((*pbVar7 & 1) == 0) && (iVar2 = FUN_80406a80(pbVar7,&DAT_8040e8f0,6), iVar2 != 0)) {
    iVar2 = FUN_80406a80(pbVar7,&DAT_8040efb0,6);
    uVar3 = 0xffffffff;
    if (iVar2 != 0) goto LAB_804040bc;
  }
  *param_1 = pbVar7;
  *param_2 = *(ushort *)(piVar6 + 1) - 4;
  uVar3 = 0;
LAB_804040bc:
  if (DAT_8040e910 == 0) {
    iVar2 = DAT_8040fd28 + -1;
    if (iVar2 < 0) {
      iVar2 = DAT_8040fcec + -1;
    }
    puVar4 = (uint *)(DAT_8040fcd4 + iVar2 * 4);
    uVar1 = *puVar4;
    uVar5 = *DAT_8040fcd0;
    iVar2 = *(int *)(uVar1 & 0xfffffffc);
    *puVar4 = uVar1 | 1;
    DAT_8040fcd0[(iVar2 - (uVar5 & 0xfffffffc)) / 0x18] =
         DAT_8040fcd0[(iVar2 - (uVar5 & 0xfffffffc)) / 0x18] | 1;
  }
  else {
    DAT_8040e910 = 0;
  }
  DAT_8040fd28 = DAT_8040fd28 + 1;
  if (DAT_8040fd28 == DAT_8040fcec) {
    DAT_8040fd28 = 0;
  }
  DAT_8040fd2c = DAT_8040fd2c + 1;
  if (DAT_8040fd2c == DAT_8040ee68) {
    DAT_8040fd2c = 0;
  }
  if ((_DAT_b801002c & 0x7e0000) != 0) {
    _DAT_b8010028 = _DAT_b8010028 | 0x7e0000;
    _DAT_b801002c = 0x7e0000;
  }
  return uVar3;
}


/* FUN_80404230 @ 80404230 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_80404230(int param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  
  do {
  } while ((_DAT_bb804418 & 0x80000) == 0);
  if (param_3 == (undefined4 *)0x0) {
    _DAT_bb804418 = _DAT_bb804418 | 0x40000;
    FUN_804077a4(s_Assertion_fail_at_file_8040d7b4);
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  iVar1 = (param_2 + param_1 * 0x800) * 0x20;
  do {
  } while ((_DAT_bb804d00 & 1) != 0);
  _DAT_bb804418 = _DAT_bb804418 | 0x40000;
  param_3[7] = *(undefined4 *)(iVar1 + -0x44ffffe4);
  param_3[6] = *(undefined4 *)(iVar1 + -0x44ffffe8);
  param_3[5] = *(undefined4 *)(iVar1 + -0x44ffffec);
  param_3[4] = *(undefined4 *)(iVar1 + -0x44fffff0);
  param_3[3] = *(undefined4 *)(iVar1 + -0x44fffff4);
  param_3[2] = *(undefined4 *)(iVar1 + -0x44fffff8);
  param_3[1] = *(undefined4 *)(iVar1 + -0x44fffffc);
  *param_3 = *(undefined4 *)(iVar1 + -0x45000000);
  _DAT_bb804418 = _DAT_bb804418 & 0xfffbffff;
  return 0;
}


/* FUN_80404344 @ 80404344 */

/* WARNING: Removing unreachable block (ram,0x80404454) */
/* WARNING: Removing unreachable block (ram,0x80404484) */
/* WARNING: Removing unreachable block (ram,0x80404494) */
/* WARNING: Removing unreachable block (ram,0x804044a0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80404344(undefined4 param_1,undefined4 param_2,int param_3)

{
  do {
  } while ((_DAT_bb804418 & 0x80000) == 0);
  if (param_3 == 0) {
    _DAT_bb804418 = _DAT_bb804418 | 0x40000;
    FUN_804077a4(s_Assertion_fail_at_file_8040d7b4);
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  do {
  } while ((_DAT_bb804d00 & 1) != 0);
  do {
  } while( true );
}


/* FUN_804044a8 @ 804044a8 */

/* WARNING: Removing unreachable block (ram,0x804045b8) */
/* WARNING: Removing unreachable block (ram,0x804045e4) */
/* WARNING: Removing unreachable block (ram,0x804045e8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_804044a8(undefined4 param_1,undefined4 param_2,int param_3)

{
  do {
  } while ((_DAT_bb804418 & 0x80000) == 0);
  if (param_3 == 0) {
    _DAT_bb804418 = _DAT_bb804418 | 0x40000;
    FUN_804077a4(s_Assertion_fail_at_file_8040d7b4);
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  do {
  } while ((_DAT_bb804d00 & 1) != 0);
  do {
  } while( true );
}


/* FUN_80404600 @ 80404600 */

undefined4 FUN_80404600(void)

{
  return Status;
}


/* FUN_80404620 @ 80404620 */

undefined4 FUN_80404620(undefined4 param_1)

{
  setCopReg(0,Status,param_1);
  return param_1;
}


/* FUN_80404650 @ 80404650 */

void FUN_80404650(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint local_30 [8];
  
  if (param_2 == 0) {
    FUN_804077a4(s_Assertion_fail_at_file_8040d7b4);
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  uVar1 = FUN_80404600();
  if (uVar1 == 0) {
    FUN_80404230(6,param_1,local_30);
  }
  else {
    FUN_80404620(uVar1 & 0xfffffffe);
    FUN_80404230(6,param_1,local_30);
    FUN_80404620(uVar1);
  }
  FUN_80406a30(local_30,0,0x20);
  local_30[0] = *(byte *)(param_2 + 3) & 0x3f | (*(byte *)(param_2 + 7) & 0x3f) << 9 |
                (*(uint *)(param_2 + 8) >> 0x1e) << 0x12 | param_1 << 0x14;
  iVar2 = FUN_804044a8(6,param_1,local_30);
  if (iVar2 == 0) {
    return;
  }
  FUN_804077a4(s_Assertion_fail_at_file_8040d7b4);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* FUN_80404760 @ 80404760 */

undefined4 FUN_80404760(undefined4 param_1,ushort *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  uint local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  
  if (param_2 == (ushort *)0x0) {
    FUN_804077a4(s_Assertion_fail_at_file_8040d7b4);
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  uVar1 = FUN_80404600();
  if (uVar1 == 0) {
    FUN_80404230(4,param_1,&local_30);
  }
  else {
    FUN_80404620(uVar1 & 0xfffffffe);
    FUN_80404230(4,param_1,&local_30);
    FUN_80404620(uVar1);
  }
  uVar2 = 0x11;
  if ((local_30 & 1) == 0) {
    FUN_80406a30(&local_30,0,0x20);
    local_30 = *(uint *)(param_2 + 0x10) >> 0x1e & 1 | (param_2[5] & 0xfff) << 1 |
               *(int *)(param_2 + 1) << 0xd;
    local_2c = (uint)(param_2[1] >> 3) | (*param_2 & 0x7fff) << 0xd | *(uint *)(param_2 + 6) << 0x1e
               | (*(uint *)(param_2 + 0x10) >> 0x1f) << 0x1d;
    local_24 = local_24 & 0xfffff000 | *(uint *)(param_2 + 0xe) >> 3 & 0xfff;
    local_28 = *(uint *)(param_2 + 6) >> 2 & 0x1f | (*(byte *)((int)param_2 + 0x13) & 0x7f) << 5 |
               (*(byte *)((int)param_2 + 0x17) & 0x7f) << 0xc |
               (*(byte *)((int)param_2 + 0x1b) & 0x7f) << 0x13 |
               (-(uint)*(byte *)((int)param_2 + 9) & 7) << 0x1a | *(uint *)(param_2 + 0xe) << 0x1d;
    iVar3 = FUN_804044a8(4,param_1,&local_30);
    uVar2 = 0;
    if (iVar3 != 0) {
      FUN_804077a4(s_Assertion_fail_at_file_8040d7b4);
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
  }
  return uVar2;
}


/* FUN_80404a10 @ 80404a10 */

void FUN_80404a10(uint param_1)

{
  (**(code **)(&DAT_80410e98 + param_1 * 0x48))(param_1 & 0xff);
  return;
}


/* FUN_80404a50 @ 80404a50 */

void FUN_80404a50(uint param_1,undefined4 param_2,undefined4 param_3)

{
  (*(code *)(&DAT_80410ea0)[param_1 * 0x12])(param_1 & 0xff,param_2,4,param_3);
  return;
}


/* FUN_80404a94 @ 80404a94 */

void FUN_80404a94(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  (*DAT_80410ea0)(0,param_2,param_3,param_1);
  return;
}


/* FUN_80404ac4 @ 80404ac4 */

void FUN_80404ac4(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  (*DAT_80410e9c)(0,param_1,param_3,param_2);
  return;
}


/* FUN_80404af8 @ 80404af8 */

void FUN_80404af8(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  (*(code *)(&DAT_80410e9c)[param_1 * 0x12])(param_1 & 0xff,param_2,param_4,param_3);
  return;
}


/* FUN_80404b40 @ 80404b40 */

void FUN_80404b40(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  (*(code *)(&DAT_80410e9c)[param_1 * 0x12])(param_1 & 0xff,param_2,param_4,param_3);
  return;
}


/* FUN_80404b88 @ 80404b88 */

void FUN_80404b88(undefined1 param_1)

{
  FUN_80405504(param_1);
  return;
}


/* FUN_80404ba8 @ 80404ba8 */

void FUN_80404ba8(undefined1 param_1)

{
  FUN_804054a4(param_1);
  return;
}


/* FUN_80404bc8 @ 80404bc8 */

void FUN_80404bc8(void)

{
  FUN_8040604c(0);
  return;
}


/* FUN_80404be8 @ 80404be8 */

void FUN_80404be8(void)

{
  FUN_804050a4(0);
  return;
}


/* FUN_80404c08 @ 80404c08 */

void FUN_80404c08(void)

{
  FUN_804050a4(0);
  return;
}


/* FUN_80404c30 @ 80404c30 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 FUN_80404c30(void)

{
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_10 = DAT_8040a790;
  local_c = DAT_8040a794;
  local_8 = DAT_8040a798;
  local_4 = DAT_8040a79c;
  return *(undefined2 *)((int)&local_10 + ((_DAT_b8000008 & 0x1c00) >> 9));
}


/* FUN_80404c88 @ 80404c88 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80404c88(uint param_1,uint param_2,int param_3,int param_4,int param_5)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = FUN_80404c30();
  if (param_2 == 0) {
    trap(0x1c00);
  }
  uVar2 = uVar1 / param_2;
  if (uVar1 % param_2 != 0) {
    uVar2 = uVar1 / param_2 + 1;
  }
  if ((uVar2 & 1) != 0) {
    uVar2 = uVar2 + 1;
  }
  if (uVar2 == 0) {
    trap(0x1c00);
  }
  *(uint *)(&DAT_80410e8c + (param_1 & 0xff) * 0x48) = uVar1 / uVar2;
  do {
  } while ((_DAT_b8001208 & 0x8000000) == 0);
  _DAT_b8001200 = param_4 << 0x1b | param_3 << 0x1c | param_5 << 0x16 | (uVar2 - 2 >> 1) << 0x1d;
  return;
}


/* FUN_80404d84 @ 80404d84 */

void FUN_80404d84(uint param_1,uint param_2,uint param_3,uint *param_4,uint *param_5,int *param_6,
                 uint *param_7,int *param_8,uint *param_9)

{
  uint uVar1;
  uint uVar2;
  
  if (param_3 == 0) {
    trap(0x1c00);
  }
  if (param_2 + param_1 < (param_1 / param_3 + 1) * param_3) {
    *param_4 = param_1;
    *param_5 = param_2;
    *param_6 = 0;
    *param_7 = 0;
    *param_8 = 0;
    *param_9 = 0;
    return;
  }
  *param_4 = param_1;
  if (param_3 == 0) {
    trap(0x1c00);
  }
  uVar1 = param_3 - param_1 % param_3;
  if (param_3 == uVar1) {
    uVar1 = 0;
  }
  *param_5 = uVar1;
  *param_6 = uVar1 + *param_4;
  uVar2 = (param_2 - uVar1) / param_3;
  if (param_3 == 0) {
    trap(0x1c00);
  }
  *param_7 = uVar2;
  *param_8 = uVar2 * param_3 + *param_6;
  *param_9 = (param_2 - uVar1) % param_3;
  return;
}


/* FUN_80404e5c @ 80404e5c */

char FUN_80404e5c(char param_1,char param_2)

{
  return param_2 - param_1;
}


/* FUN_80404e88 @ 80404e88 */

void FUN_80404e88(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6,
                 undefined4 param_7,undefined4 param_8,undefined4 param_9,undefined4 param_10,
                 undefined4 param_11)

{
  int iVar1;
  undefined1 uVar2;
  int iVar3;
  uint uVar4;
  
  param_1 = param_1 & 0xff;
  uVar4 = 1 << (param_3 & 0x1f);
  iVar1 = param_1 * 0x48;
  *(uint *)(&DAT_80410e64 + iVar1) = param_2;
  (&DAT_80410e68)[iVar1] = (char)(param_2 >> 0x10);
  (&DAT_80410e69)[iVar1] = (char)(param_2 >> 8);
  (&DAT_80410e6a)[iVar1] = (char)param_2;
  uVar2 = FUN_80404e5c(param_2 & 0xff,param_3 & 0xff);
  (&DAT_80410e6b)[iVar1] = uVar2;
  iVar3 = (param_1 * 9 + 1) * 8;
  (&DAT_80410e64)[iVar3] = (char)param_3;
  *(uint *)(&DAT_80410e68 + iVar3) = uVar4;
  *(uint *)(&DAT_80410e74 + iVar1) = param_4;
  if (param_4 == 0) {
    trap(0x1c00);
  }
  *(uint *)(&DAT_80410e78 + iVar1) = uVar4 / param_4;
  *(uint *)(&DAT_80410e7c + iVar1) = param_5;
  if (param_5 == 0) {
    trap(0x1c00);
  }
  *(uint *)(&DAT_80410e80 + iVar1) = uVar4 / param_5;
  *(uint *)(&DAT_80410e84 + iVar1) = param_6;
  if (param_6 == 0) {
    trap(0x1c00);
  }
  *(uint *)(&DAT_80410e88 + iVar1) = param_5 / param_6;
  *(undefined4 *)(&DAT_80410e90 + iVar1) = param_7;
  *(undefined4 *)(&DAT_80410e98 + iVar1) = param_8;
  (&DAT_80410e9c)[param_1 * 0x12] = FUN_80405cf8;
  (&DAT_80410ea0)[param_1 * 0x12] = param_9;
  *(undefined4 *)(&DAT_80410ea4 + iVar1) = param_10;
  *(undefined4 *)(&DAT_80410ea8 + iVar1) = param_11;
  return;
}


/* FUN_80404ff4 @ 80404ff4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80404ff4(uint param_1,int param_2,int param_3)

{
  do {
  } while ((_DAT_b8001208 & 0x8000000) == 0);
  _DAT_b8001208 =
       ((param_1 & 0xff) + 1) * 0x40000000 | param_2 << 0x1c | 0x8050000 | param_3 << 0x19;
  return;
}


/* FUN_80405050 @ 80405050 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80405050(undefined4 param_1,uint param_2,int param_3)

{
  param_2 = param_2 & 0xff;
  if (param_2 == 0) {
    param_2 = 1;
  }
  do {
  } while ((_DAT_b8001208 & 0x8000000) == 0);
  _DAT_b8001208 = param_3 << 0x19 | 0xc8050000U | param_2 << 0x1c;
  return;
}


/* FUN_804050a4 @ 804050a4 */

void FUN_804050a4(undefined1 param_1)

{
  FUN_80404ff4(param_1,0,0);
  FUN_80405050(param_1,0,0);
  FUN_80404ff4(param_1,0,0);
  FUN_80405050(param_1,0,0);
  return;
}


/* FUN_80405104 @ 80405104 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_80405104(undefined1 param_1,char param_2)

{
  undefined4 uVar1;
  
  do {
  } while ((_DAT_b8001208 & 0x8000000) == 0);
  _DAT_b8001200 = 0xffc00000;
  FUN_804050a4(param_1);
  FUN_80404ff4(param_1,0,0);
  do {
  } while ((_DAT_b8001208 & 0x8000000) == 0);
  _DAT_b800120c = 0x9f000000;
  FUN_80404ff4(param_1,param_2 + -1,0);
  uVar1 = _DAT_b800120c;
  FUN_80405050(param_1,0,0);
  return uVar1;
}


/* FUN_804051d4 @ 804051d4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_804051d4(undefined1 param_1,undefined1 param_2,undefined4 param_3)

{
  FUN_80404ff4(param_1,param_2,0);
  do {
  } while ((_DAT_b8001208 & 0x8000000) == 0);
  _DAT_b800120c = param_3;
  FUN_80405050(param_1,param_2,0);
  return;
}


/* FUN_80405254 @ 80405254 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80405254(undefined1 param_1,undefined1 param_2,undefined4 param_3,int param_4,byte param_5)

{
  FUN_80404ff4(param_1,0,param_2);
  do {
  } while ((_DAT_b8001208 & 0x8000000) == 0);
  _DAT_b800120c = param_3;
  FUN_80404ff4(param_1,param_5 - 1 & 0xff,param_2);
  do {
  } while ((_DAT_b8001208 & 0x8000000) == 0);
  _DAT_b800120c = param_4 << ((4 - (uint)param_5) * 8 & 0x1f);
  FUN_80405050(param_1,0,0);
  return;
}


/* FUN_80405338 @ 80405338 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_80405338(undefined1 param_1,undefined1 param_2,uint param_3,uint param_4)

{
  uint uVar1;
  
  FUN_80404ff4(param_1,0,param_2);
  do {
  } while ((_DAT_b8001208 & 0x8000000) == 0);
  _DAT_b800120c = param_3;
  FUN_80404ff4(param_1,(param_4 & 0xff) - 1 & 0xff,param_2);
  uVar1 = _DAT_b800120c;
  FUN_80405050(param_1,0,param_2);
  return uVar1 >> ((4 - (param_4 & 0xff)) * 8 & 0x1f);
}


/* FUN_804053f4 @ 804053f4 */

int FUN_804053f4(undefined1 param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    iVar2 = iVar2 + 1;
    uVar1 = FUN_80405338(param_1,0,0x5000000,1);
  } while ((uVar1 & 1) != 0);
  return iVar2;
}


/* FUN_80405444 @ 80405444 */

void FUN_80405444(undefined1 param_1,undefined4 param_2)

{
  FUN_804051d4(param_1,0,0x6000000);
  FUN_80405254(param_1,0,0x20000000,param_2,3);
  FUN_804053f4(param_1);
  return;
}


/* FUN_804054a4 @ 804054a4 */

void FUN_804054a4(undefined1 param_1,undefined4 param_2)

{
  FUN_804051d4(param_1,0,0x6000000);
  FUN_80405254(param_1,0,0xd8000000,param_2,3);
  FUN_804053f4(param_1);
  return;
}


/* FUN_80405504 @ 80405504 */

void FUN_80405504(undefined1 param_1)

{
  FUN_804051d4(param_1,0,0x6000000);
  FUN_804051d4(param_1,0,0x60000000);
  FUN_804053f4(param_1);
  return;
}


/* FUN_80405554 @ 80405554 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80405554(undefined1 param_1,int param_2,undefined4 param_3,char param_4,undefined1 param_5,
                 byte param_6)

{
  int iVar1;
  
  if (param_4 == '\x02') {
    FUN_80404ff4(param_1,0,param_5);
  }
  else {
    FUN_80404ff4(param_1,0,0);
  }
  do {
  } while ((_DAT_b8001208 & 0x8000000) == 0);
  _DAT_b800120c = param_3;
  if (param_4 == '\0') {
    FUN_80404ff4(param_1,0,0);
  }
  else {
    FUN_80404ff4(param_1,0,param_5);
  }
  do {
  } while ((_DAT_b8001208 & 0x8000000) == 0);
  do {
  } while ((_DAT_b8001208 & 0x8000000) == 0);
  do {
  } while ((_DAT_b8001208 & 0x8000000) == 0);
  _DAT_b800120c = param_2 << 0x18;
  iVar1 = 0;
  if (param_6 != 0) {
    do {
      do {
      } while ((_DAT_b8001208 & 0x8000000) == 0);
      _DAT_b800120c = 0;
      iVar1 = iVar1 + 1;
    } while (iVar1 < (int)(uint)param_6);
  }
  FUN_80404ff4(param_1,3,param_5);
  return;
}


/* FUN_80405704 @ 80405704 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80405704(int param_1,char param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  
  param_3 = param_3 & 0xff;
  DAT_8040e920 = 0;
  uVar1 = (DAT_80410e6c - 0x11) * 0x200000 | param_1 << 0x18;
  if (param_2 == '\x01') {
    uVar1 = param_3 << 0x10 | param_3 << 0xb | uVar1;
LAB_8040579c:
    uVar2 = param_3 << 1;
    if (param_3 != 0) goto LAB_804057a8;
  }
  else if (param_2 == '\0') {
    uVar1 = param_3 << 0xb | uVar1;
  }
  else {
    if (param_2 == '\x02') {
      uVar1 = param_3 << 0x12 | param_3 << 0x10 | uVar1 | param_3 << 0xb;
      goto LAB_8040579c;
    }
    uVar1 = param_3 << 0xb | uVar1;
  }
  uVar2 = 1;
LAB_804057a8:
  if (uVar2 == 0) {
    trap(0x1c00);
  }
  do {
  } while ((_DAT_b8001208 & 0x8000000) == 0);
  _DAT_b8001204 = ((param_4 & 0xff) << 2) / uVar2 << 0xd | uVar1;
  return;
}


/* FUN_804057f8 @ 804057f8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_804057f8(undefined1 param_1,undefined4 param_2,uint param_3,undefined4 *param_4,
                 undefined4 param_5,undefined1 param_6,undefined1 param_7,undefined1 param_8)

{
  uint uVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 local_28 [2];
  
  FUN_804051d4(param_1,0,0x6000000);
  FUN_80405554(param_1,param_2,param_5,param_6,param_7,param_8);
  uVar1 = param_3 >> 2;
  if (uVar1 != 0) {
    uVar3 = 0;
    puVar2 = param_4;
    do {
      _DAT_b800120c = *puVar2;
      puVar2 = puVar2 + 1;
      do {
      } while ((_DAT_b8001208 & 0x8000000) == 0);
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar1);
    param_4 = param_4 + uVar1;
    local_28[0] = _DAT_b800120c;
  }
  uVar1 = param_3 & 3;
  if (uVar1 != 0) {
    FUN_80406a54(local_28,param_4,uVar1);
    FUN_80404ff4(param_1,uVar1 - 1 & 0xff,param_7);
    do {
    } while ((_DAT_b8001208 & 0x8000000) == 0);
    _DAT_b800120c = local_28[0];
  }
  FUN_80405050(param_1,0,0);
  FUN_804053f4(param_1);
  return param_3;
}


/* FUN_8040597c @ 8040597c */

void FUN_8040597c(undefined1 param_1)

{
  FUN_804057f8(param_1);
  return;
}


/* FUN_804059b0 @ 804059b0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_804059b0(undefined1 param_1,undefined4 param_2,uint param_3,undefined4 *param_4,
                 uint param_5,undefined1 param_6,undefined1 param_7,undefined1 param_8)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined4 local_28 [2];
  
  FUN_80405554(param_1,param_2,param_5,param_6,param_7,param_8);
  if (DAT_8040e920 != '\0') {
    local_28[0] = FUN_80405704(param_5 >> 0x18,param_6,param_7,param_8);
  }
  uVar3 = param_3 >> 2;
  if (uVar3 != 0) {
    uVar2 = 0;
    puVar1 = param_4;
    do {
      local_28[0] = _DAT_b800120c;
      *puVar1 = _DAT_b800120c;
      uVar2 = uVar2 + 1;
      puVar1 = puVar1 + 1;
    } while (uVar2 < uVar3);
    param_4 = param_4 + uVar3;
  }
  if ((param_3 & 3) != 0) {
    local_28[0] = _DAT_b800120c;
    FUN_80406a54(param_4,local_28);
  }
  FUN_80405050(param_1,0,0);
  return param_3;
}


/* FUN_80405ae0 @ 80405ae0 */

void FUN_80405ae0(undefined1 param_1)

{
  FUN_804059b0(param_1);
  return;
}


/* FUN_80405b18 @ 80405b18 */

undefined4 FUN_80405b18(uint param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  
  param_1 = param_1 & 0xff;
  FUN_804077a4(s_EB_<Address>_<Value1>_<Value2>___8040e324 + 0x20);
  (**(code **)(&DAT_80410e98 + param_1 * 0x48))(param_1,param_2);
  uVar2 = 0;
  if (*(int *)(&DAT_80410e88 + param_1 * 0x48) != 0) {
    iVar1 = param_1 * 0x48;
    do {
      (**(code **)(&DAT_80410ea8 + iVar1))
                (param_1,param_2,*(undefined4 *)(&DAT_80410e84 + iVar1),param_3);
      param_2 = param_2 + *(int *)(&DAT_80410e84 + iVar1);
      param_3 = param_3 + *(int *)(&DAT_80410e84 + iVar1);
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)(&DAT_80410e88 + iVar1));
  }
  return *(undefined4 *)(&DAT_80410e7c + param_1 * 0x48);
}


/* FUN_80405c18 @ 80405c18 */

void FUN_80405c18(uint param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  undefined1 *puVar3;
  
  param_1 = param_1 & 0xff;
  uVar1 = *(uint *)(&DAT_80410e7c + param_1 * 0x48);
  puVar3 = &stack0xffffffe0 + -(uVar1 + 0xe & 0xfffffff8);
  if (uVar1 == 0) {
    trap(0x1c00);
  }
  iVar2 = param_2 - param_2 % uVar1;
  (*(code *)(&DAT_80410ea0)[param_1 * 0x12])(param_1,iVar2,uVar1,puVar3);
  FUN_80406a54(puVar3 + param_2 % uVar1,param_4,param_3);
  FUN_80405b18(param_1,iVar2,puVar3);
  return;
}


/* FUN_80405cf8 @ 80405cf8 */

undefined4 FUN_80405cf8(uint param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  uint uVar1;
  undefined4 local_30;
  int local_2c;
  int local_28;
  uint local_24;
  undefined4 local_20;
  int local_1c;
  
  param_1 = param_1 & 0xff;
  FUN_80404d84(param_2,param_3,*(undefined4 *)(&DAT_80410e7c + param_1 * 0x48),&local_30,&local_2c,
               &local_28,&local_24,&local_20,&local_1c);
  if ((local_24 == 0) && (local_1c == 0)) {
    FUN_80405c18(param_1,local_30,local_2c,param_4);
  }
  else {
    if (local_2c != 0) {
      FUN_80405c18(param_1,local_30,local_2c,param_4);
      param_4 = param_4 + local_2c;
    }
    uVar1 = 0;
    if (local_24 != 0) {
      do {
        FUN_80405b18(param_1,local_28,param_4);
        param_4 = param_4 + *(int *)(&DAT_80410e7c + param_1 * 0x48);
        local_28 = local_28 + *(int *)(&DAT_80410e7c + param_1 * 0x48);
        uVar1 = uVar1 + 1;
      } while (uVar1 < local_24);
    }
    if (local_1c != 0) {
      FUN_80405c18(param_1,local_20,local_1c,param_4);
    }
  }
  FUN_804051d4(param_1,0,0x4000000);
  return param_3;
}


/* FUN_80405e90 @ 80405e90 */

void FUN_80405e90(undefined1 param_1,undefined4 param_2,uint param_3,uint param_4,undefined4 param_5
                 ,undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
                 undefined4 param_10,undefined4 param_11,undefined4 param_12,undefined4 param_13)

{
  FUN_804077a4(&DAT_8040d7dc);
  FUN_804077a4(&DAT_8040d82c);
  FUN_804077a4(s___chip__no_chip__id_mfr___id_dev_8040d830);
  FUN_804077a4(s____7xh__7xh__7xh__7xh__7xh__7xh___8040d87c,param_1,param_2,param_3 >> 0x18,
               param_3 >> 0x10 & 0xff,param_3 >> 8 & 0xff,param_3 & 0xff,param_4 >> 0x18,param_5);
  FUN_804077a4(s___blk_size_blk__cnt_sec_size_sec_8040d8a8);
  FUN_804077a4(s____7xh__7xh__7xh__7xh__7xh__7xh___8040d8f4,param_6,param_7,param_8,param_9,param_10
               ,param_11,param_12,param_13);
  FUN_804077a4(&DAT_8040d920);
  FUN_804077a4(s__________________________________8040d924);
  return;
}


/* FUN_8040604c @ 8040604c */

void FUN_8040604c(uint param_1)

{
  char **ppcVar1;
  uint uVar2;
  uint *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  char **ppcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  int iVar10;
  char *local_58 [3];
  code *local_4c [2];
  char *local_44;
  code *local_40 [10];
  undefined1 auStack_18 [8];
  
  param_1 = param_1 & 0xff;
  FUN_80405104(param_1,4);
  uVar2 = FUN_80405104(param_1,4);
  uVar2 = uVar2 >> 8;
  puVar3 = &DAT_8040e924;
  iVar10 = 0;
  while ((*puVar3 != uVar2 || (puVar3[1] != 0))) {
    iVar10 = iVar10 + 1;
    puVar3 = puVar3 + 8;
    if (iVar10 == 0x1b) {
LAB_804060d4:
      local_58[0] = (char *)0x1f;
      FUN_80404c88(param_1,0x28,1,1);
      local_58[0] = (char *)0x1000;
      local_58[1] = (char *)0x100;
      local_58[2] = s_UNKNOWN_8040d978;
      local_4c[0] = FUN_80405444;
      local_4c[1] = FUN_80405ae0;
      local_44 = &LAB_8040554c;
      local_40[0] = FUN_8040597c;
      FUN_80404e88(param_1,uVar2,0x16,0x10000);
LAB_804062bc:
      iVar10 = param_1 * 0x48;
      (**(code **)(&DAT_80410ea4 + iVar10))(param_1);
      puVar5 = &DAT_80410e70 + param_1 * 0x12;
      ppcVar1 = local_58;
      do {
        ppcVar6 = ppcVar1;
        puVar4 = puVar5;
        pcVar9 = (char *)puVar4[1];
        pcVar8 = (char *)puVar4[2];
        pcVar7 = (char *)puVar4[3];
        *ppcVar6 = (char *)*puVar4;
        ppcVar6[1] = pcVar9;
        ppcVar6[2] = pcVar8;
        ppcVar6[3] = pcVar7;
        puVar5 = puVar4 + 4;
        ppcVar1 = ppcVar6 + 4;
      } while (puVar5 != &DAT_80410ea0 + param_1 * 0x12);
      pcVar8 = (char *)puVar4[5];
      pcVar7 = (char *)puVar4[6];
      ppcVar6[4] = (char *)*puVar5;
      ppcVar6[5] = pcVar8;
      ppcVar6[6] = pcVar7;
      FUN_80405e90(param_1,*(undefined4 *)(&DAT_80410e64 + iVar10),
                   *(undefined4 *)(&DAT_80410e68 + iVar10),*(undefined4 *)(&DAT_80410e6c + iVar10));
      (*(code *)(&DAT_80410ea0)[param_1 * 0x12])(param_1,0,4,auStack_18);
      return;
    }
  }
  if (iVar10 != 0x1b) {
    local_58[0] = (char *)0x1f;
    FUN_80404c88(param_1,*(undefined4 *)(iVar10 * 0x20 + -0x7fbf16c0),1,1);
    if ((uVar2 & 0xffff00) == 0x10200) {
      local_58[0] = *(char **)(iVar10 * 0x20 + -0x7fbf16cc);
      local_58[1] = *(char **)(iVar10 * 0x20 + -0x7fbf16c8);
      local_58[2] = *(char **)(iVar10 * 0x20 + -0x7fbf16c4);
      local_4c[0] = FUN_804054a4;
      local_4c[1] = FUN_80405ae0;
      local_44 = &LAB_8040554c;
      local_40[0] = FUN_8040597c;
      FUN_80404e88(param_1,uVar2,*(undefined4 *)(iVar10 * 0x20 + -0x7fbf16d4),
                   *(undefined4 *)(iVar10 * 0x20 + -0x7fbf16d0));
    }
    else {
      local_58[0] = *(char **)(iVar10 * 0x20 + -0x7fbf16cc);
      local_58[1] = *(char **)(iVar10 * 0x20 + -0x7fbf16c8);
      local_58[2] = *(char **)(iVar10 * 0x20 + -0x7fbf16c4);
      local_4c[0] = FUN_80405444;
      local_4c[1] = FUN_80405ae0;
      local_44 = &LAB_8040554c;
      local_40[0] = FUN_8040597c;
      FUN_80404e88(param_1,uVar2,*(undefined4 *)(iVar10 * 0x20 + -0x7fbf16d4),
                   *(undefined4 *)(iVar10 * 0x20 + -0x7fbf16d0));
    }
    goto LAB_804062bc;
  }
  goto LAB_804060d4;
}


/* FUN_80406390 @ 80406390 */

uint FUN_80406390(void)

{
  uint uVar1;
  
  uVar1 = (Status | 0x400000) ^ 0x400000 | 0xfc00;
  setCopReg(0,Status,uVar1);
  return uVar1;
}


/* FUN_804063b0 @ 804063b0 */

void FUN_804063b0(void)

{
  setCopReg(0,Status,Status & 0x1fffff3f | 0x10000000);
  FUN_80406534();
  return;
}


/* FUN_804063f0 @ 804063f0 */

void FUN_804063f0(void)

{
  setCopReg(0,XContext,0);
  setCopReg(0,XContext,0x200);
  setCopReg(0,XContext,0);
  return;
}


/* FUN_80406414 @ 80406414 */

void FUN_80406414(void)

{
  FUN_804063f0();
  setCopReg(0,XContext,0);
  setCopReg(0,XContext,2);
  setCopReg(0,XContext,0);
  return;
}


/* FUN_80406454 @ 80406454 */

void FUN_80406454(void)

{
  FUN_804063f0();
  FUN_80406414();
  return;
}


/* FUN_80406480 @ 80406480 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80406480(void)

{
  undefined4 uVar1;
  char *pcVar2;
  
  if (_DAT_b8000000 == -0x7e692000) {
    FUN_8040922c(0,2,0);
  }
  uVar1 = FUN_804093ac();
  if ((_DAT_b8000008 & 0x800000) == 0) {
    pcVar2 = &DAT_8040db68;
  }
  else {
    pcVar2 = s_Reboot_Result_from_Watchdog_Time_8040da84;
  }
  FUN_804079cc(s_Flash_Write_Successed___s_8040d464 + 0x18,pcVar2);
  FUN_804079cc(s____RealTek_RTL8196E_at__s__s___s_8040daac,&DAT_8040dad8,&DAT_8040ec90,
               s_16bit_8040daf0,uVar1);
  return;
}


/* FUN_80406534 @ 80406534 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80406534(void)

{
  undefined4 uVar1;
  undefined1 auStack_28 [16];
  undefined1 auStack_18 [12];
  
  FUN_80407bdc();
  FUN_80407c84();
  FUN_80407c3c();
  FUN_80407c1c();
  FUN_80407b20();
  FUN_80406480();
  if ((_DAT_b800000c & 0xf) == 0xd) {
    FUN_80408f70();
  }
  DAT_8040ee6c = 0;
  uVar1 = FUN_8040880c(auStack_28,auStack_18);
  FUN_80407ee8(uVar1,DAT_8040ee6c,auStack_28);
  return;
}


/* FUN_804065e0 @ 804065e0 */

void FUN_804065e0(undefined4 *param_1,int param_2)

{
  DAT_8040fd40 = param_1;
  *param_1 = 0;
  DAT_8040fd44 = (uint)(param_2 - (int)param_1) >> 3;
  param_1[1] = DAT_8040fd44;
  return;
}


/* FUN_80406604 @ 80406604 */

int * FUN_80406604(int param_1)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  
  if (DAT_8040fd40 != (int *)0x0) {
    uVar2 = (param_1 + 7U >> 3) + 1;
    uVar3 = DAT_8040fd40[1];
    piVar1 = DAT_8040fd40;
    while( true ) {
      if (uVar2 <= uVar3) {
        if (uVar2 < uVar3) {
          piVar4 = piVar1 + uVar2 * 2;
          DAT_8040fd40 = piVar4;
          *piVar4 = *piVar1;
          piVar4[1] = piVar1[1] - uVar2;
          piVar1[1] = uVar2;
        }
        else {
          DAT_8040fd40 = (int *)*piVar1;
        }
        DAT_8040fd44 = DAT_8040fd44 - uVar2;
        return piVar1 + 2;
      }
      piVar1 = (int *)*piVar1;
      if (piVar1 == (int *)0x0) break;
      uVar3 = piVar1[1];
    }
  }
  FUN_804077a4(s_Allocation_Failed__8040daf8);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* FUN_804066ec @ 804066ec */

void FUN_804066ec(int param_1)

{
  uint *in_v0;
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  int iVar5;
  
  puVar3 = DAT_8040fd40;
  if (param_1 == 0) {
    FUN_804077a4(s_Assertion_fail_at_file_8040d7b4);
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  if (DAT_8040fd40 == (uint *)0x0) {
    FUN_804077a4(s_Assertion_fail_at_file_8040d7b4);
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  puVar4 = (uint *)(param_1 + -8);
  iVar5 = *(int *)(param_1 + -4);
  DAT_8040fd44 = DAT_8040fd44 + iVar5;
  if (puVar4 < DAT_8040fd40) {
    if (DAT_8040fd40 == puVar4 + iVar5 * 2) {
      puVar2 = DAT_8040fd40 + 1;
      DAT_8040fd40 = puVar4;
      *(uint *)(param_1 + -4) = *puVar2 + iVar5;
      *puVar4 = *puVar3;
    }
    else {
      *puVar4 = (uint)DAT_8040fd40;
      DAT_8040fd40 = puVar4;
    }
  }
  else if (DAT_8040fd40 < puVar4) {
    uVar1 = DAT_8040fd40[1] + iVar5;
    in_v0 = DAT_8040fd40;
    if (puVar4 == DAT_8040fd40 + DAT_8040fd40[1] * 2) {
      DAT_8040fd40[1] = uVar1;
    }
    else {
      do {
        puVar3 = (uint *)*in_v0;
        if ((puVar3 == (uint *)0x0) || (puVar4 <= puVar3)) goto LAB_8040682c;
        in_v0 = puVar3;
      } while (puVar4 != puVar3 + puVar3[1] * 2);
      uVar1 = puVar3[1] + iVar5;
      puVar3[1] = uVar1;
    }
    puVar4 = (uint *)*puVar3;
    if (puVar4 == puVar3 + uVar1 * 2) {
      puVar3[1] = uVar1 + puVar4[1];
      *puVar3 = *puVar4;
    }
  }
  else {
LAB_8040682c:
    *in_v0 = (uint)puVar4;
    puVar2 = puVar4 + *(int *)(param_1 + -4) * 2;
    if (puVar2 == puVar3) {
      *(uint *)(param_1 + -4) = puVar2[1] + *(int *)(param_1 + -4);
      *puVar4 = *puVar2;
    }
    else {
      *puVar4 = (uint)puVar3;
    }
  }
  return;
}


/* FUN_80406880 @ 80406880 */

void FUN_80406880(char param_1)

{
  int iVar1;
  
  iVar1 = 1;
  do {
    iVar1 = iVar1 + 1;
    if ((DAT_b8002014 & 0x60) != 0) break;
  } while (iVar1 != 0x198c);
  DAT_b8002000 = param_1;
  if (param_1 == '\n') {
    DAT_b8002000 = '\r';
  }
  return;
}


/* FUN_804068e8 @ 804068e8 */

int FUN_804068e8(void)

{
  do {
  } while ((DAT_b8002014 & 1) == 0);
  return (int)DAT_b8002000;
}


/* FUN_8040691c @ 8040691c */

bool FUN_8040691c(char param_1)

{
  if ((int)param_1 - 9U < 5) {
    return true;
  }
  return param_1 == 0x20;
}


/* FUN_80406978 @ 80406978 */

void FUN_80406978(char *param_1,byte *param_2)

{
  char cVar1;
  byte bVar2;
  
  do {
    cVar1 = *param_1;
    bVar2 = *param_2;
    param_2 = param_2 + 1;
    if ((int)(((int)cVar1 - (uint)bVar2) * 0x1000000) >> 0x18 != 0) {
      return;
    }
    param_1 = param_1 + 1;
  } while (cVar1 != 0);
  return;
}


/* FUN_804069a8 @ 804069a8 */

char * FUN_804069a8(char *param_1,char param_2)

{
  if (*param_1 != param_2) {
    if (*param_1 == '\0') {
      return (char *)0x0;
    }
    while( true ) {
      param_1 = param_1 + 1;
      if (*param_1 == param_2) break;
      if (*param_1 == '\0') {
        return (char *)0x0;
      }
    }
  }
  return param_1;
}


/* FUN_80406a00 @ 80406a00 */

int FUN_80406a00(char *param_1)

{
  char cVar1;
  char *pcVar2;
  
  cVar1 = *param_1;
  pcVar2 = param_1;
  while (cVar1 != '\0') {
    pcVar2 = pcVar2 + 1;
    cVar1 = *pcVar2;
  }
  return (int)pcVar2 - (int)param_1;
}


/* FUN_80406a30 @ 80406a30 */

undefined1 * FUN_80406a30(undefined1 *param_1,undefined1 param_2,int param_3)

{
  undefined1 *puVar1;
  
  puVar1 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *puVar1 = param_2;
    puVar1 = puVar1 + 1;
  }
  return param_1;
}


/* FUN_80406a54 @ 80406a54 */

void FUN_80406a54(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  
  if (param_3 != 0) {
    iVar1 = 0;
    do {
      puVar2 = (undefined1 *)(param_1 + iVar1);
      puVar3 = (undefined1 *)(param_2 + iVar1);
      iVar1 = iVar1 + 1;
      *puVar2 = *puVar3;
    } while (iVar1 != param_3);
  }
  return;
}


/* FUN_80406a80 @ 80406a80 */

int FUN_80406a80(byte *param_1,byte *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  if (param_3 != 0) {
    iVar1 = (uint)*param_1 - (uint)*param_2;
    iVar2 = 0;
    while ((iVar1 = iVar1 * 0x1000000 >> 0x18, iVar1 == 0 && (param_3 = param_3 + -1, param_3 != 0))
          ) {
      iVar1 = (uint)param_1[iVar2 + 1] - (uint)param_2[iVar2 + 1];
      iVar2 = iVar2 + 1;
    }
  }
  return iVar1;
}


/* FUN_80406ae8 @ 80406ae8 */

int FUN_80406ae8(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = FUN_80406a00(param_2);
  if (iVar1 != 0) {
    iVar2 = FUN_80406a00(param_1);
    while (iVar1 <= iVar2) {
      iVar3 = FUN_80406a80(param_1,param_2,iVar1);
      iVar2 = iVar2 + -1;
      if (iVar3 == 0) {
        return param_1;
      }
      param_1 = param_1 + 1;
    }
    param_1 = 0;
  }
  return param_1;
}


/* FUN_80406b90 @ 80406b90 */

int FUN_80406b90(char *param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  
  do {
    pcVar4 = param_1;
    cVar1 = *pcVar4;
    iVar2 = FUN_8040691c((int)cVar1);
    param_1 = pcVar4 + 1;
  } while (iVar2 != 0);
  iVar2 = 0;
  if (cVar1 == 0x2d) {
    pcVar4 = pcVar4 + 1;
    iVar2 = -1;
  }
  iVar3 = FUN_80406c50(pcVar4,param_2,param_3);
  if (iVar3 < 0) {
    if (iVar3 != -0x80000000) {
      iVar3 = -0x80000000;
    }
    if (iVar2 == 0) {
      iVar3 = 0x7fffffff;
    }
  }
  else if (iVar2 != 0) {
    iVar3 = -iVar3;
  }
  return iVar3;
}


/* FUN_80406c50 @ 80406c50 */

uint FUN_80406c50(char *param_1,undefined4 *param_2,int param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  
  do {
    pcVar5 = param_1;
    cVar1 = *pcVar5;
    iVar2 = FUN_8040691c((int)cVar1);
    param_1 = pcVar5 + 1;
  } while (iVar2 != 0);
  if (cVar1 == 0x2b) {
    pcVar5 = pcVar5 + 1;
  }
  if (param_3 == 0x10) {
    uVar4 = (uint)*pcVar5;
    if (uVar4 != 0x30) goto LAB_80406d00;
LAB_80406cd8:
    if ((pcVar5[1] == 'x') || (pcVar5[1] == 'X')) {
      pcVar5 = pcVar5 + 2;
      param_3 = 0x10;
    }
  }
  else if (param_3 == 0) {
    uVar4 = (uint)*pcVar5;
    param_3 = 10;
    if (uVar4 != 0x30) goto LAB_80406d00;
    param_3 = 8;
    goto LAB_80406cd8;
  }
  uVar4 = (uint)*pcVar5;
LAB_80406d00:
  uVar3 = 0;
  while (uVar4 != 0) {
    uVar4 = uVar4 & 0xff;
    if (uVar4 < 0x61) {
      if (uVar4 < 0x41) {
        if (uVar4 < 0x3a) {
          uVar4 = uVar4 - 0x30 & 0xff;
        }
        else {
          uVar4 = 0xff;
        }
      }
      else {
        uVar4 = uVar4 - 0x37 & 0xff;
      }
    }
    else {
      uVar4 = uVar4 - 0x57 & 0xff;
    }
    if (param_3 <= (int)uVar4) break;
    pcVar5 = pcVar5 + 1;
    if (uVar3 * param_3 < uVar3) {
      return 0xffffffff;
    }
    uVar3 = uVar4 + uVar3 * param_3;
    uVar4 = (uint)*pcVar5;
  }
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = pcVar5;
  }
  return uVar3;
}


/* FUN_80406dc0 @ 80406dc0 */

char * FUN_80406dc0(char *param_1)

{
  char cVar1;
  char *pcVar2;
  
  cVar1 = *param_1;
  pcVar2 = param_1;
  while (cVar1 != '\0') {
    if ((byte)(cVar1 + 0x9fU) < 0x1a) {
      *pcVar2 = cVar1 + -0x20;
    }
    pcVar2 = pcVar2 + 1;
    cVar1 = *pcVar2;
  }
  return param_1;
}


/* FUN_80406e0c @ 80406e0c */

int FUN_80406e0c(char *param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  
  iVar3 = 0;
  do {
    cVar2 = *param_1;
LAB_80406e54:
    if (cVar2 == '\0') {
      iVar1 = 0x13;
      if (iVar3 < 0x14) {
        iVar1 = iVar3;
      }
      return iVar1;
    }
    if (cVar2 != ' ') {
      iVar3 = iVar3 + 1;
      do {
        param_1 = param_1 + 1;
        cVar2 = *param_1;
        if (cVar2 == ' ') break;
      } while (cVar2 != '\0');
      goto LAB_80406e54;
    }
    param_1 = param_1 + 1;
  } while( true );
}


/* FUN_80406e68 @ 80406e68 */

undefined4 FUN_80406e68(char *param_1,uint *param_2)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = 0;
  do {
    cVar1 = *param_1;
    param_1 = param_1 + 1;
    if (cVar1 == '\0') {
      *param_2 = uVar4;
      return 1;
    }
    uVar3 = (uint)(byte)(cVar1 - 0x30);
    if (9 < uVar3) {
      if ((byte)(cVar1 + 0x9fU) < 6) {
        uVar3 = (uint)(byte)(cVar1 + 0xa9);
      }
      else {
        if (5 < (byte)(cVar1 + 0xbfU)) {
          return 0;
        }
        uVar3 = (uint)(byte)(cVar1 - 0x37);
      }
    }
    uVar3 = uVar3 + uVar4 * 0x10;
    bVar2 = uVar4 <= uVar3;
    uVar4 = uVar3;
  } while (bVar2);
  return 0;
}


/* FUN_80406ef8 @ 80406ef8 */

undefined4 * FUN_80406ef8(char *param_1)

{
  char cVar1;
  undefined4 *puVar2;
  char *pcVar3;
  
  puVar2 = &DAT_8040fd50;
  FUN_80406a30(&DAT_8040fd50,0,0x50);
  do {
    if (*param_1 == '\0') break;
    *puVar2 = param_1;
    cVar1 = *param_1;
    pcVar3 = param_1;
    while ((cVar1 != ' ' && (cVar1 != '\0'))) {
      pcVar3 = pcVar3 + 1;
      cVar1 = *pcVar3;
    }
    *pcVar3 = '\0';
    param_1 = pcVar3 + 1;
    if (*param_1 == ' ') {
      pcVar3 = pcVar3 + 2;
      do {
        param_1 = pcVar3;
        pcVar3 = param_1 + 1;
      } while (*param_1 == ' ');
    }
    puVar2 = puVar2 + 1;
  } while (puVar2 != &DAT_8040fda0);
  return &DAT_8040fd50;
}


/* FUN_80406fd4 @ 80406fd4 */

void FUN_80406fd4(char *param_1,uint param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  char cVar3;
  char *pcVar4;
  uint uVar5;
  char *pcVar6;
  
  if (param_2 != 0) {
    uVar5 = 0;
    pcVar6 = param_1;
    do {
      iVar2 = FUN_804068e8();
      cVar3 = (char)iVar2;
      if (iVar2 == -1) {
LAB_804070f0:
        bVar1 = uVar5 < param_2;
      }
      else {
        if (cVar3 == '\n') {
          return;
        }
        if (cVar3 == '\r') {
          *pcVar6 = '\0';
          return;
        }
        if ((cVar3 != '\b') && (cVar3 != '\x7f')) {
          if (cVar3 == '\t') {
            iVar2 = 0;
            pcVar4 = pcVar6;
            do {
              *pcVar4 = ' ';
              pcVar4 = pcVar4 + 1;
              if (param_3 != 0) {
                FUN_80406880(0x20);
              }
              iVar2 = iVar2 + 1;
            } while (iVar2 != 8);
            pcVar6 = pcVar6 + 8;
            uVar5 = uVar5 + 8;
          }
          else {
            *pcVar6 = cVar3;
            pcVar6 = pcVar6 + 1;
            uVar5 = uVar5 + 1;
            if (param_3 != 0) {
              FUN_80406880();
            }
          }
          goto LAB_804070f0;
        }
        bVar1 = uVar5 < param_2;
        if (pcVar6 != param_1) {
          pcVar6 = pcVar6 + -1;
          uVar5 = uVar5 - 1;
          if (param_3 == 0) goto LAB_804070f0;
          FUN_80406880(8);
          FUN_80406880(0x20);
          FUN_80406880(8);
          bVar1 = uVar5 < param_2;
        }
      }
    } while (bVar1);
  }
  return;
}


/* FUN_80407228 @ 80407228 */

uint FUN_80407228(uint param_1)

{
  DAT_8040eca0 = (DAT_8040eca0 & 0xffff) * 0x13 + 0x25 ^ (DAT_8040eca0 >> 0x10) * 0x130000 ^
                 (DAT_8040eca0 >> 0x10) * 0x13;
  if (param_1 == 0) {
    trap(0x1c00);
  }
  return DAT_8040eca0 % param_1;
}


/* FUN_80407318 @ 80407318 */

void FUN_80407318(uint param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_80409050();
  do {
    iVar2 = FUN_80409050();
  } while ((uint)(iVar2 - iVar1) < param_1 / 10);
  return;
}


/* FUN_80407374 @ 80407374 */

void FUN_80407374(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_80409050();
  do {
    iVar2 = FUN_80409050();
  } while ((uint)(iVar2 - iVar1) < (uint)(param_1 * 100));
  return;
}


/* FUN_804073d8 @ 804073d8 */

void FUN_804073d8(uint param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_80409050();
  do {
    iVar2 = FUN_80409050();
  } while ((uint)(iVar2 - iVar1) < param_1 / 10);
  return;
}


/* FUN_80407434 @ 80407434 */

void FUN_80407434(void)

{
  uint uVar1;
  
  uVar1 = DAT_8040fda0 & 3;
  DAT_8040fda0 = DAT_8040fda0 + 1;
  FUN_80406880((int)(char)(&DAT_8040a7a0)[uVar1]);
  FUN_80406880(8);
  return;
}


/* FUN_80407480 @ 80407480 */

int FUN_80407480(byte *param_1,byte *param_2,int *param_3)

{
  bool bVar1;
  byte *pbVar2;
  uint uVar3;
  int iVar4;
  byte bVar6;
  int iVar5;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte local_48 [24];
  int local_30;
  
  bVar6 = *param_2;
  pbVar9 = param_1;
  if (bVar6 != 0) {
    local_30 = 0x66666667;
    do {
      if (bVar6 == 0x25) {
        pbVar10 = param_2 + 1;
        if (*pbVar10 == 0x73) {
          pbVar7 = (byte *)*param_3;
          bVar6 = *pbVar7;
          param_3 = param_3 + 1;
          if (bVar6 != 0) {
            do {
              if (param_1 == (byte *)0x0) {
                FUN_80406880();
              }
              else {
                *pbVar9 = bVar6;
                pbVar9 = pbVar9 + 1;
              }
              pbVar7 = pbVar7 + 1;
              bVar6 = *pbVar7;
            } while (bVar6 != 0);
            param_2 = param_2 + 2;
            goto LAB_80407758;
          }
        }
        else {
          uVar3 = (uint)*pbVar10;
          if ((uVar3 - 0x30 & 0xff) < 10) {
            iVar5 = 0;
            do {
              iVar4 = iVar5 * 10 + uVar3;
              pbVar10 = pbVar10 + 1;
              uVar3 = (uint)*pbVar10;
              iVar5 = iVar4 + -0x30;
            } while ((uVar3 - 0x30 & 0xff) < 10);
            uVar3 = (iVar4 + -0x31) * 4;
          }
          else {
            uVar3 = 0x1c;
          }
          bVar6 = *pbVar10;
          if ((bVar6 == 0x78) || (bVar6 == 0x58)) {
            iVar5 = *param_3;
            param_3 = param_3 + 1;
            pbVar7 = local_48;
            if ((int)uVar3 < 0) goto LAB_80407754;
            do {
              *pbVar7 = s_0123456789ABCDEF_8040db0c[iVar5 >> (uVar3 & 0x1f) & 0xf] | bVar6 & 0x20;
              uVar3 = uVar3 - 4;
              pbVar7 = pbVar7 + 1;
            } while (-1 < (int)uVar3);
            bVar1 = local_48 < pbVar7;
          }
          else {
            if (bVar6 == 100) {
              iVar5 = *param_3;
              param_3 = param_3 + 1;
              pbVar7 = local_48;
              pbVar8 = local_48;
              if (iVar5 < 0) {
                local_48[0] = 0x2d;
                iVar5 = -iVar5;
                pbVar7 = local_48 + 1;
                pbVar8 = local_48 + 1;
              }
              do {
                pbVar2 = pbVar7;
                iVar4 = (int)((longlong)iVar5 * (longlong)local_30 >> 0x22) - (iVar5 >> 0x1f);
                *pbVar2 = (char)iVar5 + (char)iVar4 * -10 + 0x30;
                pbVar7 = pbVar2 + 1;
                iVar5 = iVar4;
              } while (iVar4 != 0);
              if (pbVar8 < pbVar2) {
                do {
                  bVar6 = *pbVar2;
                  *pbVar2 = *pbVar8;
                  *pbVar8 = bVar6;
                  pbVar8 = pbVar8 + 1;
                  pbVar2 = pbVar2 + -1;
                } while (pbVar8 < pbVar2);
                bVar1 = local_48 < pbVar7;
                goto LAB_80407710;
              }
            }
            else {
              pbVar7 = local_48 + 1;
              if (bVar6 == 99) {
                local_48[0] = (byte)*param_3;
                param_3 = param_3 + 1;
              }
              else {
                local_48[0] = bVar6;
              }
            }
            bVar1 = local_48 < pbVar7;
          }
LAB_80407710:
          pbVar8 = local_48;
          if (bVar1) {
            do {
              if (param_1 == (byte *)0x0) {
                FUN_80406880((int)(char)*pbVar8);
              }
              else {
                *pbVar9 = *pbVar8;
                pbVar9 = pbVar9 + 1;
              }
              pbVar8 = pbVar8 + 1;
            } while (pbVar8 < pbVar7);
          }
        }
LAB_80407754:
        param_2 = pbVar10 + 1;
      }
      else {
        if (param_1 != (byte *)0x0) {
          *pbVar9 = bVar6;
          pbVar9 = pbVar9 + 1;
          pbVar10 = param_2;
          goto LAB_80407754;
        }
        param_2 = param_2 + 1;
        FUN_80406880();
      }
LAB_80407758:
      bVar6 = *param_2;
    } while (bVar6 != 0);
  }
  if (param_1 != (byte *)0x0) {
    *pbVar9 = 0;
  }
  return (int)pbVar9 - (int)param_1;
}


/* FUN_804077a4 @ 804077a4 */

void FUN_804077a4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 local_res4;
  undefined4 local_res8;
  undefined4 local_resc;
  
  local_res4 = param_2;
  local_res8 = param_3;
  local_resc = param_4;
  FUN_80407480(0,param_1,&local_res4);
  return;
}


/* FUN_804077dc @ 804077dc */

void FUN_804077dc(char *param_1,int param_2)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_30;
  
  FUN_804077a4(s__Addr___0__1__2__3__4__5__6__7___8040db20);
  iVar4 = 0;
  local_30 = param_2;
  if (0 < param_2) {
    do {
      FUN_804077a4(s__08X__8040db5c,param_1);
      iVar4 = iVar4 + 0x10;
      iVar3 = 0x10;
      if ((iVar4 < param_2) || (iVar3 = local_30, 0 < local_30)) {
        iVar2 = 0;
        pcVar1 = param_1;
        do {
          FUN_804077a4(&DAT_8040db64,*pcVar1);
          iVar2 = iVar2 + 1;
          pcVar1 = pcVar1 + 1;
        } while (iVar2 < iVar3);
      }
      if (0 < 0x10 - iVar3) {
        iVar2 = 0;
        do {
          FUN_804077a4(&DAT_8040db6c);
          iVar2 = iVar2 + 1;
        } while (iVar2 < 0x10 - iVar3);
      }
      FUN_804077a4(&DAT_8040db70);
      if (0 < iVar3) {
        iVar2 = 0;
        pcVar1 = param_1;
        do {
          if ((byte)(*pcVar1 - 0x20U) < 0x5f) {
            FUN_804077a4(&DAT_8040db78);
          }
          else {
            FUN_804077a4(s_EB_<Address>_<Value1>_<Value2>___8040e324 + 0x20);
          }
          iVar2 = iVar2 + 1;
          pcVar1 = pcVar1 + 1;
        } while (iVar2 < iVar3);
      }
      FUN_804077a4(&DAT_8040db7c);
      local_30 = local_30 + -0x10;
      param_1 = param_1 + 0x10;
    } while (iVar4 < param_2);
  }
  return;
}


/* FUN_804079a0 @ 804079a0 */

void FUN_804079a0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 local_res8;
  undefined4 local_resc;
  
  local_res8 = param_3;
  local_resc = param_4;
  FUN_80407480(param_1,param_2,&local_res8);
  return;
}


/* FUN_804079cc @ 804079cc */

void FUN_804079cc(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 local_res4;
  undefined4 local_res8;
  undefined4 local_resc;
  
  local_res4 = param_2;
  local_res8 = param_3;
  local_resc = param_4;
  FUN_80407480(0,param_1,&local_res4);
  return;
}


/* FUN_80407a10 @ 80407a10 */

undefined4 FUN_80407a10(void)

{
  if (DAT_8040fdb0 == 1) {
    if (DAT_8040fdb4 == -0x10) {
      return 0;
    }
  }
  else if ((DAT_8040fdb0 != 2) || (DAT_8040fdb4 != -0x10)) {
    return 0;
  }
  return 0x400000;
}


/* FUN_80407a70 @ 80407a70 */

uint FUN_80407a70(void)

{
  uint uVar1;
  
  if (DAT_8040fdb4 < 0x80000002) {
    return 0x80000002;
  }
  uVar1 = DAT_8040fdb4;
  if (DAT_8040fdb4 != 0xfffffff0) {
    uVar1 = DAT_8040fdb4 + 1;
  }
  return uVar1;
}


/* normalize_bankmark @ 80407aa8 */

uint normalize_bankmark(int found,undefined *header)

{
  uint uVar1;
  
  uVar1 = 0x80000000;
  if ((found != 0) && (uVar1 = *(uint *)(header + 8), -1 < (int)uVar1)) {
    uVar1 = 0x80000001;
  }
  return uVar1;
}


/* FUN_80407ad0 @ 80407ad0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_80407ad0(uint param_1)

{
  if (((_DAT_b8002014 & 0x1000000) != 0) && (_DAT_b8002000 >> 0x18 == param_1)) {
    DAT_8040fdb8 = 1;
    return 1;
  }
  return 0;
}


/* FUN_80407b20 @ 80407b20 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80407b20(void)

{
  _DAT_b8000040 = _DAT_b8000040 & 0xfffffff8 | 6;
  _DAT_b8003500 = _DAT_b8003500 & 0xffffffdf;
  _DAT_b8003508 = _DAT_b8003508 & 0xffffffdf;
  return;
}


/* FUN_80407b6c @ 80407b6c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80407b6c(uint param_1)

{
  _DAT_b8002008 = 0xc7000000;
  _DAT_a1000000 = param_1 / 0x96000 - 1;
  _DAT_b8002000 = _DAT_a1000000 * 0x1000000;
  _DAT_b8002004 = (_DAT_a1000000 >> 8) << 0x18;
  _DAT_b800200c = 0x3000000;
  return;
}


/* FUN_80407bdc @ 80407bdc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80407bdc(void)

{
  _DAT_b8001000 = _DAT_b8001000 | 0x8000000;
  FUN_80407b6c(DAT_8040ecc0);
  return;
}


/* FUN_80407c1c @ 80407c1c */

void FUN_80407c1c(void)

{
  FUN_80404bc8();
  return;
}


/* FUN_80407c3c @ 80407c3c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80407c3c(void)

{
  _DAT_b8003000 = 0;
  FUN_80406390();
  FUN_8040d07c();
  FUN_8040d05c();
  setCopReg(0,Status,(Status | 0x1f) ^ 0x1e);
  return;
}


/* FUN_80407c84 @ 80407c84 */

void FUN_80407c84(void)

{
  FUN_804065e0(&DAT_80410ef8,&DAT_80420ef0);
  setCopReg(0,Status,(Status | 1) ^ 1);
  FUN_80406454();
  return;
}


/* publish_boot_bank @ 80407ce4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void publish_boot_bank(void)

{
  FUN_804079cc(s_return_addr____x__boot_bank__d__b_8040db80,DAT_8040ee6c,DAT_8040fdb0,DAT_8040fdb4);
  if (DAT_8040fdb0 == 2) {
    _DAT_b8003504 = _DAT_b8003504 | 1;
  }
  return;
}


/* FUN_80407d48 @ 80407d48 */

void FUN_80407d48(void)

{
  FUN_804027cc(0);
  FUN_804077a4(s____Ethernet_init_Okay__8040dbb4);
  setCopReg(0,Status,(Status | 0x1f) ^ 0x1e);
  FUN_80400dd8(0);
  FUN_8040a594();
  return;
}


/* FUN_80407d94 @ 80407d94 */

int FUN_80407d94(int param_1)

{
  int iVar1;
  
  if (((param_1 == -1) || (param_1 == 1)) && (iVar1 = FUN_80408960(), param_1 = 0, iVar1 != 0)) {
    DAT_8040fdb8 = 1;
    param_1 = 1;
  }
  return param_1;
}


/* FUN_80407de0 @ 80407de0 */

int FUN_80407de0(void)

{
  int iVar1;
  int iVar2;
  
  FUN_80409050();
  iVar1 = FUN_80407ad0(0x1b);
  iVar2 = 1;
  if ((iVar1 != 1) && (iVar2 = FUN_80407d94(0xffffffff), iVar2 < 0)) {
    iVar2 = 0;
  }
  return iVar2;
}


/* jump_to_kernel @ 80407e24 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void jump_to_kernel(int param_1,int param_2)

{
  int iVar1;
  code *pcVar2;
  
  iVar1 = 0;
  do {
    *(undefined2 *)(param_2 + iVar1) = *(undefined2 *)(&DAT_b8000000 + iVar1 + param_1);
    iVar1 = iVar1 + 2;
  } while (iVar1 != 0x10);
  iVar1 = FUN_80407de0(0);
  if (iVar1 == 0) {
    _DAT_b8003528 = _DAT_b8003528 | 0x1000000;
    _DAT_b8003000 = iVar1;
    FUN_804079cc(s_Jump_to_image_start_0x_x____8040dbd0,*(undefined4 *)(param_2 + 4));
    publish_boot_bank();
    pcVar2 = *(code **)(param_2 + 4);
    setCopReg(0,Status,(Status | 1) ^ 1);
    FUN_80406454();
    (*pcVar2)();
  }
  return;
}


/* FUN_80407ee8 @ 80407ee8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80407ee8(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  if (param_1 == 0) {
    _DAT_b8003000 = 0;
    FUN_80407d48();
  }
  else {
    iVar1 = FUN_80407de0(990000000);
    if (iVar1 != 1) {
      jump_to_kernel(param_2,param_3);
    }
    FUN_804077a4(s____Escape_booting_by_user_8040dbf0);
    _DAT_b8003000 = 0;
    FUN_80407d48();
  }
  return;
}


/* probe_kernel_header @ 80407f78 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint probe_kernel_header(uint flash_address,undefined *header)

{
  uint uVar1;
  int iVar2;
  undefined4 local_10;
  undefined4 local_c;
  
  iVar2 = 0;
  do {
    *(undefined2 *)(header + iVar2) = *(undefined2 *)(&DAT_b8000000 + iVar2 + flash_address);
    iVar2 = iVar2 + 2;
  } while (iVar2 != 0x10);
  local_10 = DAT_8040d438;
  local_c = DAT_8040d440;
  iVar2 = FUN_80406a80(header,&local_10,4);
  if (iVar2 == 0) {
    uVar1 = 1;
  }
  else {
    iVar2 = FUN_80406a80(header,&local_c,4);
    uVar1 = 2;
    if (iVar2 != 0) {
      uVar1 = 0;
    }
  }
  return uVar1;
}


/* find_bank_header @ 80408028 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint find_bank_header(undefined *header,uint bank_offset,undefined *where)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  uVar6 = bank_offset + 0x5010000;
  uVar2 = probe_kernel_header(uVar6,header);
  uVar5 = uVar6;
  if (uVar2 == 0) {
    uVar2 = probe_kernel_header(bank_offset + 0x5020000,header);
    uVar5 = bank_offset + 0x5020000;
    if (uVar2 == 0) {
      uVar3 = probe_kernel_header(bank_offset + 0x5030000,header);
      iVar4 = 0x10000;
      uVar5 = bank_offset + 0x5030000;
      uVar2 = uVar3;
      while (uVar2 == 0) {
        uVar2 = uVar3;
        if (((iVar4 != 0x10000) && (iVar4 != 0x20000)) && (iVar4 != 0x30000)) {
          uVar2 = probe_kernel_header(uVar6,header);
        }
        bVar1 = iVar4 == 0x50000;
        iVar4 = iVar4 + 0x1000;
        uVar5 = uVar6;
        if (bVar1) {
          if (uVar2 == 0) {
            return 0;
          }
          break;
        }
        uVar6 = uVar6 + 0x1000;
      }
    }
  }
  *(uint *)where = uVar5;
  return uVar2;
}


/* validate_rootfs @ 80408140 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint validate_rootfs(uint flash_address)

{
  undefined2 *puVar1;
  int iVar2;
  uint uVar3;
  undefined2 *puVar4;
  short sVar5;
  undefined2 local_38 [4];
  int local_30;
  
  if (DAT_8040fdb8 == 1) {
    uVar3 = 0;
  }
  else {
    puVar1 = local_38;
    puVar4 = (undefined2 *)(&DAT_b8000000 + flash_address);
    do {
      *puVar1 = *puVar4;
      puVar1 = puVar1 + 1;
      puVar4 = puVar4 + 1;
    } while (puVar1 != (undefined2 *)&stack0xffffffd8);
    iVar2 = FUN_80406a80(local_38,&DAT_8040d36c,4);
    if ((iVar2 == 0) || (iVar2 = FUN_80406a80(local_38,&DAT_8040dc0c,4), iVar2 == 0)) {
      uVar3 = 0;
      if (local_30 != -0x282) {
        sVar5 = 0;
        do {
          DAT_8040fdbc = DAT_8040fdbc + 1;
          if (0x80000 < DAT_8040fdbc) {
            DAT_8040fdbc = 0;
            iVar2 = FUN_80407de0(0);
            if (iVar2 == 1) {
              return 0;
            }
          }
          sVar5 = sVar5 + *(short *)((int)(&DAT_b8000000 + flash_address) + uVar3);
          uVar3 = uVar3 + 2;
        } while (uVar3 < local_30 + 0x282U);
        if (sVar5 != 0) {
          FUN_804079cc(s_rootfs_checksum_error_at__X__8040dc30,flash_address + 0xfb000000);
          return 0;
        }
      }
      uVar3 = 1;
    }
    else {
      FUN_804079cc(s_no_rootfs_signature_at__X__8040dc14,flash_address + 0xfb000000);
      uVar3 = 0;
    }
  }
  return uVar3;
}


/* validate_kernel_image @ 804082d4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint validate_kernel_image(uint flash_address,undefined *header)

{
  int iVar1;
  uint uVar2;
  short sVar3;
  uint uVar4;
  undefined4 local_30;
  undefined4 local_2c;
  
  if (DAT_8040fdb8 != 1) {
    iVar1 = 0;
    do {
      *(undefined2 *)(header + iVar1) = *(undefined2 *)(&DAT_b8000000 + iVar1 + flash_address);
      iVar1 = iVar1 + 2;
    } while (iVar1 != 0x10);
    local_30 = DAT_8040d438;
    local_2c = DAT_8040d440;
    iVar1 = FUN_80406a80(header,&local_30,4);
    uVar4 = 1;
    if (iVar1 != 0) {
      iVar1 = FUN_80406a80(header,&local_2c,4);
      if (iVar1 != 0) {
        FUN_804079cc(s_no_sys_signature_at__X__8040dc50,flash_address + 0xfb000000);
        return 0;
      }
      uVar4 = 2;
    }
    DAT_8040ee78 = *(int *)(header + 4);
    FUN_80404a94(DAT_8040ee78,flash_address + 0xfb000010,*(undefined4 *)(header + 0xc));
    uVar2 = 0;
    if (*(int *)(header + 0xc) == 0) {
      return uVar4;
    }
    sVar3 = 0;
    do {
      if (((uVar2 & 0xffff) == 0) && (DAT_8040fdbc = DAT_8040fdbc + 1, 0x80000 < DAT_8040fdbc)) {
        DAT_8040fdbc = 0;
        iVar1 = FUN_80407de0(0);
        if (iVar1 == 1) {
          return 0;
        }
      }
      sVar3 = sVar3 + *(short *)(DAT_8040ee78 + uVar2);
      uVar2 = uVar2 + 2;
    } while (uVar2 < *(uint *)(header + 0xc));
    if (sVar3 == 0) {
      return uVar4;
    }
  }
  return 0;
}


/* check_image_header @ 804084bc */

uint check_image_header(undefined *header,undefined *scratch,uint bank_offset)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  uVar5 = bank_offset + 0x5010000;
  DAT_8040ee6c = uVar5;
  FUN_804077a4(s__s_return_addr__x_bank_offset__x_8040dc6c,s_check_image_header_8040a7b0,uVar5,
               bank_offset);
  uVar2 = validate_kernel_image(uVar5,header);
  if (uVar2 == 0) {
    DAT_8040ee6c = bank_offset + 0x5020000;
    uVar2 = validate_kernel_image(DAT_8040ee6c,header);
    if (uVar2 == 0) {
      DAT_8040ee6c = bank_offset + 0x5030000;
      uVar3 = validate_kernel_image(DAT_8040ee6c,header);
      uVar2 = uVar3;
      if (uVar3 == 0) {
        iVar4 = 0x10000;
        do {
          uVar2 = uVar3;
          DAT_8040ee6c = uVar5;
          if (((iVar4 != 0x10000) && (iVar4 != 0x20000)) && (iVar4 != 0x30000)) {
            uVar2 = validate_kernel_image(uVar5,header);
          }
          uVar5 = uVar5 + 0x1000;
        } while ((iVar4 != 0x50000) && (iVar4 = iVar4 + 0x1000, uVar2 == 0));
      }
    }
  }
  if (uVar2 == 2) {
    uVar5 = bank_offset + 0x50e0000;
    uVar2 = validate_rootfs(uVar5);
    if ((uVar2 == 0) && (uVar2 = validate_rootfs(bank_offset + 0x50f0000), uVar2 == 0)) {
      uVar3 = validate_rootfs(bank_offset + 0x5130000);
      iVar4 = 0xe0000;
      uVar2 = uVar3;
      while (uVar2 == 0) {
        uVar2 = uVar3;
        if (((iVar4 != 0xe0000) && (iVar4 != 0xf0000)) && (iVar4 != 0x130000)) {
          uVar2 = validate_rootfs(uVar5);
        }
        bVar1 = iVar4 == 0x170000;
        iVar4 = iVar4 + 0x10000;
        if (bVar1) {
          return uVar2;
        }
        uVar5 = uVar5 + 0x10000;
      }
    }
  }
  return uVar2;
}


/* select_boot_bank @ 804086b0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint select_boot_bank(int full_validation)

{
  uint uVar1;
  uint found;
  uint uVar2;
  uint bank_offset;
  uint bank_offset_00;
  undefined4 uVar3;
  uint uVar4;
  undefined auStack_50 [16];
  undefined auStack_40 [16];
  undefined auStack_30 [8];
  undefined auStack_28 [4];
  undefined auStack_24 [4];
  
  uVar1 = find_bank_header(auStack_50,0,auStack_28);
  found = find_bank_header(auStack_40,0x400000,auStack_24);
  uVar2 = normalize_bankmark(uVar1,auStack_50);
  DAT_8040fdb4 = normalize_bankmark(found,auStack_40);
  if (uVar2 < DAT_8040fdb4) {
    DAT_8040fdb0 = 2;
    bank_offset = 0x400000;
    uVar3 = 1;
    bank_offset_00 = 0;
    uVar4 = uVar2;
  }
  else {
    DAT_8040fdb0 = 1;
    bank_offset = 0;
    uVar3 = 2;
    bank_offset_00 = 0x400000;
    uVar4 = DAT_8040fdb4;
    DAT_8040fdb4 = uVar2;
  }
  FUN_804079cc(s_bootbank_is__d__bankmark__X_8040dc90,DAT_8040fdb0,DAT_8040fdb4);
  if (full_validation == 0) {
    if (uVar1 == 0) {
      uVar1 = (uint)(found != 0);
    }
    else {
      uVar1 = 1;
    }
  }
  else {
    uVar1 = check_image_header(auStack_40,auStack_30,bank_offset);
    if ((uVar1 == 0) &&
       (uVar1 = check_image_header(auStack_40,auStack_30,bank_offset_00), uVar1 != 0)) {
      DAT_8040fdb0 = uVar3;
      DAT_8040fdb4 = uVar4;
    }
  }
  return uVar1;
}


/* FUN_8040880c @ 8040880c */

void FUN_8040880c(void)

{
  select_boot_bank(1);
  return;
}


/* FUN_80408830 @ 80408830 */

void FUN_80408830(int param_1)

{
  undefined4 *puVar1;
  
  if (param_1 == 0) {
    puVar1 = (undefined4 *)&DAT_b8000050;
  }
  else {
    if (param_1 != 1) {
      return;
    }
    puVar1 = (undefined4 *)&DAT_b8000054;
  }
  *puVar1 = 8;
  *puVar1 = 9;
  *puVar1 = 0xb;
  return;
}


/* FUN_80408870 @ 80408870 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80408870(int param_1)

{
  undefined4 *puVar1;
  
  _DAT_b8000010 = _DAT_b8000010 | 0x1d3000;
  if (param_1 == 0) {
    puVar1 = (undefined4 *)&DAT_b8b01008;
  }
  else {
    if (param_1 != 1) {
      return;
    }
    puVar1 = (undefined4 *)&DAT_b8b21008;
  }
  *puVar1 = 1;
  *puVar1 = 0x81;
  return;
}


/* FUN_804088c4 @ 804088c4 */

void FUN_804088c4(int param_1,uint param_2,int param_3)

{
  uint *puVar1;
  int local_8;
  
  if (param_1 == 0) {
    puVar1 = (uint *)&DAT_b8b01000;
  }
  else if (param_1 == 1) {
    puVar1 = (uint *)&DAT_b8b21000;
  }
  else {
    if (param_1 != 2) {
      return;
    }
    puVar1 = (uint *)&DAT_b8b410c0;
  }
  *puVar1 = (param_2 & 0x1f) << 8 | 1 | param_3 << 0x10;
  local_8 = 0;
  do {
    local_8 = local_8 + 1;
  } while (local_8 < 0x15b3);
  return;
}


/* FUN_80408960 @ 80408960 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_80408960(void)

{
  if ((_DAT_b800000c & 0xf) == 0xd) {
    return (*(uint *)(DAT_8040ee7c + 0x44) ^ 1) & 1;
  }
  return (uint)((_DAT_b800350c & 0x20) == 0);
}


/* FUN_804089c0 @ 804089c0 */

uint * FUN_804089c0(int param_1,undefined4 *param_2)

{
  int iVar1;
  uint *puVar2;
  undefined1 *puVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  
  if ((param_1 < 1) || (iVar1 = FUN_80406c50(*param_2,0,0x10), iVar1 == 0)) {
    uVar5 = 0xb9000000;
    uVar6 = 0xb8c00000;
    puVar3 = &DAT_b8b10000;
    puVar2 = (uint *)&DAT_b8b00000;
  }
  else {
    uVar5 = 0xba000000;
    if (iVar1 != 1) {
      return (uint *)0x0;
    }
    uVar6 = 0xb8e00000;
    puVar3 = (undefined1 *)0xb8b30000;
    puVar2 = (uint *)&DAT_b8b20000;
  }
  if (((*puVar2 & 0xffff) == 0x10ec) && (*puVar2 >> 0x10 == 0x8196)) {
    puVar2[1] = 0x100007;
    puVar2[0x1e] = puVar2[0x1e] & 0xffffff1f;
    *(undefined4 *)(puVar3 + 4) = 0x100007;
    *(uint *)(puVar3 + 0x10) = uVar6 & 0x1ffffffe | 1;
    *(uint *)(puVar3 + 0x18) = uVar5 & 0x1ffffffb | 4;
    puVar4 = (uint *)(puVar3 + 0x78);
    *puVar4 = *puVar4 & 0xffffff1f;
    *puVar4 = *puVar4 & 0xffff8fff | 0x1000;
    puVar2[7] = 0x20;
    puVar2[8] = 0x20;
    puVar2 = puVar2 + 9;
    *puVar2 = 0x20;
  }
  else {
    FUN_804077a4(s_VID__x__PID__x_8040dcb0);
    puVar2 = (uint *)FUN_804077a4(s_____Read_VID_PID_fail_____8040dcc4);
  }
  return puVar2;
}


/* FUN_80408b04 @ 80408b04 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_80408b04(int param_1)

{
  undefined4 uVar1;
  uint *puVar2;
  undefined4 *unaff_s3;
  int local_20;
  
  if (param_1 == 0) {
    puVar2 = (uint *)&DAT_b8b00728;
  }
  else if (param_1 == 1) {
    puVar2 = (uint *)0xb8b20728;
  }
  else {
    if (param_1 != 2) {
      return 2;
    }
    puVar2 = (uint *)0xb8b40728;
  }
  FUN_80407318(10);
  local_20 = 5;
  do {
    local_20 = local_20 + -1;
    if (local_20 == 0) break;
    FUN_80407318(10);
  } while ((*puVar2 & 0x1f) != 0x11);
  if (local_20 == 0) {
    if (DAT_8040ecd0 == 0) {
      FUN_804077a4(s_PCIE_P_d__>_Cannot_LinkUP_8040dce4,param_1);
      uVar1 = 0;
    }
    else {
      uVar1 = 0;
    }
  }
  else {
    if (param_1 == 0) {
      _DAT_b8b00004 = 0x100007;
      unaff_s3 = (undefined4 *)&DAT_b8b10000;
    }
    else if (param_1 == 1) {
      _DAT_b8b20004 = 0x100007;
      unaff_s3 = (undefined4 *)0xb8b30000;
    }
    if (DAT_8040ecd0 == 0) {
      FUN_804077a4(s_Find_Port__x_Device_Vender_ID__x_8040dd00,param_1,*unaff_s3);
      uVar1 = 1;
    }
    else {
      uVar1 = 1;
    }
  }
  return uVar1;
}


/* FUN_80408c7c @ 80408c7c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80408c7c(int param_1,int param_2,int param_3)

{
  uint uVar1;
  
  uVar1 = _DAT_b8000008;
  if (param_1 == 0) {
    _DAT_b8000010 = _DAT_b8000010 | 0x47000;
    FUN_80407318(10);
    _DAT_b8b0100c = 8;
  }
  else {
    if (param_1 != 1) {
      _DAT_b8000010 = _DAT_b8000010 | 0x43000;
      return;
    }
    _DAT_b8000010 = _DAT_b8000010 | 0x53000;
    FUN_80407318(10);
    _DAT_b8b2100c = 0x10;
  }
  if (param_3 == 0) {
    FUN_80407318(10);
    FUN_80408870(param_1);
    FUN_80407318(10);
  }
  else {
    if (DAT_8040ecd0 == 0) {
      FUN_804077a4(s_Do_MDIO_RESET_8040dd24);
    }
    FUN_80407318(10);
    FUN_80408830(param_1);
    FUN_80407318(10);
    FUN_80408870(param_1);
    FUN_80407318(10);
    FUN_804088c4(param_1,0,0xd087);
    FUN_804088c4(param_1,1,3);
    FUN_804088c4(param_1,2,0x4d18);
    if ((uVar1 >> 0x19 & 1) == 0) {
      FUN_804088c4(param_1,6,0xf848);
    }
    else {
      FUN_804088c4(param_1,5,0xbcb);
      FUN_804088c4(param_1,6,0x148);
    }
    FUN_804088c4(param_1,7,0x31ff);
    FUN_804088c4(param_1,8,0x18d6);
    FUN_804088c4(param_1,9,0x539c);
    FUN_804088c4(param_1,10,0x20eb);
    FUN_804088c4(param_1,0xd,0x1464);
    FUN_804088c4(param_1,0xb,0x711);
    FUN_804088c4(param_1,0xf,0xf0f);
    FUN_804088c4(param_1,0x19,0xfce0);
    FUN_804088c4(param_1,0x1a,0x7e4f);
    FUN_804088c4(param_1,0x1b,0xfc01);
    FUN_804088c4(param_1,0x1e,0xc280);
    if (param_2 == 1) {
      FUN_804088c4(param_1,6,0xfc48);
      FUN_804088c4(param_1,0x1a,0x7e50);
      FUN_804088c4(param_1,0x1b,0xfc00);
    }
  }
  FUN_80407318(10);
  FUN_80408870(param_1);
  _DAT_b8000010 = _DAT_b8000010 & 0xfbffffff;
  FUN_80407318(300);
  _DAT_b8000010 = _DAT_b8000010 | 0x4000000;
  FUN_80408b04(param_1);
  return;
}


/* FUN_80408f70 @ 80408f70 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80408f70(void)

{
  char *local_10;
  undefined *local_c;
  
  if ((_DAT_b800000c & 0xf) == 0xd) {
    local_10 = s_hinit_8040dd34;
    local_c = &DAT_8040daec;
    FUN_80408c7c(0,0,1);
    FUN_804089c0(2,&local_10);
    DAT_8040ee7c = _DAT_b8b10018 & 0x4fff0000 | 0xb0000000;
    *(undefined4 *)(DAT_8040ee7c + 0x44) = 0;
  }
  return;
}


/* FUN_80409010 @ 80409010 */

void FUN_80409010(int param_1)

{
  bool bVar1;
  
  do {
    bVar1 = param_1 != 0;
    param_1 = param_1 + -1;
  } while (bVar1);
  return;
}


/* FUN_80409050 @ 80409050 */

undefined4 FUN_80409050(void)

{
  return DAT_8040fdc0;
}


/* FUN_80409060 @ 80409060 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80409060(int param_1)

{
  _DAT_b8003118 = 0xe0000;
  _DAT_b8003100 = (param_1 / 0x578 + 1) * 0x10;
  _DAT_b8003110 = 0xc0000000;
  _DAT_b800300c = 0x50004;
  _DAT_b8003114 = 0x80000000;
  return;
}


/* FUN_804090d0 @ 804090d0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_804090d0(void)

{
  if ((_DAT_b8003004 & 0x8000000) == 0) {
    FUN_804077a4(s_Fail__ISR__x_bit__d_is_not_1_8040dd3c,_DAT_b8003004,0x1b);
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  if ((_DAT_b8000004 & 2) == 0) {
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  _DAT_b8000004 = 2;
  _DAT_b8003000 = _DAT_b8003000 & 0xf7ffffff;
  return;
}


/* FUN_80409158 @ 80409158 */

undefined4 FUN_80409158(void)

{
  undefined **ppuVar1;
  
  FUN_804077a4(s___________________COMMAND_MODE_H_8040dd5c);
  ppuVar1 = &PTR_s_HELP_______Print_this_help_messa_8040ecec;
  do {
    if (*ppuVar1 != (undefined *)0x0) {
      FUN_804077a4(&DAT_8040dd94);
    }
    ppuVar1 = ppuVar1 + 4;
  } while (ppuVar1 != (undefined **)0x8040ee0c);
  return 1;
}


/* FUN_804091d4 @ 804091d4 */

void FUN_804091d4(undefined4 param_1,undefined4 *param_2)

{
  DAT_8040e6cc = (uint)(*(char *)*param_2 != '0');
  FUN_804077a4(s_AutoBurning__d_8040dd98,DAT_8040e6cc);
  return;
}


/* FUN_8040922c @ 8040922c */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8040922c(uint param_1,uint param_2)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar2 = _DAT_b8003000;
  _DAT_b8000004 = 2;
  do {
  } while ((_DAT_b8003004 & 0x8000000) != 0);
  _DAT_b8003014 = _DAT_b8003014 & 0xffff0fff | 0x3000;
  FUN_80400a54(0x1b,&PTR_FUN_8040ee20,0);
  uVar1 = _DAT_b8000008;
  _DAT_b8003000 = 0x8000000;
  _DAT_b8000008 = (param_1 & 0xf) << 0xd | _DAT_b8000008 & 0xfff21fff | (param_2 & 3) << 0x12;
  if (param_1 != (uVar1 & 0x1e000) >> 0xd) {
    _DAT_b8003004 = 0xffffffff;
    _DAT_b8000014 = _DAT_b8000014 | 4;
    do {
    } while ((_DAT_b8000020 & 1) == 0);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  _DAT_b8003000 = uVar2;
  return;
}


/* FUN_804093ac @ 804093ac */

/* WARNING: Removing unreachable block (ram,0x80409414) */
/* WARNING: Removing unreachable block (ram,0x80409430) */
/* WARNING: Removing unreachable block (ram,0x80409444) */
/* WARNING: Removing unreachable block (ram,0x80409448) */
/* WARNING: Removing unreachable block (ram,0x8040948c) */
/* WARNING: Removing unreachable block (ram,0x804094a8) */
/* WARNING: Removing unreachable block (ram,0x804094b8) */
/* WARNING: Removing unreachable block (ram,0x804094c0) */
/* WARNING: Removing unreachable block (ram,0x80409468) */
/* WARNING: Removing unreachable block (ram,0x8040947c) */
/* WARNING: Removing unreachable block (ram,0x804094cc) */

void FUN_804093ac(void)

{
  FUN_80400a54(8,&LAB_8040ee00,0);
  FUN_80409060(DAT_8040ecc0);
  do {
  } while( true );
}


/* FUN_8040950c @ 8040950c */

void FUN_8040950c(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  byte *pbVar10;
  undefined4 local_88 [17];
  undefined4 local_44;
  byte abStack_40 [8];
  byte *local_38;
  undefined4 *local_34;
  byte *local_30;
  
  puVar1 = &DAT_8040a7e8;
  puVar2 = local_88;
  do {
    uVar5 = puVar1[1];
    uVar4 = puVar1[2];
    uVar3 = puVar1[3];
    *puVar2 = *puVar1;
    puVar2[1] = uVar5;
    puVar2[2] = uVar4;
    puVar2[3] = uVar3;
    puVar1 = puVar1 + 4;
    puVar2 = puVar2 + 4;
  } while (puVar1 != (undefined4 *)0x8040a828);
  *puVar2 = uRam8040a828;
  local_44 = DAT_8040a7e4;
  iVar8 = 0;
  local_30 = abStack_40;
  local_38 = abStack_40;
  local_34 = local_88;
  iVar9 = 0;
  do {
    pbVar10 = (byte *)&local_44;
    do {
      uVar7 = (uint)*pbVar10;
      FUN_80402a40(4,0x1f,1);
      FUN_80402a40(4,0x14,(1 << (uVar7 & 0x1f)) + 0xb20);
      FUN_80402d78(4,0x14,local_38);
      FUN_80402a40(uVar7,0x1f,1);
      uVar6 = 0;
      puVar1 = local_34;
      do {
        uVar3 = *puVar1;
        FUN_80402a40(uVar7,0x13,uVar3);
        FUN_804077a4(s_i__d_phyid__d_gray_code__x_8040dda8,iVar8,uVar7,uVar3);
        uVar6 = uVar6 + 1;
        puVar1 = puVar1 + 1;
      } while (uVar6 <= (uint)(iVar9 >> 2));
      FUN_80402a40(uVar7,0x1f,0);
      pbVar10 = pbVar10 + 1;
    } while (pbVar10 != local_30);
    FUN_80409010(10000);
    iVar8 = iVar8 + 1;
    iVar9 = iVar8 * 4;
  } while (iVar8 != 0x11);
  FUN_80402a40(4,0x1f,1);
  FUN_80402a40(4,0x14,0xb20);
  FUN_80402a40(4,0x1f,0);
  return;
}


/* FUN_804096ec @ 804096ec */

void FUN_804096ec(void)

{
  FUN_8040950c();
  return;
}


/* FUN_8040970c @ 8040970c */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_8040970c(undefined4 param_1,int *param_2)

{
  undefined4 uVar1;
  short sVar2;
  
  if (*param_2 == 0) {
    FUN_804079cc(s_Usage__sleep_<0~2>_8040ddf4);
    FUN_804079cc(s_sleep_<0>_CPU_sleep___DRAM_Norma_8040de0c);
    FUN_804079cc(s_sleep_<1>_CPU_sleep___DRAM_Power_8040de38);
    FUN_804079cc(s_sleep_<2>_CPU_sleep___DRAM_Self_r_8040de64);
    FUN_804079cc(s_sleep_<3>_Only_DRAM_Power_down_8040de90);
    uVar1 = FUN_804079cc(s_sleep_<4>_CPUSleep___Self_Refres_8040deb4);
    return uVar1;
  }
  sVar2 = FUN_80406c50(*param_2,0,0x10);
  if (sVar2 != 0) {
    _DAT_b8001040 = 0x3fffffff;
    switch(sVar2) {
    case 1:
      FUN_804079cc(s_DRAM__Auto_Power_Down_mode_8040defc);
      _DAT_b8001040 = _DAT_b8001040 | 0x40000000;
      break;
    case 2:
      FUN_804079cc(s_DRAM___Self_Refresh_mode_8040df1c);
      _DAT_b8001040 = 0x3fffffff;
      FUN_80407318(1000);
      _DAT_b8001040 = _DAT_b8001040 | 0x80000000;
      FUN_80407318(1000);
      _DAT_b8001040 = _DAT_b8001040 | 0x80000000;
      break;
    case 3:
      FUN_804079cc(s_DRAM__Only_Power_Down_mode__8040df38);
      _DAT_b8001040 = _DAT_b8001040 | 0x40000000;
      return 0;
    case 4:
      FUN_804079cc(s_CPUSleep___Self_Refresh_in_IMEM__8040df58);
      FUN_8040c000();
      break;
    default:
      FUN_804079cc(s_Error_Input_should_be_0_3_8040df7c);
    }
  }
  _DAT_b8003000 = 0;
  FUN_804079cc(s_CPU_Enter_Sleep____8040df98);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* FUN_804098f8 @ 804098f8 */

void FUN_804098f8(undefined4 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 local_18 [2];
  
  uVar1 = FUN_80406c50(*param_2,0,0x10);
  uVar2 = FUN_80406c50(param_2[1],0,0x10);
  uVar3 = FUN_80406c50(param_2[2],0,0x10);
  FUN_80402a40(uVar1,uVar2,uVar3);
  FUN_80402d78(uVar1,uVar2,local_18);
  FUN_804079cc(s_PHYID_0x_x__regID_0x_x__Find_PHY_8040dfdc,uVar1,uVar2,local_18[0]);
  return;
}


/* FUN_80409998 @ 80409998 */

void FUN_80409998(undefined4 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 local_18 [3];
  
  uVar1 = FUN_80406c50(*param_2,0,0x10);
  uVar2 = FUN_80406c50(param_2[1],0,0x10);
  FUN_80402d78(uVar1,uVar2,local_18);
  FUN_804079cc(s_PHYID_0x_x__regID_0x_x__Find_PHY_8040e010,uVar1,uVar2,local_18[0]);
  return;
}


/* FUN_80409a10 @ 80409a10 */

undefined4 FUN_80409a10(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_1 < 3) {
    FUN_804077a4(s_Parameters_not_enough__8040e044);
    uVar1 = 1;
  }
  else {
    uVar1 = FUN_80406c50(*param_2,0,0x10);
    uVar2 = FUN_80406c50(param_2[1],0,10);
    uVar3 = FUN_80406c50(param_2[2],0,0x10);
    FUN_804077a4(s_Write_PhyID_0x_x_Reg__02d_data_0_8040e05c,uVar1,uVar2,uVar3);
    uVar1 = FUN_80402a40(uVar1,uVar2,uVar3);
  }
  return uVar1;
}


/* FUN_80409ac0 @ 80409ac0 */

undefined4 FUN_80409ac0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 local_20 [2];
  
  if (param_1 < 1) {
    FUN_804077a4(s_Parameters_not_enough__8040e044);
    uVar1 = 1;
  }
  else {
    uVar2 = FUN_80406c50(*param_2,0,10);
    iVar3 = 0;
    do {
      FUN_80402d78(iVar3,uVar2,local_20);
      uVar1 = FUN_804077a4(s_PhyID_0x_02x_Reg__02d_Data__0x_0_8040e084,iVar3,uVar2,local_20[0]);
      iVar3 = iVar3 + 1;
    } while (iVar3 != 0x20);
  }
  return uVar1;
}


/* FUN_80409b6c @ 80409b6c */

void FUN_80409b6c(undefined4 param_1,undefined4 *param_2)

{
  DAT_8040e5d8 = FUN_80406c50(*param_2,0,0x10);
  FUN_804077a4(s_Set_TFTP_Load_Addr_0x_x_8040e0ac,DAT_8040e5d8);
  return;
}


/* FUN_80409bac @ 80409bac */

uint FUN_80409bac(int param_1,undefined4 *param_2)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  if (param_1 < 3) {
    FUN_804077a4(s_Parameters_not_enough__8040e044);
    uVar2 = 1;
  }
  else {
    iVar3 = FUN_80406c50(*param_2,0,0x10);
    iVar4 = FUN_80406c50(param_2[1],0,0x10);
    uVar2 = FUN_80406c50(param_2[2],0,0x10);
    if (uVar2 != 0) {
      bVar1 = false;
      uVar5 = 0;
      do {
        if (*(int *)(uVar5 + iVar3) != *(int *)(uVar5 + iVar4)) {
          FUN_804077a4(s__dth_data__x__x__error_8040e0c8,uVar5);
          bVar1 = true;
        }
        uVar5 = uVar5 + 4;
      } while (uVar5 < uVar2);
      if (bVar1) {
        return uVar5;
      }
    }
    uVar2 = FUN_804077a4(s_No_error_found_8040e0e0);
  }
  return uVar2;
}


/* FUN_80409cb8 @ 80409cb8 */

void FUN_80409cb8(int param_1,undefined4 *param_2)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  uint uVar3;
  
  puVar1 = (undefined1 *)FUN_80406c50(*param_2,0,0x10);
  if (0 < param_1 + -1) {
    uVar3 = 0;
    do {
      uVar2 = FUN_80406c50(param_2[uVar3 + 1],0,0x10);
      *puVar1 = uVar2;
      uVar3 = uVar3 + 1 & 0xff;
      puVar1 = puVar1 + 1;
    } while ((int)uVar3 < param_1 + -1);
  }
  return;
}


/* FUN_80409d48 @ 80409d48 */

void FUN_80409d48(int param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined2 uVar2;
  undefined2 *puVar3;
  
  uVar1 = FUN_80406c50(*param_2,0,0x10);
  if (0 < param_1 + -1) {
    puVar3 = (undefined2 *)(uVar1 & 0xfffffffe);
    uVar1 = 0;
    do {
      uVar2 = FUN_80406c50(param_2[uVar1 + 1],0,0x10);
      *puVar3 = uVar2;
      uVar1 = uVar1 + 1 & 0xffff;
      puVar3 = puVar3 + 1;
    } while ((int)uVar1 < param_1 + -1);
  }
  return;
}


/* FUN_80409ddc @ 80409ddc */

void FUN_80409ddc(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  
  for (puVar1 = (undefined4 *)FUN_80406c50(*param_2,0,0x10); ((uint)puVar1 & 3) != 0;
      puVar1 = (undefined4 *)((int)puVar1 + 1)) {
  }
  uVar3 = 0;
  if (param_1 != 1) {
    do {
      uVar3 = uVar3 + 1;
      uVar2 = FUN_80406c50(param_2[1],0,0x10);
      *puVar1 = uVar2;
      puVar1 = puVar1 + 1;
      param_2 = param_2 + 1;
    } while (uVar3 < param_1 - 1U);
  }
  return;
}


/* FUN_80409e80 @ 80409e80 */

void FUN_80409e80(int param_1,int *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_1 < 1) {
    FUN_804077a4(s_Wrong_argument_number__8040e0f0);
  }
  else if (*param_2 == 0) {
    FUN_804077a4(s_Wrong_argument_number__8040e0f0);
  }
  else {
    puVar1 = (undefined4 *)FUN_80406c50(*param_2,0,0x10);
    if (-1 < (int)puVar1) {
      puVar1 = (undefined4 *)((uint)puVar1 | 0x80000000);
    }
    if (param_2[1] == 0) {
      uVar3 = 1;
    }
    else {
      uVar3 = FUN_80406c50(param_2[1],0,10);
    }
    for (; ((uint)puVar1 & 3) != 0; puVar1 = (undefined4 *)((int)puVar1 + 1)) {
    }
    uVar2 = 0;
    if (uVar3 != 0) {
      do {
        FUN_804077a4(s__08X___08X__08X__08X__08X_8040e10c,puVar1,*puVar1,puVar1[1],puVar1[2],
                     puVar1[3]);
        uVar2 = uVar2 + 4;
        puVar1 = puVar1 + 4;
      } while (uVar2 < uVar3);
    }
  }
  return;
}


/* FUN_80409fa4 @ 80409fa4 */

bool FUN_80409fa4(void)

{
  char local_10 [12];
  
  FUN_80406fd4(local_10,2,1);
  FUN_804077a4(s_sleep_<4>_CPUSleep___Self_Refres_8040deb4 + 0x2c);
  return local_10[0] == 'Y' || local_10[0] == 'y';
}


/* FUN_80409ff8 @ 80409ff8 */

void FUN_80409ff8(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar1 = FUN_80406c50(*param_2,0,0x10);
  uVar2 = FUN_80406c50(param_2[1],0,0x10);
  uVar3 = FUN_80406604(uVar2);
  FUN_80406a30(uVar3,0xff,uVar2);
  FUN_804077a4(s_Write_0x_x_Bytes_to_SPI_flash__d_8040e128,uVar2,1,iVar1,iVar1 + -0x43000000);
  FUN_804077a4(s__Y_es___N_o_>_8040e160);
  iVar4 = FUN_80409fa4();
  if (iVar4 == 0) {
    FUN_804077a4(s_Abort__8040e170);
  }
  else {
    FUN_80404be8();
    FUN_80404b40(0,iVar1,uVar3,uVar2);
  }
  FUN_804066ec(uVar3);
  return;
}


/* FUN_8040a0e4 @ 8040a0e4 */

void FUN_8040a0e4(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = FUN_80406c50(*param_2,0,0x10);
  iVar2 = FUN_80406c50(param_2[1],0,0x10);
  iVar3 = FUN_80406c50(param_2[2],0,0x10);
  FUN_804077a4(s_Write_0x_x_Bytes_to_SPI_flash__d_8040e178,iVar3,1,iVar1,iVar1 + -0x43000000,iVar2,
               iVar3 + iVar2);
  FUN_804077a4(s__Y_es___N_o_>_8040e160);
  iVar4 = FUN_80409fa4();
  if (iVar4 == 0) {
    FUN_804077a4(s_Abort__8040e170);
  }
  else {
    FUN_80404be8();
    FUN_80404b40(0,iVar1,iVar2,iVar3);
  }
  return;
}


/* FUN_8040a1cc @ 8040a1cc */

void FUN_8040a1cc(undefined4 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  
  uVar1 = FUN_80406c50(*param_2,0,0x10);
  uVar2 = FUN_80406c50(param_2[1],0,0x10);
  uVar3 = FUN_80406c50(param_2[2],0,0x10);
  DAT_8040ee58 = uVar3;
  FUN_804077a4(s_Flash_read_from__X_to__X_with__X_8040e1c4,uVar2,uVar1,uVar3);
  FUN_804077a4(s__Y_es____N_o_____>_8040e1f0);
  iVar4 = FUN_80409fa4();
  if (iVar4 == 0) {
    FUN_804077a4(s_Abort__8040e170);
  }
  else {
    iVar4 = FUN_80404a94(uVar1,uVar2,uVar3);
    if (iVar4 == 0) {
      FUN_804077a4(s_Flash_Read_Failed__8040e21c);
    }
    else {
      FUN_804077a4(s_Flash_Read_Successed__8040e204);
    }
  }
  return;
}


/* FUN_8040a2bc @ 8040a2bc */

void FUN_8040a2bc(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if (param_1 < 1) {
    FUN_804077a4(s_Wrong_argument_number__8040e0f0);
  }
  else {
    uVar1 = FUN_80406c50(*param_2,0,0x10);
    if (param_2[1] == 0) {
      uVar2 = 0x10;
    }
    else {
      uVar2 = FUN_80406c50(param_2[1],0,10);
    }
    FUN_804077dc(uVar1,uVar2);
  }
  return;
}


/* FUN_8040a33c @ 8040a33c */

void FUN_8040a33c(int param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_20 [4];
  
  puVar3 = local_20;
  if (param_1 == 0) {
    FUN_804077a4(s_Target_Address__d__d__d__d_8040e230,DAT_80410050._0_1_,DAT_80410050._1_1_,
                 DAT_80410050._2_1_,(undefined1)DAT_80410050);
  }
  else {
    iVar2 = *param_2;
    do {
      uVar1 = FUN_80406b90(iVar2,0,10);
      *puVar3 = uVar1;
      iVar2 = FUN_804069a8(iVar2,0x2e);
      puVar3 = puVar3 + 1;
      iVar2 = iVar2 + 1;
    } while (puVar3 != (undefined4 *)&stack0xfffffff0);
    DAT_8040e8f1 = (undefined1)local_20[0];
    DAT_8040e8f2 = (undefined1)local_20[1];
    DAT_8040e8f3 = (undefined1)local_20[2];
    DAT_8040e8f4 = (undefined1)local_20[3];
    DAT_80410059 = DAT_8040e8f5;
    DAT_80410054 = DAT_8040e8f0;
    DAT_80410050._0_1_ = DAT_8040e8f1;
    DAT_80410050._1_1_ = DAT_8040e8f2;
    DAT_80410050._2_1_ = DAT_8040e8f3;
    DAT_80410050._3_1_ = DAT_8040e8f4;
    DAT_80410055 = DAT_8040e8f1;
    DAT_80410056 = DAT_8040e8f2;
    DAT_80410057 = DAT_8040e8f3;
    DAT_80410058 = DAT_8040e8f4;
    FUN_804079cc(s_Now_your_Target_IP_is__d__d__d___8040e250);
  }
  return;
}


/* FUN_8040a478 @ 8040a478 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_8040a478(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  code *local_10 [2];
  
  if ((param_1 < 1) || (iVar1 = FUN_80406e68(*param_2,local_10), iVar1 != 0)) {
    FUN_804077a4(s____Jump_to_address__X_8040e294,local_10[0]);
    _DAT_b8003000 = 0;
    setCopReg(0,Status,(Status | 1) ^ 1);
    if (local_10[0] == (code *)0xbfc00000) {
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
    _DAT_bb804104 = _DAT_bb804104 & 0xfffffffe;
    _DAT_bb804108 = _DAT_bb804108 & 0xfffffffe;
    _DAT_bb80410c = _DAT_bb80410c & 0xfffffffe;
    _DAT_bb804110 = _DAT_bb804110 & 0xfffffffe;
    _DAT_bb804114 = _DAT_bb804114 & 0xfffffffe;
    FUN_80406454();
    uVar2 = (*local_10[0])();
  }
  else {
    FUN_804077a4(s_Invalid_Address_HEX__value__8040e274);
    uVar2 = 0;
  }
  return uVar2;
}


/* FUN_8040a594 @ 8040a594 */

void FUN_8040a594(void)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined1 *puVar4;
  int iVar5;
  int iVar6;
  undefined **ppuVar7;
  undefined1 auStack_b8 [136];
  char *local_30;
  
  local_30 = s_Unknown_command___8040e2ac;
LAB_8040a5f0:
  do {
    do {
      FUN_804077a4(s_Flash_Write_Successed___s_8040d464 + 0x18,s_<RealTek>_8040d2c4);
      FUN_80406a30(auStack_b8,0,0x80);
      FUN_80406fd4(auStack_b8,0x80,1);
      FUN_804077a4(s_sleep_<4>_CPUSleep___Self_Refres_8040deb4 + 0x2c);
      iVar1 = FUN_80406e0c(auStack_b8);
      puVar2 = (undefined4 *)FUN_80406ef8(auStack_b8);
    } while (iVar1 < 1);
    FUN_80406dc0(*puVar2);
    iVar5 = 0;
    ppuVar7 = &PTR_DAT_8040ece0;
    do {
      iVar3 = FUN_80406978(*puVar2,*ppuVar7);
      iVar6 = iVar5 + 1;
      if (iVar3 == 0) {
        (*(code *)(&PTR_FUN_8040ece8)[iVar5 * 4])(iVar1 + -1,puVar2 + 1);
        puVar4 = (undefined1 *)*puVar2;
        *puVar4 = 0;
        puVar4[1] = 0;
        puVar4[2] = 0;
        puVar4[3] = 0;
        if (iVar5 != 0x12) goto LAB_8040a5f0;
        break;
      }
      ppuVar7 = ppuVar7 + 4;
      iVar5 = iVar6;
    } while (iVar6 != 0x12);
    FUN_804077a4(local_30);
  } while( true );
}


/* FUN_8040c000 @ 8040c000 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8040c000(void)

{
  _DAT_b8001040 = 0x3fffffff;
  FUN_80407318(1000);
  _DAT_b8001040 = _DAT_b8001040 | 0x80000000;
  FUN_80407318(1000);
  _DAT_b8001040 = _DAT_b8001040 | 0x80000000;
  _DAT_b8003000 = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* FUN_8040d000 @ 8040d000 */

uint FUN_8040d000(void)

{
  uint uVar1;
  
  setCopReg(0,Status,Status & 0xffff00ff);
  FUN_80400ae4(0,&LAB_804005c0);
  uVar1 = Status & 0xffff00ff | 0xfc00;
  setCopReg(0,Status,uVar1);
  return uVar1;
}


/* FUN_8040d05c @ 8040d05c */

void FUN_8040d05c(void)

{
  FUN_8040d000();
  return;
}


/* FUN_8040d07c @ 8040d07c */

void FUN_8040d07c(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  
  setCopReg(0,Status,Status & 0xffbfffff);
  iVar6 = 0;
  do {
    FUN_80400ae4(iVar6,FUN_80400c8c);
    iVar6 = iVar6 + 1;
  } while (iVar6 != 0x20);
  puVar2 = &DAT_8040057c;
  puVar1 = (undefined4 *)&DAT_80000080;
  do {
    uVar5 = puVar2[1];
    uVar4 = puVar2[2];
    uVar3 = puVar2[3];
    *puVar1 = *puVar2;
    puVar1[1] = uVar5;
    puVar1[2] = uVar4;
    puVar1[3] = uVar3;
    puVar2 = puVar2 + 4;
    puVar1 = puVar1 + 4;
  } while (puVar2 != (undefined4 *)0x804005fc);
  FUN_80406454();
  FUN_80400ae4(0x17,&LAB_80400800);
  return;
}


