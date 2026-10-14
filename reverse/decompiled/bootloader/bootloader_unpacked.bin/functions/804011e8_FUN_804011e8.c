/* FUN_804011e8 @ 804011e8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_804011e8(void)

{
  DAT_8040ee5c = 0xbfc00000;
  _DAT_b8003000 = 0;
  setCopReg(0,Status,(Status | 1) ^ 1);
  FUN_80406454();
  FUN_804077a4(s_reboot________8040d260);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

