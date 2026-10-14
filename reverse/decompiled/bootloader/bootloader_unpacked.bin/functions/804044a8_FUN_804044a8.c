/* FUN_804044a8 @ 804044a8 */

/* WARNING: Removing unreachable block (ram,0x804045b8) */
/* WARNING: Removing unreachable block (ram,0x804045e4) */
/* WARNING: Removing unreachable block (ram,0x804045e8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_804044a8(undefined4 param_1,undefined4 param_2,int param_3)

{
  do {
  } while ((_DAT_bb804418 & 0x80000) == 0);
  if (param_3 == 0) {
    _DAT_bb804418 = _DAT_bb804418 | 0x40000;
    FUN_804077a4(s_Assertion_fail_at_file_8040d7b4);
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  do {
  } while ((_DAT_bb804d00 & 1) != 0);
  do {
  } while( true );
}

