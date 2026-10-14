/* SetWlan_idx @ 004080b8 */

undefined4 SetWlan_idx(int param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  char *pcVar7;
  int iVar8;
  
  iVar8 = param_1 + 4;
  iVar4 = (*(code *)PTR_atoi_00423118)(iVar8);
  puVar3 = PTR_vwlan_idx_00423218;
  puVar2 = PTR_wlan_idx_00423204;
  puVar1 = PTR_strlen_00423108;
  if (0 < iVar4) {
    pcVar7 = "invalid wlan interface index number!";
LAB_00408190:
    (*(code *)PTR_puts_0042327c)(pcVar7);
    return 0;
  }
  *(int *)PTR_wlan_idx_00423204 = iVar4;
  *(undefined4 *)puVar3 = 0;
  uVar5 = (*(code *)puVar1)(param_1);
  if ((((8 < uVar5) && (*(char *)(param_1 + 5) == '-')) && (*(char *)(param_1 + 6) == 'v')) &&
     (*(char *)(param_1 + 7) == 'a')) {
    iVar4 = (*(code *)PTR_atoi_00423118)(param_1 + 8);
    puVar1 = PTR_atoi_00423118;
    if (4 < iVar4) {
      pcVar7 = "invalid virtual wlan interface index number!";
      goto LAB_00408190;
    }
    *(int *)puVar3 = iVar4 + 1;
    uVar6 = (*(code *)puVar1)(iVar8);
    *(undefined4 *)puVar2 = uVar6;
  }
  uVar5 = (*(code *)PTR_strlen_00423108)(param_1);
  if (8 < uVar5) {
    if (*(char *)(param_1 + 5) != '-') {
      return 1;
    }
    iVar4 = (*(code *)PTR_memcmp_004231dc)(param_1 + 6,&DAT_0041133c,3);
    puVar1 = PTR_atoi_00423118;
    if (iVar4 == 0) {
      *(undefined4 *)PTR_vwlan_idx_00423218 = 5;
      uVar6 = (*(code *)puVar1)(iVar8);
      *(undefined4 *)PTR_wlan_idx_00423204 = uVar6;
      return 1;
    }
  }
  return 1;
}

