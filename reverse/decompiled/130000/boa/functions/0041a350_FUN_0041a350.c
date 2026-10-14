/* FUN_0041a350 @ 0041a350 */

int FUN_0041a350(undefined4 param_1)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  int local_68;
  undefined1 auStack_64 [20];
  uint local_50;
  char local_4c;
  undefined1 auStack_4b [27];
  uint *local_30;
  undefined1 *local_2c;
  
  iVar2 = (*(code *)PTR_apmib_get_0046aadc)(0x81,&local_68);
  if (iVar2 == 0) {
    (*(code *)PTR_fputs_0046a6e4)("Get table entry error!\n",*(undefined4 *)PTR_stderr_0046a7f0);
    iVar2 = -1;
  }
  else {
    iVar2 = (*(code *)PTR_req_format_write_0046a95c)
                      (param_1,
                       "<tr><td align=center width=\"30%%\" bgcolor=\"#808080\"><font size=\"2\"><b>Port Range</b></font></td>\n<td align=center width=\"25%%\" bgcolor=\"#808080\"><font size=\"2\"><b>Protocol</b></font></td>\n<td align=center width=\"30%%\" bgcolor=\"#808080\"><font size=\"2\"><b>Comment</b></font></td>\n<td align=center width=\"15%%\" bgcolor=\"#808080\"><font size=\"2\"><b>Select</b></font></td></tr>\n"
                      );
    local_30 = &local_50;
    local_2c = auStack_4b;
    for (iVar5 = 1; puVar1 = local_30, iVar5 <= local_68; iVar5 = iVar5 + 1) {
      *(char *)local_30 = (char)iVar5;
      iVar3 = (*(code *)PTR_apmib_get_0046aadc)(0x8082,puVar1);
      if (iVar3 == 0) {
        return -1;
      }
      puVar6 = &DAT_0044eca4;
      if (local_4c != '\x03') {
        puVar6 = &DAT_0044eca8;
        if (local_4c == '\x01') {
          puVar6 = &DAT_0044ecac;
        }
      }
      uVar4 = local_50 >> 0x10;
      if (uVar4 == 0) {
        (*(code *)PTR_strcpy_0046ac60)(auStack_64,"----");
      }
      else if (uVar4 == (local_50 & 0xffff)) {
        (*(code *)PTR_snprintf_0046abe4)(auStack_64,0x14,"%d");
      }
      else {
        (*(code *)PTR_snprintf_0046abe4)(auStack_64,0x14,"%d-%d",uVar4,local_50 & 0xffff);
      }
      iVar3 = (*(code *)PTR_req_format_write_0046a95c)
                        (param_1,
                         "<tr><td align=center width=\"30%%\" bgcolor=\"#C0C0C0\"><font size=\"2\">%s</td>\n<td align=center width=\"25%%\" bgcolor=\"#C0C0C0\"><font size=\"2\">%s</td>\n<td align=center width=\"30%%\" bgcolor=\"#C0C0C0\"><font size=\"2\">%s</td>\n<td align=center width=\"15%%\" bgcolor=\"#C0C0C0\"><input type=\"checkbox\" name=\"select%d\" value=\"ON\"></td></tr>\n"
                         ,auStack_64,puVar6,local_2c,iVar5);
      iVar2 = iVar2 + iVar3;
    }
  }
  return iVar2;
}

