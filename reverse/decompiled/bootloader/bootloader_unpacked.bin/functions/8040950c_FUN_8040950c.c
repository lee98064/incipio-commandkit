/* FUN_8040950c @ 8040950c */

void FUN_8040950c(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  byte *pbVar10;
  undefined4 local_88 [17];
  undefined4 local_44;
  byte abStack_40 [8];
  byte *local_38;
  undefined4 *local_34;
  byte *local_30;
  
  puVar1 = &DAT_8040a7e8;
  puVar2 = local_88;
  do {
    uVar5 = puVar1[1];
    uVar4 = puVar1[2];
    uVar3 = puVar1[3];
    *puVar2 = *puVar1;
    puVar2[1] = uVar5;
    puVar2[2] = uVar4;
    puVar2[3] = uVar3;
    puVar1 = puVar1 + 4;
    puVar2 = puVar2 + 4;
  } while (puVar1 != (undefined4 *)0x8040a828);
  *puVar2 = uRam8040a828;
  local_44 = DAT_8040a7e4;
  iVar8 = 0;
  local_30 = abStack_40;
  local_38 = abStack_40;
  local_34 = local_88;
  iVar9 = 0;
  do {
    pbVar10 = (byte *)&local_44;
    do {
      uVar7 = (uint)*pbVar10;
      FUN_80402a40(4,0x1f,1);
      FUN_80402a40(4,0x14,(1 << (uVar7 & 0x1f)) + 0xb20);
      FUN_80402d78(4,0x14,local_38);
      FUN_80402a40(uVar7,0x1f,1);
      uVar6 = 0;
      puVar1 = local_34;
      do {
        uVar3 = *puVar1;
        FUN_80402a40(uVar7,0x13,uVar3);
        FUN_804077a4(s_i__d_phyid__d_gray_code__x_8040dda8,iVar8,uVar7,uVar3);
        uVar6 = uVar6 + 1;
        puVar1 = puVar1 + 1;
      } while (uVar6 <= (uint)(iVar9 >> 2));
      FUN_80402a40(uVar7,0x1f,0);
      pbVar10 = pbVar10 + 1;
    } while (pbVar10 != local_30);
    FUN_80409010(10000);
    iVar8 = iVar8 + 1;
    iVar9 = iVar8 * 4;
  } while (iVar8 != 0x11);
  FUN_80402a40(4,0x1f,1);
  FUN_80402a40(4,0x14,0xb20);
  FUN_80402a40(4,0x1f,0);
  return;
}

