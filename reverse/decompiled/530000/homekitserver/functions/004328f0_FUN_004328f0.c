/* FUN_004328f0 @ 004328f0 */

void FUN_004328f0(byte *param_1,uint param_2,undefined1 *param_3)

{
  byte bVar1;
  undefined1 uVar2;
  int iVar3;
  uint uVar4;
  undefined1 *puVar5;
  undefined1 auStack_28 [24];
  
  (*(code *)PTR_memcpy_00614674)(auStack_28,"0123456789abcdef",0x11);
  iVar3 = 0;
  do {
    puVar5 = param_3 + iVar3;
    iVar3 = iVar3 + 1;
    *puVar5 = 0;
  } while (iVar3 != 200);
  for (uVar4 = 0; uVar4 < param_2; uVar4 = uVar4 + 1) {
    *param_3 = auStack_28[*param_1 >> 4];
    bVar1 = *param_1;
    param_1 = param_1 + 1;
    uVar2 = auStack_28[bVar1 & 0xf];
    param_3[2] = 0x20;
    param_3[1] = uVar2;
    param_3 = param_3 + 3;
  }
  return;
}

