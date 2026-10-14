/* FUN_804090d0 @ 804090d0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_804090d0(void)

{
  if ((_DAT_b8003004 & 0x8000000) == 0) {
    FUN_804077a4(s_Fail__ISR__x_bit__d_is_not_1_8040dd3c,_DAT_b8003004,0x1b);
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  if ((_DAT_b8000004 & 2) == 0) {
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  _DAT_b8000004 = 2;
  _DAT_b8003000 = _DAT_b8003000 & 0xf7ffffff;
  return;
}

