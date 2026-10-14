/* FUN_0041a1d0 @ 0041a1d0 */

int FUN_0041a1d0(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_b0;
  undefined1 local_ac;
  undefined1 local_ab;
  undefined1 local_aa;
  undefined1 local_a9;
  undefined1 local_a8;
  undefined1 local_a7;
  undefined1 auStack_a6 [22];
  undefined1 auStack_90 [108];
  
  iVar1 = (*(code *)PTR_apmib_get_0046aadc)(0x7b,&local_b0);
  if (iVar1 == 0) {
    (*(code *)PTR_fputs_0046a6e4)("Get table entry error!\n",*(undefined4 *)PTR_stderr_0046a7f0);
    iVar1 = -1;
  }
  else {
    iVar1 = (*(code *)PTR_req_format_write_0046a95c)
                      (param_1,
                       "<tr><td align=center width=\"50%%\" bgcolor=\"#808080\"><font size=\"2\"><b>MAC Address</b></font></td>\n<td align=center width=\"30%%\" bgcolor=\"#808080\"><font size=\"2\"><b>Comment</b></font></td>\n<td align=center width=\"20%%\" bgcolor=\"#808080\"><font size=\"2\"><b>Select</b></font></td></tr>\n"
                      );
    for (iVar3 = 1; iVar3 <= local_b0; iVar3 = iVar3 + 1) {
      local_ac = (undefined1)iVar3;
      iVar2 = (*(code *)PTR_apmib_get_0046aadc)(0x807c,&local_ac);
      if (iVar2 == 0) {
        return -1;
      }
      (*(code *)PTR_snprintf_0046abe4)
                (auStack_90,100,"%02x:%02x:%02x:%02x:%02x:%02x",local_ac,local_ab,local_aa,local_a9,
                 local_a8,local_a7);
      iVar2 = (*(code *)PTR_req_format_write_0046a95c)
                        (param_1,
                         "<tr><td align=center width=\"50%%\" bgcolor=\"#C0C0C0\"><font size=\"2\">%s</td>\n<td align=center width=\"30%%\" bgcolor=\"#C0C0C0\"><font size=\"2\">%s</td>\n<td align=center width=\"20%%\" bgcolor=\"#C0C0C0\"><input type=\"checkbox\" name=\"select%d\" value=\"ON\"></td></tr>\n"
                         ,auStack_90,auStack_a6,iVar3);
      iVar1 = iVar1 + iVar2;
    }
  }
  return iVar1;
}

