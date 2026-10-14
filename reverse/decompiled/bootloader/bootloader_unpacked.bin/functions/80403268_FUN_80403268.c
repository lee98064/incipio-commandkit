/* FUN_80403268 @ 80403268 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_80403268(void)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  FUN_80403214();
  FUN_80402fc8();
  _DAT_bb804234 = 0x7f;
  FUN_80402b00(3,0x40);
  FUN_80402b00(4,8);
  _DAT_b8000044 = 0;
  _DAT_bb804104 = _DAT_bb804104 & 0xfffffff7;
  _DAT_bb804108 = _DAT_bb804108 & 0xfffffff7 | 0x4000009;
  _DAT_bb80410c = _DAT_bb80410c & 0xfffffff7 | 0x8000009;
  _DAT_bb804110 = _DAT_bb804110 & 0xfffffff7 | 0xc000009;
  _DAT_bb804114 = _DAT_bb804114 & 0xfffffff7 | 0x10000009;
  FUN_804077a4(s_P0phymode__02x___s_phy_8040d790,1,s_embedded_8040d7a8);
  _DAT_bb804104 = _DAT_bb804104 | 9;
  if ((_DAT_b800000c & 0xf) != 0xd) goto LAB_80403588;
  iVar2 = FUN_80402a84();
  if (iVar2 == 1) {
    _DAT_bb804104 = _DAT_bb804104 | 9;
    goto LAB_80403588;
  }
  _DAT_bb804104 = _DAT_bb804104 | 0x18002009;
  uVar3 = FUN_80402ab4();
  if (uVar3 == 0) {
    _DAT_bb80414c = _DAT_bb80414c & 0xfe7fffff | 0x1000000;
LAB_804034f0:
    _DAT_bb804104 = _DAT_bb804104 & 0xfd03ffff | 0x28c0000;
  }
  else {
    if (uVar3 - 1 < 2) {
      _DAT_bb80414c = _DAT_bb80414c & 0xfe7fffff | 0x800000;
      if (uVar3 != 3) goto LAB_804034e4;
LAB_804034a8:
      iVar2 = FUN_80402ae4();
      uVar4 = FUN_80402ad0();
      _DAT_bb80414c = uVar4 | _DAT_bb80414c & 0xffffffec | iVar2 << 4;
    }
    else {
      if (uVar3 == 3) {
        _DAT_bb80414c = _DAT_bb80414c & 0xfe7fffff;
        goto LAB_804034a8;
      }
LAB_804034e4:
      if (uVar3 < 2) goto LAB_804034f0;
    }
    if (uVar3 - 2 < 2) {
      _DAT_bb804104 = _DAT_bb804104 & 0xfd03ffff | 0x2940000;
      _DAT_bb804000 = _DAT_bb804000 | 0x1000;
    }
  }
  _DAT_bb804100 = _DAT_bb804100 | 1;
  _DAT_bb80414c = _DAT_bb80414c | 0x40;
LAB_80403588:
  _DAT_bb804a08 = 0x80008;
  _DAT_bb804a0c = 0x80008;
  _DAT_bb804a10 = 0x80008;
  _DAT_bb804a14 = 0x80008;
  _DAT_bb804410 = 1;
  _DAT_bb804754 = 0x1249;
  _DAT_bb804204 = _DAT_bb804204 | 1;
  _DAT_b8000040 = _DAT_b8000040 & 0xffff70e7;
  _DAT_b8000044 = _DAT_b8000044 & 0xfffc4924;
  _DAT_bb804300 = 0x200000;
  iVar2 = 1;
  do {
    FUN_8040311c(iVar2,iVar2 + -1);
    bVar1 = iVar2 != 6;
    iVar2 = iVar2 + 1;
  } while (bVar1);
  FUN_80402b88(&DAT_8040e8f0,0);
  FUN_80402b88(&DAT_8040efb0,1);
  _DAT_bb804428 = 3;
  return 0;
}

