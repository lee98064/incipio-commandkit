/* getWanInfo @ 00422a64 */

undefined4 getWanInfo(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  int local_40;
  int local_3c;
  int local_38;
  char *local_34;
  undefined4 local_30;
  undefined1 auStack_2c [2];
  undefined1 local_2a;
  undefined1 local_29;
  undefined1 local_28;
  undefined1 local_27;
  undefined1 local_26;
  undefined1 local_25;
  
  local_3c = -1;
  local_38 = 0;
  local_34 = (char *)0x0;
  iVar1 = (*(code *)PTR_apmib_get_0046aadc)(0x68,&local_40);
  uVar2 = 0xffffffff;
  if (iVar1 != 0) {
    iVar1 = (*(code *)PTR_apmib_get_0046aadc)(0xc0,&local_3c);
    uVar2 = 0xffffffff;
    if (iVar1 != 0) {
      iVar1 = (*(code *)PTR_apmib_get_0046aadc)(0xc1,&local_38);
      uVar2 = 0xffffffff;
      if (iVar1 != 0) {
        if (((local_40 - 3U < 2) || (local_40 == 6)) || (local_40 == 0x10)) {
          local_34 = "ppp0";
          iVar1 = (*(code *)PTR_isConnectPPP_0046a7c8)();
          if (iVar1 == 0) {
            local_34 = (char *)0x0;
          }
        }
        else if (local_3c == 2) {
          if (local_38 == 0) {
            local_34 = "wlan0";
          }
          else if (local_38 == 1) {
            local_34 = "wlan1";
          }
          iVar1 = getWispRptIface(&local_34);
          if (iVar1 < 0) {
            return 0xffffffff;
          }
        }
        else {
          local_34 = "eth1";
        }
        iVar1 = 0;
        if (((local_3c != 2) && (local_34 != (char *)0x0)) &&
           (iVar1 = getWanLink(&DAT_0044bfdc), iVar1 < 0)) {
          (*(code *)PTR_strcpy_0046ac60)(param_1,"0.0.0.0");
        }
        if (((local_34 == (char *)0x0) || (iVar3 = getInAddr(local_34,0,&local_30), iVar3 == 0)) ||
           (iVar1 < 0)) {
          pcVar4 = "0.0.0.0";
        }
        else {
          pcVar4 = (char *)(*(code *)PTR_inet_ntoa_0046a854)(local_30);
        }
        (*(code *)PTR_strcpy_0046ac60)(param_1,pcVar4);
        if (((local_34 == (char *)0x0) || (iVar3 = getInAddr(local_34,2,&local_30), iVar3 == 0)) ||
           (iVar1 < 0)) {
          pcVar4 = "0.0.0.0";
        }
        else {
          pcVar4 = (char *)(*(code *)PTR_inet_ntoa_0046a854)(local_30);
        }
        (*(code *)PTR_strcpy_0046ac60)(param_2,pcVar4);
        if (((local_34 == (char *)0x0) || (iVar3 = getDefaultRoute(local_34,&local_30), iVar3 == 0))
           || (iVar1 < 0)) {
          pcVar4 = "0.0.0.0";
        }
        else {
          pcVar4 = (char *)(*(code *)PTR_inet_ntoa_0046a854)(local_30);
        }
        (*(code *)PTR_strcpy_0046ac60)(param_3,pcVar4);
        if (local_3c == 2) {
          if (local_38 == 0) {
            local_34 = "wlan0";
          }
          else if (local_38 == 1) {
            local_34 = "wlan1";
          }
          iVar1 = getWispRptIface(&local_34);
          if (iVar1 < 0) {
            return 0xffffffff;
          }
        }
        else {
          local_34 = "eth1";
        }
        iVar1 = getInAddr(local_34,4,auStack_2c);
        if (iVar1 == 0) {
          (*(code *)PTR_strcpy_0046ac60)(param_4,&DAT_00450abc);
        }
        else {
          (*(code *)PTR_sprintf_0046a808)
                    (param_4,"%02x:%02x:%02x:%02x:%02x:%02x",local_2a,local_29,local_28,local_27,
                     local_26,local_25);
        }
        uVar2 = 0;
      }
    }
  }
  return uVar2;
}

