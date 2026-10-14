/* range_pool_pop @ 0040a598 */

void range_pool_pop(void)

{
  undefined4 *puVar1;
  
  if (DAT_0046dfb0 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)(*(code *)PTR_malloc_0046ab14)(0xc);
  }
  else {
    puVar1 = DAT_0046dfb0;
    DAT_0046dfb0 = (undefined4 *)DAT_0046dfb0[2];
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  return;
}

