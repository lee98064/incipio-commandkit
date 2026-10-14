/* FUN_00435bc0 @ 00435bc0 */

undefined4 * FUN_00435bc0(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(*(code *)PTR_calloc_006148c0)(0x28,1);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = param_1;
    puVar1[3] = 1;
    puVar1[1] = PTR_LAB_00612344 + 0x5b3c;
  }
  return puVar1;
}

