/* FUN_0041c7c0 @ 0041c7c0 */

void FUN_0041c7c0(int *param_1)

{
  if (*param_1 != 0) {
    if (*(int *)(*param_1 + 0xc) != 0) {
      (*(code *)PTR_free_0061286c)();
    }
    if (*(int *)(*param_1 + 0x10) != 0) {
      (*(code *)PTR_free_0061286c)();
    }
    (*(code *)PTR_free_0061286c)(*param_1);
    *param_1 = 0;
  }
  return;
}

