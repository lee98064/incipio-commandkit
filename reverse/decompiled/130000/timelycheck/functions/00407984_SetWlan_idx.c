/* SetWlan_idx @ 00407984 */

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
  iVar4 = (*(code *)PTR_atoi_0042b0c4)(iVar8);
  puVar3 = PTR_vwlan_idx_0042b16c;
  puVar2 = PTR_wlan_idx_0042b15c;
  puVar1 = PTR_strlen_0042b0bc;
  if (0 < iVar4) {
    pcVar7 = "invalid wlan interface index number!";
LAB_00407a5c:
    (*(code *)PTR_puts_0042b1b8)(pcVar7);
    return 0;
  }
  *(int *)PTR_wlan_idx_0042b15c = iVar4;
  *(undefined4 *)puVar3 = 0;
  uVar5 = (*(code *)puVar1)(param_1);
  if ((((8 < uVar5) && (*(char *)(param_1 + 5) == '-')) && (*(char *)(param_1 + 6) == 'v')) &&
     (*(char *)(param_1 + 7) == 'a')) {
    iVar4 = (*(code *)PTR_atoi_0042b0c4)(param_1 + 8);
    puVar1 = PTR_atoi_0042b0c4;
    if (4 < iVar4) {
      pcVar7 = "invalid virtual wlan interface index number!";
      goto LAB_00407a5c;
    }
    *(int *)puVar3 = iVar4 + 1;
    uVar6 = (*(code *)puVar1)(iVar8);
    *(undefined4 *)puVar2 = uVar6;
  }
  uVar5 = (*(code *)PTR_strlen_0042b0bc)(param_1);
  if (8 < uVar5) {
    if (*(char *)(param_1 + 5) != '-') {
      return 1;
    }
    iVar4 = (*(code *)PTR_memcmp_0042b138)(param_1 + 6,&DAT_00417f7c,3);
    puVar1 = PTR_atoi_0042b0c4;
    if (iVar4 == 0) {
      *(undefined4 *)PTR_vwlan_idx_0042b16c = 5;
      uVar6 = (*(code *)puVar1)(iVar8);
      *(undefined4 *)PTR_wlan_idx_0042b15c = uVar6;
      return 1;
    }
  }
  return 1;
}

