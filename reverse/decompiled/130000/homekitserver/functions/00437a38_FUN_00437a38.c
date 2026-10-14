/* FUN_00437a38 @ 00437a38 */

void FUN_00437a38(int param_1,int param_2)

{
  *(undefined4 *)(*(int *)(param_1 + 0x28) + param_2 * 0x14) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x28) + param_2 * 0x14 + 4) = 1;
  (*(code *)PTR_json_object_put_00611694)
            (*(undefined4 *)(*(int *)(param_1 + 0x28) + param_2 * 0x14 + 0xc));
  *(undefined4 *)(*(int *)(param_1 + 0x28) + param_2 * 0x14 + 0xc) = 0;
  (*(code *)PTR_free_006119dc)(*(undefined4 *)(*(int *)(param_1 + 0x28) + param_2 * 0x14 + 0x10));
  *(undefined4 *)(*(int *)(param_1 + 0x28) + param_2 * 0x14 + 0x10) = 0;
  return;
}

