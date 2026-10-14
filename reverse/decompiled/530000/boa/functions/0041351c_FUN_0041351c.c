/* FUN_0041351c @ 0041351c */

undefined4 FUN_0041351c(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int local_78;
  undefined1 local_74 [32];
  undefined4 local_54;
  undefined1 local_50;
  undefined1 local_4f;
  undefined1 local_4e;
  undefined1 local_4d;
  undefined1 local_4c;
  undefined1 local_4b;
  undefined1 auStack_4a [34];
  
  (*(code *)PTR_apmib_get_0046aadc)(0x125,&local_78);
  (*(code *)PTR_req_format_write_0046a95c)
            (param_1,
             "<tr><td align=center width=\"30%%\" bgcolor=\"#808080\"><font size=\"2\"><b>IP Address</b></font></td>\n<td align=center width=\"30%%\" bgcolor=\"#808080\"><font size=\"2\"><b>MAC Address</b></font></td>\n<td align=center width=\"30%%\" bgcolor=\"#808080\"><font size=\"2\"><b>Comment</b></font></td>\n<td align=center width=\"10%%\" bgcolor=\"#808080\"><font size=\"2\"><b>Select</b></font></td></tr>\n"
            );
  for (iVar3 = 1; iVar3 <= local_78; iVar3 = iVar3 + 1) {
    local_54 = CONCAT13((char)iVar3,local_54._1_3_);
    (*(code *)PTR_apmib_get_0046aadc)(0x8126,&local_54);
    iVar1 = (*(code *)PTR_memcmp_0046a8d0)(&local_50,&DAT_0044e720,6);
    if (iVar1 == 0) {
      local_74[0] = 0;
    }
    else {
      (*(code *)PTR_sprintf_0046a808)
                (local_74," %02x-%02x-%02x-%02x-%02x-%02x",local_50,local_4f,local_4e,local_4d,
                 local_4c,local_4b);
    }
    uVar2 = (*(code *)PTR_inet_ntoa_0046a854)(local_54);
    (*(code *)PTR_req_format_write_0046a95c)
              (param_1,
               "<tr><td align=center width=\"30%%\" bgcolor=\"#C0C0C0\"><font size=\"2\">%s</td>\n<td align=center width=\"30%%\" bgcolor=\"#C0C0C0\"><font size=\"2\">%s</td>\n<td align=center width=\"30%%\" bgcolor=\"#C0C0C0\"><font size=\"2\">%s</td>\n<td align=center width=\"10%%\" bgcolor=\"#C0C0C0\"><input type=\"checkbox\" name=\"select%d\" value=\"ON\"></td></tr>\n"
               ,uVar2,local_74,auStack_4a,iVar3);
  }
  return 0;
}

