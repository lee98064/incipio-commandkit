/* FUN_0041a544 @ 0041a544 */

int FUN_0041a544(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined *puVar4;
  int iVar5;
  int local_50;
  undefined4 local_4c;
  char local_48;
  undefined1 auStack_47 [23];
  undefined1 *local_30;
  char *local_2c;
  
  iVar1 = (*(code *)PTR_apmib_get_0046aadc)(0x75,&local_50);
  if (iVar1 == 0) {
    (*(code *)PTR_fputs_0046a6e4)("Get table entry error!\n",*(undefined4 *)PTR_stderr_0046a7f0);
    iVar1 = -1;
  }
  else {
    iVar1 = (*(code *)PTR_req_format_write_0046a95c)
                      (param_1,
                       "<tr><td align=center width=\"30%%\" bgcolor=\"#808080\"><font size=\"2\"><b>Local IP Address</b></font></td>\n<td align=center width=\"25%%\" bgcolor=\"#808080\"><font size=\"2\"><b>Protocol</b></font></td>\n<td align=center width=\"25%%\" bgcolor=\"#808080\"><font size=\"2\"><b>Comment</b></font></td>\n<td align=center width=\"20%%\" bgcolor=\"#808080\"><font size=\"2\"><b>Select</b></font></td></tr>\n"
                      );
    local_30 = auStack_47;
    for (iVar5 = 1; iVar5 <= local_50; iVar5 = iVar5 + 1) {
      local_4c = CONCAT13((char)iVar5,local_4c._1_3_);
      iVar2 = (*(code *)PTR_apmib_get_0046aadc)(0x8076,&local_4c);
      if (iVar2 == 0) {
        return -1;
      }
      local_2c = (char *)(*(code *)PTR_inet_ntoa_0046a854)(local_4c);
      iVar2 = (*(code *)PTR_strcmp_0046a824)(local_2c,"0.0.0.0");
      pcVar3 = local_2c;
      if (iVar2 == 0) {
        pcVar3 = "----";
      }
      puVar4 = &DAT_0044eca4;
      if ((local_48 != '\x03') && (puVar4 = &DAT_0044ecac, local_48 != '\x01')) {
        puVar4 = &DAT_0044eca8;
      }
      iVar2 = (*(code *)PTR_req_format_write_0046a95c)
                        (param_1,
                         "<tr><td align=center width=\"30%%\" bgcolor=\"#C0C0C0\"><font size=\"2\">%s</td>\n<td align=center width=\"25%%\" bgcolor=\"#C0C0C0\"><font size=\"2\">%s</td>\n<td align=center width=\"25%%\" bgcolor=\"#C0C0C0\"><font size=\"2\">%s</td>\n<td align=center width=\"20%%\" bgcolor=\"#C0C0C0\"><input type=\"checkbox\" name=\"select%d\" value=\"ON\"></td></tr>\n"
                         ,pcVar3,puVar4,local_30,iVar5);
      iVar1 = iVar1 + iVar2;
    }
  }
  return iVar1;
}

