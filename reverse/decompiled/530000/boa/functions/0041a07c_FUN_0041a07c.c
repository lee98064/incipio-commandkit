/* FUN_0041a07c @ 0041a07c */

int FUN_0041a07c(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  int iVar5;
  int local_40;
  uint local_3c;
  undefined1 local_38 [31];
  byte local_19;
  
  iVar1 = (*(code *)PTR_apmib_get_0046aadc)(0xf0,&local_40);
  if (iVar1 == 0) {
    uVar4 = *(undefined4 *)PTR_stderr_0046a7f0;
    pcVar3 = "Get table entry error!\n";
  }
  else {
    iVar1 = (*(code *)PTR_apmib_get_0046aadc)(0xff,&local_3c);
    if (iVar1 != 0) {
      iVar1 = (*(code *)PTR_req_format_write_0046a95c)
                        (param_1,
                         "<tr><td align=center width=\"70%%\" bgcolor=\"#808080\"><font size=\"2\"><b>URL Address</b></font></td>\n<td align=center width=\"30%%\" bgcolor=\"#808080\"><font size=\"2\"><b>Select</b></font></td></tr>\n"
                        );
      iVar5 = 1;
      while( true ) {
        if (local_40 < iVar5) {
          return iVar1;
        }
        local_38[0] = (undefined1)iVar5;
        iVar2 = (*(code *)PTR_apmib_get_0046aadc)(0x80f1,local_38);
        if (iVar2 == 0) break;
        if (local_3c == local_19) {
          iVar2 = (*(code *)PTR_req_format_write_0046a95c)
                            (param_1,
                             "<tr><td align=center width=\"70%%\" bgcolor=\"#C0C0C0\"><font size=\"2\">%s</td>\n<td align=center width=\"30%%\" bgcolor=\"#C0C0C0\"><input type=\"checkbox\" name=\"select%d\" value=\"ON\"></td></tr>\n"
                             ,local_38,iVar5);
          iVar1 = iVar1 + iVar2;
        }
        iVar5 = iVar5 + 1;
      }
      return -1;
    }
    uVar4 = *(undefined4 *)PTR_stderr_0046a7f0;
    pcVar3 = "Get URL Filter mode error!\n";
  }
  (*(code *)PTR_fputs_0046a6e4)(pcVar3,uVar4);
  return -1;
}

