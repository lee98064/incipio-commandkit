/* Reset_to_AP @ 0040318c */

void Reset_to_AP(void)

{
  int iVar1;
  undefined1 *puVar2;
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined1 auStack_134 [2];
  undefined1 auStack_132 [4];
  undefined1 local_12e [10];
  undefined1 auStack_124 [64];
  undefined1 auStack_e4 [64];
  undefined1 auStack_a4 [64];
  undefined1 auStack_64 [68];
  undefined1 *local_20;
  
  local_140 = 2;
  local_13c = 0;
  local_138 = 0;
  (*(code *)PTR_apmib_set_00423524)(0xad,&local_140);
  puVar2 = (undefined1 *)0x0;
  iVar1 = (*(code *)PTR_SetWlan_idx_00423580)("wlan0");
  if (iVar1 != 0) {
    local_13c = 0;
    (*(code *)PTR_apmib_set_00423524)(0x3b,&local_13c);
    iVar1 = (*(code *)PTR_getInAddr_00423574)(&DAT_00410768,3,auStack_134);
    if (iVar1 == 0) {
      puVar2 = (undefined1 *)0x0;
      (*(code *)PTR_strcpy_004235e0)(auStack_124,"WAC_Config");
    }
    else {
      local_20 = auStack_a4;
      (*(code *)PTR_get_ssid_name_004235b4)(local_20);
      puVar2 = auStack_132;
      (*(code *)PTR_sprintf_0042344c)(auStack_124,"%s%02X%02X",local_20,local_12e[0],local_12e[1]);
    }
    (*(code *)PTR_apmib_set_00423524)(1,auStack_124);
    local_138 = 0;
    (*(code *)PTR_apmib_set_00423524)(0x14,&local_138);
    local_138 = 0;
    (*(code *)PTR_apmib_set_00423524)(0x19,&local_138);
  }
  FUN_004030a4(auStack_e4);
  iVar1 = (*(code *)PTR_SetWlan_idx_00423580)("wlan0-vxd");
  if (iVar1 != 0) {
    local_138 = 1;
    (*(code *)PTR_apmib_set_00423524)(0x16,&local_138);
    local_13c = 1;
    (*(code *)PTR_apmib_set_00423524)(0x3b,&local_13c);
    (*(code *)PTR_apmib_set_00423524)(1,auStack_e4);
    local_138 = 0;
    (*(code *)PTR_apmib_set_00423524)(0x19,&local_138);
  }
  local_138 = 0;
  (*(code *)PTR_apmib_set_00423524)(0xfa,&local_138);
  (*(code *)PTR_apmib_set_00423524)(0xfb,auStack_e4);
  local_20 = auStack_a4;
  (*(code *)PTR_get_wac_name_00423590)(local_20);
  if (puVar2 == (undefined1 *)0x0) {
    (*(code *)PTR_strcpy_004235e0)(auStack_124,local_20);
  }
  else {
    (*(code *)PTR_sprintf_0042344c)(auStack_124,"%s%02X%02X",local_20,puVar2[4],puVar2[5]);
  }
  (*(code *)PTR_apmib_set_00423524)(0x2b1,auStack_124);
  (*(code *)PTR_apmib_set_00423524)(0x2b2,"");
  (*(code *)PTR_apmib_update_0042352c)(4);
  (*(code *)PTR_system_00423558)("iwpriv wlan0 set_mib func_off=0");
  FUN_00401d54();
  FUN_00401e0c();
  DAT_004237e4 = 0;
  DAT_004237e8 = 0;
  (*(code *)PTR_sprintf_0042344c)(auStack_64,"rm -rf %s","/var/run/WAC_JOIN_DONE");
  (*(code *)PTR_system_00423558)(auStack_64);
  return;
}

