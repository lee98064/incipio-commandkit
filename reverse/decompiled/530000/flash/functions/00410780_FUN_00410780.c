/* FUN_00410780 @ 00410780 */

void FUN_00410780(void)

{
  undefined4 *puVar1;
  code *pcVar2;
  
  puVar1 = (undefined4 *)(PTR_DAT_00423468 + 0x33e4);
  while( true ) {
    pcVar2 = (code *)*puVar1;
    puVar1 = puVar1 + -1;
    if (pcVar2 == (code *)0xffffffff) break;
    (*pcVar2)();
  }
  return;
}

