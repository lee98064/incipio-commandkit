/* FUN_80408c7c @ 80408c7c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80408c7c(int param_1,int param_2,int param_3)

{
  uint uVar1;
  
  uVar1 = _DAT_b8000008;
  if (param_1 == 0) {
    _DAT_b8000010 = _DAT_b8000010 | 0x47000;
    FUN_80407318(10);
    _DAT_b8b0100c = 8;
  }
  else {
    if (param_1 != 1) {
      _DAT_b8000010 = _DAT_b8000010 | 0x43000;
      return;
    }
    _DAT_b8000010 = _DAT_b8000010 | 0x53000;
    FUN_80407318(10);
    _DAT_b8b2100c = 0x10;
  }
  if (param_3 == 0) {
    FUN_80407318(10);
    FUN_80408870(param_1);
    FUN_80407318(10);
  }
  else {
    if (DAT_8040ecd0 == 0) {
      FUN_804077a4(s_Do_MDIO_RESET_8040dd24);
    }
    FUN_80407318(10);
    FUN_80408830(param_1);
    FUN_80407318(10);
    FUN_80408870(param_1);
    FUN_80407318(10);
    FUN_804088c4(param_1,0,0xd087);
    FUN_804088c4(param_1,1,3);
    FUN_804088c4(param_1,2,0x4d18);
    if ((uVar1 >> 0x19 & 1) == 0) {
      FUN_804088c4(param_1,6,0xf848);
    }
    else {
      FUN_804088c4(param_1,5,0xbcb);
      FUN_804088c4(param_1,6,0x148);
    }
    FUN_804088c4(param_1,7,0x31ff);
    FUN_804088c4(param_1,8,0x18d6);
    FUN_804088c4(param_1,9,0x539c);
    FUN_804088c4(param_1,10,0x20eb);
    FUN_804088c4(param_1,0xd,0x1464);
    FUN_804088c4(param_1,0xb,0x711);
    FUN_804088c4(param_1,0xf,0xf0f);
    FUN_804088c4(param_1,0x19,0xfce0);
    FUN_804088c4(param_1,0x1a,0x7e4f);
    FUN_804088c4(param_1,0x1b,0xfc01);
    FUN_804088c4(param_1,0x1e,0xc280);
    if (param_2 == 1) {
      FUN_804088c4(param_1,6,0xfc48);
      FUN_804088c4(param_1,0x1a,0x7e50);
      FUN_804088c4(param_1,0x1b,0xfc00);
    }
  }
  FUN_80407318(10);
  FUN_80408870(param_1);
  _DAT_b8000010 = _DAT_b8000010 & 0xfbffffff;
  FUN_80407318(300);
  _DAT_b8000010 = _DAT_b8000010 | 0x4000000;
  FUN_80408b04(param_1);
  return;
}

