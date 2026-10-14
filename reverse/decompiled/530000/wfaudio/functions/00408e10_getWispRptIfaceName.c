/* getWispRptIfaceName @ 00408e10 */

/* WARNING: Type propagation algorithm not settling */

undefined4 getWispRptIfaceName(undefined4 param_1,int param_2)

{
  int iVar1;
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
  (*(code *)PTR_apmib_get_0042354c)(uVar3,&local_30);
  (*(code *)PTR_apmib_get_0042354c)(0xc0,local_28);
  uVar3 = 0xffffffff;
  if (local_28[0] == 2) {
    (*(code *)PTR_apmib_save_wlanIdx_004234cc)();
    (*(code *)PTR_sprintf_0042344c)(local_28 + 1,&DAT_004117f0,param_2);
    (*(code *)PTR_SetWlan_idx_00423580)(local_28 + 1);
    (*(code *)PTR_apmib_get_0042354c)(0x3b,&local_2c);
    if (((local_2c == 0) || (local_2c == 3)) && (local_30 != 0)) {
      iVar1 = (*(code *)PTR_strstr_004234f8)(param_1,&DAT_004117f8);
      if (iVar1 == 0) {
        (*(code *)PTR_strcat_00423508)(param_1,&DAT_004117f8);
      }
    }
    else {
      puVar2 = (undefined1 *)(*(code *)PTR_strstr_004234f8)(param_1,&DAT_004117f8);
      if (puVar2 != (undefined1 *)0x0) {
        puVar2[3] = 0;
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2[2] = 0;
      }
    }
    (*(code *)PTR_apmib_recov_wlanIdx_00423514)();
    uVar3 = 0;
  }
  return uVar3;
}

