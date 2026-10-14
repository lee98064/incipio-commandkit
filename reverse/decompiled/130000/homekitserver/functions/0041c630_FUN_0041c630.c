/* FUN_0041c630 @ 0041c630 */

void FUN_0041c630(int *param_1)

{
  if (*param_1 != 0) {
    if (*(int *)(*param_1 + 0xc) != 0) {
      (*(code *)PTR_free_006119dc)();
    }
    if (*(int *)(*param_1 + 0x10) != 0) {
      (*(code *)PTR_free_006119dc)();
    }
    (*(code *)PTR_free_006119dc)(*param_1);
    *param_1 = 0;
  }
  return;
}

