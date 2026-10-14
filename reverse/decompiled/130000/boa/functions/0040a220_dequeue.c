/* dequeue @ 0040a220 */

void dequeue(int *param_1,int param_2)

{
  if (*param_1 == param_2) {
    *param_1 = *(int *)(param_2 + 0x327c);
  }
  if (*(int *)(param_2 + 0x3280) != 0) {
    *(undefined4 *)(*(int *)(param_2 + 0x3280) + 0x327c) = *(undefined4 *)(param_2 + 0x327c);
  }
  if (*(int *)(param_2 + 0x327c) != 0) {
    *(undefined4 *)(*(int *)(param_2 + 0x327c) + 0x3280) = *(undefined4 *)(param_2 + 0x3280);
  }
  *(undefined4 *)(param_2 + 0x3280) = 0;
  *(undefined4 *)(param_2 + 0x327c) = 0;
  return;
}

