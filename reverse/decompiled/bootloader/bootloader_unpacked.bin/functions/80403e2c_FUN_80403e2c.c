/* FUN_80403e2c @ 80403e2c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_80403e2c(undefined4 param_1,uint param_2)

{
  undefined4 uVar1;
  uint uVar2;
  int *piVar3;
  uint *puVar4;
  int iVar5;
  
  iVar5 = DAT_8040fd30 + 1;
  if (iVar5 == DAT_8040fd14) {
    iVar5 = 0;
  }
  if (iVar5 == DAT_8040fd34) {
    FUN_804077a4(s_Tx_Desc_full__8040d7cc);
    uVar1 = 0xffffffff;
  }
  else {
    FUN_80406a54(0xa0410664,param_1,param_2);
    uVar2 = *(uint *)(DAT_8040fd04 + DAT_8040fd30 * 4);
    if ((uVar2 & 1) != 0) {
      FUN_804077a4(s_Assertion_fail_at_file_8040d7b4);
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
    piVar3 = (int *)(uVar2 & 0xfffffffc);
    if (param_2 < 0x3c) {
      *(undefined2 *)(piVar3 + 1) = 0x40;
    }
    else {
      *(short *)(piVar3 + 1) = (short)param_2 + 4;
    }
    *(undefined2 *)(*piVar3 + 8) = *(undefined2 *)(piVar3 + 1);
    *(undefined2 *)(*piVar3 + 0x14) = *(undefined2 *)(piVar3 + 1);
    *(undefined4 *)(*piVar3 + 0xc) = 0xa0410664;
    *(undefined4 *)(*piVar3 + 0x10) = 0xa0410664;
    piVar3[5] = piVar3[5] & 0xfeffffff;
    *(undefined1 *)((int)piVar3 + 0xf) = 0x3f;
    puVar4 = (uint *)(DAT_8040fd04 + DAT_8040fd30 * 4);
    *puVar4 = *puVar4 | 1;
    _DAT_b8010000 = _DAT_b8010000 | 0x800000;
    DAT_8040fd3c = DAT_8040fd3c + 1;
    uVar1 = 0;
    DAT_8040fd30 = iVar5;
  }
  return uVar1;
}

