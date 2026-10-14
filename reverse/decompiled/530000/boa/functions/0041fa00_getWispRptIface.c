/* getWispRptIface @ 0041fa00 */

/* WARNING: Type propagation algorithm not settling */

undefined4 getWispRptIface(undefined4 *param_1,int param_2)

{
  char *pcVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  int local_30;
  int local_2c;
  int local_28 [6];
  
  local_30 = 0;
  local_2c = 0;
  local_28[0] = 0;
  local_28[1] = 0;
  local_28[2] = 0;
  local_28[3] = 0;
  local_28[4] = 0;
  if (param_2 == 0) {
    uVar3 = 0xfa;
  }
  else {
    if (param_2 != 1) {
      return 0xffffffff;
    }
    uVar3 = 0xfc;
  }
  (*(code *)PTR_apmib_get_0046aadc)(uVar3,&local_30);
  (*(code *)PTR_apmib_get_0046aadc)(0xc0,local_28);
  uVar3 = 0xffffffff;
  if (local_28[0] == 2) {
    (*(code *)PTR_apmib_save_wlanIdx_0046a8ec)();
    (*(code *)PTR_sprintf_0046a808)(local_28 + 1,"wlan%d",param_2);
    SetWlan_idx(local_28 + 1);
    (*(code *)PTR_apmib_get_0046aadc)(0x3b,&local_2c);
    if ((((local_2c == 0) || (local_2c == 4)) || (local_2c == 5)) && (local_30 != 0)) {
      if (param_2 == 0) {
        pcVar1 = "wlan0-vxd";
      }
      else {
        if (param_2 != 1) {
          return 0xffffffff;
        }
        pcVar1 = "wlan1-vxd";
      }
      *param_1 = pcVar1;
    }
    else {
      puVar2 = (undefined1 *)(*(code *)PTR_strstr_0046a940)(*param_1,"-vxd");
      if (puVar2 != (undefined1 *)0x0) {
        puVar2[3] = 0;
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2[2] = 0;
      }
    }
    (*(code *)PTR_apmib_recov_wlanIdx_0046aa00)();
    uVar3 = 0;
  }
  return uVar3;
}

