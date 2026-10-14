/* allocNewBuffer @ 004120d0 */

undefined4 allocNewBuffer(int param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = (*(code *)PTR_malloc_0046ab14)(*(int *)(param_1 + 0x8cc) * 2 + 1);
  uVar3 = 0xffffffff;
  if (iVar2 != 0) {
    (*(code *)PTR_memcpy_0046ab5c)
              (iVar2,*(undefined4 *)(param_1 + 0x8d0),*(undefined4 *)(param_1 + 0x8cc));
    puVar1 = PTR_free_0046a680;
    *(int *)(param_1 + 0x8cc) = *(int *)(param_1 + 0x8cc) << 1;
    (*(code *)puVar1)(*(undefined4 *)(param_1 + 0x8d0));
    *(int *)(param_1 + 0x8d0) = iVar2;
    uVar3 = 0;
  }
  return uVar3;
}

