/* FUN_0041a920 @ 0041a920 */

int FUN_0041a920(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  int iVar5;
  int local_120;
  undefined1 auStack_11c [12];
  undefined1 auStack_110 [12];
  undefined1 auStack_104 [20];
  undefined1 auStack_f0 [40];
  undefined1 local_c8 [17];
  undefined1 local_b7;
  undefined1 local_b6;
  undefined1 local_b5;
  undefined1 local_b4;
  undefined1 local_b3;
  undefined1 local_b2;
  byte local_b1;
  undefined4 local_b0;
  undefined4 local_ac;
  int local_a8;
  int local_a4;
  char *local_30;
  
  iVar1 = (*(code *)PTR_apmib_get_0046aadc)(0x136,&local_120);
  if (iVar1 == 0) {
    (*(code *)PTR_fputs_0046a6e4)("Get table entry error!\n",*(undefined4 *)PTR_stderr_0046a7f0);
    iVar1 = -1;
  }
  else {
    iVar1 = (*(code *)PTR_req_format_write_0046a95c)
                      (param_1,
                       "<tr><td align=center width=\"\" bgcolor=\"#808080\"><font size=\"2\"><b>Local IP Address</b></font></td>\n<td align=center width=\"\" bgcolor=\"#808080\"><font size=\"2\"><b>MAC Address</b></font></td>\n<td align=center width=\"\" bgcolor=\"#808080\"><font size=\"2\"><b>Mode</b></font></td>\n<td align=center width=\"\" bgcolor=\"#808080\"><font size=\"2\"><b>Uplink Bandwidth</b></font></td>\n<td align=center width=\"\" bgcolor=\"#808080\"><font size=\"2\"><b>Downlink Bandwidth</b></font></td>\n<td align=center width=\"\" bgcolor=\"#808080\"><font size=\"2\"><b>Comment</b></font></td>\n<td align=center width=\"\" bgcolor=\"#808080\"><font size=\"2\"><b>Select</b></font></td></tr>\n"
                      );
    for (iVar5 = 1; iVar5 <= local_120; iVar5 = iVar5 + 1) {
      local_c8[0] = (undefined1)iVar5;
      iVar2 = (*(code *)PTR_apmib_get_0046aadc)(0x8137,local_c8);
      if (iVar2 == 0) {
        return -1;
      }
      puVar4 = auStack_104;
      if ((local_b1 & 4) == 0) {
        if ((local_b1 & 8) == 0) {
          (*(code *)PTR_strcpy_0046ac60)(auStack_f0,&DAT_00450110);
        }
        else {
          (*(code *)PTR_sprintf_0046a808)
                    (auStack_104,"%02x%02x%02x%02x%02x%02x",local_b7,local_b6,local_b5,local_b4,
                     local_b3,local_b2);
          puVar4 = auStack_f0;
        }
      }
      else {
        uVar3 = (*(code *)PTR_inet_ntoa_0046a854)(local_b0);
        (*(code *)PTR_strcpy_0046ac60)(auStack_104,uVar3);
        uVar3 = (*(code *)PTR_inet_ntoa_0046a854)(local_ac);
        (*(code *)PTR_sprintf_0046a808)(auStack_f0,"%s - %s",auStack_104,uVar3);
      }
      (*(code *)PTR_strcpy_0046ac60)(puVar4,&DAT_00450110);
      local_30 = "Restricted maximum bandwidth";
      if ((local_b1 & 1) != 0) {
        local_30 = "Guaranteed minimum bandwidth";
      }
      if (local_a8 == 0) {
        (*(code *)PTR_strcpy_0046ac60)(auStack_11c,&DAT_00453b18);
      }
      else {
        (*(code *)PTR_snprintf_0046abe4)(auStack_11c,10,&DAT_0044f6dc);
      }
      if (local_a4 == 0) {
        (*(code *)PTR_strcpy_0046ac60)(auStack_110,&DAT_00453b18);
      }
      else {
        (*(code *)PTR_snprintf_0046abe4)(auStack_110,10,&DAT_0044f6dc);
      }
      iVar2 = (*(code *)PTR_req_format_write_0046a95c)
                        (param_1,
                         "<tr><td align=center width=\"\" bgcolor=\"#C0C0C0\"><font size=\"2\">%s</td>\n<td align=center width=\"\" bgcolor=\"#C0C0C0\"><font size=\"2\">%s</td>\n<td align=center width=\"\" bgcolor=\"#C0C0C0\"><font size=\"2\">%s</td>\n<td align=center width=\"\" bgcolor=\"#C0C0C0\"><font size=\"2\">%s</td>\n<td align=center width=\"\" bgcolor=\"#C0C0C0\"><font size=\"2\">%s</td>\n<td align=center width=\"\" bgcolor=\"#C0C0C0\"><font size=\"2\">%s</td>\n<td align=center width=\"\" bgcolor=\"#C0C0C0\"><input type=\"checkbox\" name=\"select%d\" value=\"ON\"></td></tr>\n"
                         ,auStack_f0,auStack_104,local_30,auStack_11c,auStack_110,local_c8,iVar5);
      iVar1 = iVar1 + iVar2;
    }
  }
  return iVar1;
}

