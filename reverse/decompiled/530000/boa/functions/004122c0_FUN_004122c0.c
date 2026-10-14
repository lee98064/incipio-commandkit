/* FUN_004122c0 @ 004122c0 */

void FUN_004122c0(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = *(undefined4 **)(PTR_root_temp_0046a758 + 4);
  *(undefined4 *)(PTR_root_temp_0046a758 + 4) = 0;
  while (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)puVar1[1];
    (*(code *)PTR_free_0046a680)(*puVar1);
    (*(code *)PTR_free_0046a680)(puVar1);
    puVar1 = puVar2;
  }
  return;
}

