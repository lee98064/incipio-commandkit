/* FUN_00433f5c @ 00433f5c */

void FUN_00433f5c(undefined4 param_1)

{
  char cVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  puVar3 = PTR_vwlan_idx_0046a9b0;
  puVar2 = PTR_wlan_idx_0046a93c;
  (*(code *)PTR_SetWlan_idx_0046ab70)();
  puVar4 = PTR_pMib_0046ac00;
  iVar6 = *(int *)puVar3 * 0x9e1 + *(int *)puVar2 * 0x3b46;
  (*(code *)PTR_memcpy_0046ab5c)
            (*(int *)PTR_pMib_0046ac00 + 0x2e4c + iVar6,
             *(int *)PTR_pMibDef_0046ab9c + 0x2e4c + iVar6,0x9e1);
  iVar6 = (*(code *)PTR_strstr_0046a940)(param_1,&DAT_004501cc);
  if (iVar6 != 0) {
    if (*(int *)puVar2 == 0) {
      (*(code *)PTR_sprintf_0046a808)
                (*(int *)puVar4 + 0xa41,*(int *)puVar4 + *(int *)puVar3 * 0x9e1 + 0x2e4c);
      iVar5 = *(int *)puVar3;
      iVar6 = *(int *)puVar4;
      iVar7 = *(int *)puVar2;
      cVar1 = *(char *)(iVar6 + 0xa40);
    }
    else {
      (*(code *)PTR_sprintf_0046a808)
                (*(int *)puVar4 + 0xa63,
                 *(int *)puVar4 + *(int *)puVar3 * 0x9e1 + *(int *)puVar2 * 0x3b46 + 0x2e4c);
      iVar5 = *(int *)puVar3;
      iVar6 = *(int *)puVar4;
      iVar7 = *(int *)puVar2;
      cVar1 = *(char *)(iVar6 + 0xa62);
    }
    *(bool *)(iVar6 + iVar5 * 0x9e1 + iVar7 * 0x3b46 + 0x3205) = cVar1 == '\0';
  }
  return;
}

