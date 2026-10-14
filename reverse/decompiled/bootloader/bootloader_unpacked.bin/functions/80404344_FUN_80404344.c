/* FUN_80404344 @ 80404344 */

/* WARNING: Removing unreachable block (ram,0x80404454) */
/* WARNING: Removing unreachable block (ram,0x80404484) */
/* WARNING: Removing unreachable block (ram,0x80404494) */
/* WARNING: Removing unreachable block (ram,0x804044a0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80404344(undefined4 param_1,undefined4 param_2,int param_3)

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

