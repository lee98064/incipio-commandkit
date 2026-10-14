/* HTTPHeaderClear @ 00421d94 */

void HTTPHeaderClear(int param_1)

{
  *(undefined4 *)(param_1 + 0x100) = 0;
  *(undefined4 *)(param_1 + 0x10c) = 0;
  if (*(int *)(param_1 + 0x104) != 0) {
    (*(code *)PTR_free_006119dc)();
    *(undefined4 *)(param_1 + 0x104) = 0;
  }
  if (*(int *)(param_1 + 0x108) != 0) {
    (*(code *)PTR_free_006119dc)();
    *(undefined4 *)(param_1 + 0x108) = 0;
  }
  return;
}

