/* FUN_00410750 @ 00410750 */

void FUN_00410750(void)

{
  undefined4 *puVar1;
  code *pcVar2;
  
  puVar1 = (undefined4 *)(PTR_DAT_00423438 + 0x33b4);
  while( true ) {
    pcVar2 = (code *)*puVar1;
    puVar1 = puVar1 + -1;
    if (pcVar2 == (code *)0xffffffff) break;
    (*pcVar2)();
  }
  return;
}

