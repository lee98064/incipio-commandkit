/* FUN_0041a6fc @ 0041a6fc */

int FUN_0041a6fc(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  int local_88;
  undefined1 auStack_84 [20];
  undefined4 local_70;
  uint local_6c;
  char local_68;
  undefined1 auStack_48 [24];
  undefined1 *local_30;
  
  iVar1 = (*(code *)PTR_apmib_get_0046aadc)(0x6f,&local_88);
  if (iVar1 == 0) {
    (*(code *)PTR_fputs_0046a6e4)("Get table entry error!\n",*(undefined4 *)PTR_stderr_0046a7f0);
    iVar1 = -1;
  }
  else {
    iVar1 = (*(code *)PTR_req_format_write_0046a95c)
                      (param_1,
                       "<tr><td align=center width=\"25%%\" bgcolor=\"#808080\"><font size=\"2\"><b>Local IP Address</b></font></td>\n<td align=center width=\"20%%\" bgcolor=\"#808080\"><font size=\"2\"><b>Protocol</b></font></td>\n<td align=center width=\"20%%\" bgcolor=\"#808080\"><font size=\"2\"><b>Port Range</b></font></td>\n<td align=center width=\"20%%\" bgcolor=\"#808080\"><font size=\"2\"><b>Comment</b></font></td>\n<td align=center width=\"15%%\" bgcolor=\"#808080\"><font size=\"2\"><b>Select</b></font></td></tr>\n"
                      );
    local_30 = auStack_48;
    for (iVar5 = 1; iVar5 <= local_88; iVar5 = iVar5 + 1) {
      local_70 = CONCAT13((char)iVar5,local_70._1_3_);
      iVar2 = (*(code *)PTR_apmib_get_0046aadc)(0x8070,&local_70);
      if (iVar2 == 0) {
        return -1;
      }
      pcVar3 = (char *)(*(code *)PTR_inet_ntoa_0046a854)(local_70);
      iVar2 = (*(code *)PTR_strcmp_0046a824)(pcVar3,"0.0.0.0");
      if (iVar2 == 0) {
        pcVar3 = "----";
      }
      puVar6 = &DAT_0044eca4;
      if ((local_68 != '\x03') && (puVar6 = &DAT_0044eca8, local_68 == '\x01')) {
        puVar6 = &DAT_0044ecac;
      }
      uVar4 = local_6c >> 0x10;
      if (uVar4 == 0) {
        (*(code *)PTR_strcpy_0046ac60)(auStack_84,"----");
      }
      else if (uVar4 == (local_6c & 0xffff)) {
        (*(code *)PTR_snprintf_0046abe4)(auStack_84,0x14,"%d");
      }
      else {
        (*(code *)PTR_snprintf_0046abe4)(auStack_84,0x14,"%d-%d",uVar4,local_6c & 0xffff);
      }
      iVar2 = (*(code *)PTR_req_format_write_0046a95c)
                        (param_1,
                         "<tr><td align=center width=\"25%%\" bgcolor=\"#C0C0C0\"><font size=\"2\">%s</td>\n<td align=center width=\"20%%\" bgcolor=\"#C0C0C0\"><font size=\"2\">%s</td>\n<td align=center width=\"20%%\" bgcolor=\"#C0C0C0\"><font size=\"2\">%s</td>\n<td align=center width=\"20%%\" bgcolor=\"#C0C0C0\"><font size=\"2\">%s</td>\n<td align=center width=\"15%%\" bgcolor=\"#C0C0C0\"><input type=\"checkbox\" name=\"select%d\" value=\"ON\"></td></tr>\n"
                         ,pcVar3,puVar6,auStack_84,local_30,iVar5);
      iVar1 = iVar1 + iVar2;
    }
  }
  return iVar1;
}

