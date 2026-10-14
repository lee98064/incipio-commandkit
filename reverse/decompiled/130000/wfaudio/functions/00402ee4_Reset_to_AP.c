/* Reset_to_AP @ 00402ee4 */

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
  (*(code *)PTR_apmib_set_0042323c)(0xad,&local_140);
  puVar2 = (undefined1 *)0x0;
  iVar1 = (*(code *)PTR_SetWlan_idx_00423298)("wlan0");
  if (iVar1 != 0) {
    local_13c = 0;
    (*(code *)PTR_apmib_set_0042323c)(0x3b,&local_13c);
    iVar1 = (*(code *)PTR_getInAddr_0042328c)(&DAT_00410498,3,auStack_134);
    if (iVar1 == 0) {
      puVar2 = (undefined1 *)0x0;
      (*(code *)PTR_strcpy_004232f4)(auStack_124,"WAC_Config");
    }
    else {
      local_20 = auStack_a4;
      (*(code *)PTR_get_ssid_name_004232c8)(local_20);
      puVar2 = auStack_132;
      (*(code *)PTR_sprintf_00423164)(auStack_124,"%s%02X%02X",local_20,local_12e[0],local_12e[1]);
    }
    (*(code *)PTR_apmib_set_0042323c)(1,auStack_124);
    local_138 = 0;
    (*(code *)PTR_apmib_set_0042323c)(0x14,&local_138);
    local_138 = 0;
    (*(code *)PTR_apmib_set_0042323c)(0x19,&local_138);
  }
  FUN_00402dfc(auStack_e4);
  iVar1 = (*(code *)PTR_SetWlan_idx_00423298)("wlan0-vxd");
  if (iVar1 != 0) {
    local_138 = 1;
    (*(code *)PTR_apmib_set_0042323c)(0x16,&local_138);
    local_13c = 1;
    (*(code *)PTR_apmib_set_0042323c)(0x3b,&local_13c);
    (*(code *)PTR_apmib_set_0042323c)(1,auStack_e4);
    local_138 = 0;
    (*(code *)PTR_apmib_set_0042323c)(0x19,&local_138);
  }
  local_138 = 0;
  (*(code *)PTR_apmib_set_0042323c)(0xfa,&local_138);
  (*(code *)PTR_apmib_set_0042323c)(0xfb,auStack_e4);
  local_20 = auStack_a4;
  (*(code *)PTR_get_wac_name_004232a4)(local_20);
  if (puVar2 == (undefined1 *)0x0) {
    (*(code *)PTR_strcpy_004232f4)(auStack_124,local_20);
  }
  else {
    (*(code *)PTR_sprintf_00423164)(auStack_124,"%s%02X%02X",local_20,puVar2[4],puVar2[5]);
  }
  (*(code *)PTR_apmib_set_0042323c)(0x2b1,auStack_124);
  (*(code *)PTR_apmib_set_0042323c)(0x2b2,"");
  (*(code *)PTR_apmib_update_00423244)(4);
  (*(code *)PTR_system_00423270)("iwpriv wlan0 set_mib func_off=0");
  FUN_00401ce4();
  FUN_00401d9c();
  DAT_00423504 = 0;
  DAT_00423508 = 0;
  (*(code *)PTR_sprintf_00423164)(auStack_64,"rm -rf %s","/var/run/WAC_JOIN_DONE");
  (*(code *)PTR_system_00423270)(auStack_64);
  return;
}

