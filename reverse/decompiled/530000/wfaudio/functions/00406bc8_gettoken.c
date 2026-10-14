/* gettoken @ 00406bc8 */

undefined1 * gettoken(int param_1,uint param_2,char param_3)

{
  byte bVar1;
  undefined1 uVar2;
  bool bVar3;
  uint uVar4;
  undefined1 *puVar5;
  int iVar6;
  undefined1 *puVar7;
  uint uVar8;
  undefined1 *puVar9;
  byte local_48 [56];
  
  (*(code *)PTR_memset_00423490)(&DAT_004237f0,0,0x32);
  uVar4 = (*(code *)PTR_strlen_004233e8)(param_1);
  iVar6 = 1;
  for (uVar8 = 0; uVar8 < uVar4; uVar8 = uVar8 + 1) {
    if (*(char *)(param_1 + uVar8) == param_3) {
      local_48[iVar6] = (byte)uVar8;
      iVar6 = iVar6 + 1;
    }
  }
  puVar5 = (undefined1 *)0x0;
  if (param_2 <= iVar6 - 1U) {
    local_48[0] = 0;
    local_48[iVar6] = (byte)uVar4;
    if (param_2 != 0) {
      puVar5 = (undefined1 *)(local_48[param_2] + 1);
    }
    bVar1 = local_48[param_2 + 1];
    puVar9 = puVar5 + param_1;
    puVar7 = &DAT_004237f0;
    while (bVar3 = (int)puVar5 < (int)(uint)bVar1, puVar5 = puVar5 + 1, bVar3) {
      uVar2 = *puVar9;
      puVar9 = puVar9 + 1;
      *puVar7 = uVar2;
      puVar7 = puVar7 + 1;
    }
    puVar5 = &DAT_004237f0;
  }
  return puVar5;
}

