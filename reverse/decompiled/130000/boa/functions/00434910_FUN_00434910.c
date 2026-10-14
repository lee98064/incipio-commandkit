/* FUN_00434910 @ 00434910 */

int FUN_00434910(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_148;
  undefined1 local_144;
  undefined1 local_143;
  undefined1 local_142;
  undefined1 local_141;
  undefined1 local_140;
  undefined1 local_13f;
  undefined1 auStack_13e [22];
  undefined1 auStack_128 [260];
  
  (*(code *)PTR_memset_0046a87c)(auStack_128,0,0x100);
  iVar1 = (*(code *)PTR_apmib_get_0046aadc)(0x35,&local_148);
  if (iVar1 == 0) {
    (*(code *)PTR_fputs_0046a6e4)("Get table entry error!\n",*(undefined4 *)PTR_stderr_0046a7f0);
    iVar1 = -1;
  }
  else {
    iVar1 = (*(code *)PTR_req_format_write_0046a95c)
                      (param_1,
                       "<tr><td align=center width=\"45%%\" bgcolor=\"#808080\"><font size=\"2\"><b>MAC Address</b></font></td>\n<td align=center width=\"35%%\" bgcolor=\"#808080\"><font size=\"2\"><b>Comment</b></font></td>\n<td align=center width=\"20%%\" bgcolor=\"#808080\"><font size=\"2\"><b>Select</b></font></td></tr>\n"
                      );
    for (iVar3 = 1; iVar3 <= local_148; iVar3 = iVar3 + 1) {
      local_144 = (undefined1)iVar3;
      iVar2 = (*(code *)PTR_apmib_get_0046aadc)(0x8036,&local_144);
      if (iVar2 == 0) {
        return -1;
      }
      (*(code *)PTR_snprintf_0046abe4)
                (auStack_128,0x100,"%02x:%02x:%02x:%02x:%02x:%02x",local_144,local_143,local_142,
                 local_141,local_140,local_13f);
      iVar2 = (*(code *)PTR_req_format_write_0046a95c)
                        (param_1,
                         "<tr><td align=center width=\"45%%\" bgcolor=\"#C0C0C0\"><font size=\"2\">%s</td>\n<td align=center width=\"35%%\" bgcolor=\"#C0C0C0\"><font size=\"2\">%s</td>\n<td align=center width=\"20%%\" bgcolor=\"#C0C0C0\"><input type=\"checkbox\" name=\"select%d\" value=\"ON\"></td></tr>\n"
                         ,auStack_128,auStack_13e,iVar3);
      iVar1 = iVar1 + iVar2;
    }
  }
  return iVar1;
}

