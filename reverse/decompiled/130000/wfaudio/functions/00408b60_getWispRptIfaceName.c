/* getWispRptIfaceName @ 00408b60 */

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
  (*(code *)PTR_apmib_get_00423264)(uVar3,&local_30);
  (*(code *)PTR_apmib_get_00423264)(0xc0,local_28);
  uVar3 = 0xffffffff;
  if (local_28[0] == 2) {
    (*(code *)PTR_apmib_save_wlanIdx_004231e4)();
    (*(code *)PTR_sprintf_00423164)(local_28 + 1,&DAT_00411510,param_2);
    (*(code *)PTR_SetWlan_idx_00423298)(local_28 + 1);
    (*(code *)PTR_apmib_get_00423264)(0x3b,&local_2c);
    if (((local_2c == 0) || (local_2c == 3)) && (local_30 != 0)) {
      iVar1 = (*(code *)PTR_strstr_00423210)(param_1,&DAT_00411518);
      if (iVar1 == 0) {
        (*(code *)PTR_strcat_00423220)(param_1,&DAT_00411518);
      }
    }
    else {
      puVar2 = (undefined1 *)(*(code *)PTR_strstr_00423210)(param_1,&DAT_00411518);
      if (puVar2 != (undefined1 *)0x0) {
        puVar2[3] = 0;
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2[2] = 0;
      }
    }
    (*(code *)PTR_apmib_recov_wlanIdx_0042322c)();
    uVar3 = 0;
  }
  return uVar3;
}

