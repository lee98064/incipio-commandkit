/* FUN_00434aac @ 00434aac */

int FUN_00434aac(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined *puVar4;
  int iVar5;
  undefined4 uVar6;
  code *pcVar7;
  int local_130;
  undefined1 auStack_12c [44];
  undefined1 local_100 [33];
  char local_df;
  char local_dd;
  
  uVar3 = 0x835;
  if (*(int *)PTR_wlan_idx_0046a93c != 0) {
    uVar3 = 0x847;
  }
  uVar6 = 0x8848;
  if (*(int *)PTR_wlan_idx_0046a93c == 0) {
    uVar6 = 0x8836;
  }
  (*(code *)PTR_apmib_get_0046aadc)(uVar3,&local_130);
  iVar1 = (*(code *)PTR_req_format_write_0046a95c)
                    (param_1,
                     "<tr><td align=center width=\"\" bgcolor=\"#808080\"><font size=\"2\"><b>SSID</b></font></td>\n<td align=center width=\"\" bgcolor=\"#808080\"><font size=\"2\"><b>Encrypt</b></font></td>\n<td align=center width=\"20%%\" bgcolor=\"#808080\"><font size=\"2\"><b>Select</b></font></td></tr>\n"
                    );
  iVar5 = 1;
  do {
    if (local_130 < iVar5) {
      return iVar1;
    }
    (*(code *)PTR_memset_0046a87c)(auStack_12c,0,0x2b);
    local_100[0] = (undefined1)iVar5;
    iVar2 = (*(code *)PTR_apmib_get_0046aadc)(uVar6,local_100);
    if (iVar2 == 0) {
      return -1;
    }
    pcVar7 = (code *)PTR_strcpy_0046ac60;
    if ((byte)(local_df - 1U) < 2) {
      puVar4 = &DAT_00453554;
    }
    else {
      if (local_df == '\x03') {
        puVar4 = &DAT_00453558;
      }
      else {
        if (local_df != '\x04') {
          puVar4 = &DAT_00453568;
          goto LAB_00434c38;
        }
        puVar4 = &DAT_00453560;
      }
      (*(code *)PTR_strcpy_0046ac60)(auStack_12c,puVar4);
      puVar4 = &DAT_00450f50;
      pcVar7 = (code *)PTR_strcat_0046a9c8;
      if (local_dd != '\x02') {
        puVar4 = &DAT_00450f58;
        pcVar7 = (code *)PTR_strcat_0046a9c8;
      }
    }
LAB_00434c38:
    (*pcVar7)(auStack_12c,puVar4);
    iVar2 = (*(code *)PTR_req_format_write_0046a95c)
                      (param_1,
                       "<tr><td align=center width=\"35%%\" bgcolor=\"#C0C0C0\"><font size=\"2\">%s</td>\n<td align=center width=\"20%%\" bgcolor=\"#C0C0C0\"><font size=\"2\">%s</td>\n<td align=center width=\"10%%\" bgcolor=\"#C0C0C0\"><input type=\"checkbox\" name=\"select%d\" value=\"ON\"></td></tr>\n"
                       ,local_100,auStack_12c,iVar5);
    iVar1 = iVar1 + iVar2;
    iVar5 = iVar5 + 1;
  } while( true );
}

