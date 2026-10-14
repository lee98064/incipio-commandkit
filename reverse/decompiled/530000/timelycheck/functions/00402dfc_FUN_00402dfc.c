/* FUN_00402dfc @ 00402dfc */

void FUN_00402dfc(int param_1,int param_2)

{
  int iVar1;
  undefined *puVar2;
  char *pcVar3;
  int local_18;
  int local_14 [2];
  
  local_18 = 0;
  local_14[0] = 0;
  iVar1 = (*(code *)PTR_SetWlan_idx_0042b1cc)("wlan0");
  if (iVar1 != 0) {
    (*(code *)PTR_apmib_get_0042b1a0)(0x10e,&local_18);
  }
  if ((param_1 == 1) && (param_2 != 1)) {
    (*(code *)PTR_apmib_get_0042b1a0)(0x8e,local_14);
  }
  else {
    local_14[0] = 0;
  }
  if (local_18 == 0) {
    if (local_14[0] != 0) {
      if (local_14[0] != 1) {
        return;
      }
      (*(code *)PTR_RunSystemCmd_0042b0dc)
                (0,"mini_upnpd",&DAT_00417a08,"/tmp/wscd_config",&DAT_00417a2c,"/tmp/igd_config",
                 "-daemon","");
      return;
    }
    puVar2 = &DAT_00417a08;
    pcVar3 = "/tmp/wscd_config";
  }
  else {
    if (local_18 != 1) {
      return;
    }
    if (local_14[0] != 1) {
      return;
    }
    puVar2 = &DAT_00417a2c;
    pcVar3 = "/tmp/igd_config";
  }
  (*(code *)PTR_RunSystemCmd_0042b0dc)(0,"mini_upnpd",puVar2,pcVar3,"-daemon","");
  return;
}

