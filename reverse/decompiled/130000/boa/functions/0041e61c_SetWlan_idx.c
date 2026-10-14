/* SetWlan_idx @ 0041e61c */

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
  iVar4 = (*(code *)PTR_atoi_0046a73c)(iVar8);
  puVar3 = PTR_vwlan_idx_0046a9b0;
  puVar2 = PTR_wlan_idx_0046a93c;
  puVar1 = PTR_strlen_0046a714;
  if (0 < iVar4) {
    pcVar7 = "invalid wlan interface index number!";
LAB_0041e6f4:
    (*(code *)PTR_puts_0046ab3c)(pcVar7);
    return 0;
  }
  *(int *)PTR_wlan_idx_0046a93c = iVar4;
  *(undefined4 *)puVar3 = 0;
  uVar5 = (*(code *)puVar1)(param_1);
  if ((((8 < uVar5) && (*(char *)(param_1 + 5) == '-')) && (*(char *)(param_1 + 6) == 'v')) &&
     (*(char *)(param_1 + 7) == 'a')) {
    iVar4 = (*(code *)PTR_atoi_0046a73c)(param_1 + 8);
    puVar1 = PTR_atoi_0046a73c;
    if (4 < iVar4) {
      pcVar7 = "invalid virtual wlan interface index number!";
      goto LAB_0041e6f4;
    }
    *(int *)puVar3 = iVar4 + 1;
    uVar6 = (*(code *)puVar1)(iVar8);
    *(undefined4 *)puVar2 = uVar6;
  }
  uVar5 = (*(code *)PTR_strlen_0046a714)(param_1);
  if (8 < uVar5) {
    if (*(char *)(param_1 + 5) != '-') {
      return 1;
    }
    iVar4 = (*(code *)PTR_memcmp_0046a8d0)(param_1 + 6,&DAT_004501cc,3);
    puVar1 = PTR_atoi_0046a73c;
    if (iVar4 == 0) {
      *(undefined4 *)PTR_vwlan_idx_0046a9b0 = 5;
      uVar6 = (*(code *)puVar1)(iVar8);
      *(undefined4 *)PTR_wlan_idx_0046a93c = uVar6;
      return 1;
    }
  }
  return 1;
}

