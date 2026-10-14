/* range_pool_empty @ 0040a974 */

void range_pool_empty(void)

{
  undefined4 uVar1;
  
  while (DAT_0046dfb0 != 0) {
    uVar1 = range_pool_pop();
    (*(code *)PTR_free_0046a680)(uVar1);
  }
  return;
}

