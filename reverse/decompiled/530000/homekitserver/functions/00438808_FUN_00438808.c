/* FUN_00438808 @ 00438808 */

void FUN_00438808(int param_1,int param_2)

{
  *(undefined4 *)(*(int *)(param_1 + 0x28) + param_2 * 0x14) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x28) + param_2 * 0x14 + 4) = 1;
  (*(code *)PTR_json_object_put_00612524)
            (*(undefined4 *)(*(int *)(param_1 + 0x28) + param_2 * 0x14 + 0xc));
  *(undefined4 *)(*(int *)(param_1 + 0x28) + param_2 * 0x14 + 0xc) = 0;
  (*(code *)PTR_free_0061286c)(*(undefined4 *)(*(int *)(param_1 + 0x28) + param_2 * 0x14 + 0x10));
  *(undefined4 *)(*(int *)(param_1 + 0x28) + param_2 * 0x14 + 0x10) = 0;
  return;
}

