/* FUN_00411d58 @ 00411d58 */

undefined4 FUN_00411d58(undefined4 param_1)

{
  undefined *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined *puVar4;
  
  puVar1 = PTR_root_temp_0046a758;
  do {
    puVar4 = puVar1;
    puVar1 = *(undefined **)(puVar4 + 4);
  } while (puVar1 != (undefined *)0x0);
  puVar2 = (undefined4 *)(*(code *)PTR_malloc_0046ab14)(8);
  uVar3 = 0xffffffff;
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = param_1;
    puVar2[1] = 0;
    uVar3 = 0;
    *(undefined4 **)(puVar4 + 4) = puVar2;
  }
  return uVar3;
}

