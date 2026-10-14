/* FUN_00434df0 @ 00434df0 */

undefined4 * FUN_00434df0(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(*(code *)PTR_calloc_00613a18)(0x28,1);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = param_1;
    puVar1[3] = 1;
    puVar1[1] = PTR_LAB_006114b4 + 0x4d6c;
  }
  return puVar1;
}

