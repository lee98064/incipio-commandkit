/* FUN_00417310 @ 00417310 */

void FUN_00417310(void)

{
  undefined4 *puVar1;
  code *pcVar2;
  
  puVar1 = (undefined4 *)(PTR_DAT_0042b078 + -0x6000);
  while( true ) {
    pcVar2 = (code *)*puVar1;
    puVar1 = puVar1 + -1;
    if (pcVar2 == (code *)0xffffffff) break;
    (*pcVar2)();
  }
  return;
}

