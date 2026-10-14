/* json_object_get @ 00434c30 */

int json_object_get(int param_1)

{
  if (param_1 != 0) {
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  }
  return param_1;
}

