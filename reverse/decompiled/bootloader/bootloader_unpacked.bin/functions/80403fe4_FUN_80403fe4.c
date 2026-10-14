/* FUN_80403fe4 @ 80403fe4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_80403fe4(undefined4 *param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  uint *puVar4;
  uint uVar5;
  int *piVar6;
  byte *pbVar7;
  
  uVar1 = *(uint *)(DAT_8040fcd4 + DAT_8040fd28 * 4);
  if ((uVar1 & 1) != 0) {
    return 0xffffffff;
  }
  piVar6 = (int *)(uVar1 & 0xfffffffc);
  DAT_8040fd38 = DAT_8040fd38 + 1;
  pbVar7 = *(byte **)(*piVar6 + 0xc);
  if (((*pbVar7 & 1) == 0) && (iVar2 = FUN_80406a80(pbVar7,&DAT_8040e8f0,6), iVar2 != 0)) {
    iVar2 = FUN_80406a80(pbVar7,&DAT_8040efb0,6);
    uVar3 = 0xffffffff;
    if (iVar2 != 0) goto LAB_804040bc;
  }
  *param_1 = pbVar7;
  *param_2 = *(ushort *)(piVar6 + 1) - 4;
  uVar3 = 0;
LAB_804040bc:
  if (DAT_8040e910 == 0) {
    iVar2 = DAT_8040fd28 + -1;
    if (iVar2 < 0) {
      iVar2 = DAT_8040fcec + -1;
    }
    puVar4 = (uint *)(DAT_8040fcd4 + iVar2 * 4);
    uVar1 = *puVar4;
    uVar5 = *DAT_8040fcd0;
    iVar2 = *(int *)(uVar1 & 0xfffffffc);
    *puVar4 = uVar1 | 1;
    DAT_8040fcd0[(iVar2 - (uVar5 & 0xfffffffc)) / 0x18] =
         DAT_8040fcd0[(iVar2 - (uVar5 & 0xfffffffc)) / 0x18] | 1;
  }
  else {
    DAT_8040e910 = 0;
  }
  DAT_8040fd28 = DAT_8040fd28 + 1;
  if (DAT_8040fd28 == DAT_8040fcec) {
    DAT_8040fd28 = 0;
  }
  DAT_8040fd2c = DAT_8040fd2c + 1;
  if (DAT_8040fd2c == DAT_8040ee68) {
    DAT_8040fd2c = 0;
  }
  if ((_DAT_b801002c & 0x7e0000) != 0) {
    _DAT_b8010028 = _DAT_b8010028 | 0x7e0000;
    _DAT_b801002c = 0x7e0000;
  }
  return uVar3;
}

