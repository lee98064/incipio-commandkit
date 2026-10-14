/* FUN_004143c8 @ 004143c8 */

int FUN_004143c8(int param_1,uint param_2,int param_3)

{
  byte bVar1;
  byte bVar2;
  undefined1 uVar3;
  undefined1 *puVar4;
  int iVar5;
  undefined1 *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  byte *pbVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  
  puVar4 = (undefined1 *)(*(code *)PTR_malloc_0057e48c)(0x1011);
  iVar5 = 0;
  DAT_0057eb10 = puVar4;
  if (puVar4 != (undefined1 *)0x0) {
    puVar6 = puVar4;
    do {
      *puVar6 = 0x20;
      puVar6 = puVar6 + 1;
      iVar5 = 0;
    } while (puVar6 != puVar4 + 0xfee);
    uVar9 = 0;
    uVar8 = 0xfee;
    uVar7 = 0;
    while( true ) {
      while( true ) {
        uVar9 = uVar9 >> 1;
        uVar11 = uVar9;
        if ((uVar9 & 0x100) == 0) {
          pbVar10 = (byte *)(param_1 + uVar7);
          uVar7 = uVar7 + 1;
          uVar11 = (uint)*pbVar10;
          uVar9 = uVar11 | 0xff00;
          if (param_2 < uVar7) goto LAB_00414528;
        }
        uVar12 = uVar7 + 1;
        if ((uVar11 & 1) == 0) break;
        bVar1 = *(byte *)(param_1 + uVar7);
        if (param_2 < uVar12) goto LAB_00414528;
        pbVar10 = (byte *)(param_3 + iVar5);
        puVar4[uVar8] = bVar1;
        iVar5 = iVar5 + 1;
        *pbVar10 = bVar1;
        uVar8 = uVar8 + 1 & 0xfff;
        uVar7 = uVar12;
      }
      bVar1 = *(byte *)(param_1 + uVar7);
      uVar7 = uVar7 + 2;
      if (param_2 < uVar12) break;
      bVar2 = *(byte *)(param_1 + uVar12);
      if (param_2 < uVar7) break;
      puVar6 = (undefined1 *)(param_3 + iVar5);
      iVar13 = 0;
      do {
        uVar3 = puVar4[iVar13 + ((bVar2 & 0xf0) << 4 | (uint)bVar1) & 0xfff];
        iVar13 = iVar13 + 1;
        puVar4[uVar8] = uVar3;
        iVar5 = iVar5 + 1;
        *puVar6 = uVar3;
        uVar8 = uVar8 + 1 & 0xfff;
        puVar6 = puVar6 + 1;
      } while (iVar13 <= (int)((bVar2 & 0xf) + 2));
    }
LAB_00414528:
    (*(code *)PTR_free_0057d45c)();
  }
  return iVar5;
}

