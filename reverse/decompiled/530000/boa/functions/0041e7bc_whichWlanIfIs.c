/* whichWlanIfIs @ 0041e7bc */

/* WARNING: Type propagation algorithm not settling */

undefined4 whichWlanIfIs(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int local_20 [3];
  undefined2 local_14;
  
  local_20[1] = 0;
  local_20[2] = 0;
  local_14 = 0;
  uVar3 = *(undefined4 *)PTR_wlan_idx_0046a93c;
  (*(code *)PTR_sprintf_0046a808)(local_20 + 1,"wlan%d",0);
  iVar1 = SetWlan_idx(local_20 + 1);
  uVar2 = 0xffffffff;
  if (iVar1 != 0) {
    (*(code *)PTR_apmib_get_0046aadc)(0x515,local_20);
    uVar2 = 0;
    if (local_20[0] != param_1) {
      uVar2 = 0xffffffff;
    }
  }
  *(undefined4 *)PTR_wlan_idx_0046a93c = uVar3;
  return uVar2;
}

