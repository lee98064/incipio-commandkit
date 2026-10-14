/* FUN_00436454 @ 00436454 */

/* WARNING: Removing unreachable block (ram,0x00436874) */

int FUN_00436454(undefined4 param_1,int param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  char *pcVar6;
  undefined4 *puVar7;
  uint uVar8;
  undefined *puVar9;
  short *psVar10;
  int iVar11;
  int iVar12;
  undefined1 auStack_80 [20];
  undefined1 auStack_6c [20];
  undefined1 auStack_58 [20];
  undefined1 auStack_44 [20];
  short *local_30;
  
  iVar2 = (*(code *)PTR_calloc_0046aa14)(1,0xc30);
  if (iVar2 == 0) {
    (*(code *)PTR_puts_0046ab3c)("Allocate buffer failed!");
    iVar11 = 0;
  }
  else {
    if (param_2 == 2) {
      (*(code *)PTR_strcpy_0046ac60)(auStack_58,PTR_WLAN_IF_0046a890);
      iVar11 = (*(code *)PTR_atoi_0046a73c)(*(undefined4 *)(param_3 + 4));
      (*(code *)PTR_sprintf_0046a808)(auStack_44,"-va%d",iVar11 + -1);
      (*(code *)PTR_strcat_0046a9c8)(PTR_WLAN_IF_0046a890,auStack_44);
    }
    iVar11 = (*(code *)PTR_getWlStaInfo_0046aa7c)(PTR_WLAN_IF_0046a890,iVar2);
    if (iVar11 < 0) {
      (*(code *)PTR_puts_0046ab3c)("Read wlan sta info failed!");
      iVar11 = 0;
      if (param_2 == 2) {
        (*(code *)PTR_strcpy_0046ac60)(PTR_WLAN_IF_0046a890,auStack_58);
      }
    }
    else {
      if (param_2 == 2) {
        (*(code *)PTR_strcpy_0046ac60)(PTR_WLAN_IF_0046a890,auStack_58);
      }
      local_30 = (short *)(iVar2 + 0xc30);
      psVar10 = (short *)(iVar2 + 0x30);
      iVar12 = 0;
      iVar11 = 0;
      do {
        if ((*psVar10 != 0) && ((psVar10[10] & 4U) != 0)) {
          bVar1 = *(byte *)(psVar10 + 0x14);
          if ((bVar1 & 0x40) == 0) {
            if ((bVar1 & 8) == 0) {
              if ((bVar1 & 2) == 0) {
                if ((bVar1 & 1) == 0) {
                  if ((bVar1 & 4) == 0) {
                    pcVar6 = " ---";
                  }
                  else {
                    pcVar6 = " 11a";
                  }
                }
                else {
                  pcVar6 = " 11b";
                }
              }
              else {
                pcVar6 = " 11g";
              }
            }
            else {
              pcVar6 = " 11n";
            }
          }
          else {
            pcVar6 = " 11ac";
          }
          (*(code *)PTR_strcpy_0046ac60)(auStack_80,pcVar6);
          bVar1 = *(byte *)(psVar10 + 0xb);
          uVar8 = (uint)bVar1;
          if (uVar8 < 0x90) {
            if ((char)bVar1 < '\0') {
              bVar1 = *(byte *)((int)psVar10 + 0x29);
              uVar3 = bVar1 & 2;
              if ((bVar1 & 1) == 0) {
                puVar5 = &DAT_00469b10;
                if ((bVar1 & 2) == 0) {
LAB_00436738:
                  if (*puVar5 != uVar8) goto LAB_00436764;
                  puVar7 = &DAT_00469b10 + uVar3 * 6;
LAB_0043683c:
                  (*(code *)PTR_strcpy_0046ac60)(auStack_6c,puVar7 + 1);
                  goto LAB_0043685c;
                }
                iVar4 = 0;
                puVar5 = &DAT_00469ca8;
                do {
                  uVar3 = *puVar5;
                  puVar5 = puVar5 + 6;
                  if (uVar3 == uVar8) {
                    puVar7 = &DAT_00469ca8 + iVar4 * 6;
                    goto LAB_0043683c;
                  }
                  iVar4 = iVar4 + 1;
                } while (iVar4 != 0x10);
              }
              else {
                puVar5 = &DAT_00469e40;
                if ((bVar1 & 2) == 0) {
                  do {
                    if (*puVar5 == uVar8) {
                      puVar7 = &DAT_00469e40 + uVar3 * 6;
                      goto LAB_0043683c;
                    }
                    uVar3 = uVar3 + 1;
                    puVar5 = puVar5 + 6;
                  } while (uVar3 != 0x10);
                }
                else {
                  iVar4 = 0;
                  puVar5 = &DAT_00469fd8;
                  do {
                    uVar3 = *puVar5;
                    puVar5 = puVar5 + 6;
                    if (uVar3 == uVar8) {
                      puVar7 = &DAT_00469fd8 + iVar4 * 6;
                      goto LAB_0043683c;
                    }
                    iVar4 = iVar4 + 1;
                  } while (iVar4 != 0x10);
                }
              }
            }
            else if ((bVar1 & 1) == 0) {
              (*(code *)PTR_sprintf_0046a808)(auStack_6c,"%d",bVar1 >> 1);
            }
            else {
              (*(code *)PTR_sprintf_0046a808)(auStack_6c,&DAT_00452eac,bVar1 >> 1,&DAT_00452eb4);
            }
          }
          else {
            FUN_004336f0(psVar10,auStack_6c);
          }
LAB_0043685c:
          puVar9 = &DAT_00453b1c;
          if ((psVar10[10] & 8U) != 0) {
            puVar9 = &DAT_00454284;
          }
          iVar12 = iVar12 + 1;
          iVar4 = (*(code *)PTR_req_format_write_0046a95c)
                            (param_1,
                             "<tr bgcolor=#b7b7b7><td><font size=2>%02x:%02x:%02x:%02x:%02x:%02x</td><td><font size=2>%s</td><td><font size=2>%d</td><td><font size=2>%d</td><td><font size=2>%s</td><td><font size=2>%s</td><td><font size=2>%d</td></tr>"
                             ,*(undefined1 *)(psVar10 + 1),*(undefined1 *)((int)psVar10 + 3),
                             *(undefined1 *)(psVar10 + 2),*(undefined1 *)((int)psVar10 + 5),
                             *(undefined1 *)(psVar10 + 3),*(undefined1 *)((int)psVar10 + 7),
                             auStack_80,*(undefined4 *)(psVar10 + 4),*(undefined4 *)(psVar10 + 6),
                             auStack_6c,puVar9,*(uint *)(psVar10 + 8) / 100);
          iVar11 = iVar11 + iVar4;
        }
        psVar10 = psVar10 + 0x18;
      } while (psVar10 != local_30);
      if (iVar12 == 0) {
        iVar12 = (*(code *)PTR_req_format_write_0046a95c)
                           (param_1,
                            "<tr bgcolor=#b7b7b7><td><font size=2>None</td><td><font size=2>---</td><td><font size=2>---</td><td><font size=2>---</td><td><font size=2>---</td><td><font size=2>---</td><td><font size=2>---</td></tr>"
                           );
        iVar11 = iVar12 + iVar11;
      }
      (*(code *)PTR_free_0046a680)(iVar2);
    }
  }
  return iVar11;
LAB_00436764:
  uVar3 = uVar3 + 1;
  puVar5 = puVar5 + 6;
  if (uVar3 == 0x10) goto LAB_0043685c;
  goto LAB_00436738;
}

