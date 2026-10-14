/* FUN_8040a478 @ 8040a478 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_8040a478(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  code *local_10 [2];
  
  if ((param_1 < 1) || (iVar1 = FUN_80406e68(*param_2,local_10), iVar1 != 0)) {
    FUN_804077a4(s____Jump_to_address__X_8040e294,local_10[0]);
    _DAT_b8003000 = 0;
    setCopReg(0,Status,(Status | 1) ^ 1);
    if (local_10[0] == (code *)0xbfc00000) {
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
    _DAT_bb804104 = _DAT_bb804104 & 0xfffffffe;
    _DAT_bb804108 = _DAT_bb804108 & 0xfffffffe;
    _DAT_bb80410c = _DAT_bb80410c & 0xfffffffe;
    _DAT_bb804110 = _DAT_bb804110 & 0xfffffffe;
    _DAT_bb804114 = _DAT_bb804114 & 0xfffffffe;
    FUN_80406454();
    uVar2 = (*local_10[0])();
  }
  else {
    FUN_804077a4(s_Invalid_Address_HEX__value__8040e274);
    uVar2 = 0;
  }
  return uVar2;
}

