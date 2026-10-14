/* FUN_80403698 @ 80403698 */

void FUN_80403698(void)

{
  int iVar1;
  uint *puVar2;
  
  do {
    puVar2 = (uint *)(DAT_8040fd04 + DAT_8040fd34 * 4);
    do {
      if (DAT_8040fd30 == DAT_8040fd34) {
        return;
      }
      iVar1 = DAT_8040fd34 + 1;
      if ((*puVar2 & 1) != 0) {
        return;
      }
      puVar2 = puVar2 + 1;
      DAT_8040fd34 = iVar1;
    } while (DAT_8040fd14 != iVar1);
    DAT_8040fd34 = 0;
  } while( true );
}

