/* FUN_8040c000 @ 8040c000 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8040c000(void)

{
  _DAT_b8001040 = 0x3fffffff;
  FUN_80407318(1000);
  _DAT_b8001040 = _DAT_b8001040 | 0x80000000;
  FUN_80407318(1000);
  _DAT_b8001040 = _DAT_b8001040 | 0x80000000;
  _DAT_b8003000 = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

