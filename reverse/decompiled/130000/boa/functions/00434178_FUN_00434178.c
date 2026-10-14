/* FUN_00434178 @ 00434178 */

int FUN_00434178(undefined4 param_1)

{
  byte bVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  undefined4 *puVar7;
  char *pcVar8;
  int local_58;
  int local_54;
  undefined1 auStack_50 [24];
  char *local_38;
  int *local_34;
  int *local_30;
  
  local_58 = 0;
  local_54 = 0;
  pcVar2 = (char *)(*(code *)PTR_calloc_0046aa14)(1,0x600);
  if (pcVar2 == (char *)0x0) {
    pcVar2 = "Allocate buffer failed!";
  }
  else {
    iVar3 = (*(code *)PTR_getWdsInfo_0046aac4)(PTR_WLAN_IF_0046a890,pcVar2);
    if (-1 < iVar3) {
      local_38 = pcVar2 + 0xc0;
      local_34 = &local_54;
      local_30 = &local_58;
      iVar3 = 0;
      pcVar8 = pcVar2;
      do {
        if (*pcVar8 == '\0') break;
        bVar1 = pcVar8[0x14];
        if ((char)bVar1 < '\0') {
          (*(code *)PTR_apmib_get_0046aadc)(0x11c,local_34);
          (*(code *)PTR_apmib_get_0046aadc)(0x11f,local_30);
          if (local_54 == 0) {
            if (local_58 == 0) {
              iVar4 = 0;
              puVar5 = &DAT_00469b10;
              do {
                uVar6 = *puVar5;
                puVar5 = puVar5 + 6;
                if (uVar6 == (byte)pcVar8[0x14]) {
                  puVar7 = &DAT_00469b10 + iVar4 * 6;
                  goto LAB_00434398;
                }
                iVar4 = iVar4 + 1;
              } while (iVar4 != 0x10);
            }
            else if (local_58 == 1) {
              iVar4 = 0;
              puVar5 = &DAT_00469ca8;
LAB_00434370:
              uVar6 = *puVar5;
              puVar5 = puVar5 + 6;
              if (uVar6 != (byte)pcVar8[0x14]) goto LAB_004343ac;
              puVar7 = &DAT_00469ca8 + iVar4 * 6;
LAB_00434398:
              (*(code *)PTR_strcpy_0046ac60)(auStack_50,puVar7 + 1);
            }
          }
          else if (local_54 == 1) {
            if (local_58 == 0) {
              iVar4 = 0;
              puVar5 = &DAT_00469e40;
              do {
                uVar6 = *puVar5;
                puVar5 = puVar5 + 6;
                if (uVar6 == (byte)pcVar8[0x14]) {
                  puVar7 = &DAT_00469e40 + iVar4 * 6;
                  goto LAB_00434398;
                }
                iVar4 = iVar4 + 1;
              } while (iVar4 != 0x10);
            }
            else if (local_58 == 1) {
              iVar4 = 0;
              puVar5 = &DAT_00469fd8;
              do {
                uVar6 = *puVar5;
                puVar5 = puVar5 + 6;
                if (uVar6 == (byte)pcVar8[0x14]) {
                  puVar7 = &DAT_00469fd8 + iVar4 * 6;
                  goto LAB_00434398;
                }
                iVar4 = iVar4 + 1;
              } while (iVar4 != 0x10);
            }
          }
        }
        else if ((bVar1 & 1) == 0) {
          (*(code *)PTR_sprintf_0046a808)(auStack_50,"%d",bVar1 >> 1);
        }
        else {
          (*(code *)PTR_sprintf_0046a808)(auStack_50,&DAT_00452eac,bVar1 >> 1,&DAT_00452eb4);
        }
LAB_0043446c:
        iVar4 = (*(code *)PTR_req_format_write_0046a95c)
                          (param_1,
                           "<tr bgcolor=#b7b7b7><td><font size=2>%02x:%02x:%02x:%02x:%02x:%02x</td><td><font size=2>%d</td><td><font size=2>%d</td><td><font size=2>%d</td><td><font size=2>%s</td>"
                           ,pcVar8[1],pcVar8[2],pcVar8[3],pcVar8[4],pcVar8[5],pcVar8[6],
                           *(undefined4 *)(pcVar8 + 8),*(undefined4 *)(pcVar8 + 0x10),
                           *(undefined4 *)(pcVar8 + 0xc),auStack_50);
        iVar3 = iVar3 + iVar4;
        pcVar8 = pcVar8 + 0x18;
      } while (pcVar8 != local_38);
      (*(code *)PTR_free_0046a680)(pcVar2);
      return iVar3;
    }
    pcVar2 = "Read wlan sta info failed!";
  }
  (*(code *)PTR_puts_0046ab3c)(pcVar2);
  return 0;
LAB_004343ac:
  iVar4 = iVar4 + 1;
  if (iVar4 == 0x10) goto LAB_0043446c;
  goto LAB_00434370;
}

