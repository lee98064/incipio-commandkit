/* FUN_004346d8 @ 004346d8 */

int FUN_004346d8(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined *puVar5;
  int iVar6;
  int local_168;
  undefined1 auStack_164 [20];
  undefined1 local_150;
  undefined1 local_14f;
  undefined1 local_14e;
  undefined1 local_14d;
  undefined1 local_14c;
  undefined1 local_14b;
  int local_14a;
  undefined1 auStack_146 [22];
  undefined1 auStack_130 [256];
  undefined1 *local_30;
  
  (*(code *)PTR_memset_0046a87c)(auStack_130,0,0x100);
  iVar1 = (*(code *)PTR_apmib_get_0046aadc)(0x40,&local_168);
  if (iVar1 == 0) {
    (*(code *)PTR_fputs_0046a6e4)("Get table entry error!\n",*(undefined4 *)PTR_stderr_0046a7f0);
    iVar1 = -1;
  }
  else {
    iVar1 = (*(code *)PTR_req_format_write_0046a95c)
                      (param_1,
                       "<tr><td align=center width=\"35%%\" bgcolor=\"#808080\"><font size=\"2\"><b>MAC Address</b></font></td>\n<td align=center width=\"25%%\" bgcolor=\"#808080\"><font size=\"2\"><b>Tx Rate (Mbps)</b></font></td>\n<td align=center width=\"30%%\" bgcolor=\"#808080\"><font size=\"2\"><b>Comment</b></font></td>\n<td align=center width=\"10%%\" bgcolor=\"#808080\"><font size=\"2\"><b>Select</b></font></td></tr>\n"
                      );
    local_30 = auStack_146;
    for (iVar6 = 1; iVar6 <= local_168; iVar6 = iVar6 + 1) {
      local_150 = (undefined1)iVar6;
      iVar2 = (*(code *)PTR_apmib_get_0046aadc)(0x8041,&local_150);
      if (iVar2 == 0) {
        return -1;
      }
      (*(code *)PTR_snprintf_0046abe4)
                (auStack_130,0x100,"%02x:%02x:%02x:%02x:%02x:%02x",local_150,local_14f,local_14e,
                 local_14d,local_14c,local_14b);
      if (local_14a == 0) {
        puVar5 = &DAT_004530dc;
LAB_00434874:
        (*(code *)PTR_strcpy_0046ac60)(auStack_164,puVar5);
      }
      else {
        iVar2 = 0;
        piVar3 = &DAT_0046a170;
        do {
          iVar4 = *piVar3;
          piVar3 = piVar3 + 6;
          if (iVar4 == local_14a) {
            puVar5 = &DAT_0046a174 + iVar2 * 0x18;
            goto LAB_00434874;
          }
          iVar2 = iVar2 + 1;
        } while (iVar2 != 0x30);
      }
      iVar2 = (*(code *)PTR_req_format_write_0046a95c)
                        (param_1,
                         "<tr><td align=center width=\"35%%\" bgcolor=\"#C0C0C0\"><font size=\"2\">%s</td>\n<td align=center width=\"25%%\" bgcolor=\"#C0C0C0\"><font size=\"2\">%s</td>\n<td align=center width=\"30%%\" bgcolor=\"#C0C0C0\"><font size=\"2\">%s</td>\n<td align=center width=\"10%%\" bgcolor=\"#C0C0C0\"><input type=\"checkbox\" name=\"select%d\" value=\"ON\"></td></tr>\n"
                         ,auStack_130,auStack_164,local_30,iVar6);
      iVar1 = iVar1 + iVar2;
    }
  }
  return iVar1;
}

