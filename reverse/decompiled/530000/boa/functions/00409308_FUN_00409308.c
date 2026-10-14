/* FUN_00409308 @ 00409308 */

void FUN_00409308(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar2 = 0;
  do {
    puVar1 = (undefined4 *)*param_1;
    while (puVar1 != (undefined4 *)0x0) {
      puVar3 = (undefined4 *)puVar1[2];
      (*(code *)PTR_free_0046a680)(*puVar1);
      (*(code *)PTR_free_0046a680)(puVar1[1]);
      (*(code *)PTR_free_0046a680)(puVar1);
      puVar1 = puVar3;
    }
    iVar2 = iVar2 + 1;
    *param_1 = 0;
    param_1 = param_1 + 1;
  } while (iVar2 != 0x2f);
  return;
}

