/* FUN_0040bc64 @ 0040bc64 */

undefined4 FUN_0040bc64(void)

{
  int iVar1;
  int local_80;
  undefined1 auStack_7c [12];
  uint local_70;
  char local_6c;
  undefined1 auStack_54 [36];
  undefined1 *local_30;
  undefined1 *local_2c;
  
  local_80 = 0;
  (*(code *)PTR_apmib_get_0042b1a0)(0x81,&local_80);
  for (iVar1 = 1; iVar1 <= local_80; iVar1 = iVar1 + 1) {
    (*(code *)PTR_memset_0042b114)(&local_70,0,0x1b);
    local_70 = CONCAT13((char)iVar1,local_70._1_3_);
    (*(code *)PTR_apmib_get_0042b1a0)(0x8082,&local_70);
    (*(code *)PTR_sprintf_0042b0e8)(auStack_54,"%d:%d",local_70 >> 0x10,local_70 & 0xffff);
    local_2c = auStack_7c;
    (*(code *)PTR_strcpy_0042b208)(local_2c,s_iptables_0042ae70);
    if (local_6c == '\x01') {
      (*(code *)PTR_RunSystemCmd_0042b0dc)
                (0,local_2c,&DAT_0042aef4,s_FORWARD_0042ae98,&DAT_0042af28,&DAT_0042afcc,
                 s___dport_0042af6c,auStack_54,&DAT_0042af1c,&DAT_0042aec0,"");
    }
    if (local_6c == '\x02') {
      if ((local_70 >> 0x10 < 0x35) && (0x34 < (local_70 & 0xffff))) {
        (*(code *)PTR_RunSystemCmd_0042b0dc)
                  (0,auStack_7c,&DAT_0042aef4,s_INPUT_0042ae88,&DAT_0042af28,&DAT_0042afc8,
                   s___dport_0042af6c,"53:53",&DAT_0042af1c,&DAT_0042aec0,"");
      }
      (*(code *)PTR_RunSystemCmd_0042b0dc)
                (0,auStack_7c,&DAT_0042aef4,s_FORWARD_0042ae98,&DAT_0042af28,&DAT_0042afc8,
                 s___dport_0042af6c,auStack_54,&DAT_0042af1c,&DAT_0042aec0,"");
    }
    if (local_6c == '\x03') {
      local_30 = auStack_54;
      local_2c = &DAT_00430000;
      (*(code *)PTR_RunSystemCmd_0042b0dc)
                (0,auStack_7c,&DAT_0042aef4,s_FORWARD_0042ae98,&DAT_0042af28,&DAT_0042afcc,
                 s___dport_0042af6c,local_30,&DAT_0042af1c,&DAT_0042aec0,"");
      (*(code *)PTR_RunSystemCmd_0042b0dc)
                (0,auStack_7c,&DAT_0042aef4,local_2c + -0x5168,&DAT_0042af28,&DAT_0042afc8,
                 s___dport_0042af6c,local_30,&DAT_0042af1c,&DAT_0042aec0,"");
      if ((local_70 >> 0x10 < 0x35) && (0x34 < (local_70 & 0xffff))) {
        (*(code *)PTR_RunSystemCmd_0042b0dc)
                  (0,auStack_7c,&DAT_0042aef4,s_INPUT_0042ae88,&DAT_0042af28,&DAT_0042afc8,
                   s___dport_0042af6c,"53:53",&DAT_0042af1c,&DAT_0042aec0,"");
      }
    }
  }
  return 0;
}

