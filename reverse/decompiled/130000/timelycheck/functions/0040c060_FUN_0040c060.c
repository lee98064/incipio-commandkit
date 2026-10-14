/* FUN_0040c060 @ 0040c060 */

undefined4 FUN_0040c060(void)

{
  undefined4 uVar1;
  int iVar2;
  int local_70;
  int local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined2 local_54;
  undefined1 auStack_50 [32];
  undefined1 *local_30;
  undefined1 *local_2c;
  
  local_70 = 0;
  (*(code *)PTR_apmib_get_0042b1a0)(0x75,&local_70);
  for (iVar2 = 1; iVar2 <= local_70; iVar2 = iVar2 + 1) {
    local_68 = 0;
    local_64 = 0;
    local_60 = 0;
    local_5c = 0;
    local_58 = 0;
    local_54 = 0;
    local_6c = iVar2 << 0x18;
    (*(code *)PTR_apmib_get_0042b1a0)(0x8076,&local_6c);
    local_30 = auStack_50;
    uVar1 = (*(code *)PTR_inet_ntoa_0042b108)(local_6c);
    (*(code *)PTR_strcpy_0042b208)(local_30,uVar1);
    if (local_68._0_1_ == '\x01') {
      (*(code *)PTR_RunSystemCmd_0042b0dc)
                (0,s_iptables_0042ae70,&DAT_0042aef4,s_FORWARD_0042ae98,&DAT_0042af28,&DAT_0042afcc,
                 &DAT_0042af2c,local_30,&DAT_0042af1c,&DAT_0042aec0,"");
    }
    if (local_68._0_1_ == '\x02') {
      local_2c = auStack_50;
      (*(code *)PTR_RunSystemCmd_0042b0dc)
                (0,s_iptables_0042ae70,&DAT_0042aef4,s_FORWARD_0042ae98,&DAT_0042af28,&DAT_0042afc8,
                 &DAT_0042af2c,auStack_50,&DAT_0042af1c,&DAT_0042aec0,"");
      (*(code *)PTR_RunSystemCmd_0042b0dc)
                (0,s_iptables_0042ae70,&DAT_0042aef4,s_INPUT_0042ae88,&DAT_0042af28,&DAT_0042afc8,
                 s___dport_0042af6c,"53:53",&DAT_0042af2c,local_2c,&DAT_0042af1c,&DAT_0042aec0,"");
    }
    if (local_68._0_1_ == '\x03') {
      local_2c = &DAT_00430000;
      local_30 = auStack_50;
      (*(code *)PTR_RunSystemCmd_0042b0dc)
                (0,s_iptables_0042ae70,&DAT_0042aef4,s_FORWARD_0042ae98,&DAT_0042af28,&DAT_0042afcc,
                 &DAT_0042af2c,auStack_50,&DAT_0042af1c,&DAT_0042aec0,"");
      (*(code *)PTR_RunSystemCmd_0042b0dc)
                (0,s_iptables_0042ae70,&DAT_0042aef4,local_2c + -0x5168,&DAT_0042af28,&DAT_0042afc8,
                 &DAT_0042af2c,local_30,&DAT_0042af1c,&DAT_0042aec0,"");
      (*(code *)PTR_RunSystemCmd_0042b0dc)
                (0,s_iptables_0042ae70,&DAT_0042aef4,s_INPUT_0042ae88,&DAT_0042af28,&DAT_0042afc8,
                 s___dport_0042af6c,"53:53",&DAT_0042af2c,local_30,&DAT_0042af1c,&DAT_0042aec0,"");
    }
  }
  return 0;
}

