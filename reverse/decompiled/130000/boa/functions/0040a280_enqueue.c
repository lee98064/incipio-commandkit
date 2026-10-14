/* enqueue @ 0040a280 */

void enqueue(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if (*param_1 != 0) {
    *(int *)(*param_1 + 0x3280) = param_2;
    iVar1 = *param_1;
  }
  *(undefined4 *)(param_2 + 0x3280) = 0;
  *(int *)(param_2 + 0x327c) = iVar1;
  *param_1 = param_2;
  return;
}

