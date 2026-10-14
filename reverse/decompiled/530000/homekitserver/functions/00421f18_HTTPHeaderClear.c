/* HTTPHeaderClear @ 00421f18 */

void HTTPHeaderClear(int param_1)

{
  *(undefined4 *)(param_1 + 0x100) = 0;
  *(undefined4 *)(param_1 + 0x10c) = 0;
  if (*(int *)(param_1 + 0x104) != 0) {
    (*(code *)PTR_free_0061286c)();
    *(undefined4 *)(param_1 + 0x104) = 0;
  }
  if (*(int *)(param_1 + 0x108) != 0) {
    (*(code *)PTR_free_0061286c)();
    *(undefined4 *)(param_1 + 0x108) = 0;
  }
  return;
}

